var express = require('express');
var queryString = require('querystring');
var bodyParser = require('body-parser');
var cookieParser = require('cookie-parser');

var loadUser = function(req, res, next) {
  if (req.cookies.userName)
    req.user = {
      name: req.cookies.userName
    };
  next();
};

var ensureLogin = function(req, res, next) {
  console.log('user:', req.user);
  if (req.user) next();
  else res.redirect('/login.html');
};

var app = express();

app.use(express.static('./public'));
app.use(cookieParser());
app.use(bodyParser.urlencoded({
  extended: true
}));
app.use(loadUser);

app.get('/', function(req, res) {
  res.redirect('./login.html');
});

app.use('/guestBook', ensureLogin, function(req, res) {
  res.send('./comment.html')
});

module.exports = app;

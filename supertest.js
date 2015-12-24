var request = require('supertest'),
  express = require('express');

var app = express();

app.get('/user', function(req, res) {
  res.status(200).json({
    name: 'Saran'
  });
});
//
// request(app)
//   .get('/user')
//   .expect('Content-Type', /json/)
//   .expect('Content-Length', '20')
//   .expect(200)
//   .end(function(err, res){
//     if (err) throw err;
// });

// describe('GET /user', function() {
//   it('respond with json', function(done) {
//     request(app)
//       .get('/user')
//       .set('Accept', 'application/json')
//       .expect('Content-Type', /json/)
//       .expect(200, done);
//   })
// })

describe('GET /users', function(){
  it('respond with json', function(done){
    request(app)
      .get('/user')
      .set('Accept', 'application/json')
      .expect(200)
      .end(function(err, res){
        if (err) return done(err);
        done();
      });
  });
});

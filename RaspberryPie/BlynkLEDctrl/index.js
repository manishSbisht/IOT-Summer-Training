var Blynk = require('blynk-library');
var AUTH = '74a25d45dd2049c09e9d4b82d7d78f8e';

var blynk = new Blynk.Blynk(AUTH);
var v1 = new blynk.VirtualPin(1);
var v9 = new blynk.VirtualPin(9);

v1.on('write', function(param){
	console.log('V1: ', param[0]);
});

v9.on('read', function(){v9.write(new Date().getSeconds());
});


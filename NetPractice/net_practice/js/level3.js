var _0xfbc2=['90huaShJ','255.255.0.0','true','1MSuslB','std','104.198.[a].[260-299]b','reach','host.png','0,200','switch','hidden','1802358qTTkzY','0,0','430332uGynFL','-150,150','2773437FwCTgj','/32','255.255.255.128','client','753098FkccNk','511041IXQKTL','8738tXjZJX','335659ObwQBv','104.198.[1-254]a.125','false'];var _0x49e23b=_0x3b9d;(function(_0x595c80,_0x2df7a5){var _0x1a576b=_0x3b9d;while(!![]){try{var _0x18319e=parseInt(_0x1a576b(0x7e))+parseInt(_0x1a576b(0x76))*parseInt(_0x1a576b(0x89))+-parseInt(_0x1a576b(0x80))+parseInt(_0x1a576b(0x88))*parseInt(_0x1a576b(0x73))+parseInt(_0x1a576b(0x86))+parseInt(_0x1a576b(0x87))+-parseInt(_0x1a576b(0x82));if(_0x18319e===_0x2df7a5)break;else _0x595c80['push'](_0x595c80['shift']());}catch(_0x375bc6){_0x595c80['push'](_0x595c80['shift']());}}}(_0xfbc2,0xf06e7));function _0x3b9d(_0x58b2f6,_0x4e0934){return _0x3b9d=function(_0xfbc28f,_0x3b9dc6){_0xfbc28f=_0xfbc28f-0x71;var _0x2f34d0=_0xfbc2[_0xfbc28f];return _0x2f34d0;},_0x3b9d(_0x58b2f6,_0x4e0934);}var level=0x3,hosts=[{'id':'A','type':_0x49e23b(0x85),'name':'Host\x20A','geometry':'200x220+700+800','img':_0x49e23b(0x7a),'labelpos':_0x49e23b(0x7b)},{'id':'B','type':'client','name':'Host\x20B','geometry':'200x220+600+200','img':_0x49e23b(0x7a),'labelpos':'180,30'},{'id':'C','type':'client','name':'Host\x20C','geometry':'200x200+200+500','img':_0x49e23b(0x7a),'labelpos':_0x49e23b(0x81)},{'id':'S','type':_0x49e23b(0x7c),'name':'Switch-1','geometry':'150x150+600+500','img':'switch.png','labelpos':'80,110'}],routes=[],ifs=[{'if':'A1','hid':'A','ip':_0x49e23b(0x71),'mask':'255.255.255.0','ip_edit':_0x49e23b(0x72),'mask_edit':_0x49e23b(0x75),'type':_0x49e23b(0x77),'pos':'0,-50'},{'if':'B1','hid':'B','ip':'127.168.42.42','mask':_0x49e23b(0x74),'ip_edit':_0x49e23b(0x75),'mask_edit':_0x49e23b(0x75),'type':_0x49e23b(0x77),'pos':'100,200'},{'if':'C1','hid':'C','ip':_0x49e23b(0x78),'mask':_0x49e23b(0x84),'ip_edit':_0x49e23b(0x75),'mask_edit':_0x49e23b(0x72),'type':_0x49e23b(0x77),'pos':'190,10'},{'if':'S1','hid':'S','ip':'0.0.0.0','mask':_0x49e23b(0x83),'ip_edit':_0x49e23b(0x72),'mask_edit':'false','pos':_0x49e23b(0x7f),'type':_0x49e23b(0x7d)}],links=[{'if1':'C1','if2':'S1'},{'if1':'S1','if2':'A1'},{'if1':'S1','if2':'B1'}],goals=[{'id':'1','type':_0x49e23b(0x79),'id1':'A','id2':'B'},{'id':'2','type':_0x49e23b(0x79),'id1':'A','id2':'C'},{'id':'3','type':_0x49e23b(0x79),'id1':'B','id2':'C'}];
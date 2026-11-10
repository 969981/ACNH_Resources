
char * FUN_001686c8(int param_1)

{
  switch(param_1) {
  case -0x218:
    return 
    "When a local endpoint expects to receive SETTINGS frame, it receives an other type of frame";
  case -0x217:
    return "Cancel";
  case -0x216:
    return "Internal error";
  case -0x215:
    return "Stream was refused";
  case -0x214:
    return "Violation in HTTP messaging rule";
  case -0x213:
    return "Invalid HTTP header field was received";
  case -0x212:
    return "The current session is closing";
  case -0x211:
    return "DATA or HEADERS frame has already been submitted for the stream";
  case -0x210:
    return "Server push is disabled by peer";
  case -0x20f:
    return "Too many inflight SETTINGS";
  case -0x20e:
    return "Callback was paused by the application";
  case -0x20d:
    return "Insufficient buffer size given to function";
  case -0x20c:
    return "Flow control error";
  case -0x20b:
    return "Header compression/decompression error";
  case -0x20a:
    return "The length of the frame is invalid";
  case -0x209:
    return "The user callback function failed due to the temporal error";
  case -0x208:
    goto switchD_001686e8_caseD_fffffdf8;
  case -0x207:
    return "Invalid state";
  case -0x206:
    return "Invalid header block";
  case -0x205:
    return "GOAWAY has already been sent";
  case -0x204:
    return "request HEADERS is not allowed";
  case -0x203:
    return "Another DATA frame has already been deferred";
  case -0x202:
    return "Invalid stream state";
  case -0x201:
    return "Stream ID is invalid";
  case -0x200:
    return "The transmission is not allowed for this stream";
  case -0x1ff:
    return "Stream is closing";
  case -0x1fe:
    return "Stream was already closed or invalid";
  case -0x1fd:
    return "No more Stream ID available";
  case -0x1fc:
    return "Data transfer deferred";
  case -0x1fb:
    return "EOF";
  case -0x1fa:
    return "Invalid frame octets";
  case -0x1f9:
    return "Protocol error";
  case -0x1f8:
    return "Operation would block";
  case -0x1f7:
    return "Unsupported SPDY version";
  case -0x1f6:
    return "Out of buffer space";
  case -0x1f5:
    return "Invalid argument";
  default:
    switch(param_1) {
    case -0x388:
      return "Flooding was detected in this HTTP/2 session, and it must be closed";
    case -0x387:
      return "Received bad client magic byte string";
    case -0x386:
      return "The user callback function failed";
    case -0x385:
      return "Out of memory";
    }
    if (param_1 == 0) {
      return "Success";
    }
switchD_001686e8_caseD_fffffdf8:
    return "Unknown error code";
  }
}



undefined8 FUN_001874a4(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 < -0x1fff0000) {
    switch(param_1) {
    case -0x20000000:
      return 0x386;
    case -0x1fffffff:
      return 0x387;
    case -0x1ffffffe:
      return 0x388;
    case -0x1ffffffd:
      return 0x389;
    case -0x1ffffffc:
    case -0x1ffffffb:
    case -0x1ffffffa:
    case -0x1ffffff9:
    case -0x1ffffff6:
    case -0x1ffffff5:
    case -0x1ffffff3:
      break;
    case -0x1ffffff8:
      return 0x38e;
    case -0x1ffffff7:
      return 0x38f;
    case -0x1ffffff4:
      return 0x392;
    case -0x1ffffff2:
      return 0x394;
    case -0x1ffffff1:
      return 0x395;
    case -0x1ffffff0:
      return 0x396;
    case -0x1fffffef:
      return 0x397;
    case -0x1fffffee:
      return 0x398;
    case -0x1fffffed:
      return 0x399;
    case -0x1fffffec:
      return 0x39a;
    case -0x1fffffeb:
      return 0x39b;
    case -0x1fffffea:
      return 0x39c;
    case -0x1fffffe9:
      return 0x39d;
    case -0x1fffffe8:
      return 0x39e;
    case -0x1fffffe7:
      return 0x39f;
    case -0x1fffffe6:
      return 0x3a0;
    case -0x1fffffe5:
      return 0x3a1;
    case -0x1fffffe4:
      return 0x3a2;
    default:
      switch(param_1) {
      case -0x5ffffffc:
        return 0x38a;
      case -0x5ffffffb:
        return 0x38b;
      case -0x5ffffffa:
        return 0x38c;
      case -0x5ffffff9:
        return 0x38d;
      case -0x5ffffff8:
      case -0x5ffffff7:
      case -0x5ffffff4:
      case -0x5ffffff2:
      case -0x5ffffff1:
      case -0x5ffffff0:
      case -0x5fffffef:
      case -0x5fffffee:
      case -0x5fffffed:
      case -0x5fffffec:
      case -0x5fffffeb:
      case -0x5fffffea:
      case -0x5fffffe9:
      case -0x5fffffe8:
      case -0x5fffffe7:
      case -0x5fffffe6:
      case -0x5fffffe5:
      case -0x5fffffe4:
        break;
      case -0x5ffffff6:
        return 0x390;
      case -0x5ffffff5:
        return 0x391;
      case -0x5ffffff3:
        return 0x393;
      case -0x5fffffe3:
        return 0x3a3;
      default:
        switch(param_1) {
        case -0x5ffefffd:
          return 0x3ba;
        case -0x5ffefffc:
          return 0x3bb;
        case -0x5ffefff1:
          return 0x3c6;
        case -0x5ffeffe5:
          uVar1 = 0x3d2;
        }
      }
    }
  }
  else {
    switch(param_1) {
    case -0x1fff0000:
      return 0x3b7;
    case -0x1ffeffff:
      return 0x3b8;
    case -0x1ffefffe:
      return 0x3b9;
    case -0x1ffefffd:
    case -0x1ffefffc:
    case -0x1ffefff1:
    case -0x1ffeffec:
      break;
    case -0x1ffefffb:
      return 0x3bc;
    case -0x1ffefffa:
      return 0x3bd;
    case -0x1ffefff9:
      return 0x3be;
    case -0x1ffefff8:
      return 0x3bf;
    case -0x1ffefff7:
      return 0x3c0;
    case -0x1ffefff6:
      return 0x3c1;
    case -0x1ffefff5:
      return 0x3c2;
    case -0x1ffefff4:
      return 0x3c3;
    case -0x1ffefff3:
      return 0x3c4;
    case -0x1ffefff2:
      return 0x3c5;
    case -0x1ffefff0:
      return 0x3c7;
    case -0x1ffeffef:
      return 0x3c8;
    case -0x1ffeffee:
      return 0x3c9;
    case -0x1ffeffed:
      return 0x3ca;
    case -0x1ffeffeb:
      return 0x3cc;
    case -0x1ffeffea:
      return 0x3cd;
    case -0x1ffeffe9:
      return 0x3ce;
    case -0x1ffeffe8:
      return 0x3cf;
    case -0x1ffeffe7:
      return 0x3d0;
    default:
      if (param_1 == -0x1ff00000) {
        return 0x385;
      }
      if (param_1 == 0x60010014) {
        return 0x3cb;
      }
    }
  }
  return uVar1;
}


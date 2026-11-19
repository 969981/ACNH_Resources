
undefined8 FUN_038f612c(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 < 0x1201) {
    if (param_1 < 0xa01) {
      switch(param_1) {
      case 0x201:
        return 1;
      case 0x202:
        return 2;
      case 0x203:
        return 3;
      case 0x204:
        return 4;
      case 0x205:
      case 0x206:
      case 0x207:
        break;
      case 0x208:
        return 0x51;
      case 0x209:
        return 0x52;
      default:
        switch(param_1) {
        case 0x901:
          return 0xd;
        case 0x902:
          return 0xe;
        case 0x903:
          return 0xf;
        case 0x904:
          return 0x10;
        case 0x905:
        case 0x906:
        case 0x907:
          break;
        case 0x908:
          return 0x57;
        case 0x909:
          return 0x58;
        default:
          if (param_1 == 0x101) {
            return 0xff;
          }
        }
      }
    }
    else {
      switch(param_1) {
      case 0xa01:
        return 6;
      case 0xa02:
        return 7;
      case 0xa03:
        return 8;
      case 0xa04:
        return 9;
      case 0xa05:
        return 5;
      case 0xa06:
      case 0xa07:
        break;
      case 0xa08:
        return 0x53;
      case 0xa09:
        return 0x54;
      default:
        switch(param_1) {
        case 0xb01:
          return 0x25;
        case 0xb02:
          return 0x26;
        case 0xb03:
          return 0x27;
        case 0xb04:
          return 0x28;
        case 0xb05:
        case 0xb06:
        case 0xb07:
          break;
        case 0xb08:
          return 99;
        case 0xb09:
          return 100;
        default:
          switch(param_1) {
          case 0xe01:
            return 0x3d;
          case 0xe02:
            return 0x69;
          case 0xe03:
            return 0x3e;
          case 0xe04:
            return 0x6a;
          }
        }
      }
    }
  }
  else if (param_1 < 0x1501) {
    if (param_1 < 0x1403) {
      switch(param_1) {
      case 0x1201:
        return 0x12;
      case 0x1202:
        return 0x13;
      case 0x1203:
        return 0x14;
      case 0x1204:
        return 0x15;
      case 0x1205:
        return 0x11;
      case 0x1208:
        return 0x59;
      case 0x1209:
        return 0x5a;
      }
    }
    else {
      if (param_1 == 0x1403) {
        return 0xb;
      }
      if (param_1 == 0x1404) {
        return 0xc;
      }
      if (param_1 == 0x1405) {
        return 10;
      }
    }
  }
  else if (param_1 < 0x1704) {
    switch(param_1) {
    case 0x1501:
      return 0x2a;
    case 0x1502:
      return 0x2b;
    case 0x1503:
      return 0x2c;
    case 0x1504:
      return 0x2d;
    case 0x1505:
      return 0x29;
    case 0x1506:
    case 0x1507:
      break;
    case 0x1508:
      return 0x65;
    case 0x1509:
      return 0x66;
    default:
      if (param_1 == 0x1703) {
        return 0x17;
      }
    }
  }
  else if (param_1 < 0x1805) {
    if (param_1 < 0x1803) {
      if (param_1 == 0x1704) {
        return 0x18;
      }
      if (param_1 == 0x1705) {
        return 0x16;
      }
    }
    else {
      if (param_1 == 0x1803) {
        return 0x23;
      }
      if (param_1 == 0x1804) {
        return 0x24;
      }
    }
  }
  else if (param_1 < 0x1904) {
    if (param_1 == 0x1805) {
      return 0x22;
    }
    if (param_1 == 0x1903) {
      return 0x2f;
    }
  }
  else if (param_1 == 0x1904) {
    uVar1 = 0x30;
  }
  else if (param_1 == 0x1905) {
    return 0x2e;
  }
  return uVar1;
}


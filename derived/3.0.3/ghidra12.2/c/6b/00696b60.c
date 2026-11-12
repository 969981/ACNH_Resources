
undefined8 FUN_00696b60(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 < 0xf99) {
    uVar1 = 0x1772db;
    switch(param_1) {
    case 0xbb9:
      goto switchD_00696bc8_caseD_bb9;
    case 0xbba:
      return 0x1774db;
    case 0xbbb:
      return 0x1776db;
    case 0xbbc:
      return 0x1778db;
    case 0xbbd:
      return 0x177adb;
    case 0xbbe:
      break;
    case 0xbbf:
      return 0x177edb;
    case 0xbc0:
      return 0x1780db;
    default:
      if (param_1 == 0xc1d) {
        return 0x183adb;
      }
      if (param_1 == 0xc1e) {
        return 0x183cdb;
      }
    }
  }
  else if (param_1 < 0x1069) {
    switch(param_1) {
    case 0xf99:
      return 0x1f32db;
    case 0xf9a:
      return 0x1f34db;
    case 0xf9b:
      return 0x1f36db;
    case 0xf9c:
      return 0x1f38db;
    case 0xf9d:
      return 0x1f3adb;
    case 0xf9e:
      return 0x1f3cdb;
    case 3999:
      return 0x1f3edb;
    case 0xfa1:
      return 0x1f42db;
    case 0xfa2:
      return 0x1f44db;
    case 0xfa3:
    case 0x1007:
      return 0x40db;
    case 0x1005:
      return 0x200adb;
    case 0x1006:
      return 0x200cdb;
    }
  }
  else {
    if (param_1 == 0x1069) {
      return 0x20d2db;
    }
    if (param_1 == 0x106a) {
      return 0x20d4db;
    }
    if (param_1 == 0x10cd) {
      return 0x219adb;
    }
  }
  uVar1 = 0x2ededb;
switchD_00696bc8_caseD_bb9:
  return uVar1;
}


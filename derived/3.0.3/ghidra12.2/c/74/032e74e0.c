
void FUN_032e74e0(ushort *param_1,undefined8 param_2,byte *param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  
  nn::hid::GetKeyCode(param_1,param_2,*(undefined4 *)param_3,param_4);
  if (DAT_05355a60 == 0) {
    return;
  }
  if ((-1 < *(char *)(*(long *)(DAT_05355a60 + 0x20) + 0x106c)) &&
     (*(int *)(*(long *)(DAT_05355a60 + 0x20) + 0x1050) != 1)) {
    return;
  }
  if ((*param_3 >> 1 & 1) != 0) {
    return;
  }
  if (param_4 == 0x4070407) {
    uVar2 = *param_1;
    if (8 < uVar2 - 0x21) {
      if (uVar2 != 0xa7) {
        if (uVar2 != 0x3d) {
          if (uVar2 != 0x2f) {
            return;
          }
          goto switchD_032e758c_caseD_e8;
        }
        goto switchD_032e758c_caseD_e0;
      }
      goto switchD_032e75c8_caseD_22;
    }
    uVar2 = uVar2 + 0x10;
  }
  else {
    if (param_4 != 0x40c040c) {
      return;
    }
    uVar1 = *param_1;
    uVar2 = 0x31;
    switch(uVar1) {
    case 0x22:
switchD_032e75c8_caseD_22:
      uVar2 = 0x33;
      break;
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
      goto switchD_032e758c_caseD_e1;
    case 0x26:
      break;
    case 0x27:
      uVar2 = 0x34;
      break;
    case 0x28:
      uVar2 = 0x35;
      break;
    case 0x2d:
      uVar2 = 0x36;
      break;
    default:
      switch(uVar1) {
      case 0xe0:
switchD_032e758c_caseD_e0:
        uVar2 = 0x30;
        break;
      case 0xe1:
      case 0xe2:
      case 0xe3:
      case 0xe4:
      case 0xe5:
      case 0xe6:
        goto switchD_032e758c_caseD_e1;
      case 0xe7:
        uVar2 = 0x39;
        break;
      case 0xe8:
switchD_032e758c_caseD_e8:
        uVar2 = 0x37;
        break;
      case 0xe9:
        uVar2 = 0x32;
        break;
      default:
        if (uVar1 != 0x5f) {
          return;
        }
        uVar2 = 0x38;
      }
    }
  }
  *param_1 = uVar2;
switchD_032e758c_caseD_e1:
  return;
}


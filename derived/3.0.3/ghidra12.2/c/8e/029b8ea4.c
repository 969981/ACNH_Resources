
int FUN_029b8ea4(uint param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  if ((param_3 & 1) != 0) {
    uVar2 = param_2 - 1;
    if (uVar2 < 0x4b) {
LAB_029b8ec4:
      uVar2 = uVar2 + ((uVar2 & 0xff) / 5) * -5 & 0xff;
    }
    else {
      if (param_2 - 0x4dU < 5) {
        uVar2 = param_2 - 2;
        goto LAB_029b8ec4;
      }
      uVar2 = param_2 - 0x10c;
      if (uVar2 < 0x69) {
        uVar2 = (uVar2 & 0xff) + ((uVar2 & 0xff) / 0x15) * -0x15;
        if (uVar2 == 0x14) {
LAB_029b9074:
          uVar2 = 0xffffffff;
        }
        else {
          uVar2 = uVar2 % 5;
        }
      }
      else {
        if (0xb8 < param_2 - 0x52U) goto LAB_029b9074;
        uVar2 = (param_2 - 2U) + ((param_2 - 2U & 0xffff) / 5) * -5 & 0xffff;
      }
    }
    param_2 = uVar2 + 1;
  }
  if (param_1 == 0) {
    return param_2;
  }
  if (param_1 < 0x4c) {
    param_1 = param_1 - 1;
LAB_029b8f08:
    uVar2 = param_1 + ((param_1 & 0xff) / 5) * -5 & 0xff;
  }
  else {
    if (param_1 - 0x4d < 5) {
      param_1 = param_1 - 2;
      goto LAB_029b8f08;
    }
    uVar2 = param_1 - 0x10c;
    if (uVar2 < 0x69) {
      uVar2 = (uVar2 & 0xff) + ((uVar2 & 0xff) / 0x15) * -0x15;
      if (uVar2 == 0x14) {
        uVar2 = 0xffffffff;
      }
      else {
        uVar2 = uVar2 % 5;
      }
    }
    else {
      if (0xb8 < param_1 - 0x52) {
        return param_2;
      }
      uVar2 = (param_1 - 2) + ((param_1 - 2 & 0xffff) / 5) * -5 & 0xffff;
    }
  }
  iVar1 = uVar2 + 1;
  if (uVar2 == 0xffffffff) {
    return param_2;
  }
  if (param_2 < 0x107) {
    switch(param_2) {
    case 1:
      iVar1 = iVar1 * 0x15;
      if (iVar1 < 0x41) {
        if (iVar1 == 0x15) {
          return 1;
        }
        if (iVar1 == 0x2b) {
          return 2;
        }
        return iVar1 + 0xf7;
      }
      if (iVar1 == 0x41) {
        return 3;
      }
      if (iVar1 == 0x57) {
        return 4;
      }
      return iVar1 + 0xf7;
    case 2:
      iVar1 = iVar1 * 0x15;
      if (iVar1 == 0x56) {
        return 4;
      }
      if (iVar1 == 0x40) {
        return 3;
      }
      if (iVar1 == 0x2a) {
        return 2;
      }
      return iVar1 + 0xf8;
    case 3:
      iVar1 = iVar1 * 0x15;
      if (iVar1 == 0x55) {
        return 4;
      }
      if (iVar1 == 0x3f) {
        return 3;
      }
      if (iVar1 == 0x29) {
        return 2;
      }
      return iVar1 + 0xf9;
    case 4:
      iVar1 = iVar1 * 0x15;
      if (iVar1 == 0x54) {
        return 4;
      }
      if (iVar1 == 0x3e) {
        return 3;
      }
      if (iVar1 == 0x28) {
        return 2;
      }
      return iVar1 + 0xfa;
    case 5:
    case 0x4b:
      iVar1 = iVar1 * 0x15;
      if (iVar1 < 0x53) {
        if (iVar1 == 0x27) {
          return 2;
        }
        if (iVar1 == 0x3d) {
          return 3;
        }
        return iVar1 + 0xfb;
      }
      if (iVar1 == 0x53) {
        return 4;
      }
      if (iVar1 == 0x69) {
        return 5;
      }
      return iVar1 + 0xfb;
    case 0x29:
      iVar1 = iVar1 * 0x15;
      param_2 = iVar1 + 0xfc;
      if (iVar1 < 0x52) {
        if (iVar1 == 0x26) {
          return 2;
        }
        if (iVar1 == 0x3c) {
          return 3;
        }
      }
      else {
        if (iVar1 == 0x52) {
          return 4;
        }
        if (iVar1 == 0x68) {
          return 5;
        }
      }
      break;
    case 0x2a:
      iVar1 = iVar1 * 0x15;
      param_2 = iVar1 + 0xfd;
      if (iVar1 < 0x51) {
        if (iVar1 == 0x25) {
          return 2;
        }
        if (iVar1 == 0x3b) {
          return 3;
        }
      }
      else {
        if (iVar1 == 0x51) {
          return 4;
        }
        if (iVar1 == 0x67) {
          return 5;
        }
      }
      break;
    case 0x2b:
      iVar1 = iVar1 * 0x15;
      param_2 = iVar1 + 0xfe;
      if (iVar1 < 0x50) {
        if (iVar1 == 0x24) {
          return 2;
        }
        if (iVar1 == 0x3a) {
          return 3;
        }
      }
      else {
        if (iVar1 == 0x50) {
          return 4;
        }
        if (iVar1 == 0x66) {
          return 5;
        }
      }
      break;
    case 0x2c:
      iVar1 = iVar1 * 0x15;
      param_2 = iVar1 + 0xff;
      if (iVar1 < 0x4f) {
        if (iVar1 == 0x23) {
          return 2;
        }
        if (iVar1 == 0x39) {
          return 3;
        }
      }
      else {
        if (iVar1 == 0x4f) {
          return 4;
        }
        if (iVar1 == 0x65) {
          return 5;
        }
      }
      break;
    case 0x2d:
      iVar1 = iVar1 * 0x15;
      param_2 = iVar1 + 0x100;
      if (iVar1 < 0x4e) {
        if (iVar1 == 0x22) {
          return 2;
        }
        if (iVar1 == 0x38) {
          return 3;
        }
      }
      else {
        if (iVar1 == 0x4e) {
          return 4;
        }
        if (iVar1 == 100) {
          return 5;
        }
      }
      break;
    case 0x3d:
      iVar1 = iVar1 * 0x15;
      param_2 = iVar1 + 0x101;
      if (iVar1 < 0x4d) {
        if (iVar1 == 0x21) {
          return 2;
        }
        if (iVar1 == 0x37) {
          return 3;
        }
      }
      else {
        if (iVar1 == 0x4d) {
          return 4;
        }
        if (iVar1 == 99) {
          return 5;
        }
      }
      break;
    case 0x3f:
      iVar1 = iVar1 * 0x15;
      param_2 = iVar1 + 0x103;
      if (iVar1 < 0x4b) {
        if (iVar1 == 0x1f) {
          return 2;
        }
        if (iVar1 == 0x35) {
          return 3;
        }
      }
      else {
        if (iVar1 == 0x4b) {
          return 4;
        }
        if (iVar1 == 0x61) {
          return 5;
        }
      }
      break;
    case 0x41:
      iVar1 = iVar1 * 0x15;
      param_2 = iVar1 + 0x105;
      if (iVar1 < 0x49) {
        if (iVar1 == 0x1d) {
          return 2;
        }
        if (iVar1 == 0x33) {
          return 3;
        }
      }
      else {
        if (iVar1 == 0x49) {
          return 4;
        }
        if (iVar1 == 0x5f) {
          return 5;
        }
      }
      break;
    case 0x47:
      iVar1 = iVar1 * 0x15;
      param_2 = iVar1 + 0x106;
      if (iVar1 < 0x48) {
        if (iVar1 == 0x1c) {
          return 2;
        }
        if (iVar1 == 0x32) {
          return 3;
        }
      }
      else {
        if (iVar1 == 0x48) {
          return 4;
        }
        if (iVar1 == 0x5e) {
          return 5;
        }
      }
      break;
    case 0x48:
      goto switchD_029b8f5c_caseD_48;
    case 0x4a:
switchD_029b8f5c_caseD_4a:
      iVar1 = iVar1 * 0x15;
      if (iVar1 < 0x45) {
        if (iVar1 == 0x19) {
          return 2;
        }
        if (iVar1 == 0x2f) {
          return 3;
        }
        return iVar1 + 0x109;
      }
      if (iVar1 == 0x45) {
        return 4;
      }
      if (iVar1 == 0x5b) {
        return 5;
      }
      return iVar1 + 0x109;
    case 0x4c:
      iVar1 = iVar1 * 0x15;
      param_2 = iVar1 + 0x10b;
      if (iVar1 < 0x43) {
        if (iVar1 == 0x17) {
          return 2;
        }
        if (iVar1 == 0x2d) {
          return 3;
        }
      }
      else {
        if (iVar1 == 0x43) {
          return 4;
        }
        if (iVar1 == 0x59) {
          return 5;
        }
      }
      break;
    case 0x9b:
      iVar1 = iVar1 * 0x15;
      param_2 = iVar1 + 0x104;
      if (iVar1 < 0x4a) {
        if (iVar1 == 0x1e) {
          return 2;
        }
        if (iVar1 == 0x34) {
          return 3;
        }
      }
      else {
        if (iVar1 == 0x4a) {
          return 4;
        }
        if (iVar1 == 0x60) {
          return 5;
        }
      }
    }
    return param_2;
  }
  if (param_2 != 0x107) {
    if (param_2 != 0x109) {
      if (param_2 != 0x10a) {
        return param_2;
      }
      iVar1 = iVar1 * 0x15;
      if (0x43 < iVar1) {
        if (iVar1 == 0x44) {
          return 4;
        }
        if (iVar1 == 0x5a) {
          return 5;
        }
        return iVar1 + 0x10a;
      }
      if (iVar1 == 0x18) {
        return 2;
      }
      if (iVar1 == 0x2e) {
        return 3;
      }
      return iVar1 + 0x10a;
    }
    goto switchD_029b8f5c_caseD_4a;
  }
switchD_029b8f5c_caseD_48:
  iVar1 = iVar1 * 0x15;
  if (0x46 < iVar1) {
    if (iVar1 == 0x47) {
      return 4;
    }
    if (iVar1 == 0x5d) {
      return 5;
    }
    return iVar1 + 0x107;
  }
  if (iVar1 == 0x1b) {
    return 2;
  }
  if (iVar1 == 0x31) {
    return 3;
  }
  return iVar1 + 0x107;
}


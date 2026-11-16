
int FUN_029b9950(long param_1,undefined1 *param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 1:
    switch(param_3) {
    case 0x61:
      iVar4 = 1;
      switch(param_4) {
      case 99:
        goto switchD_029b9fd0_caseD_0;
      case 0x69:
      case 0x79:
        goto switchD_029ba168_caseD_69;
      case 0x6e:
        return 0x120;
      }
      break;
    case 0x62:
      uVar1 = param_4 - 0x65U >> 1 | (param_4 - 0x65U) * -0x80000000;
      if (uVar1 < 9) {
        return *(int *)(&DAT_0417db04 + (long)(int)uVar1 * 4);
      }
      break;
    case 99:
      uVar1 = param_4 - 0x61U >> 1 | (param_4 - 0x61U) * -0x80000000;
      if (uVar1 < 0xb) {
        return *(int *)(&DAT_0417db28 + (long)(int)uVar1 * 4);
      }
      break;
    case 100:
      if (param_4 == 0x61) {
        return 0x1f;
      }
      if (param_4 == 0x6f) {
        return 0x23;
      }
      if (param_4 == 0x69) {
        return 0xda;
      }
      break;
    case 0x65:
      iVar4 = 0x152;
      switch(param_4) {
      case 0x65:
switchD_029ba224_caseD_65:
        *param_2 = 1;
        return 2;
      case 0x66:
        goto switchD_029b9fd0_caseD_0;
      case 0x68:
switchD_029b9d2c_caseD_69:
        return 4;
      case 0x69:
        return 0x14c;
      case 0x6e:
switchD_029b9d2c_caseD_6e:
        return 0x15f;
      case 0x72:
        return 1;
      }
      break;
    case 0x66:
    case 0x68:
switchD_029b9a6c_caseD_66:
      uVar1 = param_4 - 0x61U >> 1 | (param_4 - 0x61U) * -0x80000000;
      if (uVar1 < 0xb) {
        return *(int *)(&DAT_0417dd60 + (long)(int)uVar1 * 4);
      }
      break;
    case 0x67:
      iVar4 = 0xb;
      switch(param_4) {
      case 0x61:
        goto switchD_029b9fd0_caseD_0;
      case 0x65:
        return 0xe;
      case 0x69:
switchD_029b9d5c_caseD_69:
        return 0xc;
      case 0x6e:
switchD_029b9e2c_caseD_6d:
        return 0x4c;
      case 0x6f:
switchD_029b9d5c_caseD_6f:
        return 0xf;
      case 0x75:
switchD_029b9d5c_caseD_75:
        return 0xd;
      case 0x79:
switchD_029b9d5c_caseD_79:
        return 0x16;
      }
      break;
    case 0x69:
      iVar4 = 0x3d;
      switch(param_4) {
      case 0x61:
        goto switchD_029b9fd0_caseD_0;
      default:
        break;
      case 0x65:
        return 2;
      case 0x6f:
        goto switchD_029b9d8c_caseD_6f;
      case 0x75:
        goto switchD_029b9d8c_caseD_75;
      }
    case 0x6a:
      uVar1 = param_4 - 0x61U >> 1 | (param_4 - 0x61U) * -0x80000000;
      if (uVar1 < 0xb) {
        return *(int *)(&DAT_0417db54 + (long)(int)uVar1 * 4);
      }
      break;
    case 0x6b:
switchD_029b9ab8_caseD_6b:
      uVar1 = param_4 - 0x61U >> 1 | (param_4 - 0x61U) * -0x80000000;
      if (uVar1 < 0xb) {
        return *(int *)(&DAT_0417de54 + (long)(int)uVar1 * 4);
      }
      break;
    case 0x6c:
switchD_029b9ab8_caseD_6c:
      uVar1 = param_4 - 0x61U >> 1 | (param_4 - 0x61U) * -0x80000000;
      if (uVar1 < 0xb) {
        return *(int *)(&DAT_0417de80 + (long)(int)uVar1 * 4);
      }
      break;
    case 0x6d:
switchD_029b9ab8_caseD_6d:
      uVar1 = param_4 - 0x61U >> 1 | (param_4 - 0x61U) * -0x80000000;
      if (uVar1 < 0xb) {
        return *(int *)(&DAT_0417deac + (long)(int)uVar1 * 4);
      }
      break;
    case 0x6e:
switchD_029b9ab8_caseD_6e:
      uVar1 = param_4 - 0x61U >> 1 | (param_4 - 0x61U) * -0x80000000;
      if (uVar1 < 0xb) {
        return *(int *)(&DAT_0417ded8 + (long)(int)uVar1 * 4);
      }
      break;
    case 0x6f:
      if (param_4 != 0x6f) {
        return 0;
      }
      goto switchD_029b9e2c_caseD_68;
    case 0x70:
      iVar4 = 0x33;
      switch(param_4) {
      case 0x61:
        goto switchD_029b9fd0_caseD_0;
      case 0x65:
        return 0x36;
      case 0x68:
switchD_029b9e5c_caseD_68:
        return 0x2b;
      case 0x69:
switchD_029b9e5c_caseD_69:
        return 0x34;
      case 0x6f:
switchD_029b9e5c_caseD_6f:
        return 0x37;
      case 0x75:
switchD_029b9e5c_caseD_75:
        return 0x35;
      }
      break;
    case 0x72:
      iVar4 = 0x42;
      switch(param_4 - 0x61U >> 1 | (param_4 - 0x61U) * -0x80000000) {
      case 0:
        goto switchD_029b9fd0_caseD_0;
      case 2:
switchD_029b9fd0_caseD_2:
        return 0x45;
      case 4:
switchD_029b9fd0_caseD_4:
        return 0x43;
      case 7:
switchD_029b9fd0_caseD_7:
        return 0x46;
      case 10:
switchD_029b9fd0_caseD_a:
        return 0x44;
      case 0xc:
switchD_029b9f84_caseD_c:
        *param_2 = 1;
        return 0x43;
      }
      break;
    case 0x73:
switchD_029b9ab8_caseD_73:
      uVar1 = param_4 - 0x61U >> 1 | (param_4 - 0x61U) * -0x80000000;
      if (uVar1 < 0xb) {
        return *(int *)(&DAT_0417df90 + (long)(int)uVar1 * 4);
      }
      break;
    case 0x74:
switchD_029b9ab8_caseD_74:
      uVar1 = param_4 - 0x61U >> 1 | (param_4 - 0x61U) * -0x80000000;
      if (uVar1 < 0xd) {
        return *(int *)(&DAT_0417df30 + (long)(int)uVar1 * 4);
      }
      break;
    case 0x75:
      bVar2 = param_4 == 0x75;
      iVar4 = 3;
LAB_029ba430:
      if (!bVar2) {
        iVar4 = 0;
      }
LAB_029ba434:
      iVar3 = 0x47;
      if (param_4 != 0x61) {
        iVar3 = iVar4;
      }
      return iVar3;
    case 0x76:
switchD_029b9ab8_caseD_62:
      uVar1 = param_4 - 0x61U >> 1 | (param_4 - 0x61U) * -0x80000000;
      if (uVar1 < 0xb) {
        return *(int *)(&DAT_0417df64 + (long)(int)uVar1 * 4);
      }
      break;
    case 0x77:
      uVar1 = param_4 - 0x61U >> 1 | (param_4 - 0x61U) * -0x80000000;
      if (uVar1 < 0xb) {
        return *(int *)(&DAT_0417db80 + (long)(int)uVar1 * 4);
      }
      break;
    case 0x78:
      if (param_4 == 0x61) {
        return 0x15;
      }
      if (param_4 == 0x65) {
        return 0x18;
      }
    case 0x71:
switchD_029b9ab8_caseD_71:
      if (param_4 == 0x75) {
switchD_029ba1f4_caseD_75:
        return 8;
      }
      break;
    case 0x79:
switchD_029b9ab8_caseD_69:
      if (param_4 == 0x61) {
        return 0x3d;
      }
      if (param_4 == 0x6f) {
switchD_029b9d8c_caseD_6f:
        return 0x41;
      }
      if (param_4 == 0x75) {
switchD_029b9d8c_caseD_75:
        return 0x3f;
      }
      break;
    case 0x7a:
switchD_029b99e4_caseD_73:
      uVar1 = param_4 - 0x61U >> 1 | (param_4 - 0x61U) * -0x80000000;
      if (uVar1 < 0xb) {
        return *(int *)(&DAT_0417dc0c + (long)(int)uVar1 * 4);
      }
    }
    break;
  case 2:
    switch(param_3) {
    case 0x61:
      if (param_4 != 0x79) {
        if (param_4 == 0x6e) {
          return 0x120;
        }
        if (param_4 != 0x69) {
          return 0;
        }
      }
switchD_029ba168_caseD_69:
      return 0x10d;
    case 0x62:
      goto switchD_029b9ab8_caseD_62;
    case 99:
      if (param_4 - 0x68U < 4) {
        return *(int *)(&DAT_04102240 + (long)(int)(param_4 - 0x68U) * 4);
      }
      break;
    case 100:
      iVar4 = 0x1f;
      switch(param_4) {
      case 0x61:
        goto switchD_029b9fd0_caseD_0;
      case 0x65:
        return 0x22;
      case 0x69:
        return 0xda;
      case 0x6f:
        return 0x23;
      case 0x73:
switchD_029b9f50_caseD_75:
        return 0x1c;
      case 0x74:
switchD_029b9f50_caseD_6f:
        return 0x1e;
      }
      break;
    case 0x65:
      iVar4 = 0x152;
      switch(param_4) {
      case 0x65:
        goto switchD_029ba224_caseD_65;
      case 0x66:
        goto switchD_029b9fd0_caseD_0;
      case 0x69:
      case 0x79:
        goto switchD_029ba168_caseD_69;
      case 0x6e:
switchD_029ba224_caseD_6e:
        return 0x15f;
      }
      break;
    case 0x66:
    case 0x68:
      goto switchD_029b9a6c_caseD_66;
    case 0x67:
      uVar1 = param_4 - 0x61U >> 1 | (param_4 - 0x61U) * -0x80000000;
      if (uVar1 < 0xd) {
        return *(int *)(&DAT_0417dbac + (long)(int)uVar1 * 4);
      }
      break;
    case 0x69:
      if (param_4 == 0x65) {
        return 2;
      }
      break;
    case 0x6a:
      uVar1 = param_4 - 0x61U >> 1 | (param_4 - 0x61U) * -0x80000000;
      if (uVar1 < 0xb) {
        return *(int *)(&DAT_0417dbe0 + (long)(int)uVar1 * 4);
      }
      break;
    case 0x6b:
      goto switchD_029b9ab8_caseD_6b;
    case 0x6c:
      goto switchD_029b9ab8_caseD_6c;
    case 0x6d:
      goto switchD_029b9ab8_caseD_6d;
    case 0x6e:
      goto switchD_029b9ab8_caseD_6e;
    case 0x6f:
      if (param_4 == 0x6f) goto switchD_029b9e2c_caseD_68;
LAB_029ba0d4:
      if (param_4 == 0x68) {
switchD_029b9e2c_caseD_68:
        *param_2 = 1;
        return 5;
      }
      break;
    case 0x70:
switchD_029b9ab8_caseD_70:
      uVar1 = param_4 - 0x61U >> 1 | (param_4 - 0x61U) * -0x80000000;
      if (uVar1 < 0xb) {
        return *(int *)(&DAT_0417df04 + (long)(int)uVar1 * 4);
      }
      break;
    case 0x71:
      goto switchD_029b9ab8_caseD_71;
    case 0x72:
      iVar4 = 0x42;
      switch(param_4 - 0x61U >> 1 | (param_4 - 0x61U) * -0x80000000) {
      case 0:
        goto switchD_029b9fd0_caseD_0;
      case 2:
        goto switchD_029b9fd0_caseD_2;
      case 4:
        goto switchD_029b9fd0_caseD_4;
      case 7:
        goto switchD_029b9fd0_caseD_7;
      case 10:
        goto switchD_029b9fd0_caseD_a;
      case 0xc:
        goto switchD_029b9f84_caseD_c;
      }
      break;
    case 0x73:
    case 0x7a:
      goto switchD_029b99e4_caseD_73;
    case 0x74:
      iVar4 = 0x1a;
      switch(param_4) {
      case 0x61:
        goto switchD_029b9fd0_caseD_0;
      case 0x65:
        return 0x1d;
      case 0x69:
switchD_029b9cdc_caseD_68:
        return 0x1b;
      case 0x6f:
        goto switchD_029b9f50_caseD_6f;
      case 0x73:
      case 0x7a:
        return 0x1c;
      case 0x75:
        goto switchD_029b9f50_caseD_75;
      case 0x79:
        return 0xd0;
      }
      break;
    case 0x75:
switchD_029b9ab8_caseD_75:
      if (param_4 == 0x61) {
        return 0x47;
      }
      break;
    case 0x76:
      if (param_4 == 0x61) {
        return 0x29;
      }
      if (param_4 == 0x6f) {
        return 0x2d;
      }
      goto LAB_029ba134;
    case 0x77:
      if (param_4 == 0x61) {
        return 0x47;
      }
      if (param_4 == 0x6f) {
        return 0x4b;
      }
LAB_029ba134:
      if (param_4 == 0x69) {
switchD_029b9cac_caseD_69:
        return 0x2f;
      }
      break;
    case 0x79:
      goto switchD_029b9ab8_caseD_69;
    }
    break;
  case 3:
    switch(param_3) {
    case 0x61:
      if (param_4 == 0x69) {
        return 4;
      }
      if (param_4 == 0x6e) {
        return 0x120;
      }
      if (param_4 == 0x75) {
        return 5;
      }
      return 0;
    case 0x62:
      iVar4 = 0x31;
      switch(param_4) {
      case 0x61:
        goto switchD_029b9fd0_caseD_0;
      default:
        return 0;
      case 0x69:
        goto switchD_029b9cac_caseD_69;
      case 0x6f:
        return 0x32;
      case 0x75:
        return 0x30;
      }
    case 99:
      iVar4 = 9;
      switch(param_4) {
      case 0x61:
        goto switchD_029b9fd0_caseD_0;
      default:
        return 0;
      case 0x65:
        return 0x14;
      case 0x68:
        goto switchD_029b9cdc_caseD_68;
      case 0x69:
        return 7;
      case 0x6f:
        return 10;
      case 0x75:
        return 8;
      }
    case 100:
      uVar1 = param_4 - 0x61U >> 1 | (param_4 - 0x61U) * -0x80000000;
      if (uVar1 < 8) {
        return *(int *)(&DAT_040577a0 + (long)(int)uVar1 * 4);
      }
      return 0;
    case 0x65:
      iVar4 = 5;
      switch(param_4) {
      case 0x61:
        goto switchD_029b9fd0_caseD_0;
      default:
        return 0;
      case 0x65:
        goto switchD_029ba224_caseD_65;
      case 0x66:
        return 0x152;
      case 0x69:
        goto switchD_029b9d2c_caseD_69;
      case 0x6e:
        goto switchD_029b9d2c_caseD_6e;
      case 0x75:
        return 3;
      }
    case 0x66:
      goto switchD_029b9a6c_caseD_66;
    case 0x67:
      iVar4 = 0xe;
      switch(param_4) {
      case 0x61:
        goto switchD_029b9fd0_caseD_0;
      default:
        return 0;
      case 0x65:
        return 0xb;
      case 0x69:
        goto switchD_029b9d5c_caseD_69;
      case 0x6e:
        return 0x26;
      case 0x6f:
        goto switchD_029b9d5c_caseD_6f;
      case 0x75:
        goto switchD_029b9d5c_caseD_75;
      case 0x79:
        goto switchD_029b9d5c_caseD_79;
      }
    default:
      return 0;
    case 0x69:
      iVar4 = 0x3d;
      switch(param_4) {
      case 0x61:
        goto switchD_029b9fd0_caseD_0;
      default:
        return 0;
      case 0x6d:
        return 1;
      case 0x6f:
        goto switchD_029b9d8c_caseD_6f;
      case 0x75:
        goto switchD_029b9d8c_caseD_75;
      }
    case 0x6a:
      uVar1 = param_4 - 0x61U >> 1 | (param_4 - 0x61U) * -0x80000000;
      if (uVar1 < 0xb) {
        return *(int *)(&DAT_0417dc38 + (long)(int)uVar1 * 4);
      }
      return 0;
    case 0x6b:
      if (param_4 == 0x61) {
        return 6;
      }
      return 0;
    case 0x6c:
      goto switchD_029b9ab8_caseD_6c;
    case 0x6d:
      uVar1 = param_4 - 0x61U >> 1 | (param_4 - 0x61U) * -0x80000000;
      if (uVar1 < 0xb) {
        return *(int *)(&DAT_0417dc64 + (long)(int)uVar1 * 4);
      }
      return 0;
    case 0x6e:
      uVar1 = param_4 - 0x61U >> 1 | (param_4 - 0x61U) * -0x80000000;
      if (uVar1 < 0xb) {
        return *(int *)(&DAT_0417dc90 + (long)(int)uVar1 * 4);
      }
      return 0;
    case 0x6f:
      iVar4 = 0x47;
      switch(param_4) {
      case 0x65:
      case 0x75:
        return 3;
      default:
        return 0;
      case 0x68:
      case 0x6f:
        goto switchD_029b9e2c_caseD_68;
      case 0x69:
        goto switchD_029b9fd0_caseD_0;
      case 0x6d:
        goto switchD_029b9e2c_caseD_6d;
      }
    case 0x70:
      iVar4 = 0x36;
      switch(param_4) {
      case 0x61:
        goto switchD_029b9fd0_caseD_0;
      default:
        return 0;
      case 0x65:
        return 0x33;
      case 0x68:
        goto switchD_029b9e5c_caseD_68;
      case 0x69:
        goto switchD_029b9e5c_caseD_69;
      case 0x6f:
        goto switchD_029b9e5c_caseD_6f;
      case 0x75:
        goto switchD_029b9e5c_caseD_75;
      }
    case 0x71:
      goto switchD_029b9ab8_caseD_71;
    case 0x72:
      iVar4 = 0x42;
      switch(param_4 - 0x61U >> 1 | (param_4 - 0x61U) * -0x80000000) {
      case 0:
        goto switchD_029b9fd0_caseD_0;
      default:
        return 0;
      case 2:
      case 10:
        return 0x44;
      case 4:
        goto switchD_029b9fd0_caseD_4;
      case 7:
        goto switchD_029b9fd0_caseD_7;
      case 0xc:
        goto switchD_029b9f84_caseD_c;
      }
    case 0x73:
      uVar1 = param_4 - 0x61U >> 2 | (param_4 - 0x61U) * 0x40000000;
      if (uVar1 < 6) {
        return *(int *)(&DAT_0417dcbc + (long)(int)uVar1 * 4);
      }
      return 0;
    case 0x74:
      uVar1 = param_4 - 0x61U >> 1 | (param_4 - 0x61U) * -0x80000000;
      if (uVar1 < 0xd) {
        return *(int *)(&DAT_0417dcd4 + (long)(int)uVar1 * 4);
      }
      return 0;
    case 0x75:
      iVar4 = (uint)(param_4 == 0x69) << 1;
      goto LAB_029ba434;
    case 0x76:
      uVar1 = param_4 - 0x61U >> 1 | (param_4 - 0x61U) * -0x80000000;
      if (uVar1 < 0xb) {
        return *(int *)(&DAT_0417dd08 + (long)(int)uVar1 * 4);
      }
      return 0;
    case 0x77:
      goto switchD_029b9ab8_caseD_75;
    case 0x79:
      goto switchD_029b9ab8_caseD_69;
    case 0x7a:
      uVar1 = param_4 - 0x61U >> 1 | (param_4 - 0x61U) * -0x80000000;
      if (uVar1 < 0xb) {
        return *(int *)(&DAT_0417dd34 + (long)(int)uVar1 * 4);
      }
      return 0;
    }
  case 4:
    switch(param_3) {
    case 0x61:
switchD_029b9ab8_caseD_61:
      iVar4 = 0x120;
      if (param_4 != 0x6e) {
        iVar4 = 0;
      }
      iVar3 = 0x10d;
      if (param_4 != 0x69) {
        iVar3 = iVar4;
      }
      return iVar3;
    case 0x62:
    case 0x76:
      goto switchD_029b9ab8_caseD_62;
    case 99:
      iVar4 = 6;
      switch(param_4) {
      case 0x61:
        goto switchD_029b9fd0_caseD_0;
      default:
        break;
      case 0x68:
      case 0x75:
        goto switchD_029ba1f4_caseD_75;
      case 0x69:
switchD_029ba1f4_caseD_69:
        return 0x11;
      case 0x6f:
switchD_029ba1f4_caseD_6f:
        return 10;
      }
    case 100:
switchD_029b9ab8_caseD_64:
      uVar1 = param_4 - 0x61U >> 1 | (param_4 - 0x61U) * -0x80000000;
      if (uVar1 < 8) {
        return *(int *)(&DAT_04057e80 + (long)(int)uVar1 * 4);
      }
      break;
    case 0x65:
      iVar4 = 0x152;
      switch(param_4) {
      case 0x65:
        goto switchD_029ba224_caseD_65;
      case 0x66:
        goto switchD_029b9fd0_caseD_0;
      default:
        break;
      case 0x69:
        goto switchD_029ba168_caseD_69;
      case 0x6e:
        goto switchD_029ba224_caseD_6e;
      }
    case 0x66:
      goto switchD_029b9a6c_caseD_66;
    case 0x67:
switchD_029b9ab8_caseD_67:
      uVar1 = param_4 - 0x61U >> 1 | (param_4 - 0x61U) * -0x80000000;
      if (uVar1 < 0xd) {
        return *(int *)(&DAT_0417ddec + (long)(int)uVar1 * 4);
      }
      break;
    case 0x68:
      uVar1 = param_4 - 0x61U >> 1 | (param_4 - 0x61U) * -0x80000000;
      if (uVar1 < 0xb) {
        return *(int *)(&DAT_0417dd8c + (long)(int)uVar1 * 4);
      }
      break;
    case 0x69:
      goto switchD_029b9ab8_caseD_69;
    case 0x6a:
      if (param_4 == 0x65) {
        return 0x2c;
      }
      if (param_4 == 0x69) {
        return 0x2a;
      }
      if (param_4 == 0x75) {
        return 0x2b;
      }
      break;
    case 0x6b:
      goto switchD_029b9ab8_caseD_6b;
    case 0x6c:
      goto switchD_029b9ab8_caseD_6c;
    case 0x6d:
      goto switchD_029b9ab8_caseD_6d;
    case 0x6e:
      goto switchD_029b9ab8_caseD_6e;
    case 0x6f:
switchD_029b9ab8_caseD_6f:
      if (param_4 == 0x6f) goto switchD_029b9e2c_caseD_68;
      if (param_4 == 0x6d) {
        return 0x4c;
      }
      goto LAB_029ba0d4;
    case 0x70:
      goto switchD_029b9ab8_caseD_70;
    case 0x71:
      goto switchD_029b9ab8_caseD_71;
    case 0x72:
      iVar4 = 0x42;
      switch(param_4 - 0x61U >> 1 | (param_4 - 0x61U) * -0x80000000) {
      case 0:
        goto switchD_029b9fd0_caseD_0;
      default:
        break;
      case 2:
        goto switchD_029b9fd0_caseD_2;
      case 4:
        goto switchD_029b9fd0_caseD_4;
      case 7:
        goto switchD_029b9fd0_caseD_7;
      case 10:
        goto switchD_029b9fd0_caseD_a;
      case 0xc:
        goto switchD_029b9f84_caseD_c;
      }
    case 0x73:
    case 0x7a:
      goto switchD_029b9ab8_caseD_73;
    case 0x74:
      goto switchD_029b9ab8_caseD_74;
    case 0x75:
    case 0x77:
      goto switchD_029b9ab8_caseD_75;
    case 0x79:
      iVar3 = 0x2d;
      if (param_4 != 0x6f) {
        iVar3 = 0;
      }
      iVar4 = 0x29;
      if (param_4 != 0x61) {
        iVar4 = iVar3;
      }
switchD_029b9fd0_caseD_0:
      return iVar4;
    }
    break;
  case 5:
    switch(param_3) {
    case 0x61:
      goto switchD_029b9ab8_caseD_61;
    case 0x62:
    case 0x76:
      goto switchD_029b9ab8_caseD_62;
    case 99:
      iVar4 = 6;
      switch(param_4) {
      case 0x61:
        goto switchD_029b9fd0_caseD_0;
      case 0x68:
        return 0x1b;
      case 0x69:
        goto switchD_029ba1f4_caseD_69;
      case 0x6f:
        goto switchD_029ba1f4_caseD_6f;
      case 0x75:
        goto switchD_029ba1f4_caseD_75;
      }
      break;
    case 100:
      goto switchD_029b9ab8_caseD_64;
    case 0x65:
      iVar4 = 0x152;
      switch(param_4) {
      case 0x65:
        goto switchD_029ba224_caseD_65;
      case 0x66:
        goto switchD_029b9fd0_caseD_0;
      case 0x69:
        return 0x14c;
      case 0x6e:
        goto switchD_029ba224_caseD_6e;
      }
      break;
    case 0x66:
      uVar1 = param_4 - 0x61U >> 1 | (param_4 - 0x61U) * -0x80000000;
      if (uVar1 < 0xd) {
        return *(int *)(&DAT_0417ddb8 + (long)(int)uVar1 * 4);
      }
      break;
    case 0x67:
      goto switchD_029b9ab8_caseD_67;
    case 0x68:
      uVar1 = param_4 - 0x61U >> 1 | (param_4 - 0x61U) * -0x80000000;
      if (uVar1 < 0xd) {
        return *(int *)(&DAT_0417de20 + (long)(int)uVar1 * 4);
      }
      break;
    case 0x69:
      goto switchD_029b9ab8_caseD_69;
    case 0x6a:
      if (param_4 == 0x65) {
        return 0x2c;
      }
      if (param_4 == 0x69) {
        return 0x2a;
      }
      if (param_4 == 0x75) {
        return 0x2b;
      }
      break;
    case 0x6b:
      goto switchD_029b9ab8_caseD_6b;
    case 0x6c:
      goto switchD_029b9ab8_caseD_6c;
    case 0x6d:
      goto switchD_029b9ab8_caseD_6d;
    case 0x6e:
      goto switchD_029b9ab8_caseD_6e;
    case 0x6f:
      goto switchD_029b9ab8_caseD_6f;
    case 0x70:
      goto switchD_029b9ab8_caseD_70;
    case 0x71:
      goto switchD_029b9ab8_caseD_71;
    case 0x72:
      iVar4 = 0x42;
      switch(param_4 - 0x61U >> 1 | (param_4 - 0x61U) * -0x80000000) {
      case 0:
        goto switchD_029b9fd0_caseD_0;
      case 2:
        goto switchD_029b9fd0_caseD_2;
      case 4:
        goto switchD_029b9fd0_caseD_4;
      case 7:
        goto switchD_029b9fd0_caseD_7;
      case 10:
        goto switchD_029b9fd0_caseD_a;
      case 0xc:
        *param_2 = 1;
        return 0x43;
      }
      break;
    case 0x73:
    case 0x7a:
      goto switchD_029b9ab8_caseD_73;
    case 0x74:
      goto switchD_029b9ab8_caseD_74;
    case 0x75:
      goto switchD_029b9ab8_caseD_75;
    case 0x77:
      bVar2 = param_4 == 0x6f;
      iVar4 = 5;
      goto LAB_029ba430;
    case 0x79:
      iVar4 = 0x2d;
      if (param_4 != 0x6f) {
        iVar4 = 0;
      }
      iVar3 = 0x29;
      if (param_4 != 0x61) {
        iVar3 = iVar4;
      }
      return iVar3;
    }
  default:
    break;
  }
  return 0;
}


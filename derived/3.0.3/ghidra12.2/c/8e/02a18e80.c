
undefined4 FUN_02a18e80(undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar4 = 0xffffffff;
  switch(param_1) {
  case 0:
    iVar2 = FUN_02b58b90(0);
    uVar5 = 4;
    if (iVar2 != 3) {
      uVar5 = 0xffffffff;
    }
    uVar4 = 3;
    if (iVar2 != 2) {
      uVar4 = uVar5;
    }
    break;
  case 1:
    uVar4 = 2;
    bVar1 = true;
    goto LAB_02a18fc8;
  case 2:
    if (param_2 < -0x169521c) {
      if (-0x2099c903 < param_2) {
        if (-0xe632454 < param_2) {
          if (param_2 == -0xe632453) {
            return 0x66;
          }
          if (param_2 == -0x83ceb3d) {
            return 0x67;
          }
          return 0xffffffff;
        }
        if (param_2 == -0x2099c902) {
          return 0x6f;
        }
        if (param_2 == -0x15fdefdb) {
          return 0x6d;
        }
        return 0xffffffff;
      }
      if (param_2 != -0x5f95286e) {
        if (param_2 == -0x477aafe0) {
          return 0x68;
        }
        if (param_2 != -0x21a6781c) {
          return 0xffffffff;
        }
      }
    }
    else {
      if (param_2 < 0x3fce6459) {
        if (0x17f77b86 < param_2) {
          if (param_2 == 0x17f77b87) {
            return 0x6e;
          }
          if (param_2 == 0x3b3bf38a) {
            return 0x6c;
          }
          return 0xffffffff;
        }
        if (param_2 == -0x169521c) {
          return 0x6a;
        }
        if (param_2 != 0x11889761) {
          return 0xffffffff;
        }
        goto switchD_02a18eb4_caseD_64;
      }
      if (0x6148bcac < param_2) {
        if (param_2 == 0x6148bcad) {
          return 0x69;
        }
        if (param_2 == 0x66eec322) {
          return 7;
        }
        return 0xffffffff;
      }
      if (param_2 == 0x3fce6459) {
        return 0x6b;
      }
      if (param_2 != 0x593d97a5) {
        return 0xffffffff;
      }
    }
    uVar4 = 0x65;
    break;
  case 3:
    uVar4 = 6;
    break;
  case 4:
    uVar4 = 1;
    break;
  case 5:
    iVar2 = FUN_02b5aaf0(0);
    bVar1 = iVar2 == 2;
    uVar4 = 5;
    goto LAB_02a18fc8;
  case 7:
    uVar3 = FUN_01810f30(0xffffffff);
    uVar4 = 9;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0xffffffff;
    }
    break;
  case 8:
    uVar4 = 8;
    break;
  case 9:
    uVar5 = 0xcf;
    if (param_2 != -0x68a9a319) {
      uVar5 = 0xffffffff;
    }
    uVar4 = 0xce;
    if (param_2 != -0x21ba1d3a) {
      uVar4 = uVar5;
    }
    break;
  case 10:
    uVar4 = 0xc9;
    break;
  case 0xb:
    uVar4 = 0xca;
    break;
  case 0xc:
    uVar4 = 0xcb;
    break;
  case 0xd:
    uVar4 = 0xcc;
    break;
  case 0xe:
    uVar4 = 0xcd;
    break;
  case 0xf:
    bVar1 = param_2 == 0x3ee08254;
    uVar4 = 0x12d;
LAB_02a18fc8:
    if (!bVar1) {
      uVar4 = 0xffffffff;
    }
    break;
  case 100:
switchD_02a18eb4_caseD_64:
    uVar4 = 0x71;
  }
  return uVar4;
}


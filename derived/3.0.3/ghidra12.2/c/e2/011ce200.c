
bool FUN_011ce200(long param_1,undefined8 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [4];
  uint local_74;
  undefined8 local_70;
  int local_64;
  
  if (*(int *)(param_1 + 0xfc) != 2) {
    return false;
  }
  local_64 = *(int *)(param_1 + 0xf8);
  FUN_0124c030(auStack_80,param_1);
  iVar1 = FUN_0123db50(auStack_78,local_70);
  if ((iVar1 != 0x2d) || ((local_74 & 1) == 0)) {
    if (((DAT_050de808 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_050de808), iVar1 != 0)) {
      FUN_011d0e00();
      __cxa_guard_release(&DAT_050de808);
    }
    if ((DAT_050de7f8 == 1) && (*DAT_050de800 != 0)) {
      if (DAT_050de800[1] == 0) {
        uVar4 = 1;
      }
      else if (DAT_050de800[2] == 0) {
        uVar4 = 2;
      }
      else if (DAT_050de800[3] == 0) {
        uVar4 = 3;
      }
      else if (DAT_050de800[4] == 0) {
        uVar4 = 4;
      }
      else if (DAT_050de800[5] == 0) {
        uVar4 = 5;
      }
      else if (DAT_050de800[6] == 0) {
        uVar4 = 6;
      }
      else if (DAT_050de800[7] == 0) {
        uVar4 = 7;
      }
      else if (DAT_050de800[8] == 0) {
        uVar4 = 8;
      }
      else if (DAT_050de800[9] == 0) {
        uVar4 = 9;
      }
      else if (DAT_050de800[10] == 0) {
        uVar4 = 10;
      }
      else if (DAT_050de800[0xb] == 0) {
        uVar4 = 0xb;
      }
      else if (DAT_050de800[0xc] == 0) {
        uVar4 = 0xc;
      }
      else if (DAT_050de800[0xd] == 0) {
        uVar4 = 0xd;
      }
      else if (DAT_050de800[0xe] == 0) {
        uVar4 = 0xe;
      }
      else if (DAT_050de800[0xf] == 0) {
        uVar4 = 0xf;
      }
      else if (DAT_050de800[0x10] == 0) {
        uVar4 = 0x10;
      }
      else if (DAT_050de800[0x11] == 0) {
        uVar4 = 0x11;
      }
      else if (DAT_050de800[0x12] == 0) {
        uVar4 = 0x12;
      }
      else if (DAT_050de800[0x13] == 0) {
        uVar4 = 0x13;
      }
      else {
        if (DAT_050de800[0x14] != 0) goto LAB_011ce380;
        uVar4 = 0x14;
      }
    }
    else {
LAB_011ce380:
      uVar4 = 0;
    }
    uVar5 = 0;
    uVar6 = 2;
    uVar7 = 1;
    uVar8 = 3;
    goto LAB_011ce394;
  }
  if (((DAT_050de808 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_050de808), iVar1 != 0)) {
    FUN_011d0e00();
    __cxa_guard_release(&DAT_050de808);
  }
  if ((DAT_050de7f8 == 1) && (*DAT_050de800 != 1)) {
    if (DAT_050de800[1] == 1) {
      uVar4 = 1;
    }
    else if (DAT_050de800[2] == 1) {
      uVar4 = 2;
    }
    else if (DAT_050de800[3] == 1) {
      uVar4 = 3;
    }
    else if (DAT_050de800[4] == 1) {
      uVar4 = 4;
    }
    else if (DAT_050de800[5] == 1) {
      uVar4 = 5;
    }
    else if (DAT_050de800[6] == 1) {
      uVar4 = 6;
    }
    else if (DAT_050de800[7] == 1) {
      uVar4 = 7;
    }
    else if (DAT_050de800[8] == 1) {
      uVar4 = 8;
    }
    else if (DAT_050de800[9] == 1) {
      uVar4 = 9;
    }
    else if (DAT_050de800[10] == 1) {
      uVar4 = 10;
    }
    else if (DAT_050de800[0xb] == 1) {
      uVar4 = 0xb;
    }
    else if (DAT_050de800[0xc] == 1) {
      uVar4 = 0xc;
    }
    else if (DAT_050de800[0xd] == 1) {
      uVar4 = 0xd;
    }
    else if (DAT_050de800[0xe] == 1) {
      uVar4 = 0xe;
    }
    else if (DAT_050de800[0xf] == 1) {
      uVar4 = 0xf;
    }
    else if (DAT_050de800[0x10] == 1) {
      uVar4 = 0x10;
    }
    else if (DAT_050de800[0x11] == 1) {
      uVar4 = 0x11;
    }
    else if (DAT_050de800[0x12] == 1) {
      uVar4 = 0x12;
    }
    else if (DAT_050de800[0x13] == 1) {
      uVar4 = 0x13;
    }
    else {
      if (DAT_050de800[0x14] != 1) goto LAB_011ce2a4;
      uVar4 = 0x14;
    }
  }
  else {
LAB_011ce2a4:
    uVar4 = 0;
  }
  uVar7 = 0;
  uVar5 = 1;
  uVar6 = 3;
  uVar8 = 2;
LAB_011ce394:
  *(undefined4 *)(param_1 + 0xf8) = uVar4;
  uVar3 = FUN_011cdda0(param_1,param_2,param_3,uVar8);
  if ((uVar3 & 1) != 0) {
    FUN_011cce48(param_1,uVar8,param_4 & 1);
  }
  uVar3 = FUN_011cdda0(param_1,param_2,param_3,uVar7);
  if ((uVar3 & 1) != 0) {
    FUN_011cce48(param_1,uVar7,param_4 & 1);
  }
  uVar3 = FUN_011cdda0(param_1,param_2,param_3,uVar6);
  if ((uVar3 & 1) != 0) {
    FUN_011cce48(param_1,uVar6,param_4 & 1);
  }
  uVar3 = FUN_011cdda0(param_1,param_2,param_3,uVar5);
  if ((uVar3 & 1) != 0) {
    FUN_011cce48(param_1,uVar5,param_4 & 1);
  }
  if (((DAT_050de808 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_050de808), iVar1 != 0)) {
    FUN_011d0e00();
    __cxa_guard_release(&DAT_050de808);
  }
  uVar3 = (ulong)local_64;
  if ((DAT_050de7f8 & uVar3 < 0x15) == 0) {
    uVar3 = 0;
  }
  iVar1 = DAT_050de800[uVar3];
  if (((DAT_050de808 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_050de808), iVar2 != 0)) {
    FUN_011d0e00();
    __cxa_guard_release(&DAT_050de808);
  }
  uVar3 = (ulong)*(int *)(param_1 + 0xf8);
  if ((DAT_050de7f8 & uVar3 < 0x15) == 0) {
    uVar3 = 0;
  }
  return iVar1 != DAT_050de800[uVar3];
}


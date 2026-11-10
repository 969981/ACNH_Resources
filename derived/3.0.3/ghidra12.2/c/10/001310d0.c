
int FUN_001310d0(long param_1,long param_2,long param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  
  uVar2 = *(ushort *)(param_2 + 0x80);
  uVar1 = uVar2 & 0xf0;
  if ((uVar2 & 0xf) == 2) {
    if (uVar1 == 0x20) {
      sVar7 = *(short *)(param_1 + 0x6f498);
      param_2 = param_1 + 0x6d650;
    }
    else {
      if (uVar1 != 0x10) goto LAB_00131180;
      sVar7 = *(short *)(param_1 + 0x6f49a);
      param_2 = param_1 + 0x6d760;
    }
    if (sVar7 == 0) {
      return 0;
    }
    sVar7 = sVar7 + -1;
  }
  else {
LAB_00131180:
    sVar7 = 0;
  }
  if ((uVar2 & 0xf0) == 0) {
    iVar6 = 0;
    do {
      sVar4 = FUN_0010b7a0(param_1,param_2,param_3,param_4);
      iVar5 = (int)sVar4;
      if (iVar5 < 0) {
        return iVar5;
      }
      param_4 = param_4 + iVar5 * -2;
      param_3 = param_3 + (long)iVar5 * 2;
      iVar6 = iVar5 + iVar6;
      param_2 = param_2 + 0x88;
      bVar3 = sVar7 != 0;
      sVar7 = sVar7 + -1;
    } while (bVar3);
  }
  else if (uVar1 == 0x40) {
    iVar6 = 0;
    do {
      sVar4 = FUN_0010b7a0(param_1,param_2,param_3,param_4);
      iVar5 = (int)sVar4;
      if (iVar5 < 0) {
        return iVar5;
      }
      param_4 = param_4 + iVar5 * -2;
      param_3 = param_3 + (long)iVar5 * 2;
      iVar6 = iVar5 + iVar6;
      param_2 = param_2 + 0x88;
      bVar3 = sVar7 != 0;
      sVar7 = sVar7 + -1;
    } while (bVar3);
  }
  else if (uVar1 == 0x80) {
    iVar6 = 0;
    do {
      sVar4 = FUN_0010b7a0(param_1,param_2,param_3,param_4);
      iVar5 = (int)sVar4;
      if (iVar5 < 0) {
        return iVar5;
      }
      param_4 = param_4 + iVar5 * -2;
      param_3 = param_3 + (long)iVar5 * 2;
      iVar6 = iVar5 + iVar6;
      param_2 = param_2 + 0x88;
      bVar3 = sVar7 != 0;
      sVar7 = sVar7 + -1;
    } while (bVar3);
  }
  else {
    iVar6 = 0;
    do {
      if ((((uVar2 & 0xf0) == 0) || (uVar1 == 0x80)) || (uVar1 == 0x40)) {
        iVar5 = FUN_0010b7a0(param_1,param_2,param_3,param_4);
        sVar4 = (short)iVar5;
      }
      else {
        iVar5 = FUN_00105e20(param_1,param_2,param_3,param_4);
        sVar4 = (short)iVar5;
      }
      if (sVar4 < 0) {
        return iVar5;
      }
      param_4 = param_4 + iVar5 * -2;
      param_3 = param_3 + (long)(short)iVar5 * 2;
      iVar6 = iVar5 + iVar6;
      param_2 = param_2 + 0x88;
      bVar3 = sVar7 != 0;
      sVar7 = sVar7 + -1;
    } while (bVar3);
  }
  return iVar6;
}


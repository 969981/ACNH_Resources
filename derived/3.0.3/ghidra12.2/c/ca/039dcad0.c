
long FUN_039dcad0(long param_1,int *param_2,int param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 extraout_x1;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  
  iVar3 = param_2[1];
  if (*param_2 != -0x2ea54e13) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x5d18));
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x5d18));
    FUN_039db950(param_1,extraout_x1,0);
  }
  FUN_039dc1dc(param_1,param_2);
  if ((*(byte *)(param_1 + 9) >> 3 & 1) != 0) {
    FUN_039dbfa0(param_1);
  }
  *param_2 = -0x2ea54e13;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  if ((*(byte *)(param_1 + 9) >> 3 & 1) != 0) {
    FUN_039dbfa0(param_1);
  }
  piVar5 = param_2;
  if ((int)param_4 < 1) {
    uVar6 = -param_4 - 0x20;
    if (uVar6 < 0x25) {
      piVar4 = (int *)0x0;
      iVar1 = param_4 - (param_3 + (param_6 & 0xffff));
      param_4 = -param_4;
      uVar6 = iVar1 + iVar3;
    }
    else {
      piVar4 = (int *)((long)param_2 + (long)(int)uVar6);
      iVar3 = iVar3 - uVar6;
      if ((*(byte *)(param_1 + 9) >> 3 & 1) != 0) {
        FUN_039dbfa0(param_1);
      }
      *piVar4 = -0x2ea54e13;
      piVar4[3] = 0;
      piVar4[4] = 0;
      piVar4[5] = 0;
      piVar4[6] = 0;
      if ((*(byte *)(param_1 + 9) >> 3 & 1) != 0) {
        FUN_039dbfa0(param_1);
      }
      iVar1 = param_2[1];
      param_2[1] = uVar6;
      piVar4[1] = iVar3;
      piVar4[2] = param_4 + 0x20;
      lVar2 = 0;
      if (iVar1 != 0) {
        lVar2 = (long)iVar1 + (long)param_2;
      }
      *(int *)(lVar2 + 8) = -iVar3;
      param_4 = 0x20;
      uVar6 = (iVar3 - (param_3 + (param_6 & 0xffff))) - 0x20;
      piVar5 = piVar4;
    }
  }
  else {
    iVar1 = (param_3 + 3U & 0xfffffffc) + param_4 + (param_6 & 0xffff);
    uVar6 = iVar3 - iVar1;
    if (uVar6 < 0x25) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)((long)param_2 + (long)iVar1);
      if ((*(byte *)(param_1 + 9) >> 3 & 1) != 0) {
        FUN_039dbfa0(param_1);
      }
      *piVar4 = -0x2ea54e13;
      piVar4[3] = 0;
      piVar4[4] = 0;
      piVar4[5] = 0;
      piVar4[6] = 0;
      if ((*(byte *)(param_1 + 9) >> 3 & 1) != 0) {
        FUN_039dbfa0(param_1);
      }
      iVar3 = param_2[1];
      param_2[1] = iVar1;
      piVar4[1] = uVar6;
      piVar4[2] = -iVar1;
      iVar1 = -uVar6;
      uVar6 = 0;
      lVar2 = 0;
      if (iVar3 != 0) {
        lVar2 = (long)iVar3 + (long)param_2;
      }
      *(int *)(lVar2 + 8) = iVar1;
    }
  }
  *(short *)((long)piVar5 + 0x1a) = (short)param_6;
  *piVar5 = -0x52fff2e2;
  piVar5[5] = 0;
  *(short *)(piVar5 + 6) = (short)uVar6;
  *(undefined1 *)((long)piVar5 + 0x1d) = 0;
  *(short *)((long)piVar5 + 0x1e) = (short)param_4;
  *(byte *)(piVar5 + 7) =
       (*(byte *)(piVar5 + 7) & 2) + (char)LZCOUNT(param_5 & 0xffff) * -0x10 + -0x20;
  *(short *)((long)piVar5 + (ulong)param_4 + -2) = (short)param_4;
  uVar6 = (uint)*(byte *)(param_1 + 9);
  if (piVar4 != (int *)0x0) {
    if ((*(byte *)(param_1 + 9) >> 3 & 1) != 0) {
      FUN_039dbfa0(param_1);
    }
    FUN_039db710(param_1,piVar4);
    FUN_039dbda0(param_1,piVar4);
    uVar6 = (uint)*(byte *)(param_1 + 9);
    if ((*(byte *)(param_1 + 9) >> 3 & 1) != 0) {
      FUN_039dbfa0(param_1);
      uVar6 = (uint)*(byte *)(param_1 + 9);
    }
  }
  if ((uVar6 >> 3 & 1) != 0) {
    FUN_039dbfa0(param_1);
  }
  FUN_039db710(param_1,param_2);
  FUN_039dbda0(param_1,param_2);
  if ((*(byte *)(param_1 + 9) >> 3 & 1) != 0) {
    FUN_039dbfa0(param_1);
  }
  iVar3 = piVar5[1];
  *(int *)(param_1 + 0x61c0) = *(int *)(param_1 + 0x61c0) + iVar3;
  *(int *)(param_1 + 0x61c4) = *(int *)(param_1 + 0x61c4) - iVar3;
  return (long)piVar5 + (ulong)param_4;
}


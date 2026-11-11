
long * FUN_00670bd0(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
  }
  else {
    FUN_004435a0();
    lVar2 = *param_1;
    *param_1 = *param_2;
  }
  if (lVar2 != 0) {
    FUN_004435c0();
  }
  if (param_2[1] == 0) {
    lVar2 = param_1[1];
    param_1[1] = 0;
  }
  else {
    FUN_004435a0();
    lVar2 = param_1[1];
    param_1[1] = param_2[1];
  }
  if (lVar2 != 0) {
    FUN_004435c0();
  }
  if (param_2 != param_1) {
    lVar3 = param_2[2];
    iVar1 = (int)param_2[3];
    lVar2 = param_1[2];
    if ((int)(*(uint *)((long)param_1 + 0x1c) & 0x3fffffff) < iVar1) {
      lVar2 = FUN_004267f0(PTR_DAT_048607b8,iVar1,2,lVar2,(int)param_1[3]);
      param_1[2] = lVar2;
    }
    FUN_0043aa30(lVar2,lVar3,(long)iVar1 << 1);
    *(int *)(param_1 + 3) = iVar1;
    iVar1 = (int)param_2[5];
    lVar3 = param_2[4];
    lVar2 = param_1[4];
    if ((int)(*(uint *)((long)param_1 + 0x2c) & 0x3fffffff) < iVar1) {
      lVar2 = FUN_004267f0(PTR_DAT_048607b8,iVar1,8,lVar2,(int)param_1[5]);
      param_1[4] = lVar2;
    }
    FUN_0043aa30(lVar2,lVar3,(long)iVar1 << 3);
    *(int *)(param_1 + 5) = iVar1;
    iVar1 = (int)param_2[7];
    lVar3 = param_2[6];
    lVar2 = param_1[6];
    if ((int)(*(uint *)((long)param_1 + 0x3c) & 0x3fffffff) < iVar1) {
      lVar2 = FUN_004267f0(PTR_DAT_048607b8,iVar1,8,lVar2,(int)param_1[7]);
      param_1[6] = lVar2;
    }
    FUN_0043aa30(lVar2,lVar3,(long)iVar1 << 3);
    *(int *)(param_1 + 7) = iVar1;
    iVar1 = (int)param_2[9];
    lVar3 = param_2[8];
    lVar2 = param_1[8];
    if ((int)(*(uint *)((long)param_1 + 0x4c) & 0x3fffffff) < iVar1) {
      lVar2 = FUN_004267f0(PTR_DAT_048607b8,iVar1,0x40,lVar2,(int)param_1[9]);
      param_1[8] = lVar2;
    }
    FUN_0043aa30(lVar2,lVar3,(long)iVar1 << 6);
    *(int *)(param_1 + 9) = iVar1;
    iVar1 = (int)param_2[0xb];
    lVar3 = param_2[10];
    lVar2 = param_1[10];
    if ((int)(*(uint *)((long)param_1 + 0x5c) & 0x3fffffff) < iVar1) {
      lVar2 = FUN_004267f0(PTR_DAT_048607b8,iVar1,0x70,lVar2,(int)param_1[0xb]);
      param_1[10] = lVar2;
    }
    FUN_0043aa30(lVar2,lVar3,(long)iVar1 * 0x70);
    *(int *)(param_1 + 0xb) = iVar1;
    iVar1 = (int)param_2[0xd];
    lVar3 = param_2[0xc];
    lVar2 = param_1[0xc];
    if ((int)(*(uint *)((long)param_1 + 0x6c) & 0x3fffffff) < iVar1) {
      lVar2 = FUN_004267f0(PTR_DAT_048607b8,iVar1,2,lVar2,(int)param_1[0xd]);
      param_1[0xc] = lVar2;
    }
    FUN_0043aa30(lVar2,lVar3,(long)iVar1 << 1);
    *(int *)(param_1 + 0xd) = iVar1;
  }
  lVar2 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = lVar2;
  lVar2 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = lVar2;
  lVar2 = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = lVar2;
  param_1[0x14] = param_2[0x14];
  return param_1;
}


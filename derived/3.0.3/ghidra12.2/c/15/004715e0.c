
void FUN_004715e0(long *param_1,long *param_2)

{
  long *__s;
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long local_450;
  undefined4 local_448;
  
  *(undefined4 *)(param_1 + 0x2ad) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  (**(code **)(*param_1 + 0x80))(param_1,0x7fffffff);
  local_450 = 0;
  local_448 = 0;
  if (param_2 == (long *)0x0) {
    param_2 = &local_450;
    FUN_00471d50(0x2000,&local_450);
  }
  lVar6 = 0x400;
  if (*param_2 != 0) {
    lVar6 = *param_2;
  }
  FUN_00474d90(param_1 + 10,0x20,8,lVar6,param_1[8]);
  __s = param_1 + 0x19;
  plVar5 = param_1 + 0x6e;
  plVar7 = param_1 + 0x2ac;
  param_1[0x6c] = (long)plVar5;
  param_1[0x6d] = (long)plVar7;
  memset(__s,0,0x148);
  if (0 < (int)param_2[1]) {
    lVar6 = 0;
    do {
      uVar2 = param_2[lVar6 * 3 + 2];
      lVar4 = param_2[lVar6 * 3 + 3];
      lVar3 = param_2[lVar6 * 3 + 4];
      if (plVar7 <= plVar5) {
        CallSupervisor(0x26);
        plVar5 = (long *)param_1[0x6c];
      }
      param_1[0x6c] = (long)(plVar5 + 0xe);
      FUN_00473530(plVar5,uVar2,lVar4,lVar3,param_1[8],param_1 + 10);
      iVar1 = (int)param_1[0x6b];
      if (0 < iVar1) {
        lVar4 = 0;
        do {
          if (*(long *)(param_1[lVar4 + 0x42] + 8) == plVar5[1]) {
            FUN_00473650(plVar5);
            if (plVar5 + 0xe == (long *)param_1[0x6c]) {
              param_1[0x6c] = (long)plVar5;
            }
            plVar5 = (long *)param_1[lVar4 + 0x42];
            goto LAB_00471748;
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < iVar1);
      }
      *(int *)(param_1 + 0x6b) = iVar1 + 1;
      param_1[(long)iVar1 + 0x42] = (long)plVar5;
LAB_00471748:
      *(long **)((long)param_1 + ((ulong)param_2[lVar6 * 3 + 2] >> 1 & 0x7ffffffffffffff8) + 200) =
           plVar5;
      lVar6 = lVar6 + 1;
      if ((int)param_2[1] <= lVar6) goto code_r0x0047176c;
      plVar5 = (long *)param_1[0x6c];
      plVar7 = (long *)param_1[0x6d];
    } while( true );
  }
LAB_004718d8:
  lVar6 = 0;
  param_1[0x41] = 0;
  lVar4 = param_1[0x40];
joined_r0x0047177c:
  if (lVar4 == 0) {
    param_1[0x40] = lVar6;
    lVar3 = param_1[0x3f];
    lVar4 = lVar6;
  }
  else {
    lVar3 = param_1[0x3f];
  }
  if (lVar3 == 0) {
    param_1[0x3f] = lVar4;
    lVar6 = param_1[0x3e];
    lVar3 = lVar4;
  }
  else {
    lVar6 = param_1[0x3e];
  }
  if (lVar6 == 0) {
    param_1[0x3e] = lVar3;
    lVar4 = param_1[0x3d];
    lVar6 = lVar3;
  }
  else {
    lVar4 = param_1[0x3d];
  }
  if (lVar4 == 0) {
    param_1[0x3d] = lVar6;
    lVar3 = param_1[0x3c];
    lVar4 = lVar6;
  }
  else {
    lVar3 = param_1[0x3c];
  }
  if (lVar3 == 0) {
    param_1[0x3c] = lVar4;
    lVar6 = param_1[0x3b];
    lVar3 = lVar4;
  }
  else {
    lVar6 = param_1[0x3b];
  }
  if (lVar6 == 0) {
    param_1[0x3b] = lVar3;
    lVar4 = param_1[0x3a];
    lVar6 = lVar3;
  }
  else {
    lVar4 = param_1[0x3a];
  }
  if (lVar4 == 0) {
    param_1[0x3a] = lVar6;
    lVar3 = param_1[0x39];
    lVar4 = lVar6;
  }
  else {
    lVar3 = param_1[0x39];
  }
  if (lVar3 == 0) {
    param_1[0x39] = lVar4;
    lVar6 = param_1[0x38];
    lVar3 = lVar4;
  }
  else {
    lVar6 = param_1[0x38];
  }
  if (lVar6 == 0) {
    param_1[0x38] = lVar3;
    lVar4 = param_1[0x37];
    lVar6 = lVar3;
  }
  else {
    lVar4 = param_1[0x37];
  }
  if (lVar4 == 0) {
    param_1[0x37] = lVar6;
    lVar3 = param_1[0x36];
    lVar4 = lVar6;
  }
  else {
    lVar3 = param_1[0x36];
  }
  if (lVar3 == 0) {
    param_1[0x36] = lVar4;
    lVar6 = param_1[0x35];
    lVar3 = lVar4;
  }
  else {
    lVar6 = param_1[0x35];
  }
  if (lVar6 == 0) {
    param_1[0x35] = lVar3;
    lVar4 = param_1[0x34];
    lVar6 = lVar3;
  }
  else {
    lVar4 = param_1[0x34];
  }
  if (lVar4 == 0) {
    param_1[0x34] = lVar6;
    lVar3 = param_1[0x33];
    lVar4 = lVar6;
  }
  else {
    lVar3 = param_1[0x33];
  }
  if (lVar3 == 0) {
    param_1[0x33] = lVar4;
    lVar6 = param_1[0x32];
    lVar3 = lVar4;
  }
  else {
    lVar6 = param_1[0x32];
  }
  if (lVar6 == 0) {
    param_1[0x32] = lVar3;
    lVar4 = param_1[0x31];
    lVar6 = lVar3;
  }
  else {
    lVar4 = param_1[0x31];
  }
  if (lVar4 == 0) {
    param_1[0x31] = lVar6;
    lVar3 = param_1[0x30];
    lVar4 = lVar6;
  }
  else {
    lVar3 = param_1[0x30];
  }
  if (lVar3 == 0) {
    param_1[0x30] = lVar4;
    lVar6 = param_1[0x2f];
    lVar3 = lVar4;
  }
  else {
    lVar6 = param_1[0x2f];
  }
  if (lVar6 == 0) {
    param_1[0x2f] = lVar3;
    lVar4 = param_1[0x2e];
    lVar6 = lVar3;
  }
  else {
    lVar4 = param_1[0x2e];
  }
  if (lVar4 == 0) {
    param_1[0x2e] = lVar6;
    lVar3 = param_1[0x2d];
    lVar4 = lVar6;
  }
  else {
    lVar3 = param_1[0x2d];
  }
  if (lVar3 == 0) {
    param_1[0x2d] = lVar4;
    lVar6 = param_1[0x2c];
    lVar3 = lVar4;
  }
  else {
    lVar6 = param_1[0x2c];
  }
  if (lVar6 == 0) {
    param_1[0x2c] = lVar3;
    lVar4 = param_1[0x2b];
    lVar6 = lVar3;
  }
  else {
    lVar4 = param_1[0x2b];
  }
  if (lVar4 == 0) {
    param_1[0x2b] = lVar6;
    lVar3 = param_1[0x2a];
    lVar4 = lVar6;
  }
  else {
    lVar3 = param_1[0x2a];
  }
  if (lVar3 == 0) {
    param_1[0x2a] = lVar4;
    lVar6 = param_1[0x29];
    lVar3 = lVar4;
  }
  else {
    lVar6 = param_1[0x29];
  }
  if (lVar6 == 0) {
    param_1[0x29] = lVar3;
    lVar4 = param_1[0x28];
    lVar6 = lVar3;
  }
  else {
    lVar4 = param_1[0x28];
  }
  if (lVar4 == 0) {
    param_1[0x28] = lVar6;
    lVar3 = param_1[0x27];
    lVar4 = lVar6;
  }
  else {
    lVar3 = param_1[0x27];
  }
  if (lVar3 == 0) {
    param_1[0x27] = lVar4;
    lVar6 = param_1[0x26];
    lVar3 = lVar4;
  }
  else {
    lVar6 = param_1[0x26];
  }
  if (lVar6 == 0) {
    param_1[0x26] = lVar3;
    lVar4 = param_1[0x25];
    lVar6 = lVar3;
  }
  else {
    lVar4 = param_1[0x25];
  }
  if (lVar4 == 0) {
    param_1[0x25] = lVar6;
    lVar3 = param_1[0x24];
    lVar4 = lVar6;
  }
  else {
    lVar3 = param_1[0x24];
  }
  if (lVar3 == 0) {
    param_1[0x24] = lVar4;
    lVar6 = param_1[0x23];
    lVar3 = lVar4;
  }
  else {
    lVar6 = param_1[0x23];
  }
  if (lVar6 == 0) {
    param_1[0x23] = lVar3;
    lVar4 = param_1[0x22];
    lVar6 = lVar3;
  }
  else {
    lVar4 = param_1[0x22];
  }
  if (lVar4 == 0) {
    param_1[0x22] = lVar6;
    lVar3 = param_1[0x21];
    lVar4 = lVar6;
  }
  else {
    lVar3 = param_1[0x21];
  }
  if (lVar3 == 0) {
    param_1[0x21] = lVar4;
    lVar6 = param_1[0x20];
    lVar3 = lVar4;
  }
  else {
    lVar6 = param_1[0x20];
  }
  if (lVar6 == 0) {
    param_1[0x20] = lVar3;
    lVar4 = param_1[0x1f];
    lVar6 = lVar3;
  }
  else {
    lVar4 = param_1[0x1f];
  }
  if (lVar4 == 0) {
    param_1[0x1f] = lVar6;
    lVar3 = param_1[0x1e];
    lVar4 = lVar6;
  }
  else {
    lVar3 = param_1[0x1e];
  }
  if (lVar3 == 0) {
    param_1[0x1e] = lVar4;
    lVar6 = param_1[0x1d];
    lVar3 = lVar4;
  }
  else {
    lVar6 = param_1[0x1d];
  }
  if (lVar6 == 0) {
    param_1[0x1d] = lVar3;
    lVar4 = param_1[0x1c];
    lVar6 = lVar3;
  }
  else {
    lVar4 = param_1[0x1c];
  }
  if (lVar4 == 0) {
    param_1[0x1c] = lVar6;
    lVar3 = param_1[0x1b];
    lVar4 = lVar6;
  }
  else {
    lVar3 = param_1[0x1b];
  }
  if (lVar3 == 0) {
    param_1[0x1b] = lVar4;
    lVar6 = param_1[0x1a];
    lVar3 = lVar4;
  }
  else {
    lVar6 = param_1[0x1a];
  }
  if (lVar6 == 0) {
    param_1[0x1a] = lVar3;
    lVar4 = *__s;
    lVar6 = lVar3;
  }
  else {
    lVar4 = *__s;
  }
  if (lVar4 == 0) {
    *__s = lVar6;
  }
  return;
code_r0x0047176c:
  lVar6 = param_1[0x41];
  if (lVar6 != 0) {
    lVar4 = param_1[0x40];
    goto joined_r0x0047177c;
  }
  goto LAB_004718d8;
}


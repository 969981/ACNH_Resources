
void FUN_0049f670(long *param_1,int param_2,uint param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  ulong *puVar5;
  uint local_40 [2];
  undefined4 local_38 [2];
  
  piVar4 = (int *)param_1[10];
  uVar3 = (*piVar4 - piVar4[4]) + piVar4[8];
  uVar2 = (uVar3 & 0xff00ff00 | param_2 << 0x1e) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = *(uint *)(param_1 + 1);
  if (uVar3 == (*(uint *)((long)param_1 + 0xc) & 0x3fffffff)) {
    FUN_00426990(PTR_DAT_048607b8,param_1,4);
    uVar3 = *(uint *)(param_1 + 1);
  }
  *(uint *)(*param_1 + (long)(int)uVar3 * 4) = uVar2 >> 0x10 | uVar2 << 0x10;
  puVar5 = (ulong *)param_1[10];
  *(uint *)(param_1 + 1) = uVar3 + 1;
  local_38[0] = 0xffffffff;
  uVar1 = (long)*puVar5 + 4;
  if (puVar5[1] < uVar1) {
    FUN_004462a0(puVar5,local_38,4);
  }
  else {
    memcpy((void *)*puVar5,local_38,4);
    *puVar5 = uVar1;
  }
  puVar5 = (ulong *)param_1[10];
  uVar3 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
  local_40[0] = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar1 = (long)*puVar5 + 4;
  if (puVar5[1] < uVar1) {
    FUN_004462a0(puVar5,local_40,4);
  }
  else {
    memcpy((void *)*puVar5,local_40,4);
    *puVar5 = uVar1;
  }
  return;
}


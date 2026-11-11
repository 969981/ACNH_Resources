
void FUN_00458880(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  
  if ((int)param_1[5] != 0) {
    return;
  }
  uVar4 = FUN_0044ecf0(param_2[1]);
  if ((uVar4 & 1) == 0) {
    return;
  }
  uVar2 = *param_2;
  lVar3 = param_2[1];
  if (lVar3 == 0) {
    uVar4 = 0;
    uVar5 = *(uint *)(param_1 + 1);
    if (uVar5 != (*(uint *)((long)param_1 + 0xc) & 0x3fffffff)) goto LAB_004588f8;
  }
  else {
    uVar4 = FUN_00428370(lVar3);
    if ((uVar4 & 1) != 0) {
      FUN_0043dd30(uVar4 & 0xfffffffffffffffe);
    }
    uVar5 = *(uint *)(param_1 + 1);
    if (uVar5 != (*(uint *)((long)param_1 + 0xc) & 0x3fffffff)) goto LAB_004588f8;
  }
  FUN_00426990(PTR_DAT_048607b8,param_1,0x20);
  uVar5 = *(uint *)(param_1 + 1);
LAB_004588f8:
  puVar1 = (undefined8 *)(*param_1 + (long)(int)uVar5 * 0x20);
  puVar1[2] = uVar4;
  *puVar1 = uVar2;
  puVar1[1] = lVar3;
  *(undefined4 *)(puVar1 + 3) = 0xffffffff;
  *(uint *)(param_1 + 1) = uVar5 + 1;
  return;
}


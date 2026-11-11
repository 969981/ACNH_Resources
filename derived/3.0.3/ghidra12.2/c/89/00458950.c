
void FUN_00458950(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  uint uVar6;
  
  if ((int)param_1[5] != 0) {
    return;
  }
  uVar5 = FUN_0044ecf0(param_2[1]);
  if ((uVar5 & 1) == 0) {
    return;
  }
  uVar2 = *param_2;
  lVar3 = param_2[1];
  uVar4 = *(undefined4 *)(param_2 + 2);
  if (lVar3 == 0) {
    uVar5 = 0;
    uVar6 = *(uint *)(param_1 + 1);
    if (uVar6 != (*(uint *)((long)param_1 + 0xc) & 0x3fffffff)) goto LAB_004589d0;
  }
  else {
    uVar5 = FUN_00428370(lVar3);
    if ((uVar5 & 1) != 0) {
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
    }
    uVar6 = *(uint *)(param_1 + 1);
    if (uVar6 != (*(uint *)((long)param_1 + 0xc) & 0x3fffffff)) goto LAB_004589d0;
  }
  FUN_00426990(PTR_DAT_048607b8,param_1,0x20);
  uVar6 = *(uint *)(param_1 + 1);
LAB_004589d0:
  puVar1 = (undefined8 *)(*param_1 + (long)(int)uVar6 * 0x20);
  *puVar1 = uVar2;
  puVar1[1] = lVar3;
  puVar1[2] = uVar5;
  *(undefined4 *)(puVar1 + 3) = uVar4;
  *(uint *)(param_1 + 1) = uVar6 + 1;
  return;
}



void FUN_0045f690(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 == (*(uint *)((long)param_1 + 0xc) & 0x3fffffff)) {
    FUN_00426990(PTR_DAT_048607b8,param_1,0x30);
    uVar2 = *(uint *)(param_1 + 1);
  }
  lVar5 = *param_1;
  puVar4 = (undefined8 *)(lVar5 + (long)(int)uVar2 * 0x30);
  uVar1 = param_2[1];
  *puVar4 = *param_2;
  puVar4[1] = uVar1;
  uVar3 = param_2[2];
  puVar4[2] = uVar3;
  if ((uVar3 & 1) != 0) {
    FUN_0043dd30(uVar3 & 0xfffffffffffffffe);
  }
  lVar5 = lVar5 + (long)(int)uVar2 * 0x30;
  uVar1 = param_3[1];
  *(undefined8 *)(lVar5 + 0x18) = *param_3;
  *(undefined8 *)(lVar5 + 0x20) = uVar1;
  uVar3 = param_3[2];
  *(ulong *)(lVar5 + 0x28) = uVar3;
  if ((uVar3 & 1) != 0) {
    FUN_0043dd30(uVar3 & 0xfffffffffffffffe);
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  return;
}


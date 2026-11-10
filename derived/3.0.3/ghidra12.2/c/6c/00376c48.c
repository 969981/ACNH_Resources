
void FUN_00376c48(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    return;
  }
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 & 0xc00) == 0) {
    uVar6 = FUN_00366284(*(undefined8 *)(param_2 + 0xb8),DAT_04c62f08);
    *(undefined8 *)(param_1 + 0x40) = uVar6;
    return;
  }
  uVar2 = ((ulong)(uVar3 >> 2) & 3) << 2 | ((ulong)(uVar3 >> 2) & 3) << 4;
  lVar4 = ((ulong)uVar3 & 3) * 0x10;
  uVar7 = (ulong)(uVar3 >> 6) & 8;
  lVar1 = *(long *)(param_1 + 0x18) + (lVar4 + ((ulong)uVar3 & 0x30) | uVar7) + uVar2;
  lVar4 = *(long *)(param_1 + 0x18) +
          (ulong)((int)uVar2 + ((int)lVar4 + (int)((ulong)uVar3 & 0x30) | (uint)uVar7) + 4);
  if ((uVar3 & 0xc00) != 0x800) {
    lVar4 = lVar1;
  }
  uVar5 = FUN_00366294(lVar1,lVar4);
  uVar6 = FUN_00366284(*(undefined8 *)(param_2 + 0xb8),uVar5);
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  return;
}


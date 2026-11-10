
void FUN_00376b58(long param_1,undefined8 param_2)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar2 = *(uint *)(param_1 + 0x10);
    iVar4 = DAT_04c62f08;
    if ((uVar2 & 0xc00) != 0) {
      uVar1 = ((ulong)(uVar2 >> 2) & 3) << 2 | ((ulong)(uVar2 >> 2) & 3) << 4;
      lVar3 = ((ulong)uVar2 & 3) * 0x10;
      uVar6 = (ulong)(uVar2 >> 6) & 8;
      lVar7 = *(long *)(param_1 + 0x18) + (lVar3 + ((ulong)uVar2 & 0x30) | uVar6) + uVar1;
      lVar3 = *(long *)(param_1 + 0x18) +
              (ulong)((int)uVar1 + ((int)lVar3 + (int)((ulong)uVar2 & 0x30) | (uint)uVar6) + 4);
      if ((uVar2 & 0xc00) != 0x800) {
        lVar3 = lVar7;
      }
      iVar4 = FUN_00366294(lVar7,lVar3);
    }
    if (iVar4 == 7) {
      uVar5 = FUN_0034ebd0(*(undefined8 *)(param_1 + 0x40));
      FUN_0034edf0(*(undefined8 *)(param_1 + 0x40),param_2);
      FUN_00367b50(uVar5);
      lVar7 = *(long *)(param_1 + 0x40);
      if (lVar7 != 0) {
        FUN_0034ebc0(lVar7);
        FUN_00367b50(lVar7);
      }
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}



void FUN_003c14e0(long param_1,undefined4 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 0x1c4);
  if (0 < (int)uVar1) {
    uVar2 = (ulong)uVar1 & 3;
    if (uVar1 < 4) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      lVar5 = param_1;
      do {
        uVar3 = uVar3 + 4;
        *(undefined4 *)(lVar5 + 0x84) = param_2;
        *(undefined4 *)(lVar5 + 0x164) = param_2;
        *(undefined4 *)(lVar5 + 0x244) = param_2;
        *(undefined4 *)(lVar5 + 0x324) = param_2;
        lVar5 = lVar5 + 0x380;
      } while (((ulong)uVar1 & 0xfffffffc) != uVar3);
    }
    if ((uVar1 & 3) != 0) {
      puVar4 = (undefined4 *)(param_1 + uVar3 * 0xe0 + 0x84);
      do {
        uVar2 = uVar2 - 1;
        *puVar4 = param_2;
        puVar4 = puVar4 + 0x38;
      } while (uVar2 != 0);
    }
  }
  return;
}


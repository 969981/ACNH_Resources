
/* WARNING: Removing unreachable block (ram,0x02c42ecc) */
/* WARNING: Removing unreachable block (ram,0x02c42eec) */
/* WARNING: Removing unreachable block (ram,0x02c42f04) */
/* WARNING: Removing unreachable block (ram,0x02c42f08) */
/* WARNING: Removing unreachable block (ram,0x02c42f24) */
/* WARNING: Removing unreachable block (ram,0x02c42f4c) */
/* WARNING: Removing unreachable block (ram,0x02c42f3c) */
/* WARNING: Removing unreachable block (ram,0x02c42f18) */
/* WARNING: Removing unreachable block (ram,0x02c42ef8) */

undefined8 FUN_02c42d98(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_2 + 8);
  lVar3 = 0;
  if (*(long *)(param_1 + 0x210) != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x210) + 0xa0);
  }
  if (lVar2 == lVar3) {
    if (*(int *)(param_1 + 0x1b0) == 8) {
      *(undefined4 *)(param_1 + 0x240) = 0xb;
      *(undefined1 *)(param_1 + 0x2e8) = 1;
      return 1;
    }
  }
  else {
    lVar3 = 0;
    if (*(long *)(param_1 + 0x218) != 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x218) + 0xa0);
    }
    if (lVar2 == lVar3) {
      *(byte *)(param_1 + 0x308) = *(byte *)(param_1 + 0x308) | 2;
      if (*(int *)(param_1 + 0x1b0) != 3) {
        return 1;
      }
      if (*(uint *)(param_1 + 0x2a8) <= *(uint *)(param_1 + 0x2d8)) {
        return 1;
      }
      if (*(long *)(*(long *)(param_1 + 0x2b0) + (long)(int)*(uint *)(param_1 + 0x2d8) * 8) == 0) {
        return 1;
      }
                    /* WARNING: Could not recover jumptable at 0x02c42e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(&UNK_02c42e7c + (ulong)DAT_0417fd85 * 4))();
      return uVar1;
    }
    lVar3 = 0;
    if (*(long *)(param_1 + 0x220) != 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x220) + 0xa0);
    }
    if (lVar2 != lVar3) {
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 0x240) = 0x14;
  return 1;
}


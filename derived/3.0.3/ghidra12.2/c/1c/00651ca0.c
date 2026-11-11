
/* WARNING: Removing unreachable block (ram,0x00651cc8) */

void FUN_00651ca0(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  uVar3 = *(uint *)(param_2 + 0x100);
  if (0 < (int)uVar3) {
    if (uVar3 == 1) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      do {
        lVar5 = lVar4 * 8;
        lVar4 = lVar4 + 2;
        puVar1 = (undefined8 *)(param_2 + lVar5);
        puVar2 = (undefined8 *)(param_1 + lVar5);
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
      } while ((ulong)uVar3 - ((ulong)uVar3 & 1) != lVar4);
      if ((uVar3 & 1) == 0) {
        return;
      }
    }
    *(undefined8 *)(param_1 + lVar4 * 8) = *(undefined8 *)(param_2 + lVar4 * 8);
  }
  return;
}


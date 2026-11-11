
/* WARNING: Removing unreachable block (ram,0x003a1568) */

void FUN_003a1540(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  ushort uVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  
  *param_2 = 0;
  uVar2 = *(ushort *)(param_1 + 0x22);
  if (1 < uVar2) {
    lVar4 = *(long *)(param_1 + 0x10);
    if (uVar2 == 2) {
      lVar5 = 1;
    }
    else {
      uVar1 = 0;
      puVar7 = (undefined4 *)(lVar4 + 4);
      puVar3 = param_2;
      do {
        uVar6 = uVar1;
        uVar1 = uVar6 + 2;
        puVar3[1] = puVar7[-1];
        puVar3[2] = *puVar7;
        puVar7 = puVar7 + 2;
        puVar3 = puVar3 + 2;
      } while (((ulong)uVar2 - 1 & 0xfffffffffffffffe) != uVar1);
      lVar5 = uVar6 + 3;
      if (((ulong)uVar2 - 1 & 1) == 0) {
        return;
      }
    }
    param_2[lVar5] = *(undefined4 *)(lVar5 * 4 + lVar4 + -4);
  }
  return;
}


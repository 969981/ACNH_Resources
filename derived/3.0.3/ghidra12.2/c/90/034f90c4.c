
/* WARNING: Removing unreachable block (ram,0x034f924c) */
/* WARNING: Removing unreachable block (ram,0x034f91e4) */
/* WARNING: Removing unreachable block (ram,0x034f9158) */
/* WARNING: Removing unreachable block (ram,0x034f9120) */
/* WARNING: Removing unreachable block (ram,0x034f9190) */
/* WARNING: Removing unreachable block (ram,0x034f9218) */
/* WARNING: Removing unreachable block (ram,0x034f9280) */

void FUN_034f90c4(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)(param_1 + 0x220);
  lVar3 = *(long *)(lVar4 + 0x570);
  if (lVar3 != 0) {
    uVar2 = *(uint *)(param_1 + 0x1d140);
    uVar5 = (ulong)uVar2;
    if ((int)uVar2 < 10) {
      if (9 < uVar2) {
        uVar5 = 0;
      }
      lVar6 = *(long *)(lVar4 + 0x570 + uVar5 * 8);
      if (lVar6 != 0) {
        *(undefined8 *)(*(long *)(lVar3 + 0x218) + 0x1478) = *(undefined8 *)(lVar6 + 0x218);
        lVar4 = *(long *)(param_1 + 0x220);
      }
    }
    if (*(long *)(lVar4 + 0x578) != 0) {
      *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x578) + 0x218) + 0x1470) =
           *(undefined8 *)(lVar3 + 0x218);
      lVar4 = *(long *)(param_1 + 0x220);
    }
    if (*(long *)(lVar4 + 0x588) != 0) {
      *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x588) + 0x218) + 0x1470) =
           *(undefined8 *)(lVar3 + 0x218);
      lVar4 = *(long *)(param_1 + 0x220);
    }
    uVar2 = *(uint *)(param_1 + 0x1d144);
    if ((int)uVar2 < 10) {
      plVar1 = (long *)(lVar4 + 0x570) + uVar2;
      if (9 < uVar2) {
        plVar1 = (long *)(lVar4 + 0x570);
      }
      if (*plVar1 != 0) {
        *(undefined8 *)(*(long *)(lVar3 + 0x218) + 0x1468) = *(undefined8 *)(*plVar1 + 0x218);
        lVar4 = *(long *)(param_1 + 0x220);
      }
    }
    if (*(long *)(lVar4 + 0x598) != 0) {
      *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x598) + 0x218) + 0x1460) =
           *(undefined8 *)(lVar3 + 0x218);
      lVar4 = *(long *)(param_1 + 0x220);
    }
    if (*(long *)(lVar4 + 0x5a0) != 0) {
      *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x5a0) + 0x218) + 0x1460) =
           *(undefined8 *)(lVar3 + 0x218);
      lVar4 = *(long *)(param_1 + 0x220);
    }
    if (*(long *)(lVar4 + 0x5a8) != 0) {
      *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x5a8) + 0x218) + 0x1460) =
           *(undefined8 *)(lVar3 + 0x218);
    }
  }
  return;
}


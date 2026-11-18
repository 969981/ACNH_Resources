
/* WARNING: Removing unreachable block (ram,0x034a4d38) */
/* WARNING: Removing unreachable block (ram,0x034a4cd0) */
/* WARNING: Removing unreachable block (ram,0x034a4c44) */
/* WARNING: Removing unreachable block (ram,0x034a4c0c) */
/* WARNING: Removing unreachable block (ram,0x034a4c7c) */
/* WARNING: Removing unreachable block (ram,0x034a4d04) */
/* WARNING: Removing unreachable block (ram,0x034a4d6c) */

void FUN_034a4bb0(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)(param_1 + 0x228);
  lVar3 = *(long *)(lVar4 + 0x570);
  if (lVar3 != 0) {
    uVar2 = *(uint *)(param_1 + 0x1cef8);
    uVar5 = (ulong)uVar2;
    if ((int)uVar2 < 10) {
      if (9 < uVar2) {
        uVar5 = 0;
      }
      lVar6 = *(long *)(lVar4 + 0x570 + uVar5 * 8);
      if (lVar6 != 0) {
        *(undefined8 *)(*(long *)(lVar3 + 0x218) + 0x1478) = *(undefined8 *)(lVar6 + 0x218);
        lVar4 = *(long *)(param_1 + 0x228);
      }
    }
    if (*(long *)(lVar4 + 0x578) != 0) {
      *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x578) + 0x218) + 0x1470) =
           *(undefined8 *)(lVar3 + 0x218);
      lVar4 = *(long *)(param_1 + 0x228);
    }
    if (*(long *)(lVar4 + 0x588) != 0) {
      *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x588) + 0x218) + 0x1470) =
           *(undefined8 *)(lVar3 + 0x218);
      lVar4 = *(long *)(param_1 + 0x228);
    }
    uVar2 = *(uint *)(param_1 + 0x1cefc);
    if ((int)uVar2 < 10) {
      plVar1 = (long *)(lVar4 + 0x570) + uVar2;
      if (9 < uVar2) {
        plVar1 = (long *)(lVar4 + 0x570);
      }
      if (*plVar1 != 0) {
        *(undefined8 *)(*(long *)(lVar3 + 0x218) + 0x1468) = *(undefined8 *)(*plVar1 + 0x218);
        lVar4 = *(long *)(param_1 + 0x228);
      }
    }
    if (*(long *)(lVar4 + 0x598) != 0) {
      *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x598) + 0x218) + 0x1460) =
           *(undefined8 *)(lVar3 + 0x218);
      lVar4 = *(long *)(param_1 + 0x228);
    }
    if (*(long *)(lVar4 + 0x5a0) != 0) {
      *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x5a0) + 0x218) + 0x1460) =
           *(undefined8 *)(lVar3 + 0x218);
      lVar4 = *(long *)(param_1 + 0x228);
    }
    if (*(long *)(lVar4 + 0x5a8) != 0) {
      *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x5a8) + 0x218) + 0x1460) =
           *(undefined8 *)(lVar3 + 0x218);
    }
  }
  return;
}


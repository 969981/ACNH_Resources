
/* WARNING: Removing unreachable block (ram,0x02bd7498) */
/* WARNING: Removing unreachable block (ram,0x02bd7430) */
/* WARNING: Removing unreachable block (ram,0x02bd73c8) */
/* WARNING: Removing unreachable block (ram,0x02bd7360) */
/* WARNING: Removing unreachable block (ram,0x02bd732c) */
/* WARNING: Removing unreachable block (ram,0x02bd7394) */
/* WARNING: Removing unreachable block (ram,0x02bd73fc) */
/* WARNING: Removing unreachable block (ram,0x02bd7464) */
/* WARNING: Removing unreachable block (ram,0x02bd74cc) */

void FUN_02bd7258(long param_1)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  long *plVar5;
  long lVar4;
  
  if (*(int *)(param_1 + 0x274) == 2) {
    if ((*(byte *)(param_1 + 0x26c) >> 3 & 1) == 0) goto LAB_02bd72e4;
    puVar1 = (uint *)(param_1 + 0x294);
LAB_02bd728c:
    uVar3 = *puVar1;
    lVar2 = *(long *)(param_1 + 0x218);
    if (-9 < (int)uVar3) {
      if (0xfffffff6 < uVar3) {
        plVar5 = (long *)(lVar2 + (ulong)(uVar3 + 8) * 8 + 0x578);
        goto LAB_02bd72f0;
      }
LAB_02bd72d0:
      if (9 < uVar3) {
        return;
      }
      plVar5 = (long *)(lVar2 + (ulong)uVar3 * 8 + 0x5b8);
      goto LAB_02bd72f0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x274) == 1) {
      if ((*(byte *)(param_1 + 0x26c) >> 2 & 1) != 0) {
        puVar1 = (uint *)(param_1 + 0x290);
        goto LAB_02bd728c;
      }
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x278);
      if ((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(param_1 + 0x28c))) {
        lVar2 = *(long *)(param_1 + 0x218);
        goto LAB_02bd72d0;
      }
    }
LAB_02bd72e4:
    lVar2 = *(long *)(param_1 + 0x218);
  }
  plVar5 = (long *)(lVar2 + 0x570);
LAB_02bd72f0:
  lVar4 = *plVar5;
  if (lVar4 != 0) {
    if ((*(byte *)(param_1 + 0x26c) & 1) != 0) {
      if (*(long *)(lVar2 + 0x578) != 0) {
        *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x578) + 0x218) + 0x1468) =
             *(undefined8 *)(lVar4 + 0x218);
      }
      if (*(long *)(lVar2 + 0x580) != 0) {
        *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x580) + 0x218) + 0x1468) =
             *(undefined8 *)(lVar4 + 0x218);
      }
      if (*(long *)(lVar2 + 0x588) != 0) {
        *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x588) + 0x218) + 0x1468) =
             *(undefined8 *)(lVar4 + 0x218);
      }
      if (*(long *)(lVar2 + 0x590) != 0) {
        *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x590) + 0x218) + 0x1468) =
             *(undefined8 *)(lVar4 + 0x218);
      }
      if (*(long *)(lVar2 + 0x598) != 0) {
        *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x598) + 0x218) + 0x1468) =
             *(undefined8 *)(lVar4 + 0x218);
      }
      if (*(long *)(lVar2 + 0x5a0) != 0) {
        *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x5a0) + 0x218) + 0x1468) =
             *(undefined8 *)(lVar4 + 0x218);
      }
      if (*(long *)(lVar2 + 0x5a8) != 0) {
        *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x5a8) + 0x218) + 0x1468) =
             *(undefined8 *)(lVar4 + 0x218);
      }
      if (*(long *)(lVar2 + 0x5b0) != 0) {
        *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x5b0) + 0x218) + 0x1468) =
             *(undefined8 *)(lVar4 + 0x218);
      }
      lVar2 = *(long *)(param_1 + 0x218);
    }
    if (*(long *)(lVar2 + 0x570) != 0) {
      *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x570) + 0x218) + 0x1460) =
           *(undefined8 *)(lVar4 + 0x218);
    }
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x02bd7050) */
/* WARNING: Removing unreachable block (ram,0x02bd6ff0) */
/* WARNING: Removing unreachable block (ram,0x02bd6f90) */
/* WARNING: Removing unreachable block (ram,0x02bd6f30) */
/* WARNING: Removing unreachable block (ram,0x02bd6ed0) */
/* WARNING: Removing unreachable block (ram,0x02bd6f00) */
/* WARNING: Removing unreachable block (ram,0x02bd6f60) */
/* WARNING: Removing unreachable block (ram,0x02bd6fc0) */
/* WARNING: Removing unreachable block (ram,0x02bd7020) */
/* WARNING: Removing unreachable block (ram,0x02bd7080) */

void FUN_02bd6e28(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  
  iVar1 = *(int *)(param_1 + 0x270);
  uVar3 = 0xffffffff;
  if (iVar1 < *(int *)(param_1 + 0x288) && -1 < iVar1) {
    uVar3 = iVar1 + 1;
  }
  if ((int)uVar3 < 0) {
    uVar3 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x218);
  if ((int)uVar3 < 1) {
    plVar4 = (long *)(lVar2 + 0x570);
  }
  else if (uVar3 < 9) {
    plVar4 = (long *)(lVar2 + (ulong)(uVar3 - 1) * 8 + 0x578);
  }
  else {
    if (0x12 < uVar3) {
      return;
    }
    plVar4 = (long *)(lVar2 + (ulong)(uVar3 - 9) * 8 + 0x5b8);
  }
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    if ((*(byte *)(param_1 + 0x26c) >> 1 & 1) == 0) {
      lVar2 = *(long *)(lVar2 + 0x570);
    }
    else {
      if (*(long *)(lVar2 + 0x5b8) != 0) {
        *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x5b8) + 0x218) + 0x1460) =
             *(undefined8 *)(lVar5 + 0x218);
      }
      if (*(long *)(lVar2 + 0x5c0) != 0) {
        *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x5c0) + 0x218) + 0x1460) =
             *(undefined8 *)(lVar5 + 0x218);
      }
      if (*(long *)(lVar2 + 0x5c8) != 0) {
        *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x5c8) + 0x218) + 0x1460) =
             *(undefined8 *)(lVar5 + 0x218);
      }
      if (*(long *)(lVar2 + 0x5d0) != 0) {
        *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x5d0) + 0x218) + 0x1460) =
             *(undefined8 *)(lVar5 + 0x218);
      }
      if (*(long *)(lVar2 + 0x5d8) != 0) {
        *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x5d8) + 0x218) + 0x1460) =
             *(undefined8 *)(lVar5 + 0x218);
      }
      if (*(long *)(lVar2 + 0x5e0) != 0) {
        *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x5e0) + 0x218) + 0x1460) =
             *(undefined8 *)(lVar5 + 0x218);
      }
      if (*(long *)(lVar2 + 0x5e8) != 0) {
        *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x5e8) + 0x218) + 0x1460) =
             *(undefined8 *)(lVar5 + 0x218);
      }
      if (*(long *)(lVar2 + 0x5f0) != 0) {
        *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x5f0) + 0x218) + 0x1460) =
             *(undefined8 *)(lVar5 + 0x218);
      }
      if (*(long *)(lVar2 + 0x5f8) != 0) {
        *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x5f8) + 0x218) + 0x1460) =
             *(undefined8 *)(lVar5 + 0x218);
      }
      lVar2 = *(long *)(lVar2 + 0x600);
    }
    if (lVar2 != 0) {
      *(undefined8 *)(*(long *)(lVar2 + 0x218) + 0x1460) = *(undefined8 *)(lVar5 + 0x218);
    }
  }
  return;
}


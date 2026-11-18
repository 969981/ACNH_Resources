
/* WARNING: Removing unreachable block (ram,0x035903e0) */
/* WARNING: Removing unreachable block (ram,0x03590378) */
/* WARNING: Removing unreachable block (ram,0x03590310) */
/* WARNING: Removing unreachable block (ram,0x035902a8) */
/* WARNING: Removing unreachable block (ram,0x03590274) */
/* WARNING: Removing unreachable block (ram,0x035902dc) */
/* WARNING: Removing unreachable block (ram,0x03590344) */
/* WARNING: Removing unreachable block (ram,0x035903ac) */
/* WARNING: Removing unreachable block (ram,0x03590414) */

void FUN_0359017c(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if (*(int *)(param_1 + 0x1964) == 2) {
    uVar2 = *(int *)(param_1 + 0x18fc) + 9;
    if ((*(byte *)(param_1 + 0x195c) & 8) == 0) {
      uVar2 = 0xffffffff;
    }
  }
  else if (*(int *)(param_1 + 0x1964) == 1) {
    uVar2 = *(int *)(param_1 + 0x18f8) + 9;
    if ((*(byte *)(param_1 + 0x195c) & 4) == 0) {
      uVar2 = 0xffffffff;
    }
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x1968);
    uVar2 = uVar1 + 9;
    if (*(int *)(param_1 + 0x18f4) <= (int)uVar1 || 0x7fffffff < uVar1) {
      uVar2 = 0xffffffff;
    }
  }
  uVar1 = 9;
  if (-1 < (int)uVar2) {
    uVar1 = uVar2;
  }
  lVar3 = *(long *)(param_1 + 0x210);
  if ((int)uVar1 < 1) {
    plVar4 = (long *)(lVar3 + 0x578);
  }
  else if (uVar1 < 9) {
    plVar4 = (long *)(lVar3 + (ulong)(uVar1 - 1) * 8 + 0x580);
  }
  else {
    if (0x12 < uVar1) {
      return;
    }
    plVar4 = (long *)(lVar3 + (ulong)(uVar1 - 9) * 8 + 0x5c0);
  }
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    if ((*(byte *)(param_1 + 0x195c) & 1) != 0) {
      if (*(long *)(lVar3 + 0x580) != 0) {
        *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x580) + 0x218) + 0x1468) =
             *(undefined8 *)(lVar5 + 0x218);
      }
      if (*(long *)(lVar3 + 0x588) != 0) {
        *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x588) + 0x218) + 0x1468) =
             *(undefined8 *)(lVar5 + 0x218);
      }
      if (*(long *)(lVar3 + 0x590) != 0) {
        *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x590) + 0x218) + 0x1468) =
             *(undefined8 *)(lVar5 + 0x218);
      }
      if (*(long *)(lVar3 + 0x598) != 0) {
        *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x598) + 0x218) + 0x1468) =
             *(undefined8 *)(lVar5 + 0x218);
      }
      if (*(long *)(lVar3 + 0x5a0) != 0) {
        *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x5a0) + 0x218) + 0x1468) =
             *(undefined8 *)(lVar5 + 0x218);
      }
      if (*(long *)(lVar3 + 0x5a8) != 0) {
        *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x5a8) + 0x218) + 0x1468) =
             *(undefined8 *)(lVar5 + 0x218);
      }
      if (*(long *)(lVar3 + 0x5b0) != 0) {
        *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x5b0) + 0x218) + 0x1468) =
             *(undefined8 *)(lVar5 + 0x218);
      }
      if (*(long *)(lVar3 + 0x5b8) != 0) {
        *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x5b8) + 0x218) + 0x1468) =
             *(undefined8 *)(lVar5 + 0x218);
      }
      lVar3 = *(long *)(param_1 + 0x210);
    }
    if (*(long *)(lVar3 + 0x578) != 0) {
      *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x578) + 0x218) + 0x1460) =
           *(undefined8 *)(lVar5 + 0x218);
    }
  }
  return;
}


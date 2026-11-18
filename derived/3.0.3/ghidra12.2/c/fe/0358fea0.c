
/* WARNING: Removing unreachable block (ram,0x0359013c) */
/* WARNING: Removing unreachable block (ram,0x035900dc) */
/* WARNING: Removing unreachable block (ram,0x0359007c) */
/* WARNING: Removing unreachable block (ram,0x0359001c) */
/* WARNING: Removing unreachable block (ram,0x0358ffbc) */
/* WARNING: Removing unreachable block (ram,0x0358ffec) */
/* WARNING: Removing unreachable block (ram,0x0359004c) */
/* WARNING: Removing unreachable block (ram,0x035900ac) */
/* WARNING: Removing unreachable block (ram,0x0359010c) */
/* WARNING: Removing unreachable block (ram,0x0359016c) */

void FUN_0358fea0(long param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  
  iVar6 = *(int *)(param_1 + 0x1960);
  if (*(char *)(param_1 + 0x1972) == '\0') {
    uVar2 = *(uint *)(param_1 + 0x18f0);
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x18f0);
    if (0 < (int)uVar2) {
      uVar7 = 0;
      piVar8 = (int *)(param_1 + 0x1974);
      do {
        piVar1 = piVar8;
        if (7 < uVar7) {
          piVar1 = (int *)(param_1 + 0x1974);
        }
        if (*piVar1 == iVar6) {
          iVar6 = (int)uVar7;
          goto LAB_0358ff0c;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 1;
      } while (uVar2 != uVar7);
    }
    iVar6 = 0;
  }
LAB_0358ff0c:
  uVar3 = 0xffffffff;
  if (iVar6 < (int)uVar2 && -1 < iVar6) {
    uVar3 = iVar6 + 1;
  }
  if ((int)uVar3 < 0) {
    uVar3 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x210);
  if ((int)uVar3 < 1) {
    lVar5 = *(long *)(lVar4 + 0x578);
  }
  else if (uVar3 < 9) {
    lVar5 = *(long *)(lVar4 + (ulong)(uVar3 - 1) * 8 + 0x580);
  }
  else {
    if (0x12 < uVar3) {
      return;
    }
    lVar5 = *(long *)(lVar4 + (ulong)(uVar3 - 9) * 8 + 0x5c0);
  }
  if (lVar5 != 0) {
    if ((*(byte *)(param_1 + 0x195c) >> 1 & 1) == 0) {
      lVar4 = *(long *)(lVar4 + 0x578);
    }
    else {
      if (*(long *)(lVar4 + 0x5c0) != 0) {
        *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x5c0) + 0x218) + 0x1460) =
             *(undefined8 *)(lVar5 + 0x218);
      }
      if (*(long *)(lVar4 + 0x5c8) != 0) {
        *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x5c8) + 0x218) + 0x1460) =
             *(undefined8 *)(lVar5 + 0x218);
      }
      if (*(long *)(lVar4 + 0x5d0) != 0) {
        *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x5d0) + 0x218) + 0x1460) =
             *(undefined8 *)(lVar5 + 0x218);
      }
      if (*(long *)(lVar4 + 0x5d8) != 0) {
        *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x5d8) + 0x218) + 0x1460) =
             *(undefined8 *)(lVar5 + 0x218);
      }
      if (*(long *)(lVar4 + 0x5e0) != 0) {
        *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x5e0) + 0x218) + 0x1460) =
             *(undefined8 *)(lVar5 + 0x218);
      }
      if (*(long *)(lVar4 + 0x5e8) != 0) {
        *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x5e8) + 0x218) + 0x1460) =
             *(undefined8 *)(lVar5 + 0x218);
      }
      if (*(long *)(lVar4 + 0x5f0) != 0) {
        *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x5f0) + 0x218) + 0x1460) =
             *(undefined8 *)(lVar5 + 0x218);
      }
      if (*(long *)(lVar4 + 0x5f8) != 0) {
        *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x5f8) + 0x218) + 0x1460) =
             *(undefined8 *)(lVar5 + 0x218);
      }
      if (*(long *)(lVar4 + 0x600) != 0) {
        *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x600) + 0x218) + 0x1460) =
             *(undefined8 *)(lVar5 + 0x218);
      }
      lVar4 = *(long *)(lVar4 + 0x608);
    }
    if (lVar4 != 0) {
      *(undefined8 *)(*(long *)(lVar4 + 0x218) + 0x1460) = *(undefined8 *)(lVar5 + 0x218);
      return;
    }
  }
  return;
}


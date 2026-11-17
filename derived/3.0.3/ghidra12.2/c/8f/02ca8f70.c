
/* WARNING: Removing unreachable block (ram,0x02ca9094) */
/* WARNING: Removing unreachable block (ram,0x02ca905c) */

void FUN_02ca8f70(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  lVar4 = *(long *)(param_1 + 0x210);
  *(undefined4 *)(param_1 + 0x328) = 0xffffffff;
  lVar3 = *(long *)(lVar4 + 0x608);
  if (lVar3 == 0) {
    return;
  }
  uVar6 = *(uint *)(param_1 + 0xdb0);
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(param_1 + 0xd98))) {
    lVar5 = param_1 + 0xd88;
    uVar1 = uVar6 + 1 & 3;
    if (2 < uVar6) {
      uVar6 = uVar6 + 1 & 0xfffffffc;
      do {
        uVar6 = uVar6 - 4;
        lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(lVar5 + 8) + 8) + 8) + 8);
      } while (uVar6 != 0);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      lVar5 = *(long *)(lVar5 + 8);
    }
    if ((lVar5 != 0) && (lVar5 = lVar5 - *(int *)(param_1 + 0xd9c), lVar5 != 0)) {
      iVar2 = *(int *)(lVar5 + 0x270);
      if (iVar2 == 0x35) {
        lVar5 = 0x48;
        if (*(int *)(param_1 + 0xca0) != 0xc) {
          lVar5 = 0x28;
        }
        lVar4 = *(long *)(lVar4 + lVar5 + 0x610);
      }
      else if (iVar2 == 0x39) {
        lVar4 = *(long *)(lVar4 + 0x5d0);
      }
      else {
        if (iVar2 != 0x38) goto LAB_02ca9078;
        lVar4 = *(long *)(lVar4 + 0x5b8);
      }
      if (lVar4 != 0) {
        *(undefined8 *)(*(long *)(lVar3 + 0x218) + 0x1460) = *(undefined8 *)(lVar4 + 0x218);
        return;
      }
    }
  }
LAB_02ca9078:
  *(undefined8 *)(*(long *)(lVar3 + 0x218) + 0x1460) = 0;
  return;
}


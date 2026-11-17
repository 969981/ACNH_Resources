
/* WARNING: Removing unreachable block (ram,0x03037ff8) */
/* WARNING: Removing unreachable block (ram,0x03037f38) */
/* WARNING: Removing unreachable block (ram,0x03037f80) */
/* WARNING: Removing unreachable block (ram,0x03038040) */

void FUN_03037ed0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  
  uVar1 = param_1[6];
  if (0 < (int)uVar1) {
    uVar4 = 0;
    do {
      uVar5 = *param_1;
      uVar2 = param_1[6];
      uVar6 = uVar5;
      if ((uVar4 < uVar5) && (lVar7 = *(long *)(*(long *)(param_1 + 2) + uVar4 * 8), lVar7 != 0)) {
        lVar7 = *(long *)(lVar7 + 0x218);
        *(long *)(lVar7 + 0x1460) = lVar7;
        uVar6 = *param_1;
      }
      iVar3 = 0;
      if (uVar2 != 0) {
        iVar3 = (int)uVar5 / (int)uVar2;
      }
      uVar5 = (int)uVar4 + (iVar3 + -1) * uVar1;
      if ((uVar5 < uVar6) &&
         (lVar7 = *(long *)(*(long *)(param_1 + 2) + (long)(int)uVar5 * 8), lVar7 != 0)) {
        lVar7 = *(long *)(lVar7 + 0x218);
        *(long *)(lVar7 + 0x1468) = lVar7;
      }
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
  }
  uVar1 = param_1[0xe];
  if (0 < (int)uVar1) {
    uVar4 = 0;
    do {
      uVar5 = param_1[8];
      uVar2 = param_1[0xe];
      uVar6 = uVar5;
      if ((uVar4 < uVar5) && (lVar7 = *(long *)(*(long *)(param_1 + 10) + uVar4 * 8), lVar7 != 0)) {
        lVar7 = *(long *)(lVar7 + 0x218);
        *(long *)(lVar7 + 0x1460) = lVar7;
        uVar6 = param_1[8];
      }
      iVar3 = 0;
      if (uVar2 != 0) {
        iVar3 = (int)uVar5 / (int)uVar2;
      }
      uVar5 = (int)uVar4 + (iVar3 + -1) * uVar1;
      if ((uVar5 < uVar6) &&
         (lVar7 = *(long *)(*(long *)(param_1 + 10) + (long)(int)uVar5 * 8), lVar7 != 0)) {
        lVar7 = *(long *)(lVar7 + 0x218);
        *(long *)(lVar7 + 0x1468) = lVar7;
      }
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
  }
  return;
}


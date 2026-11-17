
void FUN_02d5d650(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined1 uVar9;
  uint uVar10;
  
  if (*(long *)(param_1 + 0x1680) == 0) {
    return;
  }
  lVar8 = *(long *)(*(long *)(param_1 + 0x1680) + 0x570);
  if (lVar8 == 0) {
    return;
  }
  if (DAT_05739190 == 0) {
    return;
  }
  lVar2 = *(long *)(DAT_05739190 + 0x470);
  if (lVar2 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x241c) == 0) {
    puVar3 = *(uint **)(lVar2 + 0x10);
    if (puVar3 == (uint *)0x0) {
      uVar5 = 0;
      uVar7 = 0;
      uVar4 = 0;
      uVar6 = 0;
    }
    else {
      uVar6 = *puVar3;
      uVar4 = uVar6 >> 8;
      uVar7 = uVar6 >> 0x10;
      uVar5 = uVar6 >> 0x18;
    }
    uVar10 = *(uint *)(param_1 + 0x1578);
    uVar9 = 0xff;
    if ((-1 < (int)uVar10) && ((int)uVar10 < *(int *)(param_1 + 0x1560))) {
      lVar2 = param_1 + 0x1550;
      uVar1 = uVar10 + 1 & 3;
      if (2 < uVar10) {
        uVar10 = uVar10 + 1 & 0xfffffffc;
        do {
          uVar10 = uVar10 - 4;
          lVar2 = *(long *)(*(long *)(*(long *)(*(long *)(lVar2 + 8) + 8) + 8) + 8);
        } while (uVar10 != 0);
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        lVar2 = *(long *)(lVar2 + 8);
      }
      uVar9 = 0xff;
      if ((lVar2 != 0) && (lVar2 = lVar2 - *(int *)(param_1 + 0x1564), lVar2 != 0)) {
        uVar9 = (undefined1)*(undefined4 *)(lVar2 + 0x270);
      }
    }
    if (param_2 != 0x53) {
      if (param_2 == 0x52) {
        if (*(uint *)(lVar8 + 0x298) < 2) {
          uVar4 = 0;
          uVar6 = 0;
        }
        else {
          uVar4 = *(int *)(lVar8 + 0x2e8) * *(int *)(lVar8 + 0x430);
          uVar6 = *(int *)(lVar8 + 0x444) + *(int *)(lVar8 + 0x440) * *(int *)(lVar8 + 0x2e8);
        }
      }
      goto joined_r0x02d5d8c4;
    }
    if (*(uint *)(lVar8 + 0x298) < 2) {
      uVar5 = 0;
      uVar7 = 0;
      goto joined_r0x02d5d8c4;
    }
  }
  else {
    puVar3 = *(uint **)(lVar2 + 0x18);
    if (puVar3 == (uint *)0x0) {
      uVar5 = 0;
      uVar7 = 0;
      uVar4 = 0;
      uVar6 = 0;
    }
    else {
      uVar6 = *puVar3;
      uVar4 = uVar6 >> 8;
      uVar7 = uVar6 >> 0x10;
      uVar5 = uVar6 >> 0x18;
    }
    uVar10 = *(uint *)(param_1 + 0x1578);
    uVar9 = 0xff;
    if ((-1 < (int)uVar10) && ((int)uVar10 < *(int *)(param_1 + 0x1560))) {
      lVar2 = param_1 + 0x1550;
      uVar1 = uVar10 + 1 & 3;
      if (2 < uVar10) {
        uVar10 = uVar10 + 1 & 0xfffffffc;
        do {
          uVar10 = uVar10 - 4;
          lVar2 = *(long *)(*(long *)(*(long *)(*(long *)(lVar2 + 8) + 8) + 8) + 8);
        } while (uVar10 != 0);
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        lVar2 = *(long *)(lVar2 + 8);
      }
      uVar9 = 0xff;
      if ((lVar2 != 0) && (lVar2 = lVar2 - *(int *)(param_1 + 0x1564), lVar2 != 0)) {
        uVar9 = (undefined1)*(undefined4 *)(lVar2 + 0x270);
      }
    }
    if (param_2 != 0x53) {
      if (param_2 == 0x52) {
        if (*(uint *)(lVar8 + 0x298) < 2) {
          uVar4 = 0;
          uVar6 = 0;
        }
        else {
          uVar4 = *(int *)(lVar8 + 0x2e8) * *(int *)(lVar8 + 0x430);
          uVar6 = *(int *)(lVar8 + 0x444) + *(int *)(lVar8 + 0x440) * *(int *)(lVar8 + 0x2e8);
        }
      }
      goto joined_r0x02d5d8c4;
    }
    if (*(uint *)(lVar8 + 0x298) < 2) {
      uVar5 = 0;
      uVar7 = 0;
      goto joined_r0x02d5d8c4;
    }
  }
  uVar5 = *(int *)(lVar8 + 0x2e8) * *(int *)(lVar8 + 0x430);
  uVar7 = *(int *)(lVar8 + 0x444) + *(int *)(lVar8 + 0x440) * *(int *)(lVar8 + 0x2e8);
joined_r0x02d5d8c4:
  if (puVar3 != (uint *)0x0) {
    *(undefined1 *)(puVar3 + 1) = uVar9;
    *puVar3 = uVar5 << 0x18 | (uVar7 & 0xff) << 0x10 | (uVar4 & 0xff) << 8 | uVar6 & 0xff;
  }
  return;
}


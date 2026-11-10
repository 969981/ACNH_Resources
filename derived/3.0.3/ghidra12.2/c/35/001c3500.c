
void FUN_001c3500(undefined1 *param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  *param_1 = 1;
  uVar9 = (ulong)param_3;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (param_3 != 0) {
    if (param_3 < 0) goto LAB_001c36bc;
    puVar5 = (undefined8 *)FUN_00187df4(uVar9 * 8);
    puVar1 = puVar5 + uVar9;
    *(undefined8 **)(param_1 + 0x10) = puVar5;
    *(undefined8 **)(param_1 + 0x20) = puVar1;
    for (uVar2 = uVar9 & 7; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    if (6 < (uVar9 - 1 & 0x1fffffffffffffff)) {
      do {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        puVar5[6] = 0;
        puVar5[7] = 0;
        puVar5 = puVar5 + 8;
      } while (puVar5 != puVar1);
    }
    *(undefined8 **)(param_1 + 0x18) = puVar1;
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(ulong *)(param_1 + 0x40) = uVar9;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (param_3 != 0) {
    if (param_3 < 0) {
LAB_001c36bc:
      lVar6 = FUN_001dec0c();
      FUN_001c3760(lVar6,lVar6 + 8);
      if (*(long *)(lVar6 + 0x78) != 0) {
        lVar7 = *(long *)(lVar6 + 0x70);
        do {
          lVar7 = *(long *)(*(long *)(lVar6 + 0x50) + lVar7 * 8);
          FUN_001e1868(lVar7 + 8);
          FUN_00187e4c(lVar7);
          lVar3 = *(long *)(lVar6 + 0x78);
          uVar9 = *(long *)(lVar6 + 0x70) + 1;
          *(undefined8 *)(*(long *)(lVar6 + 0x50) + *(long *)(lVar6 + 0x70) * 8) = 0;
          uVar8 = *(ulong *)(lVar6 + 0x80);
          lVar3 = lVar3 + -1;
          uVar2 = 0;
          if (uVar8 != 0) {
            uVar2 = uVar9 / uVar8;
          }
          lVar7 = uVar9 - uVar2 * uVar8;
          *(long *)(lVar6 + 0x70) = lVar7;
          *(long *)(lVar6 + 0x78) = lVar3;
        } while (lVar3 != 0);
      }
      FUN_0018ac30(lVar6 + 0x90);
      if (*(long *)(lVar6 + 0x50) != 0) {
        *(long *)(lVar6 + 0x58) = *(long *)(lVar6 + 0x50);
        FUN_00187e4c();
      }
      if (*(long *)(lVar6 + 0x10) == 0) {
        return;
      }
      *(long *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x10);
      FUN_00187e4c();
      return;
    }
    puVar5 = (undefined8 *)FUN_00187df4(uVar9 * 8);
    puVar1 = puVar5 + uVar9;
    *(undefined8 **)(param_1 + 0x50) = puVar5;
    *(undefined8 **)(param_1 + 0x60) = puVar1;
    for (uVar2 = uVar9 & 7; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    if (6 < (uVar9 - 1 & 0x1fffffffffffffff)) {
      do {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        puVar5[6] = 0;
        puVar5[7] = 0;
        puVar5 = puVar5 + 8;
      } while (puVar5 != puVar1);
    }
    *(undefined8 **)(param_1 + 0x58) = puVar1;
  }
  *(undefined4 *)(param_1 + 0x88) = 0x554;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(ulong *)(param_1 + 0x80) = uVar9;
  FUN_00186460(param_1 + 0x90,0x100000,1);
  puVar4 = PTR_DAT_04bcbce8;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = param_2;
  *(undefined **)(param_1 + 0x90) = puVar4 + 0x10;
  if (0 < param_3) {
    do {
      lVar6 = FUN_00187df4(0x98);
      if (lVar6 != 0) {
        FUN_001e1500(lVar6 + 8);
      }
      param_3 = param_3 + -1;
      uVar9 = *(long *)(param_1 + 0x68) + 1;
      lVar7 = *(long *)(param_1 + 0x78);
      uVar2 = *(ulong *)(param_1 + 0x80);
      *(long *)(*(long *)(param_1 + 0x50) + *(long *)(param_1 + 0x68) * 8) = lVar6;
      uVar8 = 0;
      if (uVar2 != 0) {
        uVar8 = uVar9 / uVar2;
      }
      *(ulong *)(param_1 + 0x68) = uVar9 - uVar8 * uVar2;
      *(long *)(param_1 + 0x78) = lVar7 + 1;
    } while (param_3 != 0);
  }
  return;
}


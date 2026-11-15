
void FUN_01ecc5d8(long param_1,long param_2)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined *local_80;
  char *pcStack_78;
  undefined *local_70;
  undefined1 *puStack_68;
  undefined4 local_60;
  undefined1 local_5c [7];
  undefined1 local_55;
  undefined *local_50;
  undefined8 *puStack_48;
  
  ppuVar7 = &local_80;
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x508);
  lVar10 = (long)*(int *)(param_1 + 0xaf38) * 8;
  puVar9 = *(undefined4 **)(*(long *)(param_2 + 8) + lVar10);
  *(undefined4 *)(param_1 + 0xaf6c) = *puVar9;
  *(undefined4 *)(param_1 + 0xaf70) = puVar9[1];
  *(undefined4 *)(param_1 + 0xaf74) = puVar9[2];
  *(undefined4 *)(param_1 + 0xaf50) =
       *(undefined4 *)(*(long *)(*(long *)(param_2 + 8) + lVar10) + 0xc);
  lVar10 = *(long *)(*(long *)(param_2 + 8) + lVar10);
  *(undefined2 *)(param_1 + 0xaf3c) = *(undefined2 *)(lVar10 + 0x10);
  *(undefined1 *)(param_1 + 0xaf3e) = *(undefined1 *)(lVar10 + 0x12);
  *(undefined1 *)(param_1 + 0xaf3f) = *(undefined1 *)(lVar10 + 0x13);
  *(undefined4 *)(param_1 + 0xaf40) = *(undefined4 *)(lVar10 + 0x14);
  uVar4 = FUN_021b1b7c(&DAT_053fe348,*(int *)(param_1 + 0xaf38),uVar1);
  if (((uVar4 & 1) == 0) && ((*(char *)(lVar10 + 0xcc) == '\0' || (DAT_05453fe8 == '\0')))) {
    lVar10 = *(long *)(*(long *)(param_1 + 8) + 0x3b8);
    puVar8 = PTR_DAT_04bc15d0;
  }
  else {
    lVar5 = FUN_0265c2a0(uVar1);
    if (lVar5 == 0) {
      bVar2 = 0;
    }
    else {
      if ((*(long **)(lVar5 + 0x28) == (long *)0x0) ||
         (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x28), puVar6 == (undefined8 *)0x0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = (**(code **)*puVar6)();
        uVar3 = uVar3 ^ 1;
      }
      bVar2 = FUN_020fd7d8(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8));
      if ((((uVar3 & 1) == 0) && (*(long *)(lVar5 + 0x28) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x28) + 8), puVar6 != (undefined8 *)0x0)) {
        (**(code **)*puVar6)();
      }
    }
    local_55 = 0;
    local_60 = 8;
    puStack_68 = local_5c;
    local_5c[0] = 0;
    local_70 = PTR_DAT_04bb3768 + 0x10;
    if (*(char *)(lVar10 + 0xcc) == '\0') {
      if (*(char *)(lVar10 + 0xcd) == '\0') {
        (**(code **)(*(long *)(lVar10 + 0xa8) + 0x18))((long *)(lVar10 + 0xa8));
        if (bVar2 < 8) {
          puVar6 = *(undefined8 **)(PTR_DAT_04bb6a58 + (ulong)bVar2 * 8 + 0x20);
        }
        else {
          puVar6 = &DAT_0407ebb1;
        }
        FUN_038d1270(&local_70,"%s_%s",*(undefined8 *)(lVar10 + 0xb0),puVar6);
      }
      else {
        if (bVar2 < 8) {
          puVar6 = *(undefined8 **)(PTR_DAT_04bb6a58 + (ulong)bVar2 * 8 + 0x20);
        }
        else {
          puVar6 = &DAT_0407ebb1;
        }
        FUN_038d1270(&local_70,"16_%s",puVar6);
      }
      lVar5 = *(long *)(param_1 + 8);
      ppuVar7 = (undefined **)(lVar10 + 0x70);
      local_50 = PTR_DAT_04bb2020 + 0x10;
    }
    else {
      if (bVar2 < 8) {
        puVar6 = *(undefined8 **)(PTR_DAT_04bb6a58 + (ulong)bVar2 * 8 + 0x20);
      }
      else {
        puVar6 = &DAT_0407ebb1;
      }
      FUN_038d1270(&local_70,"17_%s",puVar6);
      lVar5 = *(long *)(param_1 + 8);
      local_50 = PTR_DAT_04bb2020 + 0x10;
      pcStack_78 = "BLN_Spot_Museum";
      local_80 = local_50;
    }
    puStack_48 = &DAT_0407ebb1;
    FUN_01e3dab0(lVar5 + 0x540,ppuVar7,&local_70,&local_50);
    lVar10 = *(long *)(lVar5 + 0x3b8);
    *(long *)(lVar10 + 0x7f00) = lVar5;
    *(undefined **)(lVar10 + 0x7f08) = PTR_LAB_04bc15b8;
    puVar8 = PTR_DAT_04bc15d8;
    *(undefined8 *)(lVar10 + 0x7f10) = 0;
  }
  *(undefined **)(lVar10 + 0x7ef8) = puVar8 + 0x10;
  return;
}


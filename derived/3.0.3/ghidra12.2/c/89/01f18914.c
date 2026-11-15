
void FUN_01f18914(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  undefined *local_70;
  char *pcStack_68;
  undefined8 local_60;
  undefined1 *puStack_58;
  undefined4 local_50;
  undefined1 local_4c [7];
  undefined1 local_45;
  undefined *local_40;
  undefined8 *puStack_38;
  
  ppuVar4 = &local_70;
  uVar2 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x50c);
  lVar8 = (long)*(int *)(param_1 + 0xaf38) * 8;
  puVar7 = *(undefined4 **)(*(long *)(param_2 + 8) + lVar8);
  *(undefined4 *)(param_1 + 0xaf6c) = *puVar7;
  *(undefined4 *)(param_1 + 0xaf70) = puVar7[1];
  *(undefined4 *)(param_1 + 0xaf74) = puVar7[2];
  *(undefined4 *)(param_1 + 0xaf50) =
       *(undefined4 *)(*(long *)(*(long *)(param_2 + 8) + lVar8) + 0xc);
  lVar8 = *(long *)(*(long *)(param_2 + 8) + lVar8);
  *(undefined2 *)(param_1 + 0xaf3c) = *(undefined2 *)(lVar8 + 0x10);
  *(undefined1 *)(param_1 + 0xaf3e) = *(undefined1 *)(lVar8 + 0x12);
  *(undefined1 *)(param_1 + 0xaf3f) = *(undefined1 *)(lVar8 + 0x13);
  *(undefined4 *)(param_1 + 0xaf40) = *(undefined4 *)(lVar8 + 0x14);
  uVar3 = FUN_021b1f94(&DAT_053fe348,*(int *)(param_1 + 0xaf38),uVar2);
  if (((uVar3 & 1) == 0) && ((*(char *)(lVar8 + 0xcc) == '\0' || (DAT_0545404c == '\0')))) {
    lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x3b8);
    puVar6 = PTR_DAT_04bc15d0;
  }
  else {
    FUN_021d6190(&local_60,uVar2);
    local_45 = 0;
    local_4c[0] = 0;
    puStack_58 = local_4c;
    local_50 = 8;
    uVar1 = 0;
    if (local_60._4_1_ != '\0') {
      uVar1 = (uint)local_60;
    }
    local_60 = PTR_DAT_04bb3768 + 0x10;
    if (*(char *)(lVar8 + 0xcc) == '\0') {
      if (*(char *)(lVar8 + 0xcd) == '\0') {
        (**(code **)(*(long *)(lVar8 + 0xa8) + 0x18))((long *)(lVar8 + 0xa8));
        if (uVar1 < 8) {
          puVar5 = *(undefined8 **)(PTR_DAT_04bb6a58 + (ulong)uVar1 * 8 + 0x20);
        }
        else {
          puVar5 = &DAT_0407ebb1;
        }
        FUN_038d1270(&local_60,"%s_%s",*(undefined8 *)(lVar8 + 0xb0),puVar5);
      }
      else {
        if (uVar1 < 8) {
          puVar5 = *(undefined8 **)(PTR_DAT_04bb6a58 + (ulong)uVar1 * 8 + 0x20);
        }
        else {
          puVar5 = &DAT_0407ebb1;
        }
        FUN_038d1270(&local_60,"16_%s",puVar5);
      }
      lVar9 = *(long *)(param_1 + 8);
      ppuVar4 = (undefined **)(lVar8 + 0x70);
      local_40 = PTR_DAT_04bb2020 + 0x10;
    }
    else {
      if (uVar1 < 8) {
        puVar5 = *(undefined8 **)(PTR_DAT_04bb6a58 + (ulong)uVar1 * 8 + 0x20);
      }
      else {
        puVar5 = &DAT_0407ebb1;
      }
      FUN_038d1270(&local_60,"17_%s",puVar5);
      lVar9 = *(long *)(param_1 + 8);
      local_40 = PTR_DAT_04bb2020 + 0x10;
      pcStack_68 = "BLN_Spot_Museum";
      local_70 = local_40;
    }
    puStack_38 = &DAT_0407ebb1;
    FUN_01e3dab0(lVar9 + 0x540,ppuVar4,&local_60,&local_40);
    lVar8 = *(long *)(lVar9 + 0x3b8);
    *(long *)(lVar8 + 0x7f00) = lVar9;
    *(undefined **)(lVar8 + 0x7f08) = PTR_LAB_04bc15b8;
    puVar6 = PTR_DAT_04bc15d8;
    *(undefined8 *)(lVar8 + 0x7f10) = 0;
  }
  *(undefined **)(lVar8 + 0x7ef8) = puVar6 + 0x10;
  return;
}


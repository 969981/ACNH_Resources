
void FUN_020b2dec(long param_1)

{
  undefined **ppuVar1;
  uint *puVar2;
  byte bVar3;
  short sVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined *local_90;
  char *pcStack_88;
  byte local_7c [4];
  undefined **local_78;
  char *local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  undefined2 local_60;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55;
  undefined4 local_54;
  undefined2 local_50;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined4 local_4c;
  undefined2 local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined4 local_44;
  undefined2 local_40;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined4 local_3c;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_35;
  undefined4 local_34;
  byte local_18 [4];
  byte local_14 [4];
  
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 == -1) {
    return;
  }
  puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
  if (0xff < (uint)(int)sVar4) {
    puVar2 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar2 >> 3 & 1) == 0) {
    return;
  }
  if (1 < *(uint *)(*(long **)PTR_DAT_04bb27d0 + 0x10)) {
    return;
  }
  local_78._0_4_ = 1;
  if ((*(byte *)(*(long *)PTR_DAT_04bb2230 + 0x3f0) >> 1 & 1) != 0) {
    return;
  }
  lVar9 = *(long *)PTR_DAT_04bb39b0;
  if (lVar9 == 0) {
    local_14[0] = *PTR_DAT_04bb32e0;
LAB_020b2ef4:
    if (7 < local_14[0]) {
LAB_020b2efc:
      lVar9 = **(long **)PTR_DAT_04bb27d0;
      bVar3 = *(byte *)(lVar9 + 0x473);
      pbVar8 = PTR_DAT_04bb5038;
      if ((long)(char)bVar3 != 0xffffffffffffffff) {
        puVar2 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
        if (7 < bVar3) {
          puVar2 = (uint *)(lVar9 + 0x48);
        }
        if ((*puVar2 & 8) != 0) {
          pbVar8 = (byte *)(lVar9 + 0x471);
        }
      }
      local_14[0] = *pbVar8;
      if (local_14[0] < 8) goto LAB_020b2f6c;
      local_14[0] = *PTR_DAT_04bb5038;
    }
  }
  else {
    pbVar8 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar9 + 0x15c) != 0) {
      pbVar8 = (byte *)(lVar9 + 0x158);
    }
    local_14[0] = *pbVar8;
    if (7 < local_14[0]) {
      if ((*(int *)(lVar9 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        local_14[0] = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_020b2ef4;
      }
      goto LAB_020b2efc;
    }
  }
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
LAB_020b2f6c:
  iVar6 = FUN_00a74b78(local_14);
  local_78 = (undefined **)CONCAT44(local_78._4_4_,iVar6);
  if (iVar6 == 0x13) {
    local_18[0] = local_14[0];
    if (7 < local_14[0]) {
      local_18[0] = 0xff;
    }
    lVar9 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_18,1);
    if (lVar9 != 0) {
      local_68 = *(undefined2 *)PTR_DAT_04bb37e0;
      local_66 = PTR_DAT_04bb37e0[2];
      local_65 = PTR_DAT_04bb37e0[3];
      local_64 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      local_70 = *(char **)PTR_DAT_04bb37e0;
      local_78 = *(undefined ***)PTR_DAT_04bb37e0;
      local_7c[0] = local_14[0];
      if (7 < local_14[0]) {
        local_7c[0] = 0xff;
      }
      local_60 = local_68;
      local_5e = local_66;
      local_5d = local_65;
      local_5c = local_64;
      local_58 = local_68;
      local_56 = local_66;
      local_55 = local_65;
      local_54 = local_64;
      local_50 = local_68;
      local_4e = local_66;
      local_4d = local_65;
      local_4c = local_64;
      local_48 = local_68;
      local_46 = local_66;
      local_45 = local_65;
      local_44 = local_64;
      local_40 = local_68;
      local_3e = local_66;
      local_3d = local_65;
      local_3c = local_64;
      local_38 = local_68;
      local_36 = local_66;
      local_35 = local_65;
      local_34 = local_64;
      FUN_02665c20(local_7c,&local_78,1);
      iVar6 = FUN_0277d6c4(&local_60);
      if ((((iVar6 == 0x32bb) && (iVar6 = FUN_0277d6c4(&local_78), iVar6 == 0x32ca)) &&
          (uVar7 = FUN_02532e88(local_14,&local_60,0,1), (uVar7 & 1) != 0)) &&
         (uVar7 = FUN_02532e88(local_14,&local_78,0,1), (uVar7 & 1) != 0)) {
        return;
      }
    }
    puVar5 = PTR_DAT_04bb2020;
    ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_70 = "Halloween";
    local_78 = ppuVar1;
    iVar6 = FUN_008841f4(*(undefined8 *)PTR_DAT_04bb32f0,&local_78);
    if (iVar6 == 1) {
      local_70 = "HalloweenApproachNpcIndex";
      local_78 = ppuVar1;
      iVar6 = FUN_02743000(&local_78);
      if (iVar6 == 0) {
        local_90 = puVar5 + 0x10;
        pcStack_88 = "HalloweenApproachNow";
        iVar6 = FUN_02743000(&local_90);
        if (iVar6 == 0) {
          local_78 = &PTR_FUN_04a731e8;
          if (*(int *)(param_1 + 0xb88) != 0) {
            lVar9 = (long)*(int *)(param_1 + 0xb88) << 3;
            puVar10 = *(undefined8 **)(param_1 + 0xb90);
            do {
              (*(code *)*local_78)(&local_78,*puVar10);
              lVar9 = lVar9 + -8;
              puVar10 = puVar10 + 1;
            } while (lVar9 != 0);
          }
        }
      }
    }
  }
  return;
}


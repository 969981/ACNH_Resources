
undefined8 FUN_02167eb8(undefined4 *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined *local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  byte local_44 [4];
  
  lVar8 = *(long *)PTR_DAT_04bb2720;
  if (lVar8 == 0) {
    puVar10 = &DAT_055c04a0;
  }
  else {
    puVar10 = &DAT_055c04a0;
    if (*(long *)(lVar8 + 0x330) != 0) {
      puVar10 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar8 + 0x338));
      iVar4 = FUN_006bd550(*puVar10,0);
      puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar10 = &DAT_055c04a0;
      }
    }
  }
  if (((*(int *)(puVar10 + 7) == 0x756daeec) && (DAT_05ab5ea8 != 0)) &&
     (((DAT_05ab8198 != (ushort *)0x0 && ((*DAT_05ab8198 & 1) != 0)) ||
      ((*(int *)(DAT_05ab5ea8 + 0x14) != 4 && (*(int *)(DAT_05ab5ea8 + 0x14) != 5)))))) {
    if (DAT_04cd19d8 == 0) {
      pbVar9 = &DAT_0548e140;
LAB_02167ff8:
      if (*pbVar9 < 8) goto LAB_02168070;
LAB_02168004:
      if (DAT_0537d558 == (long *)0x0) {
LAB_02168068:
        pbVar9 = &DAT_0548e168;
        goto LAB_02168070;
      }
      lVar8 = *DAT_0537d558;
      bVar3 = *(byte *)(lVar8 + 0x473);
      pbVar9 = PTR_DAT_04bb5038;
      if ((long)(char)bVar3 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
        if (7 < bVar3) {
          puVar1 = (uint *)(lVar8 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar9 = (byte *)(lVar8 + 0x471);
        }
      }
      local_44[0] = *pbVar9;
      if (7 < local_44[0]) goto LAB_02168068;
    }
    else {
      pbVar9 = PTR_DAT_04bb32e0;
      if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
        pbVar9 = (byte *)(DAT_04cd19d8 + 0x158);
      }
      if (7 < *pbVar9) {
        if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
          pbVar9 = (byte *)(DAT_054f5738 + 0x11a5);
          goto LAB_02167ff8;
        }
        goto LAB_02168004;
      }
LAB_02168070:
      local_44[0] = *pbVar9;
      if (7 < local_44[0]) {
        local_44[0] = 0xff;
      }
    }
    puVar5 = (undefined4 *)FUN_0251b3b0(local_44,0);
    if (puVar5 == (undefined4 *)0x0) {
      return 0;
    }
    lVar8 = FUN_0251bdc4(local_44,0);
    uVar11 = *puVar5;
    uVar12 = puVar5[1];
    uVar13 = puVar5[2];
    uVar2 = *(undefined4 *)(lVar8 + 4);
    local_68 = 0xfffe;
    FUN_0277d4ac(&local_68);
    local_50 = 0;
    local_60 = PTR_DAT_04bb2010 + 0x10;
    uStack_58 = 0;
    uStack_6c = 0x41200000;
    local_7c = uVar11;
    uStack_78 = uVar12;
    local_74 = uVar13;
    local_70 = uVar2;
    uVar6 = FUN_021672a0(&local_7c,&local_68);
    if ((uVar6 & 1) == 0) {
      uStack_80 = 0x40a00000;
      local_90 = uVar11;
      uStack_8c = uVar12;
      local_88 = uVar13;
      local_84 = uVar2;
      uVar6 = FUN_021672a0(&local_90,&local_68);
      if ((uVar6 & 1) == 0) goto LAB_02168128;
    }
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = (undefined4)local_68;
      param_1[1] = local_68._4_4_;
    }
    uVar7 = 1;
  }
  else {
LAB_02168128:
    uVar7 = 0;
  }
  return uVar7;
}


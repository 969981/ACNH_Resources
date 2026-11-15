
void FUN_0211873c(long param_1)

{
  uint *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  byte bVar5;
  short sVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined4 uVar13;
  long lVar14;
  byte *pbVar15;
  byte local_8c [4];
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
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
  
  puVar8 = PTR_DAT_04bb2720;
  sVar6 = *(short *)PTR_DAT_04bb6298;
  if (sVar6 == -1) {
LAB_02118820:
    uVar13 = 0xffffffff;
  }
  else {
    local_88._0_4_ = 0x15;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
    if (0xff < (uint)(int)sVar6) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x15 & 1) == 0) goto LAB_02118820;
    if (*(int *)(param_1 + 0x1604) == 1) {
      lVar14 = *(long *)PTR_DAT_04bb2720;
      uVar13 = 0;
      if (lVar14 != 0) {
        if (*(long *)(lVar14 + 0x330) == 0) {
          uVar13 = 0;
        }
        else {
          puVar11 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
          iVar10 = FUN_006bd550(*puVar11,0);
          uVar13 = 0;
          if (iVar10 == 0x758f7eaf) {
            uVar13 = 0;
            if (*(long *)puVar8 != 0) {
              lVar14 = *(long *)(*(long *)puVar8 + 0x330);
              uVar13 = 0;
              if (lVar14 != 0) {
                uVar13 = *(undefined4 *)(lVar14 + 0x248);
              }
            }
          }
        }
      }
    }
    else {
      uVar13 = 7;
    }
  }
  *(undefined4 *)(param_1 + 0x1518) = uVar13;
  if ((*(ushort *)(param_1 + 0x1528) >> 7 & 1) != 0) {
    local_65 = *(undefined1 *)(param_1 + 0x15f);
    local_64 = *(undefined4 *)(param_1 + 0x160);
    *(ushort *)(param_1 + 0x1528) = *(ushort *)(param_1 + 0x1528) & 0xff7f | 0x40;
    local_88._0_4_ = *(undefined4 *)(param_1 + 0x13c);
    local_60 = *(undefined2 *)(param_1 + 0x164);
    local_5e = *(undefined1 *)(param_1 + 0x166);
    local_5d = *(undefined1 *)(param_1 + 0x167);
    local_88._4_4_ = (undefined4)*(undefined8 *)(param_1 + 0x140);
    uStack_80 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x140) >> 0x20);
    local_74 = *(undefined4 *)(param_1 + 0x150);
    uStack_7c = (undefined4)*(undefined8 *)(param_1 + 0x148);
    uStack_78 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x148) >> 0x20);
    local_66 = *(undefined1 *)(param_1 + 0x15e);
    local_5c = *(undefined4 *)(param_1 + 0x168);
    local_58 = *(undefined2 *)(param_1 + 0x16c);
    local_56 = *(undefined1 *)(param_1 + 0x16e);
    local_55 = *(undefined1 *)(param_1 + 0x16f);
    local_54 = *(undefined4 *)(param_1 + 0x170);
    local_50 = *(undefined2 *)(param_1 + 0x174);
    local_4e = *(undefined1 *)(param_1 + 0x176);
    local_4d = *(undefined1 *)(param_1 + 0x177);
    local_4c = *(undefined4 *)(param_1 + 0x178);
    local_48 = *(undefined2 *)(param_1 + 0x17c);
    local_46 = *(undefined1 *)(param_1 + 0x17e);
    local_45 = *(undefined1 *)(param_1 + 0x17f);
    local_44 = *(undefined4 *)(param_1 + 0x180);
    local_70 = *(undefined4 *)(param_1 + 0x154);
    local_6c = *(undefined4 *)(param_1 + 0x158);
    local_68 = *(undefined2 *)(param_1 + 0x15c);
    uVar4 = *(undefined2 *)PTR_DAT_04bb37e0;
    uVar2 = PTR_DAT_04bb37e0[2];
    uVar3 = PTR_DAT_04bb37e0[3];
    uVar13 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    *(undefined2 *)(param_1 + 0x13c) = uVar4;
    *(undefined1 *)(param_1 + 0x13e) = uVar2;
    *(undefined1 *)(param_1 + 0x13f) = uVar3;
    *(undefined4 *)(param_1 + 0x140) = uVar13;
    *(undefined2 *)(param_1 + 0x144) = uVar4;
    *(undefined1 *)(param_1 + 0x146) = uVar2;
    *(undefined1 *)(param_1 + 0x147) = uVar3;
    *(undefined4 *)(param_1 + 0x148) = uVar13;
    *(undefined2 *)(param_1 + 0x14c) = uVar4;
    *(undefined1 *)(param_1 + 0x14e) = uVar2;
    *(undefined1 *)(param_1 + 0x14f) = uVar3;
    *(undefined4 *)(param_1 + 0x150) = uVar13;
    *(undefined2 *)(param_1 + 0x154) = uVar4;
    *(undefined1 *)(param_1 + 0x156) = uVar2;
    *(undefined1 *)(param_1 + 0x157) = uVar3;
    *(undefined4 *)(param_1 + 0x158) = uVar13;
    *(undefined2 *)(param_1 + 0x15c) = uVar4;
    *(undefined1 *)(param_1 + 0x15e) = uVar2;
    *(undefined1 *)(param_1 + 0x15f) = uVar3;
    *(undefined4 *)(param_1 + 0x160) = uVar13;
    *(undefined2 *)(param_1 + 0x164) = uVar4;
    *(undefined1 *)(param_1 + 0x166) = uVar2;
    *(undefined1 *)(param_1 + 0x167) = uVar3;
    *(undefined4 *)(param_1 + 0x168) = uVar13;
    *(undefined2 *)(param_1 + 0x16c) = uVar4;
    *(undefined1 *)(param_1 + 0x16e) = uVar2;
    *(undefined1 *)(param_1 + 0x16f) = uVar3;
    *(undefined4 *)(param_1 + 0x170) = uVar13;
    *(undefined2 *)(param_1 + 0x174) = uVar4;
    *(undefined1 *)(param_1 + 0x176) = uVar2;
    *(undefined1 *)(param_1 + 0x177) = uVar3;
    *(undefined4 *)(param_1 + 0x178) = uVar13;
    *(undefined2 *)(param_1 + 0x17c) = uVar4;
    *(undefined1 *)(param_1 + 0x17e) = uVar2;
    lVar14 = *(long *)PTR_DAT_04bb47d8;
    *(undefined1 *)(param_1 + 0x17f) = uVar3;
    *(undefined4 *)(param_1 + 0x180) = uVar13;
    if (lVar14 != 0) {
      FUN_021206a0(param_1,0xfffffffe,&local_88,1);
      FUN_02120fe0(param_1,0xfffffffe,&local_70,1);
    }
    *(undefined2 *)(param_1 + 0x15c) = local_68;
    *(undefined1 *)(param_1 + 0x15e) = local_66;
    *(undefined1 *)(param_1 + 0x15f) = local_65;
    *(undefined4 *)(param_1 + 0x160) = local_64;
    *(undefined2 *)(param_1 + 0x164) = local_60;
    *(undefined1 *)(param_1 + 0x166) = local_5e;
    *(undefined1 *)(param_1 + 0x167) = local_5d;
    *(undefined4 *)(param_1 + 0x168) = local_5c;
    *(undefined2 *)(param_1 + 0x16c) = local_58;
    *(ulong *)(param_1 + 0x144) = CONCAT44(uStack_7c,uStack_80);
    *(undefined1 *)(param_1 + 0x16e) = local_56;
    *(undefined1 *)(param_1 + 0x16f) = local_55;
    *(undefined4 *)(param_1 + 0x170) = local_54;
    *(undefined2 *)(param_1 + 0x174) = local_50;
    *(undefined1 *)(param_1 + 0x176) = local_4e;
    *(undefined1 *)(param_1 + 0x177) = local_4d;
    *(undefined4 *)(param_1 + 0x178) = local_4c;
    *(undefined2 *)(param_1 + 0x17c) = local_48;
    *(undefined1 *)(param_1 + 0x17e) = local_46;
    *(undefined4 *)(param_1 + 0x13c) = (undefined4)local_88;
    *(undefined4 *)(param_1 + 0x140) = local_88._4_4_;
    *(ulong *)(param_1 + 0x14c) = CONCAT44(local_74,uStack_78);
    *(undefined1 *)(param_1 + 0x17f) = local_45;
    *(undefined4 *)(param_1 + 0x180) = local_44;
    *(undefined4 *)(param_1 + 0x154) = local_70;
    *(undefined4 *)(param_1 + 0x158) = local_6c;
  }
  uVar12 = FUN_0290d828();
  puVar9 = PTR_DAT_04bb39b0;
  puVar8 = PTR_DAT_04bb2020;
  if ((uVar12 & 1) != 0) {
    return;
  }
  if ((*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0) && ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0))
  {
    return;
  }
  sVar6 = *(short *)PTR_DAT_04bc39f0;
  if (sVar6 == -1) {
LAB_02118b4c:
    puVar7 = (undefined *)CONCAT44(local_88._4_4_,(undefined4)local_88);
    if ((*(ushort *)(param_1 + 0x1528) >> 1 & 1) != 0) {
      lVar14 = *(long *)PTR_DAT_04bb39b0;
      pbVar15 = PTR_DAT_04bb32e0;
      if (lVar14 == 0) {
LAB_02118bb8:
        if (*pbVar15 < 8) goto LAB_02118c30;
LAB_02118bc4:
        if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02118c28:
          pbVar15 = PTR_DAT_04bb5038;
          goto LAB_02118c30;
        }
        lVar14 = **(long **)PTR_DAT_04bb27d0;
        bVar5 = *(byte *)(lVar14 + 0x473);
        pbVar15 = PTR_DAT_04bb5038;
        if ((long)(char)bVar5 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
          if (7 < bVar5) {
            puVar1 = (uint *)(lVar14 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar15 = (byte *)(lVar14 + 0x471);
          }
        }
        local_8c[0] = *pbVar15;
        if (7 < local_8c[0]) goto LAB_02118c28;
      }
      else {
        if (*(int *)(lVar14 + 0x15c) != 0) {
          pbVar15 = (byte *)(lVar14 + 0x158);
        }
        if (7 < *pbVar15) {
          if ((*(int *)(lVar14 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            pbVar15 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
            goto LAB_02118bb8;
          }
          goto LAB_02118bc4;
        }
LAB_02118c30:
        local_8c[0] = *pbVar15;
        if (7 < local_8c[0]) {
          local_8c[0] = 0xff;
        }
      }
      (**(code **)(DAT_053ed080 + 0x18))(&DAT_053ed080);
      local_88 = puVar8 + 0x10;
      uStack_80 = (undefined4)DAT_053ed088;
      uStack_7c = (undefined4)((ulong)DAT_053ed088 >> 0x20);
      FUN_027533a8(local_8c,&local_88,0);
      *(undefined1 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined1 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(undefined1 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined1 *)(param_1 + 100) = 0;
      *(undefined4 *)(param_1 + 0x7c) = 0;
      *(undefined1 *)(param_1 + 0x80) = 0;
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(undefined1 *)(param_1 + 0x9c) = 0;
      *(undefined4 *)(param_1 + 0xb4) = 0;
      *(undefined1 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xd0) = 0;
      *(undefined1 *)(param_1 + 0xd4) = 0;
      *(undefined4 *)(param_1 + 0xec) = 0;
      *(undefined8 *)(param_1 + 0x14) = 0;
      *(undefined8 *)(param_1 + 0x1c) = 0;
      *(undefined8 *)(param_1 + 0x54) = 0;
      *(undefined8 *)(param_1 + 0x4c) = 0;
      *(undefined8 *)(param_1 + 0x8c) = 0;
      *(undefined8 *)(param_1 + 0x84) = 0;
      *(undefined8 *)(param_1 + 0xc4) = 0;
      *(undefined8 *)(param_1 + 0xbc) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(undefined8 *)(param_1 + 0x70) = 0;
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined8 *)(param_1 + 0xa8) = 0;
      *(undefined8 *)(param_1 + 0xd8) = 0;
      *(undefined8 *)(param_1 + 0xe0) = 0;
      puVar7 = local_88;
    }
  }
  else {
    local_88._0_4_ = 0x15;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
    if (0xff < (uint)(int)sVar6) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    puVar7 = (undefined *)CONCAT44(local_88._4_4_,0x15);
    if ((*puVar1 >> 0x15 & 1) == 0) goto LAB_02118b4c;
  }
  local_88 = puVar7;
  (**(code **)(DAT_053ed0f0 + 0x18))(&DAT_053ed0f0);
  local_88 = puVar8 + 0x10;
  uStack_80 = (undefined4)DAT_053ed0f8;
  uStack_7c = (undefined4)((ulong)DAT_053ed0f8 >> 0x20);
  iVar10 = FUN_02743000(&local_88);
  if (iVar10 == 0) {
    return;
  }
  lVar14 = *(long *)puVar9;
  pbVar15 = PTR_DAT_04bb32e0;
  if (lVar14 == 0) {
LAB_02118d70:
    if (7 < *pbVar15) {
LAB_02118d7c:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar14 = **(long **)PTR_DAT_04bb27d0;
        bVar5 = *(byte *)(lVar14 + 0x473);
        pbVar15 = PTR_DAT_04bb5038;
        if ((long)(char)bVar5 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
          if (7 < bVar5) {
            puVar1 = (uint *)(lVar14 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar15 = (byte *)(lVar14 + 0x471);
          }
        }
        local_8c[0] = *pbVar15;
        if (local_8c[0] < 8) goto LAB_02118dfc;
      }
      pbVar15 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar14 + 0x15c) != 0) {
      pbVar15 = (byte *)(lVar14 + 0x158);
    }
    if (7 < *pbVar15) {
      if ((*(int *)(lVar14 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar15 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_02118d70;
      }
      goto LAB_02118d7c;
    }
  }
  local_8c[0] = *pbVar15;
  if (7 < local_8c[0]) {
    local_8c[0] = 0xff;
  }
LAB_02118dfc:
  (**(code **)(DAT_053ed0b8 + 0x18))(&DAT_053ed0b8);
  local_88 = puVar8 + 0x10;
  uStack_80 = (undefined4)DAT_053ed0c0;
  uStack_7c = (undefined4)((ulong)DAT_053ed0c0 >> 0x20);
  FUN_027533a8(local_8c,&local_88,0);
  return;
}


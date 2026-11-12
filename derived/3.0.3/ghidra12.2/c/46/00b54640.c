
bool FUN_00b54640(undefined2 *param_1,uint param_2,long param_3,undefined4 param_4,
                 undefined8 param_5,long param_6,long param_7,undefined8 param_8)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined2 *puVar10;
  void *pvVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  ushort uVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined1 uVar18;
  uint *puVar19;
  undefined1 uVar20;
  undefined4 *puVar21;
  long lVar22;
  uint *puVar23;
  uint local_854;
  undefined **local_850;
  undefined8 *local_848;
  undefined8 local_840;
  undefined8 local_838;
  undefined8 local_830;
  undefined8 local_828;
  undefined8 local_820;
  undefined *local_818;
  undefined1 auStack_810 [1876];
  uint local_bc;
  uint local_b8;
  uint local_b4;
  int local_b0;
  undefined *local_a8;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined1 local_9d;
  undefined4 local_9c;
  uint *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_70;
  
  puVar10 = (undefined2 *)FUN_028078d8(param_6);
  puVar5 = PTR_DAT_04bb43c0;
  local_a8 = PTR_DAT_04bc0510 + 0x10;
  local_a0 = *puVar10;
  local_9e = *(undefined1 *)(puVar10 + 1);
  local_9d = *(undefined1 *)((long)puVar10 + 3);
  local_9c = *(undefined4 *)(puVar10 + 2);
  local_98 = (uint *)0x0;
  lVar22 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(&local_a0);
  if (*(long *)puVar5 == 0) {
LAB_00b54750:
    puVar23 = (uint *)0x0;
  }
  else {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((*(uint *)(lVar22 + 0x1d8) <= uVar7) ||
       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_00b54750;
    lVar22 = *(long *)PTR_DAT_04bc0428;
    uVar7 = FUN_0277d6c4(puVar10);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if (*(uint *)(lVar22 + 0x1d8) <= uVar7) goto LAB_00b54750;
    puVar23 = *(uint **)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar7 * 8);
    if (puVar23 != (uint *)0x0) {
      local_98 = puVar23;
    }
  }
  pbVar1 = (byte *)(param_6 + 0xaf88);
  local_818 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_810,0,0x754);
  uVar7 = nn::os::GetSystemTick();
  local_bc = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
  local_b8 = (local_bc ^ local_bc >> 0x1e) * 0x6c078965 + 2;
  local_b4 = (local_b8 ^ local_b8 >> 0x1e) * 0x6c078965 + 3;
  local_b0 = (local_b4 ^ local_b4 >> 0x1e) * 0x6c078965 + 4;
  pvVar11 = (void *)FUN_01a451fc(&local_818);
  memset(pvVar11,0,0x754);
  if (puVar23 == (uint *)0x0) {
    uVar15 = 0xbc;
  }
  else {
    uVar7 = *puVar23;
    uVar15 = 0;
    if ((uVar7 != 0) && (puVar23 != (uint *)(ulong)uVar7)) {
      puVar19 = (uint *)((long)puVar23 - (long)(ulong)uVar7);
      uVar15 = 0;
      if (*puVar19 != 0) {
        uVar7 = puVar19[1];
        if ((uVar7 != 0) && ((ulong)(ushort)puVar19[2] != 0)) {
          lVar22 = 0xc;
          if (*(char *)((long)puVar19 + 10) != '\0') {
            lVar22 = 0x1c;
          }
          lVar22 = (long)puVar19 + lVar22 + (ulong)(ushort)puVar19[2] * 8;
          if (lVar22 != 0) {
            uVar2 = 0;
            if ((ulong)uVar7 != 0) {
              uVar2 = (uint)((ulong)((long)puVar23 - lVar22) / (ulong)uVar7);
            }
            if (*puVar19 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (uVar15 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar15 < 0xbd))
            goto LAB_00b54888;
          }
        }
        uVar15 = 0;
      }
    }
  }
LAB_00b54888:
  if (uVar15 != 10) {
    local_90 = (undefined **)CONCAT44(local_90._4_4_,0xd);
    local_848 = &local_90;
    local_850 = &PTR_FUN_049ff448;
    FUN_008a1ba0(&local_818,&local_850);
  }
  local_90._0_4_ = 0xf;
  local_850 = &PTR_FUN_049ff448;
  local_848 = &local_90;
  FUN_008a1ba0(&local_818,&local_850);
  local_90._0_4_ = 0xe;
  local_850 = &PTR_FUN_049ff448;
  local_848 = &local_90;
  FUN_008a1ba0(&local_818,&local_850);
  local_90._0_4_ = 0x10;
  local_850 = &PTR_FUN_049ff448;
  local_848 = &local_90;
  FUN_008a1ba0(&local_818,&local_850);
  local_90._0_4_ = 0x11;
  local_850 = &PTR_FUN_049ff448;
  local_848 = &local_90;
  FUN_008a1ba0(&local_818,&local_850);
  local_90 = (undefined **)CONCAT44(local_90._4_4_,0x12);
  local_850 = &PTR_FUN_049ff448;
  local_848 = &local_90;
  FUN_008a1ba0(&local_818,&local_850);
  local_850 = (undefined **)0xfffe;
  FUN_0277d4ac(&local_850);
  local_848 = (undefined8 *)0xfffe;
  FUN_0277d4ac(&local_848);
  local_840 = 0xfffe;
  FUN_0277d4ac(&local_840);
  local_838 = 0xfffe;
  FUN_0277d4ac(&local_838);
  local_830 = 0xfffe;
  FUN_0277d4ac(&local_830);
  local_828 = 0xfffe;
  FUN_0277d4ac(&local_828);
  local_820 = 0xfffe;
  FUN_0277d4ac(&local_820);
  if ((*(char *)(param_6 + 0xaf89) == '\0') || (7 < *pbVar1)) {
    lVar22 = param_6;
    if ((*(char *)(param_6 + 0xaf8a) != '\0') &&
       ((uVar13 = FUN_016e5e90(param_6), (uVar13 & 1) != 0 &&
        (lVar22 = param_6 + 0xaf90, (*(byte *)(param_6 + 0xaf8b) & 0xfe) != 0)))) {
      lVar22 = param_6;
    }
  }
  else {
    lVar22 = param_6 + (ulong)*pbVar1 * 0x11f8 + 0x1fc8;
  }
  puVar12 = (undefined8 *)FUN_026e85f0(lVar22);
  local_850 = (undefined **)*puVar12;
  if ((*(char *)(param_6 + 0xaf89) == '\0') || (7 < *pbVar1)) {
    lVar22 = param_6;
    if ((*(char *)(param_6 + 0xaf8a) != '\0') &&
       ((uVar13 = FUN_016e5e90(param_6), (uVar13 & 1) != 0 &&
        (lVar22 = param_6 + 0xaf90, (*(byte *)(param_6 + 0xaf8b) & 0xfe) != 0)))) {
      lVar22 = param_6;
    }
  }
  else {
    lVar22 = param_6 + (ulong)*pbVar1 * 0x11f8 + 0x1fc8;
  }
  local_848 = (undefined8 *)FUN_026ea320(lVar22);
  local_848 = (undefined8 *)*local_848;
  if ((*(char *)(param_6 + 0xaf89) == '\0') || (7 < *pbVar1)) {
    lVar22 = param_6;
    if ((*(char *)(param_6 + 0xaf8a) != '\0') &&
       ((uVar13 = FUN_016e5e90(param_6), (uVar13 & 1) != 0 &&
        (lVar22 = param_6 + 0xaf90, (*(byte *)(param_6 + 0xaf8b) & 0xfe) != 0)))) {
      lVar22 = param_6;
    }
  }
  else {
    lVar22 = param_6 + (ulong)*pbVar1 * 0x11f8 + 0x1fc8;
  }
  puVar12 = (undefined8 *)FUN_026ea720(lVar22);
  local_840 = *puVar12;
  puVar12 = (undefined8 *)FUN_02807b30(param_6);
  local_838 = *puVar12;
  if ((*(char *)(param_6 + 0xaf89) == '\0') || (7 < *pbVar1)) {
    lVar22 = param_6;
    if ((*(char *)(param_6 + 0xaf8a) != '\0') &&
       ((uVar13 = FUN_016e5e90(param_6), (uVar13 & 1) != 0 &&
        (lVar22 = param_6 + 0xaf90, (*(byte *)(param_6 + 0xaf8b) & 0xfe) != 0)))) {
      lVar22 = param_6;
    }
  }
  else {
    lVar22 = param_6 + (ulong)*pbVar1 * 0x11f8 + 0x1fc8;
  }
  puVar12 = (undefined8 *)FUN_026e9470(lVar22);
  local_830 = *puVar12;
  if ((*(char *)(param_6 + 0xaf89) == '\0') || (7 < *pbVar1)) {
    lVar22 = param_6;
    if ((*(char *)(param_6 + 0xaf8a) != '\0') &&
       ((uVar13 = FUN_016e5e90(), (uVar13 & 1) != 0 &&
        (lVar22 = param_6 + 0xaf90, (*(byte *)(param_6 + 0xaf8b) & 0xfe) != 0)))) {
      lVar22 = param_6;
    }
  }
  else {
    lVar22 = param_6 + (ulong)*pbVar1 * 0x11f8 + 0x1fc8;
  }
  puVar12 = (undefined8 *)FUN_026e9240(lVar22);
  local_828 = *puVar12;
  FUN_0253395c(&local_90,param_5,DAT_04c9a0c8);
  lVar22 = *(long *)puVar5;
  local_820 = local_90;
  uVar7 = FUN_0277d6c4(&local_850);
  if (*(long *)puVar5 != 0) {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar22 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar22 = (**(code **)(local_818 + 0x18))(&local_818);
      uVar7 = FUN_0277d6c4(&local_850);
      if ((uVar7 >> 3 & 0x1fff) < 0x753) {
        lVar14 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
        *(uint *)(lVar22 + lVar14) =
             *(uint *)(lVar22 + lVar14) & (1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar22 = *(long *)puVar5;
  uVar7 = FUN_0277d6c4(&local_848);
  if (*(long *)puVar5 != 0) {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar22 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar22 = (**(code **)(local_818 + 0x18))(&local_818);
      uVar7 = FUN_0277d6c4(&local_848);
      if ((uVar7 >> 3 & 0x1fff) < 0x753) {
        lVar14 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
        *(uint *)(lVar22 + lVar14) =
             *(uint *)(lVar22 + lVar14) & (1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar22 = *(long *)puVar5;
  uVar7 = FUN_0277d6c4(&local_840);
  if (*(long *)puVar5 != 0) {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar22 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar22 = (**(code **)(local_818 + 0x18))(&local_818);
      uVar7 = FUN_0277d6c4(&local_840);
      if ((uVar7 >> 3 & 0x1fff) < 0x753) {
        lVar14 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
        *(uint *)(lVar22 + lVar14) =
             *(uint *)(lVar22 + lVar14) & (1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar22 = *(long *)puVar5;
  uVar7 = FUN_0277d6c4(&local_838);
  if (*(long *)puVar5 != 0) {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar22 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar22 = (**(code **)(local_818 + 0x18))(&local_818);
      uVar7 = FUN_0277d6c4(&local_838);
      if ((uVar7 >> 3 & 0x1fff) < 0x753) {
        lVar14 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
        *(uint *)(lVar22 + lVar14) =
             *(uint *)(lVar22 + lVar14) & (1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar22 = *(long *)puVar5;
  uVar7 = FUN_0277d6c4(&local_830);
  if (*(long *)puVar5 != 0) {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar22 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar22 = (**(code **)(local_818 + 0x18))(&local_818);
      uVar7 = FUN_0277d6c4(&local_830);
      if ((uVar7 >> 3 & 0x1fff) < 0x753) {
        lVar14 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
        *(uint *)(lVar22 + lVar14) =
             *(uint *)(lVar22 + lVar14) & (1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar22 = *(long *)puVar5;
  uVar7 = FUN_0277d6c4(&local_828);
  if (*(long *)puVar5 != 0) {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar22 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar22 = (**(code **)(local_818 + 0x18))(&local_818);
      uVar7 = FUN_0277d6c4(&local_828);
      if ((uVar7 >> 3 & 0x1fff) < 0x753) {
        lVar14 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
        *(uint *)(lVar22 + lVar14) =
             *(uint *)(lVar22 + lVar14) & (1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar22 = *(long *)puVar5;
  uVar7 = FUN_0277d6c4(&local_820);
  if (*(long *)puVar5 != 0) {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar22 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar22 = (**(code **)(local_818 + 0x18))(&local_818);
      uVar7 = FUN_0277d6c4(&local_820);
      if ((uVar7 >> 3 & 0x1fff) < 0x753) {
        lVar14 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
        *(uint *)(lVar22 + lVar14) =
             *(uint *)(lVar22 + lVar14) & (1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  uVar20 = 1;
  iVar8 = *(int *)(param_3 + 0x1f8);
  local_90 = (undefined **)CONCAT44(local_90._4_4_,iVar8);
  if (iVar8 == 2) {
    pvVar11 = (void *)(**(code **)(local_818 + 0x18))(&local_818);
    memset(pvVar11,0,0x754);
    local_70 = 0x14;
    local_88 = &local_70;
    local_90 = &PTR_FUN_049ff448;
    FUN_008a1ba0(&local_818,&local_90);
    uVar7 = 0;
    local_854 = 0xf;
    local_88 = &local_854;
    local_90 = &PTR_FUN_049ff4e8;
    do {
      (**(code **)(local_818 + 0x10))(&local_70,&local_818,uVar7);
      lVar22 = (**(code **)(local_818 + 0x20))(&local_818);
      uVar2 = 1 << (ulong)(uVar7 & 0x1f);
      if ((*(uint *)(lVar22 + (ulong)(uVar7 >> 5) * 4) & uVar2) != 0) {
        lVar22 = *(long *)puVar5;
        uVar9 = FUN_0277d6c4(&local_70);
        if (*(long *)puVar5 != 0) {
          lVar22 = *(long *)(lVar22 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
          if (((uVar9 < *(uint *)(lVar22 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) &&
             (uVar13 = (*(code *)*local_90)(&local_90,&local_70), (uVar13 & 1) != 0))
          goto LAB_00b55210;
        }
        lVar22 = (**(code **)(local_818 + 0x18))(&local_818);
        lVar14 = (ulong)(uVar7 >> 5) * 4;
        *(uint *)(lVar22 + lVar14) = *(uint *)(lVar22 + lVar14) & (uVar2 ^ 0xffffffff);
      }
LAB_00b55210:
      uVar7 = uVar7 + 1;
    } while (uVar7 != 15000);
    FUN_026b6cf0(param_8,&local_818,0);
    uVar20 = 0;
    goto LAB_00b55484;
  }
  if (iVar8 == 1) {
    if (local_98 == (uint *)0x0) {
      uVar7 = 1;
    }
    else {
      uVar2 = *local_98;
      uVar7 = 0;
      if ((uVar2 != 0) && (local_98 != (uint *)(ulong)uVar2)) {
        puVar23 = (uint *)((long)local_98 - (long)(ulong)uVar2);
        uVar7 = 0;
        if (*puVar23 != 0) {
          uVar7 = puVar23[1];
          if ((uVar7 != 0) && ((ulong)(ushort)puVar23[2] != 0)) {
            lVar22 = 0xc;
            if (*(char *)((long)puVar23 + 10) != '\0') {
              lVar22 = 0x1c;
            }
            lVar22 = (long)puVar23 + lVar22 + (ulong)(ushort)puVar23[2] * 8;
            if (lVar22 != 0) {
              uVar2 = 0;
              if ((ulong)uVar7 != 0) {
                uVar2 = (uint)((ulong)((long)local_98 - lVar22) / (ulong)uVar7);
              }
              if (*puVar23 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326c78) &&
                 (uVar7 = (uint)*(ushort *)(DAT_05326c80 + (long)(int)uVar2 * 2), uVar7 < 7))
              goto LAB_00b55364;
            }
          }
          uVar7 = 0;
        }
      }
    }
LAB_00b55364:
    local_90 = (undefined **)CONCAT44(local_90._4_4_,uVar7);
    uVar2 = *(uint *)(&DAT_04168604 + (long)(int)uVar7 * 4);
    local_70 = FUN_01ae0cf0(&local_a8);
    uVar7 = 0;
    local_854 = *(uint *)(&DAT_04168604 + (long)local_70 * 4) | uVar2;
    local_88 = &local_854;
    local_90 = &PTR_FUN_04938a20;
    do {
      (**(code **)(local_818 + 0x10))(&local_70,&local_818,uVar7);
      lVar22 = (**(code **)(local_818 + 0x20))(&local_818);
      uVar2 = 1 << (ulong)(uVar7 & 0x1f);
      if ((*(uint *)(lVar22 + (ulong)(uVar7 >> 5) * 4) & uVar2) != 0) {
        lVar22 = *(long *)puVar5;
        uVar9 = FUN_0277d6c4(&local_70);
        if (*(long *)puVar5 != 0) {
          lVar22 = *(long *)(lVar22 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
          if (((uVar9 < *(uint *)(lVar22 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) &&
             (uVar13 = (*(code *)*local_90)(&local_90,&local_70), (uVar13 & 1) != 0))
          goto LAB_00b553e0;
        }
        lVar22 = (**(code **)(local_818 + 0x18))(&local_818);
        lVar14 = (ulong)(uVar7 >> 5) * 4;
        *(uint *)(lVar22 + lVar14) = *(uint *)(lVar22 + lVar14) & (uVar2 ^ 0xffffffff);
      }
LAB_00b553e0:
      uVar7 = uVar7 + 1;
    } while (uVar7 != 15000);
  }
  else {
    if (iVar8 != 0) goto LAB_00b55484;
    iVar8 = FUN_01ae3210(&local_a8);
    local_90 = (undefined **)CONCAT44(local_90._4_4_,iVar8);
    uVar2 = *(uint *)(&DAT_041685c8 + (long)iVar8 * 4);
    local_70 = FUN_01ae3bc0(&local_a8);
    uVar7 = 0;
    local_854 = *(uint *)(&DAT_041685c8 + (long)local_70 * 4) | uVar2;
    local_88 = &local_854;
    local_90 = &PTR_FUN_049389f8;
    do {
      (**(code **)(local_818 + 0x10))(&local_70,&local_818,uVar7);
      lVar22 = (**(code **)(local_818 + 0x20))(&local_818);
      uVar2 = 1 << (ulong)(uVar7 & 0x1f);
      if ((*(uint *)(lVar22 + (ulong)(uVar7 >> 5) * 4) & uVar2) != 0) {
        lVar22 = *(long *)puVar5;
        uVar9 = FUN_0277d6c4(&local_70);
        if (*(long *)puVar5 != 0) {
          lVar22 = *(long *)(lVar22 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
          if (((uVar9 < *(uint *)(lVar22 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) &&
             (uVar13 = (*(code *)*local_90)(&local_90,&local_70), (uVar13 & 1) != 0))
          goto LAB_00b550e0;
        }
        lVar22 = (**(code **)(local_818 + 0x18))(&local_818);
        lVar14 = (ulong)(uVar7 >> 5) * 4;
        *(uint *)(lVar22 + lVar14) = *(uint *)(lVar22 + lVar14) & (uVar2 ^ 0xffffffff);
      }
LAB_00b550e0:
      uVar7 = uVar7 + 1;
    } while (uVar7 != 15000);
  }
  uVar20 = 1;
LAB_00b55484:
  bVar6 = FUN_020fd7d8(param_8);
  FUN_00b92ba0(&local_818,bVar6 < 4,*(int *)(param_7 + 0x18) != 1);
  uVar16 = 1;
  if ((param_2 & 1) == 0) {
    uVar16 = 2;
  }
  local_90 = (undefined **)CONCAT44(local_90._4_4_,uVar16);
  FUN_00b90bb0(&local_818,0,&local_90,param_5,param_7,param_4,param_8,0,uVar20,0);
  puVar23 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
  uVar7 = *puVar23 ^ *puVar23 << 0xb;
  uVar9 = puVar23[3];
  *puVar23 = puVar23[1];
  puVar23[1] = puVar23[2];
  uVar2 = uVar7 ^ uVar9;
  uVar7 = uVar7 >> 8 ^ uVar9 >> 0x13 ^ uVar2;
  puVar23[2] = uVar9;
  puVar23[3] = uVar7;
  uVar7 = (uVar7 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
  uVar2 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 2;
  local_90 = (undefined **)CONCAT44(uVar2,uVar7);
  uVar9 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
  uVar3 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 4;
  local_88 = (uint *)CONCAT44(uVar3,uVar9);
  lVar14 = (**(code **)(local_818 + 0x20))(&local_818);
  lVar22 = 0;
  iVar8 = 0;
  do {
    puVar23 = (uint *)(lVar14 + lVar22);
    lVar22 = lVar22 + 4;
    uVar17 = *puVar23 - (*puVar23 >> 1 & 0x55555555);
    uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
    uVar17 = uVar17 + (uVar17 >> 4) & 0xf0f0f0f;
    uVar17 = uVar17 + (uVar17 >> 8);
    iVar8 = (uVar17 + (uVar17 >> 0x10) & 0x3f) + iVar8;
  } while (lVar22 != 0x754);
  if (iVar8 == 0) {
    puVar21 = (undefined4 *)&DAT_05586008;
    uVar18 = DAT_0558600b;
    uVar20 = DAT_0558600a;
  }
  else {
    lVar14 = (**(code **)(local_818 + 0x20))(&local_818);
    lVar22 = 0;
    uVar17 = 0;
    do {
      puVar23 = (uint *)(lVar14 + lVar22);
      lVar22 = lVar22 + 4;
      uVar4 = *puVar23 - (*puVar23 >> 1 & 0x55555555);
      uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
      uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
      uVar4 = uVar4 + (uVar4 >> 8);
      uVar17 = (uVar4 + (uVar4 >> 0x10) & 0x3f) + uVar17;
    } while (lVar22 != 0x754);
    uVar7 = uVar7 ^ uVar7 * 0x800;
    local_90 = (undefined **)CONCAT44(uVar9,uVar2);
    puVar21 = &local_70;
    uVar7 = uVar7 >> 8 ^ uVar3 >> 0x13 ^ uVar7 ^ uVar3;
    local_88 = (uint *)CONCAT44(uVar7,uVar3);
    FUN_00889f80(&local_70,&local_818,(int)((ulong)uVar7 * (ulong)uVar17 >> 0x20) + 1);
    FUN_01a4c66c(&local_90,&local_70);
    uVar18 = local_70._3_1_;
    uVar20 = local_70._2_1_;
  }
  uVar16 = puVar21[1];
  *param_1 = *(undefined2 *)puVar21;
  *(undefined1 *)(param_1 + 1) = uVar20;
  *(undefined1 *)((long)param_1 + 3) = uVar18;
  *(undefined4 *)(param_1 + 2) = uVar16;
  lVar22 = *(long *)puVar5;
  uVar7 = FUN_0277d6c4();
  if (*(long *)puVar5 != 0) {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if (uVar7 < *(uint *)(lVar22 + 0x1d8)) {
      return *(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar7 * 8) != 0;
    }
  }
  return false;
}



void FUN_028aa290(long param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  void *__s;
  ulong uVar10;
  ushort *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined **local_848;
  undefined8 local_840;
  undefined8 local_838;
  undefined1 local_815;
  undefined *local_810;
  undefined2 local_808;
  undefined1 local_806;
  undefined1 local_805;
  undefined4 local_804;
  undefined8 local_800;
  undefined4 local_7f8;
  undefined4 local_7f4;
  uint local_7f0;
  uint uStack_7ec;
  uint local_7e8;
  uint uStack_7e4;
  undefined *local_7e0;
  undefined4 local_7d8;
  undefined4 uStack_7d4;
  undefined8 local_7d0;
  uint local_84;
  uint local_80;
  uint local_7c;
  int local_78;
  uint local_70;
  uint local_6c [3];
  
  local_6c[0] = param_3;
  local_70 = nn::time::GetDayOfWeek
                       ((int)*(short *)(param_2 + 0x10),(int)*(char *)(param_2 + 0x12),
                        (int)*(char *)(param_2 + 0x13));
  puVar6 = PTR_DAT_04bc0068;
  puVar5 = PTR_DAT_04bb43c0;
  lVar17 = 0;
  lVar18 = *(long *)PTR_DAT_04bb43c0;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  do {
    lVar19 = param_1 + (ulong)local_70 * 0x200;
    if (6 < local_70) {
      lVar19 = param_1;
    }
    puVar2 = (undefined4 *)(lVar19 + lVar17);
    uVar7 = FUN_0277d6c4(puVar2);
    lVar19 = *(long *)puVar5;
    if (lVar19 != 0) {
      lVar18 = *(long *)(lVar18 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar18 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_7d8 = *puVar2;
        uStack_7d4 = puVar2[1];
        local_7d0 = 0;
        local_7e0 = puVar1;
        uVar7 = FUN_0277d6c4(&local_7d8);
        lVar18 = *(long *)puVar5;
        if (lVar18 == 0) {
LAB_028aa484:
          uVar14 = 0;
        }
        else {
          lVar19 = *(long *)(lVar19 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          if ((*(uint *)(lVar19 + 0x1d8) <= uVar7) ||
             (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_028aa484;
          lVar19 = *(long *)PTR_DAT_04bc0428;
          uVar7 = FUN_0277d6c4(puVar2);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          lVar18 = *(long *)puVar5;
          if ((*(uint *)(lVar19 + 0x1d8) <= uVar7) ||
             (puVar15 = *(uint **)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar7 * 8),
             puVar15 == (uint *)0x0)) goto LAB_028aa484;
          uVar7 = *puVar15;
          uVar14 = 0;
          if ((uVar7 != 0) && (puVar15 != (uint *)(ulong)uVar7)) {
            puVar16 = (uint *)((long)puVar15 - (long)(ulong)uVar7);
            uVar14 = 0;
            if (*puVar16 != 0) {
              uVar7 = puVar16[1];
              if ((uVar7 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
                lVar19 = 0xc;
                if (*(char *)((long)puVar16 + 10) != '\0') {
                  lVar19 = 0x1c;
                }
                lVar19 = (long)puVar16 + lVar19 + (ulong)(ushort)puVar16[2] * 8;
                if (lVar19 != 0) {
                  uVar14 = 0;
                  if ((ulong)uVar7 != 0) {
                    uVar14 = (uint)((ulong)((long)puVar15 - lVar19) / (ulong)uVar7);
                  }
                  if (*puVar16 <= uVar14) {
                    uVar14 = 0xffffffff;
                  }
                  if ((uVar14 < *(uint *)puVar6) &&
                     (uVar14 = (uint)*(ushort *)(*(long *)(puVar6 + 8) + (long)(int)uVar14 * 2),
                     uVar14 < 0x13e)) goto LAB_028aa488;
                }
              }
              goto LAB_028aa484;
            }
          }
        }
LAB_028aa488:
        local_848 = (undefined **)CONCAT44(local_848._4_4_,uVar14);
        lVar19 = lVar18;
        if (uVar14 == local_6c[0]) {
          return;
        }
      }
    }
    lVar18 = lVar19;
    lVar17 = lVar17 + 8;
  } while (lVar17 != 0x200);
  local_7e0 = PTR_DAT_04bbfe60 + 0x10;
  memset(&local_7d8,0,0x754);
  uVar7 = nn::os::GetSystemTick();
  local_84 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
  local_80 = (local_84 ^ local_84 >> 0x1e) * 0x6c078965 + 2;
  local_7c = (local_80 ^ local_80 >> 0x1e) * 0x6c078965 + 3;
  local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)FUN_01a451fc(&local_7e0);
  memset(__s,0,0x754);
  local_840 = local_6c;
  local_848 = &PTR_FUN_049ff4e8;
  FUN_008a1ba0(&local_7e0,&local_848);
  uVar7 = 0;
  local_840 = &local_7f0;
  local_7f0 = 0;
  local_848 = &PTR_FUN_049ff448;
  do {
    (**(code **)(local_7e0 + 0x10))(&local_810,&local_7e0,uVar7);
    lVar17 = (**(code **)(local_7e0 + 0x20))(&local_7e0);
    uVar14 = 1 << (ulong)(uVar7 & 0x1f);
    if ((*(uint *)(lVar17 + (ulong)(uVar7 >> 5) * 4) & uVar14) != 0) {
      lVar17 = *(long *)puVar5;
      uVar8 = FUN_0277d6c4(&local_810);
      if (*(long *)puVar5 != 0) {
        lVar17 = *(long *)(lVar17 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if (((uVar8 < *(uint *)(lVar17 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) &&
           (uVar10 = (*(code *)*local_848)(&local_848,&local_810), (uVar10 & 1) != 0))
        goto LAB_028aa5a4;
      }
      lVar17 = (**(code **)(local_7e0 + 0x18))(&local_7e0);
      lVar18 = (ulong)(uVar7 >> 5) * 4;
      *(uint *)(lVar17 + lVar18) = *(uint *)(lVar17 + lVar18) & (uVar14 ^ 0xffffffff);
    }
LAB_028aa5a4:
    uVar7 = uVar7 + 1;
  } while (uVar7 != 15000);
  lVar17 = *(long *)puVar5;
  uVar7 = FUN_0277d6c4(param_1 + 0x16d0);
  if (*(long *)puVar5 != 0) {
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar17 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar17 = (**(code **)(local_7e0 + 0x18))(&local_7e0);
      uVar7 = FUN_0277d6c4(param_1 + 0x16d0);
      if ((uVar7 >> 3 & 0x1fff) < 0x753) {
        lVar18 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
        *(uint *)(lVar17 + lVar18) =
             *(uint *)(lVar17 + lVar18) & (1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar17 = *(long *)puVar5;
  uVar7 = FUN_0277d6c4(param_1 + 0x16d8);
  if (*(long *)puVar5 != 0) {
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar17 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar17 = (**(code **)(local_7e0 + 0x18))(&local_7e0);
      uVar7 = FUN_0277d6c4(param_1 + 0x16d8);
      if ((uVar7 >> 3 & 0x1fff) < 0x753) {
        lVar18 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
        *(uint *)(lVar17 + lVar18) =
             *(uint *)(lVar17 + lVar18) & (1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar17 = *(long *)puVar5;
  uVar7 = FUN_0277d6c4(param_1 + 0x16e0);
  if (*(long *)puVar5 != 0) {
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar17 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar17 = (**(code **)(local_7e0 + 0x18))(&local_7e0);
      uVar7 = FUN_0277d6c4(param_1 + 0x16e0);
      if ((uVar7 >> 3 & 0x1fff) < 0x753) {
        lVar18 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
        *(uint *)(lVar17 + lVar18) =
             *(uint *)(lVar17 + lVar18) & (1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  puVar15 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar7 = *puVar15 ^ *puVar15 << 0xb;
  uVar8 = puVar15[3];
  *puVar15 = puVar15[1];
  puVar15[1] = puVar15[2];
  uVar14 = uVar7 ^ uVar8;
  uVar7 = uVar7 >> 8 ^ uVar8 >> 0x13 ^ uVar14;
  puVar15[2] = uVar8;
  puVar15[3] = uVar7;
  local_7f0 = (uVar7 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
  uStack_7ec = (local_7f0 ^ local_7f0 >> 0x1e) * 0x6c078965 + 2;
  local_7e8 = (uStack_7ec ^ uStack_7ec >> 0x1e) * 0x6c078965 + 3;
  uStack_7e4 = (local_7e8 ^ local_7e8 >> 0x1e) * 0x6c078965 + 4;
  lVar18 = (**(code **)(local_7e0 + 0x20))(&local_7e0);
  lVar17 = 0;
  iVar9 = 0;
  do {
    puVar15 = (uint *)(lVar18 + lVar17);
    lVar17 = lVar17 + 4;
    uVar7 = *puVar15 - (*puVar15 >> 1 & 0x55555555);
    uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
    uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
    uVar7 = uVar7 + (uVar7 >> 8);
    iVar9 = (uVar7 + (uVar7 >> 0x10) & 0x3f) + iVar9;
  } while (lVar17 != 0x754);
  if (iVar9 == 0) {
    local_7f8 = *(undefined4 *)PTR_DAT_04bb37e0;
    local_7f4 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  }
  else {
    lVar18 = (**(code **)(local_7e0 + 0x20))(&local_7e0);
    lVar17 = 0;
    uVar7 = 0;
    do {
      puVar15 = (uint *)(lVar18 + lVar17);
      lVar17 = lVar17 + 4;
      uVar14 = *puVar15 - (*puVar15 >> 1 & 0x55555555);
      uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
      uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
      uVar14 = uVar14 + (uVar14 >> 8);
      uVar7 = (uVar14 + (uVar14 >> 0x10) & 0x3f) + uVar7;
    } while (lVar17 != 0x754);
    uVar14 = local_7f0 ^ local_7f0 << 0xb;
    local_7f0 = uStack_7ec;
    uStack_7ec = local_7e8;
    uVar14 = uVar14 >> 8 ^ uStack_7e4 >> 0x13 ^ uVar14 ^ uStack_7e4;
    local_7e8 = uStack_7e4;
    uStack_7e4 = uVar14;
    FUN_00889f80(&local_7f8,&local_7e0,(int)((ulong)uVar14 * (ulong)uVar7 >> 0x20) + 1);
    FUN_01a4c66c(&local_7f0,&local_7f8);
  }
  lVar17 = *(long *)puVar5;
  uVar7 = FUN_0277d6c4(&local_7f8);
  lVar18 = *(long *)puVar5;
  if (lVar18 == 0) {
    return;
  }
  lVar17 = *(long *)(lVar17 + 0x57e58);
  uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
  if (*(uint *)(lVar17 + 0x1d8) <= uVar7) {
    return;
  }
  if (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar7 * 8) == 0) {
    return;
  }
  if (local_6c[0] == 0x122) {
    local_838 = 0;
    local_848 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
    local_840 = (uint *)CONCAT44(local_7f4,local_7f8);
    uVar7 = FUN_0277d6c4(&local_840);
    if (*(long *)puVar5 != 0) {
      lVar17 = *(long *)(lVar18 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar17 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        lVar17 = *(long *)PTR_DAT_04bc0428;
        uVar7 = FUN_0277d6c4(&local_7f8);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if (uVar7 < *(uint *)(lVar17 + 0x1d8)) {
          lVar17 = *(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar7 * 8);
          if (lVar17 != 0) {
            local_838 = lVar17;
          }
        }
      }
    }
    if ((*(long *)PTR_DAT_04bb46f0 != 0) &&
       (uVar10 = FUN_026222e0(*(long *)PTR_DAT_04bb46f0,&local_840), (uVar10 & 1) != 0)) {
      lVar17 = *(long *)(*(long *)PTR_DAT_04bb27d0 + 0x10);
      if ((lVar17 == 0) ||
         (((*(uint *)(*(long *)PTR_DAT_04bb27d0 + 0x80) & 0xfffffffe) != 2 ||
          (*(int *)(lVar17 + 0x3e4) == 1)))) {
        uVar7 = *(uint *)(*(long *)PTR_DAT_04bb30a0 + 0x65204);
        if (1 < uVar7) {
          uVar7 = 0;
        }
      }
      else {
        uVar7 = *(uint *)(*(long *)PTR_DAT_04bbaed0 + 0x274);
      }
      iVar9 = FUN_01ad7260(&local_848);
      if ((iVar9 != 0) &&
         (((uVar7 != 1 || (iVar9 = FUN_01ad7260(&local_848), 1 < iVar9)) &&
          (puVar11 = (ushort *)FUN_01afd600(&local_848), puVar11 != (ushort *)0x0)))) {
        *puVar11 = *puVar11 & 0xfff8 | (ushort)(uVar7 == 1);
      }
      local_7f8 = (undefined4)local_840;
      local_7f4 = local_840._4_4_;
    }
  }
  lVar17 = param_1 + (ulong)local_70 * 0x200;
  if (6 < local_70) {
    lVar17 = param_1;
  }
  *(undefined2 *)(lVar17 + 0x10) = (undefined2)local_7f8;
  *(undefined1 *)(lVar17 + 0x12) = local_7f8._2_1_;
  *(undefined1 *)(lVar17 + 0x13) = local_7f8._3_1_;
  *(undefined4 *)(lVar17 + 0x14) = local_7f4;
  lVar17 = param_1 + 0xe00 + (ulong)local_70 * 0x100;
  if (6 < local_70) {
    lVar17 = param_1 + 0xe00;
  }
  *(undefined4 *)(lVar17 + 8) = 1;
  lVar17 = param_1 + 0x1500 + (ulong)local_70 * 0x40;
  if (6 < local_70) {
    lVar17 = param_1 + 0x1500;
  }
  *(undefined1 *)(lVar17 + 2) = 1;
  *(undefined2 *)(param_1 + 0x16d0) = *(undefined2 *)(param_1 + 0x16d8);
  *(undefined2 *)(param_1 + 0x16d2) = *(undefined2 *)(param_1 + 0x16da);
  *(undefined4 *)(param_1 + 0x16d4) = *(undefined4 *)(param_1 + 0x16dc);
  uVar4 = *(undefined2 *)(param_1 + 0x16e0);
  *(undefined2 *)(param_1 + 0x16e0) = (undefined2)local_7f8;
  *(undefined2 *)(param_1 + 0x16d8) = uVar4;
  uVar4 = *(undefined2 *)(param_1 + 0x16e2);
  *(undefined1 *)(param_1 + 0x16e2) = local_7f8._2_1_;
  *(undefined1 *)(param_1 + 0x16e3) = local_7f8._3_1_;
  *(undefined2 *)(param_1 + 0x16da) = uVar4;
  uVar3 = *(undefined4 *)(param_1 + 0x16e4);
  *(undefined4 *)(param_1 + 0x16e4) = local_7f4;
  *(undefined4 *)(param_1 + 0x16dc) = uVar3;
  lVar17 = *(long *)puVar5;
  local_806 = local_7f8._2_1_;
  local_805 = local_7f8._3_1_;
  local_804 = local_7f4;
  local_800 = 0;
  local_810 = PTR_DAT_04bc0510 + 0x10;
  local_808 = (undefined2)local_7f8;
  uVar7 = FUN_0277d6c4(&local_808);
  puVar15 = (uint *)0x0;
  if (*(long *)puVar5 != 0) {
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if (uVar7 < *(uint *)(lVar17 + 0x1d8)) {
      puVar15 = (uint *)0x0;
      if (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar7 * 8) != 0) {
        lVar17 = *(long *)PTR_DAT_04bc0428;
        uVar7 = FUN_0277d6c4(&local_7f8);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if (*(uint *)(lVar17 + 0x1d8) <= uVar7) goto LAB_028aac9c;
        puVar15 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar7 * 8);
      }
    }
    else {
LAB_028aac9c:
      puVar15 = (uint *)0x0;
    }
  }
  local_815 = 0;
  local_840 = (uint *)((long)&local_838 + 4);
  local_838 = CONCAT35(local_838._5_3_,0x20);
  local_848 = (undefined **)(PTR_DAT_04bb2028 + 0x10);
  if (local_70 < 7) {
    puVar12 = *(undefined8 **)(PTR_s_Sunday_04bc3898 + (ulong)local_70 * 8 + 0x40);
  }
  else {
    puVar12 = &DAT_0407ebb1;
  }
  if (puVar15 == (uint *)0x0) {
    uVar7 = 0xbc;
  }
  else {
    uVar14 = *puVar15;
    uVar7 = 0;
    if ((uVar14 != 0) && (puVar15 != (uint *)(ulong)uVar14)) {
      puVar16 = (uint *)((long)puVar15 - (long)(ulong)uVar14);
      uVar7 = 0;
      if (*puVar16 != 0) {
        uVar7 = puVar16[1];
        if ((uVar7 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
          lVar17 = 0xc;
          if (*(char *)((long)puVar16 + 10) != '\0') {
            lVar17 = 0x1c;
          }
          lVar17 = (long)puVar16 + lVar17 + (ulong)(ushort)puVar16[2] * 8;
          if (lVar17 != 0) {
            uVar14 = 0;
            if ((ulong)uVar7 != 0) {
              uVar14 = (uint)((ulong)((long)puVar15 - lVar17) / (ulong)uVar7);
            }
            if (*puVar16 <= uVar14) {
              uVar14 = 0xffffffff;
            }
            if ((uVar14 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar7 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar14 * 2),
               uVar7 < 0xbd)) goto LAB_028aad88;
          }
        }
        uVar7 = 0;
      }
    }
  }
LAB_028aad88:
  if (uVar7 < 0xbd) {
    puVar13 = *(undefined8 **)(PTR_DAT_04bb8f90 + (ulong)uVar7 * 8 + 0x830);
  }
  else {
    puVar13 = &DAT_0407ebb1;
  }
  FUN_038d1270(&local_848,"Shop.Zakka.%s.%s",puVar12,puVar13);
  return;
}


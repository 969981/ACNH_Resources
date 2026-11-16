
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028ad3e0(long param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined *puVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  void *__s;
  ulong uVar21;
  ushort *puVar22;
  undefined2 uVar23;
  undefined8 *puVar24;
  undefined1 uVar25;
  uint uVar26;
  undefined1 uVar27;
  uint *puVar28;
  undefined4 uVar29;
  uint *puVar30;
  long lVar31;
  long lVar32;
  undefined4 *puVar33;
  long lVar34;
  uint local_81c;
  uint uStack_818;
  uint local_814;
  uint uStack_810;
  undefined4 local_80c;
  undefined8 local_808;
  undefined *local_800;
  undefined4 local_7f8;
  undefined4 uStack_7f4;
  undefined8 local_7f0;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  int local_98;
  uint local_90;
  uint local_8c;
  undefined **local_88;
  undefined8 local_80;
  long local_78;
  
  local_8c = param_3;
  local_90 = nn::time::GetDayOfWeek
                       ((int)*(short *)(param_2 + 0x10),(int)*(char *)(param_2 + 0x12),
                        (int)*(char *)(param_2 + 0x13));
  puVar17 = PTR_DAT_04bb43c0;
  lVar31 = 0;
  lVar32 = *(long *)PTR_DAT_04bb43c0;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  do {
    lVar34 = param_1 + (ulong)local_90 * 0x200;
    if (6 < local_90) {
      lVar34 = param_1;
    }
    puVar33 = (undefined4 *)(lVar34 + lVar31);
    uVar18 = FUN_0277d6c4(puVar33);
    lVar34 = *(long *)puVar17;
    if (lVar34 != 0) {
      lVar32 = *(long *)(lVar32 + 0x57e58);
      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar32 + 0x1f8);
      if ((uVar18 < *(uint *)(lVar32 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar32 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
        local_7f8 = *puVar33;
        uStack_7f4 = puVar33[1];
        local_7f0 = 0;
        local_800 = puVar1;
        uVar18 = FUN_0277d6c4(&local_7f8);
        lVar32 = *(long *)puVar17;
        if (lVar32 == 0) {
LAB_028ad5cc:
          uVar26 = 0;
        }
        else {
          lVar34 = *(long *)(lVar34 + 0x57e58);
          uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
          if ((*(uint *)(lVar34 + 0x1d8) <= uVar18) ||
             (*(long *)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar18 * 8) == 0)) goto LAB_028ad5cc;
          lVar34 = *(long *)PTR_DAT_04bc0428;
          uVar18 = FUN_0277d6c4(puVar33);
          uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
          lVar32 = *(long *)puVar17;
          if ((*(uint *)(lVar34 + 0x1d8) <= uVar18) ||
             (puVar28 = *(uint **)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar18 * 8),
             puVar28 == (uint *)0x0)) goto LAB_028ad5cc;
          uVar18 = *puVar28;
          uVar26 = 0;
          if ((uVar18 != 0) && (puVar28 != (uint *)(ulong)uVar18)) {
            puVar30 = (uint *)((long)puVar28 - (long)(ulong)uVar18);
            uVar26 = 0;
            if (*puVar30 != 0) {
              uVar18 = puVar30[1];
              if ((uVar18 != 0) && ((ulong)(ushort)puVar30[2] != 0)) {
                lVar34 = 0xc;
                if (*(char *)((long)puVar30 + 10) != '\0') {
                  lVar34 = 0x1c;
                }
                lVar34 = (long)puVar30 + lVar34 + (ulong)(ushort)puVar30[2] * 8;
                if (lVar34 != 0) {
                  uVar26 = 0;
                  if ((ulong)uVar18 != 0) {
                    uVar26 = (uint)((ulong)((long)puVar28 - lVar34) / (ulong)uVar18);
                  }
                  if (*puVar30 <= uVar26) {
                    uVar26 = 0xffffffff;
                  }
                  if ((uVar26 < *(uint *)PTR_DAT_04bc0068) &&
                     (uVar26 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc0068 + 8) + (long)(int)uVar26 * 2),
                     uVar26 < 0x13e)) goto LAB_028ad5d0;
                }
              }
              goto LAB_028ad5cc;
            }
          }
        }
LAB_028ad5d0:
        local_88 = (undefined **)CONCAT44(local_88._4_4_,uVar26);
        lVar34 = lVar32;
        if (uVar26 == local_8c) {
          return;
        }
      }
    }
    lVar32 = lVar34;
    lVar31 = lVar31 + 8;
  } while (lVar31 != 0x200);
  local_800 = PTR_DAT_04bbfe60 + 0x10;
  memset(&local_7f8,0,0x754);
  uVar18 = nn::os::GetSystemTick();
  local_a4 = (uVar18 ^ uVar18 >> 0x1e) * 0x6c078965 + 1;
  local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 2;
  local_9c = (local_a0 ^ local_a0 >> 0x1e) * 0x6c078965 + 3;
  local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)FUN_01a451fc(&local_800);
  memset(__s,0,0x754);
  local_80 = &local_8c;
  local_88 = &PTR_FUN_049ff4e8;
  FUN_008a1ba0(&local_800,&local_88);
  local_808 = (ulong)local_808._4_4_ << 0x20;
  local_80 = (uint *)&local_808;
  uVar18 = 0;
  local_88 = &PTR_FUN_049ff448;
  do {
    (**(code **)(local_800 + 0x10))(&local_81c,&local_800,uVar18);
    lVar31 = (**(code **)(local_800 + 0x20))(&local_800);
    uVar26 = 1 << (ulong)(uVar18 & 0x1f);
    if ((*(uint *)(lVar31 + (ulong)(uVar18 >> 5) * 4) & uVar26) != 0) {
      lVar31 = *(long *)puVar17;
      uVar19 = FUN_0277d6c4(&local_81c);
      if (*(long *)puVar17 != 0) {
        lVar31 = *(long *)(lVar31 + 0x57e58);
        uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
        if (((uVar19 < *(uint *)(lVar31 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar19 * 8) != 0)) &&
           (uVar21 = (*(code *)*local_88)(&local_88,&local_81c), (uVar21 & 1) != 0))
        goto LAB_028ad6f0;
      }
      lVar31 = (**(code **)(local_800 + 0x18))(&local_800);
      lVar32 = (ulong)(uVar18 >> 5) * 4;
      *(uint *)(lVar31 + lVar32) = *(uint *)(lVar31 + lVar32) & (uVar26 ^ 0xffffffff);
    }
LAB_028ad6f0:
    uVar18 = uVar18 + 1;
  } while (uVar18 != 15000);
  lVar31 = *(long *)puVar17;
  puVar33 = (undefined4 *)(param_1 + 0x1768);
  uVar18 = FUN_0277d6c4(puVar33);
  if (*(long *)puVar17 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if ((uVar18 < *(uint *)(lVar31 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
      lVar31 = (**(code **)(local_800 + 0x18))(&local_800);
      uVar18 = FUN_0277d6c4(puVar33);
      if ((uVar18 >> 3 & 0x1fff) < 0x753) {
        lVar32 = (ulong)((uVar18 & 0xffff) >> 5) * 4;
        *(uint *)(lVar31 + lVar32) =
             *(uint *)(lVar31 + lVar32) & (1 << (ulong)(uVar18 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar31 = *(long *)puVar17;
  puVar2 = (undefined4 *)(param_1 + 6000);
  uVar18 = FUN_0277d6c4(puVar2);
  if (*(long *)puVar17 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if ((uVar18 < *(uint *)(lVar31 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
      lVar31 = (**(code **)(local_800 + 0x18))(&local_800);
      uVar18 = FUN_0277d6c4(puVar2);
      if ((uVar18 >> 3 & 0x1fff) < 0x753) {
        lVar32 = (ulong)((uVar18 & 0xffff) >> 5) * 4;
        *(uint *)(lVar31 + lVar32) =
             *(uint *)(lVar31 + lVar32) & (1 << (ulong)(uVar18 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar31 = *(long *)puVar17;
  puVar3 = (undefined4 *)(param_1 + 0x1778);
  uVar18 = FUN_0277d6c4(puVar3);
  if (*(long *)puVar17 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if ((uVar18 < *(uint *)(lVar31 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
      lVar31 = (**(code **)(local_800 + 0x18))(&local_800);
      uVar18 = FUN_0277d6c4(puVar3);
      if ((uVar18 >> 3 & 0x1fff) < 0x753) {
        lVar32 = (ulong)((uVar18 & 0xffff) >> 5) * 4;
        *(uint *)(lVar31 + lVar32) =
             *(uint *)(lVar31 + lVar32) & (1 << (ulong)(uVar18 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar31 = *(long *)puVar17;
  puVar4 = (undefined4 *)(param_1 + 0x1780);
  uVar18 = FUN_0277d6c4();
  if (*(long *)puVar17 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if ((uVar18 < *(uint *)(lVar31 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
      lVar31 = (**(code **)(local_800 + 0x18))(&local_800);
      uVar18 = FUN_0277d6c4(puVar4);
      if ((uVar18 >> 3 & 0x1fff) < 0x753) {
        lVar32 = (ulong)((uVar18 & 0xffff) >> 5) * 4;
        *(uint *)(lVar31 + lVar32) =
             *(uint *)(lVar31 + lVar32) & (1 << (ulong)(uVar18 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar31 = *(long *)puVar17;
  puVar5 = (undefined4 *)(param_1 + 0x1788);
  uVar18 = FUN_0277d6c4();
  if (*(long *)puVar17 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if ((uVar18 < *(uint *)(lVar31 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
      lVar31 = (**(code **)(local_800 + 0x18))(&local_800);
      uVar18 = FUN_0277d6c4(puVar5);
      if ((uVar18 >> 3 & 0x1fff) < 0x753) {
        lVar32 = (ulong)((uVar18 & 0xffff) >> 5) * 4;
        *(uint *)(lVar31 + lVar32) =
             *(uint *)(lVar31 + lVar32) & (1 << (ulong)(uVar18 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar31 = *(long *)puVar17;
  puVar6 = (undefined4 *)(param_1 + 0x1790);
  uVar18 = FUN_0277d6c4();
  if (*(long *)puVar17 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if ((uVar18 < *(uint *)(lVar31 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
      lVar31 = (**(code **)(local_800 + 0x18))(&local_800);
      uVar18 = FUN_0277d6c4(puVar6);
      if ((uVar18 >> 3 & 0x1fff) < 0x753) {
        lVar32 = (ulong)((uVar18 & 0xffff) >> 5) * 4;
        *(uint *)(lVar31 + lVar32) =
             *(uint *)(lVar31 + lVar32) & (1 << (ulong)(uVar18 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar31 = *(long *)puVar17;
  puVar7 = (undefined4 *)(param_1 + 0x1798);
  uVar18 = FUN_0277d6c4();
  if (*(long *)puVar17 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if ((uVar18 < *(uint *)(lVar31 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
      lVar31 = (**(code **)(local_800 + 0x18))(&local_800);
      uVar18 = FUN_0277d6c4(puVar7);
      if ((uVar18 >> 3 & 0x1fff) < 0x753) {
        lVar32 = (ulong)((uVar18 & 0xffff) >> 5) * 4;
        *(uint *)(lVar31 + lVar32) =
             *(uint *)(lVar31 + lVar32) & (1 << (ulong)(uVar18 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar31 = *(long *)puVar17;
  puVar8 = (undefined4 *)(param_1 + 0x17a0);
  uVar18 = FUN_0277d6c4();
  if (*(long *)puVar17 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if ((uVar18 < *(uint *)(lVar31 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
      lVar31 = (**(code **)(local_800 + 0x18))(&local_800);
      uVar18 = FUN_0277d6c4(puVar8);
      if ((uVar18 >> 3 & 0x1fff) < 0x753) {
        lVar32 = (ulong)((uVar18 & 0xffff) >> 5) * 4;
        *(uint *)(lVar31 + lVar32) =
             *(uint *)(lVar31 + lVar32) & (1 << (ulong)(uVar18 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar31 = *(long *)puVar17;
  puVar9 = (undefined4 *)(param_1 + 0x17a8);
  uVar18 = FUN_0277d6c4();
  if (*(long *)puVar17 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if ((uVar18 < *(uint *)(lVar31 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
      lVar31 = (**(code **)(local_800 + 0x18))(&local_800);
      uVar18 = FUN_0277d6c4(puVar9);
      if ((uVar18 >> 3 & 0x1fff) < 0x753) {
        lVar32 = (ulong)((uVar18 & 0xffff) >> 5) * 4;
        *(uint *)(lVar31 + lVar32) =
             *(uint *)(lVar31 + lVar32) & (1 << (ulong)(uVar18 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar31 = *(long *)puVar17;
  puVar10 = (undefined4 *)(param_1 + 0x17b0);
  uVar18 = FUN_0277d6c4();
  if (*(long *)puVar17 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if ((uVar18 < *(uint *)(lVar31 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
      lVar31 = (**(code **)(local_800 + 0x18))(&local_800);
      uVar18 = FUN_0277d6c4(puVar10);
      if ((uVar18 >> 3 & 0x1fff) < 0x753) {
        lVar32 = (ulong)((uVar18 & 0xffff) >> 5) * 4;
        *(uint *)(lVar31 + lVar32) =
             *(uint *)(lVar31 + lVar32) & (1 << (ulong)(uVar18 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar31 = *(long *)puVar17;
  puVar11 = (undefined4 *)(param_1 + 0x17b8);
  uVar18 = FUN_0277d6c4();
  if (*(long *)puVar17 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if ((uVar18 < *(uint *)(lVar31 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
      lVar31 = (**(code **)(local_800 + 0x18))(&local_800);
      uVar18 = FUN_0277d6c4(puVar11);
      if ((uVar18 >> 3 & 0x1fff) < 0x753) {
        lVar32 = (ulong)((uVar18 & 0xffff) >> 5) * 4;
        *(uint *)(lVar31 + lVar32) =
             *(uint *)(lVar31 + lVar32) & (1 << (ulong)(uVar18 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar31 = *(long *)puVar17;
  puVar12 = (undefined4 *)(param_1 + 0x17c0);
  uVar18 = FUN_0277d6c4();
  if (*(long *)puVar17 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if ((uVar18 < *(uint *)(lVar31 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
      lVar31 = (**(code **)(local_800 + 0x18))(&local_800);
      uVar18 = FUN_0277d6c4(puVar12);
      if ((uVar18 >> 3 & 0x1fff) < 0x753) {
        lVar32 = (ulong)((uVar18 & 0xffff) >> 5) * 4;
        *(uint *)(lVar31 + lVar32) =
             *(uint *)(lVar31 + lVar32) & (1 << (ulong)(uVar18 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar31 = *(long *)puVar17;
  puVar13 = (undefined4 *)(param_1 + 0x17c8);
  uVar18 = FUN_0277d6c4();
  if (*(long *)puVar17 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if ((uVar18 < *(uint *)(lVar31 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
      lVar31 = (**(code **)(local_800 + 0x18))(&local_800);
      uVar18 = FUN_0277d6c4(puVar13);
      if ((uVar18 >> 3 & 0x1fff) < 0x753) {
        lVar32 = (ulong)((uVar18 & 0xffff) >> 5) * 4;
        *(uint *)(lVar31 + lVar32) =
             *(uint *)(lVar31 + lVar32) & (1 << (ulong)(uVar18 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar31 = *(long *)puVar17;
  puVar14 = (undefined4 *)(param_1 + 0x17d0);
  uVar18 = FUN_0277d6c4();
  if (*(long *)puVar17 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if ((uVar18 < *(uint *)(lVar31 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
      lVar31 = (**(code **)(local_800 + 0x18))(&local_800);
      uVar18 = FUN_0277d6c4(puVar14);
      if ((uVar18 >> 3 & 0x1fff) < 0x753) {
        lVar32 = (ulong)((uVar18 & 0xffff) >> 5) * 4;
        *(uint *)(lVar31 + lVar32) =
             *(uint *)(lVar31 + lVar32) & (1 << (ulong)(uVar18 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar31 = *(long *)puVar17;
  puVar15 = (undefined4 *)(param_1 + 0x17d8);
  uVar18 = FUN_0277d6c4();
  if (*(long *)puVar17 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if ((uVar18 < *(uint *)(lVar31 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
      lVar31 = (**(code **)(local_800 + 0x18))(&local_800);
      uVar18 = FUN_0277d6c4(puVar15);
      if ((uVar18 >> 3 & 0x1fff) < 0x753) {
        lVar32 = (ulong)((uVar18 & 0xffff) >> 5) * 4;
        *(uint *)(lVar31 + lVar32) =
             *(uint *)(lVar31 + lVar32) & (1 << (ulong)(uVar18 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar31 = *(long *)puVar17;
  puVar16 = (undefined4 *)(param_1 + 0x17e0);
  uVar18 = FUN_0277d6c4();
  if (*(long *)puVar17 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if ((uVar18 < *(uint *)(lVar31 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
      lVar31 = (**(code **)(local_800 + 0x18))(&local_800);
      uVar18 = FUN_0277d6c4(puVar16);
      if ((uVar18 >> 3 & 0x1fff) < 0x753) {
        lVar32 = (ulong)((uVar18 & 0xffff) >> 5) * 4;
        *(uint *)(lVar31 + lVar32) =
             *(uint *)(lVar31 + lVar32) & (1 << (ulong)(uVar18 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar32 = (**(code **)(local_800 + 0x20))(&local_800);
  lVar31 = 0;
  iVar20 = 0;
  do {
    puVar28 = (uint *)(lVar32 + lVar31);
    lVar31 = lVar31 + 4;
    uVar18 = *puVar28 - (*puVar28 >> 1 & 0x55555555);
    uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
    uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
    uVar18 = uVar18 + (uVar18 >> 8);
    iVar20 = (uVar18 + (uVar18 >> 0x10) & 0x3f) + iVar20;
  } while (lVar31 != 0x754);
  if (iVar20 == 0) {
    local_808 = 0xfffe;
    FUN_0277d4ac(&local_808);
    lVar31 = *(long *)puVar17;
    uVar18 = FUN_0277d6c4(puVar33);
    puVar1 = PTR_DAT_04bb37e0;
    lVar32 = *(long *)puVar17;
    if (lVar32 != 0) {
      lVar31 = *(long *)(lVar31 + 0x57e58);
      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
      if ((uVar18 < *(uint *)(lVar31 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
        local_808 = *(long *)(param_1 + 0x1768);
      }
    }
    *(undefined2 *)(param_1 + 0x1768) = *(undefined2 *)PTR_DAT_04bb37e0;
    *(undefined *)(param_1 + 0x176a) = puVar1[2];
    *(undefined *)(param_1 + 0x176b) = puVar1[3];
    *(undefined4 *)(param_1 + 0x176c) = *(undefined4 *)(puVar1 + 4);
    uVar18 = FUN_0277d6c4(puVar2);
    lVar31 = *(long *)puVar17;
    if (lVar31 != 0) {
      lVar32 = *(long *)(lVar32 + 0x57e58);
      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar32 + 0x1f8);
      if ((uVar18 < *(uint *)(lVar32 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar32 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
        local_808 = *(long *)(param_1 + 6000);
      }
    }
    *(undefined2 *)(param_1 + 6000) = *(undefined2 *)puVar1;
    *(undefined *)(param_1 + 0x1772) = puVar1[2];
    *(undefined *)(param_1 + 0x1773) = puVar1[3];
    *(undefined4 *)(param_1 + 0x1774) = *(undefined4 *)(puVar1 + 4);
    uVar18 = FUN_0277d6c4(puVar3);
    lVar32 = *(long *)puVar17;
    if (lVar32 != 0) {
      lVar31 = *(long *)(lVar31 + 0x57e58);
      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
      if ((uVar18 < *(uint *)(lVar31 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
        local_808 = *(long *)(param_1 + 0x1778);
      }
    }
    *(undefined2 *)(param_1 + 0x1778) = *(undefined2 *)puVar1;
    *(undefined *)(param_1 + 0x177a) = puVar1[2];
    *(undefined *)(param_1 + 0x177b) = puVar1[3];
    *(undefined4 *)(param_1 + 0x177c) = *(undefined4 *)(puVar1 + 4);
    uVar18 = FUN_0277d6c4(puVar4);
    lVar31 = *(long *)puVar17;
    if (lVar31 != 0) {
      lVar32 = *(long *)(lVar32 + 0x57e58);
      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar32 + 0x1f8);
      if ((uVar18 < *(uint *)(lVar32 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar32 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
        local_808 = *(long *)(param_1 + 0x1780);
      }
    }
    *(undefined2 *)(param_1 + 0x1780) = *(undefined2 *)puVar1;
    *(undefined *)(param_1 + 0x1782) = puVar1[2];
    *(undefined *)(param_1 + 0x1783) = puVar1[3];
    *(undefined4 *)(param_1 + 0x1784) = *(undefined4 *)(puVar1 + 4);
    uVar18 = FUN_0277d6c4(puVar5);
    lVar32 = *(long *)puVar17;
    if (lVar32 != 0) {
      lVar31 = *(long *)(lVar31 + 0x57e58);
      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
      if ((uVar18 < *(uint *)(lVar31 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
        local_808 = *(long *)(param_1 + 0x1788);
      }
    }
    *(undefined2 *)(param_1 + 0x1788) = *(undefined2 *)puVar1;
    *(undefined *)(param_1 + 0x178a) = puVar1[2];
    *(undefined *)(param_1 + 0x178b) = puVar1[3];
    *(undefined4 *)(param_1 + 0x178c) = *(undefined4 *)(puVar1 + 4);
    uVar18 = FUN_0277d6c4(puVar6);
    lVar31 = *(long *)puVar17;
    if (lVar31 != 0) {
      lVar32 = *(long *)(lVar32 + 0x57e58);
      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar32 + 0x1f8);
      if ((uVar18 < *(uint *)(lVar32 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar32 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
        local_808 = *(long *)(param_1 + 0x1790);
      }
    }
    *(undefined2 *)(param_1 + 0x1790) = *(undefined2 *)puVar1;
    *(undefined *)(param_1 + 0x1792) = puVar1[2];
    *(undefined *)(param_1 + 0x1793) = puVar1[3];
    *(undefined4 *)(param_1 + 0x1794) = *(undefined4 *)(puVar1 + 4);
    uVar18 = FUN_0277d6c4(puVar7);
    lVar32 = *(long *)puVar17;
    if (lVar32 != 0) {
      lVar31 = *(long *)(lVar31 + 0x57e58);
      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
      if ((uVar18 < *(uint *)(lVar31 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
        local_808 = *(long *)(param_1 + 0x1798);
      }
    }
    *(undefined2 *)(param_1 + 0x1798) = *(undefined2 *)puVar1;
    *(undefined *)(param_1 + 0x179a) = puVar1[2];
    *(undefined *)(param_1 + 0x179b) = puVar1[3];
    *(undefined4 *)(param_1 + 0x179c) = *(undefined4 *)(puVar1 + 4);
    uVar18 = FUN_0277d6c4(puVar8);
    lVar31 = *(long *)puVar17;
    if (lVar31 != 0) {
      lVar32 = *(long *)(lVar32 + 0x57e58);
      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar32 + 0x1f8);
      if ((uVar18 < *(uint *)(lVar32 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar32 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
        local_808 = *(long *)(param_1 + 0x17a0);
      }
    }
    *(undefined2 *)(param_1 + 0x17a0) = *(undefined2 *)puVar1;
    *(undefined *)(param_1 + 0x17a2) = puVar1[2];
    *(undefined *)(param_1 + 0x17a3) = puVar1[3];
    *(undefined4 *)(param_1 + 0x17a4) = *(undefined4 *)(puVar1 + 4);
    uVar18 = FUN_0277d6c4(puVar9);
    lVar32 = *(long *)puVar17;
    if (lVar32 != 0) {
      lVar31 = *(long *)(lVar31 + 0x57e58);
      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
      if ((uVar18 < *(uint *)(lVar31 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
        local_808 = *(long *)(param_1 + 0x17a8);
      }
    }
    *(undefined2 *)(param_1 + 0x17a8) = *(undefined2 *)puVar1;
    *(undefined *)(param_1 + 0x17aa) = puVar1[2];
    *(undefined *)(param_1 + 0x17ab) = puVar1[3];
    *(undefined4 *)(param_1 + 0x17ac) = *(undefined4 *)(puVar1 + 4);
    uVar18 = FUN_0277d6c4(puVar10);
    lVar31 = *(long *)puVar17;
    if (lVar31 != 0) {
      lVar32 = *(long *)(lVar32 + 0x57e58);
      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar32 + 0x1f8);
      if ((uVar18 < *(uint *)(lVar32 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar32 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
        local_808 = *(long *)(param_1 + 0x17b0);
      }
    }
    *(undefined2 *)(param_1 + 0x17b0) = *(undefined2 *)puVar1;
    *(undefined *)(param_1 + 0x17b2) = puVar1[2];
    *(undefined *)(param_1 + 0x17b3) = puVar1[3];
    *(undefined4 *)(param_1 + 0x17b4) = *(undefined4 *)(puVar1 + 4);
    uVar18 = FUN_0277d6c4(puVar11);
    lVar32 = *(long *)puVar17;
    if (lVar32 != 0) {
      lVar31 = *(long *)(lVar31 + 0x57e58);
      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
      if ((uVar18 < *(uint *)(lVar31 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
        local_808 = *(long *)(param_1 + 0x17b8);
      }
    }
    *(undefined2 *)(param_1 + 0x17b8) = *(undefined2 *)puVar1;
    *(undefined *)(param_1 + 0x17ba) = puVar1[2];
    *(undefined *)(param_1 + 0x17bb) = puVar1[3];
    *(undefined4 *)(param_1 + 0x17bc) = *(undefined4 *)(puVar1 + 4);
    uVar18 = FUN_0277d6c4(puVar12);
    lVar31 = *(long *)puVar17;
    if (lVar31 != 0) {
      lVar32 = *(long *)(lVar32 + 0x57e58);
      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar32 + 0x1f8);
      if ((uVar18 < *(uint *)(lVar32 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar32 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
        local_808 = *(long *)(param_1 + 0x17c0);
      }
    }
    *(undefined2 *)(param_1 + 0x17c0) = *(undefined2 *)puVar1;
    *(undefined *)(param_1 + 0x17c2) = puVar1[2];
    *(undefined *)(param_1 + 0x17c3) = puVar1[3];
    *(undefined4 *)(param_1 + 0x17c4) = *(undefined4 *)(puVar1 + 4);
    uVar18 = FUN_0277d6c4(puVar13);
    lVar32 = *(long *)puVar17;
    if (lVar32 != 0) {
      lVar31 = *(long *)(lVar31 + 0x57e58);
      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
      if ((uVar18 < *(uint *)(lVar31 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
        local_808 = *(long *)(param_1 + 0x17c8);
      }
    }
    *(undefined2 *)(param_1 + 0x17c8) = *(undefined2 *)puVar1;
    *(undefined *)(param_1 + 0x17ca) = puVar1[2];
    *(undefined *)(param_1 + 0x17cb) = puVar1[3];
    *(undefined4 *)(param_1 + 0x17cc) = *(undefined4 *)(puVar1 + 4);
    uVar18 = FUN_0277d6c4(puVar14);
    lVar31 = *(long *)puVar17;
    if (lVar31 != 0) {
      lVar32 = *(long *)(lVar32 + 0x57e58);
      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar32 + 0x1f8);
      if ((uVar18 < *(uint *)(lVar32 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar32 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
        local_808 = *(long *)(param_1 + 0x17d0);
      }
    }
    *(undefined2 *)(param_1 + 0x17d0) = *(undefined2 *)puVar1;
    *(undefined *)(param_1 + 0x17d2) = puVar1[2];
    *(undefined *)(param_1 + 0x17d3) = puVar1[3];
    *(undefined4 *)(param_1 + 0x17d4) = *(undefined4 *)(puVar1 + 4);
    uVar18 = FUN_0277d6c4(puVar15);
    lVar32 = *(long *)puVar17;
    if (lVar32 != 0) {
      lVar31 = *(long *)(lVar31 + 0x57e58);
      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
      if ((uVar18 < *(uint *)(lVar31 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
        local_808 = *(long *)(param_1 + 0x17d8);
      }
    }
    *(undefined2 *)(param_1 + 0x17d8) = *(undefined2 *)puVar1;
    *(undefined *)(param_1 + 0x17da) = puVar1[2];
    *(undefined *)(param_1 + 0x17db) = puVar1[3];
    *(undefined4 *)(param_1 + 0x17dc) = *(undefined4 *)(puVar1 + 4);
    uVar18 = FUN_0277d6c4(puVar16);
    if (*(long *)puVar17 != 0) {
      lVar31 = *(long *)(lVar32 + 0x57e58);
      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
      if ((uVar18 < *(uint *)(lVar31 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
        local_808 = *(long *)(param_1 + 0x17e0);
      }
    }
    uVar23 = *(undefined2 *)puVar1;
    *(undefined *)(param_1 + 0x17e2) = puVar1[2];
    *(undefined2 *)(param_1 + 0x17e0) = uVar23;
    *(undefined *)(param_1 + 0x17e3) = puVar1[3];
    *(undefined4 *)(param_1 + 0x17e4) = *(undefined4 *)(puVar1 + 4);
    local_80 = &local_8c;
    local_88 = &PTR_FUN_049ff4e8;
    FUN_008a1ba0(&local_800,&local_88);
    lVar31 = *(long *)puVar17;
    uVar18 = FUN_0277d6c4(&local_808);
    if (*(long *)puVar17 != 0) {
      lVar31 = *(long *)(lVar31 + 0x57e58);
      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
      if ((uVar18 < *(uint *)(lVar31 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
        lVar31 = (**(code **)(local_800 + 0x18))(&local_800);
        uVar18 = FUN_0277d6c4(&local_808);
        if ((uVar18 >> 3 & 0x1fff) < 0x753) {
          lVar32 = (ulong)((uVar18 & 0xffff) >> 5) * 4;
          *(uint *)(lVar31 + lVar32) =
               *(uint *)(lVar31 + lVar32) & (1 << (ulong)(uVar18 & 0x1f) ^ 0xffffffffU);
        }
      }
    }
    uVar18 = 0;
    local_80 = &local_80c;
    local_80c = 0;
    local_88 = &PTR_FUN_049ff448;
    do {
      (**(code **)(local_800 + 0x10))(&local_81c,&local_800,uVar18);
      lVar31 = (**(code **)(local_800 + 0x20))(&local_800);
      uVar26 = 1 << (ulong)(uVar18 & 0x1f);
      if ((*(uint *)(lVar31 + (ulong)(uVar18 >> 5) * 4) & uVar26) != 0) {
        lVar31 = *(long *)puVar17;
        uVar19 = FUN_0277d6c4(&local_81c);
        if (*(long *)puVar17 != 0) {
          lVar31 = *(long *)(lVar31 + 0x57e58);
          uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
          if (((uVar19 < *(uint *)(lVar31 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar19 * 8) != 0)) &&
             (uVar21 = (*(code *)*local_88)(&local_88,&local_81c), (uVar21 & 1) != 0))
          goto LAB_028ae9e0;
        }
        lVar31 = (**(code **)(local_800 + 0x18))(&local_800);
        lVar32 = (ulong)(uVar18 >> 5) * 4;
        *(uint *)(lVar31 + lVar32) = *(uint *)(lVar31 + lVar32) & (uVar26 ^ 0xffffffff);
      }
LAB_028ae9e0:
      uVar18 = uVar18 + 1;
    } while (uVar18 != 15000);
  }
  puVar28 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
  uVar18 = *puVar28 ^ *puVar28 << 0xb;
  uVar19 = puVar28[3];
  *puVar28 = puVar28[1];
  puVar28[1] = puVar28[2];
  uVar26 = uVar18 ^ uVar19;
  uVar18 = uVar18 >> 8 ^ uVar19 >> 0x13 ^ uVar26;
  puVar28[2] = uVar19;
  puVar28[3] = uVar18;
  local_81c = (uVar18 ^ uVar26 >> 0x1e) * 0x6c078965 + 1;
  uStack_818 = (local_81c ^ local_81c >> 0x1e) * 0x6c078965 + 2;
  local_814 = (uStack_818 ^ uStack_818 >> 0x1e) * 0x6c078965 + 3;
  uStack_810 = (local_814 ^ local_814 >> 0x1e) * 0x6c078965 + 4;
  lVar32 = (**(code **)(local_800 + 0x20))(&local_800);
  lVar31 = 0;
  iVar20 = 0;
  do {
    puVar28 = (uint *)(lVar32 + lVar31);
    lVar31 = lVar31 + 4;
    uVar18 = *puVar28 - (*puVar28 >> 1 & 0x55555555);
    uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
    uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
    uVar18 = uVar18 + (uVar18 >> 8);
    iVar20 = (uVar18 + (uVar18 >> 0x10) & 0x3f) + iVar20;
  } while (lVar31 != 0x754);
  if (iVar20 == 0) {
    local_808 = CONCAT44(DAT_0558600c,_DAT_05586008);
  }
  else {
    lVar32 = (**(code **)(local_800 + 0x20))(&local_800);
    lVar31 = 0;
    uVar18 = 0;
    do {
      puVar28 = (uint *)(lVar32 + lVar31);
      lVar31 = lVar31 + 4;
      uVar26 = *puVar28 - (*puVar28 >> 1 & 0x55555555);
      uVar26 = (uVar26 >> 2 & 0x33333333) + (uVar26 & 0x33333333);
      uVar26 = uVar26 + (uVar26 >> 4) & 0xf0f0f0f;
      uVar26 = uVar26 + (uVar26 >> 8);
      uVar18 = (uVar26 + (uVar26 >> 0x10) & 0x3f) + uVar18;
    } while (lVar31 != 0x754);
    uVar26 = local_81c ^ local_81c << 0xb;
    local_81c = uStack_818;
    uStack_818 = local_814;
    uVar26 = uVar26 >> 8 ^ uStack_810 >> 0x13 ^ uVar26 ^ uStack_810;
    local_814 = uStack_810;
    uStack_810 = uVar26;
    FUN_00889f80(&local_808,&local_800,(int)((ulong)uVar26 * (ulong)uVar18 >> 0x20) + 1);
    FUN_01a4c66c(&local_81c,&local_808);
  }
  lVar32 = *(long *)puVar17;
  uVar18 = FUN_0277d6c4(&local_808);
  lVar31 = *(long *)puVar17;
  if (lVar31 == 0) {
    return;
  }
  lVar32 = *(long *)(lVar32 + 0x57e58);
  uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar32 + 0x1f8);
  if (*(uint *)(lVar32 + 0x1d8) <= uVar18) {
    return;
  }
  if (*(long *)(*(long *)(lVar32 + 0x1e0) + (long)(int)uVar18 * 8) == 0) {
    return;
  }
  local_78 = 0;
  local_88 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
  local_80 = (uint *)local_808;
  uVar18 = FUN_0277d6c4(&local_80);
  if (*(long *)puVar17 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if ((uVar18 < *(uint *)(lVar31 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
      lVar31 = *(long *)PTR_DAT_04bc0428;
      uVar18 = FUN_0277d6c4(&local_808);
      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
      if (uVar18 < *(uint *)(lVar31 + 0x1d8)) {
        lVar31 = *(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8);
        if (lVar31 != 0) {
          local_78 = lVar31;
        }
      }
    }
  }
  iVar20 = FUN_01ad7260(&local_88);
  if (iVar20 == 0) {
    uVar23 = (undefined2)local_808;
    uVar25 = local_808._2_1_;
    uVar27 = local_808._3_1_;
    uVar29 = local_808._4_4_;
    goto LAB_028aedf8;
  }
  if (DAT_05574040 == 0) {
LAB_028aed9c:
    uVar18 = 0;
  }
  else {
    puVar24 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar31 = (**(code **)(*(long *)*puVar24 + 0x38))();
      if (lVar31 == 0) goto LAB_028aed9c;
      lVar31 = lVar31 + 0x70;
    }
    else if (((puVar24 == (undefined8 *)0x0) || ((long *)puVar24[0x26] == (long *)0x0)) ||
            (lVar31 = (**(code **)(*(long *)puVar24[0x26] + 0x38))(), lVar31 == 0))
    goto LAB_028aed9c;
    if (*(long **)(lVar31 + 0x1c2520) == (long *)0x0) {
      uVar21 = 0;
    }
    else {
      puVar24 = (undefined8 *)**(long **)(lVar31 + 0x1c2520);
      uVar21 = 0;
      if (puVar24 != (undefined8 *)0x0) {
        uVar21 = (**(code **)*puVar24)();
      }
    }
    uVar26 = (uint)*(byte *)(*(long *)(lVar31 + 0x1c2508) + *(long *)(lVar31 + 0x1c2500) + 1) +
             (int)*(short *)(param_2 + 0x10);
    uVar18 = uVar26 & 3;
    uVar26 = -uVar26;
    if (-1 < (int)uVar26) {
      uVar18 = -(uVar26 & 3);
    }
    if ((((uVar21 & 1) != 0) && (*(long *)(lVar31 + 0x1c2520) != 0)) &&
       (puVar24 = *(undefined8 **)(*(long *)(lVar31 + 0x1c2520) + 8), puVar24 != (undefined8 *)0x0))
    {
      (**(code **)*puVar24)();
    }
  }
  iVar20 = FUN_01ad7260(&local_88);
  if (((iVar20 != 0) && ((uVar18 == 0 || (iVar20 = FUN_01ad7260(&local_88), (int)uVar18 < iVar20))))
     && (puVar22 = (ushort *)FUN_01afd600(&local_88), puVar22 != (ushort *)0x0)) {
    *puVar22 = *puVar22 & 0xfff8 | (ushort)uVar18 & 7;
  }
  local_808 = (long)local_80;
  uVar23 = (undefined2)local_80;
  uVar25 = local_80._2_1_;
  uVar27 = local_80._3_1_;
  uVar29 = local_80._4_4_;
LAB_028aedf8:
  lVar31 = param_1 + (ulong)local_90 * 0x200;
  if (6 < local_90) {
    lVar31 = param_1;
  }
  *(undefined2 *)(lVar31 + 0x10) = uVar23;
  *(undefined1 *)(lVar31 + 0x12) = uVar25;
  *(undefined1 *)(lVar31 + 0x13) = uVar27;
  *(undefined4 *)(lVar31 + 0x14) = uVar29;
  lVar31 = param_1 + 0xe00 + (ulong)local_90 * 0x100;
  if (6 < local_90) {
    lVar31 = param_1 + 0xe00;
  }
  *(undefined4 *)(lVar31 + 8) = 1;
  lVar31 = param_1 + 0x1500 + (ulong)local_90 * 0x40;
  if (6 < local_90) {
    lVar31 = param_1 + 0x1500;
  }
  *(undefined1 *)(lVar31 + 2) = 1;
  lVar32 = *(long *)puVar17;
  uVar18 = FUN_0277d6c4(puVar33);
  lVar31 = *(long *)puVar17;
  if (lVar31 != 0) {
    lVar32 = *(long *)(lVar32 + 0x57e58);
    uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar32 + 0x1f8);
    if ((uVar18 < *(uint *)(lVar32 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar32 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
      uVar18 = FUN_0277d6c4(puVar2);
      lVar32 = *(long *)puVar17;
      puVar33 = puVar2;
      if (lVar32 != 0) {
        lVar31 = *(long *)(lVar31 + 0x57e58);
        uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
        if ((uVar18 < *(uint *)(lVar31 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
          uVar18 = FUN_0277d6c4(puVar3);
          lVar31 = *(long *)puVar17;
          puVar33 = puVar3;
          if (lVar31 != 0) {
            lVar32 = *(long *)(lVar32 + 0x57e58);
            uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar32 + 0x1f8);
            if ((uVar18 < *(uint *)(lVar32 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar32 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
              uVar18 = FUN_0277d6c4(puVar4);
              lVar32 = *(long *)puVar17;
              puVar33 = puVar4;
              if (lVar32 != 0) {
                lVar31 = *(long *)(lVar31 + 0x57e58);
                uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
                if ((uVar18 < *(uint *)(lVar31 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
                  uVar18 = FUN_0277d6c4(puVar5);
                  puVar33 = puVar5;
                  if (*(long *)puVar17 != 0) {
                    lVar31 = *(long *)(lVar32 + 0x57e58);
                    uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
                    if ((uVar18 < *(uint *)(lVar31 + 0x1d8)) &&
                       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
                      uVar21 = FUN_0277d9a8(puVar6);
                      puVar33 = puVar6;
                      if ((uVar21 & 1) != 0) {
                        uVar21 = FUN_0277d9a8(puVar7);
                        puVar33 = puVar7;
                        if ((uVar21 & 1) != 0) {
                          uVar21 = FUN_0277d9a8(puVar8);
                          puVar33 = puVar8;
                          if ((uVar21 & 1) != 0) {
                            uVar21 = FUN_0277d9a8(puVar9);
                            puVar33 = puVar9;
                            if ((uVar21 & 1) != 0) {
                              uVar21 = FUN_0277d9a8(puVar10);
                              puVar33 = puVar10;
                              if ((uVar21 & 1) != 0) {
                                uVar21 = FUN_0277d9a8(puVar11);
                                puVar33 = puVar11;
                                if ((uVar21 & 1) != 0) {
                                  uVar21 = FUN_0277d9a8(puVar12);
                                  puVar33 = puVar12;
                                  if ((uVar21 & 1) != 0) {
                                    uVar21 = FUN_0277d9a8(puVar13);
                                    puVar33 = puVar13;
                                    if ((uVar21 & 1) != 0) {
                                      uVar21 = FUN_0277d9a8(puVar14);
                                      puVar33 = puVar14;
                                      if ((uVar21 & 1) != 0) {
                                        uVar21 = FUN_0277d9a8(puVar15);
                                        puVar33 = puVar15;
                                        if ((uVar21 & 1) != 0) {
                                          uVar21 = FUN_0277d9a8(puVar16);
                                          puVar33 = puVar16;
                                          if ((uVar21 & 1) != 0) {
                                            return;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *puVar33 = (undefined4)local_808;
  puVar33[1] = local_808._4_4_;
  return;
}


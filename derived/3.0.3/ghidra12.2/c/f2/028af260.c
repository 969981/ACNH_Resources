
void FUN_028af260(long param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined2 uVar9;
  uint uVar10;
  uint uVar11;
  undefined *puVar12;
  undefined *puVar13;
  uint uVar14;
  uint uVar15;
  void *__s;
  ulong uVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  uint *puVar22;
  uint *puVar23;
  long lVar24;
  long lVar25;
  undefined4 *local_830;
  undefined4 local_814;
  undefined8 local_810;
  undefined *local_808;
  undefined4 local_800;
  undefined4 uStack_7fc;
  undefined8 local_7f8;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  int local_a0;
  uint local_98;
  uint local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_70;
  undefined4 uStack_6c;
  
  local_94 = param_3;
  local_98 = nn::time::GetDayOfWeek
                       ((int)*(short *)(param_2 + 0x10),(int)*(char *)(param_2 + 0x12),
                        (int)*(char *)(param_2 + 0x13));
  puVar13 = PTR_DAT_04bc0428;
  puVar12 = PTR_DAT_04bb43c0;
  lVar24 = 0;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  lVar19 = *(long *)PTR_DAT_04bb43c0;
  do {
    lVar20 = param_1 + (ulong)local_98 * 0x200;
    if (6 < local_98) {
      lVar20 = param_1;
    }
    puVar2 = (undefined4 *)(lVar20 + lVar24);
    uVar14 = FUN_0277d6c4(puVar2);
    lVar25 = *(long *)puVar12;
    lVar20 = lVar25;
    if (lVar25 != 0) {
      lVar19 = *(long *)(lVar19 + 0x57e58);
      uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
      if ((uVar14 < *(uint *)(lVar19 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
        local_800 = *puVar2;
        uStack_7fc = puVar2[1];
        local_7f8 = 0;
        local_808 = puVar1;
        uVar14 = FUN_0277d6c4(&local_800);
        lVar20 = *(long *)puVar12;
        if (lVar20 == 0) {
LAB_028af454:
          uVar21 = 0;
        }
        else {
          lVar19 = *(long *)(lVar25 + 0x57e58);
          uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          if ((*(uint *)(lVar19 + 0x1d8) <= uVar14) ||
             (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar14 * 8) == 0)) goto LAB_028af454;
          lVar19 = *(long *)puVar13;
          uVar14 = FUN_0277d6c4(puVar2);
          uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          lVar20 = *(long *)puVar12;
          if ((*(uint *)(lVar19 + 0x1d8) <= uVar14) ||
             (puVar22 = *(uint **)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar14 * 8),
             puVar22 == (uint *)0x0)) goto LAB_028af454;
          uVar14 = *puVar22;
          uVar21 = 0;
          if ((uVar14 != 0) && (puVar22 != (uint *)(ulong)uVar14)) {
            puVar23 = (uint *)((long)puVar22 - (long)(ulong)uVar14);
            uVar21 = 0;
            if (*puVar23 != 0) {
              uVar14 = puVar23[1];
              if ((uVar14 != 0) && ((ulong)(ushort)puVar23[2] != 0)) {
                lVar19 = 0xc;
                if (*(char *)((long)puVar23 + 10) != '\0') {
                  lVar19 = 0x1c;
                }
                lVar19 = (long)puVar23 + lVar19 + (ulong)(ushort)puVar23[2] * 8;
                if (lVar19 != 0) {
                  uVar21 = 0;
                  if ((ulong)uVar14 != 0) {
                    uVar21 = (uint)((ulong)((long)puVar22 - lVar19) / (ulong)uVar14);
                  }
                  if (*puVar23 <= uVar21) {
                    uVar21 = 0xffffffff;
                  }
                  if ((uVar21 < *(uint *)PTR_DAT_04bc0068) &&
                     (uVar21 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc0068 + 8) + (long)(int)uVar21 * 2),
                     uVar21 < 0x13e)) goto LAB_028af458;
                }
              }
              goto LAB_028af454;
            }
          }
        }
LAB_028af458:
        local_90 = (undefined **)CONCAT44(local_90._4_4_,uVar21);
        if (uVar21 == local_94) {
          return;
        }
      }
    }
    lVar24 = lVar24 + 8;
    lVar19 = lVar20;
  } while (lVar24 != 0x200);
  local_808 = PTR_DAT_04bbfe60 + 0x10;
  memset(&local_800,0,0x754);
  uVar14 = nn::os::GetSystemTick();
  local_ac = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
  local_a8 = (local_ac ^ local_ac >> 0x1e) * 0x6c078965 + 2;
  local_a4 = (local_a8 ^ local_a8 >> 0x1e) * 0x6c078965 + 3;
  local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)FUN_01a451fc(&local_808);
  memset(__s,0,0x754);
  local_88 = &local_94;
  local_90 = &PTR_FUN_049ff4e8;
  FUN_008a1ba0(&local_808,&local_90);
  uVar14 = 0;
  local_88 = (uint *)&local_810;
  local_810 = (ulong)local_810._4_4_ << 0x20;
  local_90 = &PTR_FUN_049ff448;
  do {
    (**(code **)(local_808 + 0x10))(&local_70,&local_808,uVar14);
    lVar24 = (**(code **)(local_808 + 0x20))(&local_808);
    uVar21 = 1 << (ulong)(uVar14 & 0x1f);
    if ((*(uint *)(lVar24 + (ulong)(uVar14 >> 5) * 4) & uVar21) != 0) {
      lVar24 = *(long *)puVar12;
      uVar15 = FUN_0277d6c4(&local_70);
      if (*(long *)puVar12 != 0) {
        lVar24 = *(long *)(lVar24 + 0x57e58);
        uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
        if (((uVar15 < *(uint *)(lVar24 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) &&
           (uVar16 = (*(code *)*local_90)(&local_90,&local_70), (uVar16 & 1) != 0))
        goto LAB_028af580;
      }
      lVar24 = (**(code **)(local_808 + 0x18))(&local_808);
      lVar19 = (ulong)(uVar14 >> 5) * 4;
      *(uint *)(lVar24 + lVar19) = *(uint *)(lVar24 + lVar19) & (uVar21 ^ 0xffffffff);
    }
LAB_028af580:
    uVar14 = uVar14 + 1;
  } while (uVar14 != 15000);
  lVar24 = *(long *)puVar12;
  local_830 = (undefined4 *)(param_1 + 0x17e8);
  uVar14 = FUN_0277d6c4();
  if (*(long *)puVar12 != 0) {
    lVar24 = *(long *)(lVar24 + 0x57e58);
    uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
    if ((uVar14 < *(uint *)(lVar24 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
      lVar24 = (**(code **)(local_808 + 0x18))(&local_808);
      uVar14 = FUN_0277d6c4(local_830);
      if ((uVar14 >> 3 & 0x1fff) < 0x753) {
        lVar19 = (ulong)((uVar14 & 0xffff) >> 5) * 4;
        *(uint *)(lVar24 + lVar19) =
             *(uint *)(lVar24 + lVar19) & (1 << (ulong)(uVar14 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar24 = *(long *)puVar12;
  puVar2 = (undefined4 *)(param_1 + 0x17f0);
  uVar14 = FUN_0277d6c4(puVar2);
  if (*(long *)puVar12 != 0) {
    lVar24 = *(long *)(lVar24 + 0x57e58);
    uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
    if ((uVar14 < *(uint *)(lVar24 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
      lVar24 = (**(code **)(local_808 + 0x18))(&local_808);
      uVar14 = FUN_0277d6c4(puVar2);
      if ((uVar14 >> 3 & 0x1fff) < 0x753) {
        lVar19 = (ulong)((uVar14 & 0xffff) >> 5) * 4;
        *(uint *)(lVar24 + lVar19) =
             *(uint *)(lVar24 + lVar19) & (1 << (ulong)(uVar14 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar24 = *(long *)puVar12;
  puVar3 = (undefined4 *)(param_1 + 0x17f8);
  uVar14 = FUN_0277d6c4();
  if (*(long *)puVar12 != 0) {
    lVar24 = *(long *)(lVar24 + 0x57e58);
    uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
    if ((uVar14 < *(uint *)(lVar24 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
      lVar24 = (**(code **)(local_808 + 0x18))(&local_808);
      uVar14 = FUN_0277d6c4(puVar3);
      if ((uVar14 >> 3 & 0x1fff) < 0x753) {
        lVar19 = (ulong)((uVar14 & 0xffff) >> 5) * 4;
        *(uint *)(lVar24 + lVar19) =
             *(uint *)(lVar24 + lVar19) & (1 << (ulong)(uVar14 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar24 = *(long *)puVar12;
  puVar4 = (undefined4 *)(param_1 + 0x1800);
  uVar14 = FUN_0277d6c4();
  if (*(long *)puVar12 != 0) {
    lVar24 = *(long *)(lVar24 + 0x57e58);
    uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
    if ((uVar14 < *(uint *)(lVar24 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
      lVar24 = (**(code **)(local_808 + 0x18))(&local_808);
      uVar14 = FUN_0277d6c4(puVar4);
      if ((uVar14 >> 3 & 0x1fff) < 0x753) {
        lVar19 = (ulong)((uVar14 & 0xffff) >> 5) * 4;
        *(uint *)(lVar24 + lVar19) =
             *(uint *)(lVar24 + lVar19) & (1 << (ulong)(uVar14 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar24 = *(long *)puVar12;
  puVar5 = (undefined4 *)(param_1 + 0x1808);
  uVar14 = FUN_0277d6c4();
  if (*(long *)puVar12 != 0) {
    lVar24 = *(long *)(lVar24 + 0x57e58);
    uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
    if ((uVar14 < *(uint *)(lVar24 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
      lVar24 = (**(code **)(local_808 + 0x18))(&local_808);
      uVar14 = FUN_0277d6c4(puVar5);
      if ((uVar14 >> 3 & 0x1fff) < 0x753) {
        lVar19 = (ulong)((uVar14 & 0xffff) >> 5) * 4;
        *(uint *)(lVar24 + lVar19) =
             *(uint *)(lVar24 + lVar19) & (1 << (ulong)(uVar14 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar24 = *(long *)puVar12;
  puVar6 = (undefined4 *)(param_1 + 0x1810);
  uVar14 = FUN_0277d6c4();
  if (*(long *)puVar12 != 0) {
    lVar24 = *(long *)(lVar24 + 0x57e58);
    uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
    if ((uVar14 < *(uint *)(lVar24 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
      lVar24 = (**(code **)(local_808 + 0x18))(&local_808);
      uVar14 = FUN_0277d6c4(puVar6);
      if ((uVar14 >> 3 & 0x1fff) < 0x753) {
        lVar19 = (ulong)((uVar14 & 0xffff) >> 5) * 4;
        *(uint *)(lVar24 + lVar19) =
             *(uint *)(lVar24 + lVar19) & (1 << (ulong)(uVar14 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar24 = *(long *)puVar12;
  puVar7 = (undefined4 *)(param_1 + 0x1818);
  uVar14 = FUN_0277d6c4();
  if (*(long *)puVar12 != 0) {
    lVar24 = *(long *)(lVar24 + 0x57e58);
    uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
    if ((uVar14 < *(uint *)(lVar24 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
      lVar24 = (**(code **)(local_808 + 0x18))(&local_808);
      uVar14 = FUN_0277d6c4(puVar7);
      if ((uVar14 >> 3 & 0x1fff) < 0x753) {
        lVar19 = (ulong)((uVar14 & 0xffff) >> 5) * 4;
        *(uint *)(lVar24 + lVar19) =
             *(uint *)(lVar24 + lVar19) & (1 << (ulong)(uVar14 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar24 = *(long *)puVar12;
  puVar8 = (undefined4 *)(param_1 + 0x1820);
  uVar14 = FUN_0277d6c4();
  if (*(long *)puVar12 != 0) {
    lVar24 = *(long *)(lVar24 + 0x57e58);
    uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
    if ((uVar14 < *(uint *)(lVar24 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
      lVar24 = (**(code **)(local_808 + 0x18))(&local_808);
      uVar14 = FUN_0277d6c4(puVar8);
      if ((uVar14 >> 3 & 0x1fff) < 0x753) {
        lVar19 = (ulong)((uVar14 & 0xffff) >> 5) * 4;
        *(uint *)(lVar24 + lVar19) =
             *(uint *)(lVar24 + lVar19) & (1 << (ulong)(uVar14 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar19 = (**(code **)(local_808 + 0x20))(&local_808);
  lVar24 = 0;
  iVar17 = 0;
  do {
    puVar22 = (uint *)(lVar19 + lVar24);
    lVar24 = lVar24 + 4;
    uVar14 = *puVar22 - (*puVar22 >> 1 & 0x55555555);
    uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
    uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
    uVar14 = uVar14 + (uVar14 >> 8);
    iVar17 = (uVar14 + (uVar14 >> 0x10) & 0x3f) + iVar17;
  } while (lVar24 != 0x754);
  if (iVar17 == 0) {
    local_810 = 0xfffe;
    FUN_0277d4ac(&local_810);
    lVar19 = *(long *)puVar12;
    uVar14 = FUN_0277d6c4(local_830);
    puVar1 = PTR_DAT_04bb37e0;
    lVar24 = *(long *)puVar12;
    if (lVar24 != 0) {
      lVar19 = *(long *)(lVar19 + 0x57e58);
      uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
      if ((uVar14 < *(uint *)(lVar19 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
        local_810 = *(long *)(param_1 + 0x17e8);
      }
    }
    *(undefined2 *)(param_1 + 0x17e8) = *(undefined2 *)PTR_DAT_04bb37e0;
    *(undefined *)(param_1 + 0x17ea) = puVar1[2];
    *(undefined *)(param_1 + 0x17eb) = puVar1[3];
    *(undefined4 *)(param_1 + 0x17ec) = *(undefined4 *)(puVar1 + 4);
    uVar14 = FUN_0277d6c4(puVar2);
    lVar19 = *(long *)puVar12;
    if (lVar19 != 0) {
      lVar24 = *(long *)(lVar24 + 0x57e58);
      uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
      if ((uVar14 < *(uint *)(lVar24 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
        local_810 = *(long *)(param_1 + 0x17f0);
      }
    }
    *(undefined2 *)(param_1 + 0x17f0) = *(undefined2 *)puVar1;
    *(undefined *)(param_1 + 0x17f2) = puVar1[2];
    *(undefined *)(param_1 + 0x17f3) = puVar1[3];
    *(undefined4 *)(param_1 + 0x17f4) = *(undefined4 *)(puVar1 + 4);
    uVar14 = FUN_0277d6c4(puVar3);
    lVar24 = *(long *)puVar12;
    if (lVar24 != 0) {
      lVar19 = *(long *)(lVar19 + 0x57e58);
      uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
      if ((uVar14 < *(uint *)(lVar19 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
        local_810 = *(long *)(param_1 + 0x17f8);
      }
    }
    *(undefined2 *)(param_1 + 0x17f8) = *(undefined2 *)puVar1;
    *(undefined *)(param_1 + 0x17fa) = puVar1[2];
    *(undefined *)(param_1 + 0x17fb) = puVar1[3];
    *(undefined4 *)(param_1 + 0x17fc) = *(undefined4 *)(puVar1 + 4);
    uVar14 = FUN_0277d6c4(puVar4);
    lVar19 = *(long *)puVar12;
    if (lVar19 != 0) {
      lVar24 = *(long *)(lVar24 + 0x57e58);
      uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
      if ((uVar14 < *(uint *)(lVar24 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
        local_810 = *(long *)(param_1 + 0x1800);
      }
    }
    *(undefined2 *)(param_1 + 0x1800) = *(undefined2 *)puVar1;
    *(undefined *)(param_1 + 0x1802) = puVar1[2];
    *(undefined *)(param_1 + 0x1803) = puVar1[3];
    *(undefined4 *)(param_1 + 0x1804) = *(undefined4 *)(puVar1 + 4);
    uVar14 = FUN_0277d6c4(puVar5);
    lVar24 = *(long *)puVar12;
    if (lVar24 != 0) {
      lVar19 = *(long *)(lVar19 + 0x57e58);
      uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
      if ((uVar14 < *(uint *)(lVar19 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
        local_810 = *(long *)(param_1 + 0x1808);
      }
    }
    *(undefined2 *)(param_1 + 0x1808) = *(undefined2 *)puVar1;
    *(undefined *)(param_1 + 0x180a) = puVar1[2];
    *(undefined *)(param_1 + 0x180b) = puVar1[3];
    *(undefined4 *)(param_1 + 0x180c) = *(undefined4 *)(puVar1 + 4);
    uVar14 = FUN_0277d6c4(puVar6);
    lVar19 = *(long *)puVar12;
    if (lVar19 != 0) {
      lVar24 = *(long *)(lVar24 + 0x57e58);
      uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
      if ((uVar14 < *(uint *)(lVar24 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
        local_810 = *(long *)(param_1 + 0x1810);
      }
    }
    *(undefined2 *)(param_1 + 0x1810) = *(undefined2 *)puVar1;
    *(undefined *)(param_1 + 0x1812) = puVar1[2];
    *(undefined *)(param_1 + 0x1813) = puVar1[3];
    *(undefined4 *)(param_1 + 0x1814) = *(undefined4 *)(puVar1 + 4);
    uVar14 = FUN_0277d6c4(puVar7);
    lVar24 = *(long *)puVar12;
    if (lVar24 != 0) {
      lVar19 = *(long *)(lVar19 + 0x57e58);
      uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
      if ((uVar14 < *(uint *)(lVar19 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
        local_810 = *(long *)(param_1 + 0x1818);
      }
    }
    *(undefined2 *)(param_1 + 0x1818) = *(undefined2 *)puVar1;
    *(undefined *)(param_1 + 0x181a) = puVar1[2];
    *(undefined *)(param_1 + 0x181b) = puVar1[3];
    *(undefined4 *)(param_1 + 0x181c) = *(undefined4 *)(puVar1 + 4);
    uVar14 = FUN_0277d6c4(puVar8);
    if (*(long *)puVar12 != 0) {
      lVar24 = *(long *)(lVar24 + 0x57e58);
      uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
      if ((uVar14 < *(uint *)(lVar24 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
        local_810 = *(long *)(param_1 + 0x1820);
      }
    }
    uVar9 = *(undefined2 *)puVar1;
    *(undefined *)(param_1 + 0x1822) = puVar1[2];
    *(undefined2 *)(param_1 + 0x1820) = uVar9;
    *(undefined *)(param_1 + 0x1823) = puVar1[3];
    *(undefined4 *)(param_1 + 0x1824) = *(undefined4 *)(puVar1 + 4);
    local_88 = &local_94;
    local_90 = &PTR_FUN_049ff4e8;
    FUN_008a1ba0(&local_808,&local_90);
    lVar24 = *(long *)puVar12;
    uVar14 = FUN_0277d6c4(&local_810);
    if (*(long *)puVar12 != 0) {
      lVar24 = *(long *)(lVar24 + 0x57e58);
      uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
      if ((uVar14 < *(uint *)(lVar24 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
        lVar24 = (**(code **)(local_808 + 0x18))(&local_808);
        uVar14 = FUN_0277d6c4(&local_810);
        if ((uVar14 >> 3 & 0x1fff) < 0x753) {
          lVar19 = (ulong)((uVar14 & 0xffff) >> 5) * 4;
          *(uint *)(lVar24 + lVar19) =
               *(uint *)(lVar24 + lVar19) & (1 << (ulong)(uVar14 & 0x1f) ^ 0xffffffffU);
        }
      }
    }
    uVar14 = 0;
    local_88 = &local_814;
    local_814 = 0;
    local_90 = &PTR_FUN_049ff448;
    do {
      (**(code **)(local_808 + 0x10))(&local_70,&local_808,uVar14);
      lVar24 = (**(code **)(local_808 + 0x20))(&local_808);
      uVar21 = 1 << (ulong)(uVar14 & 0x1f);
      if ((*(uint *)(lVar24 + (ulong)(uVar14 >> 5) * 4) & uVar21) != 0) {
        lVar24 = *(long *)puVar12;
        uVar15 = FUN_0277d6c4(&local_70);
        if (*(long *)puVar12 != 0) {
          lVar24 = *(long *)(lVar24 + 0x57e58);
          uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
          if (((uVar15 < *(uint *)(lVar24 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) &&
             (uVar16 = (*(code *)*local_90)(&local_90,&local_70), (uVar16 & 1) != 0))
          goto LAB_028b0164;
        }
        lVar24 = (**(code **)(local_808 + 0x18))(&local_808);
        lVar19 = (ulong)(uVar14 >> 5) * 4;
        *(uint *)(lVar24 + lVar19) = *(uint *)(lVar24 + lVar19) & (uVar21 ^ 0xffffffff);
      }
LAB_028b0164:
      uVar14 = uVar14 + 1;
    } while (uVar14 != 15000);
  }
  puVar22 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar14 = *puVar22 ^ *puVar22 << 0xb;
  uVar15 = puVar22[3];
  *puVar22 = puVar22[1];
  puVar22[1] = puVar22[2];
  uVar21 = uVar14 ^ uVar15;
  uVar14 = uVar14 >> 8 ^ uVar15 >> 0x13 ^ uVar21;
  puVar22[2] = uVar15;
  puVar22[3] = uVar14;
  uVar14 = (uVar14 ^ uVar21 >> 0x1e) * 0x6c078965 + 1;
  uVar21 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 2;
  local_90 = (undefined **)CONCAT44(uVar21,uVar14);
  uVar15 = (uVar21 ^ uVar21 >> 0x1e) * 0x6c078965 + 3;
  uVar10 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 4;
  local_88 = (uint *)CONCAT44(uVar10,uVar15);
  lVar19 = (**(code **)(local_808 + 0x20))(&local_808);
  lVar24 = 0;
  iVar17 = 0;
  do {
    puVar22 = (uint *)(lVar19 + lVar24);
    lVar24 = lVar24 + 4;
    uVar18 = *puVar22 - (*puVar22 >> 1 & 0x55555555);
    uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
    uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
    uVar18 = uVar18 + (uVar18 >> 8);
    iVar17 = (uVar18 + (uVar18 >> 0x10) & 0x3f) + iVar17;
  } while (lVar24 != 0x754);
  if (iVar17 == 0) {
    local_70 = *(undefined4 *)PTR_DAT_04bb37e0;
    uStack_6c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  }
  else {
    lVar19 = (**(code **)(local_808 + 0x20))(&local_808);
    lVar24 = 0;
    uVar18 = 0;
    do {
      puVar22 = (uint *)(lVar19 + lVar24);
      lVar24 = lVar24 + 4;
      uVar11 = *puVar22 - (*puVar22 >> 1 & 0x55555555);
      uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
      uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
      uVar11 = uVar11 + (uVar11 >> 8);
      uVar18 = (uVar11 + (uVar11 >> 0x10) & 0x3f) + uVar18;
    } while (lVar24 != 0x754);
    uVar14 = uVar14 ^ uVar14 * 0x800;
    local_90 = (undefined **)CONCAT44(uVar15,uVar21);
    uVar14 = uVar14 >> 8 ^ uVar10 >> 0x13 ^ uVar14 ^ uVar10;
    local_88 = (uint *)CONCAT44(uVar14,uVar10);
    FUN_00889f80(&local_70,&local_808,(int)((ulong)uVar14 * (ulong)uVar18 >> 0x20) + 1);
    FUN_01a4c66c(&local_90,&local_70);
  }
  lVar24 = *(long *)puVar12;
  uVar14 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar12 == 0) {
    return;
  }
  lVar24 = *(long *)(lVar24 + 0x57e58);
  uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
  if (*(uint *)(lVar24 + 0x1d8) <= uVar14) {
    return;
  }
  if (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar14 * 8) == 0) {
    return;
  }
  lVar24 = param_1 + (ulong)local_98 * 0x200;
  if (6 < local_98) {
    lVar24 = param_1;
  }
  *(undefined4 *)(lVar24 + 0x10) = local_70;
  *(undefined4 *)(lVar24 + 0x14) = uStack_6c;
  lVar24 = param_1 + 0xe00 + (ulong)local_98 * 0x100;
  if (6 < local_98) {
    lVar24 = param_1 + 0xe00;
  }
  *(undefined4 *)(lVar24 + 8) = 0xffffffff;
  lVar24 = param_1 + 0x1500 + (ulong)local_98 * 0x40;
  if (6 < local_98) {
    lVar24 = param_1 + 0x1500;
  }
  *(undefined1 *)(lVar24 + 2) = 1;
  lVar19 = *(long *)puVar12;
  uVar14 = FUN_0277d6c4(local_830);
  lVar24 = *(long *)puVar12;
  if (lVar24 != 0) {
    lVar19 = *(long *)(lVar19 + 0x57e58);
    uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
    if ((uVar14 < *(uint *)(lVar19 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
      uVar14 = FUN_0277d6c4(puVar2);
      lVar19 = *(long *)puVar12;
      local_830 = puVar2;
      if (lVar19 != 0) {
        lVar24 = *(long *)(lVar24 + 0x57e58);
        uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
        if ((uVar14 < *(uint *)(lVar24 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
          uVar14 = FUN_0277d6c4(puVar3);
          lVar24 = *(long *)puVar12;
          local_830 = puVar3;
          if (lVar24 != 0) {
            lVar19 = *(long *)(lVar19 + 0x57e58);
            uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
            if ((uVar14 < *(uint *)(lVar19 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
              uVar14 = FUN_0277d6c4(puVar4);
              lVar19 = *(long *)puVar12;
              local_830 = puVar4;
              if (lVar19 != 0) {
                lVar24 = *(long *)(lVar24 + 0x57e58);
                uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
                if ((uVar14 < *(uint *)(lVar24 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
                  uVar14 = FUN_0277d6c4(puVar5);
                  local_830 = puVar5;
                  if (*(long *)puVar12 != 0) {
                    lVar24 = *(long *)(lVar19 + 0x57e58);
                    uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
                    if ((uVar14 < *(uint *)(lVar24 + 0x1d8)) &&
                       (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
                      uVar16 = FUN_0277d9a8(puVar6);
                      local_830 = puVar6;
                      if ((uVar16 & 1) != 0) {
                        uVar16 = FUN_0277d9a8(puVar7);
                        local_830 = puVar7;
                        if ((uVar16 & 1) != 0) {
                          uVar16 = FUN_0277d9a8(puVar8);
                          local_830 = puVar8;
                          if ((uVar16 & 1) != 0) {
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
  *local_830 = local_70;
  local_830[1] = uStack_6c;
  return;
}


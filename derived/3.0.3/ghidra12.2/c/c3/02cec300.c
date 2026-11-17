
void FUN_02cec300(long param_1,byte *param_2)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 ****ppppuVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  void *pvVar14;
  long lVar15;
  undefined8 *puVar16;
  byte bVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined8 *puVar20;
  undefined4 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  int iVar26;
  ulong uVar27;
  long lVar28;
  undefined *local_1018;
  undefined8 local_1010;
  undefined1 local_f44;
  uint local_8bc;
  uint local_8b8;
  uint local_8b4;
  int local_8b0;
  undefined8 local_8a8;
  undefined1 *local_8a0;
  undefined8 ****local_898;
  undefined8 ****local_890;
  undefined8 ****local_888;
  undefined8 ****local_880;
  undefined8 ****local_878;
  undefined8 ****local_870;
  undefined8 ****local_868;
  undefined8 ****local_860;
  undefined8 ***local_858;
  undefined8 **local_850;
  undefined8 *local_848;
  undefined8 local_840;
  undefined1 local_838 [80];
  undefined **local_7e8 [4];
  undefined8 local_7c4;
  undefined8 local_70 [2];
  
  local_8a0 = (undefined1 *)0x0;
  local_888 = &local_880;
  local_880 = &local_878;
  local_8a8 = 0;
  bVar17 = *param_2;
  local_878 = &local_870;
  local_870 = &local_868;
  local_898 = &local_888;
  local_850 = &local_848;
  if (7 < bVar17) {
    bVar17 = 0xff;
  }
  local_860 = &local_858;
  local_840 = 0;
  *(byte *)(param_1 + 8) = bVar17;
  local_868 = &local_860;
  local_858 = &local_850;
  local_848 = &local_840;
  if (local_838 != (undefined1 *)0x0) {
    local_8a8 = 0xa00000000;
    local_8a0 = local_838;
  }
  local_890 = local_898;
  FUN_02cde8f4(&local_1018);
  local_f44 = 1;
  FUN_02cdeb4c(&local_1018,param_2);
  FUN_02ce0a2c(param_1 + 0x75358,param_2);
  puVar7 = PTR_DAT_04bb43c0;
  uVar11 = 0;
  do {
    local_7e8[0] = (undefined **)CONCAT44(local_7e8[0]._4_4_,uVar11);
    puVar16 = (undefined8 *)PTR_DAT_04bb37e0;
    if (((int)uVar11 < 10) && (puVar16 = &local_1010 + uVar11, 9 < uVar11)) {
      puVar16 = &local_1010;
    }
    local_7c4 = *puVar16;
    lVar22 = *(long *)puVar7;
    uVar10 = FUN_0277d6c4(&local_7c4);
    if (*(long *)puVar7 != 0) {
      lVar22 = *(long *)(lVar22 + 0x57e58);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
      if (((uVar10 < *(uint *)(lVar22 + 0x1d8)) &&
          (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) &&
         (uVar13 = FUN_02665700(&local_7c4), (uVar13 & 1) == 0)) {
        uVar13 = FUN_02cd8f10(&local_7c4);
        ppppuVar8 = local_898;
        if ((uVar13 & 1) == 0) {
          if ((int)local_8a8 < local_8a8._4_4_) {
            if (local_898 != (undefined8 ****)0x0) {
              local_898 = (undefined8 ****)*local_898;
            }
            *ppppuVar8 = (undefined8 ***)0xfffe;
            FUN_0277d4ac(ppppuVar8);
            if ((int)local_8a8 < local_8a8._4_4_) {
              *(undefined8 *****)(local_8a0 + (long)(int)local_8a8 * 8) = ppppuVar8;
              local_8a8 = CONCAT44(local_8a8._4_4_,(int)local_8a8 + 1);
            }
            *(undefined2 *)ppppuVar8 = (undefined2)local_7c4;
            *(undefined1 *)((long)ppppuVar8 + 2) = local_7c4._2_1_;
            *(undefined1 *)((long)ppppuVar8 + 3) = local_7c4._3_1_;
            *(undefined4 *)((long)ppppuVar8 + 4) = local_7c4._4_4_;
          }
        }
      }
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 != 10);
  pvVar14 = (void *)(**(code **)(*(long *)(param_1 + 0x75468) + 0x18))();
  memset(pvVar14,0,0x754);
  FUN_02cde8f4(&local_1018);
  FUN_02cdeb4c(&local_1018,param_2);
  puVar7 = PTR_DAT_04bb43c0;
  lVar23 = 0x753c8;
  uVar11 = 0;
  lVar28 = 0;
  lVar22 = param_1 + 0x753d0;
  do {
    puVar6 = PTR_DAT_04bb37e0;
    puVar1 = (undefined2 *)(param_1 + lVar23);
    lVar15 = lVar22 + lVar28;
    local_7e8[0] = (undefined **)CONCAT44(local_7e8[0]._4_4_,uVar11);
    uVar5 = *(undefined2 *)PTR_DAT_04bb37e0;
    *puVar1 = uVar5;
    uVar18 = puVar6[2];
    *(undefined1 *)(lVar15 + -6) = uVar18;
    uVar19 = puVar6[3];
    *(undefined1 *)(lVar15 + -5) = uVar19;
    uVar21 = *(undefined4 *)(puVar6 + 4);
    *(undefined4 *)(lVar22 + lVar28) = 6;
    *(undefined4 *)(lVar15 + 4) = 0xffffffff;
    *(undefined4 *)(lVar15 + -4) = uVar21;
    if ((int)uVar11 < 10) {
      lVar24 = (ulong)uVar11 * 8;
      bVar9 = 9 < uVar11;
      puVar2 = (undefined1 *)((long)&local_1010 + lVar24 + 2);
      puVar16 = &local_1010 + uVar11;
      if (bVar9) {
        puVar2 = (undefined1 *)((long)&local_1010 + 2);
        puVar16 = &local_1010;
      }
      uVar5 = *(undefined2 *)puVar16;
      puVar3 = (undefined1 *)((long)&local_1010 + lVar24 + 3);
      if (bVar9) {
        puVar3 = (undefined1 *)((long)&local_1010 + 3);
      }
      uVar18 = *puVar2;
      uVar19 = *puVar3;
      puVar4 = (undefined4 *)((long)&local_1010 + lVar24 + 4);
      if (bVar9) {
        puVar4 = (undefined4 *)((long)&local_1010 + 4);
      }
      uVar21 = *puVar4;
    }
    lVar24 = *(long *)puVar7;
    local_7c4 = CONCAT44(uVar21,CONCAT13(uVar19,CONCAT12(uVar18,uVar5)));
    uVar10 = FUN_0277d6c4(&local_7c4);
    if (*(long *)puVar7 != 0) {
      lVar24 = *(long *)(lVar24 + 0x57e58);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
      if ((uVar10 < *(uint *)(lVar24 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
        local_7e8[0] = (undefined **)CONCAT44(local_7e8[0]._4_4_,uVar11);
        puVar16 = (undefined8 *)PTR_DAT_04bb37e0;
        if (((int)uVar11 < 10) && (puVar16 = &local_1010 + uVar11, 9 < uVar11)) {
          puVar16 = &local_1010;
        }
        local_7c4 = CONCAT62(local_7c4._2_6_,*(undefined2 *)puVar16);
        uVar18 = *(undefined1 *)((long)puVar16 + 2);
        uVar19 = *(undefined1 *)((long)puVar16 + 3);
        uVar21 = *(undefined4 *)((long)puVar16 + 4);
        local_7c4 = *puVar16;
        *puVar1 = *(undefined2 *)puVar16;
        *(undefined1 *)(lVar15 + -6) = uVar18;
        *(undefined1 *)(lVar15 + -5) = uVar19;
        *(undefined4 *)(lVar15 + -4) = uVar21;
        uVar13 = FUN_02665700(puVar1);
        if (((uVar13 & 1) == 0) && (uVar13 = FUN_02cd8f10(puVar1), (uVar13 & 1) == 0)) {
          *(undefined4 *)(lVar22 + lVar28) = 4;
          FUN_0277dedc(&local_7c4);
          lVar15 = (**(code **)(*(long *)(param_1 + 0x75468) + 0x18))();
          uVar10 = FUN_0277d6c4(&local_7c4);
          if ((uVar10 >> 3 & 0x1fff) < 0x753) {
            lVar24 = (ulong)((uVar10 & 0xffff) >> 5) * 4;
            *(uint *)(lVar15 + lVar24) = *(uint *)(lVar15 + lVar24) | 1 << (ulong)(uVar10 & 0x1f);
          }
        }
        else {
          *(undefined4 *)(lVar22 + lVar28) = 3;
        }
      }
    }
    lVar28 = lVar28 + 0x10;
    uVar11 = uVar11 + 1;
    lVar23 = lVar23 + 0x10;
  } while (lVar28 != 0xa0);
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar22 = 0;
    puVar16 = *(undefined8 **)(param_1 + 0x20);
    do {
      puVar20 = *(undefined8 **)(*(long *)(param_1 + 0x18) + lVar22 * 8);
      lVar22 = lVar22 + 1;
      *puVar20 = puVar16;
      *(undefined8 **)(param_1 + 0x20) = puVar20;
      puVar16 = puVar20;
    } while (lVar22 < *(int *)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  local_1018 = PTR_DAT_04bbfe60 + 0x10;
  memset(&local_1010,0,0x754);
  uVar11 = nn::os::GetSystemTick();
  local_8bc = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
  local_8b8 = (local_8bc ^ local_8bc >> 0x1e) * 0x6c078965 + 2;
  local_8b4 = (local_8b8 ^ local_8b8 >> 0x1e) * 0x6c078965 + 3;
  local_8b0 = (local_8b4 ^ local_8b4 >> 0x1e) * 0x6c078965 + 4;
  pvVar14 = (void *)(**(code **)(local_1018 + 0x18))(&local_1018);
  memset(pvVar14,0,0x754);
  memset(&local_7c4,0,0x754);
  puVar7 = PTR_DAT_04bb43c0;
  if ((((*param_2 < 8) && (uVar11 = FUN_02582d8c(param_2,1), uVar11 < 8)) &&
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar11 * 0x13f0 + 0x13d4) != '\0')) &&
     (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar11 * 0x13f0 + 0x13d6) != '\0')) {
    bVar17 = *param_2;
    if (7 < bVar17) {
      bVar17 = 0xff;
    }
    local_7e8[0] = (undefined **)CONCAT71(local_7e8[0]._1_7_,bVar17);
    lVar22 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_7e8,1);
    if (lVar22 != 0) {
      lVar28 = lVar22 + 0x194b0;
      if (*(long *)(lVar22 + 0x194b8) == 0) {
        lVar28 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
      }
      if ((*(long **)(lVar28 + 0x1090) == (long *)0x0) ||
         (puVar16 = (undefined8 *)**(long **)(lVar28 + 0x1090), puVar16 == (undefined8 *)0x0)) {
        memcpy(&local_7c4,(void *)(*(long *)(lVar28 + 0x1078) + *(long *)(lVar28 + 0x1070)),0x754);
      }
      else {
        uVar13 = (**(code **)*puVar16)();
        memcpy(&local_7c4,(void *)(*(long *)(lVar28 + 0x1078) + *(long *)(lVar28 + 0x1070)),0x754);
        if ((((uVar13 & 1) != 0) && (*(long *)(lVar28 + 0x1090) != 0)) &&
           (puVar16 = *(undefined8 **)(*(long *)(lVar28 + 0x1090) + 8), puVar16 != (undefined8 *)0x0
           )) {
          (**(code **)*puVar16)();
        }
      }
    }
  }
  memcpy(&local_1010,&local_7c4,0x754);
  uVar11 = 0;
  local_7e8[0] = &PTR_FUN_04b2a458;
  do {
    (**(code **)(local_1018 + 0x10))(local_70,&local_1018,uVar11);
    lVar22 = (**(code **)(local_1018 + 0x20))(&local_1018);
    uVar10 = 1 << (ulong)(uVar11 & 0x1f);
    if ((*(uint *)(lVar22 + (ulong)(uVar11 >> 5) * 4) & uVar10) != 0) {
      lVar22 = *(long *)puVar7;
      uVar12 = FUN_0277d6c4(local_70);
      if (*(long *)puVar7 != 0) {
        lVar22 = *(long *)(lVar22 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
        if (((uVar12 < *(uint *)(lVar22 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) &&
           (uVar13 = (*(code *)*local_7e8[0])(local_7e8,local_70), (uVar13 & 1) != 0))
        goto LAB_02cec9d0;
      }
      lVar22 = (**(code **)(local_1018 + 0x18))(&local_1018);
      lVar28 = (ulong)(uVar11 >> 5) * 4;
      *(uint *)(lVar22 + lVar28) = *(uint *)(lVar22 + lVar28) & (uVar10 ^ 0xffffffff);
    }
LAB_02cec9d0:
    uVar11 = uVar11 + 1;
  } while (uVar11 != 15000);
  uVar13 = local_8a8 & 0xffffffff;
  if (0 < (int)local_8a8) {
    uVar27 = 0;
    do {
      uVar25 = *(undefined8 *)(local_8a0 + uVar27 * 8);
      FUN_0277dedc(uVar25);
      lVar22 = (**(code **)(local_1018 + 0x18))(&local_1018);
      uVar11 = FUN_0277d6c4(uVar25);
      if ((uVar11 >> 3 & 0x1fff) < 0x753) {
        lVar28 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
        *(uint *)(lVar22 + lVar28) = *(uint *)(lVar22 + lVar28) | 1 << (ulong)(uVar11 & 0x1f);
      }
      uVar27 = uVar27 + 1;
    } while (uVar13 != uVar27);
  }
  local_7c4 = 0x323b;
  FUN_0277d4ac(&local_7c4);
  local_7e8[0] = (undefined **)0x323c;
  FUN_0277d4ac(local_7e8);
  local_70[0] = 0x323d;
  FUN_0277d4ac(local_70);
  lVar22 = (**(code **)(local_1018 + 0x18))(&local_1018);
  uVar11 = FUN_0277d6c4(&local_7c4);
  if ((uVar11 >> 3 & 0x1fff) < 0x753) {
    lVar28 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
    *(uint *)(lVar22 + lVar28) =
         *(uint *)(lVar22 + lVar28) & (1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU);
  }
  lVar22 = (**(code **)(local_1018 + 0x18))(&local_1018);
  uVar11 = FUN_0277d6c4(local_7e8);
  if ((uVar11 >> 3 & 0x1fff) < 0x753) {
    lVar28 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
    *(uint *)(lVar22 + lVar28) =
         *(uint *)(lVar22 + lVar28) & (1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU);
  }
  lVar22 = (**(code **)(local_1018 + 0x18))(&local_1018);
  uVar11 = FUN_0277d6c4(local_70);
  if ((uVar11 >> 3 & 0x1fff) < 0x753) {
    lVar28 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
    *(uint *)(lVar22 + lVar28) =
         *(uint *)(lVar22 + lVar28) & (1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU);
  }
  if ((*(int *)(param_1 + 0x753d0) != 3) && (*(int *)(param_1 + 0x753d0) != 6)) {
    FUN_0277dedc(param_1 + 0x753c8);
    lVar22 = (**(code **)(local_1018 + 0x18))(&local_1018);
    uVar11 = FUN_0277d6c4(param_1 + 0x753c8);
    if ((uVar11 >> 3 & 0x1fff) < 0x753) {
      lVar28 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
      *(uint *)(lVar22 + lVar28) = *(uint *)(lVar22 + lVar28) | 1 << (ulong)(uVar11 & 0x1f);
    }
  }
  if ((*(int *)(param_1 + 0x753e0) != 3) && (*(int *)(param_1 + 0x753e0) != 6)) {
    FUN_0277dedc(param_1 + 0x753d8);
    lVar22 = (**(code **)(local_1018 + 0x18))(&local_1018);
    uVar11 = FUN_0277d6c4(param_1 + 0x753d8);
    if ((uVar11 >> 3 & 0x1fff) < 0x753) {
      lVar28 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
      *(uint *)(lVar22 + lVar28) = *(uint *)(lVar22 + lVar28) | 1 << (ulong)(uVar11 & 0x1f);
    }
  }
  if ((*(int *)(param_1 + 0x753f0) != 3) && (*(int *)(param_1 + 0x753f0) != 6)) {
    FUN_0277dedc(param_1 + 0x753e8);
    lVar22 = (**(code **)(local_1018 + 0x18))(&local_1018);
    uVar11 = FUN_0277d6c4(param_1 + 0x753e8);
    if ((uVar11 >> 3 & 0x1fff) < 0x753) {
      lVar28 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
      *(uint *)(lVar22 + lVar28) = *(uint *)(lVar22 + lVar28) | 1 << (ulong)(uVar11 & 0x1f);
    }
  }
  if ((*(int *)(param_1 + 0x75400) != 3) && (*(int *)(param_1 + 0x75400) != 6)) {
    FUN_0277dedc(param_1 + 0x753f8);
    lVar22 = (**(code **)(local_1018 + 0x18))(&local_1018);
    uVar11 = FUN_0277d6c4(param_1 + 0x753f8);
    if ((uVar11 >> 3 & 0x1fff) < 0x753) {
      lVar28 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
      *(uint *)(lVar22 + lVar28) = *(uint *)(lVar22 + lVar28) | 1 << (ulong)(uVar11 & 0x1f);
    }
  }
  if ((*(int *)(param_1 + 0x75410) != 3) && (*(int *)(param_1 + 0x75410) != 6)) {
    FUN_0277dedc(param_1 + 0x75408);
    lVar22 = (**(code **)(local_1018 + 0x18))(&local_1018);
    uVar11 = FUN_0277d6c4(param_1 + 0x75408);
    if ((uVar11 >> 3 & 0x1fff) < 0x753) {
      lVar28 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
      *(uint *)(lVar22 + lVar28) = *(uint *)(lVar22 + lVar28) | 1 << (ulong)(uVar11 & 0x1f);
    }
  }
  if ((*(int *)(param_1 + 0x75420) != 3) && (*(int *)(param_1 + 0x75420) != 6)) {
    FUN_0277dedc(param_1 + 0x75418);
    lVar22 = (**(code **)(local_1018 + 0x18))(&local_1018);
    uVar11 = FUN_0277d6c4(param_1 + 0x75418);
    if ((uVar11 >> 3 & 0x1fff) < 0x753) {
      lVar28 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
      *(uint *)(lVar22 + lVar28) = *(uint *)(lVar22 + lVar28) | 1 << (ulong)(uVar11 & 0x1f);
    }
  }
  if ((*(int *)(param_1 + 0x75430) != 3) && (*(int *)(param_1 + 0x75430) != 6)) {
    FUN_0277dedc(param_1 + 0x75428);
    lVar22 = (**(code **)(local_1018 + 0x18))(&local_1018);
    uVar11 = FUN_0277d6c4(param_1 + 0x75428);
    if ((uVar11 >> 3 & 0x1fff) < 0x753) {
      lVar28 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
      *(uint *)(lVar22 + lVar28) = *(uint *)(lVar22 + lVar28) | 1 << (ulong)(uVar11 & 0x1f);
    }
  }
  if ((*(int *)(param_1 + 0x75440) != 3) && (*(int *)(param_1 + 0x75440) != 6)) {
    FUN_0277dedc(param_1 + 0x75438);
    lVar22 = (**(code **)(local_1018 + 0x18))(&local_1018);
    uVar11 = FUN_0277d6c4(param_1 + 0x75438);
    if ((uVar11 >> 3 & 0x1fff) < 0x753) {
      lVar28 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
      *(uint *)(lVar22 + lVar28) = *(uint *)(lVar22 + lVar28) | 1 << (ulong)(uVar11 & 0x1f);
    }
  }
  if ((*(int *)(param_1 + 0x75450) != 3) && (*(int *)(param_1 + 0x75450) != 6)) {
    FUN_0277dedc(param_1 + 0x75448);
    lVar22 = (**(code **)(local_1018 + 0x18))(&local_1018);
    uVar11 = FUN_0277d6c4(param_1 + 0x75448);
    if ((uVar11 >> 3 & 0x1fff) < 0x753) {
      lVar28 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
      *(uint *)(lVar22 + lVar28) = *(uint *)(lVar22 + lVar28) | 1 << (ulong)(uVar11 & 0x1f);
    }
  }
  if ((*(int *)(param_1 + 0x75460) != 3) && (*(int *)(param_1 + 0x75460) != 6)) {
    FUN_0277dedc(param_1 + 0x75458);
    lVar22 = (**(code **)(local_1018 + 0x18))(&local_1018);
    uVar11 = FUN_0277d6c4(param_1 + 0x75458);
    if ((uVar11 >> 3 & 0x1fff) < 0x753) {
      lVar28 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
      *(uint *)(lVar22 + lVar28) = *(uint *)(lVar22 + lVar28) | 1 << (ulong)(uVar11 & 0x1f);
    }
  }
  lVar22 = (**(code **)(local_1018 + 0x20))(&local_1018);
  uVar13 = 0;
  do {
    if ((*(uint *)(lVar22 + (uVar13 >> 5) * 4) >> (ulong)((uint)uVar13 & 0x1f) & 1) != 0)
    goto LAB_02ced070;
    uVar11 = (uint)uVar13 + 1;
    uVar13 = (ulong)uVar11;
  } while (uVar11 != 15000);
  uVar13 = 0;
LAB_02ced070:
  lVar28 = (**(code **)(local_1018 + 0x20))(&local_1018);
  puVar7 = PTR_DAT_04bbfe58;
  iVar26 = 15000;
  do {
    if ((*(uint *)(lVar28 + (ulong)(iVar26 - 1U >> 5) * 4) >> (ulong)(iVar26 - 1U & 0x1f) & 1) != 0)
    break;
    iVar26 = iVar26 + -1;
  } while (iVar26 != 0);
  if (iVar26 == (int)uVar13) {
LAB_02ced0a8:
    FUN_02ced290(param_1,0);
    return;
  }
  lVar28 = *(long *)PTR_DAT_04bb43c0;
LAB_02ced100:
  puVar16 = (undefined8 *)(puVar7 + uVar13 * 8);
  if (0x752 < (uint)(uVar13 >> 3)) {
    puVar16 = (undefined8 *)puVar7;
  }
  puVar20 = (undefined8 *)PTR_DAT_04bb37e0;
  if ((uint)uVar13 < 0x3a99) {
    puVar20 = puVar16;
  }
  uVar5 = *(undefined2 *)puVar20;
  uVar18 = *(undefined1 *)((long)puVar20 + 2);
  uVar19 = *(undefined1 *)((long)puVar20 + 3);
  uVar21 = *(undefined4 *)((long)puVar20 + 4);
  local_7c4 = *puVar20;
  uVar11 = FUN_0277d6c4(&local_7c4);
  lVar23 = *(long *)PTR_DAT_04bb43c0;
  if (lVar23 == 0) {
    lVar23 = 0;
  }
  else {
    lVar28 = *(long *)(lVar28 + 0x57e58);
    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
    if ((uVar11 < *(uint *)(lVar28 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
      if (*(int *)(param_1 + 0x14) <= *(int *)(param_1 + 0x10)) goto LAB_02ced0a8;
      puVar16 = *(undefined8 **)(param_1 + 0x20);
      if (puVar16 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x20) = *puVar16;
      }
      *puVar16 = 0xfffe;
      FUN_0277d4ac(puVar16);
      if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14)) {
        *(undefined8 **)(*(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x10) * 8) = puVar16;
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      }
      *(undefined2 *)puVar16 = uVar5;
      *(undefined1 *)((long)puVar16 + 2) = uVar18;
      *(undefined1 *)((long)puVar16 + 3) = uVar19;
      *(undefined4 *)((long)puVar16 + 4) = uVar21;
      lVar23 = *(long *)PTR_DAT_04bb43c0;
    }
  }
  do {
    uVar11 = (int)uVar13 + 1;
    uVar13 = (ulong)uVar11;
    if (0x752 < uVar11 >> 3) {
      uVar11 = 0x3a95;
      goto LAB_02ced244;
    }
  } while ((*(uint *)(lVar22 + (ulong)(uVar11 >> 5) * 4) >> (ulong)(uVar11 & 0x1f) & 1) == 0);
  goto LAB_02ced0f8;
  while (uVar11 = uVar11 - 3, uVar11 != 0xfffffffd) {
LAB_02ced244:
    uVar10 = uVar11 + 2;
    if ((((*(uint *)(lVar22 + (ulong)(uVar10 >> 5) * 4) >> (ulong)(uVar10 & 0x1f) & 1) != 0) ||
        (uVar10 = uVar11 + 1,
        (*(uint *)(lVar22 + (ulong)(uVar10 >> 5) * 4) >> (ulong)(uVar10 & 0x1f) & 1) != 0)) ||
       (uVar10 = uVar11,
       (*(uint *)(lVar22 + (ulong)(uVar11 >> 5) * 4) >> (ulong)(uVar11 & 0x1f) & 1) != 0)) {
      uVar13 = (ulong)(uVar10 + 1);
      goto LAB_02ced0f8;
    }
  }
  uVar13 = 0;
LAB_02ced0f8:
  lVar28 = lVar23;
  if (iVar26 == (int)uVar13) goto LAB_02ced0a8;
  goto LAB_02ced100;
}


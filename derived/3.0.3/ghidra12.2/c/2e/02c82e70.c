
void FUN_02c82e70(long param_1,byte *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  void *pvVar10;
  ulong uVar11;
  int *piVar12;
  byte bVar13;
  uint *puVar14;
  int iVar15;
  long lVar16;
  undefined2 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  undefined4 *puVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  uint *puVar25;
  uint uStack_3b1d4;
  uint uStack_3b1c4;
  undefined *puStack_3b1c0;
  undefined1 auStack_3b1b8 [1876];
  uint uStack_3aa64;
  uint uStack_3aa60;
  uint uStack_3aa5c;
  int iStack_3aa58;
  undefined *puStack_3aa50;
  undefined8 uStack_3aa48;
  undefined8 *puStack_3aa40;
  long *plStack_3aa38;
  long *plStack_3aa30;
  long alStack_3aa28 [2];
  long lStack_3aa18;
  long lStack_3aa10;
  undefined1 auStack_3aa08 [119968];
  undefined8 auStack_1d568 [15001];
  undefined4 local_a0;
  undefined4 uStack_9c;
  uint *local_98;
  undefined **local_90;
  uint *puStack_88;
  undefined1 auStack_70 [16];
  
  puVar6 = PTR_DAT_04bb43c0;
  local_98 = (uint *)0x0;
  puVar21 = (undefined4 *)(param_1 + 8);
  local_a0 = *puVar21;
  uStack_9c = *(undefined4 *)(param_1 + 0xc);
  lVar23 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(&local_a0);
  if (*(long *)puVar6 == 0) {
LAB_02c82f4c:
    puVar25 = (uint *)0x0;
  }
  else {
    lVar23 = *(long *)(lVar23 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
    if ((*(uint *)(lVar23 + 0x1d8) <= uVar7) ||
       (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_02c82f4c;
    lVar23 = *(long *)PTR_DAT_04bc0428;
    uVar7 = FUN_0277d6c4(puVar21);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
    if (*(uint *)(lVar23 + 0x1d8) <= uVar7) goto LAB_02c82f4c;
    puVar25 = *(uint **)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar7 * 8);
    if (puVar25 != (uint *)0x0) {
      local_98 = puVar25;
    }
  }
  if (7 < *param_2) {
    return;
  }
  uVar7 = FUN_02582d8c(param_2,1);
  if (7 < uVar7) {
    return;
  }
  if (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar7 * 0x13f0 + 0x13d4) == '\0') {
    return;
  }
  if (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar7 * 0x13f0 + 0x13d6) == '\0') {
    return;
  }
  bVar13 = *param_2;
  if (7 < bVar13) {
    bVar13 = 0xff;
  }
  puStack_3aa50 = (undefined *)CONCAT71(puStack_3aa50._1_7_,bVar13);
  lVar23 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&puStack_3aa50,1);
  if (lVar23 == 0) {
    return;
  }
  lVar22 = lVar23 + 0x194b0;
  if (*(long *)(lVar23 + 0x194b8) == 0) {
    lVar22 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
  }
  if ((*(long **)(lVar22 + 0x1090) == (long *)0x0) ||
     (puVar9 = (undefined8 *)**(long **)(lVar22 + 0x1090), puVar9 == (undefined8 *)0x0)) {
    uStack_3b1d4 = 0;
  }
  else {
    uStack_3b1d4 = (**(code **)*puVar9)();
  }
  lVar16 = *(long *)(lVar22 + 0x1070);
  plStack_3aa38 = alStack_3aa28;
  lVar19 = *(long *)(lVar22 + 0x1078);
  puStack_3aa40 = (undefined8 *)0x0;
  puStack_3aa50 = PTR_DAT_04bb60c8 + 0x10;
  uStack_3aa48._4_4_ = 0;
  lVar23 = 0;
  while( true ) {
    plVar20 = (long *)((long)alStack_3aa28 + lVar23 + 8);
    *plVar20 = (long)alStack_3aa28 + lVar23 + 0x10;
    *(long **)((long)alStack_3aa28 + lVar23) = plVar20;
    *(undefined1 **)((long)alStack_3aa28 + lVar23 + 0x10) = auStack_3aa08 + lVar23 + -8;
    if (lVar23 == 0x1d4a0) break;
    *(undefined1 **)(auStack_3aa08 + lVar23 + -8) = auStack_3aa08 + lVar23;
    lVar23 = lVar23 + 0x20;
  }
  if (auStack_1d568 != (undefined8 *)0x0) {
    uStack_3aa48._4_4_ = 15000;
    puStack_3aa40 = auStack_1d568;
  }
  uStack_3aa48 = (ulong)uStack_3aa48._4_4_ << 0x20;
  puStack_3b1c0 = PTR_DAT_04bbfe60 + 0x10;
  plStack_3aa30 = plStack_3aa38;
  memset(auStack_3b1b8,0,0x754);
  uVar7 = nn::os::GetSystemTick();
  uStack_3aa64 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
  uStack_3aa60 = (uStack_3aa64 ^ uStack_3aa64 >> 0x1e) * 0x6c078965 + 2;
  uStack_3aa5c = (uStack_3aa60 ^ uStack_3aa60 >> 0x1e) * 0x6c078965 + 3;
  iStack_3aa58 = (uStack_3aa5c ^ uStack_3aa5c >> 0x1e) * 0x6c078965 + 4;
  pvVar10 = (void *)(**(code **)(puStack_3b1c0 + 0x18))(&puStack_3b1c0);
  memset(pvVar10,0,0x754);
  pvVar10 = (void *)(**(code **)(puStack_3b1c0 + 0x18))(&puStack_3b1c0);
  memset(pvVar10,0,0x754);
  memcpy(auStack_3b1b8,(void *)(lVar19 + lVar16),0x754);
  piVar12 = *(int **)(param_1 + 0xb0);
  if ((piVar12 != (int *)0x0) && (*piVar12 != 0)) {
    puVar9 = *(undefined8 **)(piVar12 + 2);
    lVar23 = (long)*piVar12 << 3;
    do {
      uVar24 = *puVar9;
      FUN_0277dedc(uVar24);
      lVar16 = (**(code **)(puStack_3b1c0 + 0x18))(&puStack_3b1c0);
      uVar7 = FUN_0277d6c4(uVar24);
      if ((uVar7 >> 3 & 0x1fff) < 0x753) {
        lVar19 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
        *(uint *)(lVar16 + lVar19) = *(uint *)(lVar16 + lVar19) | 1 << (ulong)(uVar7 & 0x1f);
      }
      puVar9 = puVar9 + 1;
      lVar23 = lVar23 + -8;
    } while (lVar23 != 0);
  }
  uStack_3b1c4 = 0;
  if (((puVar25 != (uint *)0x0) && (uVar7 = *puVar25, uVar7 != 0)) &&
     (puVar25 != (uint *)(ulong)uVar7)) {
    puVar14 = (uint *)((long)puVar25 - (long)(ulong)uVar7);
    uStack_3b1c4 = 0;
    if (*puVar14 != 0) {
      uVar7 = puVar14[1];
      if ((uVar7 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
        lVar23 = 0xc;
        if (*(char *)((long)puVar14 + 10) != '\0') {
          lVar23 = 0x1c;
        }
        lVar23 = (long)puVar14 + lVar23 + (ulong)(ushort)puVar14[2] * 8;
        if (lVar23 != 0) {
          uVar1 = 0;
          if ((ulong)uVar7 != 0) {
            uVar1 = (uint)((ulong)((long)puVar25 - lVar23) / (ulong)uVar7);
          }
          if (*puVar14 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < *(uint *)PTR_DAT_04bc0020) &&
             (uStack_3b1c4 = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar1 * 2),
             uStack_3b1c4 < 0x5b6)) goto LAB_02c83294;
        }
      }
      uStack_3b1c4 = 0;
    }
  }
LAB_02c83294:
  uVar7 = 0;
  puStack_88 = &uStack_3b1c4;
  local_90 = &PTR_FUN_049ff858;
  do {
    (**(code **)(puStack_3b1c0 + 0x10))(auStack_70,&puStack_3b1c0,uVar7);
    lVar23 = (**(code **)(puStack_3b1c0 + 0x20))(&puStack_3b1c0);
    uVar1 = 1 << (ulong)(uVar7 & 0x1f);
    if ((*(uint *)(lVar23 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
      lVar23 = *(long *)puVar6;
      uVar8 = FUN_0277d6c4(auStack_70);
      if (*(long *)puVar6 != 0) {
        lVar23 = *(long *)(lVar23 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
        if (((uVar8 < *(uint *)(lVar23 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) &&
           (uVar11 = (*(code *)*local_90)(&local_90,auStack_70), (uVar11 & 1) != 0))
        goto LAB_02c832e0;
      }
      lVar23 = (**(code **)(puStack_3b1c0 + 0x18))(&puStack_3b1c0);
      lVar16 = (ulong)(uVar7 >> 5) * 4;
      *(uint *)(lVar23 + lVar16) = *(uint *)(lVar23 + lVar16) & (uVar1 ^ 0xffffffff);
    }
LAB_02c832e0:
    uVar7 = uVar7 + 1;
    if (uVar7 == 15000) {
      lVar16 = (**(code **)(puStack_3b1c0 + 0x20))(&puStack_3b1c0);
      lVar23 = 0;
      iVar15 = 0;
      do {
        puVar25 = (uint *)(lVar16 + lVar23);
        lVar23 = lVar23 + 4;
        uVar7 = *puVar25 - (*puVar25 >> 1 & 0x55555555);
        uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
        uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
        uVar7 = uVar7 + (uVar7 >> 8);
        iVar15 = (uVar7 + (uVar7 >> 0x10) & 0x3f) + iVar15;
      } while (lVar23 != 0x754);
      if (iVar15 == 0) {
        FUN_0277dedc(puVar21);
        lVar23 = (**(code **)(puStack_3b1c0 + 0x18))(&puStack_3b1c0);
        uVar7 = FUN_0277d6c4(puVar21);
        if ((uVar7 >> 3 & 0x1fff) < 0x753) {
          lVar16 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
          *(uint *)(lVar23 + lVar16) = *(uint *)(lVar23 + lVar16) | 1 << (ulong)(uVar7 & 0x1f);
        }
      }
      FUN_009aa4b0(&puStack_3aa50,&puStack_3b1c0);
      local_90 = (undefined **)(PTR_DAT_04bc5a40 + 0x10);
      puStack_88 = (uint *)PTR_LAB_04bc5a48;
      (**(code **)(puStack_3aa50 + 0x20))(&puStack_3aa50);
      uVar24 = (**(code **)(puStack_3aa50 + 0x10))(&puStack_3aa50);
      FUN_02c5ef70(uVar24,&local_90);
      if ((int)uStack_3aa48 != 0) {
        lVar23 = (long)(int)uStack_3aa48 << 3;
        iVar15 = *(int *)(param_1 + 0x10);
        puVar9 = puStack_3aa40;
        do {
          if (iVar15 < *(int *)(param_1 + 0x14)) {
            puVar17 = (undefined2 *)*puVar9;
            uVar5 = *puVar17;
            uVar3 = *(undefined1 *)(puVar17 + 1);
            uVar4 = *(undefined1 *)((long)puVar17 + 3);
            uVar2 = *(undefined4 *)(puVar17 + 2);
            puVar18 = *(undefined8 **)(param_1 + 0x20);
            if (puVar18 != (undefined8 *)0x0) {
              *(undefined8 *)(param_1 + 0x20) = *puVar18;
            }
            *(undefined2 *)puVar18 = uVar5;
            *(undefined1 *)((long)puVar18 + 2) = uVar3;
            *(undefined1 *)((long)puVar18 + 3) = uVar4;
            *(undefined4 *)((long)puVar18 + 4) = uVar2;
            iVar15 = *(int *)(param_1 + 0x10);
            if (iVar15 < *(int *)(param_1 + 0x14)) {
              *(undefined8 **)(*(long *)(param_1 + 0x18) + (long)iVar15 * 8) = puVar18;
              iVar15 = *(int *)(param_1 + 0x10) + 1;
              *(int *)(param_1 + 0x10) = iVar15;
            }
          }
          puVar9 = puVar9 + 1;
          lVar23 = lVar23 + -8;
        } while (lVar23 != 0);
      }
      if ((((uStack_3b1d4 & 1) != 0) && (*(long *)(lVar22 + 0x1090) != 0)) &&
         (puVar9 = *(undefined8 **)(*(long *)(lVar22 + 0x1090) + 8), puVar9 != (undefined8 *)0x0)) {
        (**(code **)*puVar9)();
      }
      return;
    }
  } while( true );
}


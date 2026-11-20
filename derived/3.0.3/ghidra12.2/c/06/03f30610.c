
void FUN_03f30610(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  uint uVar5;
  char cVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  int *piVar19;
  void *pvVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined4 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  uint uVar27;
  long lVar28;
  char *pcVar29;
  undefined *puVar30;
  long lVar31;
  undefined8 local_128;
  long *local_120;
  long *local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  long *local_f0;
  undefined8 *local_e8;
  char *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 *local_b8;
  undefined2 local_b0;
  undefined4 local_ac;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 *local_88 [5];
  
  if (*PTR_DAT_04bdf1e0 == '\0') {
    *PTR_DAT_04bdf1e0 = 1;
  }
  *(undefined8 *)PTR_DAT_04bdf0e8 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 4);
  puVar30 = PTR_DAT_04bb2020;
  local_f8 = (long *)(PTR_DAT_04bb2020 + 0x10);
  local_f0 = (long *)0x40dc9da;
  plVar13 = (long *)FUN_038c6d48(0,&local_f8,*(undefined8 *)(param_2 + 2),8,1,0);
  lVar28 = *(long *)PTR_DAT_04bb2698;
  if (lVar28 == 0) {
    plVar15 = malloc(0xa8);
  }
  else {
    plVar15 = plVar13;
    if (plVar13 == (long *)0x0) {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar15 = (long *)(lVar28 + 8);
      if (lVar14 != 0) {
        plVar15 = (long *)(lVar14 + 0xa8);
      }
      plVar15 = (long *)*plVar15;
    }
    plVar15 = (long *)(**(code **)(*plVar15 + 0x30))(plVar15,0xa8,8);
  }
  FUN_03f2f3b8(0x3f800000,plVar15,0);
  puVar1 = PTR_DAT_04bdf098;
  plVar15[0x12] = 0;
  puVar2 = PTR_DAT_04bdf0a0;
  *(undefined4 *)(plVar15 + 0x13) = 0;
  plVar15[0x14] = 0;
  *plVar15 = (long)(puVar1 + 0x10);
  plVar15[0x10] = (long)(puVar2 + 0x10);
  plVar15[0x11] = 0;
  *(long **)(param_1 + 0x1d8) = plVar15;
  nn::os::LockMutex((MutexType *)(param_1 + 0x2e0));
  lVar28 = *(long *)PTR_DAT_04bb28c8;
  local_f8 = (long *)(puVar30 + 0x10);
  local_f0 = &DAT_0407ebb1;
  lVar14 = *(long *)(lVar28 + 8);
  while( true ) {
    if (lVar14 == lVar28) break;
    lVar31 = *(long *)(lVar14 + 0x10);
    plVar15 = (long *)(lVar31 + 0x40);
    (**(code **)(*plVar15 + 0x18))(plVar15);
    (**(code **)(*plVar15 + 0x18))(plVar15);
    pcVar29 = *(char **)(lVar31 + 0x48);
    (**(code **)((long)local_f8 + 0x18))(&local_f8);
    if ((long *)pcVar29 == local_f0) {
LAB_03f3083c:
      puVar22 = (undefined8 *)(lVar14 + 0x10);
      goto LAB_03f30848;
    }
    cVar6 = **(char **)(lVar31 + 0x48);
    if (cVar6 == (char)*local_f0) {
      if (cVar6 == '\0') goto LAB_03f3083c;
      lVar23 = 0x7fffe;
      plVar15 = local_f0;
      pcVar29 = *(char **)(lVar31 + 0x48);
      while( true ) {
        if (pcVar29[1] != *(char *)((long)plVar15 + 1)) break;
        if (pcVar29[1] == '\0') goto LAB_03f3083c;
        if (pcVar29[2] != *(char *)((long)plVar15 + 2)) break;
        if (pcVar29[2] == '\0') goto LAB_03f3083c;
        if ((lVar23 == 0) || (cVar6 = pcVar29[3], cVar6 != *(char *)((long)plVar15 + 3))) break;
        lVar23 = lVar23 + -3;
        plVar15 = (long *)((long)plVar15 + 3);
        pcVar29 = pcVar29 + 3;
        if (cVar6 == '\0') goto LAB_03f3083c;
      }
    }
    lVar14 = *(long *)(lVar14 + 8);
  }
  puVar22 = (undefined8 *)(lVar28 + 0x38);
LAB_03f30848:
  *(undefined8 *)(param_1 + 0x1e0) = *puVar22;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x2e0));
  local_128 = (undefined8 *)((ulong)local_128._5_3_ << 0x28);
  puVar22 = (undefined8 *)(puVar30 + 0x10);
  local_f8 = *(long **)(*(long *)PTR_DAT_04bb2130 + 0x20);
  *(long **)(param_1 + 0x5e0) = local_f8;
  local_c8 = (long *)CONCAT71(local_c8._1_7_,1);
  local_e8 = (undefined8 *)PTR_DAT_04bb2120;
  local_d0 = &local_128;
  local_d8 = &DAT_0407ebb1;
  local_f0 = puVar22;
  local_e0 = (char *)puVar22;
  (**(code **)(**(long **)(param_1 + 0x128) + 0x68))(*(long **)(param_1 + 0x128),&local_f8);
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xfe | (byte)local_c8;
  local_f8 = (long *)CONCAT44(local_f8._4_4_,param_2[1]);
  local_f0 = plVar13;
  FUN_03f41380(param_1 + 0x550,&local_f8);
  local_f8 = (long *)CONCAT44(8,(undefined4)local_f8);
  local_b8 = (undefined8 *)0x280;
  local_b0 = 0x100;
  local_c0 = CONCAT13(local_c0._3_1_,1);
  local_f8 = (long *)CONCAT53(local_f8._3_5_,1);
  local_ac = 0;
  *(uint *)(param_1 + 8) =
       *(uint *)(param_1 + 8) & 0xfffffbff | (uint)*(byte *)((long)param_2 + 0x41) << 10;
  local_f0 = (long *)0x100000;
  local_e0 = "ForAResSystem";
  local_d8 = (undefined8 *)0x0;
  local_d0 = (undefined8 *)0x0;
  local_e8 = puVar22;
  local_c8 = plVar13;
  FUN_03f2ab60((char *)(param_1 + 0x18),&local_f8);
  (**(code **)(**(long **)(param_1 + 0x128) + 0x60))();
  if ((uint *)(param_1 + 0x1f8) != param_2 + 0x24) {
    uVar5 = param_2[0x24];
    uVar27 = *(uint *)(param_1 + 0x1fc);
    if ((int)uVar5 <= (int)*(uint *)(param_1 + 0x1fc)) {
      uVar27 = uVar5;
    }
    if (0 < *(int *)(param_1 + 0x1f8)) {
      lVar28 = 0;
      puVar25 = *(undefined8 **)(param_1 + 0x208);
      do {
        puVar26 = *(undefined8 **)(*(long *)(param_1 + 0x200) + lVar28 * 8);
        lVar28 = lVar28 + 1;
        *puVar26 = puVar25;
        *(undefined8 **)(param_1 + 0x208) = puVar26;
        puVar25 = puVar26;
      } while (lVar28 < *(int *)(param_1 + 0x1f8));
    }
    *(uint *)(param_1 + 0x1f8) = 0;
    if ((0 < (int)uVar27) && (0 < *(int *)(param_1 + 0x1fc))) {
      lVar28 = 0;
      iVar12 = 0;
      do {
        if (iVar12 < *(int *)(param_1 + 0x1fc)) {
          puVar25 = *(undefined8 **)(param_1 + 0x208);
          puVar24 = *(undefined4 **)(*(long *)(param_2 + 0x26) + lVar28);
          if (puVar25 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0x208) = *puVar25;
          }
          *(undefined4 *)puVar25 = *puVar24;
          iVar12 = *(int *)(param_1 + 0x1f8);
          if (iVar12 < *(int *)(param_1 + 0x1fc)) {
            *(undefined8 **)(*(long *)(param_1 + 0x200) + (long)iVar12 * 8) = puVar25;
            iVar12 = *(int *)(param_1 + 0x1f8) + 1;
            *(int *)(param_1 + 0x1f8) = iVar12;
          }
        }
        lVar28 = lVar28 + 8;
      } while ((ulong)uVar27 * 8 != lVar28);
    }
  }
  local_f8 = (long *)0xffffffff00000000;
  local_f0 = (long *)CONCAT44(local_f0._4_4_,0x14000);
  local_c8 = (long *)0xffffffff00000000;
  local_c0 = 0x14000;
  local_98 = 0xffffffff00000000;
  local_e8 = (undefined8 *)(PTR_DAT_04bdf088 + 0x10);
  local_90 = 0x14000;
  local_b8 = local_e8;
  local_88[0] = local_e8;
  (**(code **)(**(long **)(param_1 + 0x128) + 0x70))(*(long **)(param_1 + 0x128),&local_f8);
  local_120 = (long *)0x4074817;
  local_110 = local_f8._4_4_;
  uStack_10c = 0;
  local_108 = (undefined *)0x7fffffff;
  local_100 = (undefined *)CONCAT44(0x20,(int)local_f0);
  local_128 = puVar22;
  local_118 = plVar13;
  uVar16 = (*(code *)local_e8[1])(&local_e8);
  if ((uVar16 & 1) == 0) {
    lVar28 = *(long *)PTR_DAT_04bb2698;
    if (lVar28 == 0) {
      plVar15 = malloc(0x188);
    }
    else {
      plVar15 = plVar13;
      if (plVar13 == (long *)0x0) {
        lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar15 = (long *)(lVar28 + 8);
        if (lVar14 != 0) {
          plVar15 = (long *)(lVar14 + 0xa8);
        }
        plVar15 = (long *)*plVar15;
      }
      plVar15 = (long *)(**(code **)(*plVar15 + 0x30))(plVar15,0x188,8);
    }
    FUN_03f43570(plVar15,&local_128);
  }
  else {
    plVar15 = (long *)(*(code *)*local_e8)(&local_e8,&local_128);
  }
  local_128._2_6_ = (uint6)((ulong)local_128 >> 0x10) & 0xffff;
  local_128 = (undefined8 *)CONCAT62(local_128._2_6_,7);
  local_110 = 0x1c;
  local_118 = (long *)0x0;
  local_100 = &DAT_04074828;
  local_120 = plVar13;
  local_108 = puVar30 + 0x10;
  FUN_03f4388c(plVar15,&local_128);
  uVar16 = (ulong)local_f8 & 0xffffffff;
  *(undefined4 *)(plVar15 + 0x1a) = (undefined4)local_f8;
  nn::os::GetThreadAvailableCoreMask();
  nn::os::SetThreadCoreMask((ThreadType *)plVar15[0x1d],-1,uVar16);
  local_120 = (long *)0x40a8bb4;
  local_110 = local_c8._4_4_;
  uStack_10c = 0;
  local_108 = (undefined *)0x7fffffff;
  local_100 = (undefined *)CONCAT44(0x20,local_c0);
  local_128 = (undefined8 *)(puVar30 + 0x10);
  local_118 = plVar13;
  uVar16 = (*(code *)local_b8[1])(&local_b8);
  if ((uVar16 & 1) == 0) {
    lVar28 = *(long *)PTR_DAT_04bb2698;
    if (lVar28 == 0) {
      plVar17 = malloc(0x188);
    }
    else {
      plVar17 = plVar13;
      if (plVar13 == (long *)0x0) {
        lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar17 = (long *)(lVar28 + 8);
        if (lVar14 != 0) {
          plVar17 = (long *)(lVar14 + 0xa8);
        }
        plVar17 = (long *)*plVar17;
      }
      plVar17 = (long *)(**(code **)(*plVar17 + 0x30))(plVar17,0x188,8);
    }
    FUN_03f43570(plVar17,&local_128);
  }
  else {
    plVar17 = (long *)(*(code *)*local_b8)(&local_b8,&local_128);
  }
  local_128 = (undefined8 *)CONCAT62(local_128._2_6_,0xb);
  local_108 = puVar30 + 0x10;
  local_128 = (undefined8 *)CONCAT44(1,(undefined4)local_128);
  local_110 = 0xe;
  local_118 = (long *)0x0;
  local_100 = &DAT_04089d73;
  local_120 = plVar13;
  FUN_03f4388c(plVar17,&local_128);
  uVar16 = (ulong)local_c8 & 0xffffffff;
  *(undefined4 *)(plVar17 + 0x1a) = (undefined4)local_c8;
  nn::os::GetThreadAvailableCoreMask();
  nn::os::SetThreadCoreMask((ThreadType *)plVar17[0x1d],-1,uVar16);
  lVar28 = *(long *)PTR_DAT_04bb2698;
  if (lVar28 == 0) {
    plVar18 = malloc(0xc0);
  }
  else {
    plVar18 = plVar13;
    if (plVar13 == (long *)0x0) {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar18 = (long *)(lVar28 + 8);
      if (lVar14 != 0) {
        plVar18 = (long *)(lVar14 + 0xa8);
      }
      plVar18 = (long *)*plVar18;
      if (plVar18 == (long *)0x0) {
        plVar18 = (long *)0x0;
        goto LAB_03f30d34;
      }
    }
    plVar18 = (long *)(**(code **)(*plVar18 + 0x30))(plVar18,0xc0,8);
  }
LAB_03f30d34:
  FUN_03f41cf0(plVar18,plVar13);
  *plVar18 = (long)(PTR_DAT_04bdf178 + 0x10);
  FUN_038e19ac(plVar18 + 0x10,plVar13);
  *(long **)(param_1 + 0x130) = plVar18;
  local_128._0_6_ = CONCAT42(0x20003,(undefined2)local_128);
  local_128 = (undefined8 *)((ulong)local_128 & 0xffffffffffffff00);
  local_110 = 0xe;
  local_118 = (long *)0x0;
  local_100 = &DAT_040f1ec1;
  local_120 = plVar13;
  local_108 = puVar30 + 0x10;
  FUN_03f41f00(plVar18,&local_128);
  local_120 = (long *)0x408f1ca;
  local_110 = local_98._4_4_;
  uStack_10c = 0;
  local_108 = (undefined *)0x7fffffff;
  local_100 = (undefined *)CONCAT44(0x20,local_90);
  local_128 = (undefined8 *)(puVar30 + 0x10);
  local_118 = plVar13;
  uVar16 = (*(code *)local_88[0][1])(local_88);
  puVar30 = PTR_DAT_04bb2020;
  if ((uVar16 & 1) == 0) {
    lVar28 = *(long *)PTR_DAT_04bb2698;
    if (lVar28 == 0) {
      plVar18 = malloc(0x188);
    }
    else {
      plVar18 = plVar13;
      if (plVar13 == (long *)0x0) {
        lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar18 = (long *)(lVar28 + 8);
        if (lVar14 != 0) {
          plVar18 = (long *)(lVar14 + 0xa8);
        }
        plVar18 = (long *)*plVar18;
      }
      plVar18 = (long *)(**(code **)(*plVar18 + 0x30))(plVar18,0x188,8);
    }
    FUN_03f43570(plVar18,&local_128);
  }
  else {
    plVar18 = (long *)(*(code *)*local_88[0])(local_88,&local_128);
    puVar30 = PTR_DAT_04bb2020;
  }
  local_118 = *(long **)(param_1 + 0x130);
  local_108 = puVar30 + 0x10;
  local_128 = (undefined8 *)CONCAT62(local_128._2_6_,3);
  local_128 = (undefined8 *)((ulong)local_128 & 0xffffffff);
  local_110 = 0xe;
  local_100 = &DAT_040f1ec1;
  local_120 = plVar13;
  FUN_03f4388c(plVar18,&local_128);
  uVar16 = local_98 & 0xffffffff;
  *(undefined4 *)(plVar18 + 0x1a) = (undefined4)local_98;
  nn::os::GetThreadAvailableCoreMask();
  nn::os::SetThreadCoreMask((ThreadType *)plVar18[0x1d],-1,uVar16);
  (**(code **)(*plVar15 + 0x30))(plVar15);
  (**(code **)(*plVar17 + 0x30))(plVar17);
  (**(code **)(*plVar18 + 0x30))(plVar18);
  *(long **)(param_1 + 0x140) = plVar15;
  *(long **)(param_1 + 0x148) = plVar17;
  *(long **)(param_1 + 0x138) = plVar18;
  local_f8 = (long *)CONCAT44(local_f8._4_4_,*param_2);
  local_f0 = plVar13;
  uVar16 = FUN_03f410b0(param_1 + 0x488,&local_f8);
  if ((uVar16 & 1) == 0) {
    return;
  }
  lVar28 = *(long *)PTR_DAT_04bb2698;
  if (lVar28 == 0) {
    plVar15 = malloc(0x138);
  }
  else {
    plVar15 = plVar13;
    if (plVar13 == (long *)0x0) {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar15 = (long *)(lVar28 + 8);
      if (lVar14 != 0) {
        plVar15 = (long *)(lVar14 + 0xa8);
      }
      plVar15 = (long *)*plVar15;
      if (plVar15 == (long *)0x0) {
        plVar15 = (long *)0x0;
        goto LAB_03f30f78;
      }
    }
    plVar15 = (long *)(**(code **)(*plVar15 + 0x30))(plVar15,0x138,8);
  }
LAB_03f30f78:
  puVar9 = PTR_DAT_04bdf1d0;
  *(undefined2 *)(plVar15 + 1) = 0;
  puVar2 = PTR_DAT_04bd0e50;
  plVar15[6] = 0;
  plVar15[4] = 0;
  plVar15[5] = 0;
  puVar1 = puVar2 + 0x10;
  *plVar15 = (long)(puVar9 + 0x10);
  plVar15[2] = 0;
  plVar15[3] = (long)puVar1;
  nn::os::InitializeMutex((MutexType *)(plVar15 + 7),true,0);
  plVar15[0xd] = 0;
  plVar15[0xe] = 0;
  plVar15[0xb] = (long)puVar1;
  plVar15[0xc] = 0;
  nn::os::InitializeMutex((MutexType *)(plVar15 + 0xf),true,0);
  plVar15[0x15] = 0;
  plVar15[0x16] = 0;
  puVar1 = PTR_DAT_04bd0e58 + 0x10;
  plVar15[0x13] = (long)puVar1;
  plVar15[0x14] = 0;
  nn::os::InitializeLightEvent((LightEventType *)(plVar15 + 0x17),0,0);
  plVar15[0x1b] = 0;
  plVar15[0x1c] = 0;
  plVar15[0x19] = (long)puVar1;
  plVar15[0x1a] = 0;
  nn::os::InitializeLightEvent(plVar15 + 0x1d,0,0);
  *(undefined4 *)(plVar15 + 0x24) = 0;
  plVar15[0x22] = (long)(plVar15 + 0x22);
  plVar15[0x23] = (long)(plVar15 + 0x22);
  plVar15[0x21] = 0x4800000000;
  plVar15[0x26] = 0;
  *(undefined8 *)((long)plVar15 + 0x124) = 0x48;
  plVar15[0x1f] = (long)(plVar15 + 0x1f);
  plVar15[0x20] = (long)(plVar15 + 0x1f);
  nn::os::ClearLightEvent((LightEventType *)(plVar15 + 0x17));
  *(long **)(param_1 + 0x1a0) = plVar15;
  puVar1 = PTR_DAT_04bb5068;
  local_e8 = (undefined8 *)&LAB_03f37e4c;
  local_e0 = (char *)0x0;
  local_f8 = (long *)(PTR_DAT_04bb5068 + 0x10);
  local_f0 = plVar15;
  FUN_03f45490(plVar15,1000,plVar13,&local_f8);
  puVar3 = PTR_DAT_04bcb2d8;
  if (0 < (int)plVar15[0x25]) {
    lVar28 = plVar15[0x20];
    if ((int)plVar15[0x21] < 1) {
      lVar28 = 0;
    }
    puVar22 = (undefined8 *)0x0;
    if (lVar28 != 0) {
      puVar22 = (undefined8 *)(lVar28 - *(int *)((long)plVar15 + 0x10c));
    }
    if (((*PTR_DAT_04bcb2d8 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_04bcb2d8), iVar12 != 0)) {
      *(undefined **)PTR_DAT_04bcb2d0 = PTR_DAT_04bcb2e0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bcb2d8);
    }
    if (puVar22 != (undefined8 *)0x0) {
      (**(code **)*puVar22)(puVar22,PTR_DAT_04bcb2d0);
    }
  }
  lVar28 = *(long *)PTR_DAT_04bb2698;
  if (lVar28 == 0) {
    plVar15 = malloc(0x138);
  }
  else {
    plVar15 = plVar13;
    if (plVar13 == (long *)0x0) {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar15 = (long *)(lVar28 + 8);
      if (lVar14 != 0) {
        plVar15 = (long *)(lVar14 + 0xa8);
      }
      plVar15 = (long *)*plVar15;
      if (plVar15 == (long *)0x0) {
        plVar15 = (long *)0x0;
        goto LAB_03f31130;
      }
    }
    plVar15 = (long *)(**(code **)(*plVar15 + 0x30))(plVar15,0x138,8);
  }
LAB_03f31130:
  puVar2 = puVar2 + 0x10;
  *(undefined2 *)(plVar15 + 1) = 0;
  *plVar15 = (long)(puVar9 + 0x10);
  plVar15[4] = 0;
  plVar15[5] = 0;
  plVar15[6] = 0;
  plVar15[2] = 0;
  plVar15[3] = (long)puVar2;
  nn::os::InitializeMutex((MutexType *)(plVar15 + 7),true,0);
  plVar15[0xd] = 0;
  plVar15[0xe] = 0;
  plVar15[0xb] = (long)puVar2;
  plVar15[0xc] = 0;
  nn::os::InitializeMutex((MutexType *)(plVar15 + 0xf),true,0);
  plVar15[0x15] = 0;
  plVar15[0x16] = 0;
  puVar9 = PTR_DAT_04bd0e58;
  puVar2 = PTR_DAT_04bd0e58 + 0x10;
  plVar15[0x13] = (long)puVar2;
  plVar15[0x14] = 0;
  nn::os::InitializeLightEvent((LightEventType *)(plVar15 + 0x17),0,0);
  plVar15[0x1b] = 0;
  plVar15[0x1c] = 0;
  plVar15[0x19] = (long)puVar2;
  plVar15[0x1a] = 0;
  nn::os::InitializeLightEvent(plVar15 + 0x1d,0,0);
  *(undefined4 *)(plVar15 + 0x24) = 0;
  plVar15[0x22] = (long)(plVar15 + 0x22);
  plVar15[0x23] = (long)(plVar15 + 0x22);
  plVar15[0x21] = 0x4800000000;
  plVar15[0x26] = 0;
  *(undefined8 *)((long)plVar15 + 0x124) = 0x48;
  plVar15[0x1f] = (long)(plVar15 + 0x1f);
  plVar15[0x20] = (long)(plVar15 + 0x1f);
  nn::os::ClearLightEvent((LightEventType *)(plVar15 + 0x17));
  *(long **)(param_1 + 0x1a8) = plVar15;
  local_e8 = (undefined8 *)&LAB_03f38008;
  local_e0 = (char *)0x0;
  local_f8 = (long *)(puVar1 + 0x10);
  local_f0 = plVar15;
  FUN_03f45490(plVar15,10,plVar13,&local_f8);
  puVar1 = PTR_DAT_04bb2120;
  if (0 < (int)plVar15[0x25]) {
    lVar28 = plVar15[0x20];
    if ((int)plVar15[0x21] < 1) {
      lVar28 = 0;
    }
    puVar22 = (undefined8 *)0x0;
    if (lVar28 != 0) {
      puVar22 = (undefined8 *)(lVar28 - *(int *)((long)plVar15 + 0x10c));
    }
    if (((*puVar3 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04bcb2d8), iVar12 != 0)) {
      *(undefined **)PTR_DAT_04bcb2d0 = PTR_DAT_04bcb2e0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bcb2d8);
    }
    if (puVar22 != (undefined8 *)0x0) {
      (**(code **)*puVar22)(puVar22,PTR_DAT_04bcb2d0);
    }
  }
  lVar28 = *(long *)PTR_DAT_04bb2698;
  if (lVar28 == 0) {
    plVar15 = malloc(0x1e0);
  }
  else {
    plVar15 = plVar13;
    if (plVar13 == (long *)0x0) {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar15 = (long *)(lVar28 + 8);
      if (lVar14 != 0) {
        plVar15 = (long *)(lVar14 + 0xa8);
      }
      plVar15 = (long *)*plVar15;
      if (plVar15 == (long *)0x0) {
        plVar15 = (long *)0x0;
        goto LAB_03f312d0;
      }
    }
    plVar15 = (long *)(**(code **)(*plVar15 + 0x30))(plVar15,0x1e0,8);
  }
LAB_03f312d0:
  puVar11 = PTR_DAT_04bdf1b8;
  *(undefined2 *)(plVar15 + 1) = 0;
  plVar15[9] = 0;
  plVar15[10] = 0;
  plVar15[2] = 0;
  plVar15[3] = 0;
  plVar15[4] = 0;
  plVar15[5] = 0;
  *(undefined4 *)(plVar15 + 8) = 0;
  *plVar15 = (long)(puVar11 + 0x10);
  plVar15[6] = 0;
  plVar15[7] = 0;
  plVar15[0xb] = (long)(puVar9 + 0x10);
  plVar15[0xc] = 0;
  plVar15[0xd] = 0;
  plVar15[0xe] = 0;
  nn::os::InitializeLightEvent((LightEventType *)(plVar15 + 0xf),0,0);
  puVar2 = puVar30 + 0x10;
  plVar15[0x11] = (long)puVar2;
  plVar15[0x12] = (long)puVar1;
  nn::os::SignalLightEvent((LightEventType *)(plVar15 + 0xf));
  puVar10 = PTR_DAT_04bdf120;
  puVar3 = PTR_DAT_04bdf110;
  plVar15[0x14] = 0;
  plVar15[0x15] = 0;
  *(undefined1 *)(plVar15 + 0x17) = 0;
  *(undefined1 *)((long)plVar15 + 0xe4) = 0;
  *(undefined1 *)(plVar15 + 0x13) = 1;
  *plVar15 = (long)(puVar3 + 0x10);
  plVar15[0x18] = 0;
  plVar15[0x19] = 0;
  plVar15[0x16] = (long)(puVar10 + 0x10);
  *(undefined4 *)(plVar15 + 0x1c) = 0x80;
  puVar3 = PTR_DAT_04bb2d88 + 0x10;
  *(undefined1 *)((long)plVar15 + 0x163) = 0;
  *(undefined4 *)(plVar15 + 0x2e) = 1;
  plVar15[0x1a] = (long)puVar3;
  plVar15[0x1b] = (long)plVar15 + 0xe4;
  puVar3 = PTR_DAT_04bdf0b0;
  plVar15[0x2f] = (long)puVar2;
  plVar15[0x30] = (long)puVar1;
  *(undefined1 *)((long)plVar15 + 0x18c) = 0;
  *(undefined4 *)((long)plVar15 + 0x1cc) = 0;
  *(undefined8 *)((long)plVar15 + 0x1c4) = 0;
  *(undefined8 *)((long)plVar15 + 0x1bc) = 0;
  *(undefined8 *)((long)plVar15 + 0x1b4) = 0;
  *(undefined8 *)((long)plVar15 + 0x1ac) = 0;
  *(undefined8 *)((long)plVar15 + 0x1a4) = 0;
  *(undefined8 *)((long)plVar15 + 0x19c) = 0;
  *(undefined8 *)((long)plVar15 + 0x194) = 0;
  plVar15[0x2d] = (long)(puVar3 + 0x10);
  *(undefined4 *)(plVar15 + 0x31) = 0x1010100;
  *(undefined4 *)((long)plVar15 + 0x18d) = 0x1010101;
  plVar15[0x3a] = (long)puVar2;
  plVar15[0x3b] = (long)puVar1;
  *(long **)(param_1 + 0x1b0) = plVar15;
  (**(code **)(*plVar15 + 0x20))(plVar15,&local_f8);
  lVar28 = *(long *)PTR_DAT_04bb2698;
  if (lVar28 == 0) {
    plVar15 = malloc(0x98);
  }
  else {
    plVar15 = plVar13;
    if (plVar13 == (long *)0x0) {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar15 = (long *)(lVar28 + 8);
      if (lVar14 != 0) {
        plVar15 = (long *)(lVar14 + 0xa8);
      }
      plVar15 = (long *)*plVar15;
      if (plVar15 == (long *)0x0) {
        plVar15 = (long *)0x0;
        goto LAB_03f3145c;
      }
    }
    plVar15 = (long *)(**(code **)(*plVar15 + 0x30))(plVar15,0x98,8);
  }
LAB_03f3145c:
  *(undefined2 *)(plVar15 + 1) = 0;
  *plVar15 = (long)(puVar11 + 0x10);
  *(undefined4 *)(plVar15 + 8) = 0;
  plVar15[9] = 0;
  plVar15[10] = 0;
  plVar15[2] = 0;
  plVar15[3] = 0;
  plVar15[4] = 0;
  plVar15[5] = 0;
  plVar15[6] = 0;
  plVar15[7] = 0;
  plVar15[0xb] = (long)(puVar9 + 0x10);
  plVar15[0xc] = 0;
  plVar15[0xd] = 0;
  plVar15[0xe] = 0;
  nn::os::InitializeLightEvent((LightEventType *)(plVar15 + 0xf),0,0);
  plVar15[0x11] = (long)(puVar30 + 0x10);
  plVar15[0x12] = (long)puVar1;
  nn::os::SignalLightEvent((LightEventType *)(plVar15 + 0xf));
  *(long **)(param_1 + 0x1b8) = plVar15;
  (**(code **)(*plVar15 + 0x20))(plVar15,&local_f8);
  lVar28 = *(long *)PTR_DAT_04bb2698;
  if (lVar28 == 0) {
    plVar15 = malloc(0x98);
  }
  else {
    plVar15 = plVar13;
    if (plVar13 == (long *)0x0) {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar15 = (long *)(lVar28 + 8);
      if (lVar14 != 0) {
        plVar15 = (long *)(lVar14 + 0xa8);
      }
      plVar15 = (long *)*plVar15;
      if (plVar15 == (long *)0x0) {
        plVar15 = (long *)0x0;
        goto LAB_03f3152c;
      }
    }
    plVar15 = (long *)(**(code **)(*plVar15 + 0x30))(plVar15,0x98,8);
  }
LAB_03f3152c:
  *(undefined2 *)(plVar15 + 1) = 0;
  *plVar15 = (long)(puVar11 + 0x10);
  *(undefined4 *)(plVar15 + 8) = 0;
  plVar15[9] = 0;
  plVar15[10] = 0;
  plVar15[2] = 0;
  plVar15[3] = 0;
  plVar15[4] = 0;
  plVar15[5] = 0;
  plVar15[6] = 0;
  plVar15[7] = 0;
  plVar15[0xb] = (long)(puVar9 + 0x10);
  plVar15[0xc] = 0;
  plVar15[0xd] = 0;
  plVar15[0xe] = 0;
  nn::os::InitializeLightEvent((LightEventType *)(plVar15 + 0xf),0,0);
  plVar15[0x11] = (long)(puVar30 + 0x10);
  plVar15[0x12] = (long)puVar1;
  nn::os::SignalLightEvent((LightEventType *)(plVar15 + 0xf));
  *(long **)(param_1 + 0x1c0) = plVar15;
  (**(code **)(*plVar15 + 0x20))(plVar15,&local_f8);
  lVar28 = *(long *)PTR_DAT_04bb2698;
  if (lVar28 == 0) {
    plVar15 = malloc(0x98);
  }
  else {
    plVar15 = plVar13;
    if (plVar13 == (long *)0x0) {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar15 = (long *)(lVar28 + 8);
      if (lVar14 != 0) {
        plVar15 = (long *)(lVar14 + 0xa8);
      }
      plVar15 = (long *)*plVar15;
      if (plVar15 == (long *)0x0) {
        plVar15 = (long *)0x0;
        goto LAB_03f315fc;
      }
    }
    plVar15 = (long *)(**(code **)(*plVar15 + 0x30))(plVar15,0x98,8);
  }
LAB_03f315fc:
  *(undefined2 *)(plVar15 + 1) = 0;
  *plVar15 = (long)(puVar11 + 0x10);
  *(undefined4 *)(plVar15 + 8) = 0;
  plVar15[9] = 0;
  plVar15[10] = 0;
  plVar15[2] = 0;
  plVar15[3] = 0;
  plVar15[4] = 0;
  plVar15[5] = 0;
  plVar15[6] = 0;
  plVar15[7] = 0;
  plVar15[0xb] = (long)(puVar9 + 0x10);
  plVar15[0xc] = 0;
  plVar15[0xd] = 0;
  plVar15[0xe] = 0;
  nn::os::InitializeLightEvent((LightEventType *)(plVar15 + 0xf),0,0);
  plVar15[0x11] = (long)(puVar30 + 0x10);
  plVar15[0x12] = (long)puVar1;
  nn::os::SignalLightEvent((LightEventType *)(plVar15 + 0xf));
  *(long **)(param_1 + 0x1c8) = plVar15;
  (**(code **)(*plVar15 + 0x20))(plVar15,&local_f8);
  lVar28 = *(long *)PTR_DAT_04bb2698;
  if (lVar28 == 0) {
    plVar15 = malloc(0x98);
  }
  else {
    plVar15 = plVar13;
    if (plVar13 == (long *)0x0) {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar15 = (long *)(lVar28 + 8);
      if (lVar14 != 0) {
        plVar15 = (long *)(lVar14 + 0xa8);
      }
      plVar15 = (long *)*plVar15;
      if (plVar15 == (long *)0x0) {
        plVar15 = (long *)0x0;
        goto LAB_03f316cc;
      }
    }
    plVar15 = (long *)(**(code **)(*plVar15 + 0x30))(plVar15,0x98,8);
  }
LAB_03f316cc:
  *(undefined2 *)(plVar15 + 1) = 0;
  *plVar15 = (long)(puVar11 + 0x10);
  *(undefined4 *)(plVar15 + 8) = 0;
  plVar15[9] = 0;
  plVar15[10] = 0;
  plVar15[2] = 0;
  plVar15[3] = 0;
  plVar15[4] = 0;
  plVar15[5] = 0;
  plVar15[6] = 0;
  plVar15[7] = 0;
  plVar15[0xd] = 0;
  plVar15[0xe] = 0;
  plVar15[0xb] = (long)(puVar9 + 0x10);
  plVar15[0xc] = 0;
  nn::os::InitializeLightEvent((LightEventType *)(plVar15 + 0xf),0,0);
  plVar15[0x11] = (long)(puVar30 + 0x10);
  plVar15[0x12] = (long)puVar1;
  nn::os::SignalLightEvent((LightEventType *)(plVar15 + 0xf));
  *(long **)(param_1 + 0x1d0) = plVar15;
  (**(code **)(*plVar15 + 0x20))(plVar15,&local_f8);
  *(undefined1 **)(param_1 + 0x308) = &LAB_03f31cd0;
  *(undefined1 **)(param_1 + 0x318) = &LAB_03f31ce0;
  *(undefined1 **)(param_1 + 0x328) = &LAB_03f31db0;
  *(undefined1 **)(param_1 + 0x338) = &LAB_03f31dc0;
  *(undefined1 **)(param_1 + 0x348) = &LAB_03f31e70;
  *(undefined1 **)(param_1 + 0x358) = &LAB_03f31e80;
  *(undefined1 **)(param_1 + 0x368) = &LAB_03f31fc0;
  *(undefined1 **)(param_1 + 0x378) = &LAB_03f31fd0;
  *(undefined1 **)(param_1 + 0x388) = &LAB_03f31ff0;
  *(undefined1 **)(param_1 + 0x398) = &LAB_03f32000;
  *(undefined1 **)(param_1 + 0x3a8) = &LAB_03f32130;
  *(undefined1 **)(param_1 + 0x3b8) = &LAB_03f32140;
  *(undefined1 **)(param_1 + 0x3d0) = &LAB_03f32160;
  *(undefined1 **)(param_1 + 0x3f0) = &LAB_03f32300;
  *(undefined1 **)(param_1 + 0x410) = &LAB_03f32410;
  *(undefined1 **)(param_1 + 0x430) = &LAB_03f32540;
  *(undefined1 **)(param_1 + 0x450) = &LAB_03f32a30;
  *(long *)(param_1 + 0x3c8) = param_1;
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  *(long *)(param_1 + 1000) = param_1;
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(long *)(param_1 + 0x408) = param_1;
  *(undefined8 *)(param_1 + 0x418) = 0;
  *(long *)(param_1 + 0x428) = param_1;
  *(undefined8 *)(param_1 + 0x438) = 0;
  *(long *)(param_1 + 0x448) = param_1;
  *(undefined8 *)(param_1 + 0x458) = 0;
  *(long *)(param_1 + 0x468) = param_1;
  *(undefined1 **)(param_1 + 0x470) = &LAB_03f32c70;
  *(undefined8 *)(param_1 + 0x478) = 0;
  piVar19 = (int *)(**(code **)(**(long **)(param_1 + 0x128) + 0x30))();
  if (*piVar19 < 0) {
LAB_03f318d0:
    uVar27 = *(uint *)(param_1 + 0x1e8);
    if (uVar27 != 0) goto LAB_03f318d8;
  }
  else {
    uVar27 = *piVar19 + 1;
    lVar28 = *(long *)PTR_DAT_04bb2698;
    if (lVar28 == 0) {
      pvVar20 = malloc((ulong)uVar27 << 3);
    }
    else {
      plVar15 = plVar13;
      if (plVar13 == (long *)0x0) {
        lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar15 = (long *)(lVar28 + 8);
        if (lVar14 != 0) {
          plVar15 = (long *)(lVar14 + 0xa8);
        }
        plVar15 = (long *)*plVar15;
        if (plVar15 == (long *)0x0) goto LAB_03f318d0;
      }
      pvVar20 = (void *)(**(code **)(*plVar15 + 0x30))(plVar15,(ulong)uVar27 << 3,8);
    }
    if (pvVar20 == (void *)0x0) goto LAB_03f318d0;
    *(uint *)(param_1 + 0x1e8) = uVar27;
    *(void **)(param_1 + 0x1f0) = pvVar20;
LAB_03f318d8:
    puVar1 = PTR_DAT_04bb3350;
    lVar28 = *(long *)(param_1 + 0x1f0);
    uVar16 = 0;
    puVar30 = PTR_DAT_04bdf148 + 0x10;
    do {
      lVar14 = *(long *)PTR_DAT_04bb2698;
      if (lVar14 == 0) {
        plVar15 = malloc(0x18);
      }
      else {
        plVar15 = plVar13;
        if (plVar13 == (long *)0x0) {
          lVar31 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
          plVar15 = (long *)(lVar14 + 8);
          if (lVar31 != 0) {
            plVar15 = (long *)(lVar31 + 0xa8);
          }
          plVar15 = (long *)*plVar15;
        }
        plVar15 = (long *)(**(code **)(*plVar15 + 0x30))(plVar15,0x18,8);
      }
      uVar4 = uVar16 + 1;
      uVar7 = uVar16 << 3;
      uVar8 = uVar16 >> 0x1f;
      *plVar15 = (long)puVar30;
      uVar16 = uVar4 & 0xffffffff;
      *(undefined1 *)(plVar15 + 1) = 2;
      plVar15[2] = 0;
      *(long **)(lVar28 + (-uVar8 & 0xfffffff800000000 | uVar7)) = plVar15;
    } while (uVar27 != (uint)uVar4);
  }
  puVar30 = PTR_DAT_04bb2020;
  local_f8 = (long *)(PTR_DAT_04bb2020 + 0x10);
  local_f0 = (long *)0x407480f;
  plVar15 = (long *)FUN_038c9744(0,&local_f8,plVar13,8,1,0);
  *(long **)(param_1 + 600) = plVar15;
  *(undefined4 *)(param_1 + 0x268) = 0x12;
  plVar17 = (long *)PTR_DAT_04bdf0e8;
  lVar28 = *(long *)PTR_DAT_04bb2698;
  if (lVar28 == 0) {
    pvVar20 = malloc(0x12);
    plVar17 = (long *)PTR_DAT_04bdf0e8;
  }
  else {
    if (plVar15 == (long *)0x0) {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar15 = (long *)(lVar28 + 8);
      if (lVar14 != 0) {
        plVar15 = (long *)(lVar14 + 0xa8);
      }
      plVar15 = (long *)*plVar15;
      pvVar20 = (void *)0x0;
      if (plVar15 == (long *)0x0) goto LAB_03f31a38;
    }
    pvVar20 = (void *)(**(code **)(*plVar15 + 0x30))(plVar15,0x12,0x20);
  }
LAB_03f31a38:
  *(void **)(param_1 + 0x260) = pvVar20;
  uVar21 = (**(code **)(**(long **)(param_1 + 600) + 0x30))(*(long **)(param_1 + 600),0x200000,0x20)
  ;
  lVar28 = *(long *)PTR_DAT_04bb2698;
  if (lVar28 == 0) {
    pvVar20 = malloc(0x228);
  }
  else {
    plVar15 = *(long **)(param_1 + 600);
    if (plVar15 == (long *)0x0) {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar15 = (long *)(lVar28 + 8);
      if (lVar14 != 0) {
        plVar15 = (long *)(lVar14 + 0xa8);
      }
      plVar15 = (long *)*plVar15;
    }
    pvVar20 = (void *)(**(code **)(*plVar15 + 0x30))(plVar15,0x228,8);
  }
  local_f8 = (long *)CONCAT44(local_f8._4_4_,4);
  FUN_038d76ec(pvVar20,0x80000,0x13,*(undefined8 *)(param_1 + 600),uVar21,&local_f8);
  *(void **)(param_1 + 0x270) = pvVar20;
  lVar28 = *(long *)PTR_DAT_04bb2698;
  if (lVar28 == 0) {
    pvVar20 = malloc(0x240);
  }
  else {
    plVar15 = *(long **)(param_1 + 600);
    if (plVar15 == (long *)0x0) {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar15 = (long *)(lVar28 + 8);
      if (lVar14 != 0) {
        plVar15 = (long *)(lVar14 + 0xa8);
      }
      plVar15 = (long *)*plVar15;
    }
    pvVar20 = (void *)(**(code **)(*plVar15 + 0x30))(plVar15,0x240,8);
  }
  local_f8 = (long *)CONCAT44(local_f8._4_4_,4);
  FUN_03f38194(pvVar20,0xd0000,0x13,*(undefined8 *)(param_1 + 600),uVar21,&local_f8);
  *(void **)(param_1 + 0x278) = pvVar20;
  (**(code **)(**(long **)(param_1 + 600) + 0x28))();
  if (*(char *)(param_2 + 0x10) != '\0') {
    local_e0 = *(char **)(param_2 + 8);
    local_e8 = (undefined8 *)(puVar30 + 0x10);
    local_f8 = plVar13;
    local_f0 = (long *)(param_1 + 0x18);
    FUN_03f3c8dc(param_1 + 0x820,&local_f8);
  }
  (**(code **)(*plVar13 + 0x28))(plVar13);
  lVar28 = *plVar17;
  *(long **)(param_1 + 0x10) = plVar13;
  if (lVar28 != 0) {
    (**(code **)(*(long *)(param_1 + 0x998) + 0x20))(param_1 + 0x998,&local_f8);
    uVar21 = nn::os::GetSystemTick();
    *(undefined8 *)(param_1 + 0xa70) = uVar21;
  }
  return;
}


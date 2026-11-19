
undefined8
FUN_03964d20(long param_1,long param_2,long param_3,undefined4 param_4,long *param_5,long param_6,
            uint param_7)

{
  uint *puVar1;
  long *plVar2;
  undefined *puVar3;
  ushort uVar4;
  undefined8 uVar5;
  uint uVar6;
  ushort uVar7;
  ushort uVar8;
  bool bVar9;
  uint uVar10;
  char *__dest;
  undefined *puVar11;
  long *plVar12;
  uint uVar13;
  long lVar14;
  undefined4 *puVar15;
  void *pvVar16;
  undefined8 *puVar17;
  long *plVar18;
  char cVar19;
  long lVar20;
  undefined *puVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  undefined8 uVar29;
  long *plVar30;
  int iVar31;
  char *pcVar32;
  char *pcVar33;
  ulong uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 in_stack_fffffffffffff8b0;
  undefined8 in_stack_fffffffffffff8b8;
  undefined *local_6e0;
  char *local_6d8;
  undefined *local_6d0;
  char *local_6c8;
  uint local_6c0;
  char local_6bc [255];
  undefined1 local_5bd;
  undefined2 local_5b8 [2];
  uint local_5b4;
  undefined *local_540;
  undefined8 local_538;
  undefined8 local_530;
  uint local_528;
  undefined8 local_524;
  undefined *local_518;
  char *local_510;
  uint local_508;
  char local_504 [255];
  undefined1 local_405;
  undefined8 local_100;
  long *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  char *local_b8;
  char *pcStack_b0;
  undefined *local_a8;
  undefined8 uStack_a0;
  void **local_98;
  undefined4 local_90;
  uint local_8c;
  uint local_88;
  undefined4 uStack_84;
  undefined1 local_80;
  void *local_78;
  undefined4 local_70;
  
  uVar24 = (undefined4)((ulong)in_stack_fffffffffffff8b0 >> 0x20);
  uVar13 = (uint)((ulong)in_stack_fffffffffffff8b8 >> 0x20);
  lVar28 = *(long *)(param_1 + 8);
  if (param_6 != 0) {
    lVar28 = param_6;
  }
  uVar6 = *(uint *)(*(long *)(param_3 + 0x20) + 0x58);
  if (uVar6 != 0xffffffff) {
    lVar25 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar25 + 0x5c8) >> 3 & 1) == 0) {
      uVar10 = uVar6 - *(ushort *)(lVar25 + 0x3da);
      if (*(uint *)(lVar25 + 0x368) <= uVar10) {
        uVar10 = 0;
      }
      if ((*(uint *)(*(long *)(lVar25 + 0x370) + (long)(int)uVar10 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar6 & 0x3f);
        goto LAB_03964e04;
      }
    }
    if ((*(uint *)(lVar25 + 0x5c8) >> 5 & 1) == 0) {
      uVar22 = 0x112;
      uVar23 = 0x12;
    }
    else {
      uVar22 = 0x111;
      uVar23 = 0x11;
    }
    if ((*(uint *)(lVar25 + 800) & 2) != 0) {
      uVar23 = uVar22;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar23);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_03964e04:
  puVar11 = PTR_DAT_04bbd7c0;
  uVar29 = *(undefined8 *)(param_2 + 0xb8);
  lVar25 = *(long *)PTR_DAT_04bbd7c0;
  nn::os::LockMutex((MutexType *)(lVar25 + 0x118));
  local_518 = (undefined *)(**(code **)PTR_DAT_04bcf108)(uVar29);
  (**(code **)PTR_DAT_04bcf4f8)(*(undefined8 *)(*(long *)puVar11 + 0x38),1,&local_518);
  (**(code **)PTR_DAT_04bcf508)(*(undefined8 *)(*(long *)puVar11 + 0x38));
  (**(code **)PTR_DAT_04bcf100)(uVar29);
  nn::os::UnlockMutex((MutexType *)(lVar25 + 0x118));
  puVar21 = PTR_DAT_04bbd510;
  puVar11 = PTR_DAT_04bb2020;
  lVar25 = *(long *)(param_3 + 0x20);
  if (*(char *)(param_1 + 0x5b8) != '\0') {
    iVar31 = *(int *)(param_1 + 0x600);
    if (1 < iVar31) {
      if (iVar31 == 2) {
        if (*(long *)(param_1 + 0x618) != 0) {
          FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510);
          iVar31 = *(int *)(param_1 + 0x600);
          goto LAB_03964ee4;
        }
      }
      else {
LAB_03964ee4:
        if ((iVar31 == 3) && (*(long *)(param_1 + 0x620) != 0)) {
          FUN_039499cc(*(undefined8 *)puVar21);
        }
      }
      uVar7 = *(ushort *)(lVar25 + 0x38);
      local_510 = "screen_shot";
      uVar8 = *(ushort *)(lVar25 + 0x3a);
      lVar28 = *(long *)puVar21;
      if (uVar7 < 2) {
        uVar7 = 1;
      }
      local_518 = puVar11 + 0x10;
      uVar4 = uVar8;
      if (*(short *)(lVar25 + 0x42) != 3) {
        uVar4 = 1;
      }
      if (uVar4 <= uVar8) {
        uVar4 = uVar8;
      }
      lVar14 = FUN_03948e10(lVar28,param_2,lVar28 + 0x7c0,&local_518,*(undefined2 *)(lVar25 + 0xa0),
                            1,uVar7,uVar4,CONCAT44(uVar24,1),(ulong)uVar13 << 0x20,1,0,0,3,0,0);
      puVar11 = PTR_DAT_04bcf220;
      if (lVar14 == 0) {
        FUN_006e9454(&local_518,&DAT_040798d1);
        uVar29 = 0;
      }
      else {
        local_518 = (undefined *)0x0;
        local_6d0 = (undefined *)0x0;
        uVar7 = *(ushort *)(lVar25 + 0x3a);
        local_504[0] = '\x01';
        local_504[1] = '\0';
        local_504[2] = '\0';
        local_504[3] = '\0';
        uVar13 = (uint)*(ushort *)(lVar25 + 0x38);
        if (*(ushort *)(lVar25 + 0x38) < 2) {
          uVar13 = 1;
        }
        uVar8 = *(ushort *)(lVar14 + 0x32);
        local_510 = (char *)((ulong)uVar13 << 0x20);
        local_508 = (uint)uVar7;
        if (*(short *)(lVar25 + 0x42) != 3) {
          local_508 = 1;
        }
        if (local_508 == uVar7 || local_508 < uVar7) {
          local_508 = (uint)uVar7;
        }
        uVar13 = (uint)*(ushort *)(lVar14 + 0x30);
        if (*(ushort *)(lVar14 + 0x30) < 2) {
          uVar13 = 1;
        }
        local_6c0 = (uint)uVar8;
        if (*(short *)(lVar14 + 0x3a) != 3) {
          local_6c0 = 1;
        }
        local_6c8 = (char *)((ulong)uVar13 << 0x20);
        if (local_6c0 == uVar8 || local_6c0 < uVar8) {
          local_6c0 = (uint)uVar8;
        }
        local_6bc[0] = '\x01';
        local_6bc[1] = '\0';
        local_6bc[2] = '\0';
        local_6bc[3] = '\0';
        (**(code **)PTR_DAT_04bcf220)(local_5b8);
        puVar21 = PTR_DAT_04bcf228;
        (**(code **)PTR_DAT_04bcf228)(local_5b8,0,1);
        (**(code **)puVar11)(&local_c0);
        (**(code **)puVar21)(&local_c0,0,1);
        lVar20 = *(long *)PTR_DAT_04bc1010;
        uVar13 = *(int *)(lVar25 + 0x58) - (uint)*(ushort *)(lVar20 + 0x3da);
        if (*(uint *)(lVar20 + 0x368) <= uVar13) {
          uVar13 = 0;
        }
        uVar6 = *(int *)(lVar14 + 0x50) - (uint)*(ushort *)(lVar20 + 0x3da);
        if (*(uint *)(lVar20 + 0x368) <= uVar6) {
          uVar6 = 0;
        }
        (**(code **)PTR_DAT_04bcf230)
                  (*(undefined8 *)(param_2 + 0xb8),
                   *(undefined8 *)(*(long *)(lVar20 + 0x370) + (long)(int)uVar13 * 0x20 + 0x18),
                   local_5b8,&local_518,
                   *(undefined8 *)(*(long *)(lVar20 + 0x370) + (long)(int)uVar6 * 0x20 + 0x18),
                   &local_c0,&local_6d0,0);
        if (*(int *)(param_1 + 0x600) == 3) {
          *(long *)(param_1 + 0x620) = lVar14;
          uVar29 = 1;
        }
        else if (*(int *)(param_1 + 0x600) == 2) {
          *(long *)(param_1 + 0x618) = lVar14;
          uVar29 = 1;
        }
        else {
          FUN_039499cc(lVar28,lVar14);
          uVar29 = 1;
        }
      }
      goto LAB_03965e20;
    }
  }
  lVar14 = *(long *)PTR_DAT_04bbd510;
  uVar7 = *(ushort *)(lVar25 + 0x38);
  uVar8 = *(ushort *)(lVar25 + 0x3a);
  local_510 = "screen_shot";
  if (uVar7 < 2) {
    uVar7 = 1;
  }
  local_518 = PTR_DAT_04bb2020 + 0x10;
  uVar4 = uVar8;
  if (*(short *)(lVar25 + 0x42) != 3) {
    uVar4 = 1;
  }
  if (uVar4 <= uVar8) {
    uVar4 = uVar8;
  }
  puVar15 = (undefined4 *)
            FUN_03948e10(lVar14,param_2,lVar14 + 0x7c0,&local_518,0x1d,1,uVar7,uVar4,
                         CONCAT44(uVar24,1),(ulong)uVar13 << 0x20,1,0,0,2,0,0);
  puVar11 = PTR_DAT_04bcf030;
  lVar20 = *(long *)(puVar15 + 2);
  if (lVar20 != 0) {
    uVar24 = puVar15[0x10];
    uVar23 = *puVar15;
    uVar13 = (**(code **)PTR_DAT_04bcf030)(lVar20);
    if ((uVar13 >> 2 & 1) != 0) {
      (**(code **)PTR_DAT_04bcf358)(lVar20,uVar23,uVar24);
    }
  }
  lVar20 = *(long *)(puVar15 + 8);
  if (lVar20 != 0) {
    uVar24 = puVar15[6];
    uVar23 = puVar15[0x11];
    uVar13 = (**(code **)puVar11)(lVar20);
    if ((uVar13 >> 2 & 1) != 0) {
      (**(code **)PTR_DAT_04bcf358)(lVar20,uVar24,uVar23);
    }
  }
  *(undefined4 *)(param_1 + 0x390) = *(undefined4 *)(lVar25 + 8);
  *(undefined4 *)(param_1 + 0x394) = *(undefined4 *)(lVar25 + 0xc);
  *(undefined8 *)(param_1 + 0x398) = *(undefined8 *)(lVar25 + 0x10);
  *(undefined8 *)(param_1 + 0x3a0) = *(undefined8 *)(lVar25 + 0x18);
  *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(lVar25 + 0x20);
  *(undefined4 *)(param_1 + 0x3ac) = *(undefined4 *)(lVar25 + 0x24);
  *(undefined8 *)(param_1 + 0x3b0) = *(undefined8 *)(lVar25 + 0x28);
  *(undefined8 *)(param_1 + 0x3b8) = *(undefined8 *)(lVar25 + 0x30);
  uVar26 = *(undefined8 *)(lVar25 + 0x48);
  uVar29 = *(undefined8 *)(lVar25 + 0x38);
  uVar5 = *(undefined8 *)(lVar25 + 0x40);
  *(undefined8 *)(param_1 + 0x3d7) = *(undefined8 *)(lVar25 + 0x4f);
  *(undefined8 *)(param_1 + 0x3d0) = uVar26;
  *(undefined8 *)(param_1 + 0x3c8) = uVar5;
  *(undefined8 *)(param_1 + 0x3c0) = uVar29;
  FUN_038fd1e0(param_1 + 0x3e0);
  FUN_038fd2f0(param_1 + 0x3e0,lVar25 + 0x58);
  uVar24 = *(undefined4 *)(lVar25 + 0xa0);
  *(undefined8 *)(param_1 + 0x420) = *(undefined8 *)(lVar25 + 0x98);
  puVar1 = (uint *)(param_1 + 0x464);
  *(undefined4 *)(param_1 + 0x428) = uVar24;
  do {
    cVar19 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = *puVar1 | 1;
      cVar19 = ExclusiveMonitorsStatus();
    }
  } while (cVar19 != '\0');
  FUN_01560750(param_1 + 0x4d8,puVar15,*(undefined1 *)(param_1 + 0x596),
               *(undefined2 *)(param_1 + 0x594));
  *(undefined8 *)(param_1 + 0x480) = 0;
  local_530 = 0xff7fffffff7fffff;
  local_538 = 0x7f7fffff7f7fffff;
  fVar35 = (float)uVar7;
  local_540 = PTR_DAT_04bd0f08 + 0x10;
  fVar37 = (float)uVar4;
  local_528 = *(uint *)PTR_DAT_04bd0ea8;
  local_524 = 0x3f80000000000000;
  *(float *)(param_1 + 0x488) = fVar35;
  *(float *)(param_1 + 0x478) = fVar35;
  *(float *)(param_1 + 0x48c) = fVar37;
  *(float *)(param_1 + 0x47c) = fVar37;
  if (local_528 < 6) {
    if ((1 << (ulong)(local_528 & 0x1f) & 0x39U) == 0) {
      fVar36 = fVar35;
    }
    else {
      fVar36 = fVar37;
      fVar37 = fVar35;
    }
    local_538 = 0;
    local_530 = CONCAT44(fVar36,fVar37);
  }
  FUN_038e77e4(&local_540,param_2,param_1 + 0x470);
  (**(code **)(*(long *)(param_1 + 0x470) + 0x38))(param_1 + 0x470,param_2);
  FUN_038e4cec(local_5b8);
  local_5b8[0] = 0;
  local_5b4 = local_5b4 & 0xfffffffe;
  FUN_038e4d90(local_5b8,param_2);
  if ((*(char *)(param_1 + 0x388) == '\0') || (*(char *)(param_1 + 0x60c) != '\0')) {
    uVar29 = *(undefined8 *)
              (*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x28) + 8) + 0x28);
    FUN_03907810(uVar29,param_2);
    FUN_0394a420(param_2,uVar29,param_1 + 0x390);
  }
  else {
    FUN_0394c5f0(0x3ee8ba2e,param_2,param_1 + 0x390);
  }
  uVar13 = *(uint *)(param_1 + 0x530);
  if (uVar13 != 0xffffffff) {
    lVar25 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar25 + 0x5c8) >> 3 & 1) == 0) {
      uVar6 = uVar13 - *(ushort *)(lVar25 + 0x3da);
      if (*(uint *)(lVar25 + 0x368) <= uVar6) {
        uVar6 = 0;
      }
      if ((*(uint *)(*(long *)(lVar25 + 0x370) + (long)(int)uVar6 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar13 & 0x3f);
        goto LAB_039654a8;
      }
    }
    if ((*(uint *)(lVar25 + 0x5c8) >> 5 & 1) == 0) {
      uVar23 = 0x112;
      uVar24 = 0x12;
    }
    else {
      uVar23 = 0x111;
      uVar24 = 0x11;
    }
    if ((*(uint *)(lVar25 + 800) & 2) != 0) {
      uVar24 = uVar23;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar24);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_039654a8:
  puVar11 = PTR_DAT_04bbd7c0;
  uVar29 = *(undefined8 *)(param_2 + 0xb8);
  lVar25 = *(long *)PTR_DAT_04bbd7c0;
  nn::os::LockMutex((MutexType *)(lVar25 + 0x118));
  local_518 = (undefined *)(**(code **)PTR_DAT_04bcf108)(uVar29);
  (**(code **)PTR_DAT_04bcf4f8)(*(undefined8 *)(*(long *)puVar11 + 0x38),1,&local_518);
  (**(code **)PTR_DAT_04bcf508)(*(undefined8 *)(*(long *)puVar11 + 0x38));
  (**(code **)PTR_DAT_04bcf100)(uVar29);
  nn::os::UnlockMutex((MutexType *)(lVar25 + 0x118));
  puVar21 = PTR_DAT_04bb4520;
  puVar11 = PTR_PTR_04bb2238;
  local_5bd = 0;
  local_6c0 = 0x100;
  local_6d0 = PTR_DAT_04bb4520 + 0x10;
  local_6c8 = local_6bc;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  pcVar32 = *(char **)(puVar11 + 8);
  if (local_6bc != pcVar32) {
    (**(code **)(*(long *)puVar11 + 0x18))(puVar11);
    lVar25 = 0;
    do {
      if (*(char *)(*(long *)(puVar11 + 8) + lVar25) == '\0') goto LAB_039655fc;
      lVar20 = *(long *)(puVar11 + 8) + lVar25;
      if (*(char *)(lVar20 + 1) == '\0') {
        lVar25 = lVar25 + 1;
        goto LAB_039655fc;
      }
      if (*(char *)(lVar20 + 2) == '\0') {
        lVar25 = lVar25 + 2;
        goto LAB_039655fc;
      }
      lVar25 = lVar25 + 3;
    } while (lVar25 != 0x80001);
    lVar25 = 0;
LAB_039655fc:
    iVar31 = (int)lVar25;
    if ((int)local_6c0 <= (int)lVar25) {
      iVar31 = local_6c0 + -1;
    }
    memcpy(local_6bc,pcVar32,(long)iVar31);
    local_6bc[iVar31] = '\0';
  }
  pcVar32 = local_6c8;
  puVar11 = PTR_DAT_04bb21f8;
  local_6d0 = PTR_DAT_04bb21f8 + 0x10;
  if ((param_7 & 1) == 0) {
    pvVar16 = (void *)(**(code **)(*param_5 + 0x18))(param_5);
    pcVar33 = (char *)param_5[1];
    if (pcVar32 != pcVar33) {
      (**(code **)(*param_5 + 0x18))(param_5);
      lVar25 = 0;
      do {
        if (*(char *)(param_5[1] + lVar25) == '\0') goto LAB_039656fc;
        lVar20 = param_5[1] + lVar25;
        if (*(char *)(lVar20 + 1) == '\0') {
          lVar25 = lVar25 + 1;
          goto LAB_039656fc;
        }
        if (*(char *)(lVar20 + 2) == '\0') {
          lVar25 = lVar25 + 2;
          goto LAB_039656fc;
        }
        lVar25 = lVar25 + 3;
      } while (lVar25 != 0x80001);
      lVar25 = 0;
LAB_039656fc:
      iVar31 = (int)lVar25;
      if ((int)local_6c0 <= (int)lVar25) {
        iVar31 = local_6c0 + -1;
      }
      pvVar16 = memcpy(pcVar32,pcVar33,(long)iVar31);
      pcVar32[iVar31] = '\0';
    }
  }
  else {
    plVar30 = (long *)(param_1 + 0x638) + (ulong)*(uint *)(param_1 + 0x604) * 4;
    if (3 < *(uint *)(param_1 + 0x604)) {
      plVar30 = (long *)(param_1 + 0x638);
    }
    (**(code **)(*plVar30 + 0x18))(plVar30);
    lVar25 = plVar30[1];
    pvVar16 = (void *)FUN_006e9528(&local_518,&DAT_040cc38c,lVar25,lVar25,lVar25);
  }
  if ((*(int *)(param_1 + 0x600) == 1) && (*(char *)(param_1 + 0x5b8) != '\0')) {
    local_405 = 0;
    local_508 = 0x100;
    local_518 = puVar21 + 0x10;
    local_510 = local_504;
    (**(code **)(local_6d0 + 0x18))(&local_6d0);
    pcVar32 = local_6c8;
    if (local_504 != local_6c8) {
      (**(code **)(local_6d0 + 0x18))(&local_6d0);
      lVar25 = 0;
      do {
        if (local_6c8[lVar25] == '\0') goto LAB_039657cc;
        if (local_6c8[lVar25 + 1] == '\0') {
          lVar25 = lVar25 + 1;
          goto LAB_039657cc;
        }
        if (local_6c8[lVar25 + 2] == '\0') {
          lVar25 = lVar25 + 2;
          goto LAB_039657cc;
        }
        lVar25 = lVar25 + 3;
      } while (lVar25 != 0x80001);
      lVar25 = 0;
LAB_039657cc:
      iVar31 = (int)lVar25;
      if ((int)local_508 <= (int)lVar25) {
        iVar31 = local_508 + -1;
      }
      memcpy(local_504,pcVar32,(long)iVar31);
      local_504[iVar31] = '\0';
    }
    local_518 = puVar11 + 0x10;
    local_78 = (void *)0x0;
    local_6e0 = PTR_DAT_04bb2020 + 0x10;
    local_6d8 = local_510;
    cVar19 = *(char *)(param_1 + 0x10);
    FUN_038e9970(&local_78);
    local_f0 = (long *)0x0;
    local_e8 = (ulong)local_e8._4_4_ << 0x20;
    local_100 = (undefined *)0x1000007b2;
    local_f8 = (long *)0x400000001;
    FUN_038e96b0(&local_78,&local_100);
    lVar25 = 0;
    plVar30 = (long *)(param_1 + 0x638);
LAB_03965874:
    plVar18 = plVar30 + lVar25 * 4;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    FUN_03965f44(&local_c0,&DAT_04098d1e,plVar18[1]);
    (**(code **)(local_6e0 + 0x18))(&local_6e0);
    uVar34 = 0;
    do {
      if (local_6d8[uVar34] == '\0') goto LAB_039658f4;
      if (local_6d8[uVar34 + 1] == '\0') {
        uVar34 = uVar34 + 1;
        goto LAB_039658f4;
      }
      if (local_6d8[uVar34 + 2] == '\0') {
        uVar34 = uVar34 + 2;
        goto LAB_039658f4;
      }
      uVar34 = uVar34 + 3;
    } while (uVar34 != 0x80001);
    uVar34 = 0;
LAB_039658f4:
    (**(code **)(local_c0 + 0x18))(&local_c0);
    lVar20 = 0;
    do {
      iVar31 = (int)uVar34;
      if (local_b8[lVar20] == '\0') {
LAB_03965944:
        uVar13 = iVar31 - (int)lVar20;
        if ((int)uVar13 < 0) goto LAB_03965868;
LAB_0396595c:
        uVar34 = (ulong)uVar13;
        if ((int)lVar20 < 1) goto LAB_039659d0;
        goto LAB_03965968;
      }
      if (local_b8[lVar20 + 1] == '\0') {
        lVar20 = lVar20 + 1;
        goto LAB_03965944;
      }
      if (local_b8[lVar20 + 2] == '\0') {
        lVar20 = lVar20 + 2;
        uVar13 = iVar31 - (int)lVar20;
        if (-1 < (int)uVar13) goto LAB_0396595c;
        goto LAB_03965868;
      }
      lVar20 = lVar20 + 3;
    } while (lVar20 != 0x80001);
    if (iVar31 < 0) goto LAB_03965868;
LAB_039659d0:
    (**(code **)(local_c0 + 0x18))(&local_c0);
    iVar31 = (int)uVar34;
    __dest = local_6c8;
joined_r0x03965864:
    local_6c8 = __dest;
    if (0 < iVar31) {
      (**(code **)(local_6e0 + 0x18))(&local_6e0);
      if (__dest != local_6d8) {
        iVar31 = (int)uVar34;
        if ((int)local_6c0 <= (int)uVar34) {
          iVar31 = local_6c0 + -1;
        }
        memcpy(__dest,local_6d8,(long)iVar31);
        __dest[iVar31] = '\0';
      }
      goto LAB_03965a5c;
    }
LAB_03965868:
    lVar25 = lVar25 + 1;
    if (lVar25 == 4) goto LAB_03965a30;
    goto LAB_03965874;
  }
  goto LAB_03965af4;
  while( true ) {
    pcVar33 = local_b8;
    lVar27 = lVar20;
    while( true ) {
      lVar27 = lVar27 + -1;
      if (pcVar32[uVar34] != *pcVar33) break;
      if ((pcVar32[uVar34] == '\0') || (pcVar32 = pcVar32 + 1, pcVar33 = pcVar33 + 1, lVar27 == 0))
      goto joined_r0x03965864;
    }
    uVar34 = uVar34 - 1;
    if (iVar31 < 1) break;
LAB_03965968:
    pcVar32 = local_6d8;
    pcVar33 = local_6d8 + uVar34;
    (**(code **)(local_c0 + 0x18))(&local_c0);
    iVar31 = (int)uVar34;
    __dest = local_6c8;
    if (pcVar33 == local_b8) goto joined_r0x03965864;
  }
  goto LAB_03965868;
LAB_03965a30:
  local_c0 = PTR_DAT_04bb2020 + 0x10;
  local_b8 = "capture";
  (**(code **)(local_6d0 + 0x10))(&local_6d0,&local_c0);
LAB_03965a5c:
  uVar34 = local_e8;
  plVar12 = local_f0;
  plVar18 = local_f8;
  puVar11 = local_100;
  uVar13 = *(uint *)(param_1 + 0x604);
  uVar24 = local_100._4_4_;
  uVar23 = local_f0._4_4_;
  if ((int)uVar13 < 2) {
    plVar2 = plVar30 + (ulong)uVar13 * 4;
    if (3 < uVar13) {
      plVar2 = plVar30;
    }
    (**(code **)(*plVar2 + 0x18))(plVar2);
    puVar21 = (undefined *)plVar2[1];
  }
  else {
    puVar21 = &DAT_040bf31a;
  }
  puVar3 = &DAT_040c7526;
  if (cVar19 != '\0') {
    puVar3 = &DAT_04100db4;
  }
  pvVar16 = (void *)FUN_038d13f0(&local_6d0,"_%04d_%02d%02d_%02d%02d%02d%s.%s",
                                 (ulong)puVar11 & 0xffffffff,uVar24,(ulong)plVar18 & 0xffffffff,
                                 (ulong)plVar12 & 0xffffffff,uVar23,uVar34 & 0xffffffff,puVar3,
                                 puVar21);
LAB_03965af4:
  uVar7 = *(ushort *)((long)puVar15 + 0x32);
  uVar13 = *(uint *)(param_1 + 0x604);
  local_c0 = (undefined *)CONCAT44(uVar13,(undefined4)local_c0);
  local_b8 = PTR_DAT_04bb2020 + 0x10;
  local_8c = (uint)*(ushort *)(puVar15 + 0xc);
  if (*(ushort *)(puVar15 + 0xc) < 2) {
    local_8c = 1;
  }
  pcStack_b0 = local_6c8;
  local_80 = *(undefined1 *)(param_1 + 0x388);
  local_88 = (uint)uVar7;
  if (*(short *)((long)puVar15 + 0x3a) != 3) {
    local_88 = 1;
  }
  local_90 = *(undefined4 *)(param_1 + 0x1c);
  if (local_88 == uVar7 || local_88 < uVar7) {
    local_88 = (uint)uVar7;
  }
  lVar25 = param_1 + 0x638 + (ulong)uVar13 * 0x20;
  if (3 < uVar13) {
    lVar25 = param_1 + 0x638;
  }
  uStack_a0 = *(undefined8 *)(lVar25 + 8);
  local_98 = &local_78;
  local_a8 = local_b8;
  uStack_84 = param_4;
  if (*(char *)(param_1 + 0x20) == '\0') {
    if (uVar13 == 1) {
      uVar34 = FUN_03966700(pvVar16,&local_78,1,puVar15,param_1 + 0x628,lVar28,lVar28);
    }
    else {
      uVar34 = FUN_03966080(pvVar16,&local_78,param_4,1,puVar15,lVar28,lVar28);
    }
joined_r0x03965c1c:
    if ((uVar34 & 1) == 0) goto LAB_03965dd0;
LAB_03965c20:
    puVar17 = *(undefined8 **)(param_1 + 0x5d0);
    if (((puVar17 != (undefined8 *)0x0) && (1 < *(int *)(param_1 + 0x604))) &&
       ((*(byte *)(param_1 + 0x5f8) & 1) != 0)) {
      local_c0 = (undefined *)((ulong)local_c0 & 0xffffffff00000000);
      (**(code **)*puVar17)(puVar17,&local_c0);
    }
    (**(code **)(local_6d0 + 0x18))(&local_6d0);
    (**(code **)(local_6d0 + 0x18))(&local_6d0);
    puVar11 = PTR_DAT_04bb60d8;
    if ((local_6c8 == "") || (*local_6c8 == '\0')) goto LAB_03965dd0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_f0 = (long *)0x0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_100 = PTR_DAT_04bb60d8 + 0x10;
    local_c8 = 0;
    local_f8 = (long *)0x0;
    plVar30 = *(long **)(*(long *)PTR_DAT_04bd0fe0 + 8);
    if (((char)plVar30[0xf] == '\0') ||
       (uVar34 = (**(code **)(*plVar30 + 0x20))(plVar30), (uVar34 & 1) == 0)) {
LAB_03965e48:
      if (*(char *)(param_1 + 0x5b8) != '\0') {
        (**(code **)(local_6d0 + 0x18))(&local_6d0);
        FUN_006e9454(&local_518,&DAT_040d6ee8,local_6c8);
      }
      pvVar16 = local_78;
      uVar29 = 0;
      if (local_78 != (void *)0x0) {
        if (*(long *)PTR_DAT_04bb2698 == 0) {
          free(local_78);
        }
        else {
          plVar30 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,local_78);
          if (plVar30 != (long *)0x0) {
            (**(code **)(*plVar30 + 0x38))(plVar30,pvVar16);
            uVar29 = 0;
            goto LAB_03965ebc;
          }
        }
        uVar29 = 0;
      }
    }
    else {
      local_c8 = 0;
      plVar18 = (long *)(**(code **)(*plVar30 + 0x68))(plVar30,&local_100,&local_6d0,1);
      pvVar16 = local_78;
      local_f8 = plVar18;
      if (plVar18 == (long *)0x0) goto LAB_03965e48;
      local_518 = (undefined *)((ulong)local_518 & 0xffffffff00000000);
      cVar19 = (char)plVar18[0xf];
      local_f0 = plVar30;
      if ((local_78 != (void *)0x0) && (cVar19 != '\0')) {
        uVar34 = (**(code **)(*plVar18 + 0x48))(plVar18,&local_100);
        if ((uVar34 & 1) != 0) {
          (**(code **)(*plVar18 + 0x98))(plVar18,&local_518,&local_100,pvVar16,local_70);
        }
        cVar19 = (char)plVar18[0xf];
      }
      if (((cVar19 != '\0') &&
          (uVar34 = (**(code **)(*plVar18 + 0x48))(plVar18,&local_100), (uVar34 & 1) != 0)) &&
         (uVar34 = (**(code **)(*plVar18 + 0x70))(plVar18,&local_100), (uVar34 & 1) != 0)) {
        local_f8 = (long *)0x0;
        local_f0 = (long *)0x0;
      }
      pvVar16 = local_78;
      if (local_78 != (void *)0x0) {
        if (*(long *)PTR_DAT_04bb2698 == 0) {
          free(local_78);
        }
        else {
          plVar30 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,local_78);
          if (plVar30 != (long *)0x0) {
            (**(code **)(*plVar30 + 0x38))(plVar30,pvVar16);
          }
        }
      }
      puVar17 = *(undefined8 **)(param_1 + 0x5d0);
      uVar29 = 1;
      if (((puVar17 != (undefined8 *)0x0) && (1 < *(int *)(param_1 + 0x604))) &&
         ((*(byte *)(param_1 + 0x5f8) >> 1 & 1) != 0)) {
        local_c0 = (undefined *)CONCAT44(local_c0._4_4_,1);
        (**(code **)*puVar17)(puVar17,&local_c0);
      }
    }
LAB_03965ebc:
    plVar30 = local_f0;
    local_100 = puVar11 + 0x10;
    if (((local_f0 != (long *)0x0) && ((char)local_f0[0xf] != '\0')) &&
       (uVar34 = (**(code **)(*local_f0 + 0x48))(local_f0,&local_100), (uVar34 & 1) != 0)) {
      (**(code **)(*plVar30 + 0x70))(plVar30,&local_100);
    }
  }
  else {
    if (uVar13 != 1) {
      uVar34 = FUN_03966080(pvVar16,&local_78,param_4,1,puVar15,lVar28,
                            *(undefined8 *)(*(long *)PTR_DAT_04bb4e50 + 0x58));
      goto joined_r0x03965c1c;
    }
    uVar34 = FUN_03966700(pvVar16,&local_78,1,puVar15,param_1 + 0x628,lVar28,
                          *(undefined8 *)(*(long *)PTR_DAT_04bb4e50 + 0x58));
    if ((uVar34 & 1) != 0) goto LAB_03965c20;
LAB_03965dd0:
    pvVar16 = local_78;
    uVar29 = 0;
    if (local_78 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(local_78);
      }
      else {
        plVar30 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,local_78);
        if (plVar30 != (long *)0x0) {
          (**(code **)(*plVar30 + 0x38))(plVar30,pvVar16);
        }
      }
      uVar29 = 0;
    }
  }
  FUN_039499cc(lVar14,puVar15);
LAB_03965e20:
  *(undefined1 *)(param_1 + 0x5b8) = 0;
  return uVar29;
}


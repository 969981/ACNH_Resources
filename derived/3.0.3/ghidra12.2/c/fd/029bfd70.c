
void FUN_029bfd70(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  MutexType *pMVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char cVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  int iVar16;
  undefined *puVar17;
  bool bVar18;
  bool bVar19;
  int iVar20;
  undefined8 uVar21;
  long *plVar22;
  ulong uVar23;
  long *plVar24;
  char *pcVar25;
  long lVar26;
  long *plVar27;
  long lVar28;
  uint *puVar29;
  long lVar30;
  byte *pbVar31;
  undefined8 *puVar32;
  uint uVar33;
  long *plVar34;
  long *plVar35;
  long lVar36;
  undefined4 uVar37;
  float fVar38;
  float fVar39;
  long *local_168;
  char *local_138;
  undefined *local_128;
  char *local_120;
  undefined4 local_118;
  char local_114 [63];
  undefined1 local_d5;
  undefined *local_d0;
  char *local_c8;
  undefined4 local_c0;
  char local_bc [8];
  char acStack_b4 [5];
  undefined2 local_af;
  char cStack_ad;
  char cStack_ac;
  char cStack_ab;
  char cStack_aa;
  char cStack_a9;
  char cStack_a8;
  char local_a7;
  undefined2 uStack_a6;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined1 local_7d;
  
  if ('\0' < *(char *)(param_1 + 0xe)) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + -1;
  }
  lVar26 = *(long *)PTR_DAT_04bb26a8;
  nn::os::LockMutex((MutexType *)(lVar26 + 0x89660));
  iVar20 = *(int *)(lVar26 + 0x8962c);
  iVar6 = *(int *)(lVar26 + 0x89630);
  sVar12 = *(short *)(lVar26 + 0x895e0);
  sVar13 = *(short *)(lVar26 + 0x895ec);
  sVar14 = *(short *)(lVar26 + 0x895ee);
  sVar15 = *(short *)(lVar26 + 0x89604);
  iVar7 = *(int *)(lVar26 + 0x89618);
  iVar8 = *(int *)(lVar26 + 0x89620);
  iVar9 = *(int *)(lVar26 + 0x89634);
  nn::os::UnlockMutex((MutexType *)(lVar26 + 0x89660));
  if (iVar6 == 1) {
    if (sVar12 != -1) {
      bVar18 = iVar7 == sVar12 || iVar8 == sVar12;
      goto LAB_029bfe24;
    }
    bVar18 = false;
  }
  else {
    bVar18 = true;
LAB_029bfe24:
    if ((bVar18 != false) && (*(char *)(param_1 + 9) == '\0')) {
      bVar18 = true;
      *(undefined1 *)(param_1 + 0xe) = 2;
    }
  }
  local_138 = (char *)(param_1 + 9);
  if (iVar8 == sVar13 || iVar8 == sVar14) {
    if (iVar6 == 2) {
      if (iVar8 == iVar7) {
        local_d0 = PTR_DAT_04bb2020 + 0x10;
        local_c8 = "SystemBGM_NoFade";
        FUN_02a227e8(*(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 0x18),&local_d0,1);
      }
    }
    else {
      if (iVar6 != 1) {
        if ((iVar6 != 0) || (iVar8 != iVar20)) goto LAB_029bff7c;
        local_d0 = PTR_DAT_04bb2020 + 0x10;
        local_c8 = "SystemBGM_NoFade";
        FUN_02a227e8(*(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 0x18),&local_d0,0);
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        nn::os::LockMutex((MutexType *)(param_1 + 0x40));
        if (*(int *)(param_1 + 0x70) < *(int *)(param_1 + 0x88)) {
          puVar32 = *(undefined8 **)(param_1 + 0x78);
          plVar34 = (long *)(param_1 + 0x60);
          if (puVar32 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0x78) = *puVar32;
          }
          *(undefined2 *)puVar32 = 0x100;
          *(undefined1 *)((long)puVar32 + 2) = 0;
          *(undefined8 *)((long)puVar32 + 4) = 0x3f800000fe392661;
          puVar32[3] = 0;
          plVar24 = puVar32 + 2;
          *plVar24 = 0;
          lVar26 = *plVar34;
          *plVar34 = (long)plVar24;
          puVar32[3] = plVar34;
          *plVar24 = lVar26;
          if (lVar26 != 0) {
            *(long **)(lVar26 + 8) = plVar24;
          }
          *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
        }
        nn::os::UnlockMutex((MutexType *)(param_1 + 0x40));
      }
    }
  }
LAB_029bff7c:
  if (((iVar8 == sVar15) && (*(char *)(*(long *)PTR_DAT_04bb26a8 + 0xb3888) == '\0')) &&
     (iVar6 == 2 || iVar6 == 3 && iVar9 < 0xb)) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x40));
    if (*(int *)(param_1 + 0x70) < *(int *)(param_1 + 0x88)) {
      puVar32 = *(undefined8 **)(param_1 + 0x78);
      plVar34 = (long *)(param_1 + 0x60);
      if (puVar32 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x78) = *puVar32;
      }
      *(undefined2 *)puVar32 = 0x100;
      *(undefined1 *)((long)puVar32 + 2) = 0;
      *(undefined8 *)((long)puVar32 + 4) = 0x3f800000fe392661;
      puVar32[3] = 0;
      plVar24 = puVar32 + 2;
      *plVar24 = 0;
      lVar26 = *plVar34;
      *plVar34 = (long)plVar24;
      puVar32[3] = plVar34;
      *plVar24 = lVar26;
      if (lVar26 != 0) {
        *(long **)(lVar26 + 8) = plVar24;
      }
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x40));
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x40));
  puVar17 = PTR_DAT_04bb2f70;
  plVar34 = *(long **)(param_1 + 0x68);
  if (plVar34 != (long *)(param_1 + 0x60)) {
    plVar24 = plVar34 + -2;
    puVar1 = PTR_DAT_04bb2bc0 + 0x10;
    puVar2 = PTR_DAT_04bc3d50 + 0x10;
LAB_029c0100:
    plVar35 = (long *)plVar34[1];
    plVar27 = plVar35;
    if (10 < *(byte *)(plVar34 + -2)) {
      if (*plVar34 != 0) {
        *(long **)(*plVar34 + 8) = plVar35;
        goto LAB_029c027c;
      }
      goto joined_r0x029c0280;
    }
    iVar20 = *(int *)((long)plVar24 + 4);
    switch(*(byte *)(plVar34 + -2)) {
    case 0:
      uVar37 = (undefined4)plVar24[1];
      if ((*plVar24 & 0x100) == 0) {
        bVar4 = bVar18 ^ 1;
        if ('\0' < *(char *)(param_1 + 0xe)) {
          bVar4 = 1;
        }
        if (bVar4 == 0) {
          bVar19 = *(char *)(param_1 + 0xd) != '\0';
        }
        else {
          bVar19 = true;
        }
        bVar4 = bVar19 | *(byte *)((long)plVar24 + 2) & 1;
        if (iVar20 == -0x1c6d99f) {
          uVar21 = FUN_03b3fb20(uVar37,*(undefined8 *)(param_1 + 0x10),0xfe392661,0,bVar4);
          *(undefined8 *)(param_1 + 0x18) = uVar21;
          goto LAB_029c03e4;
        }
        FUN_03b3fb20(uVar37,*(undefined8 *)(param_1 + 0x10),iVar20,0,bVar4);
        lVar26 = *plVar34;
      }
      else {
        lVar36 = *(long *)(param_1 + 0x10);
        lVar26 = FUN_03b3fb20(uVar37,lVar36,iVar20,1,0);
        if (lVar26 == 0) {
LAB_029c03e4:
          lVar26 = *plVar34;
        }
        else {
          *(undefined4 *)(lVar26 + 0xb4) = *(undefined4 *)(lVar36 + 0x88);
          *(byte *)(lVar26 + 0xb0) = *(byte *)(lVar26 + 0xb0) | 4;
          lVar26 = *plVar34;
        }
      }
      if (lVar26 != 0) {
        *(long *)(lVar26 + 8) = plVar34[1];
      }
      if ((long *)plVar34[1] != (long *)0x0) {
        *(long *)plVar34[1] = *plVar34;
      }
      *plVar34 = 0;
      plVar34[1] = 0;
      goto LAB_029c00dc;
    case 1:
      FUN_03b3feb0(*(undefined8 *)(param_1 + 0x10),iVar20,0,*(byte *)((long)plVar24 + 2) & 1);
      if (((iVar20 == -0x1c6d99f) && (*(long **)(param_1 + 0x18) != (long *)0x0)) &&
         (uVar23 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(), (uVar23 & 1) == 0)) {
        *(undefined8 *)(param_1 + 0x18) = 0;
        lVar26 = *plVar34;
      }
      else {
LAB_029c033c:
        lVar26 = *plVar34;
      }
      goto joined_r0x029c03b4;
    case 2:
      if (*(char *)(param_1 + 0xd) != '\0') goto LAB_029c0270;
      *(undefined1 *)(param_1 + 0xd) = 1;
LAB_029c01e4:
      plVar27 = (long *)plVar34[1];
      lVar26 = *plVar34;
      if (lVar26 == 0) goto joined_r0x029c0280;
      goto LAB_029c0278;
    case 3:
      if (*(char *)(param_1 + 0xd) != '\0') {
        *(undefined1 *)(param_1 + 0xd) = 0;
        plVar27 = (long *)plVar34[1];
      }
      goto LAB_029c0270;
    case 4:
      if (*(char *)(param_1 + 0xc) == '\0') {
        *(undefined1 *)(param_1 + 0xc) = 1;
        goto LAB_029c01e4;
      }
      goto LAB_029c0270;
    case 5:
      if (*(char *)(param_1 + 0xc) != '\0') {
        *(undefined1 *)(param_1 + 0xc) = 0;
        plVar27 = (long *)plVar34[1];
      }
LAB_029c0270:
      lVar26 = *plVar34;
      if (lVar26 != 0) {
LAB_029c0278:
        *(long **)(lVar26 + 8) = plVar27;
LAB_029c027c:
        plVar27 = (long *)plVar34[1];
      }
      goto joined_r0x029c0280;
    case 6:
      if ((iVar6 != 1) || (iVar9 < 2)) break;
      if (*(long *)PTR_DAT_04bc3ee8 == 0) {
        lVar26 = 0;
      }
      else {
        lVar26 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x18);
      }
      local_c0 = 0x40;
      cStack_ac = 'i';
      cStack_ab = 'n';
      cStack_aa = 'g';
      local_7d = 0;
      cStack_a9 = '\0';
      local_bc[0] = s_SystemBGM_NoDucking_040a761d[0];
      local_bc[1] = s_SystemBGM_NoDucking_040a761d[1];
      local_bc[2] = s_SystemBGM_NoDucking_040a761d[2];
      local_bc[3] = s_SystemBGM_NoDucking_040a761d[3];
      local_bc[4] = s_SystemBGM_NoDucking_040a761d[4];
      local_bc[5] = s_SystemBGM_NoDucking_040a761d[5];
      local_bc[6] = s_SystemBGM_NoDucking_040a761d[6];
      local_bc[7] = s_SystemBGM_NoDucking_040a761d[7];
      acStack_b4 = s_SystemBGM_NoDucking_040a761d._8_5_;
      local_af = s_SystemBGM_NoDucking_040a761d._13_2_;
      cStack_ad = s_SystemBGM_NoDucking_040a761d[0xf];
      local_d0 = puVar1;
      local_c8 = local_bc;
      if (*(char *)(lVar26 + 8) != '\0') {
        plVar27 = (long *)FUN_03ba4630(lVar26,&local_d0);
        if (plVar27 != (long *)0x0) {
          if (((*PTR_DAT_04bc3d48 & 1) == 0) &&
             (iVar20 = __cxa_guard_acquire(PTR_DAT_04bc3d48), iVar20 != 0)) {
            *(undefined **)PTR_DAT_04bc3d40 = puVar2;
            __cxa_guard_release(PTR_DAT_04bc3d48);
          }
          uVar23 = (**(code **)(*plVar27 + 0x18))(plVar27,PTR_DAT_04bc3d40);
          if ((uVar23 & 1) != 0) {
            local_c0 = 0x40;
            local_7d = 0;
            local_bc[0] = s_SystemBGM_WeddingPlayable_040d5f4b[0];
            local_bc[1] = s_SystemBGM_WeddingPlayable_040d5f4b[1];
            local_bc[2] = s_SystemBGM_WeddingPlayable_040d5f4b[2];
            local_bc[3] = s_SystemBGM_WeddingPlayable_040d5f4b[3];
            local_bc[4] = s_SystemBGM_WeddingPlayable_040d5f4b[4];
            local_bc[5] = s_SystemBGM_WeddingPlayable_040d5f4b[5];
            local_bc[6] = s_SystemBGM_WeddingPlayable_040d5f4b[6];
            local_bc[7] = s_SystemBGM_WeddingPlayable_040d5f4b[7];
            acStack_b4 = s_SystemBGM_WeddingPlayable_040d5f4b._8_5_;
            local_af = s_SystemBGM_WeddingPlayable_040d5f4b._13_2_;
            cStack_ad = s_SystemBGM_WeddingPlayable_040d5f4b[0xf];
            cStack_ac = s_SystemBGM_WeddingPlayable_040d5f4b[0x10];
            cStack_ab = s_SystemBGM_WeddingPlayable_040d5f4b[0x11];
            cStack_aa = s_SystemBGM_WeddingPlayable_040d5f4b[0x12];
            cStack_a9 = s_SystemBGM_WeddingPlayable_040d5f4b[0x13];
            cStack_a8 = s_SystemBGM_WeddingPlayable_040d5f4b[0x14];
            local_a7 = s_SystemBGM_WeddingPlayable_040d5f4b[0x15];
            uStack_a6 = s_SystemBGM_WeddingPlayable_040d5f4b._22_2_;
            local_a4 = 0x65;
            local_d0 = PTR_DAT_04bb2bc0 + 0x10;
            local_c8 = local_bc;
            if (*(char *)(lVar26 + 8) != '\0') {
              local_168 = (long *)FUN_03ba4630(lVar26,&local_d0);
              if (local_168 != (long *)0x0) {
                if (((*PTR_DAT_04bc3d48 & 1) == 0) &&
                   (iVar20 = __cxa_guard_acquire(PTR_DAT_04bc3d48), iVar20 != 0)) {
                  *(undefined **)PTR_DAT_04bc3d40 = PTR_DAT_04bc3d50 + 0x10;
                  __cxa_guard_release(PTR_DAT_04bc3d48);
                }
                uVar23 = (**(code **)(*local_168 + 0x18))(local_168,PTR_DAT_04bc3d40);
                if ((uVar23 & 1) != 0) {
                  local_c0 = 0x40;
                  local_7d = 0;
                  local_a4 = 0x796e;
                  local_bc[0] = s_BGM_Demo_JuneBrideCeremony_040d0881[0];
                  local_bc[1] = s_BGM_Demo_JuneBrideCeremony_040d0881[1];
                  local_bc[2] = s_BGM_Demo_JuneBrideCeremony_040d0881[2];
                  local_bc[3] = s_BGM_Demo_JuneBrideCeremony_040d0881[3];
                  local_bc[4] = s_BGM_Demo_JuneBrideCeremony_040d0881[4];
                  local_bc[5] = s_BGM_Demo_JuneBrideCeremony_040d0881[5];
                  local_bc[6] = s_BGM_Demo_JuneBrideCeremony_040d0881[6];
                  local_bc[7] = s_BGM_Demo_JuneBrideCeremony_040d0881[7];
                  acStack_b4 = s_BGM_Demo_JuneBrideCeremony_040d0881._8_5_;
                  local_af = s_BGM_Demo_JuneBrideCeremony_040d0881._13_2_;
                  cStack_ad = s_BGM_Demo_JuneBrideCeremony_040d0881[0xf];
                  cStack_ac = s_BGM_Demo_JuneBrideCeremony_040d0881[0x10];
                  cStack_ab = s_BGM_Demo_JuneBrideCeremony_040d0881[0x11];
                  cStack_aa = s_BGM_Demo_JuneBrideCeremony_040d0881[0x12];
                  cStack_a9 = s_BGM_Demo_JuneBrideCeremony_040d0881[0x13];
                  cStack_a8 = s_BGM_Demo_JuneBrideCeremony_040d0881[0x14];
                  local_a7 = s_BGM_Demo_JuneBrideCeremony_040d0881[0x15];
                  uStack_a6 = s_BGM_Demo_JuneBrideCeremony_040d0881._22_2_;
                  local_a2 = 0;
                  local_d0 = PTR_DAT_04bb2bc0 + 0x10;
                  local_c8 = local_bc;
                  if ((long *)plVar27[0x36] != plVar27 + 0x35) {
                    lVar36 = (long)*(int *)((long)plVar27 + 0x1bc);
                    lVar26 = plVar27[0x36] - lVar36;
                    do {
                      lVar28 = *(long *)(*(long *)(lVar26 + 0x120) + 8);
                      lVar30 = *(long *)(lVar28 + 0x38);
                      if (DAT_05aebc00 != '\0') {
                        lVar30 = lVar28 + 0x70;
                      }
                      if (lVar30 == 0) {
LAB_029c0d6c:
                        pcVar25 = (char *)0x0;
LAB_029c0d70:
                        local_128 = puVar17;
LAB_029c0d88:
                        local_128 = local_128 + 0x10;
                        local_d5 = 0;
                        local_118 = 0x40;
                        lVar30 = 0;
                        do {
                          if (pcVar25[lVar30] == '\0') {
LAB_029c0dd0:
                            iVar20 = (int)lVar30;
                            if (0x3f < iVar20) {
                              iVar20 = 0x3f;
                            }
                            goto LAB_029c0ddc;
                          }
                          if (pcVar25[lVar30 + 1] == '\0') {
                            lVar30 = lVar30 + 1;
                            goto LAB_029c0dd0;
                          }
                          if (pcVar25[lVar30 + 2] == '\0') {
                            lVar30 = lVar30 + 2;
                            goto LAB_029c0dd0;
                          }
                          lVar30 = lVar30 + 3;
                        } while (lVar30 != 0x80001);
                        iVar20 = 0;
LAB_029c0ddc:
                        local_120 = local_114;
                        memcpy(local_114,pcVar25,(long)iVar20);
                        local_114[iVar20] = '\0';
                      }
                      else {
                        pcVar25 = "<NoSound>";
                        if ((*(byte *)(lVar30 + 0x11) >> 5 & 1) != 0) goto LAB_029c0d70;
                        if (*(long *)(lVar30 + 8) == 0) goto LAB_029c0d6c;
                        local_118 = 0x40;
                        puVar29 = (uint *)(*(long *)(lVar30 + 8) + 0x24);
                        local_d5 = 0;
                        pcVar25 = (char *)((ulong)*puVar29 + (long)puVar29);
                        local_120 = local_114;
                        local_128 = PTR_DAT_04bb2f70;
                        if (local_114 != pcVar25) goto LAB_029c0d88;
                      }
                      local_128 = PTR_DAT_04bb2bc0 + 0x10;
                      (**(code **)(local_d0 + 0x18))(&local_d0);
                      (**(code **)(local_d0 + 0x18))(&local_d0);
                      pcVar25 = local_c8;
                      (**(code **)(local_128 + 0x18))(&local_128);
                      if (pcVar25 == local_120) goto LAB_029c0ecc;
                      uVar23 = 0;
                      bVar19 = true;
                      do {
                        if (local_c8[uVar23] != local_120[uVar23]) break;
                        if (local_c8[uVar23] == '\0') {
                          if (bVar19) goto LAB_029c0ecc;
                          break;
                        }
                        if (local_c8[uVar23 + 1] != local_120[uVar23 + 1]) break;
                        if (local_c8[uVar23 + 1] == '\0') goto LAB_029c0ecc;
                        if (local_c8[uVar23 + 2] != local_120[uVar23 + 2]) break;
                        if (local_c8[uVar23 + 2] == '\0') goto LAB_029c0ecc;
                        bVar19 = uVar23 < 0x7fffe;
                        uVar23 = uVar23 + 3;
                      } while (uVar23 != 0x80001);
                      lVar26 = *(long *)(lVar26 + lVar36 + 8) - lVar36;
                    } while (lVar26 != (long)(plVar27 + 0x35) - lVar36);
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_029c0cc4;
    case 7:
      if ((iVar6 == 1) && (1 < iVar9)) {
        if (*(long *)PTR_DAT_04bc3ee8 == 0) {
          lVar26 = 0;
        }
        else {
          lVar26 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x18);
        }
        local_c0 = 0x40;
        local_7d = 0;
        local_a4 = 0x65;
        local_bc[0] = s_SystemBGM_WeddingPlayable_040d5f4b[0];
        local_bc[1] = s_SystemBGM_WeddingPlayable_040d5f4b[1];
        local_bc[2] = s_SystemBGM_WeddingPlayable_040d5f4b[2];
        local_bc[3] = s_SystemBGM_WeddingPlayable_040d5f4b[3];
        local_bc[4] = s_SystemBGM_WeddingPlayable_040d5f4b[4];
        local_bc[5] = s_SystemBGM_WeddingPlayable_040d5f4b[5];
        local_bc[6] = s_SystemBGM_WeddingPlayable_040d5f4b[6];
        local_bc[7] = s_SystemBGM_WeddingPlayable_040d5f4b[7];
        acStack_b4 = s_SystemBGM_WeddingPlayable_040d5f4b._8_5_;
        local_af = s_SystemBGM_WeddingPlayable_040d5f4b._13_2_;
        cStack_ad = s_SystemBGM_WeddingPlayable_040d5f4b[0xf];
        cStack_ac = s_SystemBGM_WeddingPlayable_040d5f4b[0x10];
        cStack_ab = s_SystemBGM_WeddingPlayable_040d5f4b[0x11];
        cStack_aa = s_SystemBGM_WeddingPlayable_040d5f4b[0x12];
        cStack_a9 = s_SystemBGM_WeddingPlayable_040d5f4b[0x13];
        cStack_a8 = s_SystemBGM_WeddingPlayable_040d5f4b[0x14];
        local_a7 = s_SystemBGM_WeddingPlayable_040d5f4b[0x15];
        uStack_a6 = s_SystemBGM_WeddingPlayable_040d5f4b._22_2_;
        local_d0 = PTR_DAT_04bb2bc0 + 0x10;
        local_c8 = local_bc;
        if (*(char *)(lVar26 + 8) != '\0') {
          plVar27 = (long *)FUN_03ba4630(lVar26,&local_d0);
          if (plVar27 != (long *)0x0) {
            if (((*PTR_DAT_04bc3d48 & 1) == 0) &&
               (iVar20 = __cxa_guard_acquire(PTR_DAT_04bc3d48), iVar20 != 0)) {
              *(undefined **)PTR_DAT_04bc3d40 = PTR_DAT_04bc3d50 + 0x10;
              __cxa_guard_release(PTR_DAT_04bc3d48);
            }
            uVar23 = (**(code **)(*plVar27 + 0x18))(plVar27,PTR_DAT_04bc3d40);
            if ((uVar23 & 1) != 0) {
              local_c0 = 0x40;
              local_7d = 0;
              cStack_a9 = '\0';
              local_bc[0] = s_SystemBGM_NoDucking_040a761d[0];
              local_bc[1] = s_SystemBGM_NoDucking_040a761d[1];
              local_bc[2] = s_SystemBGM_NoDucking_040a761d[2];
              local_bc[3] = s_SystemBGM_NoDucking_040a761d[3];
              local_bc[4] = s_SystemBGM_NoDucking_040a761d[4];
              local_bc[5] = s_SystemBGM_NoDucking_040a761d[5];
              local_bc[6] = s_SystemBGM_NoDucking_040a761d[6];
              local_bc[7] = s_SystemBGM_NoDucking_040a761d[7];
              acStack_b4 = s_SystemBGM_NoDucking_040a761d._8_5_;
              local_af = s_SystemBGM_NoDucking_040a761d._13_2_;
              cStack_ad = 'k';
              cStack_ac = 'i';
              cStack_ab = 'n';
              cStack_aa = 'g';
              local_d0 = PTR_DAT_04bb2bc0 + 0x10;
              local_c8 = local_bc;
              if (*(char *)(lVar26 + 8) != '\0') {
                local_168 = (long *)FUN_03ba4630(lVar26,&local_d0);
                if (local_168 != (long *)0x0) {
                  if (((*PTR_DAT_04bc3d48 & 1) == 0) &&
                     (iVar20 = __cxa_guard_acquire(PTR_DAT_04bc3d48), iVar20 != 0)) {
                    *(undefined **)PTR_DAT_04bc3d40 = PTR_DAT_04bc3d50 + 0x10;
                    __cxa_guard_release(PTR_DAT_04bc3d48);
                  }
                  uVar23 = (**(code **)(*local_168 + 0x18))(local_168,PTR_DAT_04bc3d40);
                  if ((uVar23 & 1) != 0) {
                    local_c0 = 0x40;
                    local_7d = 0;
                    local_a4 = 0x796e;
                    local_bc[0] = s_BGM_Demo_JuneBrideCeremony_040d0881[0];
                    local_bc[1] = s_BGM_Demo_JuneBrideCeremony_040d0881[1];
                    local_bc[2] = s_BGM_Demo_JuneBrideCeremony_040d0881[2];
                    local_bc[3] = s_BGM_Demo_JuneBrideCeremony_040d0881[3];
                    local_bc[4] = s_BGM_Demo_JuneBrideCeremony_040d0881[4];
                    local_bc[5] = s_BGM_Demo_JuneBrideCeremony_040d0881[5];
                    local_bc[6] = s_BGM_Demo_JuneBrideCeremony_040d0881[6];
                    local_bc[7] = s_BGM_Demo_JuneBrideCeremony_040d0881[7];
                    acStack_b4 = s_BGM_Demo_JuneBrideCeremony_040d0881._8_5_;
                    local_af = s_BGM_Demo_JuneBrideCeremony_040d0881._13_2_;
                    cStack_ad = s_BGM_Demo_JuneBrideCeremony_040d0881[0xf];
                    cStack_ac = s_BGM_Demo_JuneBrideCeremony_040d0881[0x10];
                    cStack_ab = s_BGM_Demo_JuneBrideCeremony_040d0881[0x11];
                    cStack_aa = s_BGM_Demo_JuneBrideCeremony_040d0881[0x12];
                    cStack_a9 = s_BGM_Demo_JuneBrideCeremony_040d0881[0x13];
                    cStack_a8 = s_BGM_Demo_JuneBrideCeremony_040d0881[0x14];
                    local_a7 = s_BGM_Demo_JuneBrideCeremony_040d0881[0x15];
                    uStack_a6 = s_BGM_Demo_JuneBrideCeremony_040d0881._22_2_;
                    local_a2 = 0;
                    local_d0 = PTR_DAT_04bb2bc0 + 0x10;
                    local_c8 = local_bc;
                    if ((long *)plVar27[0x36] != plVar27 + 0x35) {
                      lVar36 = (long)*(int *)((long)plVar27 + 0x1bc);
                      lVar26 = plVar27[0x36] - lVar36;
                      do {
                        lVar28 = *(long *)(*(long *)(lVar26 + 0x120) + 8);
                        lVar30 = *(long *)(lVar28 + 0x38);
                        if (DAT_05aebc00 != '\0') {
                          lVar30 = lVar28 + 0x70;
                        }
                        if (lVar30 == 0) {
LAB_029c0938:
                          pcVar25 = (char *)0x0;
LAB_029c095c:
                          local_d5 = 0;
                          local_118 = 0x40;
                          local_128 = PTR_DAT_04bb2f70 + 0x10;
                          lVar30 = 0;
                          do {
                            if (pcVar25[lVar30] == '\0') {
LAB_029c09ac:
                              iVar20 = (int)lVar30;
                              if (0x3f < iVar20) {
                                iVar20 = 0x3f;
                              }
                              goto LAB_029c09b8;
                            }
                            if (pcVar25[lVar30 + 1] == '\0') {
                              lVar30 = lVar30 + 1;
                              goto LAB_029c09ac;
                            }
                            if (pcVar25[lVar30 + 2] == '\0') {
                              lVar30 = lVar30 + 2;
                              goto LAB_029c09ac;
                            }
                            lVar30 = lVar30 + 3;
                          } while (lVar30 != 0x80001);
                          iVar20 = 0;
LAB_029c09b8:
                          local_120 = local_114;
                          memcpy(local_114,pcVar25,(long)iVar20);
                          local_114[iVar20] = '\0';
                        }
                        else {
                          pcVar25 = "<NoSound>";
                          if ((*(byte *)(lVar30 + 0x11) >> 5 & 1) != 0) goto LAB_029c095c;
                          if (*(long *)(lVar30 + 8) == 0) goto LAB_029c0938;
                          local_118 = 0x40;
                          puVar29 = (uint *)(*(long *)(lVar30 + 8) + 0x24);
                          local_d5 = 0;
                          pcVar25 = (char *)((ulong)*puVar29 + (long)puVar29);
                          local_120 = local_114;
                          if (local_114 != pcVar25) goto LAB_029c095c;
                        }
                        local_128 = PTR_DAT_04bb2bc0 + 0x10;
                        (**(code **)(local_d0 + 0x18))(&local_d0);
                        (**(code **)(local_d0 + 0x18))(&local_d0);
                        pcVar25 = local_c8;
                        (**(code **)(local_128 + 0x18))(&local_128);
                        if (pcVar25 == local_120) goto LAB_029c0ecc;
                        uVar23 = 0;
                        bVar19 = true;
                        do {
                          if (local_c8[uVar23] != local_120[uVar23]) break;
                          if (local_c8[uVar23] == '\0') {
                            if (bVar19) goto LAB_029c0ecc;
                            break;
                          }
                          if (local_c8[uVar23 + 1] != local_120[uVar23 + 1]) break;
                          if (local_c8[uVar23 + 1] == '\0') goto LAB_029c0ecc;
                          if (local_c8[uVar23 + 2] != local_120[uVar23 + 2]) break;
                          if (local_c8[uVar23 + 2] == '\0') goto LAB_029c0ecc;
                          bVar19 = uVar23 < 0x7fffe;
                          uVar23 = uVar23 + 3;
                        } while (uVar23 != 0x80001);
                        lVar26 = *(long *)(lVar26 + lVar36 + 8) - lVar36;
                      } while (lVar26 != (long)(plVar27 + 0x35) - lVar36);
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_029c0cc4;
      }
      break;
    case 8:
      if (*(long *)(param_1 + 0x18) == 0) {
        *(undefined1 *)(param_1 + 0xf) = 1;
        lVar26 = *plVar34;
        goto joined_r0x029c03b4;
      }
      if ((iVar6 == 4) && (0x1e < iVar9)) {
        *(undefined8 *)(param_1 + 0x18) = 0;
        FUN_03b3feb0(*(undefined8 *)(param_1 + 0x10),0xfe392661,1,1);
      }
      break;
    case 9:
      if ((iVar6 == 1) && (1 < iVar9)) {
        if (*(long *)PTR_DAT_04bc3ee8 == 0) {
          lVar26 = 0;
        }
        else {
          lVar26 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x18);
        }
        local_c0 = 0x40;
        local_7d = 0;
        cStack_ac = 't';
        cStack_ab = '\0';
        local_bc[0] = s_SystemBGM_Default_0409d30b[0];
        local_bc[1] = s_SystemBGM_Default_0409d30b[1];
        local_bc[2] = s_SystemBGM_Default_0409d30b[2];
        local_bc[3] = s_SystemBGM_Default_0409d30b[3];
        local_bc[4] = s_SystemBGM_Default_0409d30b[4];
        local_bc[5] = s_SystemBGM_Default_0409d30b[5];
        local_bc[6] = s_SystemBGM_Default_0409d30b[6];
        local_bc[7] = s_SystemBGM_Default_0409d30b[7];
        acStack_b4 = s_SystemBGM_Default_0409d30b._8_5_;
        local_af = s_SystemBGM_Default_0409d30b._13_2_;
        cStack_ad = s_SystemBGM_Default_0409d30b[0xf];
        local_d0 = PTR_DAT_04bb2bc0 + 0x10;
        local_c8 = local_bc;
        if (*(char *)(lVar26 + 8) != '\0') {
          plVar27 = (long *)FUN_03ba4630(lVar26,&local_d0);
          if (plVar27 != (long *)0x0) {
            if (((*PTR_DAT_04bc3d48 & 1) == 0) &&
               (iVar20 = __cxa_guard_acquire(PTR_DAT_04bc3d48), iVar20 != 0)) {
              *(undefined **)PTR_DAT_04bc3d40 = PTR_DAT_04bc3d50 + 0x10;
              __cxa_guard_release(PTR_DAT_04bc3d48);
            }
            uVar23 = (**(code **)(*plVar27 + 0x18))(plVar27,PTR_DAT_04bc3d40);
            if ((uVar23 & 1) != 0) {
              local_c0 = 0x40;
              local_7d = 0;
              cStack_a9 = '\0';
              local_bc[0] = s_SystemBGM_NoDucking_040a761d[0];
              local_bc[1] = s_SystemBGM_NoDucking_040a761d[1];
              local_bc[2] = s_SystemBGM_NoDucking_040a761d[2];
              local_bc[3] = s_SystemBGM_NoDucking_040a761d[3];
              local_bc[4] = s_SystemBGM_NoDucking_040a761d[4];
              local_bc[5] = s_SystemBGM_NoDucking_040a761d[5];
              local_bc[6] = s_SystemBGM_NoDucking_040a761d[6];
              local_bc[7] = s_SystemBGM_NoDucking_040a761d[7];
              acStack_b4 = s_SystemBGM_NoDucking_040a761d._8_5_;
              local_af = s_SystemBGM_NoDucking_040a761d._13_2_;
              cStack_ad = 'k';
              cStack_ac = 'i';
              cStack_ab = 'n';
              cStack_aa = 'g';
              local_d0 = PTR_DAT_04bb2bc0 + 0x10;
              local_c8 = local_bc;
              if (*(char *)(lVar26 + 8) != '\0') {
                plVar22 = (long *)FUN_03ba4630(lVar26,&local_d0);
                if (plVar22 != (long *)0x0) {
                  if (((*PTR_DAT_04bc3d48 & 1) == 0) &&
                     (iVar20 = __cxa_guard_acquire(PTR_DAT_04bc3d48), iVar20 != 0)) {
                    *(undefined **)PTR_DAT_04bc3d40 = PTR_DAT_04bc3d50 + 0x10;
                    __cxa_guard_release(PTR_DAT_04bc3d48);
                  }
                  uVar23 = (**(code **)(*plVar22 + 0x18))(plVar22,PTR_DAT_04bc3d40);
                  if ((uVar23 & 1) != 0) {
                    local_c0 = 0x40;
                    local_7d = 0;
                    local_a7 = '\0';
                    local_bc[0] = s_BGM_OneRoom_PartyDemo_04068c32[0];
                    local_bc[1] = s_BGM_OneRoom_PartyDemo_04068c32[1];
                    local_bc[2] = s_BGM_OneRoom_PartyDemo_04068c32[2];
                    local_bc[3] = s_BGM_OneRoom_PartyDemo_04068c32[3];
                    local_bc[4] = s_BGM_OneRoom_PartyDemo_04068c32[4];
                    local_bc[5] = s_BGM_OneRoom_PartyDemo_04068c32[5];
                    local_bc[6] = s_BGM_OneRoom_PartyDemo_04068c32[6];
                    local_bc[7] = s_BGM_OneRoom_PartyDemo_04068c32[7];
                    acStack_b4[0] = s_BGM_OneRoom_PartyDemo_04068c32[8];
                    acStack_b4[1] = s_BGM_OneRoom_PartyDemo_04068c32[9];
                    acStack_b4[2] = s_BGM_OneRoom_PartyDemo_04068c32[10];
                    acStack_b4[3] = s_BGM_OneRoom_PartyDemo_04068c32[0xb];
                    acStack_b4[4] = s_BGM_OneRoom_PartyDemo_04068c32[0xc];
                    local_af = s_BGM_OneRoom_PartyDemo_04068c32._13_2_;
                    cStack_ad = s_BGM_OneRoom_PartyDemo_04068c32[0xf];
                    cStack_ac = s_BGM_OneRoom_PartyDemo_04068c32[0x10];
                    cStack_ab = s_BGM_OneRoom_PartyDemo_04068c32[0x11];
                    cStack_aa = s_BGM_OneRoom_PartyDemo_04068c32[0x12];
                    cStack_a9 = s_BGM_OneRoom_PartyDemo_04068c32[0x13];
                    cStack_a8 = s_BGM_OneRoom_PartyDemo_04068c32[0x14];
                    local_d0 = PTR_DAT_04bb2bc0 + 0x10;
                    local_c8 = local_bc;
                    if ((long *)plVar27[0x36] != plVar27 + 0x35) {
                      lVar36 = (long)*(int *)((long)plVar27 + 0x1bc);
                      lVar26 = plVar27[0x36] - lVar36;
                      do {
                        lVar28 = *(long *)(*(long *)(lVar26 + 0x120) + 8);
                        lVar30 = *(long *)(lVar28 + 0x38);
                        if (DAT_05aebc00 != '\0') {
                          lVar30 = lVar28 + 0x70;
                        }
                        if (lVar30 == 0) {
LAB_029c0b34:
                          pcVar25 = (char *)0x0;
LAB_029c0b58:
                          local_d5 = 0;
                          local_118 = 0x40;
                          local_128 = PTR_DAT_04bb2f70 + 0x10;
                          lVar30 = 0;
                          do {
                            if (pcVar25[lVar30] == '\0') {
LAB_029c0ba0:
                              iVar20 = (int)lVar30;
                              if (0x3f < iVar20) {
                                iVar20 = 0x3f;
                              }
                              goto LAB_029c0bac;
                            }
                            if (pcVar25[lVar30 + 1] == '\0') {
                              lVar30 = lVar30 + 1;
                              goto LAB_029c0ba0;
                            }
                            if (pcVar25[lVar30 + 2] == '\0') {
                              lVar30 = lVar30 + 2;
                              goto LAB_029c0ba0;
                            }
                            lVar30 = lVar30 + 3;
                          } while (lVar30 != 0x80001);
                          iVar20 = 0;
LAB_029c0bac:
                          local_120 = local_114;
                          memcpy(local_114,pcVar25,(long)iVar20);
                          local_114[iVar20] = '\0';
                        }
                        else {
                          pcVar25 = "<NoSound>";
                          if ((*(byte *)(lVar30 + 0x11) >> 5 & 1) != 0) goto LAB_029c0b58;
                          if (*(long *)(lVar30 + 8) == 0) goto LAB_029c0b34;
                          local_118 = 0x40;
                          puVar29 = (uint *)(*(long *)(lVar30 + 8) + 0x24);
                          local_d5 = 0;
                          pcVar25 = (char *)((ulong)*puVar29 + (long)puVar29);
                          local_120 = local_114;
                          if (local_114 != pcVar25) goto LAB_029c0b58;
                        }
                        local_128 = PTR_DAT_04bb2bc0 + 0x10;
                        (**(code **)(local_d0 + 0x18))(&local_d0);
                        (**(code **)(local_d0 + 0x18))(&local_d0);
                        pcVar25 = local_c8;
                        (**(code **)(local_128 + 0x18))(&local_128);
                        if (pcVar25 == local_120) {
LAB_029c0c9c:
                          if (*(long *)(lVar26 + 0x108) != 0) {
                            FUN_03ba63a0(*(long *)(lVar26 + 0x108),lVar26);
                          }
                          *(long **)(lVar26 + 0x108) = plVar22;
                          FUN_03ba625c(plVar22,lVar26);
                          break;
                        }
                        uVar23 = 0;
                        bVar19 = true;
                        do {
                          if (local_c8[uVar23] != local_120[uVar23]) break;
                          if (local_c8[uVar23] == '\0') {
                            if (bVar19) goto LAB_029c0c9c;
                            break;
                          }
                          if (local_c8[uVar23 + 1] != local_120[uVar23 + 1]) break;
                          if (local_c8[uVar23 + 1] == '\0') goto LAB_029c0c9c;
                          if (local_c8[uVar23 + 2] != local_120[uVar23 + 2]) break;
                          if (local_c8[uVar23 + 2] == '\0') goto LAB_029c0c9c;
                          bVar19 = uVar23 < 0x7fffe;
                          uVar23 = uVar23 + 3;
                        } while (uVar23 != 0x80001);
                        lVar26 = *(long *)(lVar26 + lVar36 + 8) - lVar36;
                      } while (lVar26 != (long)(plVar27 + 0x35) - lVar36);
                    }
                  }
                }
              }
            }
          }
        }
        *(undefined1 *)(param_1 + 0xf) = 0;
        goto LAB_029c0cc4;
      }
      break;
    case 10:
      lVar36 = *(long *)(param_1 + 0x10);
      lVar26 = FUN_03b3fb20(0x3f800000,lVar36,0xfe392661,1,0);
      if (lVar26 != 0) {
        *(undefined4 *)(lVar26 + 0xb4) = *(undefined4 *)(lVar36 + 0x88);
        *(byte *)(lVar26 + 0xb0) = *(byte *)(lVar26 + 0xb0) | 4;
      }
      if ((iVar6 == 3) && (iVar9 == 0)) goto LAB_029c033c;
    }
    goto LAB_029c00f4;
  }
LAB_029c103c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x40));
  if (*(char *)(param_1 + 0xf) != '\0') {
    if (*(long *)PTR_DAT_04bc3ee8 == 0) {
      lVar26 = 0;
    }
    else {
      lVar26 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x18);
    }
    local_c0 = 0x40;
    cStack_ac = 'i';
    cStack_ab = 'n';
    cStack_aa = 'g';
    local_7d = 0;
    cStack_a9 = '\0';
    local_c8 = local_bc;
    local_bc[0] = s_SystemBGM_NoDucking_040a761d[0];
    local_bc[1] = s_SystemBGM_NoDucking_040a761d[1];
    local_bc[2] = s_SystemBGM_NoDucking_040a761d[2];
    local_bc[3] = s_SystemBGM_NoDucking_040a761d[3];
    local_bc[4] = s_SystemBGM_NoDucking_040a761d[4];
    local_bc[5] = s_SystemBGM_NoDucking_040a761d[5];
    local_bc[6] = s_SystemBGM_NoDucking_040a761d[6];
    local_bc[7] = s_SystemBGM_NoDucking_040a761d[7];
    acStack_b4 = s_SystemBGM_NoDucking_040a761d._8_5_;
    local_af = s_SystemBGM_NoDucking_040a761d._13_2_;
    cStack_ad = s_SystemBGM_NoDucking_040a761d[0xf];
    local_d0 = PTR_DAT_04bb2bc0 + 0x10;
    if (*(char *)(lVar26 + 8) != '\0') {
      plVar34 = (long *)FUN_03ba4630(lVar26,&local_d0);
      puVar17 = PTR_DAT_04bc3d48;
      if (plVar34 != (long *)0x0) {
        if (((*PTR_DAT_04bc3d48 & 1) == 0) &&
           (iVar20 = __cxa_guard_acquire(PTR_DAT_04bc3d48), iVar20 != 0)) {
          *(undefined **)PTR_DAT_04bc3d40 = PTR_DAT_04bc3d50 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc3d48);
        }
        puVar1 = PTR_DAT_04bc3d40;
        uVar23 = (**(code **)(*plVar34 + 0x18))(plVar34,PTR_DAT_04bc3d40);
        if ((uVar23 & 1) != 0) {
          local_7d = 0;
          local_c0 = 0x40;
          acStack_b4 = s_SystemBGM_Default_0409d30b._8_5_;
          local_af = s_SystemBGM_Default_0409d30b._13_2_;
          cStack_ad = s_SystemBGM_Default_0409d30b[0xf];
          local_bc[0] = s_SystemBGM_Default_0409d30b[0];
          local_bc[1] = s_SystemBGM_Default_0409d30b[1];
          local_bc[2] = s_SystemBGM_Default_0409d30b[2];
          local_bc[3] = s_SystemBGM_Default_0409d30b[3];
          local_bc[4] = s_SystemBGM_Default_0409d30b[4];
          local_bc[5] = s_SystemBGM_Default_0409d30b[5];
          local_bc[6] = s_SystemBGM_Default_0409d30b[6];
          local_bc[7] = s_SystemBGM_Default_0409d30b[7];
          cStack_ac = 't';
          cStack_ab = '\0';
          local_c8 = local_bc;
          local_d0 = PTR_DAT_04bb2bc0 + 0x10;
          if ((*(char *)(lVar26 + 8) != '\0') &&
             (plVar24 = (long *)FUN_03ba4630(lVar26,&local_d0), plVar24 != (long *)0x0)) {
            if (((*puVar17 & 1) == 0) &&
               (iVar20 = __cxa_guard_acquire(PTR_DAT_04bc3d48), iVar20 != 0)) {
              *(undefined **)puVar1 = PTR_DAT_04bc3d50 + 0x10;
              __cxa_guard_release(PTR_DAT_04bc3d48);
            }
            uVar23 = (**(code **)(*plVar24 + 0x18))(plVar24,PTR_DAT_04bc3d40);
            puVar17 = PTR_DAT_04bb2f70;
            if ((uVar23 & 1) != 0) {
              local_7d = 0;
              local_a7 = '\0';
              local_bc[0] = s_BGM_OneRoom_PartyDemo_04068c32[0];
              local_bc[1] = s_BGM_OneRoom_PartyDemo_04068c32[1];
              local_bc[2] = s_BGM_OneRoom_PartyDemo_04068c32[2];
              local_bc[3] = s_BGM_OneRoom_PartyDemo_04068c32[3];
              local_bc[4] = s_BGM_OneRoom_PartyDemo_04068c32[4];
              local_bc[5] = s_BGM_OneRoom_PartyDemo_04068c32[5];
              local_bc[6] = s_BGM_OneRoom_PartyDemo_04068c32[6];
              local_bc[7] = s_BGM_OneRoom_PartyDemo_04068c32[7];
              acStack_b4[0] = s_BGM_OneRoom_PartyDemo_04068c32[8];
              acStack_b4[1] = s_BGM_OneRoom_PartyDemo_04068c32[9];
              acStack_b4[2] = s_BGM_OneRoom_PartyDemo_04068c32[10];
              acStack_b4[3] = s_BGM_OneRoom_PartyDemo_04068c32[0xb];
              acStack_b4[4] = s_BGM_OneRoom_PartyDemo_04068c32[0xc];
              local_af = s_BGM_OneRoom_PartyDemo_04068c32._13_2_;
              cStack_ad = s_BGM_OneRoom_PartyDemo_04068c32[0xf];
              cStack_ac = s_BGM_OneRoom_PartyDemo_04068c32[0x10];
              cStack_ab = s_BGM_OneRoom_PartyDemo_04068c32[0x11];
              cStack_aa = s_BGM_OneRoom_PartyDemo_04068c32[0x12];
              cStack_a9 = s_BGM_OneRoom_PartyDemo_04068c32[0x13];
              cStack_a8 = s_BGM_OneRoom_PartyDemo_04068c32[0x14];
              local_c8 = local_bc;
              local_c0 = 0x40;
              puVar1 = PTR_DAT_04bb2bc0 + 0x10;
              local_d0 = puVar1;
              if ((long *)plVar34[0x36] != plVar34 + 0x35) {
                lVar36 = (long)*(int *)((long)plVar34 + 0x1bc);
                lVar26 = plVar34[0x36] - lVar36;
                do {
                  lVar28 = *(long *)(*(long *)(lVar26 + 0x120) + 8);
                  lVar30 = *(long *)(lVar28 + 0x38);
                  if (DAT_05aebc00 != '\0') {
                    lVar30 = lVar28 + 0x70;
                  }
                  local_120 = local_114;
                  if (lVar30 == 0) {
LAB_029c12a0:
                    pcVar25 = (char *)0x0;
LAB_029c12a4:
                    local_128 = puVar17;
LAB_029c12b4:
                    local_128 = local_128 + 0x10;
                    local_d5 = 0;
                    local_118 = 0x40;
                    lVar30 = 0;
                    do {
                      if (pcVar25[lVar30] == '\0') {
LAB_029c12fc:
                        iVar20 = (int)lVar30;
                        if (0x3f < iVar20) {
                          iVar20 = 0x3f;
                        }
                        goto LAB_029c1308;
                      }
                      if (pcVar25[lVar30 + 1] == '\0') {
                        lVar30 = lVar30 + 1;
                        goto LAB_029c12fc;
                      }
                      if (pcVar25[lVar30 + 2] == '\0') {
                        lVar30 = lVar30 + 2;
                        goto LAB_029c12fc;
                      }
                      lVar30 = lVar30 + 3;
                    } while (lVar30 != 0x80001);
                    iVar20 = 0;
LAB_029c1308:
                    memcpy(local_114,pcVar25,(long)iVar20);
                    local_114[iVar20] = '\0';
                  }
                  else {
                    pcVar25 = "<NoSound>";
                    if ((*(byte *)(lVar30 + 0x11) >> 5 & 1) != 0) goto LAB_029c12a4;
                    if (*(long *)(lVar30 + 8) == 0) goto LAB_029c12a0;
                    local_118 = 0x40;
                    puVar29 = (uint *)(*(long *)(lVar30 + 8) + 0x24);
                    local_d5 = 0;
                    pcVar25 = (char *)((ulong)*puVar29 + (long)puVar29);
                    local_128 = PTR_DAT_04bb2f70;
                    if (local_114 != pcVar25) goto LAB_029c12b4;
                  }
                  local_128 = puVar1;
                  (**(code **)(local_d0 + 0x18))(&local_d0);
                  (**(code **)(local_d0 + 0x18))(&local_d0);
                  pcVar25 = local_c8;
                  (**(code **)(local_128 + 0x18))(&local_128);
                  if (pcVar25 == local_120) {
LAB_029c13d0:
                    if (*(long *)(lVar26 + 0x108) != 0) {
                      FUN_03ba63a0(*(long *)(lVar26 + 0x108),lVar26);
                      *(undefined8 *)(lVar26 + 0x108) = 0;
                    }
                    *(long **)(lVar26 + 0x108) = plVar24;
                    FUN_03ba625c(plVar24,lVar26);
                    break;
                  }
                  uVar23 = 0;
                  bVar19 = true;
                  do {
                    if (local_c8[uVar23] != local_120[uVar23]) break;
                    if (local_c8[uVar23] == '\0') {
                      if (bVar19) goto LAB_029c13d0;
                      break;
                    }
                    if (local_c8[uVar23 + 1] != local_120[uVar23 + 1]) break;
                    if (local_c8[uVar23 + 1] == '\0') goto LAB_029c13d0;
                    if (local_c8[uVar23 + 2] != local_120[uVar23 + 2]) break;
                    if (local_c8[uVar23 + 2] == '\0') goto LAB_029c13d0;
                    bVar19 = uVar23 < 0x7fffe;
                    uVar23 = uVar23 + 3;
                  } while (uVar23 != 0x80001);
                  lVar26 = *(long *)(lVar26 + lVar36 + 8) - lVar36;
                } while (lVar26 != (long)(plVar34 + 0x35) - lVar36);
              }
            }
          }
        }
      }
    }
  }
  sVar12 = *(short *)PTR_DAT_04bb6298;
  if (sVar12 == -1) {
    bVar19 = false;
    if (*(char *)(param_1 + 8) == '\0') goto LAB_029c149c;
  }
  else {
    local_d0 = (undefined *)CONCAT44(local_d0._4_4_,0x12);
    puVar29 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar12 * 8);
    if (0xff < (uint)(int)sVar12) {
      puVar29 = (uint *)PTR_DAT_04bc39f8;
    }
    uVar5 = *puVar29 & 0x40000;
    bVar19 = uVar5 != 0;
    if (*(char *)(param_1 + 8) == '\0') {
      if (uVar5 != 0) {
        FUN_03b3fb20(0x3f800000,*(undefined8 *)(param_1 + 0x10),0x56a9440c,0,0);
      }
      goto LAB_029c149c;
    }
    if (uVar5 != 0) goto LAB_029c149c;
  }
  FUN_03b3feb0(*(undefined8 *)(param_1 + 0x10),0x56a9440c,0,0);
LAB_029c149c:
  *(bool *)(param_1 + 8) = bVar19;
  puVar17 = PTR_DAT_04bb26a8;
  if (bVar18 == false) {
    if (*local_138 != '\0') {
      FUN_03b40160(*(undefined8 *)(param_1 + 0x10),1);
      FUN_03b40160(*(undefined8 *)(param_1 + 0x10),1);
      FUN_03b40160(*(undefined8 *)(param_1 + 0x10),1);
      FUN_03b40160(*(undefined8 *)(param_1 + 0x10),1);
      FUN_03b40160(*(undefined8 *)(param_1 + 0x10),1);
      FUN_03b40160(*(undefined8 *)(param_1 + 0x10),1);
      FUN_03b40160(*(undefined8 *)(param_1 + 0x10),1);
      FUN_03b40160(*(undefined8 *)(param_1 + 0x10),1);
      FUN_03b40160(*(undefined8 *)(param_1 + 0x10),1);
      FUN_03b40160(*(undefined8 *)(param_1 + 0x10),1);
      *(undefined2 *)(param_1 + 10) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
  }
  else {
    lVar26 = *(long *)PTR_DAT_04bb26a8;
    uVar5 = *(uint *)(FUN_0011e5e0 + lVar26);
    if (uVar5 != 0xffffffff) {
      if (*(uint *)(lVar26 + 0x11e608) <= uVar5) {
        uVar5 = 0;
      }
      if (*(long *)(lVar26 + 0x11e610) != 0) {
        fVar38 = 0.0;
        pbVar31 = (byte *)(lVar26 + 0x636e0);
        if (DAT_055e924c != 4) {
          fVar38 = (float)DAT_055e924c * 15.0;
        }
        puVar29 = (uint *)(*(long *)(lVar26 + 0x11e610) + (long)(int)uVar5 * 0x80 + 8);
        if (*(long *)(*(long *)(lVar26 + 0xb4510) + 0x50) == 0) {
          fVar39 = 1.0;
        }
        else {
          fVar39 = *(float *)(lVar26 + 0xb44d8) + 1.0;
        }
        uVar10 = *puVar29;
        uVar5 = uVar10 - 0x20;
        if ((int)uVar10 < 0x20) {
          uVar5 = uVar10;
        }
        uVar33 = 0x60040;
        if ((int)uVar10 < 0x20) {
          uVar33 = 6;
        }
        uVar10 = *(uint *)(lVar26 + 0x63804);
        local_d0 = (undefined *)CONCAT44(local_d0._4_4_,uVar10);
        if (uVar10 != 0xffffffff) {
          pbVar31 = (byte *)(lVar26 + 0x63700) + (ulong)uVar10 * 0x20;
          if (7 < uVar10) {
            pbVar31 = (byte *)(lVar26 + 0x63700);
          }
        }
        uVar33 = uVar33 & 1 << (ulong)(uVar5 & 0x1f);
        if (*(char *)(param_1 + 10) == '\0') {
          if (((fVar38 < fVar39) && (uVar33 != 0)) && ((*pbVar31 & 1) != 0)) {
            *(undefined1 *)(param_1 + 10) = 1;
            FUN_03b3fb20(0x3f800000,*(undefined8 *)(param_1 + 0x10),0x4955738f,0,
                         '\0' < *(char *)(param_1 + 0xe) || *(char *)(param_1 + 0xd) != '\0');
          }
        }
        else if (((fVar39 < fVar38) || (uVar33 == 0)) || ((*pbVar31 & 1) == 0)) {
          *(undefined1 *)(param_1 + 10) = 0;
          FUN_03b3feb0(*(undefined8 *)(param_1 + 0x10),0x4955738f,0,0);
        }
        if (*puVar29 - 1 < 2) {
          lVar36 = *(long *)puVar17;
          lVar26 = *(long *)PTR_DAT_04bb5c90;
          iVar20 = *(int *)(lVar26 + 0x28);
          iVar7 = *(int *)(lVar26 + 0x2c);
          iVar6 = *(int *)(lVar26 + 0x38);
          iVar8 = *(int *)(lVar26 + 0x3c);
          if (*(long *)(*(long *)(lVar36 + 0xb4510) + 0x50) == 0) {
            fVar38 = 0.0;
            fVar39 = 0.0;
          }
          else {
            fVar38 = *(float *)(lVar36 + 0xb44c8);
            fVar39 = *(float *)(lVar36 + 0xb44d0);
          }
          iVar9 = (int)((float)(int)fVar38 / 5.0) - (uint)(fVar38 < 0.0);
          iVar16 = (int)((float)(int)fVar39 / 5.0) - (uint)(fVar39 < 0.0);
          bVar19 = (((iVar9 < iVar20 || iVar6 < iVar9) || iVar16 < iVar7) || iVar16 != iVar8) &&
                   (((iVar20 <= iVar9 && iVar9 <= iVar6) && iVar7 <= iVar16) && iVar16 - iVar8 < 0)
                   == (((iVar20 <= iVar9 && iVar9 <= iVar6) && iVar7 <= iVar16) &&
                      SBORROW4(iVar16,iVar8));
        }
        else {
          bVar19 = true;
        }
        if (*(char *)(param_1 + 0xc) == '\0') {
          bVar19 = true;
        }
        if (*(char *)(param_1 + 0xb) == '\0') {
          if (!bVar19) {
            *(undefined1 *)(param_1 + 0xb) = 1;
            FUN_03b3fb20(0x3f800000,*(undefined8 *)(param_1 + 0x10),0x22407aa1,0,
                         '\0' < *(char *)(param_1 + 0xe) || *(char *)(param_1 + 0xd) != '\0');
          }
        }
        else if (bVar19) {
          *(undefined1 *)(param_1 + 0xb) = 0;
          FUN_03b3feb0(*(undefined8 *)(param_1 + 0x10),0x22407aa1,0,0);
        }
      }
    }
    lVar26 = *(long *)puVar17;
    pMVar3 = (MutexType *)(lVar26 + 0xb4408);
    nn::os::LockMutex(pMVar3);
    cVar11 = *(char *)(lVar26 + 0xb442b);
    nn::os::UnlockMutex(pMVar3);
    if (cVar11 != '\0') {
      lVar36 = *(long *)(param_1 + 0x10);
      lVar26 = FUN_03b3fb20(0x3f800000,lVar36,0x2cdf9109,1,0);
      if (lVar26 != 0) {
        *(undefined4 *)(lVar26 + 0xb4) = *(undefined4 *)(lVar36 + 0x88);
        *(byte *)(lVar26 + 0xb0) = *(byte *)(lVar26 + 0xb0) | 4;
      }
    }
  }
  *local_138 = bVar18;
  return;
LAB_029c0ecc:
  if (*(long *)(lVar26 + 0x108) != 0) {
    FUN_03ba63a0(*(long *)(lVar26 + 0x108),lVar26);
  }
  *(long **)(lVar26 + 0x108) = local_168;
  FUN_03ba625c(local_168,lVar26);
LAB_029c0cc4:
  lVar26 = *plVar34;
joined_r0x029c03b4:
  if (lVar26 != 0) {
    *(long *)(lVar26 + 8) = plVar34[1];
  }
  plVar27 = (long *)plVar34[1];
joined_r0x029c0280:
  if (plVar27 != (long *)0x0) {
    *plVar27 = *plVar34;
  }
  *plVar34 = 0;
  plVar34[1] = 0;
LAB_029c00dc:
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
  *plVar24 = *(long *)(param_1 + 0x78);
  *(long **)(param_1 + 0x78) = plVar24;
LAB_029c00f4:
  plVar24 = plVar35 + -2;
  plVar34 = plVar35;
  if (plVar24 == (long *)(param_1 + 0x50)) goto LAB_029c103c;
  goto LAB_029c0100;
}


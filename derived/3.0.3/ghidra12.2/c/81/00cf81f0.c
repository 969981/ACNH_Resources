
/* WARNING: Type propagation algorithm not settling */

void FUN_00cf81f0(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  undefined *puVar1;
  float *pfVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined4 uVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined *local_e8;
  char *pcStack_e0;
  undefined4 local_d8;
  char local_d4 [8];
  char acStack_cc [8];
  undefined4 local_c4;
  undefined1 local_c0;
  undefined1 local_b5;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  float fStack_a0;
  undefined2 local_9c;
  undefined8 local_98;
  char *local_90;
  undefined *local_88;
  char *local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 uStack_68;
  undefined8 local_28;
  
  puVar12 = PTR_DAT_04bb27f8;
  lVar14 = *(long *)PTR_DAT_04bb27f8;
  if (lVar14 == 0) {
    return;
  }
  local_a4 = *(undefined4 *)(PTR_DAT_04bb7ab0 + 0xc);
  fStack_a0 = *(float *)(PTR_DAT_04bb7ab0 + 0x10);
  local_b0 = *(undefined8 *)PTR_DAT_04bb7ab0;
  local_a8 = *(undefined4 *)(PTR_DAT_04bb7ab0 + 8);
  local_9c = *(undefined2 *)(PTR_DAT_04bb7ab0 + 0x14);
  fVar16 = fStack_a0;
  FUN_00cf6b00(param_4,&local_b0);
  puVar11 = PTR_DAT_04bb32e0;
  local_d8 = 0x20;
  pcStack_e0 = local_d4;
  local_b5 = 0;
  local_e8 = PTR_DAT_04bb2028 + 0x10;
  iVar5 = *(int *)(lVar14 + 0xc4);
  if (iVar5 == 3) {
    local_c4 = 0x315f3065;
    local_c0 = 0;
    local_d4[0] = s_WherearenNpcHouse0_1_040ee9f6[0];
    local_d4[1] = s_WherearenNpcHouse0_1_040ee9f6[1];
    local_d4[2] = s_WherearenNpcHouse0_1_040ee9f6[2];
    local_d4[3] = s_WherearenNpcHouse0_1_040ee9f6[3];
    local_d4[4] = s_WherearenNpcHouse0_1_040ee9f6[4];
    local_d4[5] = s_WherearenNpcHouse0_1_040ee9f6[5];
    local_d4[6] = s_WherearenNpcHouse0_1_040ee9f6[6];
    local_d4[7] = s_WherearenNpcHouse0_1_040ee9f6[7];
    acStack_cc[0] = s_WherearenNpcHouse0_1_040ee9f6[8];
    acStack_cc[1] = s_WherearenNpcHouse0_1_040ee9f6[9];
    acStack_cc[2] = s_WherearenNpcHouse0_1_040ee9f6[10];
    acStack_cc[3] = s_WherearenNpcHouse0_1_040ee9f6[0xb];
    acStack_cc[4] = s_WherearenNpcHouse0_1_040ee9f6[0xc];
    acStack_cc[5] = s_WherearenNpcHouse0_1_040ee9f6[0xd];
    acStack_cc[6] = s_WherearenNpcHouse0_1_040ee9f6[0xe];
    acStack_cc[7] = s_WherearenNpcHouse0_1_040ee9f6[0xf];
    puVar12 = PTR_DAT_04bb32e0;
    if (*(long *)(param_4 + 8) != 0) {
      puVar12 = (undefined *)(*(long *)(param_4 + 8) + 0x2a8);
    }
    bVar4 = FUN_0291818c(&local_e8,0,puVar12,&local_b0);
    *(byte *)(param_4 + 0xb4) = bVar4 & 1;
    if (*(long *)(param_4 + 8) != 0) {
      puVar11 = (undefined *)(*(long *)(param_4 + 8) + 0x2a8);
    }
    local_88 = PTR_DAT_04bb2020 + 0x10;
    local_80 = "WHEREAREN_MncTalkReserve_AfterCompleteDemo";
    iVar5 = FUN_02753180(puVar11,&local_88);
    puVar12 = PTR_DAT_04bc39e0;
    if (iVar5 != 0) {
      uVar6 = FUN_006f0400(0xc1200000,0xc0a00000);
      uVar7 = (ulong)(((float)uVar6 * -8.381903e-08 + 180.0) * 11930465.0);
      pfVar2 = (float *)(PTR_DAT_04bb2d00 + (uVar7 >> 0x19 & 0x7f) * 0x10);
      if ((**(char **)(PTR_DAT_04bc3a88 + 8) != '\0') || (**(char **)(PTR_DAT_04bc39e0 + 8) != '\0')
         ) {
        fVar15 = (float)((uint)uVar7 >> 1 & 0xffffff) * 5.9604645e-08;
        fVar16 = *pfVar2 + fVar15 * pfVar2[1];
        fVar15 = pfVar2[2] + fVar15 * pfVar2[3];
        fVar17 = fVar16 * 0.0;
        fVar15 = fVar15 + fVar15;
        fVar19 = fVar16 * (fVar16 + fVar16);
        fVar18 = (fVar16 + fVar16) * fVar17;
        fVar21 = fVar17 * (fVar17 + fVar17);
        fVar20 = fVar16 * (fVar17 + fVar17);
        fVar17 = fVar15 * fVar17;
        fVar16 = fVar16 * fVar15;
        fVar15 = (fVar20 - fVar17) * 0.0 + ((1.0 - fVar19) - fVar21) * 5.0 + (fVar16 + fVar21) * 0.0
        ;
        fVar20 = ((1.0 - fVar21) - fVar21) * 0.0 + (fVar17 + fVar20) * 5.0 + (fVar18 - fVar17) * 0.0
        ;
        fVar16 = (fVar17 + fVar18) * 0.0 + (fVar21 - fVar16) * 5.0 + ((1.0 - fVar21) - fVar19) * 0.0
        ;
        goto LAB_00cf8908;
      }
      goto LAB_00cf8910;
    }
    if ((**(char **)(PTR_DAT_04bc3a88 + 8) != '\0') || (**(char **)(PTR_DAT_04bc39e0 + 8) != '\0'))
    {
      *(undefined8 *)(PTR_DAT_04bc39e0 + 0xbc) = 0x40a00000;
      uVar13 = 0xc0a00000;
LAB_00cf89f8:
      *(undefined4 *)(puVar12 + 0xc4) = uVar13;
    }
LAB_00cf89fc:
    puVar12 = PTR_DAT_04bbe4a8;
    *PTR_DAT_04bbe4a0 = 1;
    *(undefined4 *)puVar12 = 0x80000000;
  }
  else {
    if (iVar5 != 2) {
      if (iVar5 != 1) {
        local_c4 = CONCAT13(local_c4._3_1_,0x6e65);
        local_d4[0] = s_WherearenNpcGarden_0409161f[0];
        local_d4[1] = s_WherearenNpcGarden_0409161f[1];
        local_d4[2] = s_WherearenNpcGarden_0409161f[2];
        local_d4[3] = s_WherearenNpcGarden_0409161f[3];
        local_d4[4] = s_WherearenNpcGarden_0409161f[4];
        local_d4[5] = s_WherearenNpcGarden_0409161f[5];
        local_d4[6] = s_WherearenNpcGarden_0409161f[6];
        local_d4[7] = s_WherearenNpcGarden_0409161f[7];
        acStack_cc[0] = s_WherearenNpcGarden_0409161f[8];
        acStack_cc[1] = s_WherearenNpcGarden_0409161f[9];
        acStack_cc[2] = s_WherearenNpcGarden_0409161f[10];
        acStack_cc[3] = s_WherearenNpcGarden_0409161f[0xb];
        acStack_cc[4] = s_WherearenNpcGarden_0409161f[0xc];
        acStack_cc[5] = s_WherearenNpcGarden_0409161f[0xd];
        acStack_cc[6] = s_WherearenNpcGarden_0409161f[0xe];
        acStack_cc[7] = s_WherearenNpcGarden_0409161f[0xf];
        FUN_0375dec0(&local_88);
        local_98._0_4_ = 2.0;
        local_80 = (char *)CONCAT44(local_80._4_4_,(float)local_78._4_4_ * 5.0 + 5.0);
        local_88 = (undefined *)(ulong)(uint)((float)(int)local_78 * 5.0 + 5.0);
        if (((*PTR_DAT_04bb3998 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3998), iVar5 != 0)) {
          FUN_00773950(PTR_DAT_04bb3990);
          __cxa_guard_release(PTR_DAT_04bb3998);
        }
        if (0 < (int)*(uint *)PTR_DAT_04bb3990) {
          uVar7 = 0;
          do {
            if (*(int *)(*(long *)(PTR_DAT_04bb3990 + 8) + uVar7 * 4) == 0x2ec94ec5)
            goto LAB_00cf878c;
            uVar7 = uVar7 + 1;
          } while (*(uint *)PTR_DAT_04bb3990 != uVar7);
        }
        uVar7 = 0;
LAB_00cf878c:
        local_f4 = (undefined4)uVar7;
        ppuVar8 = &local_88;
        puVar9 = &local_98;
        puVar10 = &local_f4;
        puVar11 = PTR_DAT_04bb32e0;
        if (*(long *)(param_4 + 8) != 0) {
          puVar11 = (undefined *)(*(long *)(param_4 + 8) + 0x2a8);
        }
        goto LAB_00cf8b90;
      }
      local_c4 = CONCAT13(local_c4._3_1_,0x6e65);
      local_d4[0] = s_WherearenNpcGarden_0409161f[0];
      local_d4[1] = s_WherearenNpcGarden_0409161f[1];
      local_d4[2] = s_WherearenNpcGarden_0409161f[2];
      local_d4[3] = s_WherearenNpcGarden_0409161f[3];
      local_d4[4] = s_WherearenNpcGarden_0409161f[4];
      local_d4[5] = s_WherearenNpcGarden_0409161f[5];
      local_d4[6] = s_WherearenNpcGarden_0409161f[6];
      local_d4[7] = s_WherearenNpcGarden_0409161f[7];
      acStack_cc[0] = s_WherearenNpcGarden_0409161f[8];
      acStack_cc[1] = s_WherearenNpcGarden_0409161f[9];
      acStack_cc[2] = s_WherearenNpcGarden_0409161f[10];
      acStack_cc[3] = s_WherearenNpcGarden_0409161f[0xb];
      acStack_cc[4] = s_WherearenNpcGarden_0409161f[0xc];
      acStack_cc[5] = s_WherearenNpcGarden_0409161f[0xd];
      acStack_cc[6] = s_WherearenNpcGarden_0409161f[0xe];
      acStack_cc[7] = s_WherearenNpcGarden_0409161f[0xf];
      fVar15 = (float)FUN_037710d0();
      puVar3 = PTR_DAT_04bb2020;
      lVar14 = *(long *)puVar12;
      fVar17 = 0.0;
      if (lVar14 != 0) {
        puVar11 = PTR_DAT_04bb2020 + 0x10;
        local_80 = "SeqFirstVistCustomerOngoing";
        local_88 = puVar11;
        iVar5 = FUN_02758850(&local_88);
        if (iVar5 != 0) {
          local_90 = "SeqFirstVisitCustomerArrivalTalk";
          local_98 = puVar11;
          iVar5 = FUN_02758850(&local_98);
          if (iVar5 == 0) {
            fVar17 = 50.0;
            goto LAB_00cf8a28;
          }
        }
        uVar7 = FUN_036e4924(lVar14);
        fVar17 = 50.0;
        if ((uVar7 & 1) == 0) {
          fVar17 = 0.0;
        }
      }
LAB_00cf8a28:
      puVar11 = PTR_DAT_04bb32e0;
      fVar15 = fVar15 + 0.0;
      local_28._0_4_ = 0x40000000;
      fVar16 = fVar16 + 0.0;
      local_80 = "WHEREAREN_MncTalkReserve_AfterCompleteDemo";
      local_90 = (char *)CONCAT44(local_90._4_4_,param_3 + fVar17);
      puVar1 = PTR_DAT_04bb32e0;
      if (*(long *)(param_4 + 8) != 0) {
        puVar1 = (undefined *)(*(long *)(param_4 + 8) + 0x2a8);
      }
      local_88 = puVar3 + 0x10;
      local_98._0_4_ = fVar15;
      local_98._4_4_ = fVar16;
      iVar5 = FUN_02753180(puVar1,&local_88);
      if (iVar5 == 2) {
        local_98._0_4_ = (float)FUN_037710d0();
        local_28._0_4_ = 0x60000000;
        local_90 = (char *)CONCAT44(local_90._4_4_,fVar16 + 10.0);
        local_98._4_4_ = fVar15;
      }
      else {
        local_80 = "WHEREAREN_MncTalkReserve_AfterCompleteDemo";
        puVar1 = puVar11;
        if (*(long *)(param_4 + 8) != 0) {
          puVar1 = (undefined *)(*(long *)(param_4 + 8) + 0x2a8);
        }
        local_88 = puVar3 + 0x10;
        iVar5 = FUN_02753180(puVar1,&local_88);
        if (iVar5 == 1) {
          lVar14 = *(long *)puVar12;
          fVar16 = (float)*(int *)(lVar14 + 0x1a34) * 5.0 + 5.0;
          local_98._0_4_ = (float)*(int *)(lVar14 + 0x1a30) * 5.0 + 5.0;
          local_90 = (char *)CONCAT44(local_90._4_4_,fVar16);
          local_28._0_4_ =
               FUN_006f0400((float)*(int *)(lVar14 + 0x1a40) * 5.0 - (float)local_98,
                            (float)*(int *)(lVar14 + 0x1a44) * 5.0 - fVar16);
        }
      }
      if (((*PTR_DAT_04bb3998 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3998), iVar5 != 0)) {
        FUN_00773950(PTR_DAT_04bb3990);
        __cxa_guard_release(PTR_DAT_04bb3998);
      }
      if (0 < (int)*(uint *)PTR_DAT_04bb3990) {
        uVar7 = 0;
        do {
          if (*(int *)(*(long *)(PTR_DAT_04bb3990 + 8) + uVar7 * 4) == 0x2ec94ec5)
          goto LAB_00cf8b6c;
          uVar7 = uVar7 + 1;
        } while (*(uint *)PTR_DAT_04bb3990 != uVar7);
      }
      uVar7 = 0;
LAB_00cf8b6c:
      local_ec = (undefined4)uVar7;
      ppuVar8 = (undefined **)&local_98;
      puVar9 = &local_28;
      puVar10 = &local_ec;
      if (*(long *)(param_4 + 8) != 0) {
        puVar11 = (undefined *)(*(long *)(param_4 + 8) + 0x2a8);
      }
LAB_00cf8b90:
      bVar4 = FUN_02917ecc(&local_e8,ppuVar8,puVar9,puVar10,puVar11,&local_b0);
      *(byte *)(param_4 + 0xb4) = bVar4 & 1;
      return;
    }
    local_c4 = 0x305f3065;
    local_c0 = 0;
    local_d4[0] = s_WherearenNpcHouse0_0_04076b93[0];
    local_d4[1] = s_WherearenNpcHouse0_0_04076b93[1];
    local_d4[2] = s_WherearenNpcHouse0_0_04076b93[2];
    local_d4[3] = s_WherearenNpcHouse0_0_04076b93[3];
    local_d4[4] = s_WherearenNpcHouse0_0_04076b93[4];
    local_d4[5] = s_WherearenNpcHouse0_0_04076b93[5];
    local_d4[6] = s_WherearenNpcHouse0_0_04076b93[6];
    local_d4[7] = s_WherearenNpcHouse0_0_04076b93[7];
    acStack_cc[0] = s_WherearenNpcHouse0_0_04076b93[8];
    acStack_cc[1] = s_WherearenNpcHouse0_0_04076b93[9];
    acStack_cc[2] = s_WherearenNpcHouse0_0_04076b93[10];
    acStack_cc[3] = s_WherearenNpcHouse0_0_04076b93[0xb];
    acStack_cc[4] = s_WherearenNpcHouse0_0_04076b93[0xc];
    acStack_cc[5] = s_WherearenNpcHouse0_0_04076b93[0xd];
    acStack_cc[6] = s_WherearenNpcHouse0_0_04076b93[0xe];
    acStack_cc[7] = s_WherearenNpcHouse0_0_04076b93[0xf];
    puVar12 = PTR_DAT_04bb32e0;
    if (*(long *)(param_4 + 8) != 0) {
      puVar12 = (undefined *)(*(long *)(param_4 + 8) + 0x2a8);
    }
    bVar4 = FUN_0291818c(&local_e8,0,puVar12,&local_b0);
    *(byte *)(param_4 + 0xb4) = bVar4 & 1;
    puVar3 = PTR_DAT_04bb2020;
    puVar12 = puVar11;
    if (*(long *)(param_4 + 8) != 0) {
      puVar12 = (undefined *)(*(long *)(param_4 + 8) + 0x2a8);
    }
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_80 = "WHEREAREN_MncTalkReserve_AfterCompleteDemo";
    local_88 = puVar1;
    iVar5 = FUN_02753180(puVar12,&local_88);
    if (iVar5 == 2) {
      local_78 = 0;
      local_88 = PTR_DAT_04bbc1a0 + 0x10;
      local_80 = PTR_DAT_04bb2010 + 0x10;
      uStack_68 = 0;
      local_70 = local_80;
      FUN_01811430(&local_88);
      fVar15 = (float)local_78._4_4_ * 5.0 + 5.0;
      fVar16 = (float)(int)local_78 * 5.0 + 5.0;
      uVar6 = FUN_006f0400((fVar16 + 10.0) - fVar16,fVar15 - (fVar15 + 10.0));
      uVar7 = (ulong)(((float)uVar6 * -8.381903e-08 + 180.0) * 11930465.0);
      pfVar2 = (float *)(PTR_DAT_04bb2d00 + (uVar7 >> 0x19 & 0x7f) * 0x10);
      if ((**(char **)(PTR_DAT_04bc3a88 + 8) != '\0') || (**(char **)(PTR_DAT_04bc39e0 + 8) != '\0')
         ) {
        fVar15 = (float)((uint)uVar7 >> 1 & 0xffffff) * 5.9604645e-08;
        fVar16 = *pfVar2 + fVar15 * pfVar2[1];
        fVar15 = pfVar2[2] + fVar15 * pfVar2[3];
        fVar17 = fVar16 * 0.0;
        fVar15 = fVar15 + fVar15;
        fVar19 = fVar16 * (fVar16 + fVar16);
        fVar18 = (fVar16 + fVar16) * fVar17;
        fVar21 = fVar17 * (fVar17 + fVar17);
        fVar20 = fVar16 * (fVar17 + fVar17);
        fVar17 = fVar15 * fVar17;
        fVar16 = fVar16 * fVar15;
        fVar15 = (fVar20 - fVar17) * 0.0 + ((1.0 - fVar19) - fVar21) * -5.0 +
                 (fVar16 + fVar21) * 10.0;
        fVar20 = ((1.0 - fVar21) - fVar21) * 0.0 + (fVar17 + fVar20) * -5.0 +
                 (fVar18 - fVar17) * 10.0;
        fVar16 = (fVar17 + fVar18) * 0.0 + (fVar21 - fVar16) * -5.0 +
                 ((1.0 - fVar21) - fVar19) * 10.0;
LAB_00cf8908:
        puVar12 = PTR_DAT_04bc39e0;
        *(float *)(PTR_DAT_04bc39e0 + 0xbc) = fVar15;
        *(float *)(puVar12 + 0xc0) = fVar20;
        *(float *)(puVar12 + 0xc4) = fVar16;
      }
    }
    else {
      local_80 = "WHEREAREN_MncTalkReserve_AfterCompleteDemo";
      if (*(long *)(param_4 + 8) != 0) {
        puVar11 = (undefined *)(*(long *)(param_4 + 8) + 0x2a8);
      }
      local_88 = puVar1;
      iVar5 = FUN_02753180(puVar11,&local_88);
      if (iVar5 != 1) {
        FUN_0252d11c(&local_28);
        local_80 = "WHEREAREN_MncTalkReserve_House";
        local_88 = puVar3 + 0x10;
        iVar5 = FUN_02753180(&local_28,&local_88);
        if (iVar5 == 0) {
LAB_00cf89bc:
          uVar7 = FUN_03773570();
          if ((uVar7 & 1) == 0) {
            local_f0 = 0x40000000;
            FUN_00cf7738(0,0,0xc0a00000,0xc0a00000,0,0xc0a00000,&local_f0);
            return;
          }
        }
        else {
          FUN_0252d11c((undefined1 *)((long)&local_28 + 7));
          local_90 = "WHEREAREN_Unlock_DustCloth_01";
          local_98 = puVar3 + 0x10;
          iVar5 = FUN_0274bce0((undefined1 *)((long)&local_28 + 7),&local_98);
          if (iVar5 != 0) goto LAB_00cf89bc;
        }
        puVar12 = PTR_DAT_04bc39e0;
        if ((**(char **)(PTR_DAT_04bc3a88 + 8) != '\0') ||
           (**(char **)(PTR_DAT_04bc39e0 + 8) != '\0')) {
          *(undefined8 *)(PTR_DAT_04bc39e0 + 0xbc) = 0xc0a00000;
          uVar13 = 0x41200000;
          goto LAB_00cf89f8;
        }
        goto LAB_00cf89fc;
      }
      uVar6 = FUN_006f0400(0x41200000,0xc0a00000);
      uVar7 = (ulong)(((float)uVar6 * -8.381903e-08 + 180.0) * 11930465.0);
      pfVar2 = (float *)(PTR_DAT_04bb2d00 + (uVar7 >> 0x19 & 0x7f) * 0x10);
      if ((**(char **)(PTR_DAT_04bc3a88 + 8) != '\0') || (**(char **)(PTR_DAT_04bc39e0 + 8) != '\0')
         ) {
        fVar15 = (float)((uint)uVar7 >> 1 & 0xffffff) * 5.9604645e-08;
        fVar16 = *pfVar2 + fVar15 * pfVar2[1];
        fVar15 = pfVar2[2] + fVar15 * pfVar2[3];
        fVar17 = fVar16 * 0.0;
        fVar15 = fVar15 + fVar15;
        fVar19 = fVar16 * (fVar16 + fVar16);
        fVar18 = (fVar16 + fVar16) * fVar17;
        fVar21 = fVar17 * (fVar17 + fVar17);
        fVar20 = fVar16 * (fVar17 + fVar17);
        fVar17 = fVar15 * fVar17;
        fVar16 = fVar16 * fVar15;
        fVar15 = (fVar20 - fVar17) * 0.0 + ((1.0 - fVar19) - fVar21) * -5.0 +
                 (fVar16 + fVar21) * 5.0;
        fVar20 = ((1.0 - fVar21) - fVar21) * 0.0 + (fVar17 + fVar20) * -5.0 +
                 (fVar18 - fVar17) * 5.0;
        fVar16 = (fVar17 + fVar18) * 0.0 + (fVar21 - fVar16) * -5.0 +
                 ((1.0 - fVar21) - fVar19) * 5.0;
        goto LAB_00cf8908;
      }
    }
LAB_00cf8910:
    *PTR_DAT_04bbe4a0 = 1;
    *(uint *)PTR_DAT_04bbe4a8 = uVar6;
  }
  return;
}


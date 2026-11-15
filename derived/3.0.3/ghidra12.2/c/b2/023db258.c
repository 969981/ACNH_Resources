
uint FUN_023db258(long param_1,ulong param_2,ulong param_3)

{
  byte *pbVar1;
  undefined *puVar2;
  char cVar3;
  short sVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  float *pfVar10;
  undefined8 uVar11;
  ulong uVar12;
  char *pcVar13;
  long *plVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  undefined *local_f0;
  float local_e8;
  float fStack_e4;
  float local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined1 local_d0;
  undefined4 local_cc;
  undefined1 auStack_c8 [2];
  undefined2 local_c6;
  undefined1 local_c4;
  undefined4 local_c0;
  byte local_b4 [4];
  undefined8 local_b0;
  float local_a8;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined1 local_94;
  undefined *local_90;
  int local_88;
  int iStack_84;
  float local_7c;
  float fStack_78;
  float local_74;
  float local_70;
  float fStack_6c;
  float local_68;
  uint local_64;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    lVar9 = FUN_0251e98c(1);
    pfVar10 = (float *)(**(code **)(*(long *)(lVar9 + 0x2350) + 0xf0))(lVar9 + 0x2350);
    lVar9 = *(long *)(param_1 + 0x68);
    if (lVar9 == 0) {
      local_70 = 0.0;
      fStack_6c = 0.0;
      local_68 = 0.0;
    }
    else {
      fVar15 = *pfVar10 * 10.0;
      pfVar10 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(lVar9 + 0x2b4) >> 0x14) & 0xff0));
      fVar17 = (float)(*(uint *)(lVar9 + 0x2b4) & 0xffffff) * 5.9604645e-08;
      fVar20 = *pfVar10 + fVar17 * pfVar10[1];
      fVar17 = pfVar10[2] + fVar17 * pfVar10[3];
      fVar21 = fVar20 * 0.0;
      local_70 = *(float *)(lVar9 + 0x278) + fVar21 * 0.0 + fVar17 * 0.0 + fVar15 * (fVar20 + 0.0);
      fStack_6c = *(float *)(lVar9 + 0x27c) +
                  (fVar21 * 0.0 + 1.0) * 0.0 + fVar17 * 0.0 * 0.0 + fVar15 * fVar21;
      local_68 = *(float *)(lVar9 + 0x280) + (fVar17 * 0.0 * 0.0 - fVar20 * 0.0) + fVar15 * fVar17;
    }
    iVar18 = (int)local_70;
    bVar5 = local_70 < 0.0;
    bVar6 = local_68 < 0.0;
    iVar19 = (int)local_68;
    fStack_78 = (float)FUN_016e026c(0,&local_70,0,0);
    pbVar1 = (byte *)(param_1 + 0x1ee8);
    local_7c = (float)(int)((int)((float)iVar18 / 5.0) - (uint)bVar5 & 0xfffffffe) * 5.0 + 5.0;
    local_74 = (float)(int)((int)((float)iVar19 / 5.0) - (uint)bVar6 & 0xfffffffe) * 5.0 + 5.0;
    uVar11 = FUN_016e1014(&local_7c,0,0);
    local_90 = PTR_DAT_04bb2010 + 0x10;
    local_88 = (int)((float)(int)local_7c / 5.0) - (uint)(local_7c < 0.0);
    iStack_84 = (int)((float)(int)local_74 / 5.0) - (uint)(local_74 < 0.0);
    if ((param_2 & 1) == 0) {
      iVar18 = FUN_0277d6c4();
      if (iVar18 == 0xea79) {
        local_d4 = (uint)local_d4._3_1_ << 0x18;
        local_d4 = CONCAT22(local_d4._2_2_,1);
        local_e8 = *(float *)(*(long *)(param_1 + 0x68) + 0x280);
        local_f0 = *(undefined **)(*(long *)(param_1 + 0x68) + 0x278);
        fStack_e4 = local_7c;
        local_e0 = fStack_78;
        local_dc = CONCAT44(0x1000001,local_74);
        uVar8 = FUN_016f0c64(&local_f0,0);
        if (((uVar8 & 1) == 0) || ((param_3 & 1) != 0)) goto LAB_023db288;
        lVar9 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*pbVar1 * 0x740;
        if (7 < *pbVar1) {
          lVar9 = *(long *)PTR_DAT_04bb4f78 + 0x20;
        }
        *(undefined8 *)(lVar9 + 8) = 0x100000000;
        *(undefined4 *)(lVar9 + 0xa8) = 0;
        uVar12 = FUN_022befa4(lVar9 + 0xb0,&local_90);
        if ((uVar12 & 1) != 0) {
          local_b0 = CONCAT44(fStack_78,local_7c);
          local_94 = 0;
          local_9c = 0;
          local_a4 = 0;
          local_a8 = local_74;
          fVar15 = (float)FUN_016e026c(0,&local_b0,0,0);
          local_b0._4_4_ = fVar15;
          uVar7 = FUN_006f0400(local_7c - *(float *)(*(long *)(param_1 + 0x68) + 0x278),
                               local_74 - *(float *)(*(long *)(param_1 + 0x68) + 0x280));
          lVar9 = FUN_0251e98c(1);
          pfVar10 = (float *)(**(code **)(*(long *)(lVar9 + 0x2a0) + 0xf0))(lVar9 + 0x2a0);
          fVar15 = *pfVar10 + 5.0;
          pfVar10 = (float *)(PTR_DAT_04bb2d00 + (ulong)(uVar7 >> 0x18 ^ 0x80) * 0x10);
          fVar17 = (float)(uVar7 & 0xffffff) * 5.9604645e-08;
          fVar20 = *pfVar10 + fVar17 * pfVar10[1];
          fVar17 = pfVar10[2] + fVar17 * pfVar10[3];
          fVar21 = fVar20 * 0.0;
          local_a4 = CONCAT44(fStack_78 +
                              (fVar21 * 0.0 + 1.0) * 0.0 + fVar17 * 0.0 * 0.0 + fVar15 * fVar21,
                              local_7c + fVar21 * 0.0 + fVar17 * 0.0 + fVar15 * (fVar20 + 0.0));
          local_9c = CONCAT44(local_9c._4_4_,
                              local_74 + (fVar17 * 0.0 * 0.0 - fVar20 * 0.0) + fVar15 * fVar17);
          fVar15 = (float)FUN_016e026c(0,&local_a4,0,0);
          local_9c = local_9c & 0xffffffff;
          local_a4._4_4_ = fVar15;
          iVar18 = FUN_0277d6c4(uVar11);
          local_94 = iVar18 != 0xea79;
          *(undefined8 *)(param_1 + 0x1990) = 0;
          *(undefined8 *)(param_1 + 0x1998) = 0;
          *(undefined8 *)(param_1 + 0x19a0) = 0;
          iVar18 = (int)(local_b0._4_4_ * 4.0);
          *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
          *(undefined8 *)(param_1 + 0x19a8) = 0;
          *(undefined8 *)(param_1 + 0x19b0) = 0;
          *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
          *(undefined8 *)(param_1 + 0x19b8) = 0;
          *(undefined8 *)(param_1 + 0x19c0) = 0;
          *(undefined8 *)(param_1 + 0x19c8) = 0;
          *(undefined8 *)(param_1 + 0x19d0) = 0;
          *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
          *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
          *(undefined2 *)(param_1 + 0x19d8) = 0;
          *(int *)(param_1 + 0x1980) = (int)((float)local_b0 * 999.99994);
          if (0x7ffe < iVar18) {
            iVar18 = 0x7fff;
          }
          if (iVar18 < -0x7fff) {
            iVar18 = -0x8000;
          }
          *(short *)(param_1 + 0x1984) = (short)iVar18;
          iVar18 = (int)(local_a4._4_4_ * 4.0);
          *(int *)(param_1 + 0x1986) = (int)(local_a8 * 999.99994);
          *(int *)(param_1 + 0x198a) = (int)((float)local_a4 * 999.99994);
          if (0x7ffe < iVar18) {
            iVar18 = 0x7fff;
          }
          if (iVar18 < -0x7fff) {
            iVar18 = -0x8000;
          }
          *(short *)(param_1 + 0x198e) = (short)iVar18;
          *(int *)(param_1 + 0x1990) = (int)((float)local_9c * 999.99994);
          *(undefined1 *)(param_1 + 0x1995) = local_94;
          *(char *)(param_1 + 0x1994) = (char)(local_9c >> 0x20);
          local_64 = 0x77;
          *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
          *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
          *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
          *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
          *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
          *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
          *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
          *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
          *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
          *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
          *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
          *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
          *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
          *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
          *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
          *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
          lVar9 = 0;
          if (*(long *)(param_1 + 0x70) != 0) {
            lVar9 = *(long *)(param_1 + 0x70) + 0x278;
          }
          FUN_03ebb160(lVar9,0x77);
          goto LAB_023db288;
        }
      }
    }
    else {
      uVar12 = FUN_0097b460(&local_90);
      puVar2 = PTR_DAT_04bb27d0;
      if ((uVar12 & 1) != 0) {
        plVar14 = *(long **)PTR_DAT_04bb27d0;
        if (*(byte *)(*plVar14 + 0x476) < 2) {
LAB_023db4f4:
          if ((plVar14[5] == 0) || ((int)plVar14[0x10] != 1)) {
LAB_023db508:
            local_b4[0] = *pbVar1;
            if (7 < local_b4[0]) {
              local_b4[0] = 0xff;
            }
            uVar12 = FUN_02669430(local_b4);
            if ((uVar12 & 1) != 0) {
              uVar8 = 1;
              if ((param_3 & 1) != 0) goto LAB_023db288;
              local_d0 = 0;
              local_cc = 1;
              local_f0 = PTR_DAT_04bc2ef8 + 0x10;
              lVar9 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*pbVar1 * 0x740;
              if (7 < *pbVar1) {
                lVar9 = *(long *)PTR_DAT_04bb4f78 + 0x20;
              }
              *(undefined8 *)(lVar9 + 0x118) = 0x100000000;
              *(undefined4 *)(lVar9 + 0x1b8) = 0;
              FUN_007ef010(auStack_c8,PTR_DAT_04bb3170);
              local_c6 = 0;
              local_c4 = 0;
              local_c0 = 0;
              local_e8 = local_7c;
              fStack_e4 = fStack_78;
              local_e0 = local_74;
              local_d4 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x280);
              local_dc = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
              iVar18 = FUN_022e3504(lVar9 + 0x1c0,&local_f0);
              if (iVar18 == 0) {
                local_b0 = CONCAT44(fStack_78,local_7c);
                local_94 = 0;
                local_9c = 0;
                local_a4 = 0;
                local_a8 = local_74;
                uVar16 = FUN_016e026c(0,&local_b0,0,0);
                local_b0 = CONCAT44(uVar16,(float)local_b0);
                fVar17 = local_74 - *(float *)(*(long *)(param_1 + 0x68) + 0x280);
                fVar15 = local_7c;
                local_64 = FUN_006f0400(local_7c - *(float *)(*(long *)(param_1 + 0x68) + 0x278));
                local_64 = local_64 ^ 0x80000000;
                lVar9 = FUN_0251e98c(1);
                pfVar10 = (float *)(**(code **)(*(long *)(lVar9 + 0x2a0) + 0xf0))(lVar9 + 0x2a0);
                uVar16 = FUN_016e45b0(*pfVar10 + 5.0,&local_7c,&local_64);
                local_a4 = CONCAT44(fVar17,uVar16);
                local_9c = CONCAT44(local_9c._4_4_,fVar15);
                uVar16 = FUN_016e026c(0,&local_a4,0,0);
                local_a4 = CONCAT44(uVar16,(float)local_a4);
                local_9c = CONCAT44(1,(float)local_9c);
                local_94 = 0;
                FUN_023dbdcc(param_1,&local_b0);
                goto LAB_023db288;
              }
              goto LAB_023db284;
            }
          }
        }
        else {
          pcVar13 = (char *)FUN_02582a24(pbVar1);
          plVar14 = *(long **)puVar2;
          cVar3 = *pcVar13;
          uVar12 = FUN_01d3e29c(*plVar14 + 8);
          pcVar13 = (char *)(*plVar14 + 0x472);
          if ((uVar12 & 1) == 0) {
            pcVar13 = PTR_DAT_04bc1220;
          }
          if (cVar3 == *pcVar13) {
            plVar14 = *(long **)puVar2;
            if (plVar14 != (long *)0x0) goto LAB_023db4f4;
            goto LAB_023db508;
          }
        }
      }
      sVar4 = *(short *)PTR_DAT_04bb6298;
      if (sVar4 != -1) {
        local_f0 = (undefined *)CONCAT44(local_f0._4_4_,0x20);
        puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8;
        if (0xff < (uint)(int)sVar4) {
          puVar2 = PTR_DAT_04bc39f8;
        }
        if ((*(uint *)(puVar2 + 4) & 1) != 0) {
          uVar8 = FUN_0097b460(&local_90);
          if (((uVar8 & 1) == 0) || ((param_3 & 1) != 0)) goto LAB_023db288;
          local_d0 = 0;
          local_cc = 1;
          local_f0 = PTR_DAT_04bc2ef8 + 0x10;
          lVar9 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*pbVar1 * 0x740;
          if (7 < *pbVar1) {
            lVar9 = *(long *)PTR_DAT_04bb4f78 + 0x20;
          }
          *(undefined8 *)(lVar9 + 0x118) = 0x100000000;
          *(undefined4 *)(lVar9 + 0x1b8) = 0;
          FUN_007ef010(auStack_c8,PTR_DAT_04bb3170);
          local_c6 = 0;
          local_c4 = 0;
          local_c0 = 0;
          local_e8 = local_7c;
          fStack_e4 = fStack_78;
          local_e0 = local_74;
          local_d4 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x280);
          local_dc = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
          iVar18 = FUN_022e3504(lVar9 + 0x1c0,&local_f0);
          if (iVar18 == 0) {
            local_b0 = CONCAT44(fStack_78,local_7c);
            local_94 = 0;
            local_9c = 0;
            local_a4 = 0;
            local_a8 = local_74;
            fVar15 = (float)FUN_016e026c(0,&local_b0,0,0);
            local_b0._4_4_ = fVar15;
            uVar8 = FUN_006f0400(local_7c - *(float *)(*(long *)(param_1 + 0x68) + 0x278),
                                 local_74 - *(float *)(*(long *)(param_1 + 0x68) + 0x280));
            lVar9 = FUN_0251e98c(1);
            pfVar10 = (float *)(**(code **)(*(long *)(lVar9 + 0x2a0) + 0xf0))(lVar9 + 0x2a0);
            fVar15 = *pfVar10 + 5.0;
            pfVar10 = (float *)(PTR_DAT_04bb2d00 + (ulong)(uVar8 >> 0x18 ^ 0x80) * 0x10);
            fVar17 = (float)(uVar8 & 0xffffff) * 5.9604645e-08;
            fVar20 = *pfVar10 + fVar17 * pfVar10[1];
            fVar17 = pfVar10[2] + fVar17 * pfVar10[3];
            fVar21 = fVar20 * 0.0;
            local_a4 = CONCAT44(fStack_78 +
                                (fVar21 * 0.0 + 1.0) * 0.0 + fVar17 * 0.0 * 0.0 + fVar15 * fVar21,
                                local_7c + fVar21 * 0.0 + fVar17 * 0.0 + fVar15 * (fVar20 + 0.0));
            local_9c = CONCAT44(local_9c._4_4_,
                                local_74 + (fVar17 * 0.0 * 0.0 - fVar20 * 0.0) + fVar15 * fVar17);
            fVar15 = (float)FUN_016e026c(0,&local_a4,0,0);
            local_a4 = CONCAT44(fVar15,(float)local_a4);
            local_9c = CONCAT44(1,(float)local_9c);
            local_94 = 0;
            *(undefined8 *)(param_1 + 0x1990) = 0;
            iVar18 = (int)(local_b0._4_4_ * 4.0);
            *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
            *(undefined8 *)(param_1 + 0x1998) = 0;
            *(undefined8 *)(param_1 + 0x19a0) = 0;
            *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
            *(undefined8 *)(param_1 + 0x19a8) = 0;
            *(undefined8 *)(param_1 + 0x19b0) = 0;
            *(undefined8 *)(param_1 + 0x19b8) = 0;
            *(undefined8 *)(param_1 + 0x19c0) = 0;
            *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
            *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
            *(undefined8 *)(param_1 + 0x19c8) = 0;
            *(undefined8 *)(param_1 + 0x19d0) = 0;
            *(undefined2 *)(param_1 + 0x19d8) = 0;
            *(int *)(param_1 + 0x1980) = (int)((float)local_b0 * 999.99994);
            if (0x7ffe < iVar18) {
              iVar18 = 0x7fff;
            }
            if (iVar18 < -0x7fff) {
              iVar18 = -0x8000;
            }
            *(short *)(param_1 + 0x1984) = (short)iVar18;
            *(int *)(param_1 + 0x1986) = (int)(local_a8 * 999.99994);
            *(int *)(param_1 + 0x198a) = (int)((float)local_a4 * 999.99994);
            iVar18 = (int)(fVar15 * 4.0);
            if (0x7ffe < iVar18) {
              iVar18 = 0x7fff;
            }
            if (iVar18 < -0x7fff) {
              iVar18 = -0x8000;
            }
            *(short *)(param_1 + 0x198e) = (short)iVar18;
            *(int *)(param_1 + 0x1990) = (int)((float)local_9c * 999.99994);
            *(undefined1 *)(param_1 + 0x1995) = 0;
            *(undefined1 *)(param_1 + 0x1994) = 1;
            local_64 = 0x77;
            *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
            *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
            *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
            *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
            *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
            *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
            *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
            *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
            *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
            *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
            *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
            *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
            *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
            *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
            *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
            *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
            lVar9 = 0;
            if (*(long *)(param_1 + 0x70) != 0) {
              lVar9 = *(long *)(param_1 + 0x70) + 0x278;
            }
            FUN_03ebb160(lVar9,0x77);
            uVar8 = 1;
            goto LAB_023db288;
          }
        }
      }
    }
  }
LAB_023db284:
  uVar8 = 0;
LAB_023db288:
  return uVar8 & 1;
}


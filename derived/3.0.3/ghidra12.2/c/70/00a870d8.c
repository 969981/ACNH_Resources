
/* WARNING: Removing unreachable block (ram,0x00a87d60) */
/* WARNING: Removing unreachable block (ram,0x00a87d34) */
/* WARNING: Removing unreachable block (ram,0x00a87d40) */
/* WARNING: Removing unreachable block (ram,0x00a87d9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a870d8(long param_1)

{
  int *piVar1;
  undefined *puVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
  ushort *puVar19;
  byte *pbVar20;
  uint *puVar21;
  uint *puVar22;
  short *psVar23;
  short *psVar24;
  undefined *puVar25;
  undefined1 uStack_1c1;
  undefined1 local_1c0 [4];
  byte local_1bc [4];
  undefined8 local_1b8;
  char *apcStack_1b0 [2];
  uint local_1a0;
  undefined8 local_19c;
  undefined8 local_194;
  undefined8 local_18c;
  undefined8 local_184;
  undefined8 local_17c;
  undefined8 local_174;
  undefined8 local_16c;
  undefined8 local_164;
  undefined8 local_15c;
  undefined8 local_154;
  undefined8 local_14c;
  undefined8 local_144;
  undefined1 local_72;
  undefined4 local_70;
  
  *(undefined2 *)(param_1 + 0x65438) = 0;
  *(undefined1 *)(param_1 + 0x6543e) = 0;
  *(undefined4 *)(param_1 + 0x6543a) = 0x101;
  psVar23 = (short *)PTR_DAT_04bbdeb0;
  psVar24 = (short *)PTR_DAT_04bb6298;
  uVar5 = *(ushort *)PTR_DAT_04bb6298;
  uVar15 = (ulong)(short)uVar5;
  if (uVar15 == 0xffffffffffffffff) {
LAB_00a87300:
    sVar7 = *psVar23;
    if (sVar7 == -1) {
LAB_00a8735c:
      if (uVar5 != 0xffff) goto LAB_00a87364;
LAB_00a87414:
      sVar7 = *psVar23;
      if (sVar7 != -1) {
        local_1b8 = (undefined *)CONCAT44(local_1b8._4_4_,0x11);
        puVar21 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8);
        if (0xff < (uint)(int)sVar7) {
          puVar21 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar21 >> 0x11 & 1) != 0) goto LAB_00a874a0;
      }
      if (uVar5 != 0xffff) {
LAB_00a87464:
        local_1b8 = (undefined *)CONCAT44(local_1b8._4_4_,0xe);
        puVar21 = (uint *)(PTR_DAT_04bc39f8 + (uVar15 & 0xffffffff) * 8);
        if (0xff < uVar5) {
          puVar21 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar21 >> 0xe & 1) != 0) goto LAB_00a874a0;
      }
    }
    else {
      local_1b8 = (undefined *)CONCAT44(local_1b8._4_4_,0x1f);
      piVar1 = (int *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8);
      if (0xff < (uint)(int)sVar7) {
        piVar1 = (int *)PTR_DAT_04bc39f8;
      }
      if (-1 < *piVar1) goto LAB_00a8735c;
      *(undefined4 *)(param_1 + 0x65446) = 0x1ffffff;
LAB_00a874a0:
      lVar18 = DAT_04da7238;
      puVar16 = *(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10);
      if ((*(byte *)(*(long *)PTR_DAT_04bb46b0 + 0x453) & 1) == 0) {
        lVar11 = (**(code **)(*(long *)*puVar16 + 0x38))();
        lVar12 = 0;
        if (lVar11 != 0) {
          lVar12 = lVar11 + 0x70;
        }
        plVar17 = *(long **)(lVar12 + 0x28);
      }
      else if ((puVar16 == (undefined8 *)0x0) || ((long *)puVar16[0x26] == (long *)0x0)) {
        lVar12 = 0;
        plVar17 = _DAT_00000028;
      }
      else {
        lVar12 = (**(code **)(*(long *)puVar16[0x26] + 0x38))();
        plVar17 = *(long **)(lVar12 + 0x28);
      }
      if ((plVar17 == (long *)0x0) || ((undefined8 *)*plVar17 == (undefined8 *)0x0)) {
        pcVar13 = (code *)(*(long *)(lVar12 + 0x10) + *(long *)(lVar12 + 8) + 0x1e35f0);
        lVar18 = lVar18 + 0x65000;
        goto LAB_00a87890;
      }
      uVar15 = (*(code *)**(undefined8 **)*plVar17)();
      FUN_00930750(lVar18 + 0x651f0,*(long *)(lVar12 + 0x10) + *(long *)(lVar12 + 8) + 0x1e35f0);
      if (((uVar15 & 1) != 0) && (lVar18 = *(long *)(lVar12 + 0x28), lVar18 != 0))
      goto LAB_00a8784c;
    }
  }
  else {
    piVar1 = (int *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar5 * 8);
    if (0xff < (uint)(int)(short)uVar5) {
      piVar1 = (int *)PTR_DAT_04bc39f8;
    }
    if ((((*piVar1 < 0) &&
         (uVar9 = (uint)*(ushort *)(*(long *)PTR_DAT_04bb4928 + 10) - (uint)DAT_0534e320,
         uVar9 < DAT_0534e300)) &&
        (puVar21 = *(uint **)(DAT_0534e308 + (long)(int)uVar9 * 8), puVar21 != (uint *)0x0)) &&
       (uVar9 = *puVar21, uVar9 != 0 && puVar21 != (uint *)(ulong)uVar9)) {
      puVar22 = (uint *)((long)puVar21 - (long)(ulong)uVar9);
      if (((*puVar22 != 0) && (uVar9 = puVar22[1], uVar9 != 0)) && ((ulong)(ushort)puVar22[2] != 0))
      {
        lVar18 = 0xc;
        if (*(char *)((long)puVar22 + 10) != '\0') {
          lVar18 = 0x1c;
        }
        lVar18 = (long)puVar22 + lVar18 + (ulong)(ushort)puVar22[2] * 8;
        if (lVar18 != 0) {
          uVar3 = 0;
          if ((ulong)uVar9 != 0) {
            uVar3 = (uint)((ulong)((long)puVar21 - lVar18) / (ulong)uVar9);
          }
          if (*puVar22 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < *(uint *)PTR_DAT_04bc0e58) &&
             (*(short *)(*(long *)(PTR_DAT_04bc0e58 + 8) + (long)(int)uVar3 * 2) == 3)) {
            *(undefined4 *)(param_1 + 0x65446) = 0x1000000;
          }
        }
      }
    }
    piVar1 = (int *)(PTR_DAT_04bc39f8 + (uVar15 & 0xffffffff) * 8);
    if (0xff < uVar5) {
      piVar1 = (int *)PTR_DAT_04bc39f8;
    }
    if (*piVar1 < 0) {
      uVar6 = *psVar23;
      if ((long)(short)uVar6 != 0xffffffffffffffff) {
        piVar1 = (int *)(PTR_DAT_04bc39f8 + ((long)(short)uVar6 & 0xffffffffU) * 8);
        if (0xff < uVar6) {
          piVar1 = (int *)PTR_DAT_04bc39f8;
        }
        if (*piVar1 < 0) goto LAB_00a872c4;
      }
      local_1b8 = (undefined *)CONCAT17((char)((ulong)local_1b8 >> 0x38),0x1010000);
      memset(apcStack_1b0,0,0x13e);
      local_72 = 1;
      local_70 = 0x34;
      uVar9 = nn::os::GetSystemTick();
      local_19c = 0;
      uVar3 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 1;
      local_194 = 0;
      local_18c = 0;
      local_184 = 0;
      uVar9 = uVar3 ^ uVar3 * 0x800;
      local_17c = 0;
      local_174 = 0;
      uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 2;
      local_16c = 0;
      local_164 = 0;
      local_15c = 0;
      local_154 = 0;
      local_14c = 0;
      uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 3;
      local_144 = 0;
      uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 4;
      local_1a0 = (uint)((ulong)(uVar9 >> 8 ^ uVar3 >> 0x13 ^ uVar9 ^ uVar3) * 0x7fffffff >> 0x20) |
                  0x80000000;
      FUN_028e1844(&local_1b8);
LAB_00a875dc:
      pcVar13 = (code *)&local_1b8;
      lVar18 = DAT_04da7238 + 0x65000;
    }
    else {
LAB_00a872c4:
      local_1b8 = (undefined *)CONCAT44(local_1b8._4_4_,0x1f);
      piVar1 = (int *)(PTR_DAT_04bc39f8 + (uVar15 & 0xffffffff) * 8);
      if (0xff < uVar5) {
        piVar1 = (int *)PTR_DAT_04bc39f8;
      }
      if (-1 < *piVar1) goto LAB_00a87300;
LAB_00a87364:
      puVar25 = local_1b8;
      lVar18 = DAT_04da7238;
      puVar21 = (uint *)(PTR_DAT_04bc39f8 + (uVar15 & 0xffffffff) * 8);
      if (0xff < uVar5) {
        puVar21 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar21 >> 0x11 & 1) == 0) {
LAB_00a873dc:
        local_1b8 = (undefined *)CONCAT44(local_1b8._4_4_,0x11);
        puVar21 = (uint *)(PTR_DAT_04bc39f8 + (uVar15 & 0xffffffff) * 8);
        if (0xff < uVar5) {
          puVar21 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar21 >> 0x11 & 1) == 0) goto LAB_00a87414;
        goto LAB_00a87464;
      }
      uVar6 = *psVar23;
      if ((long)(short)uVar6 != 0xffffffffffffffff) {
        puVar21 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar6 & 0xffffffffU) * 8);
        if (0xff < uVar6) {
          puVar21 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar21 >> 0x11 & 1) != 0) goto LAB_00a873dc;
      }
      local_1b8 = (undefined *)CONCAT44(local_1b8._4_4_,0x11);
      uVar9 = (uint)*(ushort *)(*(long *)PTR_DAT_04bb4928 + 8) - (uint)DAT_0534f428;
      if ((uVar9 < DAT_0534f408) &&
         ((puVar21 = *(uint **)(DAT_0534f410 + (long)(int)uVar9 * 8), puVar21 != (uint *)0x0 &&
          (uVar9 = *puVar21, uVar9 != 0 && puVar21 != (uint *)(ulong)uVar9)))) {
        puVar22 = (uint *)((long)puVar21 - (long)(ulong)uVar9);
        if ((*puVar22 != 0) &&
           ((uVar9 = puVar22[1], uVar9 != 0 && ((ulong)(ushort)puVar22[2] != 0)))) {
          lVar12 = 0xc;
          if (*(char *)((long)puVar22 + 10) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar22 + lVar12 + (ulong)(ushort)puVar22[2] * 8;
          if (lVar12 != 0) {
            uVar3 = 0;
            if ((ulong)uVar9 != 0) {
              uVar3 = (uint)((ulong)((long)puVar21 - lVar12) / (ulong)uVar9);
            }
            if (*puVar22 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < *(uint *)PTR_DAT_04bc0e98) &&
               (*(short *)(*(long *)(PTR_DAT_04bc0e98 + 8) + (long)(int)uVar3 * 2) == 1)) {
              local_1b8 = (undefined *)CONCAT17((char)((ulong)puVar25 >> 0x38),0x1010000);
              memset(apcStack_1b0,0,0x13e);
              local_72 = 1;
              local_70 = 0x34;
              uVar9 = nn::os::GetSystemTick();
              local_19c = 0;
              uVar3 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 1;
              local_194 = 0;
              local_18c = 0;
              local_184 = 0;
              uVar9 = uVar3 ^ uVar3 * 0x800;
              local_17c = 0;
              local_174 = 0;
              uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 2;
              local_16c = 0;
              local_164 = 0;
              local_15c = 0;
              local_154 = 0;
              local_14c = 0;
              uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 3;
              local_144 = 0;
              uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 4;
              local_1a0 = (uint)((ulong)(uVar9 >> 8 ^ uVar3 >> 0x13 ^ uVar9 ^ uVar3) * 0x7fffffff >>
                                0x20) | 0x80000000;
              FUN_028e15b0(&local_1b8);
              goto LAB_00a875dc;
            }
          }
        }
      }
      lVar11 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x38))();
      lVar12 = 0;
      if (lVar11 != 0) {
        lVar12 = lVar11 + 0x276cb0;
      }
      if ((*(long **)(lVar12 + 0x28) != (long *)0x0) &&
         (puVar16 = (undefined8 *)**(long **)(lVar12 + 0x28), puVar16 != (undefined8 *)0x0)) {
        uVar15 = (**(code **)*puVar16)();
        FUN_00930750(lVar18 + 0x651f0,*(long *)(lVar12 + 0x10) + *(long *)(lVar12 + 8) + 0x3c970c);
        if (((uVar15 & 1) == 0) || (lVar18 = *(long *)(lVar12 + 0x28), lVar18 == 0))
        goto LAB_00a87898;
LAB_00a8784c:
        if (*(undefined8 **)(lVar18 + 8) != (undefined8 *)0x0) {
          (**(code **)**(undefined8 **)(lVar18 + 8))();
        }
        goto LAB_00a87898;
      }
      pcVar13 = FUN_003c9708 + *(long *)(lVar12 + 0x10) + *(long *)(lVar12 + 8) + 4;
      lVar18 = lVar18 + 0x65000;
    }
LAB_00a87890:
    FUN_00930750(lVar18 + 0x1f0,pcVar13);
  }
LAB_00a87898:
  puVar25 = PTR_DAT_04bc3a80;
  lVar18 = *(long *)PTR_DAT_04bb2720;
  if (lVar18 == 0) {
    puVar16 = &DAT_055c04a0;
  }
  else {
    puVar16 = &DAT_055c04a0;
    if (*(long *)(lVar18 + 0x330) != 0) {
      puVar16 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
      iVar8 = FUN_006bd550(*puVar16,0);
      puVar16 = (undefined8 *)puVar25;
      if (iVar8 != 0x758f7eaf) {
        puVar16 = &DAT_055c04a0;
      }
    }
  }
  lVar18 = DAT_04da7238;
  puVar2 = PTR_DAT_04bc39f8;
  iVar8 = *(int *)(puVar16 + 7);
  if (((iVar8 == -0x7975b8e8) || (iVar8 == -0x17df00c3)) || (iVar8 == -0x3e092032)) {
    if (*(long *)PTR_DAT_04bb27f8 != 0) {
      puVar19 = *(ushort **)PTR_DAT_04bc3a48;
      if (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) == 0) {
        if (puVar19 != (ushort *)0x0) goto LAB_00a87ae0;
LAB_00a87ae8:
        local_1bc[0] = 0;
        local_1c0[0] = 0;
        uVar15 = FUN_037848b0(local_1bc,local_1c0);
        if (((uVar15 & 1) != 0) && (local_1bc[0] - 5 < 0xd)) {
          FUN_025196e4(&uStack_1c1);
          puVar25 = PTR_DAT_04bb2020 + 0x10;
          apcStack_1b0[0] = "RainbowReserve";
          local_1b8 = puVar25;
          iVar8 = FUN_02757a80(&uStack_1c1,&local_1b8);
          if (iVar8 != 0) {
            apcStack_1b0[0] = "RainbowNum";
            local_1b8 = puVar25;
            FUN_02757de8(&uStack_1c1,&local_1b8,iVar8);
            apcStack_1b0[0] = "RainbowReserve";
            local_1b8 = puVar25;
            FUN_02757de8(&uStack_1c1,&local_1b8,0);
          }
        }
      }
      else if ((puVar19 != (ushort *)0x0) && ((*puVar19 & 1) != 0)) {
LAB_00a87ae0:
        if ((*puVar19 & 1) == 0) goto LAB_00a87ae8;
      }
    }
    local_1b8._7_1_ = (undefined1)((ulong)local_1b8 >> 0x38);
    local_1b8._0_7_ = 0x1010000;
    memset(apcStack_1b0,0,0x13e);
    local_72 = 1;
    local_70 = 0x34;
    uVar9 = nn::os::GetSystemTick();
    local_19c = 0;
    uVar3 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 1;
    local_194 = 0;
    local_18c = 0;
    local_184 = 0;
    local_17c = 0;
    uVar9 = uVar3 ^ uVar3 * 0x800;
    local_174 = 0;
    uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 2;
    local_16c = 0;
    local_164 = 0;
    local_15c = 0;
    local_154 = 0;
    local_14c = 0;
    uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 3;
    local_144 = 0;
    uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 4;
    local_1a0 = (uint)((ulong)(uVar9 >> 8 ^ uVar3 >> 0x13 ^ uVar9 ^ uVar3) * 0x7fffffff >> 0x20) |
                0x80000000;
    FUN_028e1bc0(&local_1b8);
    FUN_00930750(DAT_04da7238 + 0x65454,&local_1b8);
    local_1b8 = (undefined *)CONCAT17(local_1b8._7_1_,0x1010000);
    memset(apcStack_1b0,0,0x13e);
    local_72 = 1;
    local_70 = 0x34;
    uVar9 = nn::os::GetSystemTick();
    local_19c = 0;
    local_194 = 0;
    uVar3 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 1;
    local_18c = 0;
    uVar9 = uVar3 ^ uVar3 * 0x800;
    local_184 = 0;
    local_17c = 0;
    local_174 = 0;
    uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 2;
    local_16c = 0;
    local_164 = 0;
    local_15c = 0;
    local_154 = 0;
    local_14c = 0;
    uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 3;
    local_144 = 0;
    uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 4;
    local_1a0 = (uint)((ulong)(uVar9 >> 8 ^ uVar3 >> 0x13 ^ uVar9 ^ uVar3) * 0x7fffffff >> 0x20) |
                0x80000000;
    FUN_028e1df0(&local_1b8);
    FUN_00930750(DAT_04da7238 + 0x655a0,&local_1b8);
    lVar18 = DAT_04da7238;
    local_1b8 = (undefined *)((ulong)local_1b8 & 0xffffffff00000000);
    uVar15 = FUN_03784bd0();
    if ((uVar15 & 1) == 0) {
      puVar16 = (undefined8 *)(lVar18 + 0x65454);
    }
    else {
      puVar16 = (undefined8 *)(lVar18 + 0x655a0);
    }
    lVar18 = lVar18 + 0x65000;
    psVar23 = (short *)PTR_DAT_04bbdeb0;
    psVar24 = (short *)PTR_DAT_04bb6298;
    puVar25 = PTR_DAT_04bc3a80;
LAB_00a87dc8:
    FUN_00930750(lVar18 + 0x1f0,puVar16);
  }
  else {
    sVar7 = *psVar24;
    if (sVar7 != -1) {
      local_1b8 = (undefined *)CONCAT44(local_1b8._4_4_,0x19);
      puVar21 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8);
      if (0xff < (uint)(int)sVar7) {
        puVar21 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar21 >> 0x19 & 1) != 0) {
        uVar15 = FUN_0290d828();
        if ((uVar15 & 1) == 0) {
          uVar5 = *psVar24;
          if ((long)(short)uVar5 != 0xffffffffffffffff) {
            local_1b8 = (undefined *)CONCAT44(local_1b8._4_4_,0x1a);
            puVar21 = (uint *)(puVar2 + ((long)(short)uVar5 & 0xffffffffU) * 8);
            if (0xff < uVar5) {
              puVar21 = (uint *)puVar2;
            }
            if ((*puVar21 >> 0x1a & 1) != 0) goto LAB_00a88164;
          }
          lVar18 = *(long *)PTR_DAT_04bb39b0;
          pbVar20 = PTR_DAT_04bb32e0;
          if (lVar18 == 0) {
LAB_00a880b0:
            if (*pbVar20 < 8) goto LAB_00a88128;
LAB_00a880bc:
            if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_00a88120:
              pbVar20 = PTR_DAT_04bb5038;
              goto LAB_00a88128;
            }
            lVar18 = **(long **)PTR_DAT_04bb27d0;
            bVar4 = *(byte *)(lVar18 + 0x473);
            pbVar20 = PTR_DAT_04bb5038;
            if ((long)(char)bVar4 != 0xffffffffffffffff) {
              puVar21 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
              if (7 < bVar4) {
                puVar21 = (uint *)(lVar18 + 0x48);
              }
              if ((*puVar21 & 8) != 0) {
                pbVar20 = (byte *)(lVar18 + 0x471);
              }
            }
            local_1bc[0] = *pbVar20;
            if (7 < local_1bc[0]) goto LAB_00a88120;
          }
          else {
            if (*(int *)(lVar18 + 0x15c) != 0) {
              pbVar20 = (byte *)(lVar18 + 0x158);
            }
            if (7 < *pbVar20) {
              if ((*(int *)(lVar18 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
                pbVar20 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
                goto LAB_00a880b0;
              }
              goto LAB_00a880bc;
            }
LAB_00a88128:
            local_1bc[0] = *pbVar20;
            if (7 < local_1bc[0]) {
              local_1bc[0] = 0xff;
            }
          }
          local_1b8 = PTR_DAT_04bb2020 + 0x10;
          apcStack_1b0[0] = "RainbowNum";
          FUN_02757de8(local_1bc,&local_1b8,0);
        }
LAB_00a88164:
        local_1b8 = (undefined *)CONCAT17((char)((ulong)local_1b8 >> 0x38),0x1010000);
        memset(apcStack_1b0,0,0x13e);
        local_72 = 1;
        local_70 = 0x34;
        uVar9 = nn::os::GetSystemTick();
        local_19c = 0;
        uVar3 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 1;
        local_194 = 0;
        local_18c = 0;
        local_184 = 0;
        uVar9 = uVar3 ^ uVar3 * 0x800;
        local_17c = 0;
        local_174 = 0;
        uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 2;
        local_16c = 0;
        local_164 = 0;
        local_15c = 0;
        local_154 = 0;
        local_14c = 0;
        uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 3;
        local_144 = 0;
        uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 4;
        local_1a0 = (uint)((ulong)(uVar9 >> 8 ^ uVar3 >> 0x13 ^ uVar9 ^ uVar3) * 0x7fffffff >> 0x20)
                    | 0x80000000;
        FUN_028e2020(&local_1b8);
        puVar16 = &local_1b8;
        lVar18 = DAT_04da7238 + 0x65000;
        goto LAB_00a87dc8;
      }
    }
    sVar7 = *psVar23;
    if (sVar7 != -1) {
      local_1b8 = (undefined *)CONCAT44(local_1b8._4_4_,0x19);
      puVar21 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8);
      if (0xff < (uint)(int)sVar7) {
        puVar21 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar21 >> 0x19 & 1) != 0) {
        lVar12 = *(long *)PTR_DAT_04bb46b0;
        if (lVar12 == 0) {
LAB_00a8802c:
          lVar12 = 0;
        }
        else {
          puVar16 = *(undefined8 **)(lVar12 + 0x10);
          if ((*(byte *)(lVar12 + 0x453) & 1) == 0) {
            lVar11 = (**(code **)(*(long *)*puVar16 + 0x38))();
            lVar12 = 0;
            if (lVar11 != 0) {
              lVar12 = lVar11 + 0x70;
            }
          }
          else {
            if ((puVar16 == (undefined8 *)0x0) || ((long *)puVar16[0x26] == (long *)0x0))
            goto LAB_00a8802c;
            lVar12 = (**(code **)(*(long *)puVar16[0x26] + 0x38))();
          }
        }
        if ((*(long **)(lVar12 + 0x28) == (long *)0x0) ||
           (puVar16 = (undefined8 *)**(long **)(lVar12 + 0x28), puVar16 == (undefined8 *)0x0)) {
          puVar16 = (undefined8 *)(*(long *)(lVar12 + 0x10) + *(long *)(lVar12 + 8) + 0x1e35f0);
          lVar18 = lVar18 + 0x65000;
          goto LAB_00a87dc8;
        }
        uVar15 = (**(code **)*puVar16)();
        FUN_00930750(lVar18 + 0x651f0,*(long *)(lVar12 + 0x10) + *(long *)(lVar12 + 8) + 0x1e35f0);
        if ((((uVar15 & 1) != 0) && (*(long *)(lVar12 + 0x28) != 0)) &&
           (puVar16 = *(undefined8 **)(*(long *)(lVar12 + 0x28) + 8), puVar16 != (undefined8 *)0x0))
        {
          (**(code **)*puVar16)();
        }
      }
    }
  }
  sVar7 = *psVar24;
  if (sVar7 != -1) {
    local_1b8 = (undefined *)CONCAT44(local_1b8._4_4_,0x20);
    puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8;
    if (0xff < (uint)(int)sVar7) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar2 + 4) & 1) != 0) {
      lVar18 = param_1 + 0x65838 + (ulong)*(uint *)(param_1 + 0x65ad0) * 0x14c;
      if (1 < *(uint *)(param_1 + 0x65ad0)) {
        lVar18 = param_1 + 0x65838;
      }
      FUN_00930750(param_1 + 0x651f0,lVar18);
      uVar10 = FUN_00a86d64(param_1,param_1 + 0x651e0);
      *(undefined4 *)(param_1 + 0x653e0) = uVar10;
      *(undefined8 *)(param_1 + 0x651d0) = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      goto LAB_00a87f94;
    }
  }
  sVar7 = *psVar23;
  if (sVar7 == -1) goto LAB_00a87f94;
  local_1b8 = (undefined *)CONCAT44(local_1b8._4_4_,0x20);
  puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8;
  if (0xff < (uint)(int)sVar7) {
    puVar2 = PTR_DAT_04bc39f8;
  }
  if ((*(uint *)(puVar2 + 4) & 1) == 0) goto LAB_00a87f94;
  lVar18 = *(long *)PTR_DAT_04bb46b0;
  if (lVar18 == 0) {
LAB_00a87f14:
    lVar18 = 0;
  }
  else {
    puVar16 = *(undefined8 **)(lVar18 + 0x10);
    if ((*(byte *)(lVar18 + 0x453) & 1) == 0) {
      lVar12 = (**(code **)(*(long *)*puVar16 + 0x38))();
      lVar18 = 0;
      if (lVar12 != 0) {
        lVar18 = lVar12 + 0x70;
      }
    }
    else {
      if ((puVar16 == (undefined8 *)0x0) || ((long *)puVar16[0x26] == (long *)0x0))
      goto LAB_00a87f14;
      lVar18 = (**(code **)(*(long *)puVar16[0x26] + 0x38))();
    }
  }
  if ((*(long **)(lVar18 + 0x28) == (long *)0x0) ||
     (puVar16 = (undefined8 *)**(long **)(lVar18 + 0x28), puVar16 == (undefined8 *)0x0)) {
    FUN_00930750(param_1 + 0x651f0,*(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8) + 0x1e35f0);
  }
  else {
    uVar15 = (**(code **)*puVar16)();
    FUN_00930750(param_1 + 0x651f0,*(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8) + 0x1e35f0);
    if ((((uVar15 & 1) != 0) && (*(long *)(lVar18 + 0x28) != 0)) &&
       (puVar16 = *(undefined8 **)(*(long *)(lVar18 + 0x28) + 8), puVar16 != (undefined8 *)0x0)) {
      (**(code **)*puVar16)();
    }
  }
LAB_00a87f94:
  if (*(int *)(puVar25 + 0x38) == -0x143208e5) {
    uVar14 = 1;
  }
  else if (*(int *)(puVar25 + 0x38) == 0x617f19ef) {
    uVar14 = 9;
  }
  else {
    uVar14 = 0;
  }
  FUN_00a88244(DAT_04da7238,uVar14);
  FUN_00a88608(param_1,0);
  return;
}


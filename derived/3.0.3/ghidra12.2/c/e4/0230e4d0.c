
void FUN_0230e4d0(long param_1,long param_2,long *param_3)

{
  byte *pbVar1;
  undefined *puVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  short sVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  long *plVar13;
  undefined1 *puVar14;
  void *pvVar15;
  char *pcVar16;
  long lVar17;
  byte bVar18;
  int iVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  char *pcVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined8 local_144;
  undefined8 local_13c;
  undefined *local_130;
  undefined1 *puStack_128;
  undefined4 local_120;
  undefined1 local_11c [127];
  undefined1 local_9d;
  undefined4 local_98;
  undefined2 local_94;
  undefined8 local_90;
  int local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  if (*(byte *)(param_1 + 0x1ee8) < 8) {
    FUN_0264f5a0(pbVar1);
  }
  puVar2 = PTR_DAT_04bb2720;
  if ((*(long *)PTR_DAT_04bb27f8 == 0) ||
     (puVar7 = (undefined *)CONCAT44(local_160._4_4_,(uint)local_160),
     (*(byte *)(*(long *)PTR_DAT_04bb27f8 + 0x1a71) >> 1 & 1) == 0)) {
    lVar17 = *(long *)PTR_DAT_04bb2720;
    if (lVar17 == 0) {
      puVar23 = &DAT_055c04a0;
    }
    else {
      puVar23 = &DAT_055c04a0;
      if (*(long *)(lVar17 + 0x330) != 0) {
        puVar23 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
        iVar9 = FUN_006bd550(*puVar23,0);
        puVar23 = (undefined8 *)PTR_DAT_04bc3a78;
        if (iVar9 != 0x758f7eaf) {
          puVar23 = &DAT_055c04a0;
        }
      }
    }
    if (*(int *)(puVar23 + 7) == -0x17df00c3) {
      lVar17 = *(long *)puVar2;
      if (lVar17 == 0) {
        puVar23 = &DAT_055c04a0;
      }
      else {
        puVar23 = &DAT_055c04a0;
        if (*(long *)(lVar17 + 0x330) != 0) {
          puVar23 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
          iVar9 = FUN_006bd550(*puVar23,0);
          puVar23 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar9 != 0x758f7eaf) {
            puVar23 = &DAT_055c04a0;
          }
        }
      }
      if ((*(int *)(puVar23 + 7) == -0x3e092032) || (*(int *)(puVar23 + 7) == -0x7975b8e8)) {
        FUN_025197d0(pbVar1,1);
      }
    }
    sVar6 = *(short *)PTR_DAT_04bbdeb0;
    if (sVar6 != -1) {
      local_160._0_4_ = 0x19;
      puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
      if (0xff < (uint)(int)sVar6) {
        puVar3 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar3 >> 0x19 & 1) != 0) {
        local_160._0_4_ = 0x1c;
        if (((*puVar3 >> 0x1c & 1) == 0) &&
           (puVar7 = (undefined *)CONCAT44(local_160._4_4_,0x1c),
           *(int *)(PTR_DAT_04bc3a78 + 0x38) != -0x6efba09b)) goto LAB_0230e9f8;
      }
    }
    lVar17 = *(long *)puVar2;
    if (lVar17 == 0) {
      puVar23 = &DAT_055c04a0;
    }
    else {
      puVar23 = &DAT_055c04a0;
      if (*(long *)(lVar17 + 0x330) != 0) {
        puVar23 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
        iVar9 = FUN_006bd550(*puVar23,0);
        puVar23 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar9 != 0x758f7eaf) {
          puVar23 = &DAT_055c04a0;
        }
      }
    }
    iVar9 = *(int *)(puVar23 + 7);
    iVar19 = DAT_05ac0ab0;
    if (DAT_05ac0a90 == iVar9) {
      lVar17 = 0;
LAB_0230e84c:
      local_160._0_4_ = (&DAT_05ac0a98)[lVar17 * 4];
      bVar8 = (uint)local_160 == 0;
    }
    else {
      if (DAT_05ac0aa0 == iVar9) {
        lVar17 = 1;
        goto LAB_0230e84c;
      }
      if (DAT_05ac0ab0 == iVar9) {
        lVar17 = 2;
        iVar19 = iVar9;
        goto LAB_0230e84c;
      }
      if (DAT_05ac0ac0 == iVar9) {
        lVar17 = 3;
        goto LAB_0230e84c;
      }
      if (DAT_05ac0ad0 == iVar9) {
        lVar17 = 4;
        goto LAB_0230e84c;
      }
      if (DAT_05ac0ae0 == iVar9) {
        lVar17 = 5;
        goto LAB_0230e84c;
      }
      if (DAT_05ac0af0 == iVar9) {
        lVar17 = 6;
        goto LAB_0230e84c;
      }
      if (DAT_05ac0b00 == iVar9) {
        lVar17 = 7;
        goto LAB_0230e84c;
      }
      if (DAT_05ac0b10 == iVar9) {
        lVar17 = 8;
        goto LAB_0230e84c;
      }
      if (DAT_05ac0b20 == iVar9) {
        lVar17 = 9;
        goto LAB_0230e84c;
      }
      bVar8 = false;
    }
    if ((((((iVar9 == -0x17df00c3 || (iVar9 == -0x7975b8e8 || iVar9 == -0x3e092032)) || (bVar8)) ||
          (DAT_05ac0a90 == iVar9)) ||
         (((DAT_05ac0aa0 == iVar9 || (iVar19 == iVar9)) ||
          ((DAT_05ac0ac0 == iVar9 || ((DAT_05ac0ad0 == iVar9 || (DAT_05ac0ae0 == iVar9)))))))) ||
        (DAT_05ac0af0 == iVar9)) ||
       (((DAT_05ac0b00 == iVar9 || (DAT_05ac0b10 == iVar9)) ||
        (puVar7 = (undefined *)CONCAT44(local_160._4_4_,(uint)local_160), DAT_05ac0b20 == iVar9))))
    {
      FUN_0252d8f0(&local_80,pbVar1);
      puVar2 = PTR_DAT_04bb43c0;
      lVar24 = *(long *)PTR_DAT_04bb43c0;
      uVar10 = FUN_0277d6c4(&local_80);
      lVar17 = *(long *)puVar2;
      puVar7 = (undefined *)CONCAT44(local_160._4_4_,(uint)local_160);
      if (lVar17 != 0) {
        lVar24 = *(long *)(lVar24 + 0x57e58);
        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
        puVar7 = (undefined *)CONCAT44(local_160._4_4_,(uint)local_160);
        if ((uVar10 < *(uint *)(lVar24 + 0x1d8)) &&
           (puVar7 = (undefined *)CONCAT44(local_160._4_4_,(uint)local_160),
           *(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
          uStack_150 = 0;
          uStack_14c = 0;
          local_160 = PTR_DAT_04bc0510 + 0x10;
          local_158 = local_80;
          uStack_154 = uStack_7c;
          uVar10 = FUN_0277d6c4(&local_158);
          if (*(long *)puVar2 != 0) {
            lVar17 = *(long *)(lVar17 + 0x57e58);
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
            if ((uVar10 < *(uint *)(lVar17 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
              lVar17 = *(long *)PTR_DAT_04bc0428;
              uVar10 = FUN_0277d6c4(&local_80);
              uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
              if ((uVar10 < *(uint *)(lVar17 + 0x1d8)) &&
                 (lVar17 = *(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8), lVar17 != 0
                 )) {
                uStack_150 = (undefined4)lVar17;
                uStack_14c = (undefined4)((ulong)lVar17 >> 0x20);
              }
            }
          }
          local_84 = FUN_01ad78cc(&local_160);
          puVar7 = local_160;
          if (local_84 == 0x12) {
            FUN_025197d0(pbVar1,1);
            puVar7 = local_160;
          }
        }
      }
    }
  }
LAB_0230e9f8:
  local_160 = puVar7;
  uVar11 = FUN_016cf9f0();
  if ((((uVar11 & 1) != 0) && (*(long *)PTR_DAT_04bb4938 != 0)) &&
     (*(int *)(*(long *)PTR_DAT_04bb4938 + 0x98) != 0)) {
    FUN_0252d8f0(&local_80,pbVar1);
    puVar2 = PTR_DAT_04bb43c0;
    lVar24 = *(long *)PTR_DAT_04bb43c0;
    uVar10 = FUN_0277d6c4(&local_80);
    lVar17 = *(long *)puVar2;
    if (lVar17 != 0) {
      lVar24 = *(long *)(lVar24 + 0x57e58);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
      if ((uVar10 < *(uint *)(lVar24 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
        uStack_150 = 0;
        uStack_14c = 0;
        local_160 = PTR_DAT_04bc0510 + 0x10;
        local_158 = local_80;
        uStack_154 = uStack_7c;
        uVar10 = FUN_0277d6c4(&local_158);
        if (*(long *)puVar2 != 0) {
          lVar17 = *(long *)(lVar17 + 0x57e58);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
          if ((uVar10 < *(uint *)(lVar17 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
            lVar17 = *(long *)PTR_DAT_04bc0428;
            uVar10 = FUN_0277d6c4(&local_80);
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
            if ((uVar10 < *(uint *)(lVar17 + 0x1d8)) &&
               (lVar17 = *(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8), lVar17 != 0))
            {
              uStack_150 = (undefined4)lVar17;
              uStack_14c = (undefined4)((ulong)lVar17 >> 0x20);
            }
          }
        }
        iVar9 = FUN_01ad78cc(&local_160);
        if (iVar9 == 0x12) {
          FUN_025197d0(pbVar1,1);
        }
      }
    }
  }
  FUN_024f1650(param_1,param_2,param_3);
  uVar11 = (ulong)*pbVar1;
  puVar23 = (undefined8 *)(*(long *)PTR_DAT_04bb4718 + 0x2e8);
  if (uVar11 < 8) {
    puVar23 = puVar23 + uVar11 * 0x10;
    uVar4 = *(undefined8 *)(PTR_DAT_04bc31b0 + uVar11 * 0x30 + 8);
    uVar20 = *(undefined8 *)(PTR_DAT_04bc31b0 + uVar11 * 0x30 + 0x10);
    uVar21 = *(undefined8 *)(PTR_DAT_04bc31b0 + uVar11 * 0x30 + 0x18);
    *(undefined4 *)((long)puVar23 + 0x17) = *(undefined4 *)(PTR_DAT_04bc31b0 + uVar11 * 0x30 + 0x1f)
    ;
    *puVar23 = uVar4;
    puVar23[1] = uVar20;
    puVar23[2] = uVar21;
    bVar18 = *pbVar1;
    bVar8 = 7 < bVar18;
    if (bVar8) {
      bVar18 = 0xff;
    }
    puVar2 = PTR_DAT_04bc31b8 + (ulong)(uint)(int)(char)bVar18 * 0x70;
    if (bVar8) {
      puVar2 = PTR_DAT_04bc31b8;
    }
    uVar20 = *(undefined8 *)(puVar2 + 0x18);
    uVar4 = *(undefined8 *)(puVar2 + 0x10);
    puVar23[4] = *(undefined8 *)(puVar2 + 8);
    puVar23[5] = uVar4;
    puVar23[6] = uVar20;
    uVar4 = *(undefined8 *)(puVar2 + 0x20);
    uVar20 = *(undefined8 *)(puVar2 + 0x28);
    uVar21 = *(undefined8 *)(puVar2 + 0x38);
    puVar23[9] = *(undefined8 *)(puVar2 + 0x30);
    puVar23[10] = uVar21;
    puVar23[7] = uVar4;
    puVar23[8] = uVar20;
    uVar21 = *(undefined8 *)(puVar2 + 0x50);
    uVar4 = *(undefined8 *)(puVar2 + 0x40);
    uVar20 = *(undefined8 *)(puVar2 + 0x48);
    *(undefined8 *)((long)puVar23 + 0x6e) = *(undefined8 *)(puVar2 + 0x56);
    puVar23[0xc] = uVar20;
    puVar23[0xd] = uVar21;
    puVar23[0xb] = uVar4;
  }
  uVar4 = *puVar23;
  uVar21 = puVar23[1];
  uVar20 = puVar23[2];
  *(undefined8 *)(param_1 + 0x18f8) = puVar23[3];
  *(undefined8 *)(param_1 + 0x18f0) = uVar20;
  *(undefined8 *)(param_1 + 0x18e8) = uVar21;
  *(undefined8 *)(param_1 + 0x18e0) = uVar4;
  uVar4 = puVar23[4];
  uVar21 = puVar23[5];
  uVar20 = puVar23[6];
  *(undefined8 *)(param_1 + 0x1918) = puVar23[7];
  *(undefined8 *)(param_1 + 0x1910) = uVar20;
  *(undefined8 *)(param_1 + 0x1908) = uVar21;
  *(undefined8 *)(param_1 + 0x1900) = uVar4;
  uVar4 = puVar23[10];
  uVar20 = puVar23[8];
  uVar21 = puVar23[9];
  *(undefined8 *)(param_1 + 0x1938) = puVar23[0xb];
  *(undefined8 *)(param_1 + 0x1930) = uVar4;
  puVar2 = PTR_DAT_04bb6298;
  *(undefined8 *)(param_1 + 0x1928) = uVar21;
  *(undefined8 *)(param_1 + 0x1920) = uVar20;
  uVar21 = puVar23[0xe];
  uVar4 = puVar23[0xc];
  uVar20 = puVar23[0xd];
  *(undefined2 *)(param_1 + 0x1958) = *(undefined2 *)(puVar23 + 0xf);
  sVar6 = *(short *)puVar2;
  *(undefined8 *)(param_1 + 0x1950) = uVar21;
  *(undefined8 *)(param_1 + 0x1948) = uVar20;
  *(undefined8 *)(param_1 + 0x1940) = uVar4;
  if (sVar6 == -1) {
LAB_0230ecb4:
    local_160._0_4_ = 5;
  }
  else {
    puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8;
    if (0xff < (uint)(int)sVar6) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar2 + 4) & 1) == 0) goto LAB_0230ecb4;
    local_160._0_4_ = (uint)*(byte *)(param_1 + 0x18f7);
    if (6 < (uint)local_160) {
      local_160._0_4_ = 0;
    }
    if ((uint)local_160 == 0) goto LAB_0230ecb4;
    if ((uint)local_160 == 1) {
      local_160._0_4_ = 6;
    }
  }
  *(uint *)(param_1 + 0x21b0) = (uint)local_160;
  *(char *)(param_1 + 0x18f7) = (char)(uint)local_160;
  if (*(long *)(param_1 + 0x60) != 0) {
    bVar18 = *pbVar1;
    if (7 < bVar18) {
      bVar18 = 0xff;
    }
    *(byte *)(*(long *)(param_1 + 0x60) + 0x11ec) = bVar18;
  }
  FUN_0230f780(param_1,param_2);
  lVar17 = FUN_0251e98c(1);
  puVar12 = (undefined4 *)(**(code **)(*(long *)(lVar17 + 0x210) + 0xf0))(lVar17 + 0x210);
  uVar25 = *puVar12;
  lVar17 = FUN_0251e98c(1);
  puVar12 = (undefined4 *)(**(code **)(*(long *)(lVar17 + 0x270) + 0xf0))(lVar17 + 0x270);
  puVar2 = PTR_DAT_04bb2698;
  uVar26 = *puVar12;
  lVar17 = *(long *)PTR_DAT_04bb2698;
  if (lVar17 == 0) {
    puVar14 = malloc(0xe4);
  }
  else {
    plVar13 = param_3;
    if (param_3 == (long *)0x0) {
      lVar24 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar13 = (long *)(lVar17 + 8);
      if (lVar24 != 0) {
        plVar13 = (long *)(lVar24 + 0xa8);
      }
      plVar13 = (long *)*plVar13;
      puVar14 = (undefined1 *)0x0;
      if (plVar13 == (long *)0x0) goto LAB_0230ed98;
    }
    puVar14 = (undefined1 *)(**(code **)(*plVar13 + 0x30))(plVar13,0xe4,8);
  }
LAB_0230ed98:
  local_160._0_4_ = (uint)local_160 & 0xffffff;
  local_160._4_4_ = 0;
  local_158 = 0;
  uStack_154 = 0;
  uStack_150 = 0;
  uStack_14c = 0;
  uStack_148 = (uint)uStack_148._3_1_ << 0x18;
  *puVar14 = 0;
  puVar14[0x1c] = 0;
  puVar14[0x38] = 0;
  puVar14[0x54] = 0;
  puVar14[0x70] = 0;
  puVar14[0x8c] = 0;
  puVar14[0xa8] = 0;
  puVar14[0xc4] = 0;
  *(ulong *)(puVar14 + 1) = (ulong)(uint)local_160;
  *(ulong *)(puVar14 + 0x1d) = (ulong)(uint)local_160;
  *(undefined8 *)(puVar14 + 9) = 0;
  *(undefined8 *)(puVar14 + 0x25) = 0;
  *(undefined8 *)(puVar14 + 0x11) = 0;
  *(undefined8 *)(puVar14 + 0x2d) = 0;
  *(undefined4 *)(puVar14 + 0x18) = 0;
  *(undefined4 *)(puVar14 + 0x34) = 0;
  lVar17 = *(long *)puVar2;
  *(undefined4 *)(puVar14 + 0x50) = 0;
  *(undefined8 *)(puVar14 + 0x5d) = 0;
  *(undefined8 *)(puVar14 + 0x49) = 0;
  *(undefined8 *)(puVar14 + 0x41) = 0;
  *(ulong *)(puVar14 + 0x39) = (ulong)(uint)local_160;
  *(undefined8 *)(puVar14 + 0x79) = 0;
  *(ulong *)(puVar14 + 0x55) = (ulong)(uint)local_160;
  *(undefined4 *)(puVar14 + 0x6c) = 0;
  *(undefined8 *)(puVar14 + 0x65) = 0;
  *(ulong *)(puVar14 + 0x8d) = (ulong)(uint)local_160;
  *(undefined4 *)(puVar14 + 0x88) = 0;
  *(undefined8 *)(puVar14 + 0x81) = 0;
  *(undefined8 *)(puVar14 + 0x95) = 0;
  *(ulong *)(puVar14 + 0x71) = (ulong)(uint)local_160;
  *(ulong *)(puVar14 + 0xc5) = (ulong)(uint)local_160;
  *(undefined4 *)(puVar14 + 0xa4) = 0;
  *(undefined8 *)(puVar14 + 0x9d) = 0;
  *(undefined4 *)(puVar14 + 0xc0) = 0;
  *(undefined8 *)(puVar14 + 0xb9) = 0;
  *(undefined8 *)(puVar14 + 0xcd) = 0;
  *(undefined8 *)(puVar14 + 0xb1) = 0;
  *(ulong *)(puVar14 + 0xa9) = (ulong)(uint)local_160;
  *(undefined4 *)(puVar14 + 0xdc) = 0;
  *(undefined4 *)(puVar14 + 0xe0) = 0;
  *(undefined8 *)(puVar14 + 0xd5) = 0;
  *(undefined1 **)(param_1 + 0x1ec0) = puVar14;
  if (lVar17 == 0) {
    pvVar15 = malloc(0x300);
  }
  else {
    plVar13 = param_3;
    if (param_3 == (long *)0x0) {
      lVar24 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar13 = (long *)(lVar17 + 8);
      if (lVar24 != 0) {
        plVar13 = (long *)(lVar24 + 0xa8);
      }
      plVar13 = (long *)*plVar13;
    }
    pvVar15 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,0x300,8);
  }
  FUN_0076aa60();
  FUN_006f9fc0(param_1,pvVar15,0xffffffff);
  lVar17 = *(long *)puVar2;
  if (lVar17 == 0) {
    plVar13 = malloc(0x380);
  }
  else {
    plVar13 = param_3;
    if (param_3 == (long *)0x0) {
      lVar24 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar13 = (long *)(lVar17 + 8);
      if (lVar24 != 0) {
        plVar13 = (long *)(lVar24 + 0xa8);
      }
      plVar13 = (long *)*plVar13;
      if (plVar13 == (long *)0x0) {
        plVar13 = (long *)0x0;
        goto LAB_0230ef70;
      }
    }
    plVar13 = (long *)(**(code **)(*plVar13 + 0x30))(plVar13,0x380,8);
  }
LAB_0230ef70:
  FUN_00794254(plVar13,pbVar1);
  *(undefined2 *)((long)plVar13 + 0x33c) = 0;
  puVar7 = PTR_DAT_04bb4198;
  *(undefined4 *)((long)plVar13 + 0x37c) = 0;
  *(undefined8 *)((long)plVar13 + 0x35c) = 0;
  *(undefined8 *)((long)plVar13 + 0x364) = 0;
  *(undefined8 *)((long)plVar13 + 0x36c) = 0;
  *(undefined8 *)((long)plVar13 + 0x374) = 0;
  plVar13[0x68] = 0;
  plVar13[0x69] = 0;
  plVar13[0x6a] = 0;
  *(undefined2 *)(plVar13 + 0x6b) = 0;
  *plVar13 = (long)(puVar7 + 0x10);
  FUN_006f9fc0(param_1,plVar13,0xffffffff);
  lVar17 = *(long *)puVar2;
  if (lVar17 == 0) {
    pvVar15 = malloc(0x3a8);
  }
  else {
    plVar13 = param_3;
    if (param_3 == (long *)0x0) {
      lVar24 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar13 = (long *)(lVar17 + 8);
      if (lVar24 != 0) {
        plVar13 = (long *)(lVar24 + 0xa8);
      }
      plVar13 = (long *)*plVar13;
      if (plVar13 == (long *)0x0) {
        pvVar15 = (void *)0x0;
        goto LAB_0230f028;
      }
    }
    pvVar15 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,0x3a8,8);
  }
LAB_0230f028:
  FUN_00938950(uVar25,uVar26,pvVar15,param_2 + 8,1);
  *(undefined4 *)(*(long *)((long)pvVar15 + 0x278) + 100) = 0x800;
  *(uint *)((long)pvVar15 + 0x178) = *(uint *)((long)pvVar15 + 0x178) & 0xfffffffe;
  *(undefined4 *)(*(long *)((long)pvVar15 + 0x278) + 0x40) = 0;
  puVar7 = PTR_DAT_04bb27d0;
  if (1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476)) {
    pcVar16 = (char *)FUN_02582a24(pbVar1);
    lVar17 = **(long **)puVar7;
    bVar18 = *(byte *)(lVar17 + 0x473);
    pcVar22 = PTR_DAT_04bc1220;
    if ((long)(char)bVar18 != 0xffffffffffffffff) {
      puVar3 = (uint *)(lVar17 + 0x48) + ((long)(char)bVar18 & 0xffffffffU) * 0x20;
      if (7 < bVar18) {
        puVar3 = (uint *)(lVar17 + 0x48);
      }
      if ((*puVar3 & 8) != 0) {
        pcVar22 = (char *)(lVar17 + 0x472);
      }
    }
    if (*pcVar16 != *pcVar22) {
      *(byte *)(*(long *)((long)pvVar15 + 0x278) + 0x18) =
           *(byte *)(*(long *)((long)pvVar15 + 0x278) + 0x18) | 8;
    }
  }
  FUN_006f9fc0(param_1,pvVar15,0xffffffff);
  lVar17 = *(long *)puVar2;
  if (lVar17 == 0) {
    pvVar15 = malloc(0x378);
  }
  else {
    plVar13 = param_3;
    if (param_3 == (long *)0x0) {
      lVar24 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar13 = (long *)(lVar17 + 8);
      if (lVar24 != 0) {
        plVar13 = (long *)(lVar24 + 0xa8);
      }
      plVar13 = (long *)*plVar13;
    }
    pvVar15 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,0x378,8);
  }
  FUN_00703f3c();
  FUN_006f9fc0(param_1,pvVar15,0xffffffff);
  lVar17 = *(long *)puVar2;
  if (lVar17 == 0) {
    pvVar15 = malloc(0x370);
  }
  else {
    plVar13 = param_3;
    if (param_3 == (long *)0x0) {
      lVar24 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar13 = (long *)(lVar17 + 8);
      if (lVar24 != 0) {
        plVar13 = (long *)(lVar24 + 0xa8);
      }
      plVar13 = (long *)*plVar13;
    }
    pvVar15 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,0x370,8);
  }
  FUN_0073e968();
  FUN_006f9fc0(param_1,pvVar15,0xffffffff);
  lVar17 = *(long *)puVar2;
  if (lVar17 == 0) {
    pvVar15 = malloc(0x5098);
  }
  else {
    plVar13 = param_3;
    if (param_3 == (long *)0x0) {
      lVar24 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar13 = (long *)(lVar17 + 8);
      if (lVar24 != 0) {
        plVar13 = (long *)(lVar24 + 0xa8);
      }
      plVar13 = (long *)*plVar13;
    }
    pvVar15 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,0x5098,8);
  }
  FUN_009370b8(pvVar15,0x800);
  FUN_006f9fc0(param_1,pvVar15,0xffffffff);
  *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x2ac) = *(undefined4 *)(param_1 + 0x1bf0);
  lVar17 = FUN_0251e98c(1);
  puVar12 = (undefined4 *)(**(code **)(*(long *)(lVar17 + 0x2a0) + 0xf0))(lVar17 + 0x2a0);
  *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x2b0) = *puVar12;
  if (*(int *)(param_1 + 0x178) != 0) {
    lVar17 = *(long *)(param_1 + 0xa0);
    if (lVar17 != 0) {
      *(uint *)(lVar17 + 0x178) = *(uint *)(lVar17 + 0x178) & 0xfffffffe;
    }
    goto LAB_0230f578;
  }
  lVar17 = *(long *)puVar2;
  if (lVar17 == 0) {
    pvVar15 = malloc(0x2f0);
  }
  else {
    plVar13 = param_3;
    if (param_3 == (long *)0x0) {
      lVar24 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar13 = (long *)(lVar17 + 8);
      if (lVar24 != 0) {
        plVar13 = (long *)(lVar24 + 0xa8);
      }
      plVar13 = (long *)*plVar13;
    }
    pvVar15 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,0x2f0,8);
  }
  local_160._0_4_ = 0;
  FUN_0070f160(pvVar15,&local_160);
  *(long *)((long)pvVar15 + 0x290) = param_1 + 0x1a10;
  FUN_006f9fc0(param_1,pvVar15,0xffffffff);
  *(undefined4 *)(param_1 + 0x1a18) = *(undefined4 *)(param_1 + 0x230);
  lVar17 = *(long *)puVar2;
  if (lVar17 == 0) {
    plVar13 = malloc(0x2c0);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar24 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar23 = (undefined8 *)(lVar17 + 8);
      if (lVar24 != 0) {
        puVar23 = (undefined8 *)(lVar24 + 0xa8);
      }
      param_3 = (long *)*puVar23;
      plVar13 = (long *)0x0;
      if (param_3 == (long *)0x0) goto LAB_0230f38c;
    }
    plVar13 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x2c0,8);
  }
LAB_0230f38c:
  puVar7 = PTR_DAT_04bb30f8;
  plVar13[2] = 0;
  plVar13[3] = 0;
  puVar2 = PTR_DAT_04bb2ea0;
  plVar13[4] = 0;
  plVar13[5] = 0;
  plVar13[6] = 0;
  plVar13[7] = 0;
  plVar13[8] = 0;
  plVar13[9] = 0;
  plVar13[10] = 0;
  *(undefined1 *)((long)plVar13 + 0x16b) = 0;
  *plVar13 = (long)(puVar7 + 0x10);
  plVar13[1] = (long)(puVar2 + 0x10);
  pcVar22 = (char *)((long)plVar13 + 0x6c);
  *(undefined4 *)(plVar13 + 0xd) = 0x100;
  plVar13[0xc] = (long)pcVar22;
  uVar4 = s_Component_040afd3c._0_8_;
  if (pcVar22 != "Component") {
    *(undefined1 *)((long)plVar13 + 0x75) = 0;
    *(undefined8 *)pcVar22 = uVar4;
    *(char *)((long)plVar13 + 0x74) = s_Component_040afd3c[8];
  }
  plVar13[0x2e] = -1;
  *(undefined4 *)(plVar13 + 0x2f) = 0xb;
  puVar2 = PTR_DAT_04bb21f8;
  plVar13[0x34] = 0;
  plVar13[0x35] = 0;
  plVar13[0x36] = 0;
  plVar13[0x37] = 0;
  plVar13[0xb] = (long)(puVar2 + 0x10);
  puVar2 = PTR_DAT_04bb3108;
  plVar13[0x38] = 0;
  plVar13[0x3b] = 0;
  plVar13[0x3c] = 0;
  puVar2 = puVar2 + 0x10;
  plVar13[0x3d] = 0;
  plVar13[0x3e] = 0;
  plVar13[0x3f] = 0;
  plVar13[0x41] = 0;
  plVar13[0x42] = 0;
  plVar13[0x43] = 0;
  plVar13[0x44] = 0;
  plVar13[0x45] = 0;
  plVar13[0x46] = 0;
  plVar13[0x47] = 0;
  plVar13[0x48] = 0;
  plVar13[0x49] = 0;
  plVar13[0x4a] = 0;
  plVar13[0x4b] = 0;
  *(undefined4 *)(plVar13 + 0x36) = 0xffffffff;
  *(undefined4 *)(plVar13 + 0x3d) = 0xffffffff;
  plVar13[0x42] = 0;
  plVar13[0x43] = 0;
  *(undefined4 *)(plVar13 + 0x44) = 0xffffffff;
  plVar13[0x49] = 0;
  plVar13[0x4a] = 0;
  *(undefined4 *)(plVar13 + 0x4b) = 0xffffffff;
  plVar13[0x3b] = 0;
  plVar13[0x3c] = 0;
  plVar13[0x4d] = (long)(PTR_DAT_04bb3100 + 0x10);
  puVar7 = PTR_LAB_04bb30d8;
  plVar13[0x4e] = (long)plVar13;
  plVar13[0x30] = (long)puVar2;
  plVar13[0x31] = (long)plVar13;
  plVar13[0x38] = (long)plVar13;
  plVar13[0x39] = 0;
  plVar13[0x32] = (long)puVar7;
  plVar13[0x33] = 0;
  puVar7 = PTR_LAB_04bb30e0;
  plVar13[0x37] = (long)puVar2;
  plVar13[0x39] = (long)puVar7;
  plVar13[0x3a] = 0;
  puVar7 = PTR_LAB_04bb30e8;
  plVar13[0x3e] = (long)puVar2;
  plVar13[0x46] = (long)plVar13;
  plVar13[0x3f] = (long)plVar13;
  plVar13[0x40] = 0;
  plVar13[0x40] = (long)puVar7;
  puVar7 = PTR_LAB_04bb30f0;
  plVar13[0x45] = (long)puVar2;
  *(undefined4 *)(plVar13 + 0x4c) = 0xe;
  plVar13[0x47] = (long)puVar7;
  *plVar13 = (long)(PTR_DAT_04bb5a00 + 0x10);
  FUN_00904684(plVar13 + 0x4f,param_1);
  pcVar22 = (char *)plVar13[0xc];
  if (pcVar22 != "CameraPositionActorComponent") {
    iVar9 = 0x1c;
    if ((int)plVar13[0xd] < 0x1d) {
      iVar9 = (int)plVar13[0xd] + -1;
    }
    memcpy(pcVar22,"CameraPositionActorComponent",(long)iVar9);
    pcVar22[iVar9] = '\0';
  }
  *(uint *)(plVar13 + 0x2f) = *(uint *)(plVar13 + 0x2f) & 0xfffffffd;
  *(uint *)(plVar13 + 0x4c) = *(uint *)(plVar13 + 0x4c) & 0xfffffff0;
  FUN_006f9fc0(param_1,plVar13,0xffffffff);
LAB_0230f578:
  lVar17 = *(long *)(param_1 + 0x70);
  *(undefined1 **)(lVar17 + 0x2d0) = &LAB_0230ffb0;
  *(long *)(lVar17 + 0x2c8) = param_1;
  *(undefined8 *)(lVar17 + 0x2d8) = 0;
  *(undefined ***)(lVar17 + 0x2c0) = &PTR_LAB_04a7f828;
  lVar17 = *(long *)(param_1 + 0x70);
  *(long *)(lVar17 + 0x2e8) = param_1;
  *(undefined1 **)(lVar17 + 0x2f0) = &LAB_02311ea0;
  *(undefined8 *)(lVar17 + 0x2f8) = 0;
  *(undefined ***)(lVar17 + 0x2e0) = &PTR_LAB_04a7f828;
  lVar17 = *(long *)(param_1 + 0xa0);
  if (lVar17 != 0) {
    *(long *)(lVar17 + 0x5038) = param_1;
    *(undefined8 *)(lVar17 + 0x5048) = 0;
    *(undefined ***)(lVar17 + 0x5030) = &PTR_LAB_04a7f828;
    *(undefined1 **)(lVar17 + 0x5040) = &LAB_02313d18;
    lVar17 = *(long *)(param_1 + 0xa0);
    *(long *)(lVar17 + 0x5058) = param_1;
    *(code **)(lVar17 + 0x5060) = FUN_02313d38;
    *(undefined8 *)(lVar17 + 0x5068) = 0;
    *(undefined ***)(lVar17 + 0x5050) = &PTR_LAB_04a7f828;
  }
  local_9d = 0;
  uStack_14c = 0x3f800000;
  uStack_148 = 0;
  puStack_128 = local_11c;
  local_120 = 0x80;
  local_98 = 7;
  local_11c[0] = 0;
  uStack_150 = *(undefined4 *)(param_2 + 0x10);
  local_90 = 0;
  local_130 = PTR_DAT_04bb2d88 + 0x10;
  local_94 = 0;
  local_144 = 0;
  local_13c = 0;
  local_160._0_4_ = 0;
  local_160._4_4_ = 0x96;
  local_158 = (undefined4)*(undefined8 *)(param_2 + 8);
  uStack_154 = (undefined4)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
  uVar25 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_160,*(undefined4 *)(param_1 + 0x230),
                        0);
  *(undefined4 *)(param_1 + 0x19e0) = uVar25;
  uVar5 = *(undefined1 *)(param_1 + 0x18f6);
  puVar23 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar23 = *(undefined8 **)(param_1 + 0x4c8);
  }
  *(undefined8 **)(param_1 + 0x1c68) = puVar23;
  puVar23 = *(undefined8 **)(param_1 + 0x60);
  if (puVar23 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(&DAT_052461c0);
      puVar23 = &DAT_05240280;
      if (iVar9 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar23 = &DAT_05240280;
    }
  }
  local_160 = PTR_DAT_04bb2020 + 0x10;
  local_158 = 0x40ca7c7;
  uStack_154 = 0;
  if (((puVar23[0x227] != 0) && (lVar17 = *(long *)(puVar23[0x227] + 0x78), lVar17 != 0)) &&
     (plVar13 = *(long **)(lVar17 + 0x48), plVar13 != (long *)0x0)) {
    (**(code **)(*plVar13 + 0x28))(plVar13,&local_160,uVar5);
  }
  return;
}


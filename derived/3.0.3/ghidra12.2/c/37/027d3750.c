
/* WARNING: Removing unreachable block (ram,0x027d6144) */
/* WARNING: Removing unreachable block (ram,0x027d61bc) */
/* WARNING: Removing unreachable block (ram,0x027d8a54) */

void FUN_027d3750(byte *param_1,long *param_2)

{
  byte *__s;
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  ushort *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined *puVar17;
  byte *pbVar18;
  undefined1 *puVar19;
  char *pcVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  byte bVar24;
  undefined2 uVar25;
  short sVar26;
  bool bVar27;
  undefined *puVar28;
  undefined *puVar29;
  bool bVar30;
  undefined1 uVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  undefined4 uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  long lVar45;
  undefined8 *puVar46;
  ulong uVar47;
  long *plVar48;
  short *psVar49;
  uint *puVar50;
  ulong uVar51;
  byte bVar52;
  ulong *puVar53;
  ulong uVar54;
  long lVar55;
  long *plVar56;
  long lVar57;
  char cVar58;
  uint uVar59;
  long *plVar60;
  char cVar61;
  uint *puVar62;
  ulong uVar63;
  int *piVar64;
  undefined8 uVar65;
  byte *pbVar66;
  ushort uVar67;
  ushort uVar68;
  uint uVar69;
  undefined *puVar70;
  undefined4 *puVar71;
  undefined *puVar72;
  uint uVar73;
  uint uVar74;
  uint uVar75;
  uint uVar76;
  uint uVar77;
  uint uVar78;
  ulong uVar79;
  byte *pbVar80;
  byte *pbVar81;
  uint local_2fc;
  byte *local_268;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  long local_200;
  long local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 local_150 [8];
  undefined4 local_130 [8];
  undefined4 local_110 [8];
  undefined4 local_f0 [8];
  undefined4 local_d0 [9];
  undefined2 local_ac;
  undefined1 local_aa;
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined *local_78;
  char *pcStack_70;
  
  DAT_05594b4c = '\x01';
  FUN_027d9ad0();
  uVar65 = *(undefined8 *)PTR_DAT_04bb32f0;
  local_1f0 = PTR_DAT_04bb2020 + 0x10;
  local_1e8 = "Carnival";
  puVar53 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)puVar53 == 0) {
    local_98 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)((ulong)local_98 >> 0x20) < '\x05') {
      lVar45 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_98);
      local_228 = (undefined *)(lVar45 + -0x15180);
      local_98 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_228);
    }
    uVar51 = (ulong)local_98;
    local_98._0_6_ = CONCAT24(5,(int)local_98);
    puVar53 = &local_98;
    local_98._7_1_ = SUB81(uVar51,7);
    local_98._0_7_ = (uint7)(uint6)local_98;
  }
  uVar51 = *puVar53;
  __s = param_1 + 0xac3b0;
  pbVar1 = param_1 + 0x99180;
  pbVar2 = param_1 + 0x85f50;
  pbVar3 = param_1 + 0x72d20;
  pbVar4 = param_1 + 0x5faf0;
  pbVar5 = param_1 + 0x4c8c0;
  pbVar6 = param_1 + 0x39690;
  pbVar7 = param_1 + 0x26460;
  pbVar18 = param_1 + 0x13230;
  uVar51 = FUN_00879dd0(uVar65,&local_1f0,uVar51,uVar51 >> 0x10,uVar51 >> 0x18,0);
  puVar72 = PTR_DAT_04bc27f0;
  if ((uVar51 & 1) != 0) {
    puVar70 = PTR_DAT_04bb2020 + 0x10;
    local_1e8 = "CarnivalNpcFeatherColorDecided";
    local_1f0 = puVar70;
    iVar32 = FUN_0273ea30(&local_1f0);
    if (iVar32 == 0) {
      uVar51 = 0;
      uVar43 = 0;
      uVar42 = 0xf;
      lVar45 = *(long *)PTR_DAT_04bb32f0;
      uVar79 = 4;
      do {
        uVar54 = (ulong)param_1[uVar51 * 0x13230];
        if (uVar54 < 0x23) {
          bVar52 = (param_1 + uVar51 * 0x13230)[1];
          if ((bVar52 <= (byte)PTR_DAT_04bc27f0[uVar54]) &&
             ((*(uint *)(PTR_DAT_04bc2a20 + uVar54 * 4) >> (ulong)(bVar52 & 0x1f) & 1) != 0)) {
            local_1e8 = "MoveInCompletion";
            local_1f0 = puVar70;
            iVar32 = FUN_02749340(param_1 + uVar51 * 0x13230 + 0x1267c,&local_1f0);
            if ((iVar32 != 0) && (param_1[uVar51 * 0x13230 + 0x1267a] == 0)) {
              if (lVar45 != 0) {
                local_1f0 = (undefined *)CONCAT44(local_1f0._4_4_,(uint)uVar51);
                uVar54 = FUN_0087d624(lVar45,param_2 + 2,&local_1f0,1);
                if ((uVar54 & 1) != 0) {
                  uVar43 = uVar43 | 1 << (ulong)((uint)uVar51 & 0x1f);
                  goto LAB_027d39b0;
                }
              }
              if (DAT_05594b4c == '\x01') {
                uVar44 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
                DAT_05582b70 = DAT_05582b74;
                DAT_05582b74 = DAT_05582b78;
                uVar44 = uVar44 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar44 ^ DAT_05582b7c;
                DAT_05582b78 = DAT_05582b7c;
                DAT_05582b7c = uVar44;
              }
              else {
                uVar44 = nn::os::GetSystemTick();
                uVar41 = (uVar44 ^ uVar44 >> 0x1e) * 0x6c078965 + 1;
                uVar44 = uVar41 ^ uVar41 * 0x800;
                uVar41 = (uVar41 ^ uVar41 >> 0x1e) * 0x6c078965 + 2;
                uVar41 = (uVar41 ^ uVar41 >> 0x1e) * 0x6c078965 + 3;
                uVar41 = (uVar41 ^ uVar41 >> 0x1e) * 0x6c078965 + 4;
                uVar44 = uVar44 >> 8 ^ uVar41 >> 0x13 ^ uVar44 ^ uVar41;
              }
              uVar41 = uVar42 - (uVar42 >> 1 & 0x55555555);
              iVar32 = (int)(uVar44 * uVar79 >> 0x20);
              uVar44 = (uVar41 >> 2 & 0x33333333) + (uVar41 & 0x33333333);
              uVar44 = uVar44 + (uVar44 >> 4) & 0xf0f0f0f;
              uVar44 = uVar44 + (uVar44 >> 8);
              if ((iVar32 + 1 <= (int)(uVar44 + (uVar44 >> 0x10) & 0x3f)) && (uVar42 != 0)) {
                iVar32 = iVar32 + 2;
                uVar44 = uVar42;
                do {
                  iVar32 = iVar32 + -1;
                  if (iVar32 < 2) {
                    uVar44 = uVar44 - 1 & (uVar44 ^ 0xffffffff);
                    uVar44 = uVar44 - (uVar44 >> 1 & 0x55555555);
                    uVar44 = (uVar44 >> 2 & 0x33333333) + (uVar44 & 0x33333333);
                    uVar44 = uVar44 + (uVar44 >> 4) & 0xf0f0f0f;
                    uVar44 = uVar44 + (uVar44 >> 8);
                    uVar44 = uVar44 + (uVar44 >> 0x10);
                    uVar41 = uVar44 & 0x3f;
                    if (uVar41 < 4) {
                      uVar42 = uVar42 & (1 << (ulong)(uVar44 & 0x1f) ^ 0xffffffffU);
                    }
                    goto LAB_027d3b50;
                  }
                  uVar44 = uVar44 - 1 & uVar44;
                } while (uVar44 != 0);
              }
              uVar41 = 0xffffffff;
LAB_027d3b50:
              uVar73 = (int)uVar79 - 1;
              uVar44 = 4;
              if (uVar73 != 0) {
                uVar44 = uVar73;
              }
              uVar79 = (ulong)uVar44;
              uVar44 = 0xf;
              if (uVar73 != 0) {
                uVar44 = uVar42;
              }
              local_1f0 = PTR_DAT_04bb2020 + 0x10;
              local_1e8 = "CarnivalFeatherColor";
              FUN_02749650(param_1 + uVar51 * 0x13230 + 0x1267c,uVar51 & 0xffffffff,&local_1f0,
                           uVar41,1);
              uVar42 = uVar44;
            }
          }
        }
LAB_027d39b0:
        uVar51 = uVar51 + 1;
      } while (uVar51 != 10);
      uVar44 = uVar43 - (uVar43 >> 1 & 0x55555555);
      uVar44 = (uVar44 >> 2 & 0x33333333) + (uVar44 & 0x33333333);
      uVar44 = uVar44 + (uVar44 >> 4) & 0xf0f0f0f;
      uVar44 = uVar44 + (uVar44 >> 8);
      if ((uVar44 + (uVar44 >> 0x10) & 0x3f) != 0) {
        uVar51 = 0;
        puVar72 = PTR_DAT_04bb2020 + 0x10;
        do {
          if ((uVar43 >> (ulong)((uint)uVar51 & 0x1f) & 1) != 0) {
            if (DAT_05594b4c == '\x01') {
              uVar44 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
              DAT_05582b70 = DAT_05582b74;
              DAT_05582b74 = DAT_05582b78;
              uVar44 = uVar44 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar44 ^ DAT_05582b7c;
              DAT_05582b78 = DAT_05582b7c;
              DAT_05582b7c = uVar44;
            }
            else {
              uVar44 = nn::os::GetSystemTick();
              uVar41 = (uVar44 ^ uVar44 >> 0x1e) * 0x6c078965 + 1;
              uVar44 = uVar41 ^ uVar41 * 0x800;
              uVar41 = (uVar41 ^ uVar41 >> 0x1e) * 0x6c078965 + 2;
              uVar41 = (uVar41 ^ uVar41 >> 0x1e) * 0x6c078965 + 3;
              uVar41 = (uVar41 ^ uVar41 >> 0x1e) * 0x6c078965 + 4;
              uVar44 = uVar44 >> 8 ^ uVar41 >> 0x13 ^ uVar44 ^ uVar41;
            }
            uVar41 = uVar42 - (uVar42 >> 1 & 0x55555555);
            iVar32 = (int)(uVar44 * uVar79 >> 0x20);
            uVar44 = (uVar41 >> 2 & 0x33333333) + (uVar41 & 0x33333333);
            uVar44 = uVar44 + (uVar44 >> 4) & 0xf0f0f0f;
            uVar44 = uVar44 + (uVar44 >> 8);
            if ((iVar32 + 1 <= (int)(uVar44 + (uVar44 >> 0x10) & 0x3f)) && (uVar42 != 0)) {
              iVar32 = iVar32 + 2;
              uVar44 = uVar42;
              do {
                iVar32 = iVar32 + -1;
                if (iVar32 < 2) {
                  uVar44 = uVar44 - 1 & (uVar44 ^ 0xffffffff);
                  uVar44 = uVar44 - (uVar44 >> 1 & 0x55555555);
                  uVar44 = (uVar44 >> 2 & 0x33333333) + (uVar44 & 0x33333333);
                  uVar44 = uVar44 + (uVar44 >> 4) & 0xf0f0f0f;
                  uVar44 = uVar44 + (uVar44 >> 8);
                  uVar44 = uVar44 + (uVar44 >> 0x10);
                  uVar41 = uVar44 & 0x3f;
                  if (uVar41 < 4) {
                    uVar42 = uVar42 & (1 << (ulong)(uVar44 & 0x1f) ^ 0xffffffffU);
                  }
                  goto LAB_027d3c54;
                }
                uVar44 = uVar44 - 1 & uVar44;
              } while (uVar44 != 0);
            }
            uVar41 = 0xffffffff;
LAB_027d3c54:
            uVar73 = (int)uVar79 - 1;
            uVar44 = 4;
            if (uVar73 != 0) {
              uVar44 = uVar73;
            }
            uVar79 = (ulong)uVar44;
            uVar44 = 0xf;
            if (uVar73 != 0) {
              uVar44 = uVar42;
            }
            local_1e8 = "CarnivalFeatherColor";
            local_1f0 = puVar72;
            FUN_02749650(param_1 + uVar51 * 0x13230 + 0x1267c,uVar51 & 0xffffffff,&local_1f0,uVar41,
                         1);
            uVar42 = uVar44;
          }
          uVar51 = uVar51 + 1;
        } while (uVar51 != 10);
      }
      local_1f0 = PTR_DAT_04bb2020 + 0x10;
      local_1e8 = "CarnivalNpcFeatherColorDecided";
      FUN_0273f3c4(&local_1f0,1);
      puVar72 = PTR_DAT_04bc27f0;
    }
  }
  puVar70 = PTR_DAT_04bb37e0;
  puVar8 = (ushort *)(param_1 + 0x1cb6b8);
  if (*param_2 != 0) {
    param_1[0x1e335c] = 0xff;
    uVar25 = *(undefined2 *)puVar70;
    *(undefined2 *)(param_1 + 0x1e3368) = uVar25;
    bVar52 = puVar70[2];
    param_1[0x1e336a] = bVar52;
    bVar24 = puVar70[3];
    param_1[0x1e336b] = bVar24;
    uVar38 = *(undefined4 *)(puVar70 + 4);
    param_1[0x1e3372] = bVar52;
    param_1[0x1e337a] = bVar52;
    param_1[0x1e3382] = bVar52;
    *(undefined2 *)(param_1 + 0x1e3370) = uVar25;
    *(undefined2 *)(param_1 + 0x1e3378) = uVar25;
    *(undefined2 *)(param_1 + 0x1e3380) = uVar25;
    param_1[0x1e3373] = bVar24;
    param_1[0x1e337b] = bVar24;
    param_1[0x1e3383] = bVar24;
    pbVar80 = param_1 + 0x1267c;
    *(undefined4 *)(param_1 + 0x1e336c) = uVar38;
    *(undefined4 *)(param_1 + 0x1e3374) = uVar38;
    *(undefined4 *)(param_1 + 0x1e337c) = uVar38;
    *(undefined4 *)(param_1 + 0x1e3384) = uVar38;
    puVar72 = PTR_DAT_04bb2020 + 0x10;
    local_1e8 = "ForceMoveOut";
    local_1f0 = puVar72;
    iVar32 = FUN_02749340(pbVar80,&local_1f0);
    pbVar81 = param_1 + 0x258ac;
    local_1e8 = "ForceMoveOut";
    local_1f0 = puVar72;
    iVar33 = FUN_02749340(pbVar81,&local_1f0);
    local_1e8 = "ForceMoveOut";
    uVar42 = (uint)(iVar33 != 0) << 1;
    pbVar9 = param_1 + 0x38adc;
    local_1f0 = puVar72;
    iVar33 = FUN_02749340(pbVar9,&local_1f0);
    local_1e8 = "ForceMoveOut";
    pbVar10 = param_1 + 0x4bd0c;
    local_1f0 = puVar72;
    iVar34 = FUN_02749340(pbVar10,&local_1f0);
    local_1e8 = "ForceMoveOut";
    uVar43 = (uint)(iVar34 != 0) << 3;
    pbVar11 = param_1 + 0x5ef3c;
    local_1f0 = puVar72;
    iVar34 = FUN_02749340(pbVar11,&local_1f0);
    local_1e8 = "ForceMoveOut";
    pbVar12 = param_1 + 0x7216c;
    local_1f0 = puVar72;
    iVar35 = FUN_02749340(pbVar12,&local_1f0);
    local_1e8 = "ForceMoveOut";
    uVar44 = (uint)(iVar35 != 0) << 5;
    pbVar13 = param_1 + 0x8539c;
    local_1f0 = puVar72;
    iVar35 = FUN_02749340(pbVar13,&local_1f0);
    local_1e8 = "ForceMoveOut";
    pbVar14 = param_1 + 0x985cc;
    local_1f0 = puVar72;
    iVar36 = FUN_02749340(pbVar14,&local_1f0);
    local_1e8 = "ForceMoveOut";
    uVar41 = (uint)(iVar36 != 0) << 7;
    pbVar15 = param_1 + 0xab7fc;
    local_1f0 = puVar72;
    iVar36 = FUN_02749340(pbVar15,&local_1f0);
    local_1e8 = "ForceMoveOut";
    pbVar16 = param_1 + 0xbea2c;
    local_1f0 = puVar72;
    iVar37 = FUN_02749340(pbVar16,&local_1f0);
    uVar73 = (uint)(iVar37 != 0) << 9;
    uVar69 = iVar32 != 0 | uVar42 | (uint)(iVar33 != 0) << 2 | uVar43 | (uint)(iVar34 != 0) << 4 |
             uVar44 | (uint)(iVar35 != 0) << 6 | uVar41 | (uint)(iVar36 != 0) << 8 | uVar73;
    uVar42 = uVar69 - ((uVar42 | uVar43 | uVar44 | uVar41 | uVar73) >> 1);
    uVar42 = (uVar42 >> 2 & 0x33333333) + (uVar42 & 0x33333333);
    uVar42 = uVar42 + (uVar42 >> 4) & 0xf0f0f0f;
    uVar42 = uVar42 + (uVar42 >> 8);
    if ((uVar42 + (uVar42 >> 0x10) & 0x3f) != 0) {
      if (param_1[0xd1ce8] == 3) {
        local_1f0 = PTR_DAT_04bb2020 + 0x10;
        local_1e8 = "ForceMoveOutVillagerIndex";
        iVar32 = FUN_02749340(param_1 + 0xd1cec,&local_1f0);
        if ((iVar32 - 1U < 10) &&
           (uVar42 = 1 << (ulong)(iVar32 - 1U & 0x1f), (uVar42 & uVar69) != 0)) {
          uVar69 = uVar69 & (uVar42 ^ 0xffffffff);
        }
      }
      if (param_1[0xe4f18] == 3) {
        local_1f0 = PTR_DAT_04bb2020 + 0x10;
        local_1e8 = "ForceMoveOutVillagerIndex";
        iVar32 = FUN_02749340(param_1 + 0xe4f1c,&local_1f0);
        if ((iVar32 - 1U < 10) &&
           (uVar42 = 1 << (ulong)(iVar32 - 1U & 0x1f), (uVar42 & uVar69) != 0)) {
          uVar69 = uVar69 & (uVar42 ^ 0xffffffff);
        }
      }
      if (param_1[0xf8148] == 3) {
        local_1f0 = PTR_DAT_04bb2020 + 0x10;
        local_1e8 = "ForceMoveOutVillagerIndex";
        iVar32 = FUN_02749340(param_1 + 0xf814c,&local_1f0);
        if ((iVar32 - 1U < 10) &&
           (uVar42 = 1 << (ulong)(iVar32 - 1U & 0x1f), (uVar42 & uVar69) != 0)) {
          uVar69 = uVar69 & (uVar42 ^ 0xffffffff);
        }
      }
      if (param_1[0x10b378] == 3) {
        local_1f0 = PTR_DAT_04bb2020 + 0x10;
        local_1e8 = "ForceMoveOutVillagerIndex";
        iVar32 = FUN_02749340(param_1 + 0x10b37c,&local_1f0);
        if ((iVar32 - 1U < 10) &&
           (uVar42 = 1 << (ulong)(iVar32 - 1U & 0x1f), (uVar42 & uVar69) != 0)) {
          uVar69 = uVar69 & (uVar42 ^ 0xffffffff);
        }
      }
    }
    uVar42 = uVar69 - (uVar69 >> 1 & 0x55555555);
    uVar42 = (uVar42 >> 2 & 0x33333333) + (uVar42 & 0x33333333);
    uVar42 = uVar42 + (uVar42 >> 4) & 0xf0f0f0f;
    uVar42 = uVar42 + (uVar42 >> 8);
    if ((uVar42 + (uVar42 >> 0x10) & 0x3f) != 0) {
      if (param_1[0xd1ce8] == 3) {
        bVar52 = param_1[0xd1ce9];
        local_1f0 = PTR_DAT_04bb2020 + 0x10;
        local_1e8 = "ForceMoveOutVillagerIndex";
        iVar32 = FUN_02749340(param_1 + 0xd1cec,&local_1f0);
        if ((iVar32 == 0) && ((bVar52 == 4 || (bVar52 == 3)))) {
          if (uVar69 == 0) {
            uVar42 = 0xffffffff;
          }
          else {
            uVar42 = uVar69 - 1 & (uVar69 ^ 0xffffffff);
            uVar42 = uVar42 - (uVar42 >> 1 & 0x55555555);
            uVar42 = (uVar42 >> 2 & 0x33333333) + (uVar42 & 0x33333333);
            uVar42 = uVar42 + (uVar42 >> 4) & 0xf0f0f0f;
            uVar42 = uVar42 + (uVar42 >> 8);
            uVar42 = uVar42 + (uVar42 >> 0x10) & 0x3f;
          }
          local_1f0 = PTR_DAT_04bb2020 + 0x10;
          local_1e8 = "ForceMoveOutVillagerIndex";
          FUN_02749650(param_1 + 0xd1cec,0xffffffff,&local_1f0,uVar42 + 1,0);
          uVar43 = 0xffffffff;
          if (uVar42 < 10) {
            uVar43 = ~(1 << (ulong)(uVar42 & 0x1f));
          }
          uVar69 = uVar43 & uVar69;
          uVar42 = uVar69 - (uVar69 >> 1 & 0x55555555);
          uVar42 = (uVar42 >> 2 & 0x33333333) + (uVar42 & 0x33333333);
          uVar42 = uVar42 + (uVar42 >> 4) & 0xf0f0f0f;
          uVar42 = uVar42 + (uVar42 >> 8);
          if ((uVar42 + (uVar42 >> 0x10) & 0x3f) == 0) goto LAB_027d4814;
        }
      }
      if (param_1[0xe4f18] == 3) {
        bVar52 = param_1[0xe4f19];
        local_1f0 = PTR_DAT_04bb2020 + 0x10;
        local_1e8 = "ForceMoveOutVillagerIndex";
        iVar32 = FUN_02749340(param_1 + 0xe4f1c,&local_1f0);
        if ((iVar32 == 0) && ((bVar52 == 4 || (bVar52 == 3)))) {
          if (uVar69 == 0) {
            uVar42 = 0xffffffff;
          }
          else {
            uVar42 = 0xffffffff;
            uVar43 = uVar69 - (uVar69 >> 1 & 0x55555555);
            uVar43 = (uVar43 >> 2 & 0x33333333) + (uVar43 & 0x33333333);
            uVar43 = uVar43 + (uVar43 >> 4) & 0xf0f0f0f;
            uVar43 = uVar43 + (uVar43 >> 8);
            if ((uVar43 + (uVar43 >> 0x10) & 0x3f) != 0) {
              uVar42 = uVar69 - 1 & (uVar69 ^ 0xffffffff);
              uVar42 = uVar42 - (uVar42 >> 1 & 0x55555555);
              uVar42 = (uVar42 >> 2 & 0x33333333) + (uVar42 & 0x33333333);
              uVar42 = uVar42 + (uVar42 >> 4) & 0xf0f0f0f;
              uVar42 = uVar42 + (uVar42 >> 8);
              uVar42 = uVar42 + (uVar42 >> 0x10) & 0x3f;
            }
          }
          local_1f0 = PTR_DAT_04bb2020 + 0x10;
          local_1e8 = "ForceMoveOutVillagerIndex";
          FUN_02749650(param_1 + 0xe4f1c,0xffffffff,&local_1f0,uVar42 + 1,0);
          uVar43 = 0xffffffff;
          if (uVar42 < 10) {
            uVar43 = ~(1 << (ulong)(uVar42 & 0x1f));
          }
          uVar69 = uVar43 & uVar69;
          uVar42 = uVar69 - (uVar69 >> 1 & 0x55555555);
          uVar42 = (uVar42 >> 2 & 0x33333333) + (uVar42 & 0x33333333);
          uVar42 = uVar42 + (uVar42 >> 4) & 0xf0f0f0f;
          uVar42 = uVar42 + (uVar42 >> 8);
          if ((uVar42 + (uVar42 >> 0x10) & 0x3f) == 0) goto LAB_027d4814;
        }
      }
      if (param_1[0xf8148] == 3) {
        bVar52 = param_1[0xf8149];
        local_1f0 = PTR_DAT_04bb2020 + 0x10;
        local_1e8 = "ForceMoveOutVillagerIndex";
        iVar32 = FUN_02749340(param_1 + 0xf814c,&local_1f0);
        if ((iVar32 == 0) && ((bVar52 == 4 || (bVar52 == 3)))) {
          if (uVar69 == 0) {
            uVar42 = 0xffffffff;
          }
          else {
            uVar42 = 0xffffffff;
            uVar43 = uVar69 - (uVar69 >> 1 & 0x55555555);
            uVar43 = (uVar43 >> 2 & 0x33333333) + (uVar43 & 0x33333333);
            uVar43 = uVar43 + (uVar43 >> 4) & 0xf0f0f0f;
            uVar43 = uVar43 + (uVar43 >> 8);
            if ((uVar43 + (uVar43 >> 0x10) & 0x3f) != 0) {
              uVar42 = uVar69 - 1 & (uVar69 ^ 0xffffffff);
              uVar42 = uVar42 - (uVar42 >> 1 & 0x55555555);
              uVar42 = (uVar42 >> 2 & 0x33333333) + (uVar42 & 0x33333333);
              uVar42 = uVar42 + (uVar42 >> 4) & 0xf0f0f0f;
              uVar42 = uVar42 + (uVar42 >> 8);
              uVar42 = uVar42 + (uVar42 >> 0x10) & 0x3f;
            }
          }
          local_1f0 = PTR_DAT_04bb2020 + 0x10;
          local_1e8 = "ForceMoveOutVillagerIndex";
          FUN_02749650(param_1 + 0xf814c,0xffffffff,&local_1f0,uVar42 + 1,0);
          uVar43 = 0xffffffff;
          if (uVar42 < 10) {
            uVar43 = ~(1 << (ulong)(uVar42 & 0x1f));
          }
          uVar69 = uVar43 & uVar69;
          uVar42 = uVar69 - (uVar69 >> 1 & 0x55555555);
          uVar42 = (uVar42 >> 2 & 0x33333333) + (uVar42 & 0x33333333);
          uVar42 = uVar42 + (uVar42 >> 4) & 0xf0f0f0f;
          uVar42 = uVar42 + (uVar42 >> 8);
          if ((uVar42 + (uVar42 >> 0x10) & 0x3f) == 0) goto LAB_027d4814;
        }
      }
      if (param_1[0x10b378] == 3) {
        bVar52 = param_1[0x10b379];
        local_1f0 = PTR_DAT_04bb2020 + 0x10;
        local_1e8 = "ForceMoveOutVillagerIndex";
        iVar32 = FUN_02749340(param_1 + 0x10b37c,&local_1f0);
        if ((iVar32 == 0) && ((bVar52 == 4 || (bVar52 == 3)))) {
          iVar32 = 0;
          if ((uVar69 != 0) &&
             (uVar42 = uVar69 - (uVar69 >> 1 & 0x55555555),
             uVar42 = (uVar42 >> 2 & 0x33333333) + (uVar42 & 0x33333333),
             uVar42 = uVar42 + (uVar42 >> 4) & 0xf0f0f0f, uVar42 = uVar42 + (uVar42 >> 8),
             (uVar42 + (uVar42 >> 0x10) & 0x3f) != 0)) {
            uVar42 = uVar69 - 1 & (uVar69 ^ 0xffffffff);
            uVar42 = uVar42 - (uVar42 >> 1 & 0x55555555);
            uVar42 = (uVar42 >> 2 & 0x33333333) + (uVar42 & 0x33333333);
            uVar42 = uVar42 + (uVar42 >> 4) & 0xf0f0f0f;
            uVar42 = uVar42 + (uVar42 >> 8);
            iVar32 = (uVar42 + (uVar42 >> 0x10) & 0x3f) + 1;
          }
          local_1f0 = PTR_DAT_04bb2020 + 0x10;
          local_1e8 = "ForceMoveOutVillagerIndex";
          FUN_02749650(param_1 + 0x10b37c,0xffffffff,&local_1f0,iVar32,0);
        }
      }
    }
LAB_027d4814:
    puVar70 = PTR_DAT_04bb3768;
    lVar45 = *param_2;
    if (lVar45 < 0) {
      lVar45 = 1;
    }
    iVar32 = (int)lVar45;
    if (iVar32 < 1) {
      local_2fc = 0;
      puVar72 = PTR_DAT_04bc27f0;
    }
    else {
      bVar52 = param_1[0x1e335d];
      if ((char)bVar52 < '\0') {
        local_2fc = 0;
      }
      else {
        pbVar66 = param_1 + (ulong)bVar52 * 0x13230;
        if (9 < bVar52) {
          pbVar66 = param_1;
        }
        local_1f0 = PTR_DAT_04bb2020 + 0x10;
        local_1e8 = "AbandonedHouse";
        iVar33 = FUN_02749340(pbVar66 + 0x1267c,&local_1f0);
        bVar52 = param_1[0x1e335d];
        if (iVar33 == 0) {
          local_2fc = 0;
        }
        else {
          local_1f0 = (undefined *)CONCAT44(local_1f0._4_4_,(int)(char)bVar52);
          FUN_027e60c0(param_1,&local_1f0);
          local_1e8 = (char *)((long)&local_1e0 + 4);
          local_1d8._0_4_ = (uint)(uint3)local_1d8;
          local_1f0 = puVar70 + 0x10;
          local_1e0 = CONCAT35(local_1e0._5_3_,8);
          FUN_038d1270(&local_1f0,"-----");
          if ((ulong)*pbVar66 < 0x23) {
            FUN_038d1270(&local_1f0,"%s%02d",
                         *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*pbVar66 * 8 + 0xb0),pbVar66[1]);
          }
          local_228 = (undefined *)CONCAT44(local_228._4_4_,(int)(char)param_1[0x1e335d]);
          FUN_02208b30(&local_228);
          local_2fc = 1 << (ulong)(param_1[0x1e335d] & 0x1f);
          if (9 < param_1[0x1e335d]) {
            local_2fc = 0;
          }
          memset(pbVar66,0,0x13230);
          FUN_0268abb0(pbVar66);
          local_228 = PTR_DAT_04bb2020 + 0x10;
          local_220 = "LE_NnpcHouseMoveOut";
          uVar51 = FUN_01b61690(&local_78,&local_a0,&local_1f0);
          if ((uVar51 & 1) != 0) {
            uVar51 = local_a0 & 0xff;
            uVar79 = (ulong)local_78 & 0xffff;
            lVar55 = *(long *)PTR_DAT_04bb49a0;
            (**(code **)(local_228 + 0x18))(&local_228);
            uVar38 = FUN_006bd550(local_220,0);
            local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar38);
            uVar65 = FUN_01b5b650(lVar55 + 0x238,&local_98);
            FUN_01b60bc0(&local_228,uVar79,uVar51,uVar65,0,0);
          }
          param_1[0x1e3360] = 0;
          param_1[0x1e335d] = 0xff;
          param_1[0x1e335e] = 0xf;
          bVar52 = 0xff;
        }
      }
      lVar55 = FUN_0265c2a0((int)(char)bVar52);
      if (lVar55 == 0) {
        uVar67 = 0;
        uVar68 = 0x23;
      }
      else {
        if ((*(long **)(lVar55 + 0x28) == (long *)0x0) ||
           (puVar46 = (undefined8 *)**(long **)(lVar55 + 0x28), puVar46 == (undefined8 *)0x0)) {
          uVar51 = 0;
        }
        else {
          uVar51 = (**(code **)*puVar46)();
          uVar51 = uVar51 & 0xffffffff;
        }
        pbVar66 = (byte *)(*(long *)(lVar55 + 0x10) + *(long *)(lVar55 + 8));
        uVar68 = (ushort)*pbVar66;
        uVar67 = (ushort)pbVar66[1];
        FUN_020fd7d8();
        if ((((uVar51 & 1) != 0) && (*(long *)(lVar55 + 0x28) != 0)) &&
           (puVar46 = *(undefined8 **)(*(long *)(lVar55 + 0x28) + 8), puVar46 != (undefined8 *)0x0))
        {
          (**(code **)*puVar46)();
        }
      }
      puVar72 = PTR_DAT_04bc27f0;
      uVar51 = (ulong)*param_1;
      uVar67 = uVar67 | uVar68 << 8;
      if (((uVar51 < 0x23) && (bVar52 = param_1[1], bVar52 <= (byte)PTR_DAT_04bc27f0[uVar51])) &&
         (((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(bVar52 & 0x1f) & 1) != 0 &&
          (uVar67 != CONCAT11(*param_1,bVar52))))) {
        local_1f0 = PTR_DAT_04bb2020 + 0x10;
        local_1e8 = "AbandonedHouse";
        iVar33 = FUN_02749340(pbVar80,&local_1f0);
        if (iVar33 != 0) {
          memset(param_1,0,0x13230);
          FUN_0268abb0(param_1);
        }
      }
      uVar51 = (ulong)*pbVar18;
      if (((uVar51 < 0x23) && (bVar52 = param_1[0x13231], bVar52 <= (byte)puVar72[uVar51])) &&
         (((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(bVar52 & 0x1f) & 1) != 0 &&
          (uVar67 != CONCAT11(*pbVar18,bVar52))))) {
        local_1f0 = PTR_DAT_04bb2020 + 0x10;
        local_1e8 = "AbandonedHouse";
        iVar33 = FUN_02749340(pbVar81,&local_1f0);
        if (iVar33 != 0) {
          memset(pbVar18,0,0x13230);
          FUN_0268abb0(pbVar18);
        }
      }
      uVar51 = (ulong)*pbVar7;
      if ((((uVar51 < 0x23) && (bVar52 = param_1[0x26461], bVar52 <= (byte)puVar72[uVar51])) &&
          ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(bVar52 & 0x1f) & 1) != 0)) &&
         (uVar67 != CONCAT11(*pbVar7,bVar52))) {
        local_1f0 = PTR_DAT_04bb2020 + 0x10;
        local_1e8 = "AbandonedHouse";
        iVar33 = FUN_02749340(pbVar9,&local_1f0);
        if (iVar33 != 0) {
          memset(pbVar7,0,0x13230);
          FUN_0268abb0(pbVar7);
        }
      }
      uVar51 = (ulong)*pbVar6;
      if (((uVar51 < 0x23) && (bVar52 = param_1[0x39691], bVar52 <= (byte)puVar72[uVar51])) &&
         (((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(bVar52 & 0x1f) & 1) != 0 &&
          (uVar67 != CONCAT11(*pbVar6,bVar52))))) {
        local_1f0 = PTR_DAT_04bb2020 + 0x10;
        local_1e8 = "AbandonedHouse";
        iVar33 = FUN_02749340(pbVar10,&local_1f0);
        if (iVar33 != 0) {
          memset(pbVar6,0,0x13230);
          FUN_0268abb0(pbVar6);
        }
      }
      uVar51 = (ulong)*pbVar5;
      if (((uVar51 < 0x23) && (bVar52 = param_1[0x4c8c1], bVar52 <= (byte)puVar72[uVar51])) &&
         (((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(bVar52 & 0x1f) & 1) != 0 &&
          (uVar67 != CONCAT11(*pbVar5,bVar52))))) {
        local_1f0 = PTR_DAT_04bb2020 + 0x10;
        local_1e8 = "AbandonedHouse";
        iVar33 = FUN_02749340(pbVar11,&local_1f0);
        if (iVar33 != 0) {
          memset(pbVar5,0,0x13230);
          FUN_0268abb0(pbVar5);
        }
      }
      uVar51 = (ulong)*pbVar4;
      if ((((uVar51 < 0x23) && (bVar52 = param_1[0x5faf1], bVar52 <= (byte)puVar72[uVar51])) &&
          ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(bVar52 & 0x1f) & 1) != 0)) &&
         (uVar67 != CONCAT11(*pbVar4,bVar52))) {
        local_1f0 = PTR_DAT_04bb2020 + 0x10;
        local_1e8 = "AbandonedHouse";
        iVar33 = FUN_02749340(pbVar12,&local_1f0);
        if (iVar33 != 0) {
          memset(pbVar4,0,0x13230);
          FUN_0268abb0(pbVar4);
        }
      }
      uVar51 = (ulong)*pbVar3;
      if (((uVar51 < 0x23) && (bVar52 = param_1[0x72d21], bVar52 <= (byte)puVar72[uVar51])) &&
         (((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(bVar52 & 0x1f) & 1) != 0 &&
          (uVar67 != CONCAT11(*pbVar3,bVar52))))) {
        local_1f0 = PTR_DAT_04bb2020 + 0x10;
        local_1e8 = "AbandonedHouse";
        iVar33 = FUN_02749340(pbVar13,&local_1f0);
        if (iVar33 != 0) {
          memset(pbVar3,0,0x13230);
          FUN_0268abb0(pbVar3);
        }
      }
      uVar51 = (ulong)*pbVar2;
      if (((uVar51 < 0x23) && (bVar52 = param_1[0x85f51], bVar52 <= (byte)puVar72[uVar51])) &&
         (((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(bVar52 & 0x1f) & 1) != 0 &&
          (uVar67 != CONCAT11(*pbVar2,bVar52))))) {
        local_1f0 = PTR_DAT_04bb2020 + 0x10;
        local_1e8 = "AbandonedHouse";
        iVar33 = FUN_02749340(pbVar14,&local_1f0);
        if (iVar33 != 0) {
          memset(pbVar2,0,0x13230);
          FUN_0268abb0(pbVar2);
        }
      }
      uVar51 = (ulong)*pbVar1;
      if ((((uVar51 < 0x23) && (bVar52 = param_1[0x99181], bVar52 <= (byte)puVar72[uVar51])) &&
          ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(bVar52 & 0x1f) & 1) != 0)) &&
         (uVar67 != CONCAT11(*pbVar1,bVar52))) {
        local_1f0 = PTR_DAT_04bb2020 + 0x10;
        local_1e8 = "AbandonedHouse";
        iVar33 = FUN_02749340(pbVar15,&local_1f0);
        if (iVar33 != 0) {
          memset(pbVar1,0,0x13230);
          FUN_0268abb0(pbVar1);
        }
      }
      uVar51 = (ulong)*__s;
      if (((uVar51 < 0x23) && (bVar52 = param_1[0xac3b1], bVar52 <= (byte)puVar72[uVar51])) &&
         (((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(bVar52 & 0x1f) & 1) != 0 &&
          (uVar67 != CONCAT11(*__s,bVar52))))) {
        local_1f0 = PTR_DAT_04bb2020 + 0x10;
        local_1e8 = "AbandonedHouse";
        iVar33 = FUN_02749340(pbVar16,&local_1f0);
        if (iVar33 != 0) {
          memset(__s,0,0x13230);
          FUN_0268abb0(__s);
        }
      }
      uVar51 = 0;
      puVar17 = PTR_DAT_04bb2020 + 0x10;
      pbVar66 = param_1;
      do {
        uVar79 = (ulong)*pbVar66;
        if (((uVar79 < 0x23) && (pbVar66[1] <= (byte)PTR_DAT_04bc27f0[uVar79])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar79 * 4) >> (ulong)(pbVar66[1] & 0x1f) & 1) != 0)) {
          local_1e8 = "ForceMoveOut";
          local_1f0 = puVar17;
          iVar33 = FUN_02749340(pbVar66 + 0x1267c,&local_1f0);
          if (iVar33 != 0) {
            uVar42 = (uint)uVar51;
            local_1f0 = (undefined *)CONCAT44(local_1f0._4_4_,uVar42);
            FUN_027e60c0(param_1,&local_1f0);
            local_1d8._0_4_ = (uint)(uint3)local_1d8;
            local_1e0 = CONCAT35(local_1e0._5_3_,8);
            local_1f0 = puVar70 + 0x10;
            local_1e8 = (char *)((long)&local_1e0 + 4);
            FUN_038d1270(&local_1f0,"-----");
            if ((ulong)*pbVar66 < 0x23) {
              FUN_038d1270(&local_1f0,"%s%02d",
                           *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*pbVar66 * 8 + 0xb0),pbVar66[1]
                          );
            }
            local_228 = (undefined *)CONCAT44(local_228._4_4_,uVar42);
            FUN_02208b30(&local_228);
            uVar42 = 1 << (ulong)(uVar42 & 0x1f);
            DAT_054540d0 = DAT_054540d0 | uVar42;
            puVar72 = PTR_DAT_04bb2020 + 0x10;
            local_220 = "ForceMoveOut";
            local_228 = puVar72;
            FUN_02749650(pbVar66 + 0x1267c,uVar51 & 0xffffffff,&local_228,0,0);
            FUN_027dc85c(param_1,pbVar66);
            FUN_027e0740(param_1,pbVar66,2);
            memset(pbVar66,0,0x13230);
            FUN_0268abb0(pbVar66);
            local_220 = "LE_NnpcHouseMoveOut";
            local_228 = puVar72;
            uVar79 = FUN_01b61690(&local_78,&local_a0,&local_1f0);
            if ((uVar79 & 1) != 0) {
              uVar79 = local_a0 & 0xff;
              uVar54 = (ulong)local_78 & 0xffff;
              lVar55 = *(long *)PTR_DAT_04bb49a0;
              (**(code **)(local_228 + 0x18))(&local_228);
              uVar38 = FUN_006bd550(local_220,0);
              local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar38);
              uVar65 = FUN_01b5b650(lVar55 + 0x238,&local_98);
              FUN_01b60bc0(&local_228,uVar54,uVar79,uVar65,0,0);
            }
            if (uVar51 == ((long)(char)param_1[0x1e335d] & 0xffffffffU)) {
              param_1[0x1e3360] = 0;
              param_1[0x1e335d] = 0xff;
              param_1[0x1e335e] = 0xf;
            }
            local_2fc = local_2fc | uVar42;
          }
        }
        puVar72 = PTR_DAT_04bc27f0;
        uVar51 = uVar51 + 1;
        pbVar66 = pbVar66 + 0x13230;
      } while (uVar51 != 10);
      if ((char)param_1[0x1e335d] < '\0') {
        uVar51 = (ulong)*param_1;
        if ((((0x22 < uVar51) || ((byte)PTR_DAT_04bc27f0[uVar51] < param_1[1])) ||
            ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[1] & 0x1f) & 1) == 0)) ||
           (param_1[0x1267a] != 2)) {
LAB_027d5324:
          uVar51 = (ulong)*pbVar18;
          if (((uVar51 < 0x23) && (param_1[0x13231] <= (byte)puVar72[uVar51])) &&
             (((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0x13231] & 0x1f) & 1) !=
               0 && (param_1[0x258aa] == 2)))) {
            local_1f0 = PTR_DAT_04bb2020 + 0x10;
            local_1e8 = "MoveInCompletion";
            iVar33 = FUN_02749340(pbVar81,&local_1f0);
            if (iVar33 != 0) {
              uVar42 = 1;
              goto LAB_027d5754;
            }
          }
          uVar51 = (ulong)*pbVar7;
          if (((uVar51 < 0x23) && (param_1[0x26461] <= (byte)puVar72[uVar51])) &&
             (((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0x26461] & 0x1f) & 1) !=
               0 && (param_1[0x38ada] == 2)))) {
            local_1f0 = PTR_DAT_04bb2020 + 0x10;
            local_1e8 = "MoveInCompletion";
            iVar33 = FUN_02749340(pbVar9,&local_1f0);
            if (iVar33 != 0) {
              uVar42 = 2;
              goto LAB_027d5754;
            }
          }
          uVar51 = (ulong)*pbVar6;
          if ((((uVar51 < 0x23) && (param_1[0x39691] <= (byte)puVar72[uVar51])) &&
              ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0x39691] & 0x1f) & 1) !=
               0)) && (param_1[0x4bd0a] == 2)) {
            local_1f0 = PTR_DAT_04bb2020 + 0x10;
            local_1e8 = "MoveInCompletion";
            iVar33 = FUN_02749340(pbVar10,&local_1f0);
            if (iVar33 != 0) {
              uVar42 = 3;
              goto LAB_027d5754;
            }
          }
          uVar51 = (ulong)*pbVar5;
          if (((uVar51 < 0x23) && (param_1[0x4c8c1] <= (byte)puVar72[uVar51])) &&
             (((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0x4c8c1] & 0x1f) & 1) !=
               0 && (param_1[0x5ef3a] == 2)))) {
            local_1f0 = PTR_DAT_04bb2020 + 0x10;
            local_1e8 = "MoveInCompletion";
            iVar33 = FUN_02749340(pbVar11,&local_1f0);
            if (iVar33 != 0) {
              uVar42 = 4;
              goto LAB_027d5754;
            }
          }
          uVar51 = (ulong)*pbVar4;
          if (((uVar51 < 0x23) && (param_1[0x5faf1] <= (byte)puVar72[uVar51])) &&
             (((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0x5faf1] & 0x1f) & 1) !=
               0 && (param_1[0x7216a] == 2)))) {
            local_1f0 = PTR_DAT_04bb2020 + 0x10;
            local_1e8 = "MoveInCompletion";
            iVar33 = FUN_02749340(pbVar12,&local_1f0);
            if (iVar33 != 0) {
              uVar42 = 5;
              goto LAB_027d5754;
            }
          }
          uVar51 = (ulong)*pbVar3;
          if ((((uVar51 < 0x23) && (param_1[0x72d21] <= (byte)puVar72[uVar51])) &&
              ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0x72d21] & 0x1f) & 1) !=
               0)) && (param_1[0x8539a] == 2)) {
            local_1f0 = PTR_DAT_04bb2020 + 0x10;
            local_1e8 = "MoveInCompletion";
            iVar33 = FUN_02749340(pbVar13,&local_1f0);
            if (iVar33 != 0) {
              uVar42 = 6;
              goto LAB_027d5754;
            }
          }
          uVar51 = (ulong)*pbVar2;
          if (((uVar51 < 0x23) && (param_1[0x85f51] <= (byte)puVar72[uVar51])) &&
             (((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0x85f51] & 0x1f) & 1) !=
               0 && (param_1[0x985ca] == 2)))) {
            local_1f0 = PTR_DAT_04bb2020 + 0x10;
            local_1e8 = "MoveInCompletion";
            iVar33 = FUN_02749340(pbVar14,&local_1f0);
            if (iVar33 != 0) {
              uVar42 = 7;
              goto LAB_027d5754;
            }
          }
          uVar51 = (ulong)*pbVar1;
          if (((uVar51 < 0x23) && (param_1[0x99181] <= (byte)puVar72[uVar51])) &&
             (((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0x99181] & 0x1f) & 1) !=
               0 && (param_1[0xab7fa] == 2)))) {
            local_1f0 = PTR_DAT_04bb2020 + 0x10;
            local_1e8 = "MoveInCompletion";
            iVar33 = FUN_02749340(pbVar15,&local_1f0);
            if (iVar33 != 0) {
              uVar42 = 8;
              goto LAB_027d5754;
            }
          }
          uVar51 = (ulong)*__s;
          if ((((uVar51 < 0x23) && (param_1[0xac3b1] <= (byte)puVar72[uVar51])) &&
              ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0xac3b1] & 0x1f) & 1) !=
               0)) && (param_1[0xbea2a] == 2)) {
            local_1f0 = PTR_DAT_04bb2020 + 0x10;
            local_1e8 = "MoveInCompletion";
            iVar33 = FUN_02749340(pbVar16,&local_1f0);
            if (iVar33 != 0) {
              uVar42 = 9;
              goto LAB_027d5754;
            }
          }
LAB_027d58f8:
          bVar52 = 0;
          if (iVar32 <= (char)param_1[0x1e335e]) {
            bVar52 = param_1[0x1e335e] - (char)lVar45;
          }
          param_1[0x1e335e] = bVar52;
          uVar42 = 0x1e;
          if ((uint)((char)param_1[0x1e335f] + iVar32) < 0x1e) {
            uVar42 = (char)param_1[0x1e335f] + iVar32;
          }
          param_1[0x1e335f] = (byte)uVar42;
          iVar32 = FUN_027dadcc(param_1,1);
          param_1[0x1e335d] = 0xff;
          if (((char)param_1[0x1e335e] < '\x01') && (5 < iVar32)) {
            bVar52 = param_1[0x1e335f];
            if ('\x04' < (char)bVar52) {
              if (DAT_05594b4c == '\x01') {
                uVar42 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
                DAT_05582b70 = DAT_05582b74;
                DAT_05582b74 = DAT_05582b78;
                uVar42 = uVar42 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar42 ^ DAT_05582b7c;
                DAT_05582b78 = DAT_05582b7c;
                DAT_05582b7c = uVar42;
              }
              else {
                uVar42 = nn::os::GetSystemTick();
                uVar43 = (uVar42 ^ uVar42 >> 0x1e) * 0x6c078965 + 1;
                uVar42 = uVar43 ^ uVar43 * 0x800;
                uVar43 = (uVar43 ^ uVar43 >> 0x1e) * 0x6c078965 + 2;
                uVar43 = (uVar43 ^ uVar43 >> 0x1e) * 0x6c078965 + 3;
                uVar43 = (uVar43 ^ uVar43 >> 0x1e) * 0x6c078965 + 4;
                uVar42 = uVar42 >> 8 ^ uVar43 >> 0x13 ^ uVar42 ^ uVar43;
              }
              if ((uint)((ulong)uVar42 * 100 >> 0x20) < iVar32 * 5 + (uint)bVar52) {
                if (*(long *)PTR_DAT_04bb46b0 == 0) {
                  uVar51 = 0xffffffff;
                }
                else {
                  lVar45 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10)
                                       + 0x38))();
                  if (lVar45 == 0) {
                    uVar51 = 0xffffffff;
                  }
                  else {
                    if ((*(long **)(lVar45 + 0x27f590) == (long *)0x0) ||
                       (puVar46 = (undefined8 *)**(long **)(lVar45 + 0x27f590),
                       puVar46 == (undefined8 *)0x0)) {
                      uVar42 = *(uint *)(*(long *)(lVar45 + 0x27f578) + *(long *)(lVar45 + 0x27f570)
                                        );
                    }
                    else {
                      uVar51 = (**(code **)*puVar46)();
                      uVar42 = *(uint *)(*(long *)(lVar45 + 0x27f578) + *(long *)(lVar45 + 0x27f570)
                                        );
                      if ((((uVar51 & 1) != 0) && (*(long *)(lVar45 + 0x27f590) != 0)) &&
                         (puVar46 = *(undefined8 **)(*(long *)(lVar45 + 0x27f590) + 8),
                         puVar46 != (undefined8 *)0x0)) {
                        (**(code **)*puVar46)();
                      }
                    }
                    uVar51 = (ulong)uVar42;
                  }
                }
                param_1[0x1e335d] = 0xff;
                if (*(long *)PTR_DAT_04bb32f0 != 0) {
                  lVar45 = *(long *)PTR_DAT_04bb27d0;
                  if (((lVar45 != 0) && (*(long *)(lVar45 + 0x28) != 0)) &&
                     (*(int *)(lVar45 + 0x80) == 1)) {
LAB_027d8b88:
                    puVar28 = PTR_DAT_04bb4138;
                    puVar17 = PTR_DAT_04bb40b8;
                    local_a0 = local_a0 & 0xffffffff00000000;
                    uVar79 = 0;
                    puVar72 = PTR_DAT_04bb2020 + 0x10;
                    puVar70 = PTR_DAT_04bb3768 + 0x10;
LAB_027d8bec:
                    lVar45 = *(long *)puVar28;
                    if (lVar45 == 0) goto LAB_027d90b4;
                    local_1d8._0_4_ = (uint)(uint3)local_1d8;
                    uVar54 = (ulong)local_1e0 >> 0x20;
                    local_1e0 = CONCAT44((uint)uVar54 & 0xffffff00,8);
                    local_1f0 = puVar70;
                    local_1e8 = (char *)((long)&local_1e0 + 4);
                    uVar38 = FUN_021d7d60(param_1 + uVar79 * 0x13230);
                    uVar54 = FUN_021d7c00(&local_1f0,uVar38);
                    if ((uVar54 & 1) == 0) goto LAB_027d90b4;
                    if (uVar79 != uVar51) {
                      (**(code **)(local_1f0 + 0x18))(&local_1f0);
                      uVar38 = FUN_006bd550(local_1e8,0);
                      local_228 = (undefined *)CONCAT44(local_228._4_4_,uVar38);
                      puVar50 = (uint *)FUN_0079e770(lVar45,&local_228);
                      if (puVar50 == (uint *)0x0) goto LAB_027d90b4;
                      psVar49 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
                      if (*psVar49 == 0) {
                        local_98 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
                        if ((char)((ulong)local_98 >> 0x20) < '\x05') {
                          lVar45 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_98);
                          local_228 = (undefined *)(lVar45 + -0x15180);
                          local_98 = (undefined *)
                                     nn::time::ToCalendarTimeInUtc((PosixTime *)&local_228);
                        }
                        uVar54 = (ulong)local_98;
                        psVar49 = (short *)&local_98;
                        local_98._0_6_ = CONCAT24(5,(int)local_98);
                        local_98._7_1_ = SUB81(uVar54,7);
                        local_98._0_7_ = (uint7)(uint6)local_98;
                      }
                      local_78 = *(undefined **)psVar49;
                      uVar54 = (ulong)local_228 >> 0x38;
                      uVar42 = *puVar50;
                      if (uVar42 != 0) {
                        cVar61 = *PTR_DAT_04bb40b0;
                        do {
                          if (cVar61 != '\0') {
                            uVar43 = *(uint *)(puVar17 + 100);
                            if ((int)uVar43 < 0) {
                              if (uVar43 == 0xffffffff) goto LAB_027d8d5c;
LAB_027d8de0:
                              cVar58 = '\0';
                            }
                            else {
                              cVar58 = '\0';
                              if ((char *)((ulong)uVar43 + (long)puVar50) != (char *)0x0) {
                                cVar58 = *(char *)((ulong)uVar43 + (long)puVar50);
                              }
                            }
LAB_027d8df4:
                            uVar47 = (ulong)*puVar50;
                            if (*puVar50 == 0) goto LAB_027d8e94;
                            uVar63 = (ulong)*(uint *)(puVar17 + 0x60);
                            goto LAB_027d8e00;
                          }
                          cVar61 = '\x01';
                          *PTR_DAT_04bb40b0 = 1;
                          *(undefined4 *)(puVar17 + 0xa0) = 0xffffffff;
                          *(undefined8 *)puVar17 = 0xffffffffffffffff;
                          *(undefined8 *)(puVar17 + 8) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar17 + 0x10) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar17 + 0x18) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar17 + 0x20) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar17 + 0x28) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar17 + 0x30) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar17 + 0x38) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar17 + 0x40) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar17 + 0x48) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar17 + 0x50) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar17 + 0x58) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar17 + 0x60) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar17 + 0x68) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar17 + 0x70) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar17 + 0x78) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar17 + 0x80) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar17 + 0x88) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar17 + 0x90) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar17 + 0x98) = 0xffffffffffffffff;
                          uVar42 = *puVar50;
LAB_027d8d5c:
                          puVar62 = (uint *)(ulong)uVar42;
                          cVar58 = '\0';
                          if ((puVar62 == (uint *)0x0) || (puVar50 == puVar62)) goto LAB_027d8df4;
                          lVar45 = 0xc;
                          if (*(char *)((long)puVar50 + (10 - (long)puVar62)) != '\0') {
                            lVar45 = 0x1c;
                          }
                          lVar45 = (long)puVar50 + (lVar45 - (long)puVar62);
                          if (lVar45 == 0) goto LAB_027d8de0;
                          uVar47 = (ulong)*(ushort *)((long)puVar50 + (8 - (long)puVar62));
                          *(undefined4 *)(puVar17 + 100) = 0xfffffffe;
                          cVar58 = '\0';
                          if (uVar47 == 0) goto LAB_027d8df4;
                          piVar64 = (int *)(lVar45 + 4);
                          while (piVar64[-1] != -0x6ba9495d) {
                            piVar64 = piVar64 + 2;
                            uVar47 = uVar47 - 1;
                            if (uVar47 == 0) {
                              cVar58 = '\0';
                              goto LAB_027d8df4;
                            }
                          }
                          iVar32 = 0;
                          if (*piVar64 != -1) {
                            iVar32 = *piVar64;
                          }
                          *(int *)(puVar17 + 100) = iVar32;
                          uVar42 = *puVar50;
                        } while (uVar42 != 0);
                      }
                      cVar58 = '\0';
LAB_027d8dd8:
                      uVar47 = 0;
                      goto LAB_027d8e94;
                    }
                    goto LAB_027d8be0;
                  }
                  sVar26 = *(short *)PTR_DAT_04bb6298;
                  if (sVar26 != -1) {
                    local_1f0 = (undefined *)CONCAT44(local_1f0._4_4_,0x20);
                    puVar70 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar26 * 8;
                    if (0xff < (uint)(int)sVar26) {
                      puVar70 = PTR_DAT_04bc39f8;
                    }
                    if ((*(uint *)(puVar70 + 4) & 1) != 0) goto LAB_027d8b88;
                  }
                  local_1f0 = PTR_DAT_04bb2020 + 0x10;
                  local_1e8 = "TodayGlobalEventId";
                  iVar32 = FUN_0273ea30(&local_1f0);
                  if (iVar32 == 0xffff) goto LAB_027d8b88;
                }
              }
              else {
              }
            }
          }
          goto LAB_027d5980;
        }
        local_1f0 = PTR_DAT_04bb2020 + 0x10;
        local_1e8 = "MoveInCompletion";
        iVar33 = FUN_02749340(pbVar80,&local_1f0);
        if (iVar33 == 0) goto LAB_027d5324;
        uVar42 = 0;
LAB_027d5754:
        param_1[0x1e3360] = 1;
      }
      else {
        if (param_1[0x1e3360] == 0) goto LAB_027d58f8;
        uVar42 = (uint)param_1[0x1e335d];
      }
      pbVar80 = param_1 + (ulong)uVar42 * 0x13230;
      if (9 < uVar42) {
        pbVar80 = param_1;
      }
      if (pbVar80[0x1267a] == 2) {
        local_1f0 = (undefined *)CONCAT44(local_1f0._4_4_,uVar42);
        FUN_027e60c0(param_1,&local_1f0);
        local_1d8._0_4_ = (uint)(uint3)local_1d8;
        local_1e8 = (char *)((long)&local_1e0 + 4);
        local_1e0 = CONCAT35(local_1e0._5_3_,8);
        local_1f0 = PTR_DAT_04bb3768 + 0x10;
        FUN_038d1270(&local_1f0,"-----");
        if ((ulong)*pbVar80 < 0x23) {
          FUN_038d1270(&local_1f0,"%s%02d",
                       *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*pbVar80 * 8 + 0xb0),pbVar80[1]);
        }
        local_228 = (undefined *)CONCAT44(local_228._4_4_,uVar42);
        FUN_02208b30(&local_228);
        FUN_027dc85c(param_1,pbVar80);
        FUN_027e0740(param_1,pbVar80,1);
        uVar43 = 1 << (ulong)(uVar42 & 0x1f);
        if (9 < uVar42) {
          uVar43 = 0;
        }
        local_2fc = local_2fc | uVar43;
        memset(pbVar80,0,0x13230);
        FUN_0268abb0(pbVar80);
        local_228 = PTR_DAT_04bb2020 + 0x10;
        local_220 = "LE_NnpcHouseMoveOut";
        uVar51 = FUN_01b61690(&local_78,&local_a0,&local_1f0);
        if ((uVar51 & 1) != 0) {
          uVar51 = local_a0 & 0xff;
          uVar79 = (ulong)local_78 & 0xffff;
          lVar45 = *(long *)PTR_DAT_04bb49a0;
          uVar38 = FUN_006bd550("LE_NnpcHouseMoveOut",0);
          local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar38);
          uVar65 = FUN_01b5b650(lVar45 + 0x238,&local_98);
          FUN_01b60bc0(&local_228,uVar79,uVar51,uVar65,0,0);
        }
        param_1[0x1e3360] = 0;
        param_1[0x1e335d] = 0xff;
        param_1[0x1e335e] = 0xf;
      }
      else {
        local_1f0 = (undefined *)CONCAT44(local_1f0._4_4_,2);
        pbVar80[0x1267a] = 2;
        FUN_026907e0(pbVar80);
      }
    }
    goto LAB_027d5980;
  }
  if ((param_1[0x1e3360] == 0) &&
     (((lVar45 = *(long *)PTR_DAT_04bb27d0, lVar45 == 0 || (*(long *)(lVar45 + 0x28) == 0)) ||
      (*(int *)(lVar45 + 0x80) != 1)))) {
    sVar26 = *(short *)PTR_DAT_04bb6298;
    if (sVar26 != -1) {
      puVar70 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar26 * 8;
      if (0xff < (uint)(int)sVar26) {
        puVar70 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar70 + 4) & 1) != 0) goto LAB_027d411c;
    }
    local_1f0 = PTR_DAT_04bb2020 + 0x10;
    local_1e8 = "TodayGlobalEventId";
    iVar32 = FUN_0273ea30(&local_1f0);
    if (iVar32 != 0xffff) {
      param_1[0x1e335d] = 0xff;
    }
  }
LAB_027d411c:
  local_2fc = 0;
LAB_027d5988:
  uVar42 = 0;
  uVar43 = 0;
  local_168 = 0;
  iVar32 = 0;
  local_170 = 0;
  local_178 = 0;
  local_1f0 = (undefined *)0x0;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  local_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1e8 = (char *)0x0;
  local_1e0 = 0;
  do {
    uVar51 = (ulong)param_1[(long)iVar32 * 0x13230];
    if (((uVar51 < 0x23) &&
        (bVar52 = (param_1 + (long)iVar32 * 0x13230)[1], bVar52 <= (byte)puVar72[uVar51])) &&
       (uVar44 = 1 << (ulong)(bVar52 & 0x1f),
       bVar52 < 0x20 && (*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) & uVar44) != 0)) {
      uVar73 = *(uint *)((long)&local_1f0 + uVar51 * 4);
      uVar41 = 0;
      if ((uVar73 & uVar44) != 0) {
        uVar41 = 1 << (ulong)(uVar42 & 0x1f);
      }
      uVar43 = uVar41 | uVar43;
      *(uint *)((long)&local_1f0 + uVar51 * 4) = uVar73 | uVar44;
    }
    uVar42 = uVar42 + 1;
    iVar32 = iVar32 + 1;
  } while (uVar42 != 10);
  bVar27 = false;
  puVar72 = PTR_DAT_04bb2020 + 0x10;
  while( true ) {
    uVar44 = uVar43;
    puVar70 = PTR_DAT_04bc27f0;
    plVar48 = (long *)PTR_DAT_04bb32e8;
    uVar42 = uVar44 - (uVar44 >> 1 & 0x55555555);
    uVar42 = (uVar42 >> 2 & 0x33333333) + (uVar42 & 0x33333333);
    uVar42 = uVar42 + (uVar42 >> 4) & 0xf0f0f0f;
    uVar42 = uVar42 + (uVar42 >> 8);
    if ((uVar42 + (uVar42 >> 0x10) & 0x3f) == 0) break;
    uVar43 = 0;
    if (uVar44 != 0) {
      uVar42 = uVar44 - 1 & (uVar44 ^ 0xffffffff);
      uVar42 = uVar42 - (uVar42 >> 1 & 0x55555555);
      uVar42 = (uVar42 >> 2 & 0x33333333) + (uVar42 & 0x33333333);
      uVar42 = uVar42 + (uVar42 >> 4) & 0xf0f0f0f;
      uVar42 = uVar42 + (uVar42 >> 8);
      uVar42 = uVar42 + (uVar42 >> 0x10) & 0x3f;
      uVar43 = uVar44;
      if (uVar42 < 10) {
        uVar51 = 0;
        uVar73 = 0;
        bVar30 = false;
        uVar41 = 0;
        uVar78 = 0;
        iVar32 = 0;
        uVar74 = 0;
        uVar59 = 0;
        uVar69 = 0xffffffff;
        do {
          if ((ushort)(*(ushort *)(param_1 + (ulong)uVar42 * 0x13230) >> 8 |
                      *(ushort *)(param_1 + (ulong)uVar42 * 0x13230) << 8) ==
              (ushort)(*(ushort *)(param_1 + (long)iVar32 * 0x13230) >> 8 |
                      *(ushort *)(param_1 + (long)iVar32 * 0x13230) << 8)) {
            uVar78 = uVar78 | 1 << (ulong)(uVar41 & 0x1f);
            local_220 = "MoveInCompletion";
            local_228 = puVar72;
            iVar33 = FUN_02749340(param_1 + (long)iVar32 * 0x13230 + 0x1267c,&local_228);
            if (iVar33 == 0) {
              if (!bVar30) {
                if (DAT_05594b4c == '\x01') {
                  uVar40 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
                  DAT_05582b70 = DAT_05582b74;
                  DAT_05582b74 = DAT_05582b78;
                  uVar40 = uVar40 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar40 ^ DAT_05582b7c;
                  DAT_05582b78 = DAT_05582b7c;
                  DAT_05582b7c = uVar40;
                }
                else {
                  uVar40 = nn::os::GetSystemTick();
                  uVar39 = (uVar40 ^ uVar40 >> 0x1e) * 0x6c078965 + 1;
                  uVar40 = uVar39 ^ uVar39 * 0x800;
                  uVar39 = (uVar39 ^ uVar39 >> 0x1e) * 0x6c078965 + 2;
                  uVar39 = (uVar39 ^ uVar39 >> 0x1e) * 0x6c078965 + 3;
                  uVar39 = (uVar39 ^ uVar39 >> 0x1e) * 0x6c078965 + 4;
                  uVar40 = uVar40 >> 8 ^ uVar39 >> 0x13 ^ uVar40 ^ uVar39;
                }
                bVar30 = false;
LAB_027d5e50:
                uVar59 = uVar59 + 1;
                if (((ulong)uVar40 * (ulong)uVar59 & 0xffffffff00000000) == 0) {
                  uVar69 = uVar41;
                }
                goto LAB_027d5b20;
              }
            }
            else {
              puVar50 = (uint *)(param_1 + (long)iVar32 * 0x13230 + 0x12674);
              uVar40 = (uint)uVar51;
              uVar79 = nn::time::IsValidDate(uVar73,uVar40,uVar74);
              if ((uVar79 & 1) == 0) {
                uVar74 = *puVar50;
              }
              else {
                if (((uVar73 == (ushort)*puVar50) &&
                    (uVar40 == param_1[(long)iVar32 * 0x13230 + 0x12676])) &&
                   (uVar74 == param_1[(long)iVar32 * 0x13230 + 0x12677])) {
                  if (DAT_05594b4c == '\x01') {
                    uVar40 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
                    DAT_05582b70 = DAT_05582b74;
                    DAT_05582b74 = DAT_05582b78;
                    uVar40 = uVar40 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar40 ^ DAT_05582b7c;
                    DAT_05582b78 = DAT_05582b7c;
                    DAT_05582b7c = uVar40;
                  }
                  else {
                    uVar40 = nn::os::GetSystemTick();
                    uVar39 = (uVar40 ^ uVar40 >> 0x1e) * 0x6c078965 + 1;
                    uVar40 = uVar39 ^ uVar39 * 0x800;
                    uVar39 = (uVar39 ^ uVar39 >> 0x1e) * 0x6c078965 + 2;
                    uVar39 = (uVar39 ^ uVar39 >> 0x1e) * 0x6c078965 + 3;
                    uVar39 = (uVar39 ^ uVar39 >> 0x1e) * 0x6c078965 + 4;
                    uVar40 = uVar40 >> 8 ^ uVar39 >> 0x13 ^ uVar40 ^ uVar39;
                  }
                  bVar30 = true;
                  goto LAB_027d5e50;
                }
                uVar79 = nn::time::IsValidDate(uVar73,uVar40,uVar74);
                if ((uVar79 & 1) == 0) {
                  local_228 = (undefined *)0x10107d0;
                }
                else {
                  uVar39 = nn::time::IsValidDate(uVar73,uVar40,uVar74);
                  uVar54 = nn::time::IsValidDate(uVar73,uVar40,uVar74);
                  uVar47 = nn::time::IsValidDate(uVar73,uVar40,uVar74);
                  uVar79 = (ulong)uVar74 << 0x18;
                  if ((uVar47 & 1) == 0) {
                    uVar79 = 0x1000000;
                  }
                  uVar47 = uVar51 << 0x10;
                  if ((uVar54 & 1) == 0) {
                    uVar47 = 0x10000;
                  }
                  uVar54 = (ulong)uVar73 | 0x500000000;
                  if ((uVar39 & 1) == 0) {
                    uVar54 = 0x5000007d0;
                  }
                  local_228 = (undefined *)(uVar47 | uVar54 | uVar79);
                }
                local_98 = (undefined *)FUN_0272eca4(puVar50,1);
                uVar79 = FUN_00a82800(&local_228,&local_98);
                if ((uVar79 & 1) == 0) goto LAB_027d5b18;
                uVar74 = *puVar50;
              }
              uVar59 = 0;
              uVar73 = uVar74 & 0xffff;
              uVar51 = (ulong)(uVar74 >> 0x10 & 0xff);
              uVar74 = uVar74 >> 0x18;
              uVar69 = uVar41;
            }
LAB_027d5b18:
            bVar30 = true;
          }
LAB_027d5b20:
          uVar41 = uVar41 + 1;
          iVar32 = iVar32 + 1;
        } while (uVar41 != 10);
        uVar42 = uVar78 - (uVar78 >> 1 & 0x55555555);
        uVar42 = (uVar42 >> 2 & 0x33333333) + (uVar42 & 0x33333333);
        uVar42 = uVar42 + (uVar42 >> 4) & 0xf0f0f0f;
        uVar42 = uVar42 + (uVar42 >> 8);
        uVar42 = uVar42 + (uVar42 >> 0x10) & 0x3f;
        if (uVar42 != 0) {
          uVar41 = 1;
          iVar32 = 2;
          do {
            if (uVar78 != 0) {
              iVar33 = iVar32;
              uVar43 = uVar78;
              do {
                iVar33 = iVar33 + -1;
                if (iVar33 < 2) {
                  uVar43 = uVar43 - 1 & (uVar43 ^ 0xffffffff);
                  uVar43 = uVar43 - (uVar43 >> 1 & 0x55555555);
                  uVar43 = (uVar43 >> 2 & 0x33333333) + (uVar43 & 0x33333333);
                  uVar43 = uVar43 + (uVar43 >> 4) & 0xf0f0f0f;
                  uVar43 = uVar43 + (uVar43 >> 8);
                  uVar43 = uVar43 + (uVar43 >> 0x10);
                  uVar73 = uVar43 & 0x3f;
                  if (uVar73 < 10 && uVar73 != uVar69) {
                    local_228 = (undefined *)(CONCAT44(local_228._4_4_,uVar43) & 0xffffffff0000003f)
                    ;
                    FUN_0284f58c(param_1 + 0x1cb510,&local_228);
                    if (uVar73 == (int)(char)param_1[0x1e335d]) {
                      param_1[0x1e335d] = 0xff;
                    }
                    if (uVar73 == (int)(char)param_1[0x1e3361]) {
                      param_1[0x1e3361] = 0xff;
                    }
                    if (uVar73 == (int)(char)param_1[0x1e3362]) {
                      param_1[0x1e3362] = 0xff;
                    }
                    memset(param_1 + (ulong)uVar73 * 0x13230,0,0x13230);
                    FUN_0268abb0(param_1 + (ulong)uVar73 * 0x13230);
                    bVar27 = true;
                  }
                  else if (9 < uVar73) break;
                  uVar44 = uVar44 & (1 << (ulong)(uVar43 & 0x1f) ^ 0xffffffffU);
                  break;
                }
                uVar43 = uVar43 - 1 & uVar43;
              } while (uVar43 != 0);
            }
            bVar30 = uVar41 != uVar42;
            uVar41 = uVar41 + 1;
            iVar32 = iVar32 + 1;
            uVar43 = uVar44;
          } while (bVar30);
        }
      }
    }
  }
  if (!bVar27) {
    iVar32 = (int)*param_2;
    if (iVar32 != 0) {
      local_88 = 0;
      local_80 = 0;
      local_a0 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      local_98 = (undefined *)0x0;
      local_90 = (char *)0x0;
      if ((char)(local_a0 >> 0x20) < '\x05') {
        lVar45 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_a0);
        local_1f0 = (undefined *)(lVar45 + -0x15180);
        local_a0 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_1f0);
      }
      uVar43 = 0;
      uVar51 = local_a0 >> 0x30;
      local_268 = (byte *)0x0;
      uVar42 = 0;
      uVar44 = 0xffffffff;
      iVar33 = 0;
      local_a0._0_6_ = CONCAT24(5,(uint)local_a0);
      local_a0 = CONCAT26((short)uVar51,(undefined6)local_a0) & 0xff00ffffffffffff;
      puVar72 = PTR_DAT_04bc43f8 + 0x10;
      do {
        pbVar80 = param_1 + (long)iVar33 * 0x13230;
        uVar51 = (ulong)*pbVar80;
        if (((uVar51 < 0x23) && (pbVar80[1] <= (byte)puVar70[uVar51])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(pbVar80[1] & 0x1f) & 1) != 0)) {
LAB_027d60fc:
          local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
          uVar51 = FUN_02b67a30(&local_78,uVar42);
          if ((uVar51 & 1) != 0) {
            local_1f0 = (undefined *)CONCAT44(local_1f0._4_4_,1);
            puVar46 = &DAT_05636dd8;
            if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
              puVar46 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
            }
            if (puVar46[1] != 0) {
              local_228 = (undefined *)CONCAT44(local_228._4_4_,(uint)local_78);
              uVar41 = (uint)local_78;
              if (9 < (uint)local_78) {
                uVar41 = 0;
              }
              local_1e8 = (char *)CONCAT44(local_1e8._4_4_,(&DAT_05636e30)[(int)uVar41]);
              local_1f0 = puVar72;
              uVar51 = FUN_02a59140(puVar46,&local_1f0);
              if ((uVar51 & 1) != 0) {
                if (param_1[(long)iVar33 * 0x13230 + 0x1267a] == 1) {
                  if ((*(long *)PTR_DAT_04bb46b0 != 0) &&
                     (lVar45 = (**(code **)(*(long *)**(undefined8 **)
                                                       (*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x30))()
                     , lVar45 != 0)) {
                    if (((DAT_05594bb8 & 1) == 0) &&
                       (iVar34 = __cxa_guard_acquire(&DAT_05594bb8), iVar34 != 0)) {
                      DAT_05594bac = (undefined *)0xe58;
                      FUN_0277d4ac();
                      __cxa_guard_release(&DAT_05594bb8);
                    }
                    lVar55 = *(long *)(lVar45 + 0x276fb0);
                    if (lVar55 == 0) {
                      uVar41 = 0;
                    }
                    else {
                      if (*(undefined8 **)(lVar55 + 0x10) == (undefined8 *)0x0) {
                        uVar41 = 0;
                      }
                      else {
                        uVar41 = (**(code **)**(undefined8 **)(lVar55 + 0x10))();
                        lVar55 = *(long *)(lVar45 + 0x276fb0);
                        if (lVar55 == 0) goto LAB_027d62e4;
                      }
                      plVar48 = *(long **)(lVar55 + 0x20);
                      if (plVar48 != (long *)0x0) {
                        local_1f0 = *(undefined **)(lVar45 + 0x276f90);
                        local_1e8 = *(char **)(lVar45 + 0x276f98);
                        local_1e0 = 0x280;
                        (**(code **)(*plVar48 + 0x20))(plVar48,&local_1f0);
                      }
                    }
LAB_027d62e4:
                    lVar55 = *(long *)(lVar45 + 0x276f90);
                    lVar57 = *(long *)(lVar45 + 0x276f98);
                    local_1f0 = (undefined *)0xfffe;
                    FUN_0277d4ac(&local_1f0);
                    uVar51 = (ulong)local_1e8 >> 0x10;
                    local_1f0 = DAT_05594bac;
                    local_1e8 = (char *)CONCAT62((uint6)uVar51 & 0xffffffffff00,1);
                    FUN_027a9730(lVar57 + lVar55,&local_1f0);
                    if ((((uVar41 & 1) != 0) && (*(long *)(lVar45 + 0x276fb0) != 0)) &&
                       (puVar46 = *(undefined8 **)(*(long *)(lVar45 + 0x276fb0) + 0x18),
                       puVar46 != (undefined8 *)0x0)) {
                      (**(code **)*puVar46)();
                    }
                  }
                  local_1f0 = (undefined *)((ulong)local_1f0 & 0xffffffff00000000);
                  param_1[(long)iVar33 * 0x13230 + 0x1267a] = 0;
                  puVar70 = PTR_DAT_04bc27f0;
                  plVar48 = (long *)PTR_DAT_04bb32e8;
                }
              }
            }
          }
          uVar43 = uVar43 + 1;
          uVar79 = FUN_020fd7d8(pbVar80);
          uVar51 = uVar79 & 0xff;
          if ((uVar79 & 0xf8) != 0) {
            uVar51 = 0;
          }
          *(int *)((long)&local_98 + uVar51 * 4) = *(int *)((long)&local_98 + uVar51 * 4) + 1;
        }
        else if (local_268 == (byte *)0x0) {
          do {
            if ((local_2fc >> (ulong)(uVar42 & 0x1f) & 1) == 0) {
              local_268 = pbVar80;
              uVar44 = uVar42;
              goto LAB_027d60b4;
            }
            uVar42 = uVar42 + 1;
            if (uVar42 == 10) {
              if (iVar32 < 0) {
                iVar32 = 1;
              }
              goto LAB_027d63ec;
            }
            iVar33 = iVar33 + 1;
            pbVar80 = param_1 + (long)iVar33 * 0x13230;
            uVar51 = (ulong)*pbVar80;
          } while (((0x22 < uVar51) || ((byte)puVar70[uVar51] < pbVar80[1])) ||
                  ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(pbVar80[1] & 0x1f) & 1) == 0
                  ));
          local_268 = (byte *)0x0;
          goto LAB_027d60fc;
        }
LAB_027d60b4:
        uVar42 = uVar42 + 1;
        iVar33 = iVar33 + 1;
      } while (uVar42 != 10);
      if (iVar32 < 0) {
        iVar32 = 1;
      }
      if (local_268 == (byte *)0x0) {
LAB_027d63ec:
        local_268 = (byte *)0x0;
        bVar27 = true;
LAB_027d63f8:
        pbVar80 = param_1 + 0xbf670;
        puVar72 = PTR_DAT_04bb2020 + 0x10;
        do {
          uVar51 = (ulong)*pbVar80;
          if (((uVar51 < 0x23) && (param_1[0xbf671] <= (byte)puVar70[uVar51])) &&
             ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0xbf671] & 0x1f) & 1) !=
              0)) {
            local_1e8 = "ForceMoveOutVillagerIndex";
            local_1f0 = puVar72;
            iVar33 = FUN_02749340(param_1 + 0xd1cec,&local_1f0);
            if (iVar33 == 0) goto LAB_027d64d0;
            lVar45 = 0;
            pbVar81 = pbVar80;
          }
          else {
LAB_027d64d0:
            uVar51 = (ulong)param_1[0xd28a0];
            if (((uVar51 < 0x23) && (param_1[0xd28a1] <= (byte)puVar70[uVar51])) &&
               ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0xd28a1] & 0x1f) & 1)
                != 0)) {
              local_1f0 = PTR_DAT_04bb2020 + 0x10;
              local_1e8 = "ForceMoveOutVillagerIndex";
              iVar33 = FUN_02749340(param_1 + 0xe4f1c,&local_1f0);
              if (iVar33 != 0) {
                lVar45 = 1;
                pbVar81 = param_1 + 0xd28a0;
                goto LAB_027d6618;
              }
            }
            uVar51 = (ulong)param_1[0xe5ad0];
            if (((uVar51 < 0x23) && (param_1[0xe5ad1] <= (byte)puVar70[uVar51])) &&
               ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0xe5ad1] & 0x1f) & 1)
                != 0)) {
              local_1f0 = PTR_DAT_04bb2020 + 0x10;
              local_1e8 = "ForceMoveOutVillagerIndex";
              iVar33 = FUN_02749340(param_1 + 0xf814c,&local_1f0);
              if (iVar33 != 0) {
                lVar45 = 2;
                pbVar81 = param_1 + 0xe5ad0;
                goto LAB_027d6618;
              }
            }
            uVar51 = (ulong)param_1[0xf8d00];
            if (((0x22 < uVar51) || ((byte)puVar70[uVar51] < param_1[0xf8d01])) ||
               ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0xf8d01] & 0x1f) & 1)
                == 0)) goto LAB_027d669c;
            local_1f0 = PTR_DAT_04bb2020 + 0x10;
            local_1e8 = "ForceMoveOutVillagerIndex";
            iVar33 = FUN_02749340(param_1 + 0x10b37c,&local_1f0);
            if (iVar33 == 0) goto LAB_027d669c;
            lVar45 = 3;
            pbVar81 = param_1 + 0xf8d00;
          }
LAB_027d6618:
          local_1f0 = PTR_DAT_04bb2020 + 0x10;
          local_1e8 = "ForceMoveOutVillagerIndex";
          iVar33 = FUN_02749340(pbVar80 + lVar45 * 0x13230 + 0x1267c,&local_1f0);
          uVar42 = iVar33 - 1;
          if (uVar42 < 10) {
            DAT_054540d0 = DAT_054540d0 | 1 << (ulong)(uVar42 & 0x1f);
          }
          local_1f0 = (undefined *)((ulong)local_1f0 & 0xffffffff00000000);
          uVar51 = FUN_02b67a30(&local_1f0,uVar42);
          if ((uVar51 & 1) == 0) {
            memset(pbVar81,0,0x13230);
            FUN_0268abb0(pbVar81);
            puVar70 = PTR_DAT_04bc27f0;
          }
          else {
            pbVar81 = param_1 + (ulong)uVar42 * 0x13230;
            if (9 < uVar42) {
              pbVar81 = param_1;
            }
            FUN_027e8410(param_1,pbVar81,(ulong)local_1f0 & 0xffffffff,uVar42,1);
            puVar70 = PTR_DAT_04bc27f0;
          }
        } while( true );
      }
      uVar51 = FUN_027e69c0(param_1,local_268,uVar44,iVar32);
      if ((uVar51 & 1) == 0) {
        bVar27 = false;
        goto LAB_027d63f8;
      }
    }
  }
LAB_027d7198:
  FUN_0219f990(&DAT_053fe348,1);
  FUN_021bfa68(&DAT_053fe348);
  uVar65 = *(undefined8 *)PTR_DAT_04bb32f0;
  local_1f0 = PTR_DAT_04bb2020 + 0x10;
  local_1e8 = "XmasEve";
  puVar53 = (ulong *)(*plVar48 + 0x4068);
  if (*(short *)puVar53 == 0) {
    local_98 = *(undefined **)(*plVar48 + 0x4060);
    if ((char)((ulong)local_98 >> 0x20) < '\x05') {
      lVar45 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_98);
      local_228 = (undefined *)(lVar45 + -0x15180);
      local_98 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_228);
    }
    puVar53 = &local_98;
    uVar51 = (ulong)local_98 >> 0x30;
    local_98._0_6_ = CONCAT24(5,(int)local_98);
    local_98 = (undefined *)(CONCAT26((short)uVar51,(uint6)local_98) & 0xff00ffffffffffff);
  }
  uVar51 = *puVar53;
  uVar51 = FUN_00879dd0(uVar65,&local_1f0,uVar51,uVar51 >> 0x10,uVar51 >> 0x18,0);
  if ((uVar51 & 1) == 0) {
    uVar65 = *(undefined8 *)PTR_DAT_04bb32f0;
    local_1f0 = PTR_DAT_04bb2020 + 0x10;
    local_1e8 = "XmasAfter";
    puVar53 = (ulong *)(*plVar48 + 0x4068);
    if (*(short *)puVar53 == 0) {
      local_98 = *(undefined **)(*plVar48 + 0x4060);
      if ((char)((ulong)local_98 >> 0x20) < '\x05') {
        lVar45 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_98);
        local_228 = (undefined *)(lVar45 + -0x15180);
        local_98 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_228);
      }
      puVar53 = &local_98;
      uVar51 = (ulong)local_98 >> 0x30;
      local_98._0_6_ = CONCAT24(5,(int)local_98);
      local_98 = (undefined *)(CONCAT26((short)uVar51,(uint6)local_98) & 0xff00ffffffffffff);
    }
    uVar51 = *puVar53;
    uVar51 = FUN_00879dd0(uVar65,&local_1f0,uVar51,uVar51 >> 0x10,uVar51 >> 0x18,0);
    uVar79 = (ulong)*param_1;
    if (((uVar79 < 0x23) && (param_1[1] <= (byte)puVar70[uVar79])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar79 * 4) >> (ulong)(param_1[1] & 0x1f) & 1) != 0)) {
      local_1f0 = PTR_DAT_04bb2020 + 0x10;
      local_1e8 = "MoveInCompletion";
      iVar32 = FUN_02749340(param_1 + 0x1267c,&local_1f0);
      if ((iVar32 != 0) && (FUN_026aa970(param_1,param_2), DAT_053fee41 != '\0')) {
        FUN_0219b370(&DAT_053fe348,0,0);
      }
    }
    uVar79 = (ulong)*pbVar18;
    if (((uVar79 < 0x23) && (param_1[0x13231] <= (byte)puVar70[uVar79])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar79 * 4) >> (ulong)(param_1[0x13231] & 0x1f) & 1) != 0)) {
      local_1f0 = PTR_DAT_04bb2020 + 0x10;
      local_1e8 = "MoveInCompletion";
      iVar32 = FUN_02749340(param_1 + 0x258ac,&local_1f0);
      if ((iVar32 != 0) && (FUN_026aa970(pbVar18,param_2), DAT_053ff9e1 != '\0')) {
        FUN_0219b370(&DAT_053feee8,1,0);
      }
    }
    uVar79 = (ulong)*pbVar7;
    if (((uVar79 < 0x23) && (param_1[0x26461] <= (byte)puVar70[uVar79])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar79 * 4) >> (ulong)(param_1[0x26461] & 0x1f) & 1) != 0)) {
      local_1f0 = PTR_DAT_04bb2020 + 0x10;
      local_1e8 = "MoveInCompletion";
      iVar32 = FUN_02749340(param_1 + 0x38adc,&local_1f0);
      if ((iVar32 != 0) && (FUN_026aa970(pbVar7,param_2), DAT_05400581 != '\0')) {
        FUN_0219b370(&DAT_053ffa88,2,0);
      }
    }
    uVar79 = (ulong)*pbVar6;
    if (((uVar79 < 0x23) && (param_1[0x39691] <= (byte)puVar70[uVar79])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar79 * 4) >> (ulong)(param_1[0x39691] & 0x1f) & 1) != 0)) {
      local_1f0 = PTR_DAT_04bb2020 + 0x10;
      local_1e8 = "MoveInCompletion";
      iVar32 = FUN_02749340(param_1 + 0x4bd0c,&local_1f0);
      if ((iVar32 != 0) && (FUN_026aa970(pbVar6,param_2), DAT_05401121 != '\0')) {
        FUN_0219b370(&DAT_05400628,3,0);
      }
    }
    uVar79 = (ulong)*pbVar5;
    if (((uVar79 < 0x23) && (param_1[0x4c8c1] <= (byte)puVar70[uVar79])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar79 * 4) >> (ulong)(param_1[0x4c8c1] & 0x1f) & 1) != 0)) {
      local_1f0 = PTR_DAT_04bb2020 + 0x10;
      local_1e8 = "MoveInCompletion";
      iVar32 = FUN_02749340(param_1 + 0x5ef3c,&local_1f0);
      if ((iVar32 != 0) && (FUN_026aa970(pbVar5,param_2), DAT_05401cc1 != '\0')) {
        FUN_0219b370(&DAT_054011c8,4,0);
      }
    }
    uVar79 = (ulong)*pbVar4;
    if (((uVar79 < 0x23) && (param_1[0x5faf1] <= (byte)puVar70[uVar79])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar79 * 4) >> (ulong)(param_1[0x5faf1] & 0x1f) & 1) != 0)) {
      local_1f0 = PTR_DAT_04bb2020 + 0x10;
      local_1e8 = "MoveInCompletion";
      iVar32 = FUN_02749340(param_1 + 0x7216c,&local_1f0);
      if ((iVar32 != 0) && (FUN_026aa970(pbVar4,param_2), DAT_05402861 != '\0')) {
        FUN_0219b370(&DAT_05401d68,5,0);
      }
    }
    uVar79 = (ulong)*pbVar3;
    if (((uVar79 < 0x23) && (param_1[0x72d21] <= (byte)puVar70[uVar79])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar79 * 4) >> (ulong)(param_1[0x72d21] & 0x1f) & 1) != 0)) {
      local_1f0 = PTR_DAT_04bb2020 + 0x10;
      local_1e8 = "MoveInCompletion";
      iVar32 = FUN_02749340(param_1 + 0x8539c,&local_1f0);
      if ((iVar32 != 0) && (FUN_026aa970(pbVar3,param_2), DAT_05403401 != '\0')) {
        FUN_0219b370(&DAT_05402908,6,0);
      }
    }
    uVar79 = (ulong)*pbVar2;
    if (((uVar79 < 0x23) && (param_1[0x85f51] <= (byte)puVar70[uVar79])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar79 * 4) >> (ulong)(param_1[0x85f51] & 0x1f) & 1) != 0)) {
      local_1f0 = PTR_DAT_04bb2020 + 0x10;
      local_1e8 = "MoveInCompletion";
      iVar32 = FUN_02749340(param_1 + 0x985cc,&local_1f0);
      if ((iVar32 != 0) && (FUN_026aa970(pbVar2,param_2), DAT_05403fa1 != '\0')) {
        FUN_0219b370(&DAT_054034a8,7,0);
      }
    }
    uVar79 = (ulong)*pbVar1;
    if (((uVar79 < 0x23) && (param_1[0x99181] <= (byte)puVar70[uVar79])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar79 * 4) >> (ulong)(param_1[0x99181] & 0x1f) & 1) != 0)) {
      local_1f0 = PTR_DAT_04bb2020 + 0x10;
      local_1e8 = "MoveInCompletion";
      iVar32 = FUN_02749340(param_1 + 0xab7fc,&local_1f0);
      if ((iVar32 != 0) && (FUN_026aa970(pbVar1,param_2), DAT_05404b41 != '\0')) {
        FUN_0219b370(&DAT_05404048,8,0);
      }
    }
    uVar79 = (ulong)*__s;
    if (((uVar79 < 0x23) && (param_1[0xac3b1] <= (byte)puVar70[uVar79])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar79 * 4) >> (ulong)(param_1[0xac3b1] & 0x1f) & 1) != 0)) {
      local_1f0 = PTR_DAT_04bb2020 + 0x10;
      local_1e8 = "MoveInCompletion";
      iVar32 = FUN_02749340(param_1 + 0xbea2c,&local_1f0);
      if ((iVar32 != 0) && (FUN_026aa970(__s,param_2), DAT_054056e1 != '\0')) {
        FUN_0219b370(&DAT_05404be8,9,0);
      }
    }
    FUN_027da394(param_1);
    if ((uVar51 & 1) == 0) {
      lVar45 = *param_2;
      goto joined_r0x027d840c;
    }
  }
  else {
    uVar51 = (ulong)*param_1;
    if (((uVar51 < 0x23) && (param_1[1] <= (byte)puVar70[uVar51])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[1] & 0x1f) & 1) != 0)) {
      pbVar80 = param_1 + 0x1267c;
      local_1f0 = PTR_DAT_04bb2020 + 0x10;
      local_1e8 = "MoveInCompletion";
      iVar32 = FUN_02749340(pbVar80,&local_1f0);
      if (iVar32 != 0) {
        uVar51 = (ulong)*param_1;
        if (((uVar51 < 0x23) && (param_1[1] <= (byte)puVar70[uVar51])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[1] & 0x1f) & 1) != 0)) {
          local_1f0 = PTR_DAT_04bb2020 + 0x10;
          local_1e8 = "MoveInCompletion";
          iVar32 = FUN_02749340(pbVar80,&local_1f0);
          if (iVar32 != 0) {
            iVar32 = (int)(char)param_1[0x1267a];
            local_228 = (undefined *)CONCAT44(local_228._4_4_,iVar32);
            if (iVar32 == 0) {
              local_1f0 = PTR_DAT_04bb2020 + 0x10;
              local_1e8 = "EquipChristmasWear";
              FUN_02749650(pbVar80,0,&local_1f0,1,0);
            }
          }
        }
        FUN_026aa970(param_1,param_2);
        if (DAT_053fee41 != '\0') {
          FUN_0219b370(&DAT_053fe348,0,0);
        }
      }
    }
    uVar51 = (ulong)*pbVar18;
    if (((uVar51 < 0x23) && (param_1[0x13231] <= (byte)puVar70[uVar51])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0x13231] & 0x1f) & 1) != 0)) {
      pbVar80 = param_1 + 0x258ac;
      local_1f0 = PTR_DAT_04bb2020 + 0x10;
      local_1e8 = "MoveInCompletion";
      iVar32 = FUN_02749340(pbVar80,&local_1f0);
      if (iVar32 != 0) {
        uVar51 = (ulong)*pbVar18;
        if (((uVar51 < 0x23) && (param_1[0x13231] <= (byte)puVar70[uVar51])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0x13231] & 0x1f) & 1) != 0)
           ) {
          local_1f0 = PTR_DAT_04bb2020 + 0x10;
          local_1e8 = "MoveInCompletion";
          iVar32 = FUN_02749340(pbVar80,&local_1f0);
          if (iVar32 != 0) {
            iVar32 = (int)(char)param_1[0x258aa];
            local_228 = (undefined *)CONCAT44(local_228._4_4_,iVar32);
            if (iVar32 == 0) {
              local_1f0 = PTR_DAT_04bb2020 + 0x10;
              local_1e8 = "EquipChristmasWear";
              FUN_02749650(pbVar80,1,&local_1f0,1,0);
            }
          }
        }
        FUN_026aa970(pbVar18,param_2);
        if (DAT_053ff9e1 != '\0') {
          FUN_0219b370(&DAT_053feee8,1,0);
        }
      }
    }
    uVar51 = (ulong)*pbVar7;
    if (((uVar51 < 0x23) && (param_1[0x26461] <= (byte)puVar70[uVar51])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0x26461] & 0x1f) & 1) != 0)) {
      pbVar18 = param_1 + 0x38adc;
      local_1f0 = PTR_DAT_04bb2020 + 0x10;
      local_1e8 = "MoveInCompletion";
      iVar32 = FUN_02749340(pbVar18,&local_1f0);
      if (iVar32 != 0) {
        uVar51 = (ulong)*pbVar7;
        if (((uVar51 < 0x23) && (param_1[0x26461] <= (byte)puVar70[uVar51])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0x26461] & 0x1f) & 1) != 0)
           ) {
          local_1f0 = PTR_DAT_04bb2020 + 0x10;
          local_1e8 = "MoveInCompletion";
          iVar32 = FUN_02749340(pbVar18,&local_1f0);
          if (iVar32 != 0) {
            iVar32 = (int)(char)param_1[0x38ada];
            local_228 = (undefined *)CONCAT44(local_228._4_4_,iVar32);
            if (iVar32 == 0) {
              local_1f0 = PTR_DAT_04bb2020 + 0x10;
              local_1e8 = "EquipChristmasWear";
              FUN_02749650(pbVar18,2,&local_1f0,1,0);
            }
          }
        }
        FUN_026aa970(pbVar7,param_2);
        if (DAT_05400581 != '\0') {
          FUN_0219b370(&DAT_053ffa88,2,0);
        }
      }
    }
    uVar51 = (ulong)*pbVar6;
    if (((uVar51 < 0x23) && (param_1[0x39691] <= (byte)puVar70[uVar51])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0x39691] & 0x1f) & 1) != 0)) {
      pbVar7 = param_1 + 0x4bd0c;
      local_1f0 = PTR_DAT_04bb2020 + 0x10;
      local_1e8 = "MoveInCompletion";
      iVar32 = FUN_02749340(pbVar7,&local_1f0);
      if (iVar32 != 0) {
        uVar51 = (ulong)*pbVar6;
        if (((uVar51 < 0x23) && (param_1[0x39691] <= (byte)puVar70[uVar51])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0x39691] & 0x1f) & 1) != 0)
           ) {
          local_1f0 = PTR_DAT_04bb2020 + 0x10;
          local_1e8 = "MoveInCompletion";
          iVar32 = FUN_02749340(pbVar7,&local_1f0);
          if (iVar32 != 0) {
            iVar32 = (int)(char)param_1[0x4bd0a];
            local_228 = (undefined *)CONCAT44(local_228._4_4_,iVar32);
            if (iVar32 == 0) {
              local_1f0 = PTR_DAT_04bb2020 + 0x10;
              local_1e8 = "EquipChristmasWear";
              FUN_02749650(pbVar7,3,&local_1f0,1,0);
            }
          }
        }
        FUN_026aa970(pbVar6,param_2);
        if (DAT_05401121 != '\0') {
          FUN_0219b370(&DAT_05400628,3,0);
        }
      }
    }
    uVar51 = (ulong)*pbVar5;
    if (((uVar51 < 0x23) && (param_1[0x4c8c1] <= (byte)puVar70[uVar51])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0x4c8c1] & 0x1f) & 1) != 0)) {
      pbVar6 = param_1 + 0x5ef3c;
      local_1f0 = PTR_DAT_04bb2020 + 0x10;
      local_1e8 = "MoveInCompletion";
      iVar32 = FUN_02749340(pbVar6,&local_1f0);
      if (iVar32 != 0) {
        uVar51 = (ulong)*pbVar5;
        if (((uVar51 < 0x23) && (param_1[0x4c8c1] <= (byte)puVar70[uVar51])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0x4c8c1] & 0x1f) & 1) != 0)
           ) {
          local_1f0 = PTR_DAT_04bb2020 + 0x10;
          local_1e8 = "MoveInCompletion";
          iVar32 = FUN_02749340(pbVar6,&local_1f0);
          if (iVar32 != 0) {
            iVar32 = (int)(char)param_1[0x5ef3a];
            local_228 = (undefined *)CONCAT44(local_228._4_4_,iVar32);
            if (iVar32 == 0) {
              local_1f0 = PTR_DAT_04bb2020 + 0x10;
              local_1e8 = "EquipChristmasWear";
              FUN_02749650(pbVar6,4,&local_1f0,1,0);
            }
          }
        }
        FUN_026aa970(pbVar5,param_2);
        if (DAT_05401cc1 != '\0') {
          FUN_0219b370(&DAT_054011c8,4,0);
        }
      }
    }
    uVar51 = (ulong)*pbVar4;
    if (((uVar51 < 0x23) && (param_1[0x5faf1] <= (byte)puVar70[uVar51])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0x5faf1] & 0x1f) & 1) != 0)) {
      pbVar5 = param_1 + 0x7216c;
      local_1f0 = PTR_DAT_04bb2020 + 0x10;
      local_1e8 = "MoveInCompletion";
      iVar32 = FUN_02749340(pbVar5,&local_1f0);
      if (iVar32 != 0) {
        uVar51 = (ulong)*pbVar4;
        if (((uVar51 < 0x23) && (param_1[0x5faf1] <= (byte)puVar70[uVar51])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0x5faf1] & 0x1f) & 1) != 0)
           ) {
          local_1f0 = PTR_DAT_04bb2020 + 0x10;
          local_1e8 = "MoveInCompletion";
          iVar32 = FUN_02749340(pbVar5,&local_1f0);
          if (iVar32 != 0) {
            iVar32 = (int)(char)param_1[0x7216a];
            local_228 = (undefined *)CONCAT44(local_228._4_4_,iVar32);
            if (iVar32 == 0) {
              local_1f0 = PTR_DAT_04bb2020 + 0x10;
              local_1e8 = "EquipChristmasWear";
              FUN_02749650(pbVar5,5,&local_1f0,1,0);
            }
          }
        }
        FUN_026aa970(pbVar4,param_2);
        if (DAT_05402861 != '\0') {
          FUN_0219b370(&DAT_05401d68,5,0);
        }
      }
    }
    uVar51 = (ulong)*pbVar3;
    if (((uVar51 < 0x23) && (param_1[0x72d21] <= (byte)puVar70[uVar51])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0x72d21] & 0x1f) & 1) != 0)) {
      pbVar4 = param_1 + 0x8539c;
      local_1f0 = PTR_DAT_04bb2020 + 0x10;
      local_1e8 = "MoveInCompletion";
      iVar32 = FUN_02749340(pbVar4,&local_1f0);
      if (iVar32 != 0) {
        uVar51 = (ulong)*pbVar3;
        if (((uVar51 < 0x23) && (param_1[0x72d21] <= (byte)puVar70[uVar51])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0x72d21] & 0x1f) & 1) != 0)
           ) {
          local_1f0 = PTR_DAT_04bb2020 + 0x10;
          local_1e8 = "MoveInCompletion";
          iVar32 = FUN_02749340(pbVar4,&local_1f0);
          if (iVar32 != 0) {
            iVar32 = (int)(char)param_1[0x8539a];
            local_228 = (undefined *)CONCAT44(local_228._4_4_,iVar32);
            if (iVar32 == 0) {
              local_1f0 = PTR_DAT_04bb2020 + 0x10;
              local_1e8 = "EquipChristmasWear";
              FUN_02749650(pbVar4,6,&local_1f0,1,0);
            }
          }
        }
        FUN_026aa970(pbVar3,param_2);
        if (DAT_05403401 != '\0') {
          FUN_0219b370(&DAT_05402908,6,0);
        }
      }
    }
    uVar51 = (ulong)*pbVar2;
    if (((uVar51 < 0x23) && (param_1[0x85f51] <= (byte)puVar70[uVar51])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0x85f51] & 0x1f) & 1) != 0)) {
      pbVar3 = param_1 + 0x985cc;
      local_1f0 = PTR_DAT_04bb2020 + 0x10;
      local_1e8 = "MoveInCompletion";
      iVar32 = FUN_02749340(pbVar3,&local_1f0);
      if (iVar32 != 0) {
        uVar51 = (ulong)*pbVar2;
        if (((uVar51 < 0x23) && (param_1[0x85f51] <= (byte)puVar70[uVar51])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0x85f51] & 0x1f) & 1) != 0)
           ) {
          local_1f0 = PTR_DAT_04bb2020 + 0x10;
          local_1e8 = "MoveInCompletion";
          iVar32 = FUN_02749340(pbVar3,&local_1f0);
          if (iVar32 != 0) {
            iVar32 = (int)(char)param_1[0x985ca];
            local_228 = (undefined *)CONCAT44(local_228._4_4_,iVar32);
            if (iVar32 == 0) {
              local_1f0 = PTR_DAT_04bb2020 + 0x10;
              local_1e8 = "EquipChristmasWear";
              FUN_02749650(pbVar3,7,&local_1f0,1,0);
            }
          }
        }
        FUN_026aa970(pbVar2,param_2);
        if (DAT_05403fa1 != '\0') {
          FUN_0219b370(&DAT_054034a8,7,0);
        }
      }
    }
    uVar51 = (ulong)*pbVar1;
    if (((uVar51 < 0x23) && (param_1[0x99181] <= (byte)puVar70[uVar51])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0x99181] & 0x1f) & 1) != 0)) {
      pbVar2 = param_1 + 0xab7fc;
      local_1f0 = PTR_DAT_04bb2020 + 0x10;
      local_1e8 = "MoveInCompletion";
      iVar32 = FUN_02749340(pbVar2,&local_1f0);
      if (iVar32 != 0) {
        uVar51 = (ulong)*pbVar1;
        if (((uVar51 < 0x23) && (param_1[0x99181] <= (byte)puVar70[uVar51])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0x99181] & 0x1f) & 1) != 0)
           ) {
          local_1f0 = PTR_DAT_04bb2020 + 0x10;
          local_1e8 = "MoveInCompletion";
          iVar32 = FUN_02749340(pbVar2,&local_1f0);
          if (iVar32 != 0) {
            iVar32 = (int)(char)param_1[0xab7fa];
            local_228 = (undefined *)CONCAT44(local_228._4_4_,iVar32);
            if (iVar32 == 0) {
              local_1f0 = PTR_DAT_04bb2020 + 0x10;
              local_1e8 = "EquipChristmasWear";
              FUN_02749650(pbVar2,8,&local_1f0,1,0);
            }
          }
        }
        FUN_026aa970(pbVar1,param_2);
        if (DAT_05404b41 != '\0') {
          FUN_0219b370(&DAT_05404048,8,0);
        }
      }
    }
    uVar51 = (ulong)*__s;
    if (((uVar51 < 0x23) && (param_1[0xac3b1] <= (byte)puVar70[uVar51])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0xac3b1] & 0x1f) & 1) != 0)) {
      pbVar1 = param_1 + 0xbea2c;
      local_1f0 = PTR_DAT_04bb2020 + 0x10;
      local_1e8 = "MoveInCompletion";
      iVar32 = FUN_02749340(pbVar1,&local_1f0);
      if (iVar32 != 0) {
        uVar51 = (ulong)*__s;
        if (((uVar51 < 0x23) && (param_1[0xac3b1] <= (byte)puVar70[uVar51])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0xac3b1] & 0x1f) & 1) != 0)
           ) {
          local_1f0 = PTR_DAT_04bb2020 + 0x10;
          local_1e8 = "MoveInCompletion";
          iVar32 = FUN_02749340(pbVar1,&local_1f0);
          if (iVar32 != 0) {
            iVar32 = (int)(char)param_1[0xbea2a];
            local_228 = (undefined *)CONCAT44(local_228._4_4_,iVar32);
            if (iVar32 == 0) {
              local_1f0 = PTR_DAT_04bb2020 + 0x10;
              local_1e8 = "EquipChristmasWear";
              FUN_02749650(pbVar1,9,&local_1f0,1,0);
            }
          }
        }
        FUN_026aa970(__s,param_2);
        if (DAT_054056e1 != '\0') {
          FUN_0219b370(&DAT_05404be8,9,0);
        }
      }
    }
    FUN_027da394(param_1);
  }
  local_228 = *(undefined **)(*plVar48 + 0x4060);
  if ((char)((ulong)local_228 >> 0x20) < '\x05') {
    lVar45 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_228);
    local_1f0 = (undefined *)(lVar45 + -0x15180);
    local_228 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_1f0);
  }
  uVar51 = (ulong)local_228 >> 0x30;
  local_228._0_6_ = CONCAT24(5,(uint)local_228);
  local_228 = (undefined *)(CONCAT26((short)uVar51,(uint6)local_228) & 0xff00ffffffffffff);
  puVar72 = PTR_DAT_04bb2020 + 0x10;
  local_1e8 = "LastPlayXmasYear";
  local_1f0 = puVar72;
  iVar32 = FUN_0273ea30(&local_1f0);
  if (iVar32 != (short)local_228) {
    FUN_027da920(param_1);
    local_1e8 = "LastPlayXmasYear";
    local_1f0 = puVar72;
    FUN_0273f3c4(&local_1f0,(long)(short)local_228);
  }
  lVar45 = *param_2;
joined_r0x027d840c:
  if (lVar45 < 0) {
    FUN_027da920(param_1);
    lVar45 = *param_2;
  }
  DAT_05594b4c = 0;
  if (lVar45 != 0) {
    local_228 = (undefined *)0x14ed;
    FUN_0277d4ac(&local_228);
    plVar56 = (long *)PTR_DAT_04bb46b0;
    if (*(long *)PTR_DAT_04bb46b0 != 0) {
      FUN_02705554(&local_98,0,1);
      puVar72 = PTR_DAT_04bb43c0;
      if (local_98._4_4_ != 8) {
        puVar70 = PTR_DAT_04bb2020 + 0x10;
        puVar17 = PTR_DAT_04bc0510 + 0x10;
        uVar42 = local_98._4_4_;
        do {
          uVar43 = uVar42;
          if (7 < uVar42) {
            uVar43 = 0xffffffff;
          }
          local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar43);
          if ((*plVar56 != 0) && (lVar45 = FUN_026eec4c(), lVar45 != 0)) {
            local_1e8 = "UpgradePocket40";
            local_1f0 = puVar70;
            iVar32 = FUN_0274b8d0(lVar45,&local_1f0);
            if (iVar32 == 0) {
              local_1f0 = PTR_DAT_04bb2020 + 0x10;
              local_1e8 = "UpgradePocket30";
              iVar32 = FUN_0274b8d0(lVar45,&local_1f0);
              uVar43 = (uint)(iVar32 != 0);
            }
            else {
              uVar43 = 2;
            }
            local_1f0 = (undefined *)CONCAT44(local_1f0._4_4_,uVar43);
            uVar51 = 0;
            uVar79 = 0x1e;
            if (uVar43 != 1) {
              uVar79 = 0x14;
            }
            uVar54 = 0x28;
            if (uVar43 != 2) {
              uVar54 = uVar79;
            }
            do {
              psVar49 = (short *)FUN_026759e0(lVar45,uVar51);
              if ((*psVar49 != -2) && (uVar79 = FUN_0277d7b4(psVar49,&local_228), (uVar79 & 1) != 0)
                 ) {
                lVar55 = *(long *)puVar72;
                uVar43 = *(uint *)(psVar49 + 2);
                local_1e8 = *(char **)psVar49;
                local_1e0 = 0;
                local_1f0 = puVar17;
                uVar44 = FUN_0277d6c4(&local_1e8);
                if (*(long *)puVar72 != 0) {
                  lVar55 = *(long *)(lVar55 + 0x57e58);
                  uVar44 = (uVar44 & 0xffff) - (uint)*(ushort *)(lVar55 + 0x1f8);
                  if ((uVar44 < *(uint *)(lVar55 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar55 + 0x1e0) + (long)(int)uVar44 * 8) != 0)) {
                    lVar55 = *(long *)PTR_DAT_04bc0428;
                    uVar44 = FUN_0277d6c4(psVar49);
                    uVar44 = (uVar44 & 0xffff) - (uint)*(ushort *)(lVar55 + 0x1f8);
                    if (uVar44 < *(uint *)(lVar55 + 0x1d8)) {
                      lVar55 = *(long *)(*(long *)(lVar55 + 0x1e0) + (long)(int)uVar44 * 8);
                      if (lVar55 != 0) {
                        local_1e0 = lVar55;
                      }
                    }
                  }
                }
                iVar32 = FUN_0277d6c4(&local_1e8);
                if ((iVar32 == 0xac5) || (iVar32 = FUN_0277d6c4(&local_1e8), iVar32 == 0x14ed)) {
                  local_a0 = CONCAT53(local_a0._3_5_,0x80023);
                  FUN_020fd218(&local_a0,uVar43 & 0xff,uVar43 >> 8 & 0xff);
                }
                else {
                  local_a0 = CONCAT53(local_a0._3_5_,0x80023);
                }
                if (((ushort)local_a0 & 0xff) < 0x23) {
                  if ((((uint)((ushort)local_a0 >> 8) <=
                        (uint)(byte)PTR_DAT_04bc27f0[local_a0 & 0xff]) &&
                      ((*(uint *)(PTR_DAT_04bc2a20 + (local_a0 & 0xff) * 4) >>
                        (ulong)((ushort)local_a0 >> 8 & 0x1f) & 1) != 0)) &&
                     (iVar32 = FUN_021d7d60(&local_a0), iVar32 == -1)) {
                    FUN_02674a80(&local_78,uVar51 & 0xffffffff,PTR_DAT_04bb37e0,1,0);
                  }
                }
              }
              plVar56 = (long *)PTR_DAT_04bb46b0;
              plVar48 = (long *)PTR_DAT_04bb32e8;
              uVar51 = uVar51 + 1;
            } while (uVar54 != uVar51);
            if (uVar42 < 8) {
              lVar45 = *(long *)PTR_DAT_04bb46b0;
              if (lVar45 == 0) break;
              (**(code **)(*(long *)**(undefined8 **)(lVar45 + 0x10) + 0x18))();
              if (((int)local_98 == 0) && ((*(byte *)(lVar45 + 0x453) & 1) != 0)) {
                lVar45 = (**(code **)(**(long **)(*(long *)(lVar45 + 0x10) + 0x130) + 0x18))();
              }
              else {
                lVar45 = (**(code **)(*(long *)**(undefined8 **)(lVar45 + 0x10) + 0x18))();
                lVar45 = lVar45 + 0x110;
              }
              if (uVar42 == 7) break;
              uVar51 = (ulong)uVar42;
              plVar60 = (long *)(lVar45 + (ulong)uVar42 * 0x48 + 0x1e3400);
              while ((6 < uVar51 || (plVar60[-1] == 0 && *plVar60 == 0))) {
                uVar51 = uVar51 + 1;
                plVar60 = plVar60 + 9;
                if (uVar51 == 7) goto LAB_027d8458;
              }
              uVar42 = (int)uVar51 + 1;
            }
          }
        } while (uVar42 != 8);
      }
    }
  }
LAB_027d8458:
  uVar51 = nn::time::IsValidDate((uint)*puVar8,(uint)param_1[0x1cb6ba],(uint)param_1[0x1cb6bb]);
  if ((uVar51 & 1) != 0) {
    local_228 = (undefined *)FUN_0272eca4(puVar8,1);
    lVar57 = *plVar48;
    lVar45 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_228);
    lVar55 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar57 + 0x4060));
    if (lVar55 < lVar45) {
      local_98 = *(undefined **)(*plVar48 + 0x4060);
      if ((char)((ulong)local_98 >> 0x20) < '\x05') {
        lVar45 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_98);
        local_1f0 = (undefined *)(lVar45 + -0x15180);
        local_98 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_1f0);
      }
      uVar79 = (ulong)local_98;
      uVar42 = (uint)local_98;
      uVar51 = (ulong)local_98 >> 0x30;
      local_98._0_6_ = CONCAT24(5,uVar42);
      local_98 = (undefined *)(CONCAT26((short)uVar51,(uint6)local_98) & 0xff00ffffffffffff);
      uVar51 = nn::time::IsValidDate
                         (uVar42 & 0xffff,uVar42 >> 0x10 & 0xff,(uint)(uVar79 >> 0x18) & 0xff);
      if ((uVar51 & 1) != 0) {
        *puVar8 = (ushort)uVar79;
        param_1[0x1cb6ba] = (byte)(uVar79 >> 0x10);
        param_1[0x1cb6bb] = (byte)(uVar79 >> 0x18);
      }
    }
    else {
      nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar57 + 0x4060));
    }
  }
  return;
  while( true ) {
    if (uVar63 != 0xffffffff) goto LAB_027d8dd8;
    lVar45 = (long)puVar50 - uVar47;
    uVar47 = 0;
    if (lVar45 == 0) goto LAB_027d8e94;
    lVar55 = 0xc;
    if (*(char *)(lVar45 + 10) != '\0') {
      lVar55 = 0x1c;
    }
    if (lVar55 + lVar45 == 0) goto LAB_027d8dd8;
    uVar63 = (ulong)*(ushort *)(lVar45 + 8);
    *(undefined4 *)(puVar17 + 0x60) = 0xfffffffe;
    uVar47 = 0;
    if (uVar63 == 0) goto LAB_027d8e94;
    puVar62 = (uint *)(lVar55 + lVar45 + 4);
    while (puVar62[-1] != 0x919ea52a) {
      puVar62 = puVar62 + 2;
      uVar63 = uVar63 - 1;
      if (uVar63 == 0) {
        uVar47 = 0;
        goto LAB_027d8e94;
      }
    }
    uVar63 = 0;
    if (*puVar62 != 0xffffffff) {
      uVar63 = (ulong)*puVar62;
    }
    *(int *)(puVar17 + 0x60) = (int)uVar63;
    uVar47 = (ulong)*puVar50;
    if (*puVar50 == 0) break;
LAB_027d8e00:
    if (-1 < (int)uVar63) {
      uVar47 = 0;
      if ((byte *)(uVar63 + (long)puVar50) != (byte *)0x0) {
        uVar47 = (ulong)*(byte *)(uVar63 + (long)puVar50);
      }
      goto LAB_027d8e94;
    }
  }
  uVar47 = 0;
LAB_027d8e94:
  local_228._0_4_ = CONCAT13((char)uVar47,CONCAT12(cVar58,(short)local_78));
  local_228._0_6_ = CONCAT24(5,(uint)local_228);
  local_228._0_7_ = (uint7)(uint6)local_228;
  local_228 = (undefined *)CONCAT17((char)uVar54,(uint7)local_228);
  if ((((ulong)local_78 & 0xffff) != 0) &&
     (uVar54 = nn::time::IsValidDate((int)(short)local_78,(int)cVar58,(int)(char)uVar47),
     (uVar54 & 1) != 0)) {
    iVar32 = FUN_00a82474(&local_228,&local_78);
    puVar29 = local_228;
    if (iVar32 < 0) {
      uVar42 = *puVar50;
      if (uVar42 != 0) {
        cVar61 = *PTR_DAT_04bb40b0;
        do {
          if (cVar61 != '\0') {
            uVar43 = *(uint *)(puVar17 + 100);
            if ((int)uVar43 < 0) {
              if (uVar43 == 0xffffffff) goto LAB_027d8f50;
LAB_027d8fd4:
              uVar31 = 0;
            }
            else {
              uVar31 = 0;
              if ((undefined1 *)((ulong)uVar43 + (long)puVar50) != (undefined1 *)0x0) {
                uVar31 = *(undefined1 *)((ulong)uVar43 + (long)puVar50);
              }
            }
LAB_027d8ff0:
            uVar54 = (ulong)*puVar50;
            if (*puVar50 == 0) goto LAB_027d9088;
            uVar47 = (ulong)*(uint *)(puVar17 + 0x60);
            goto LAB_027d8ffc;
          }
          cVar61 = '\x01';
          *PTR_DAT_04bb40b0 = 1;
          *(undefined4 *)(puVar17 + 0xa0) = 0xffffffff;
          *(undefined8 *)puVar17 = 0xffffffffffffffff;
          *(undefined8 *)(puVar17 + 8) = 0xffffffffffffffff;
          *(undefined8 *)(puVar17 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar17 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar17 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar17 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar17 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar17 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar17 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar17 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar17 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar17 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar17 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar17 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar17 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar17 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar17 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar17 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar17 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar17 + 0x98) = 0xffffffffffffffff;
          uVar42 = *puVar50;
LAB_027d8f50:
          puVar62 = (uint *)(ulong)uVar42;
          uVar31 = 0;
          if ((puVar62 == (uint *)0x0) || (puVar50 == puVar62)) goto LAB_027d8ff0;
          lVar45 = 0xc;
          if (*(char *)((long)puVar50 + (10 - (long)puVar62)) != '\0') {
            lVar45 = 0x1c;
          }
          lVar45 = (long)puVar50 + (lVar45 - (long)puVar62);
          if (lVar45 == 0) goto LAB_027d8fd4;
          uVar54 = (ulong)*(ushort *)((long)puVar50 + (8 - (long)puVar62));
          *(undefined4 *)(puVar17 + 100) = 0xfffffffe;
          uVar31 = 0;
          if (uVar54 == 0) goto LAB_027d8ff0;
          piVar64 = (int *)(lVar45 + 4);
          while (piVar64[-1] != -0x6ba9495d) {
            piVar64 = piVar64 + 2;
            uVar54 = uVar54 - 1;
            if (uVar54 == 0) {
              uVar31 = 0;
              goto LAB_027d8ff0;
            }
          }
          iVar32 = 0;
          if (*piVar64 != -1) {
            iVar32 = *piVar64;
          }
          *(int *)(puVar17 + 100) = iVar32;
          uVar42 = *puVar50;
        } while (uVar42 != 0);
      }
      uVar31 = 0;
LAB_027d8fcc:
      uVar54 = 0;
      goto LAB_027d9088;
    }
    goto LAB_027d90ac;
  }
LAB_027d90b4:
  if ((uVar79 != ((long)(char)param_1[0x1e3361] & 0xffffffffU)) &&
     (uVar79 != ((long)(char)param_1[0x1e3362] & 0xffffffffU))) {
    uVar54 = (ulong)param_1[uVar79 * 0x13230];
    if ((uVar54 < 0x23) &&
       ((bVar52 = (param_1 + uVar79 * 0x13230)[1], bVar52 <= (byte)PTR_DAT_04bc27f0[uVar54] &&
        ((*(uint *)(PTR_DAT_04bc2a20 + uVar54 * 4) >> (ulong)(bVar52 & 0x1f) & 1) != 0)))) {
      local_1e8 = "MoveInCompletion";
      local_1f0 = puVar72;
      iVar32 = FUN_02749340(param_1 + uVar79 * 0x13230 + 0x1267c,&local_1f0);
      if (iVar32 != 0) {
        local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 | 1 << (ulong)((uint)uVar79 & 0x1f));
      }
    }
  }
LAB_027d8be0:
  uVar79 = uVar79 + 1;
  if (uVar79 == 10) goto LAB_027d9160;
  goto LAB_027d8bec;
  while( true ) {
    if (uVar47 != 0xffffffff) goto LAB_027d8fcc;
    lVar45 = (long)puVar50 - uVar54;
    uVar54 = 0;
    if (lVar45 == 0) goto LAB_027d9088;
    lVar55 = 0xc;
    if (*(char *)(lVar45 + 10) != '\0') {
      lVar55 = 0x1c;
    }
    if (lVar55 + lVar45 == 0) goto LAB_027d8fcc;
    uVar47 = (ulong)*(ushort *)(lVar45 + 8);
    *(undefined4 *)(puVar17 + 0x60) = 0xfffffffe;
    uVar54 = 0;
    if (uVar47 == 0) goto LAB_027d9088;
    puVar62 = (uint *)(lVar55 + lVar45 + 4);
    while (puVar62[-1] != 0x919ea52a) {
      puVar62 = puVar62 + 2;
      uVar47 = uVar47 - 1;
      if (uVar47 == 0) {
        uVar54 = 0;
        goto LAB_027d9088;
      }
    }
    uVar47 = 0;
    if (*puVar62 != 0xffffffff) {
      uVar47 = (ulong)*puVar62;
    }
    *(int *)(puVar17 + 0x60) = (int)uVar47;
    uVar54 = (ulong)*puVar50;
    if (*puVar50 == 0) break;
LAB_027d8ffc:
    if (-1 < (int)uVar47) {
      uVar54 = 0;
      if ((byte *)(uVar47 + (long)puVar50) != (byte *)0x0) {
        uVar54 = (ulong)*(byte *)(uVar47 + (long)puVar50);
      }
      goto LAB_027d9088;
    }
  }
  uVar54 = 0;
LAB_027d9088:
  local_228._0_4_ = CONCAT13((char)uVar54,CONCAT12(uVar31,(short)local_78 + 1));
  local_228._0_6_ = CONCAT24(5,(uint)local_228);
  local_228._7_1_ = SUB81(puVar29,7);
  local_228._0_7_ = (uint7)(uint6)local_228;
  iVar32 = FUN_00a82474(&local_228,&local_78);
LAB_027d90ac:
  if (iVar32 < 8) goto LAB_027d8be0;
  goto LAB_027d90b4;
LAB_027d9160:
  FUN_021ebc40(&local_a0,0,0,0);
  memset(&local_1f0,0,0x140);
  uVar51 = 0;
  iVar32 = 0;
  lVar45 = (long)&local_210 + 4;
  puVar71 = local_150;
  puVar70 = PTR_DAT_04bb2020 + 0x10;
  do {
    if ((*(long *)PTR_DAT_04bb46b0 != 0) &&
       (lVar55 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,uVar51 & 0xffffffff), lVar55 != 0)) {
      if ((*(long **)(lVar55 + 0x17bb0) == (long *)0x0) ||
         (puVar46 = (undefined8 *)**(long **)(lVar55 + 0x17bb0), puVar46 == (undefined8 *)0x0)) {
        plVar48 = (long *)(*(long *)(lVar55 + 0x17b98) + *(long *)(lVar55 + 0x17b90));
        local_210 = plVar48[3];
        local_208 = plVar48[4];
        local_200 = plVar48[5];
        local_1f8 = plVar48[6];
        local_228 = (undefined *)*plVar48;
        local_220 = (char *)plVar48[1];
        local_218 = plVar48[2];
      }
      else {
        uVar79 = (**(code **)*puVar46)();
        plVar48 = (long *)(*(long *)(lVar55 + 0x17b98) + *(long *)(lVar55 + 0x17b90));
        local_210 = plVar48[3];
        local_208 = plVar48[4];
        local_200 = plVar48[5];
        local_1f8 = plVar48[6];
        local_228 = (undefined *)*plVar48;
        local_220 = (char *)plVar48[1];
        local_218 = plVar48[2];
        if ((((uVar79 & 1) != 0) && (*(long *)(lVar55 + 0x17bb0) != 0)) &&
           (puVar46 = *(undefined8 **)(*(long *)(lVar55 + 0x17bb0) + 8),
           puVar46 != (undefined8 *)0x0)) {
          (**(code **)*puVar46)();
        }
      }
      uVar42 = (uint)local_a0;
      if (((local_a0 & 1) != 0) && (lVar55 = FUN_026b338c(param_1,lVar45), lVar55 != 0)) {
        local_98 = PTR_DAT_04bb2020 + 0x10;
        local_90 = "Friendship";
        uVar38 = FUN_02746e10(lVar55 + 0x38,&local_98);
        uVar42 = (uint)local_a0;
        puVar71[-0x28] = uVar38;
      }
      if (((uVar42 >> 1 & 1) != 0) && (lVar55 = FUN_026b338c(pbVar18,lVar45), lVar55 != 0)) {
        local_98 = PTR_DAT_04bb2020 + 0x10;
        local_90 = "Friendship";
        uVar38 = FUN_02746e10(lVar55 + 0x38,&local_98);
        uVar42 = (uint)local_a0;
        puVar71[-0x20] = uVar38;
      }
      if (((uVar42 >> 2 & 1) != 0) && (lVar55 = FUN_026b338c(pbVar7,lVar45), lVar55 != 0)) {
        local_98 = PTR_DAT_04bb2020 + 0x10;
        local_90 = "Friendship";
        uVar38 = FUN_02746e10(lVar55 + 0x38,&local_98);
        uVar42 = (uint)local_a0;
        puVar71[-0x18] = uVar38;
      }
      if (((uVar42 >> 3 & 1) != 0) && (lVar55 = FUN_026b338c(pbVar6,lVar45), lVar55 != 0)) {
        local_98 = PTR_DAT_04bb2020 + 0x10;
        local_90 = "Friendship";
        uVar38 = FUN_02746e10(lVar55 + 0x38,&local_98);
        uVar42 = (uint)local_a0;
        puVar71[-0x10] = uVar38;
      }
      if (((uVar42 >> 4 & 1) != 0) && (lVar55 = FUN_026b338c(pbVar5,lVar45), lVar55 != 0)) {
        local_98 = PTR_DAT_04bb2020 + 0x10;
        local_90 = "Friendship";
        uVar38 = FUN_02746e10(lVar55 + 0x38,&local_98);
        uVar42 = (uint)local_a0;
        puVar71[-8] = uVar38;
      }
      if (((uVar42 >> 5 & 1) != 0) && (lVar55 = FUN_026b338c(pbVar4,lVar45), lVar55 != 0)) {
        local_98 = PTR_DAT_04bb2020 + 0x10;
        local_90 = "Friendship";
        uVar38 = FUN_02746e10(lVar55 + 0x38,&local_98);
        uVar42 = (uint)local_a0;
        *puVar71 = uVar38;
      }
      if (((uVar42 >> 6 & 1) != 0) && (lVar55 = FUN_026b338c(pbVar3,lVar45), lVar55 != 0)) {
        local_98 = PTR_DAT_04bb2020 + 0x10;
        local_90 = "Friendship";
        uVar38 = FUN_02746e10(lVar55 + 0x38,&local_98);
        uVar42 = (uint)local_a0;
        puVar71[8] = uVar38;
      }
      if (((uVar42 >> 7 & 1) != 0) && (lVar55 = FUN_026b338c(pbVar2,lVar45), lVar55 != 0)) {
        local_98 = PTR_DAT_04bb2020 + 0x10;
        local_90 = "Friendship";
        uVar38 = FUN_02746e10(lVar55 + 0x38,&local_98);
        uVar42 = (uint)local_a0;
        puVar71[0x10] = uVar38;
      }
      if (((uVar42 >> 8 & 1) != 0) && (lVar55 = FUN_026b338c(pbVar1,lVar45), lVar55 != 0)) {
        local_98 = PTR_DAT_04bb2020 + 0x10;
        local_90 = "Friendship";
        uVar38 = FUN_02746e10(lVar55 + 0x38,&local_98);
        uVar42 = (uint)local_a0;
        puVar71[0x18] = uVar38;
      }
      if (((uVar42 >> 9 & 1) != 0) && (lVar55 = FUN_026b338c(__s,lVar45), lVar55 != 0)) {
        local_90 = "Friendship";
        local_98 = puVar70;
        uVar38 = FUN_02746e10(lVar55 + 0x38,&local_98);
        puVar71[0x20] = uVar38;
      }
      iVar32 = iVar32 + 1;
    }
    puVar72 = PTR_DAT_04bc27f0;
    uVar51 = uVar51 + 1;
    puVar71 = puVar71 + 1;
  } while (uVar51 != 8);
  local_210 = 0;
  local_208 = 0;
  local_220 = (char *)0x0;
  local_218 = 0;
  lVar45 = 0;
  uVar42 = 0;
  local_228 = (undefined *)0x0;
  puVar50 = (uint *)&local_1e0;
  do {
    if (((uint)local_a0 >> (ulong)((uint)lVar45 & 0x1f) & 1) != 0) {
      uVar43 = puVar50[-4];
      if (uVar43 < 0x1e) {
        uVar44 = 1;
      }
      else if (uVar43 < 0x3c) {
        uVar44 = 2;
      }
      else if (uVar43 < 100) {
        uVar44 = 3;
      }
      else if (uVar43 < 0x96) {
        uVar44 = 4;
      }
      else {
        uVar44 = 5;
        if (199 < uVar43) {
          uVar44 = 6;
        }
      }
      local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar44);
      uVar41 = puVar50[-3];
      if (uVar41 < 0x1e) {
        uVar73 = 1;
      }
      else if (uVar41 < 0x3c) {
        uVar73 = 2;
      }
      else if (uVar41 < 100) {
        uVar73 = 3;
      }
      else if (uVar41 < 0x96) {
        uVar73 = 4;
      }
      else {
        uVar73 = 5;
        if (199 < uVar41) {
          uVar73 = 6;
        }
      }
      local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar73);
      uVar69 = puVar50[-2];
      if (uVar69 < 0x1e) {
        uVar74 = 1;
      }
      else if (uVar69 < 0x3c) {
        uVar74 = 2;
      }
      else if (uVar69 < 100) {
        uVar74 = 3;
      }
      else if (uVar69 < 0x96) {
        uVar74 = 4;
      }
      else {
        uVar74 = 5;
        if (199 < uVar69) {
          uVar74 = 6;
        }
      }
      local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar74);
      uVar78 = puVar50[-1];
      if (uVar78 < 0x1e) {
        uVar59 = 1;
      }
      else if (uVar78 < 0x3c) {
        uVar59 = 2;
      }
      else if (uVar78 < 100) {
        uVar59 = 3;
      }
      else if (uVar78 < 0x96) {
        uVar59 = 4;
      }
      else {
        uVar59 = 5;
        if (199 < uVar78) {
          uVar59 = 6;
        }
      }
      local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar59);
      uVar40 = *puVar50;
      if (uVar40 < 0x1e) {
        uVar39 = 1;
      }
      else if (uVar40 < 0x3c) {
        uVar39 = 2;
      }
      else if (uVar40 < 100) {
        uVar39 = 3;
      }
      else if (uVar40 < 0x96) {
        uVar39 = 4;
      }
      else {
        uVar39 = 5;
        if (199 < uVar40) {
          uVar39 = 6;
        }
      }
      local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar39);
      uVar21 = puVar50[1];
      if (uVar21 < 0x1e) {
        uVar75 = 1;
      }
      else if (uVar21 < 0x3c) {
        uVar75 = 2;
      }
      else if (uVar21 < 100) {
        uVar75 = 3;
      }
      else if (uVar21 < 0x96) {
        uVar75 = 4;
      }
      else {
        uVar75 = 5;
        if (199 < uVar21) {
          uVar75 = 6;
        }
      }
      local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar75);
      uVar22 = puVar50[2];
      if (uVar22 < 0x1e) {
        uVar76 = 1;
      }
      else if (uVar22 < 0x3c) {
        uVar76 = 2;
      }
      else if (uVar22 < 100) {
        uVar76 = 3;
      }
      else if (uVar22 < 0x96) {
        uVar76 = 4;
      }
      else {
        uVar76 = 5;
        if (199 < uVar22) {
          uVar76 = 6;
        }
      }
      local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar76);
      uVar23 = puVar50[3];
      if (uVar23 < 0x1e) {
        uVar77 = 1;
      }
      else if (uVar23 < 0x3c) {
        uVar77 = 2;
      }
      else if (uVar23 < 100) {
        uVar77 = 3;
      }
      else if (uVar23 < 0x96) {
        uVar77 = 4;
      }
      else {
        uVar77 = 5;
        if (199 < uVar23) {
          uVar77 = 6;
        }
      }
      local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar77);
      iVar33 = (((((((-(uint)(5 < uVar44) - (uint)(5 < uVar73)) - (uint)(5 < uVar74)) -
                   (uint)(5 < uVar59)) - (uint)(5 < uVar39)) - (uint)(5 < uVar75)) -
                (uint)(5 < uVar76)) +
               (int)((float)(300 - (int)((1.0 / (float)iVar32) *
                                        (float)(uVar41 + uVar43 + uVar69 + uVar78 + uVar40 + uVar21
                                                + uVar22 + uVar23))) * 0.1)) - (uint)(5 < uVar77);
      uVar42 = iVar33 + uVar42;
      *(int *)((long)&local_228 + lVar45 * 4) = iVar33;
    }
    lVar45 = lVar45 + 1;
    puVar50 = puVar50 + 8;
  } while (lVar45 != 10);
  if (DAT_05594b4c == '\x01') {
    uVar43 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    DAT_05582b70 = DAT_05582b74;
    DAT_05582b74 = DAT_05582b78;
    uVar43 = uVar43 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar43 ^ DAT_05582b7c;
    DAT_05582b78 = DAT_05582b7c;
    DAT_05582b7c = uVar43;
  }
  else {
    uVar43 = nn::os::GetSystemTick();
    uVar44 = (uVar43 ^ uVar43 >> 0x1e) * 0x6c078965 + 1;
    uVar43 = uVar44 ^ uVar44 * 0x800;
    uVar44 = (uVar44 ^ uVar44 >> 0x1e) * 0x6c078965 + 2;
    uVar44 = (uVar44 ^ uVar44 >> 0x1e) * 0x6c078965 + 3;
    uVar44 = (uVar44 ^ uVar44 >> 0x1e) * 0x6c078965 + 4;
    uVar43 = uVar43 >> 8 ^ uVar44 >> 0x13 ^ uVar43 ^ uVar44;
  }
  uVar42 = (uint)((ulong)uVar43 * (ulong)uVar42 >> 0x20);
  if (((int)(uint)local_228 < 1) || ((uint)local_228 <= uVar42)) {
    uVar42 = uVar42 - (uint)local_228;
    uVar43 = uVar42 - local_228._4_4_;
    if ((local_228._4_4_ > uVar42 && local_228._4_4_ != 0) &&
        (local_228._4_4_ <= uVar42 || -1 < (long)local_228)) {
      bVar52 = 1;
      goto LAB_027d9a78;
    }
    uVar42 = uVar43 - (uint)local_220;
    if (((uint)local_220 > uVar43 && (uint)local_220 != 0) &&
        ((uint)local_220 <= uVar43 || -1 < (int)(uint)local_220)) {
      bVar52 = 2;
      goto LAB_027d9a78;
    }
    uVar43 = uVar42 - local_220._4_4_;
    if ((local_220._4_4_ > uVar42 && local_220._4_4_ != 0) &&
        (local_220._4_4_ <= uVar42 || -1 < (long)local_220)) {
      bVar52 = 3;
      goto LAB_027d9a78;
    }
    uVar42 = uVar43 - (uint)local_218;
    if (((uint)local_218 > uVar43 && (uint)local_218 != 0) &&
        ((uint)local_218 <= uVar43 || -1 < (int)(uint)local_218)) {
      bVar52 = 4;
      goto LAB_027d9a78;
    }
    uVar43 = uVar42 - local_218._4_4_;
    if ((local_218._4_4_ > uVar42 && local_218._4_4_ != 0) &&
        (local_218._4_4_ <= uVar42 || -1 < (long)local_218)) {
      bVar52 = 5;
      goto LAB_027d9a78;
    }
    uVar42 = uVar43 - (uint)local_210;
    if (((uint)local_210 > uVar43 && (uint)local_210 != 0) &&
        ((uint)local_210 <= uVar43 || -1 < (int)(uint)local_210)) {
      bVar52 = 6;
      goto LAB_027d9a78;
    }
    uVar43 = uVar42 - local_210._4_4_;
    puVar72 = PTR_DAT_04bc27f0;
    if ((local_210._4_4_ > uVar42 && local_210._4_4_ != 0) &&
        (local_210._4_4_ <= uVar42 || -1 < local_210)) {
      bVar52 = 7;
      goto LAB_027d9a78;
    }
    if (((uint)local_208 > uVar43 && (uint)local_208 != 0) &&
        ((uint)local_208 <= uVar43 || -1 < (int)(uint)local_208)) {
      bVar52 = 8;
      goto LAB_027d9a78;
    }
    if (uVar43 - (uint)local_208 < local_208._4_4_ && 0 < (int)local_208._4_4_) {
      bVar52 = 9;
      goto LAB_027d9a78;
    }
  }
  else {
    bVar52 = 0;
LAB_027d9a78:
    param_1[0x1e335d] = bVar52;
    param_1[0x1e3360] = 0;
    local_98 = PTR_DAT_04bb2020 + 0x10;
    local_90 = "IsMovingConsultationToPlayer";
    FUN_0273f3c4(&local_98,0);
    pbVar80 = param_1 + ((long)(char)param_1[0x1e335d] & 0xffffffffU) * 0x13230;
    if (9 < param_1[0x1e335d]) {
      pbVar80 = param_1;
    }
    FUN_02690450(pbVar80);
  }
LAB_027d5980:
  param_1[0x1e3363] = 0xff;
  param_1[0x1e3364] = 0xff;
  param_1[0x1e3365] = 0xff;
  param_1[0x1e3366] = 0xff;
  goto LAB_027d5988;
LAB_027d669c:
  uVar42 = FUN_027e7c60(param_1,iVar32);
  plVar48 = (long *)PTR_DAT_04bb32e8;
  if (!bVar27 && (uVar42 & 1) == 0) {
    local_a4 = 0;
    uVar51 = FUN_026644b0(0);
    if ((((uVar51 & 1) == 0) && (uVar51 = FUN_026644b0(1), (uVar51 & 1) == 0)) &&
       ((uVar51 = FUN_026644b0(2), (uVar51 & 1) == 0 &&
        (((((uVar51 = FUN_026644b0(3), (uVar51 & 1) == 0 &&
            (uVar51 = FUN_026644b0(4), (uVar51 & 1) == 0)) &&
           (uVar51 = FUN_026644b0(5), (uVar51 & 1) == 0)) &&
          ((uVar51 = FUN_026644b0(6), (uVar51 & 1) == 0 &&
           (uVar51 = FUN_026644b0(7), (uVar51 & 1) == 0)))) &&
         (uVar51 = FUN_026644b0(8), (uVar51 & 1) == 0)))))) {
      uVar51 = FUN_026644b0(9);
      if ((uVar51 & 1) == 0) goto LAB_027d7198;
    }
    iVar32 = FUN_027e81c0(uVar51,&local_a4);
    if (-1 < iVar32) {
      local_a8 = iVar32;
      uVar51 = FUN_027e8410(param_1,local_268,iVar32,uVar44,0);
      if ((uVar51 & 1) == 0) {
        uVar42 = 100;
        if (4 < (int)uVar43) {
          if (uVar43 < 8) {
            local_1f0 = PTR_DAT_04bb2020 + 0x10;
            local_1e8 = "NNpcContractProbablityAddPoint";
            iVar32 = FUN_0273ea30(&local_1f0);
            iVar32 = (iVar32 - uVar43) + local_a4;
            iVar33 = 0x8c;
          }
          else {
            iVar33 = 0x78;
            iVar32 = local_a4 - uVar43;
          }
          uVar42 = iVar33 + iVar32 * 10;
        }
        uVar43 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
        DAT_05582b70 = DAT_05582b74;
        DAT_05582b74 = DAT_05582b78;
        uVar43 = uVar43 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar43 ^ DAT_05582b7c;
        DAT_05582b78 = DAT_05582b7c;
        DAT_05582b7c = uVar43;
        if ((uint)((ulong)uVar43 * 100 >> 0x20) < uVar42) {
          iVar32 = (int)local_98;
          if (10 < (int)local_98) {
            iVar32 = 10;
          }
          DAT_05594ba8 = (uint)((int)local_98 < 0xb);
          if ((int)local_98._4_4_ < iVar32) {
            DAT_05594ba8 = 2;
            iVar32 = local_98._4_4_;
          }
          else if (local_98._4_4_ == iVar32) {
            DAT_05594ba8 = DAT_05594ba8 | 2;
          }
          if ((int)local_90 < iVar32) {
            DAT_05594ba8 = 4;
            iVar32 = (int)local_90;
          }
          else if ((int)local_90 == iVar32) {
            DAT_05594ba8 = DAT_05594ba8 | 4;
          }
          if (local_90._4_4_ < iVar32) {
            DAT_05594ba8 = 8;
            iVar32 = local_90._4_4_;
          }
          else if (local_90._4_4_ == iVar32) {
            DAT_05594ba8 = DAT_05594ba8 | 8;
          }
          if ((int)local_88 < iVar32) {
            DAT_05594ba8 = 0x10;
            iVar32 = (int)local_88;
          }
          else if ((int)local_88 == iVar32) {
            DAT_05594ba8 = DAT_05594ba8 | 0x10;
          }
          if (local_88._4_4_ < iVar32) {
            DAT_05594ba8 = 0x20;
            iVar32 = local_88._4_4_;
          }
          else if (local_88._4_4_ == iVar32) {
            DAT_05594ba8 = DAT_05594ba8 | 0x20;
          }
          if ((int)local_80 < iVar32) {
            DAT_05594ba8 = 0x40;
            iVar32 = (int)local_80;
          }
          else if ((int)local_80 == iVar32) {
            DAT_05594ba8 = DAT_05594ba8 | 0x40;
          }
          if (local_80._4_4_ < iVar32) {
            DAT_05594ba8 = 0x80;
          }
          else if (local_80._4_4_ == iVar32) {
            DAT_05594ba8 = DAT_05594ba8 | 0x80;
          }
          local_168 = 0;
          local_170 = 0;
          local_178 = 0;
          local_1f0 = (undefined *)0x0;
          local_188 = 0;
          uStack_180 = 0;
          local_198 = 0;
          local_190 = 0;
          local_1a8 = 0;
          uStack_1a0 = 0;
          local_1b8 = 0;
          local_1b0 = 0;
          local_1c8 = 0;
          uStack_1c0 = 0;
          local_1d8 = 0;
          local_1d0 = 0;
          local_1e8 = (char *)0x0;
          local_1e0 = 0;
          FUN_020fc590(&local_1f0,&LAB_027e8ef0);
          uVar51 = (ulong)*param_1;
          if (((uVar51 < 0x23) && (param_1[1] <= (byte)puVar70[uVar51])) &&
             ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[1] & 0x1f) & 1) != 0)) {
            FUN_020fcb1c(&local_1f0,param_1);
          }
          uVar51 = (ulong)*pbVar18;
          if (((uVar51 < 0x23) && (param_1[0x13231] <= (byte)puVar70[uVar51])) &&
             ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0x13231] & 0x1f) & 1) !=
              0)) {
            FUN_020fcb1c(&local_1f0,pbVar18);
          }
          uVar51 = (ulong)*pbVar7;
          if (((uVar51 < 0x23) && (param_1[0x26461] <= (byte)puVar70[uVar51])) &&
             ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0x26461] & 0x1f) & 1) !=
              0)) {
            FUN_020fcb1c(&local_1f0,pbVar7);
          }
          uVar51 = (ulong)*pbVar6;
          if (((uVar51 < 0x23) && (param_1[0x39691] <= (byte)puVar70[uVar51])) &&
             ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0x39691] & 0x1f) & 1) !=
              0)) {
            FUN_020fcb1c(&local_1f0,pbVar6);
          }
          uVar51 = (ulong)*pbVar5;
          if (((uVar51 < 0x23) && (param_1[0x4c8c1] <= (byte)puVar70[uVar51])) &&
             ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0x4c8c1] & 0x1f) & 1) !=
              0)) {
            FUN_020fcb1c(&local_1f0,pbVar5);
          }
          uVar51 = (ulong)*pbVar4;
          if (((uVar51 < 0x23) && (param_1[0x5faf1] <= (byte)puVar70[uVar51])) &&
             ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0x5faf1] & 0x1f) & 1) !=
              0)) {
            FUN_020fcb1c(&local_1f0,pbVar4);
          }
          uVar51 = (ulong)*pbVar3;
          if (((uVar51 < 0x23) && (param_1[0x72d21] <= (byte)puVar70[uVar51])) &&
             ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0x72d21] & 0x1f) & 1) !=
              0)) {
            FUN_020fcb1c(&local_1f0,pbVar3);
          }
          uVar51 = (ulong)*pbVar2;
          if (((uVar51 < 0x23) && (param_1[0x85f51] <= (byte)puVar70[uVar51])) &&
             ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0x85f51] & 0x1f) & 1) !=
              0)) {
            FUN_020fcb1c(&local_1f0,pbVar2);
          }
          uVar51 = (ulong)*pbVar1;
          if (((uVar51 < 0x23) && (param_1[0x99181] <= (byte)puVar70[uVar51])) &&
             ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0x99181] & 0x1f) & 1) !=
              0)) {
            FUN_020fcb1c(&local_1f0,pbVar1);
          }
          uVar51 = (ulong)*__s;
          if (((uVar51 < 0x23) && (param_1[0xac3b1] <= (byte)puVar70[uVar51])) &&
             ((*(uint *)(PTR_DAT_04bc2a20 + uVar51 * 4) >> (ulong)(param_1[0xac3b1] & 0x1f) & 1) !=
              0)) {
            FUN_020fcb1c(&local_1f0,__s);
          }
          uVar38 = FUN_027e8fb0(param_1,&local_1f0);
          local_ac = (undefined2)uVar38;
          local_aa = (undefined1)((uint)uVar38 >> 0x10);
          FUN_0268c7a0(local_268,&local_ac,1,0);
          local_210._0_4_ = (uint)(uint3)local_210;
          local_220 = (char *)((long)&local_218 + 4);
          local_218 = CONCAT35(local_218._5_3_,8);
          local_228 = PTR_DAT_04bb3768 + 0x10;
          FUN_038d1270(&local_228,"-----");
          if ((ulong)*local_268 < 0x23) {
            FUN_038d1270(&local_228,"%s%02d",
                         *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*local_268 * 8 + 0xb0),
                         local_268[1]);
          }
          if ((*(long *)PTR_DAT_04bb46b0 != 0) &&
             (lVar45 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) +
                                   0x38))(), lVar45 != 0)) {
            plVar56 = *(long **)(&LAB_00285bb8 + lVar45);
            if ((plVar56 == (long *)0x0) ||
               (puVar46 = (undefined8 *)*plVar56, puVar46 == (undefined8 *)0x0)) {
              uVar42 = 1;
            }
            else {
              uVar42 = (**(code **)*puVar46)();
              uVar42 = uVar42 ^ 1;
            }
            uVar43 = FUN_0220ce00(*(undefined8 *)PTR_DAT_04bb4138,&local_228);
            if ((int)uVar43 < 0) {
              uVar43 = 0xffffffff;
            }
            if ((((uVar42 & 1) == 0) && (lVar55 = *(long *)(&LAB_00285bb8 + lVar45), lVar55 != 0))
               && (puVar46 = *(undefined8 **)(lVar55 + 8), puVar46 != (undefined8 *)0x0)) {
              (**(code **)*puVar46)();
            }
            if (-1 < (int)uVar43) {
              uVar42 = 0;
              puVar19 = &LAB_00285c00 + lVar45 + (ulong)uVar43 * 0x70;
              if (0x1a3 < uVar43) {
                puVar19 = &LAB_00285c00 + lVar45;
              }
              puVar72 = PTR_DAT_04bb2020 + 0x10;
              do {
                if (*(long **)(puVar19 + 0x28) == (long *)0x0) {
                  uVar51 = 0;
                }
                else {
                  puVar46 = (undefined8 *)**(long **)(puVar19 + 0x28);
                  uVar51 = 0;
                  if (puVar46 != (undefined8 *)0x0) {
                    uVar51 = (**(code **)*puVar46)();
                  }
                }
                local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar42);
                bVar52 = *(byte *)(*(long *)(puVar19 + 0x10) + *(long *)(puVar19 + 8));
                if ((((uVar51 & 1) != 0) && (*(long *)(puVar19 + 0x28) != 0)) &&
                   (puVar46 = *(undefined8 **)(*(long *)(puVar19 + 0x28) + 8),
                   puVar46 != (undefined8 *)0x0)) {
                  (**(code **)*puVar46)();
                }
                if ((((1 << (ulong)(uVar42 & 0x1f) & (uint)bVar52) != 0) &&
                    (*(long *)PTR_DAT_04bb46b0 != 0)) &&
                   (lVar45 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,uVar42), lVar45 != 0)) {
                  if ((*(long **)(lVar45 + 0x17bb0) == (long *)0x0) ||
                     (puVar46 = (undefined8 *)**(long **)(lVar45 + 0x17bb0),
                     puVar46 == (undefined8 *)0x0)) {
                    uVar51 = 0;
                  }
                  else {
                    uVar51 = (**(code **)*puVar46)();
                    uVar51 = uVar51 & 0xffffffff;
                  }
                  piVar64 = (int *)(*(long *)(lVar45 + 0x17b98) + *(long *)(lVar45 + 0x17b90));
                  if (piVar64[7] != 0 && *piVar64 != 0) {
                    pbVar80 = (byte *)FUN_026917f4(local_268);
                    if (pbVar80 == (byte *)0x0) {
                      uVar43 = FUN_026b35a0(local_268);
                      pbVar80 = local_268 + 4 + (ulong)uVar43 * 0x5f0;
                      if (7 < uVar43) {
                        pbVar80 = local_268 + 4;
                      }
                      FUN_027b5aa4(pbVar80,piVar64);
                    }
                    if (*(int *)(pbVar80 + 0x1c) != 0 && *(int *)pbVar80 != 0) {
                      pcStack_70 = "HasAcquaintanceship";
                      local_78 = puVar72;
                      FUN_02747170(pbVar80 + 0x38,&local_78,1);
                    }
                  }
                  plVar48 = (long *)PTR_DAT_04bb32e8;
                  if ((((uVar51 & 1) != 0) && (*(long *)(lVar45 + 0x17bb0) != 0)) &&
                     (puVar46 = *(undefined8 **)(*(long *)(lVar45 + 0x17bb0) + 8),
                     puVar46 != (undefined8 *)0x0)) {
                    (**(code **)*puVar46)();
                  }
                }
                uVar42 = uVar42 + 1;
              } while (uVar42 != 8);
            }
          }
          uVar51 = (ulong)(byte)local_ac;
          if (0x22 < (byte)local_ac) {
            uVar51 = 0;
          }
          *(uint *)(param_1 + uVar51 * 4 + 0xbf5e0) =
               *(uint *)(param_1 + uVar51 * 4 + 0xbf5e0) | 1 << (ulong)(local_ac._1_1_ & 0x1f);
          local_228 = PTR_DAT_04bb2020 + 0x10;
          local_220 = "IsNpcIncreased";
          iVar32 = FUN_0273ea30(&local_228);
          if ((iVar32 == 0) && (uVar65 = FUN_021d7d60(local_268), (int)uVar65 != -1)) {
            puVar72 = PTR_DAT_04bb2020 + 0x10;
            local_220 = "Is3rdNpc";
            local_228 = puVar72;
            FUN_027494ac(uVar65,&local_228,1);
            local_220 = "IsNpcIncreased";
            local_228 = puVar72;
            FUN_0273f3c4(&local_228,1);
          }
          local_228 = (undefined *)CONCAT44(local_228._4_4_,local_a8);
          lVar45 = *(long *)PTR_DAT_04bb46b0;
          if (lVar45 != 0) {
            puVar46 = *(undefined8 **)(lVar45 + 0x10);
            if ((*(byte *)(lVar45 + 0x453) & 1) == 0) {
              lVar45 = (**(code **)(*(long *)*puVar46 + 0x38))();
              if (lVar45 != 0) {
                lVar45 = lVar45 + 0x70;
                goto LAB_027d7180;
              }
            }
            else if (((puVar46 != (undefined8 *)0x0) && ((long *)puVar46[0x26] != (long *)0x0)) &&
                    (lVar45 = (**(code **)(*(long *)puVar46[0x26] + 0x38))(), lVar45 != 0)) {
LAB_027d7180:
              puVar70 = PTR_DAT_04bc27f0;
              if ((uint)local_228 < 10) {
                local_218 = local_218 & 0xffffffffffffff00;
                pcVar20 = (char *)(lVar45 + 0x1962d8) + ((ulong)local_228 & 0xffffffff) * 0x10d8;
                if (9 < (uint)local_228) {
                  pcVar20 = (char *)(lVar45 + 0x1962d8);
                }
                local_220 = pcVar20;
                if (*(long *)(pcVar20 + 0x28) == 0) {
                  uVar31 = 0;
                }
                else {
                  puVar46 = *(undefined8 **)(*(long *)(pcVar20 + 0x28) + 0x10);
                  uVar31 = 0;
                  if (puVar46 != (undefined8 *)0x0) {
                    uVar31 = (**(code **)*puVar46)();
                  }
                }
                puVar72 = PTR_DAT_04bb6ba8;
                local_218 = CONCAT62(local_218._2_6_,CONCAT11(uVar31,(undefined1)local_218)) &
                            0xffffffffffff01ff;
                local_228 = PTR_DAT_04bb6ba8 + 0x10;
                lVar45 = FUN_0269d26c(&local_228);
                local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
                if (uVar44 != 0xffffffff) {
                  *(char *)(lVar45 + 0x1c4) = (char)uVar44;
                }
                FUN_02640184(&local_228);
                local_218 = local_218 & 0xffffffffffffff00;
                if (*(long *)(pcVar20 + 0x28) == 0) {
                  uVar31 = 0;
                  local_220 = pcVar20;
                }
                else {
                  puVar46 = *(undefined8 **)(*(long *)(pcVar20 + 0x28) + 0x10);
                  uVar31 = 0;
                  local_220 = pcVar20;
                  if (puVar46 != (undefined8 *)0x0) {
                    uVar31 = (**(code **)*puVar46)();
                  }
                }
                local_218 = CONCAT62(local_218._2_6_,CONCAT11(uVar31,(undefined1)local_218)) &
                            0xffffffffffff01ff;
                local_228 = puVar72 + 0x10;
                FUN_0269d26c(&local_228);
                FUN_027cdc30();
                FUN_02640184(&local_228);
                goto LAB_027d7198;
              }
            }
          }
          puVar70 = PTR_DAT_04bc27f0;
        }
      }
    }
  }
  goto LAB_027d7198;
}


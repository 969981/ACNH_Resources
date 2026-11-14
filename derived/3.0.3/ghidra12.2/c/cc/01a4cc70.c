
ulong FUN_01a4cc70(uint *param_1,undefined2 *param_2,long *param_3,uint param_4,uint param_5,
                  uint param_6,code *param_7,ulong param_8)

{
  uint *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined2 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined *puVar8;
  uint uVar9;
  long lVar10;
  undefined2 uVar11;
  code *pcVar12;
  undefined1 uVar13;
  ulong uVar14;
  long lVar15;
  undefined1 uVar16;
  ulong uVar17;
  int iVar18;
  ulong uVar19;
  undefined2 local_7e8;
  undefined1 local_7e6;
  undefined1 local_7e5;
  undefined4 local_7e4;
  undefined4 local_7e0;
  undefined4 local_7dc;
  undefined **local_7d8;
  undefined1 auStack_7d0 [1876];
  uint local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  
  puVar8 = PTR_DAT_04bb37e0;
  if (param_2 == (undefined2 *)0x0) {
    uVar17 = 0;
  }
  else {
    uVar14 = (ulong)param_4;
    *param_2 = *(undefined2 *)PTR_DAT_04bb37e0;
    *(undefined *)(param_2 + 1) = puVar8[2];
    uVar11 = *(undefined2 *)puVar8;
    uVar13 = puVar8[3];
    uVar16 = puVar8[2];
    param_2[4] = uVar11;
    param_2[8] = uVar11;
    param_2[0xc] = uVar11;
    param_2[0x10] = uVar11;
    param_2[0x14] = uVar11;
    param_2[0x18] = uVar11;
    param_2[0x1c] = uVar11;
    param_2[0x20] = uVar11;
    param_2[0x24] = uVar11;
    param_2[0x28] = uVar11;
    param_2[0x2c] = uVar11;
    param_2[0x30] = uVar11;
    param_2[0x34] = uVar11;
    param_2[0x38] = uVar11;
    param_2[0x3c] = uVar11;
    param_2[0x40] = uVar11;
    param_2[0x44] = uVar11;
    param_2[0x48] = uVar11;
    param_2[0x4c] = uVar11;
    param_2[0x50] = uVar11;
    param_2[0x54] = uVar11;
    param_2[0x58] = uVar11;
    param_2[0x5c] = uVar11;
    param_2[0x60] = uVar11;
    param_2[100] = uVar11;
    uVar11 = *(undefined2 *)puVar8;
    *(undefined1 *)((long)param_2 + 3) = uVar13;
    uVar6 = *(undefined4 *)(puVar8 + 4);
    uVar13 = puVar8[3];
    *(undefined1 *)(param_2 + 5) = uVar16;
    *(undefined1 *)(param_2 + 9) = uVar16;
    *(undefined1 *)(param_2 + 0xd) = uVar16;
    *(undefined1 *)(param_2 + 0x11) = uVar16;
    *(undefined1 *)(param_2 + 0x15) = uVar16;
    *(undefined1 *)(param_2 + 0x19) = uVar16;
    *(undefined1 *)(param_2 + 0x1d) = uVar16;
    *(undefined1 *)(param_2 + 0x21) = uVar16;
    *(undefined1 *)(param_2 + 0x25) = uVar16;
    *(undefined1 *)(param_2 + 0x29) = uVar16;
    *(undefined1 *)(param_2 + 0x2d) = uVar16;
    *(undefined1 *)(param_2 + 0x31) = uVar16;
    *(undefined1 *)(param_2 + 0x35) = uVar16;
    *(undefined1 *)(param_2 + 0x39) = uVar16;
    *(undefined1 *)(param_2 + 0x3d) = uVar16;
    *(undefined1 *)(param_2 + 0x41) = uVar16;
    *(undefined1 *)(param_2 + 0x45) = uVar16;
    *(undefined1 *)(param_2 + 0x49) = uVar16;
    *(undefined1 *)(param_2 + 0x4d) = uVar16;
    *(undefined1 *)(param_2 + 0x51) = uVar16;
    *(undefined1 *)(param_2 + 0x55) = uVar16;
    *(undefined1 *)(param_2 + 0x59) = uVar16;
    *(undefined1 *)(param_2 + 0x5d) = uVar16;
    *(undefined4 *)(param_2 + 2) = uVar6;
    uVar6 = *(undefined4 *)(puVar8 + 4);
    *(undefined1 *)((long)param_2 + 0xb) = uVar13;
    *(undefined1 *)((long)param_2 + 0x13) = uVar13;
    *(undefined1 *)((long)param_2 + 0x1b) = uVar13;
    *(undefined1 *)((long)param_2 + 0x23) = uVar13;
    *(undefined1 *)((long)param_2 + 0x2b) = uVar13;
    *(undefined1 *)((long)param_2 + 0x33) = uVar13;
    *(undefined1 *)((long)param_2 + 0x3b) = uVar13;
    *(undefined1 *)((long)param_2 + 0x43) = uVar13;
    *(undefined1 *)((long)param_2 + 0x4b) = uVar13;
    *(undefined1 *)((long)param_2 + 0x53) = uVar13;
    *(undefined1 *)((long)param_2 + 0x5b) = uVar13;
    *(undefined1 *)((long)param_2 + 99) = uVar13;
    *(undefined1 *)((long)param_2 + 0x6b) = uVar13;
    *(undefined4 *)(param_2 + 6) = uVar6;
    *(undefined4 *)(param_2 + 10) = uVar6;
    *(undefined4 *)(param_2 + 0xe) = uVar6;
    *(undefined4 *)(param_2 + 0x12) = uVar6;
    *(undefined4 *)(param_2 + 0x16) = uVar6;
    *(undefined4 *)(param_2 + 0x1a) = uVar6;
    *(undefined4 *)(param_2 + 0x1e) = uVar6;
    *(undefined4 *)(param_2 + 0x22) = uVar6;
    *(undefined4 *)(param_2 + 0x26) = uVar6;
    *(undefined4 *)(param_2 + 0x2a) = uVar6;
    *(undefined4 *)(param_2 + 0x2e) = uVar6;
    *(undefined4 *)(param_2 + 0x32) = uVar6;
    *(undefined4 *)(param_2 + 0x36) = uVar6;
    *(undefined1 *)((long)param_2 + 0x73) = uVar13;
    *(undefined4 *)(param_2 + 0x3a) = uVar6;
    *(undefined1 *)((long)param_2 + 0x7b) = uVar13;
    *(undefined4 *)(param_2 + 0x3e) = uVar6;
    *(undefined1 *)((long)param_2 + 0x83) = uVar13;
    *(undefined4 *)(param_2 + 0x42) = uVar6;
    *(undefined1 *)((long)param_2 + 0x8b) = uVar13;
    *(undefined4 *)(param_2 + 0x46) = uVar6;
    *(undefined1 *)((long)param_2 + 0x93) = uVar13;
    *(undefined4 *)(param_2 + 0x4a) = uVar6;
    *(undefined1 *)((long)param_2 + 0x9b) = uVar13;
    *(undefined4 *)(param_2 + 0x4e) = uVar6;
    *(undefined1 *)((long)param_2 + 0xa3) = uVar13;
    *(undefined4 *)(param_2 + 0x52) = uVar6;
    *(undefined1 *)((long)param_2 + 0xab) = uVar13;
    *(undefined4 *)(param_2 + 0x56) = uVar6;
    *(undefined1 *)((long)param_2 + 0xb3) = uVar13;
    *(undefined4 *)(param_2 + 0x5a) = uVar6;
    *(undefined1 *)((long)param_2 + 0xbb) = uVar13;
    *(undefined4 *)(param_2 + 0x5e) = uVar6;
    *(undefined1 *)(param_2 + 0x61) = uVar16;
    *(undefined1 *)((long)param_2 + 0xc3) = uVar13;
    *(undefined4 *)(param_2 + 0x62) = uVar6;
    *(undefined1 *)(param_2 + 0x65) = uVar16;
    uVar16 = puVar8[2];
    *(undefined1 *)((long)param_2 + 0xcb) = uVar13;
    uVar13 = puVar8[3];
    *(undefined4 *)(param_2 + 0x66) = uVar6;
    uVar6 = *(undefined4 *)(puVar8 + 4);
    param_2[0x68] = uVar11;
    *(undefined1 *)(param_2 + 0x69) = uVar16;
    *(undefined1 *)((long)param_2 + 0xd3) = uVar13;
    *(undefined4 *)(param_2 + 0x6a) = uVar6;
    param_2[0x6c] = uVar11;
    *(undefined1 *)(param_2 + 0x6d) = uVar16;
    *(undefined1 *)((long)param_2 + 0xdb) = uVar13;
    *(undefined4 *)(param_2 + 0x6e) = uVar6;
    param_2[0x70] = uVar11;
    *(undefined1 *)(param_2 + 0x71) = uVar16;
    *(undefined1 *)((long)param_2 + 0xe3) = uVar13;
    *(undefined4 *)(param_2 + 0x72) = uVar6;
    param_2[0x74] = uVar11;
    *(undefined1 *)(param_2 + 0x75) = uVar16;
    *(undefined1 *)((long)param_2 + 0xeb) = uVar13;
    *(undefined4 *)(param_2 + 0x76) = uVar6;
    param_2[0x78] = uVar11;
    *(undefined1 *)(param_2 + 0x79) = uVar16;
    *(undefined1 *)((long)param_2 + 0xf3) = uVar13;
    *(undefined4 *)(param_2 + 0x7a) = uVar6;
    param_2[0x7c] = uVar11;
    *(undefined1 *)(param_2 + 0x7d) = uVar16;
    *(undefined1 *)((long)param_2 + 0xfb) = uVar13;
    *(undefined4 *)(param_2 + 0x7e) = uVar6;
    if (param_6 != 0) {
      uVar9 = (param_6 ^ param_6 >> 0x1e) * 0x6c078965 + 1;
      uVar7 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 2;
      *param_1 = uVar9;
      param_1[1] = uVar7;
      uVar9 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 3;
      param_1[2] = uVar9;
      param_1[3] = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 4;
    }
    lVar10 = (**(code **)(*param_3 + 0x20))(param_3);
    lVar15 = 0;
    iVar18 = 0;
    do {
      puVar1 = (uint *)(lVar10 + lVar15);
      lVar15 = lVar15 + 4;
      uVar9 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
      uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
      uVar9 = uVar9 + (uVar9 >> 4) & 0xf0f0f0f;
      uVar9 = uVar9 + (uVar9 >> 8);
      iVar18 = (uVar9 + (uVar9 >> 0x10) & 0x3f) + iVar18;
    } while (lVar15 != 0x754);
    uVar17 = 0;
    if ((uVar14 != 0) && (iVar18 != 0)) {
      local_7d8 = &PTR_LAB_049ff3a8;
      uVar9 = nn::os::GetSystemTick();
      local_7c = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 1;
      local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
      local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
      local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
      memcpy(auStack_7d0,param_3 + 1,0x754);
      uVar17 = 0;
      plVar3 = (long *)((long)param_1 + ((long)param_8 >> 1));
      do {
        if (uVar14 <= uVar17) {
          return uVar17;
        }
        if (0x1f < (int)uVar17) {
          return uVar17;
        }
        uVar19 = uVar17;
        while( true ) {
          local_7e0 = *(undefined4 *)PTR_DAT_04bb37e0;
          local_7dc = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
          lVar10 = (*(code *)local_7d8[4])(&local_7d8);
          lVar15 = 0;
          uVar9 = 0;
          do {
            puVar1 = (uint *)(lVar10 + lVar15);
            lVar15 = lVar15 + 4;
            uVar7 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
            uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
            uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
            uVar7 = uVar7 + (uVar7 >> 8);
            uVar9 = (uVar7 + (uVar7 >> 0x10) & 0x3f) + uVar9;
          } while (lVar15 != 0x754);
          uVar5 = param_1[3];
          uVar7 = *param_1 ^ *param_1 << 0xb;
          *param_1 = param_1[1];
          param_1[1] = param_1[2];
          uVar7 = uVar7 >> 8 ^ uVar5 >> 0x13 ^ uVar7 ^ uVar5;
          param_1[2] = uVar5;
          param_1[3] = uVar7;
          FUN_00889f80(&local_7e8,&local_7d8,(int)((ulong)uVar7 * (ulong)uVar9 >> 0x20) + 1);
          local_7e0 = CONCAT13(local_7e5,CONCAT12(local_7e6,local_7e8));
          local_7dc = local_7e4;
          uVar11 = local_7e8;
          uVar13 = local_7e6;
          uVar16 = local_7e5;
          if (param_8 != 0 && ((param_8 & 1) != 0 || param_7 != (code *)0x0) ||
              param_7 != (code *)0x0) {
            pcVar12 = param_7;
            if ((param_8 & 1) != 0) {
              pcVar12 = *(code **)(param_7 + *plVar3);
            }
            (*pcVar12)(plVar3,&local_7e0);
            uVar11 = (undefined2)local_7e0;
            uVar13 = local_7e0._2_1_;
            uVar16 = local_7e0._3_1_;
          }
          puVar4 = param_2 + uVar19 * 4;
          if (0x1f < uVar17) {
            puVar4 = param_2;
          }
          *puVar4 = uVar11;
          *(undefined1 *)(puVar4 + 1) = uVar13;
          *(undefined1 *)((long)puVar4 + 3) = uVar16;
          *(undefined4 *)(puVar4 + 2) = local_7dc;
          lVar15 = (*(code *)local_7d8[3])(&local_7d8);
          uVar9 = FUN_0277d6c4(&local_7e0);
          if ((uVar9 >> 3 & 0x1fff) < 0x753) {
            lVar10 = (ulong)((uVar9 & 0xffff) >> 5) * 4;
            *(uint *)(lVar15 + lVar10) =
                 *(uint *)(lVar15 + lVar10) & (1 << (ulong)(uVar9 & 0x1f) ^ 0xffffffffU);
          }
          lVar10 = (*(code *)local_7d8[4])(&local_7d8);
          lVar15 = 0;
          iVar18 = 0;
          do {
            puVar1 = (uint *)(lVar10 + lVar15);
            lVar15 = lVar15 + 4;
            uVar9 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
            uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
            uVar9 = uVar9 + (uVar9 >> 4) & 0xf0f0f0f;
            uVar9 = uVar9 + (uVar9 >> 8);
            iVar18 = (uVar9 + (uVar9 >> 0x10) & 0x3f) + iVar18;
          } while (lVar15 != 0x754);
          uVar2 = uVar19 + 1;
          if ((iVar18 != 0) || ((param_5 & 1) == 0)) break;
          memcpy(auStack_7d0,param_3 + 1,0x754);
          if ((uVar14 <= uVar2) || (iVar18 = (int)uVar19, uVar19 = uVar2, 0x1e < iVar18)) {
            return uVar2 & 0xffffffff;
          }
        }
        uVar17 = uVar2 & 0xffffffff;
      } while (iVar18 != 0);
    }
  }
  return uVar17;
}


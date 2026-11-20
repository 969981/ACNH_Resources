
/* WARNING: Type propagation algorithm not settling */

ulong FUN_03eff120(long param_1,long param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  uint *puVar13;
  bool bVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  int iVar22;
  ulong uVar23;
  ulong uVar24;
  int iVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  undefined8 uVar29;
  ulong uVar30;
  undefined8 *puVar31;
  ulong uVar32;
  uint uVar33;
  ulong uVar34;
  uint *puVar35;
  ulong uVar36;
  long lVar37;
  ulong uVar38;
  ulong uVar39;
  long lVar40;
  long lVar41;
  ulong uVar42;
  long lVar43;
  long lVar44;
  uint uVar45;
  void *pvVar46;
  ulong uVar47;
  uint local_5d4;
  undefined **local_5a0;
  ulong uStack_598;
  undefined4 local_590 [2];
  void *local_588;
  undefined8 local_580;
  void *local_578;
  undefined8 local_570;
  uint local_568 [322];
  
  if (param_2 == 0) {
    return 0;
  }
  local_568[0x4e] = 0;
  local_568[0x4f] = 0;
  local_568[0] = 0xffffffff;
  local_568[1] = 0xffffffff;
  local_568[2] = 0xffffffff;
  local_568[3] = 0xffffffff;
  local_568[0x52] = 0xffffffff;
  local_568[0x53] = 0xffffffff;
  local_568[0x50] = 0xffffffff;
  local_568[0x51] = 0xffffffff;
  local_568[0x54] = 0xffffffff;
  local_568[0x55] = 0xffffffff;
  local_568[0x5e] = 0xffffffff;
  local_568[0x5f] = 0xffffffff;
  local_568[0x5c] = 0xffffffff;
  local_568[0x5d] = 0xffffffff;
  local_568[0x5a] = 0xffffffff;
  local_568[0x5b] = 0xffffffff;
  local_568[0x66] = 0xffffffff;
  local_568[0x67] = 0xffffffff;
  local_568[100] = 0xffffffff;
  local_568[0x65] = 0xffffffff;
  local_568[0x68] = 0xffffffff;
  local_568[0x69] = 0xffffffff;
  local_568[0x72] = 0xffffffff;
  local_568[0x73] = 0xffffffff;
  local_568[0x70] = 0xffffffff;
  local_568[0x71] = 0xffffffff;
  local_568[0x6e] = 0xffffffff;
  local_568[0x6f] = 0xffffffff;
  local_568[0x7a] = 0xffffffff;
  local_568[0x7b] = 0xffffffff;
  local_568[0x78] = 0xffffffff;
  local_568[0x79] = 0xffffffff;
  local_568[0x7c] = 0xffffffff;
  local_568[0x7d] = 0xffffffff;
  local_568[0x86] = 0xffffffff;
  local_568[0x87] = 0xffffffff;
  local_568[0x84] = 0xffffffff;
  local_568[0x85] = 0xffffffff;
  local_568[0x82] = 0xffffffff;
  local_568[0x83] = 0xffffffff;
  local_568[0x90] = 0xffffffff;
  local_568[0x91] = 0xffffffff;
  local_568[0x8e] = 0xffffffff;
  local_568[0x8f] = 0xffffffff;
  local_568[0x8c] = 0xffffffff;
  local_568[0x8d] = 0xffffffff;
  local_568[0x9a] = 0xffffffff;
  local_568[0x9b] = 0xffffffff;
  local_568[0x98] = 0xffffffff;
  local_568[0x99] = 0xffffffff;
  local_568[0x96] = 0xffffffff;
  local_568[0x97] = 0xffffffff;
  local_568[0xa4] = 0xffffffff;
  local_568[0xa5] = 0xffffffff;
  local_568[0xa2] = 0xffffffff;
  local_568[0xa3] = 0xffffffff;
  local_568[0xa0] = 0xffffffff;
  local_568[0xa1] = 0xffffffff;
  local_568[0xae] = 0xffffffff;
  local_568[0xaf] = 0xffffffff;
  local_568[0xac] = 0xffffffff;
  local_568[0xad] = 0xffffffff;
  local_568[0xaa] = 0xffffffff;
  local_568[0xab] = 0xffffffff;
  local_568[0xb8] = 0xffffffff;
  local_568[0xb9] = 0xffffffff;
  local_568[0xb6] = 0xffffffff;
  local_568[0xb7] = 0xffffffff;
  local_568[0xb4] = 0xffffffff;
  local_568[0xb5] = 0xffffffff;
  local_568[0xc2] = 0xffffffff;
  local_568[0xc3] = 0xffffffff;
  local_568[0xc0] = 0xffffffff;
  local_568[0xc1] = 0xffffffff;
  local_568[0xbe] = 0xffffffff;
  local_568[0xbf] = 0xffffffff;
  local_568[0xcc] = 0xffffffff;
  local_568[0xcd] = 0xffffffff;
  local_568[0xca] = 0xffffffff;
  local_568[0xcb] = 0xffffffff;
  local_568[200] = 0xffffffff;
  local_568[0xc9] = 0xffffffff;
  local_568[0xd6] = 0xffffffff;
  local_568[0xd7] = 0xffffffff;
  local_568[0xd4] = 0xffffffff;
  local_568[0xd5] = 0xffffffff;
  local_568[0xd2] = 0xffffffff;
  local_568[0xd3] = 0xffffffff;
  local_568[0xe0] = 0xffffffff;
  local_568[0xe1] = 0xffffffff;
  local_568[0xde] = 0xffffffff;
  local_568[0xdf] = 0xffffffff;
  local_568[0xdc] = 0xffffffff;
  local_568[0xdd] = 0xffffffff;
  local_568[0xea] = 0xffffffff;
  local_568[0xeb] = 0xffffffff;
  local_568[0xe8] = 0xffffffff;
  local_568[0xe9] = 0xffffffff;
  local_568[0xe6] = 0xffffffff;
  local_568[0xe7] = 0xffffffff;
  local_568[0xf4] = 0xffffffff;
  local_568[0xf5] = 0xffffffff;
  local_568[0xf2] = 0xffffffff;
  local_568[0xf3] = 0xffffffff;
  local_568[0xf0] = 0xffffffff;
  local_568[0xf1] = 0xffffffff;
  local_568[0xfe] = 0xffffffff;
  local_568[0xff] = 0xffffffff;
  local_568[0xfc] = 0xffffffff;
  local_568[0xfd] = 0xffffffff;
  local_568[0xfa] = 0xffffffff;
  local_568[0xfb] = 0xffffffff;
  local_568[0x108] = 0xffffffff;
  local_568[0x109] = 0xffffffff;
  local_568[0x106] = 0xffffffff;
  local_568[0x107] = 0xffffffff;
  local_568[0x104] = 0xffffffff;
  local_568[0x105] = 0xffffffff;
  local_568[0x112] = 0xffffffff;
  local_568[0x113] = 0xffffffff;
  local_568[0x110] = 0xffffffff;
  local_568[0x111] = 0xffffffff;
  local_568[0x10e] = 0xffffffff;
  local_568[0x10f] = 0xffffffff;
  local_568[0x11c] = 0xffffffff;
  local_568[0x11d] = 0xffffffff;
  local_568[0x11a] = 0xffffffff;
  local_568[0x11b] = 0xffffffff;
  local_568[0x118] = 0xffffffff;
  local_568[0x119] = 0xffffffff;
  local_568[0x126] = 0xffffffff;
  local_568[0x127] = 0xffffffff;
  local_568[0x124] = 0xffffffff;
  local_568[0x125] = 0xffffffff;
  local_568[0x122] = 0xffffffff;
  local_568[0x123] = 0xffffffff;
  local_568[0x130] = 0xffffffff;
  local_568[0x131] = 0xffffffff;
  local_568[0x12e] = 0xffffffff;
  local_568[0x12f] = 0xffffffff;
  local_568[300] = 0xffffffff;
  local_568[0x12d] = 0xffffffff;
  local_568[0x13a] = 0xffffffff;
  local_568[0x13b] = 0xffffffff;
  local_568[0x138] = 0xffffffff;
  local_568[0x139] = 0xffffffff;
  local_568[0x136] = 0xffffffff;
  local_568[0x137] = 0xffffffff;
  local_568[0x4c] = 0;
  local_568[0x4d] = 0;
  local_568[0x56] = 0;
  local_568[0x57] = 0;
  local_568[0x58] = 0;
  local_568[0x59] = 0;
  local_568[0x62] = 0;
  local_568[99] = 0;
  local_568[0x60] = 0;
  local_568[0x61] = 0;
  local_568[0x6a] = 0;
  local_568[0x6b] = 0;
  local_568[0x6c] = 0;
  local_568[0x6d] = 0;
  local_568[0x76] = 0;
  local_568[0x77] = 0;
  local_568[0x74] = 0;
  local_568[0x75] = 0;
  local_568[0x80] = 0;
  local_568[0x81] = 0;
  local_568[0x7e] = 0;
  local_568[0x7f] = 0;
  local_568[0x8a] = 0;
  local_568[0x8b] = 0;
  local_568[0x88] = 0;
  local_568[0x89] = 0;
  local_568[0x94] = 0;
  local_568[0x95] = 0;
  local_568[0x92] = 0;
  local_568[0x93] = 0;
  local_568[0x9e] = 0;
  local_568[0x9f] = 0;
  local_568[0x9c] = 0;
  local_568[0x9d] = 0;
  local_568[0xa8] = 0;
  local_568[0xa9] = 0;
  local_568[0xa6] = 0;
  local_568[0xa7] = 0;
  local_568[0xb2] = 0;
  local_568[0xb3] = 0;
  local_568[0xb0] = 0;
  local_568[0xb1] = 0;
  local_568[0xbc] = 0;
  local_568[0xbd] = 0;
  local_568[0xba] = 0;
  local_568[0xbb] = 0;
  local_568[0xc6] = 0;
  local_568[199] = 0;
  local_568[0xc4] = 0;
  local_568[0xc5] = 0;
  local_568[0xd0] = 0;
  local_568[0xd1] = 0;
  local_568[0xce] = 0;
  local_568[0xcf] = 0;
  local_568[0xda] = 0;
  local_568[0xdb] = 0;
  local_568[0xd8] = 0;
  local_568[0xd9] = 0;
  local_568[0xe4] = 0;
  local_568[0xe5] = 0;
  local_568[0xe2] = 0;
  local_568[0xe3] = 0;
  local_568[0xee] = 0;
  local_568[0xef] = 0;
  local_568[0xec] = 0;
  local_568[0xed] = 0;
  local_568[0xf8] = 0;
  local_568[0xf9] = 0;
  local_568[0xf6] = 0;
  local_568[0xf7] = 0;
  local_568[0x102] = 0;
  local_568[0x103] = 0;
  local_568[0x100] = 0;
  local_568[0x101] = 0;
  local_568[0x10c] = 0;
  local_568[0x10d] = 0;
  local_568[0x10a] = 0;
  local_568[0x10b] = 0;
  local_568[0x116] = 0;
  local_568[0x117] = 0;
  local_568[0x114] = 0;
  local_568[0x115] = 0;
  local_568[0x120] = 0;
  local_568[0x121] = 0;
  local_568[0x11e] = 0;
  local_568[0x11f] = 0;
  local_568[0x12a] = 0;
  local_568[299] = 0;
  local_568[0x128] = 0;
  local_568[0x129] = 0;
  local_568[0x134] = 0;
  local_568[0x135] = 0;
  local_568[0x132] = 0;
  local_568[0x133] = 0;
  local_568[0x13e] = 0;
  local_568[0x13f] = 0;
  local_568[0x13c] = 0;
  local_568[0x13d] = 0;
  local_568[4] = 0xffffffff;
  local_568[5] = 0xffffffff;
  local_568[6] = 0;
  local_568[7] = 0;
  local_568[8] = 0;
  local_568[9] = 0;
  local_568[10] = 0xffffffff;
  local_568[0xb] = 0xffffffff;
  local_568[0xc] = 0xffffffff;
  local_568[0xd] = 0xffffffff;
  local_568[0xe] = 0xffffffff;
  local_568[0xf] = 0xffffffff;
  local_568[0x14] = 0xffffffff;
  local_568[0x15] = 0xffffffff;
  local_568[0x16] = 0xffffffff;
  local_568[0x17] = 0xffffffff;
  local_568[0x18] = 0xffffffff;
  local_568[0x19] = 0xffffffff;
  local_568[0x1a] = 0;
  local_568[0x1b] = 0;
  local_568[0x1c] = 0;
  local_568[0x1d] = 0;
  local_568[0x1e] = 0xffffffff;
  local_568[0x1f] = 0xffffffff;
  local_568[0x20] = 0xffffffff;
  local_568[0x21] = 0xffffffff;
  local_568[0x22] = 0xffffffff;
  local_568[0x23] = 0xffffffff;
  local_568[0x28] = 0xffffffff;
  local_568[0x29] = 0xffffffff;
  local_568[0x2a] = 0xffffffff;
  local_568[0x2b] = 0xffffffff;
  local_568[0x2c] = 0xffffffff;
  local_568[0x2d] = 0xffffffff;
  local_568[0x2e] = 0;
  local_568[0x2f] = 0;
  local_568[0x34] = 0xffffffff;
  local_568[0x35] = 0xffffffff;
  local_568[0x36] = 0xffffffff;
  local_568[0x37] = 0xffffffff;
  local_568[0x30] = 0;
  local_568[0x31] = 0;
  local_568[0x32] = 0xffffffff;
  local_568[0x33] = 0xffffffff;
  local_568[0x3c] = 0xffffffff;
  local_568[0x3d] = 0xffffffff;
  local_568[0x3e] = 0xffffffff;
  local_568[0x3f] = 0xffffffff;
  local_568[0x40] = 0xffffffff;
  local_568[0x41] = 0xffffffff;
  local_568[0x42] = 0;
  local_568[0x43] = 0;
  local_568[0x44] = 0;
  local_568[0x45] = 0;
  local_568[0x46] = 0xffffffff;
  local_568[0x47] = 0xffffffff;
  local_568[0x48] = 0xffffffff;
  local_568[0x49] = 0xffffffff;
  local_568[0x4a] = 0xffffffff;
  local_568[0x4b] = 0xffffffff;
  uVar8 = *(uint *)(param_1 + 0x10);
  local_568[0x10] = 0;
  local_568[0x11] = 0;
  local_568[0x12] = 0;
  local_568[0x13] = 0;
  local_568[0x24] = 0;
  local_568[0x25] = 0;
  local_568[0x26] = 0;
  local_568[0x27] = 0;
  local_568[0x38] = 0;
  local_568[0x39] = 0;
  local_568[0x3a] = 0;
  local_568[0x3b] = 0;
  if ((int)uVar8 < 1) {
    return 0;
  }
  uVar39 = 0;
  uVar33 = 0;
  uVar29 = *(undefined8 *)PTR_PTR_04bd4d20;
  do {
    uVar2 = uVar33;
    if (*(uint *)(param_1 + 0x10) <= uVar33) {
      uVar2 = 0;
    }
    lVar40 = *(long *)(*(long *)(param_1 + 0x18) + (ulong)uVar2 * 0x48);
    uVar15 = FUN_005132f0(*(undefined8 *)(param_1 + 0x28),lVar40);
    local_5d4 = ~uVar15 >> 0x1f;
    uVar2 = *(uint *)(lVar40 + 0x48);
    if (0 < (int)uVar2) {
      uVar32 = 0;
      do {
        lVar43 = *(long *)(*(long *)(lVar40 + 0x40) + uVar32 * 8);
        puVar16 = (undefined4 *)FUN_0053bf90(lVar43);
        local_590[0] = *puVar16;
        local_588 = (void *)0x0;
        local_580 = 0x8000000000000000;
        uVar9 = puVar16[4];
        pvVar46 = *(void **)(puVar16 + 2);
        if ((int)uVar9 < 1) {
          local_588 = (void *)0x0;
          local_580 = 0x8000000000000000;
        }
        else {
          local_5a0._0_4_ = uVar9;
          local_588 = (void *)FUN_00421ed0(uVar29,4,&local_5a0);
          local_580 = CONCAT44((uint)local_5a0,uVar9);
          memcpy(local_588,pvVar46,(ulong)uVar9 << 2);
        }
        local_578 = (void *)0x0;
        local_570 = 0x8000000000000000;
        uVar9 = puVar16[8];
        pvVar46 = *(void **)(puVar16 + 6);
        local_5a0 = (undefined **)CONCAT44(local_5a0._4_4_,uVar9);
        if ((int)uVar9 < 1) {
          local_578 = (void *)0x0;
          local_570 = -0x8000000000000000;
        }
        else {
          local_578 = (void *)FUN_00421ed0(uVar29,0x40,&local_5a0);
          local_570 = CONCAT44((uint)local_5a0,uVar9);
          memcpy(local_578,pvVar46,(ulong)uVar9 << 6);
        }
        uVar9 = *(uint *)(lVar43 + 0x170);
        if (0 < (int)uVar9) {
          uVar42 = 0;
          uVar47 = uVar39;
          do {
            lVar41 = *(long *)(*(long *)(lVar43 + 0x168) + uVar42 * 8);
            uVar39 = uVar47;
            if ((lVar41 != *(long *)(param_1 + 0x30)) &&
               (uVar18 = *(ulong *)(lVar41 + 0x90) & 0xfffffffffffffffe, uVar18 != 0)) {
              local_5a0 = &PTR_LAB_048f9770;
              uStack_598 = uVar18;
              uVar18 = FUN_03f07e00(*(undefined8 *)(param_1 + 8),&local_5a0);
              uVar45 = (uint)uVar47;
              puVar35 = local_568 + uVar47 * 10;
              if (0x1f < uVar45) {
                puVar35 = local_568;
              }
              if (0 < (int)*(uint *)(param_2 + 0x10)) {
                uVar30 = 0;
                uVar34 = *(ulong *)(lVar41 + 0x90) & 0xfffffffffffffffe;
                do {
                  lVar37 = *(long *)(*(long *)(param_2 + 0x18) + uVar30 * 0x48);
                  uVar10 = *(uint *)(lVar37 + 0x48);
                  if (0 < (int)uVar10) {
                    uVar36 = 0;
                    do {
                      lVar20 = *(long *)(*(long *)(lVar37 + 0x40) + uVar36 * 8);
                      uVar11 = *(uint *)(lVar20 + 0x170);
                      if (0 < (int)uVar11) {
                        uVar38 = 0;
                        do {
                          lVar44 = *(long *)(*(long *)(lVar20 + 0x168) + uVar38 * 8);
                          uVar21 = *(ulong *)(lVar44 + 0x90) & 0xfffffffffffffffe;
                          if (uVar21 != 0 && lVar44 != *(long *)(param_2 + 0x30)) {
                            uVar23 = 0;
                            do {
                              if (*(char *)(uVar34 + uVar23) == '\0') {
LAB_03eff79c:
                                uVar23 = uVar23 & 0xffffffff;
                                goto LAB_03eff7a0;
                              }
                              if (*(char *)(uVar34 + uVar23 + 1) == '\0') {
                                uVar23 = uVar23 + 1;
                                goto LAB_03eff79c;
                              }
                              if (*(char *)(uVar34 + uVar23 + 2) == '\0') {
                                uVar23 = uVar23 + 2;
                                goto LAB_03eff79c;
                              }
                              uVar23 = uVar23 + 3;
                            } while (uVar23 != 0x80001);
                            uVar23 = 0;
LAB_03eff7a0:
                            do {
                              uVar24 = uVar23 - 1;
                              if ((long)uVar23 < 1) {
                                uVar24 = 0xffffffff;
                                break;
                              }
                              uVar23 = uVar24;
                            } while (*(char *)(uVar34 + (uVar24 & 0xffffffff)) != ':');
                            uVar23 = 0;
                            do {
                              if (*(char *)(uVar21 + uVar23) == '\0') {
LAB_03eff80c:
                                uVar23 = uVar23 & 0xffffffff;
                                goto LAB_03eff810;
                              }
                              if (*(char *)(uVar21 + uVar23 + 1) == '\0') {
                                uVar23 = uVar23 + 1;
                                goto LAB_03eff80c;
                              }
                              if (*(char *)(uVar21 + uVar23 + 2) == '\0') {
                                uVar23 = uVar23 + 2;
                                goto LAB_03eff80c;
                              }
                              uVar23 = uVar23 + 3;
                            } while (uVar23 != 0x80001);
                            uVar23 = 0;
LAB_03eff810:
                            do {
                              uVar26 = uVar23 - 1;
                              if ((long)uVar23 < 1) {
                                uVar26 = 0xffffffff;
                                break;
                              }
                              uVar23 = uVar26;
                            } while (*(char *)(uVar21 + (uVar26 & 0xffffffff)) != ':');
                            lVar28 = 0;
                            iVar22 = (int)uVar24;
                            do {
                              if (*(char *)(uVar34 + lVar28) == '\0') goto LAB_03eff87c;
                              if (*(char *)(uVar34 + lVar28 + 1) == '\0') {
                                lVar28 = lVar28 + 1;
                                goto LAB_03eff87c;
                              }
                              if (*(char *)(uVar34 + lVar28 + 2) == '\0') {
                                lVar28 = lVar28 + 2;
                                goto LAB_03eff87c;
                              }
                              lVar28 = lVar28 + 3;
                            } while (lVar28 != 0x80001);
                            lVar28 = 0;
LAB_03eff87c:
                            lVar27 = 0;
                            iVar25 = (int)uVar26;
                            lVar4 = *(long *)(PTR_PTR_04bb2238 + 8);
                            if (iVar22 < (int)lVar28 && -2 < iVar22) {
                              lVar4 = uVar34 + (iVar22 + 1);
                            }
                            do {
                              if (*(char *)(uVar21 + lVar27) == '\0') goto LAB_03eff8d0;
                              if (*(char *)(uVar21 + lVar27 + 1) == '\0') {
                                lVar27 = lVar27 + 1;
                                goto LAB_03eff8d0;
                              }
                              if (*(char *)(uVar21 + lVar27 + 2) == '\0') {
                                lVar27 = lVar27 + 2;
                                goto LAB_03eff8d0;
                              }
                              lVar27 = lVar27 + 3;
                            } while (lVar27 != 0x80001);
                            lVar27 = 0;
LAB_03eff8d0:
                            lVar28 = *(long *)(PTR_PTR_04bb2238 + 8);
                            if (iVar25 < (int)lVar27 && -2 < iVar25) {
                              lVar28 = uVar21 + (iVar25 + 1);
                            }
                            if (lVar4 == lVar28) {
LAB_03eff980:
                              puVar5 = local_568 + uVar47 * 10 + 3;
                              if (0x1f < uVar45) {
                                puVar5 = local_568 + 3;
                              }
                              *puVar5 = (uint)uVar30;
                              puVar6 = local_568 + uVar47 * 10 + 5;
                              puVar13 = local_568 + uVar47 * 10 + 4;
                              if (0x1f < uVar45) {
                                puVar6 = local_568 + 5;
                                puVar13 = local_568 + 4;
                              }
                              *puVar13 = (uint)uVar36;
                              *puVar6 = (uint)uVar38;
                              if (lVar44 == 0) goto LAB_03eff9e4;
                              if (local_5d4 != 0) {
                                FUN_005131d0(*(undefined8 *)(param_1 + 0x28),lVar40);
                              }
                              FUN_004435c0(*(undefined8 *)(*(long *)(lVar43 + 0x168) + uVar42 * 8));
                              uVar17 = FUN_0053d490(lVar44);
                              uVar39 = (ulong)(uVar45 + 1);
                              local_5d4 = 0;
                              *(undefined8 *)(*(long *)(lVar43 + 0x168) + uVar42 * 8) = uVar17;
                              uVar10 = *puVar5;
                              puVar5 = local_568 + uVar47 * 10;
                              if (0x1f < uVar45) {
                                puVar5 = local_568;
                              }
                              puVar3 = local_568 + uVar47 * 10 + 2;
                              if (0x1f < uVar45) {
                                puVar3 = local_568 + 2;
                              }
                              lVar41 = *(long *)(param_2 + 0x18);
                              if (*(uint *)(param_2 + 0x10) <= uVar10) {
                                uVar10 = 0;
                              }
                              *puVar3 = (uint)uVar42;
                              uVar45 = *puVar13;
                              lVar41 = lVar41 + (long)(int)uVar10 * 0x48;
                              *puVar35 = uVar33;
                              *(int *)((ulong)puVar5 | 4) = (int)uVar32;
                              if (*(uint *)(lVar41 + 8) <= uVar45) {
                                uVar45 = 0;
                              }
                              puVar19 = (undefined8 *)
                                        (*(long *)(*(long *)(*(long *)(lVar41 + 0x10) +
                                                             (long)(int)uVar45 * 0x20 + 0x10) + 0x18
                                                  ) + (long)(int)*puVar6 * 0x40);
                              uVar17 = *puVar19;
                              puVar31 = (undefined8 *)((long)local_578 + uVar42 * 0x40);
                              puVar31[1] = puVar19[1];
                              *puVar31 = uVar17;
                              uVar17 = puVar19[2];
                              puVar31[3] = puVar19[3];
                              puVar31[2] = uVar17;
                              uVar17 = puVar19[4];
                              puVar31[5] = puVar19[5];
                              puVar31[4] = uVar17;
                              uVar17 = puVar19[6];
                              puVar31[7] = puVar19[7];
                              puVar31[6] = uVar17;
                              goto LAB_03eff648;
                            }
                            uVar21 = 0;
                            bVar14 = true;
                            do {
                              lVar27 = lVar4 + 1 + uVar21;
                              lVar1 = lVar28 + 1 + uVar21;
                              cVar12 = *(char *)(lVar27 + -1);
                              if (cVar12 != *(char *)(lVar1 + -1)) break;
                              if (cVar12 == '\0') {
                                if (bVar14) goto LAB_03eff980;
                                break;
                              }
                              cVar12 = *(char *)(lVar4 + 1 + uVar21);
                              if (cVar12 != *(char *)(lVar28 + 1 + uVar21)) break;
                              if (cVar12 == '\0') goto LAB_03eff980;
                              cVar12 = *(char *)(lVar27 + 1);
                              if (cVar12 != *(char *)(lVar1 + 1)) break;
                              if (cVar12 == '\0') goto LAB_03eff980;
                              bVar14 = uVar21 < 0x7fffe;
                              uVar21 = uVar21 + 3;
                            } while (uVar21 != 0x80001);
                          }
                          uVar38 = uVar38 + 1;
                        } while (uVar38 != uVar11);
                      }
                      uVar36 = uVar36 + 1;
                    } while (uVar36 != uVar10);
                  }
                  uVar30 = uVar30 + 1;
                } while (uVar30 != *(uint *)(param_2 + 0x10));
              }
LAB_03eff9e4:
              if ((uVar18 & 1) != 0) {
                uStack_598 = *(ulong *)(lVar41 + 0x90) & 0xfffffffffffffffe;
                local_5a0 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
                FUN_03f00090(param_1,&local_5a0,0);
              }
            }
LAB_03eff648:
            uVar42 = uVar42 + 1;
            uVar47 = uVar39;
          } while (uVar42 != uVar9);
        }
        FUN_0053b9f0(lVar43,local_590);
        lVar43 = local_570;
        uVar9 = local_570._4_4_;
        local_570 = (ulong)local_570._4_4_ << 0x20;
        if ((-1 < lVar43) && (local_578 != (void *)0x0)) {
          FUN_00421f90(uVar29,local_578,0x40,uVar9 & 0x3fffffff);
        }
        uVar47 = local_580;
        local_578 = (void *)0x0;
        uVar42 = local_580 >> 0x20;
        local_580 = local_580 & 0xffffffff00000000;
        local_570 = CONCAT44(0x80000000,(undefined4)local_570);
        if ((-1 < (long)uVar47) && (local_588 != (void *)0x0)) {
          FUN_00421f90(uVar29,local_588,4,(uint)uVar42 & 0x3fffffff);
        }
        uVar32 = uVar32 + 1;
      } while (uVar32 != uVar2);
    }
    if ((-1 < (int)uVar15) && (local_5d4 == 0)) {
      FUN_00512bd0(*(undefined8 *)(param_1 + 0x28),lVar40);
    }
    lVar40 = DAT_05ae7600;
    uVar33 = uVar33 + 1;
  } while (uVar33 != uVar8);
  if ((int)uVar39 < 1) {
    return uVar39;
  }
  if (DAT_05ae7600 == 0) {
    puVar19 = malloc(uVar39 * 0x28);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar43 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_3 = (long *)(lVar40 + 8);
      if (lVar43 != 0) {
        param_3 = (long *)(lVar43 + 0xa8);
      }
      param_3 = (long *)*param_3;
      if (param_3 == (long *)0x0) goto LAB_03effbe0;
    }
    puVar19 = (undefined8 *)(**(code **)(*param_3 + 0x30))(param_3,uVar39 * 0x28,8);
  }
  if (puVar19 != (undefined8 *)0x0) {
    uVar42 = uVar39 * 0x28 - 0x28;
    uVar8 = ((uint)(uVar42 / 0x28) & 0x7ffffff) + 1;
    uVar32 = (ulong)uVar8 & 3;
    puVar31 = puVar19;
    if ((uVar8 & 3) != 0) {
      do {
        *puVar31 = 0xffffffffffffffff;
        puVar31[1] = 0xffffffffffffffff;
        uVar32 = uVar32 - 1;
        puVar31[4] = 0;
        puVar31[2] = 0xffffffffffffffff;
        puVar31[3] = 0;
        puVar31 = puVar31 + 5;
      } while (uVar32 != 0);
    }
    if (0x77 < uVar42) {
      do {
        *puVar31 = 0xffffffffffffffff;
        puVar31[1] = 0xffffffffffffffff;
        puVar31[2] = 0xffffffffffffffff;
        puVar31[3] = 0;
        puVar31[4] = 0;
        puVar31[5] = 0xffffffffffffffff;
        puVar31[6] = 0xffffffffffffffff;
        puVar31[7] = 0xffffffffffffffff;
        puVar31[8] = 0;
        puVar31[9] = 0;
        puVar31[10] = 0xffffffffffffffff;
        puVar31[0xb] = 0xffffffffffffffff;
        puVar31[0xc] = 0xffffffffffffffff;
        puVar31[0xd] = 0;
        puVar31[0xe] = 0;
        puVar31[0xf] = 0xffffffffffffffff;
        puVar31[0x10] = 0xffffffffffffffff;
        puVar31[0x11] = 0xffffffffffffffff;
        puVar31[0x12] = 0;
        puVar31[0x13] = 0;
        puVar31 = puVar31 + 0x14;
      } while (puVar31 != puVar19 + uVar39 * 5);
    }
    *(int *)(param_1 + 0x58) = (int)uVar39;
    *(undefined8 **)(param_1 + 0x60) = puVar19;
  }
LAB_03effbe0:
  uVar32 = 0;
  puVar35 = local_568;
  do {
    uVar42 = uVar32 & 0xffffffff;
    puVar5 = puVar35;
    if (0x1f < uVar32) {
      puVar5 = local_568;
    }
    puVar35 = puVar35 + 10;
    bVar14 = *(uint *)(param_1 + 0x58) <= uVar32;
    uVar29 = *(undefined8 *)(puVar5 + 8);
    uVar32 = uVar32 + 1;
    if (bVar14) {
      uVar42 = 0;
    }
    puVar19 = (undefined8 *)(*(long *)(param_1 + 0x60) + uVar42 * 0x28);
    uVar17 = *(undefined8 *)(puVar5 + 2);
    uVar7 = *(undefined8 *)(puVar5 + 4);
    puVar19[3] = *(undefined8 *)(puVar5 + 6);
    puVar19[4] = uVar29;
    puVar19[1] = uVar17;
    puVar19[2] = uVar7;
    *puVar19 = *(undefined8 *)puVar5;
  } while (uVar39 != uVar32);
  return uVar39;
}


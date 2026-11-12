
void FUN_00b391e0(long param_1,uint param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  byte bVar6;
  byte bVar7;
  undefined *puVar8;
  char cVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  uint *puVar15;
  long *plVar16;
  ulong uVar17;
  uint uVar18;
  char *pcVar19;
  ulong uVar20;
  undefined1 *puVar21;
  long lVar22;
  byte *pbVar23;
  undefined *puVar24;
  undefined1 *puVar25;
  long lVar26;
  long lVar27;
  long *plVar28;
  undefined8 *puVar29;
  undefined1 **ppuVar30;
  int iVar31;
  uint uVar32;
  undefined1 *__dest;
  undefined8 uVar33;
  char *pcVar34;
  undefined *local_6e0;
  char *local_6d8;
  undefined4 local_6d0;
  undefined1 local_6cc [15];
  undefined1 local_6bd;
  undefined1 local_6ad;
  undefined1 local_5cd;
  uint local_5c4;
  undefined8 local_5c0;
  undefined1 uStack_5b8;
  byte local_5b7;
  undefined1 uStack_5b6;
  byte local_5b5;
  undefined2 uStack_5b4;
  undefined2 local_5b2;
  undefined6 uStack_5b0;
  undefined8 local_5a8;
  undefined *local_5a0;
  undefined1 *puStack_598;
  undefined4 local_590;
  undefined1 local_58c [15];
  undefined1 local_57d;
  undefined8 local_578;
  undefined1 *local_570 [2];
  undefined4 local_560;
  undefined1 local_55c [31];
  undefined1 local_53d;
  undefined *local_538;
  undefined1 *local_530;
  undefined4 local_528;
  undefined1 local_524 [31];
  undefined1 local_505;
  undefined *local_500;
  undefined1 *local_4f8;
  undefined4 local_4f0;
  undefined1 local_4ec [31];
  undefined1 local_4cd;
  undefined *local_4c8;
  undefined1 *local_4c0;
  undefined4 local_4b8;
  undefined1 local_4b4 [31];
  undefined1 local_495;
  uint local_490 [4];
  ulong local_480 [64];
  ulong local_280 [16];
  undefined8 local_200 [4];
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180 [4];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100 [4];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long *local_80;
  undefined4 local_78;
  uint local_70 [4];
  
  **(undefined1 **)(param_1 + 0xc0) = 0;
  puVar15 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  if (puVar15 == (uint *)0x0) {
    return;
  }
  local_70[0] = 0;
  local_70[1] = 0;
  if (*(int *)(param_1 + 0x158) != 0) {
    puVar29 = *(undefined8 **)(param_1 + 0x160);
    puVar4 = puVar29 + *(int *)(param_1 + 0x158);
    do {
      plVar28 = (long *)*puVar29;
      if (*(char *)plVar28[1] != '\0') {
        local_280[0] = local_280[0] & 0xffffffff00000000;
        uVar18 = 0;
        do {
          pcVar34 = "";
          if (uVar18 < 0x2a) {
            pcVar34 = (&PTR_s_cNotSet_04937ca0)[uVar18];
          }
          (**(code **)(*plVar28 + 0x18))(plVar28);
          pcVar19 = (char *)plVar28[1];
          if (pcVar34 == pcVar19) {
LAB_00b3934c:
            local_280[0] = CONCAT44(local_280[0]._4_4_,uVar18);
            break;
          }
          if (*pcVar34 == *pcVar19) {
            if (*pcVar34 == '\0') goto LAB_00b3934c;
            lVar26 = 0x7fffe;
            while( true ) {
              if (pcVar34[1] != pcVar19[1]) break;
              if (pcVar34[1] == '\0') goto LAB_00b3934c;
              if (pcVar34[2] != pcVar19[2]) break;
              if (pcVar34[2] == '\0') goto LAB_00b3934c;
              if ((lVar26 == 0) || (cVar9 = pcVar34[3], cVar9 != pcVar19[3])) break;
              lVar26 = lVar26 + -3;
              pcVar19 = pcVar19 + 3;
              pcVar34 = pcVar34 + 3;
              if (cVar9 == '\0') goto LAB_00b3934c;
            }
          }
          uVar13 = 0x2a;
          if ((int)uVar18 < 0x2a) {
            uVar13 = uVar18 + 1;
          }
          uVar18 = uVar13;
        } while (uVar13 != 0x2a);
        if (((uint)local_280[0] != 0) && ((uint)local_280[0] < 0x2a)) {
          uVar20 = (ulong)((uint)local_280[0] >> 3) & 0x1ffffffc;
          *(uint *)((long)local_70 + uVar20) =
               *(uint *)((long)local_70 + uVar20) | 1 << (ulong)((uint)local_280[0] & 0x1f);
        }
      }
      puVar29 = puVar29 + 1;
    } while (puVar29 != puVar4);
  }
  puVar24 = PTR_DAT_04bb27c0;
  local_80 = (long *)0x0;
  local_78 = 0x10000;
  lVar26 = *(long *)PTR_DAT_04bb27c0;
  if (lVar26 == 0) {
LAB_00b39488:
    local_78._0_3_ = (uint3)(ushort)local_78;
  }
  else {
    uVar18 = *(uint *)(param_1 + 0x1b8);
    if ((((uVar18 == 0) ||
         (plVar28 = *(long **)(*(long *)(*(long *)(lVar26 + 0x1c0) + 8) +
                              ((ulong)(uVar18 >> 0x11) & 0x7ff8)), plVar28 == (long *)0x0)) ||
        ((*(uint *)(plVar28 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar28 + 0x46) != uVar18)) {
      plVar28 = (long *)0x0;
    }
    local_80 = plVar28;
    if (*(int *)(lVar26 + 0x288) == 1 || *(int *)(lVar26 + 0x288) == -1) {
      plVar16 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar26 = *(long *)puVar24;
      iVar12 = (**(code **)(*plVar16 + 0x60))();
      if ((0x10 < iVar12) &&
         ((4 < *(uint *)(lVar26 + 0x5e8) ||
          ((1 << (ulong)(*(uint *)(lVar26 + 0x5e8) & 0x1f) & 0x1aU) == 0)))) goto LAB_00b39438;
    }
    else {
LAB_00b39438:
      local_78._0_3_ = (uint3)(ushort)local_78;
    }
    if (plVar28 != (long *)0x0) {
      local_78 = CONCAT22(local_78._2_2_,
                          CONCAT11((char)(*(uint *)(plVar28 + 0x49) >> 4),(int)plVar28[0x2a] == 1))
                 & 0xffff01ff;
      if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar12 != 0)) {
        *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
      uVar20 = (**(code **)(*plVar28 + 0x20))(plVar28,PTR_DAT_04bb37d0);
      if ((uVar20 & 1) == 0) goto LAB_00b39488;
    }
  }
  if (*(int *)(param_1 + 0x1b8) == 0) {
LAB_00b394c8:
    puVar24 = (undefined *)0x0;
  }
  else {
    if (local_78._2_1_ == '\0') {
      return;
    }
    if (local_80 == (long *)0x0) {
      return;
    }
    if ((9 < *(uint *)(local_80 + 0xa1)) ||
       (lVar26 = (ulong)*(uint *)(local_80 + 0xa1) * 0xba0, puVar24 = &DAT_053fe348 + lVar26,
       (&DAT_053fee41)[lVar26] == '\0')) goto LAB_00b394c8;
  }
  memset(local_280,0,0x200);
  memset(local_480,0,0x200);
  local_53d = 0;
  local_560 = 0x20;
  local_55c[0] = 0;
  local_570[1] = local_55c;
  local_530 = local_524;
  local_570[0] = PTR_DAT_04bb2028 + 0x10;
  local_528 = 0x20;
  local_505 = 0;
  local_524[0] = 0;
  local_538 = local_570[0];
  local_4f0 = 0x20;
  local_4cd = 0;
  local_4ec[0] = 0;
  local_4f8 = local_4ec;
  local_500 = local_570[0];
  local_4b8 = 0x20;
  local_4c0 = local_4b4;
  uVar18 = (uint)((ulong)*(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060) >> 0x20) & 0xff;
  local_4c8 = local_570[0];
  local_495 = 0;
  local_4b4[0] = 0;
  local_578 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  local_6e0 = (undefined *)CONCAT44(local_6e0._4_4_,**(int **)PTR_DAT_04bb3448);
  if (**(int **)PTR_DAT_04bb3448 == 6) {
    if (uVar18 < 5) goto LAB_00b395e8;
    if (uVar18 < 8) goto LAB_00b395f8;
    if (uVar18 < 0xd) goto LAB_00b39608;
    if (uVar18 < 0x11) goto LAB_00b39618;
    bVar11 = 0x13 < uVar18;
LAB_00b39624:
    uVar33 = 3;
    if (bVar11) {
      uVar33 = 4;
    }
  }
  else if (uVar18 < 5) {
LAB_00b395e8:
    uVar33 = 5;
  }
  else if (uVar18 < 8) {
LAB_00b395f8:
    uVar33 = 0;
  }
  else if (uVar18 < 0xc) {
LAB_00b39608:
    uVar33 = 1;
  }
  else {
    if (0xf < uVar18) {
      bVar11 = 0x12 < uVar18;
      goto LAB_00b39624;
    }
LAB_00b39618:
    uVar33 = 2;
  }
  uVar20 = 0;
  uVar18 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  cVar9 = *(char *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x70) + 0xdc);
  cVar10 = *(char *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x70) + 0xdb);
  puVar2 = PTR_DAT_04bb2a08 + 0x10;
  puVar3 = PTR_DAT_04bb2ab0 + 0x10;
  do {
    puVar5 = local_280 + uVar20 * 0x10;
    plVar28 = (long *)0x0;
    local_490[uVar20] = 0;
    puVar21 = local_570[uVar20 * 7 + 1];
    local_280[uVar20 * 0x10 + 0xe] = 0;
    local_280[uVar20 * 0x10 + 0xf] = 0;
    local_280[uVar20 * 0x10 + 0xc] = 0;
    local_280[uVar20 * 0x10 + 0xd] = 0;
    local_280[uVar20 * 0x10 + 10] = 0;
    local_280[uVar20 * 0x10 + 0xb] = 0;
    local_280[uVar20 * 0x10 + 8] = 0;
    local_280[uVar20 * 0x10 + 9] = 0;
    local_280[uVar20 * 0x10 + 6] = 0;
    local_280[uVar20 * 0x10 + 7] = 0;
    local_280[uVar20 * 0x10 + 4] = 0;
    local_280[uVar20 * 0x10 + 5] = 0;
    local_280[uVar20 * 0x10 + 2] = 0;
    local_280[uVar20 * 0x10 + 3] = 0;
    *puVar5 = 0;
    local_280[uVar20 * 0x10 + 1] = 0;
    *puVar21 = 0;
    if (uVar20 < *(uint *)(param_1 + 0x188)) {
      plVar28 = *(long **)(*(long *)(param_1 + 400) + uVar20 * 8);
    }
    if (*(char *)plVar28[1] != '\0') {
      local_6d8 = "/";
      local_6e0 = puVar1;
      (**(code **)(*plVar28 + 0x18))(plVar28);
      lVar26 = 0;
      do {
        if (*(char *)(plVar28[1] + lVar26) == '\0') goto LAB_00b397ec;
        lVar22 = plVar28[1] + lVar26;
        if (*(char *)(lVar22 + 1) == '\0') {
          lVar26 = lVar26 + 1;
          goto LAB_00b397ec;
        }
        if (*(char *)(lVar22 + 2) == '\0') {
          lVar26 = lVar26 + 2;
          goto LAB_00b397ec;
        }
        lVar26 = lVar26 + 3;
      } while (lVar26 != 0x80001);
      lVar26 = 0;
LAB_00b397ec:
      uVar13 = (uint)lVar26;
      (**(code **)(local_6e0 + 0x18))(&local_6e0);
      lVar26 = 0;
      do {
        if (local_6d8[lVar26] == '\0') {
LAB_00b39844:
          uVar13 = uVar13 - (int)lVar26;
          if ((int)uVar13 < 0) goto LAB_00b398dc;
LAB_00b3984c:
          uVar17 = (ulong)uVar13;
          if (0 < (int)lVar26) goto LAB_00b39858;
          goto LAB_00b398ec;
        }
        if (local_6d8[lVar26 + 1] == '\0') {
          lVar26 = lVar26 + 1;
          goto LAB_00b39844;
        }
        if (local_6d8[lVar26 + 2] == '\0') {
          lVar26 = lVar26 + 2;
          uVar13 = uVar13 - (int)lVar26;
          if (-1 < (int)uVar13) goto LAB_00b3984c;
          goto LAB_00b398dc;
        }
        lVar26 = lVar26 + 3;
      } while (lVar26 != 0x80001);
      if ((int)uVar13 < 0) {
LAB_00b398dc:
        uVar13 = 0xffffffff;
      }
      else {
LAB_00b398ec:
        (**(code **)(local_6e0 + 0x18))(&local_6e0);
      }
LAB_00b398fc:
      (**(code **)(*plVar28 + 0x18))(plVar28);
      lVar22 = plVar28[1];
      lVar26 = 0;
      do {
        if (*(char *)(lVar22 + lVar26) == '\0') goto LAB_00b3995c;
        if (*(char *)(lVar22 + lVar26 + 1) == '\0') {
          lVar26 = lVar26 + 1;
          goto LAB_00b3995c;
        }
        if (*(char *)(lVar22 + lVar26 + 2) == '\0') {
          lVar26 = lVar26 + 2;
          goto LAB_00b3995c;
        }
        lVar26 = lVar26 + 3;
      } while (lVar26 != 0x80001);
      lVar26 = 0;
LAB_00b3995c:
      local_6d0 = 0x20;
      local_6ad = 0;
      puVar21 = *(undefined1 **)(PTR_PTR_04bb2238 + 8);
      if ((int)uVar13 < (int)lVar26 && -2 < (int)uVar13) {
        puVar21 = (undefined1 *)(lVar22 + (ulong)(uVar13 + 1));
      }
      local_6d8 = local_6cc;
      if (local_6cc != puVar21) {
        lVar26 = 0;
        do {
          if (puVar21[lVar26] == '\0') {
LAB_00b399d8:
            iVar12 = (int)lVar26;
joined_r0x00b399dc:
            if (0x1f < iVar12) {
              iVar12 = 0x1f;
            }
            goto LAB_00b399e4;
          }
          if (puVar21[lVar26 + 1] == '\0') {
            lVar26 = lVar26 + 1;
            goto LAB_00b399d8;
          }
          if (puVar21[lVar26 + 2] == '\0') {
            iVar12 = (int)lVar26 + 2;
            goto joined_r0x00b399dc;
          }
          lVar26 = lVar26 + 3;
        } while (lVar26 != 0x80001);
        iVar12 = 0;
LAB_00b399e4:
        local_6e0 = puVar2;
        memcpy(local_6cc,puVar21,(long)iVar12);
        local_6cc[iVar12] = 0;
      }
      local_6e0 = PTR_DAT_04bb2028 + 0x10;
      if (((local_78._2_1_ != '\0') && (local_80 != (long *)0x0)) && ((char)local_78 != '\0')) {
        FUN_021d8fe0(&local_6e0,local_80 + 0x7c);
      }
      puVar21 = local_570[uVar20 * 7 + 1];
      (**(code **)(local_6e0 + 0x18))(&local_6e0);
      pcVar34 = local_6d8;
      if (puVar21 != local_6d8) {
        (**(code **)(local_6e0 + 0x18))(&local_6e0);
        lVar26 = 0;
        do {
          if (local_6d8[lVar26] == '\0') goto LAB_00b39abc;
          if (local_6d8[lVar26 + 1] == '\0') {
            lVar26 = lVar26 + 1;
            goto LAB_00b39abc;
          }
          if (local_6d8[lVar26 + 2] == '\0') {
            lVar26 = lVar26 + 2;
            goto LAB_00b39abc;
          }
          lVar26 = lVar26 + 3;
        } while (lVar26 != 0x80001);
        lVar26 = 0;
LAB_00b39abc:
        iVar12 = (int)lVar26;
        if (*(int *)(local_570 + uVar20 * 7 + 2) <= (int)lVar26) {
          iVar12 = *(int *)(local_570 + uVar20 * 7 + 2) + -1;
        }
        memcpy(puVar21,pcVar34,(long)iVar12);
        puVar21[iVar12] = 0;
      }
      puVar8 = PTR_DAT_04bb2718;
      FUN_03d53db0(*(undefined8 *)(*(long *)PTR_DAT_04bb2718 + 0x408),&local_6e0);
      lVar26 = FUN_03d53db0(*(undefined8 *)(*(long *)puVar8 + 0x408),&local_6e0);
      if ((lVar26 != 0) && (uVar13 = *(uint *)(lVar26 + 8), 0 < (int)uVar13)) {
        uVar32 = 0;
        do {
          local_57d = 0;
          local_590 = 0x10;
          local_58c[0] = 0;
          local_5a0 = puVar3;
          puStack_598 = local_58c;
          uVar17 = FUN_01be94e0(&local_5a0,&local_6e0,uVar32);
          if ((uVar17 & 1) != 0) {
            local_5a8 = 0;
            uStack_5b0 = 0;
            local_5c0 = 0;
            uStack_5b8 = 0;
            local_5b7 = 0;
            uStack_5b6 = 0;
            local_5b5 = 0;
            uStack_5b4 = 0;
            local_5b2 = 0;
            FUN_01b970f0(&local_5c0,&local_6e0);
            FUN_01b9735c(&local_5c0,&local_6e0,&local_5a0);
            iVar12 = (int)local_5c0;
            pbVar23 = (byte *)((long)&local_5c0 + 7);
            if ((int)local_5c0 == 1) {
LAB_00b39bac:
              local_5c4 = 0;
              if (*pbVar23 < 0x2a) {
                local_5c4 = (uint)*pbVar23;
              }
            }
            else {
              if ((int)local_5c0 == 2) {
                pbVar23 = (byte *)((long)&uStack_5b4 + 1);
                goto LAB_00b39bac;
              }
              local_5c4 = 0;
            }
            if ((local_70[(int)local_5c4 >> 5] >> (ulong)(local_5c4 & 0x1f) & 1) != 0) {
              bVar6 = local_5b7;
              if ((int)local_5c0 != 1) {
                bVar6 = 0;
              }
              bVar7 = 0;
              if (bVar6 < 0x25) {
                bVar7 = bVar6;
              }
              uVar17 = FUN_00b38c10(&local_578,uVar33,cVar9 != '\0',cVar10 != '\0',bVar7);
              if ((uVar17 & 1) != 0) {
                puVar8 = PTR_DAT_04bb32e0;
                if (*(long *)(param_1 + 8) != 0) {
                  puVar8 = (undefined *)(*(long *)(param_1 + 8) + 0x2a8);
                }
                bVar6 = local_5b5;
                if (iVar12 != 1) {
                  bVar6 = 0;
                }
                bVar7 = 0;
                if (bVar6 < 0xd) {
                  bVar7 = bVar6;
                }
                uVar17 = FUN_00b38de0(&local_80,puVar8,bVar7);
                if (((uVar17 & 1) != 0) && (uVar32 < 0x400)) {
                  lVar26 = (ulong)(uVar32 >> 5) * 4;
                  *(uint *)((long)puVar5 + lVar26) =
                       *(uint *)((long)puVar5 + lVar26) | 1 << (ulong)(uVar32 & 0x1f);
                }
              }
            }
          }
          uVar32 = uVar32 + 1;
        } while (uVar13 != uVar32);
      }
      uVar17 = local_280[uVar20 * 0x10 + 0xd];
      local_480[uVar20 * 0x10 + 0xc] = local_280[uVar20 * 0x10 + 0xc];
      local_480[uVar20 * 0x10 + 0xd] = uVar17;
      uVar17 = local_280[uVar20 * 0x10 + 0xf];
      local_480[uVar20 * 0x10 + 0xe] = local_280[uVar20 * 0x10 + 0xe];
      local_480[uVar20 * 0x10 + 0xf] = uVar17;
      uVar17 = local_280[uVar20 * 0x10 + 9];
      local_480[uVar20 * 0x10 + 8] = local_280[uVar20 * 0x10 + 8];
      local_480[uVar20 * 0x10 + 9] = uVar17;
      uVar17 = local_280[uVar20 * 0x10 + 0xb];
      local_480[uVar20 * 0x10 + 10] = local_280[uVar20 * 0x10 + 10];
      local_480[uVar20 * 0x10 + 0xb] = uVar17;
      uVar17 = local_280[uVar20 * 0x10 + 5];
      local_480[uVar20 * 0x10 + 4] = local_280[uVar20 * 0x10 + 4];
      local_480[uVar20 * 0x10 + 5] = uVar17;
      uVar17 = local_280[uVar20 * 0x10 + 7];
      local_480[uVar20 * 0x10 + 6] = local_280[uVar20 * 0x10 + 6];
      local_480[uVar20 * 0x10 + 7] = uVar17;
      uVar17 = local_280[uVar20 * 0x10 + 1];
      local_480[uVar20 * 0x10] = *puVar5;
      local_480[uVar20 * 0x10 + 1] = uVar17;
      uVar17 = local_280[uVar20 * 0x10 + 3];
      local_480[uVar20 * 0x10 + 2] = local_280[uVar20 * 0x10 + 2];
      local_480[uVar20 * 0x10 + 3] = uVar17;
      uVar13 = FUN_00b3a3f8(puVar5);
      uVar18 = uVar13 + uVar18;
      local_490[uVar20] = uVar13;
    }
    uVar20 = uVar20 + 1;
  } while (uVar20 != 4);
  if (puVar24 != (undefined *)0x0) {
    if ((param_2 & 1) != 0) {
      FUN_0219c5c0(puVar24,local_280,local_570,4);
      puVar24[0x4f5] = 1;
      memcpy(local_480,local_280,0x200);
    }
    if ((param_3 & 1) != 0) {
      if (puVar24[0x4f6] != '\0') {
        lVar26 = *(long *)PTR_DAT_04bb28f8 + 8;
        iVar12 = FUN_00b3a3f8(local_280);
        local_6bd = 0;
        local_6d0 = 0x10;
        local_6cc[0] = 0;
        puVar1 = PTR_DAT_04bb2ab0 + 0x10;
        local_6e0 = puVar1;
        local_6d8 = local_6cc;
        if (0 < iVar12) {
          iVar12 = iVar12 + 1;
          iVar31 = 1;
          do {
            uVar18 = FUN_00b3aac0(local_280,iVar31);
            uVar20 = FUN_01be94e0(&local_6e0,local_570,uVar18);
            if (((uVar20 & 1) == 0) ||
               (uVar20 = FUN_01bf8154(lVar26,local_570,&local_6e0), (uVar20 & 1) == 0)) {
              iVar31 = iVar31 + 1;
            }
            else if (uVar18 < 0x400) {
              lVar22 = (ulong)(uVar18 >> 5) * 4;
              *(uint *)((long)local_280 + lVar22) =
                   *(uint *)((long)local_280 + lVar22) & (1 << (ulong)(uVar18 & 0x1f) ^ 0xffffffffU)
              ;
            }
            iVar12 = iVar12 + -1;
          } while (1 < iVar12);
        }
        iVar12 = FUN_00b3a3f8(local_200);
        local_6d0 = 0x10;
        local_6bd = 0;
        local_6cc[0] = 0;
        local_6e0 = puVar1;
        local_6d8 = local_6cc;
        if (0 < iVar12) {
          iVar12 = iVar12 + 1;
          iVar31 = 1;
          do {
            uVar18 = FUN_00b3aac0(local_200,iVar31);
            uVar20 = FUN_01be94e0(&local_6e0,&local_538,uVar18);
            if (((uVar20 & 1) == 0) ||
               (uVar20 = FUN_01bf8154(lVar26,&local_538,&local_6e0), (uVar20 & 1) == 0)) {
              iVar31 = iVar31 + 1;
            }
            else if (uVar18 < 0x400) {
              lVar22 = (ulong)(uVar18 >> 5) * 4;
              *(uint *)((long)local_200 + lVar22) =
                   *(uint *)((long)local_200 + lVar22) & (1 << (ulong)(uVar18 & 0x1f) ^ 0xffffffffU)
              ;
            }
            iVar12 = iVar12 + -1;
          } while (1 < iVar12);
        }
        iVar12 = FUN_00b3a3f8(local_180);
        local_6bd = 0;
        local_6d0 = 0x10;
        local_6cc[0] = 0;
        puVar1 = PTR_DAT_04bb2ab0 + 0x10;
        local_6e0 = puVar1;
        local_6d8 = local_6cc;
        if (0 < iVar12) {
          iVar12 = iVar12 + 1;
          iVar31 = 1;
          do {
            uVar18 = FUN_00b3aac0(local_180,iVar31);
            uVar20 = FUN_01be94e0(&local_6e0,&local_500,uVar18);
            if (((uVar20 & 1) == 0) ||
               (uVar20 = FUN_01bf8154(lVar26,&local_500,&local_6e0), (uVar20 & 1) == 0)) {
              iVar31 = iVar31 + 1;
            }
            else if (uVar18 < 0x400) {
              lVar22 = (ulong)(uVar18 >> 5) * 4;
              *(uint *)((long)local_180 + lVar22) =
                   *(uint *)((long)local_180 + lVar22) & (1 << (ulong)(uVar18 & 0x1f) ^ 0xffffffffU)
              ;
            }
            iVar12 = iVar12 + -1;
          } while (1 < iVar12);
        }
        iVar12 = FUN_00b3a3f8(local_100);
        local_6d0 = 0x10;
        local_6bd = 0;
        local_6cc[0] = 0;
        local_6e0 = puVar1;
        local_6d8 = local_6cc;
        if (0 < iVar12) {
          iVar12 = iVar12 + 1;
          iVar31 = 1;
          do {
            uVar18 = FUN_00b3aac0(local_100,iVar31);
            uVar20 = FUN_01be94e0(&local_6e0,&local_4c8,uVar18);
            if (((uVar20 & 1) == 0) ||
               (uVar20 = FUN_01bf8154(lVar26,&local_4c8,&local_6e0), (uVar20 & 1) == 0)) {
              iVar31 = iVar31 + 1;
            }
            else if (uVar18 < 0x400) {
              lVar22 = (ulong)(uVar18 >> 5) * 4;
              *(uint *)((long)local_100 + lVar22) =
                   *(uint *)((long)local_100 + lVar22) & (1 << (ulong)(uVar18 & 0x1f) ^ 0xffffffffU)
              ;
            }
            iVar12 = iVar12 + -1;
          } while (1 < iVar12);
        }
      }
      puVar24[0x4f6] = 0;
    }
    uVar13 = FUN_00b3a3f8(local_280);
    local_490[1] = FUN_00b3a3f8(local_200);
    iVar12 = local_490[1] + uVar13;
    uVar18 = FUN_00b3a3f8(local_180);
    local_490[2] = uVar18;
    local_490[3] = FUN_00b3a3f8(local_100);
    uVar18 = iVar12 + uVar18 + local_490[3];
    local_490[0] = uVar13;
    if (uVar18 == 0) {
      local_280[0xc] = local_480[0xc];
      local_280[0xd] = local_480[0xd];
      local_280[0xe] = local_480[0xe];
      local_280[0xf] = local_480[0xf];
      local_280[8] = local_480[8];
      local_280[9] = local_480[9];
      local_280[10] = local_480[10];
      local_280[0xb] = local_480[0xb];
      local_280[4] = local_480[4];
      local_280[5] = local_480[5];
      local_280[6] = local_480[6];
      local_280[7] = local_480[7];
      local_280[0] = local_480[0];
      local_280[1] = local_480[1];
      local_280[2] = local_480[2];
      local_280[3] = local_480[3];
      uVar13 = FUN_00b3a3f8(local_280);
      local_1a0 = local_480[0x1c];
      uStack_198 = local_480[0x1d];
      local_190 = local_480[0x1e];
      uStack_188 = local_480[0x1f];
      local_1c0 = local_480[0x18];
      uStack_1b8 = local_480[0x19];
      local_1b0 = local_480[0x1a];
      uStack_1a8 = local_480[0x1b];
      local_1e0 = local_480[0x14];
      uStack_1d8 = local_480[0x15];
      local_1d0 = local_480[0x16];
      uStack_1c8 = local_480[0x17];
      local_200[0] = local_480[0x10];
      local_200[1] = local_480[0x11];
      local_200[2] = local_480[0x12];
      local_200[3] = local_480[0x13];
      local_490[1] = FUN_00b3a3f8(local_200);
      iVar12 = local_490[1] + uVar13;
      local_120 = local_480[0x2c];
      uStack_118 = local_480[0x2d];
      local_110 = local_480[0x2e];
      uStack_108 = local_480[0x2f];
      local_140 = local_480[0x28];
      uStack_138 = local_480[0x29];
      local_130 = local_480[0x2a];
      uStack_128 = local_480[0x2b];
      local_160 = local_480[0x24];
      uStack_158 = local_480[0x25];
      local_150 = local_480[0x26];
      uStack_148 = local_480[0x27];
      local_180[0] = local_480[0x20];
      local_180[1] = local_480[0x21];
      local_180[2] = local_480[0x22];
      local_180[3] = local_480[0x23];
      uVar18 = FUN_00b3a3f8(local_180);
      local_a0 = local_480[0x3c];
      uStack_98 = local_480[0x3d];
      local_90 = local_480[0x3e];
      uStack_88 = local_480[0x3f];
      local_c0 = local_480[0x38];
      uStack_b8 = local_480[0x39];
      local_b0 = local_480[0x3a];
      uStack_a8 = local_480[0x3b];
      local_e0 = local_480[0x34];
      uStack_d8 = local_480[0x35];
      local_d0 = local_480[0x36];
      uStack_c8 = local_480[0x37];
      local_100[0] = local_480[0x30];
      local_100[1] = local_480[0x31];
      local_100[2] = local_480[0x32];
      local_100[3] = local_480[0x33];
      local_490[2] = uVar18;
      local_490[3] = FUN_00b3a3f8(local_100);
      uVar18 = iVar12 + uVar18 + local_490[3];
      local_490[0] = uVar13;
    }
  }
  uVar32 = puVar15[3];
  uVar13 = *puVar15 ^ *puVar15 << 0xb;
  *puVar15 = puVar15[1];
  puVar15[1] = puVar15[2];
  uVar13 = uVar13 >> 8 ^ uVar32 >> 0x13 ^ uVar13 ^ uVar32;
  puVar15[2] = uVar32;
  puVar15[3] = uVar13;
  uVar13 = (uint)((ulong)uVar13 * (ulong)uVar18 >> 0x20);
  uVar18 = uVar13 - local_490[0];
  if (uVar13 < local_490[0]) {
    lVar26 = 0;
  }
  else {
    uVar13 = uVar18 - local_490[1];
    if (uVar18 < local_490[1]) {
      lVar26 = 1;
    }
    else {
      uVar18 = uVar13 - local_490[2];
      if (uVar13 < local_490[2]) {
        lVar26 = 2;
        goto LAB_00b3a24c;
      }
      if (local_490[3] <= uVar18) {
        return;
      }
      lVar26 = 3;
    }
    uVar13 = uVar18;
  }
LAB_00b3a24c:
  local_6d8 = local_6cc;
  local_5cd = 0;
  local_6cc[0] = 0;
  local_6d0 = 0x100;
  local_6e0 = PTR_DAT_04bb21f8 + 0x10;
  uVar14 = FUN_00b3aac0(local_280 + lVar26 * 0x10,uVar13 + 1);
  ppuVar30 = local_570 + lVar26 * 7;
  uVar20 = FUN_01be94e0(&local_6e0,ppuVar30,uVar14);
  if ((uVar20 & 1) != 0) {
    __dest = *(undefined1 **)(param_1 + 0xc0);
    (**(code **)(*ppuVar30 + 0x18))(ppuVar30);
    puVar21 = local_570[lVar26 * 7 + 1];
    if (__dest != puVar21) {
      (**(code **)(*ppuVar30 + 0x18))(ppuVar30);
      puVar25 = local_570[lVar26 * 7 + 1];
      lVar26 = 0;
      do {
        if (puVar25[lVar26] == '\0') goto LAB_00b3a334;
        if (puVar25[lVar26 + 1] == '\0') {
          lVar26 = lVar26 + 1;
          goto LAB_00b3a334;
        }
        if (puVar25[lVar26 + 2] == '\0') {
          lVar26 = lVar26 + 2;
          goto LAB_00b3a334;
        }
        lVar26 = lVar26 + 3;
      } while (lVar26 != 0x80001);
      lVar26 = 0;
LAB_00b3a334:
      iVar12 = (int)lVar26;
      if (*(int *)(param_1 + 200) <= (int)lVar26) {
        iVar12 = *(int *)(param_1 + 200) + -1;
      }
      memcpy(__dest,puVar21,(long)iVar12);
      __dest[iVar12] = 0;
    }
    (**(code **)(local_6e0 + 0x18))(&local_6e0);
    FUN_038d13f0(param_1 + 0xb8,&DAT_040e92be,local_6d8);
    if ((puVar24 != (undefined *)0x0) && ((param_2 & 1) != 0)) {
      FUN_0219c200(puVar24,ppuVar30,uVar14);
    }
  }
  return;
LAB_00b39858:
  lVar22 = plVar28[1];
  (**(code **)(local_6e0 + 0x18))(&local_6e0);
  uVar32 = (uint)uVar17;
  uVar13 = uVar32;
  if ((char *)(lVar22 + uVar17) == local_6d8) goto LAB_00b398fc;
  pcVar34 = local_6d8;
  lVar27 = lVar26;
  while( true ) {
    lVar27 = lVar27 + -1;
    if (*(char *)(lVar22 + uVar17) != *pcVar34) break;
    if (*(char *)(lVar22 + uVar17) == '\0') goto LAB_00b398fc;
    lVar22 = lVar22 + 1;
    pcVar34 = pcVar34 + 1;
    if (lVar27 == 0) goto LAB_00b398fc;
  }
  uVar17 = uVar17 - 1;
  uVar13 = 0xffffffff;
  if ((int)uVar32 < 1) goto LAB_00b398fc;
  goto LAB_00b39858;
}



/* WARNING: Removing unreachable block (ram,0x026bb33c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_026b9500(uint *param_1,long param_2,int *param_3,int *param_4,byte param_5,uint param_6,
                 uint *param_7)

{
  int *piVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  undefined *puVar7;
  bool bVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  undefined4 uVar19;
  ulong uVar20;
  void *__s;
  uint uVar21;
  uint *puVar22;
  uint *puVar23;
  undefined8 **ppuVar24;
  undefined2 uVar25;
  long lVar26;
  undefined8 *puVar27;
  undefined1 uVar28;
  long lVar29;
  long lVar30;
  undefined1 uVar31;
  uint *puVar32;
  undefined8 uVar33;
  long *plVar34;
  float fVar35;
  float fVar36;
  uint local_c88;
  uint local_c84;
  uint local_c80;
  uint local_c6c;
  uint local_c5c;
  undefined *local_c28;
  ushort local_c20;
  byte local_c1e;
  byte local_c1d;
  uint local_c1c;
  long local_c18;
  uint local_c10;
  uint local_c0c;
  undefined *local_c08;
  char *local_c00;
  uint *local_bf8;
  uint local_4ac;
  uint local_4a8;
  uint local_4a4;
  int local_4a0;
  undefined **local_498;
  undefined *local_490;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 *local_470;
  undefined4 local_468;
  undefined8 *******local_460;
  undefined8 *******local_458;
  undefined4 local_450;
  undefined8 *******local_448 [3];
  undefined8 *******local_430 [3];
  undefined8 *******local_418 [3];
  undefined8 *******local_400 [3];
  undefined8 *******local_3e8 [3];
  undefined8 *******local_3d0 [3];
  undefined8 *******local_3b8 [3];
  undefined8 *******local_3a0 [3];
  undefined8 *******local_388 [3];
  undefined8 *******local_370 [3];
  undefined8 *******local_358 [3];
  undefined8 *******local_340 [3];
  undefined8 *******local_328 [3];
  undefined8 *******local_310 [3];
  undefined8 *******local_2f8 [3];
  undefined8 *******local_2e0 [3];
  undefined8 *******local_2c8 [3];
  undefined8 *******local_2b0 [3];
  undefined8 *******local_298 [3];
  undefined8 *******local_280 [3];
  undefined8 *******local_268 [3];
  undefined8 *******local_250 [3];
  undefined8 *******local_238 [3];
  undefined8 *******local_220 [3];
  undefined8 *******local_208 [3];
  undefined8 *******local_1f0 [3];
  undefined8 *******local_1d8 [3];
  undefined8 *******local_1c0 [3];
  undefined8 *******local_1a8 [3];
  undefined8 ******local_190 [3];
  undefined8 *****local_178 [3];
  undefined8 ****local_160 [3];
  undefined8 ***local_148 [3];
  undefined8 **local_130 [3];
  undefined8 *local_118 [3];
  undefined8 local_100 [3];
  uint local_e8;
  uint local_e4;
  ushort local_e0 [2];
  ushort local_dc [2];
  undefined8 local_d8;
  uint local_d0;
  byte local_cc [4];
  undefined **local_c8;
  undefined **ppuStack_c0;
  byte *local_b8;
  
  plVar34 = (long *)PTR_DAT_04bb43c0;
  local_cc[0] = param_5;
  if ((param_5 & 1) != 0) {
    lVar29 = *(long *)PTR_DAT_04bb43c0;
    uVar10 = FUN_0277d6c4(param_7);
    lVar26 = *plVar34;
    if (lVar26 != 0) {
      lVar29 = *(long *)(lVar29 + 0x57e58);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
      if ((uVar10 < *(uint *)(lVar29 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
        local_478 = *(char **)param_7;
        local_470 = (undefined8 *)0x0;
        uVar10 = FUN_0277d6c4(&local_478);
        if (*plVar34 != 0) {
          lVar26 = *(long *)(lVar26 + 0x57e58);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
          if ((uVar10 < *(uint *)(lVar26 + 0x1d8)) &&
             (puVar27 = *(undefined8 **)PTR_DAT_04bb43a8,
             *(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar10 * 8) != 0 &&
             puVar27 != (undefined8 *)0x0)) {
            uVar20 = FUN_0277d6c4(param_7);
            local_470 = (undefined8 *)((long)puVar27 + (uVar20 & 0xffffffff) * 0x23);
            if (0x752 < ((uint)(uVar20 >> 3) & 0x1fffffff)) {
              local_470 = puVar27;
            }
          }
        }
        iVar11 = FUN_007b0ea4(&local_478,param_3 + 1);
        local_498 = (undefined **)CONCAT44(local_498._4_4_,iVar11);
        if (iVar11 != 4) {
          if (*param_3 == 0x13) {
            bVar8 = true;
          }
          else {
            if ((*param_3 != 0x19) || ((*param_4 != 0x10 && (*param_4 != 9)))) goto LAB_026bb71c;
            local_c00 = *(char **)param_7;
            lVar26 = *plVar34;
            local_bf8 = (uint *)0x0;
            local_c08 = PTR_DAT_04bc0510 + 0x10;
            uVar10 = FUN_0277d6c4(&local_c00);
            if (*plVar34 != 0) {
              lVar26 = *(long *)(lVar26 + 0x57e58);
              uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
              if ((uVar10 < *(uint *)(lVar26 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                lVar26 = *(long *)PTR_DAT_04bc0428;
                uVar10 = FUN_0277d6c4(param_7);
                uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
                if (uVar10 < *(uint *)(lVar26 + 0x1d8)) {
                  puVar32 = *(uint **)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar10 * 8);
                  if (puVar32 != (uint *)0x0) {
                    local_bf8 = puVar32;
                  }
                }
              }
            }
            local_c8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
            ppuStack_c0 = (undefined **)0x406845d;
            uVar10 = FUN_02749340(param_2 + 0x1267c,&local_c8);
            uVar20 = (ulong)uVar10;
            if (3 < uVar10) {
              uVar20 = 0;
            }
            iVar11 = FUN_01ae3210(&local_c08);
            local_c8 = (undefined **)CONCAT44(local_c8._4_4_,iVar11);
            bVar8 = iVar11 == *(int *)(PTR_DAT_04bc3608 + uVar20 * 4);
            if (*param_3 != 0x13) {
              if (iVar11 == *(int *)(PTR_DAT_04bc3608 + uVar20 * 4)) goto LAB_026bb71c;
              goto LAB_026b963c;
            }
          }
          local_c00 = *(char **)param_7;
          lVar26 = *plVar34;
          local_bf8 = (uint *)0x0;
          local_c08 = PTR_DAT_04bc0510 + 0x10;
          uVar10 = FUN_0277d6c4(&local_c00);
          if (*plVar34 != 0) {
            lVar26 = *(long *)(lVar26 + 0x57e58);
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
            if ((uVar10 < *(uint *)(lVar26 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
              lVar26 = *(long *)PTR_DAT_04bc0428;
              uVar10 = FUN_0277d6c4(param_7);
              uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
              if (uVar10 < *(uint *)(lVar26 + 0x1d8)) {
                puVar32 = *(uint **)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar10 * 8);
                if (puVar32 != (uint *)0x0) {
                  local_bf8 = puVar32;
                }
              }
            }
          }
          uVar19 = FUN_01ae3210(&local_c08);
          local_c8 = (undefined **)CONCAT44(local_c8._4_4_,uVar19);
          iVar11 = FUN_01ae3bc0(&local_c08);
          local_c28 = (undefined *)CONCAT44(local_c28._4_4_,iVar11);
          if ((((int)local_c8 == param_3[0xc]) || ((int)local_c8 == param_3[0xd])) ||
             (iVar11 == param_3[0xc])) {
            if (bVar8) goto LAB_026bb71c;
          }
          else {
            bVar6 = false;
            if (iVar11 == param_3[0xd]) {
              bVar6 = bVar8;
            }
            if (bVar6) {
LAB_026bb71c:
              uVar10 = param_7[1];
              *param_1 = *param_7;
              param_1[1] = uVar10;
              return;
            }
          }
        }
      }
    }
  }
LAB_026b963c:
  local_d0 = 0;
  local_d8 = 0xfffe;
  FUN_0277d4ac(&local_d8);
  bVar8 = false;
  if (*param_3 == 0) {
    if (DAT_05594b4c == '\x01') {
      uVar10 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      uVar10 = uVar10 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar10 ^ DAT_05582b7c;
      DAT_05582b78 = DAT_05582b7c;
      DAT_05582b7c = uVar10;
    }
    else {
      uVar10 = nn::os::GetSystemTick();
      uVar14 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
      uVar10 = uVar14 ^ uVar14 * 0x800;
      uVar14 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 2;
      uVar14 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 3;
      uVar14 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 4;
      uVar10 = uVar10 >> 8 ^ uVar14 >> 0x13 ^ uVar10 ^ uVar14;
    }
    bVar8 = (uint)((ulong)uVar10 * 100 >> 0x20) < 10;
  }
  uVar9 = FUN_021d7d60(param_2);
  iVar11 = *param_4;
  if (iVar11 == 0x12) {
    local_d8 = *(undefined8 *)(param_2 + 0x12618);
    local_d0 = local_d0 | 0xfe000;
  }
  else if (iVar11 == 0x10) {
    if (bVar8) {
      FUN_026942fc(&local_478,param_2,0);
      lVar26 = *plVar34;
      uVar10 = FUN_0277d6c4(&local_478);
      puVar2 = PTR_DAT_04bb3128;
      if (*plVar34 != 0) {
        lVar26 = *(long *)(lVar26 + 0x57e58);
        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
        if ((uVar10 < *(uint *)(lVar26 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
          if (((*PTR_DAT_04bb3128 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar11 != 0)) {
            FUN_00706e58(PTR_DAT_04bb3120);
            __cxa_guard_release(PTR_DAT_04bb3128);
          }
          puVar7 = PTR_DAT_04bb3120;
          if (0 < (int)*(uint *)PTR_DAT_04bb3120) {
            uVar20 = 0;
            do {
              if (*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar20 * 4) == 0xd) goto LAB_026b9a1c;
              uVar20 = uVar20 + 1;
            } while (*(uint *)PTR_DAT_04bb3120 != uVar20);
          }
          uVar20 = 0;
LAB_026b9a1c:
          local_c28 = (undefined *)((ulong)local_c28 & 0xffffffffffff0000);
          if (((*puVar2 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar11 != 0))
          {
            FUN_00706e58(PTR_DAT_04bb3120);
            __cxa_guard_release(PTR_DAT_04bb3128);
          }
          uVar10 = (uint)uVar20;
          if (*(uint *)puVar7 <= uVar10) {
            uVar10 = 0;
          }
          uVar25 = (undefined2)local_478;
          uVar28 = local_478._2_1_;
          uVar31 = local_478._3_1_;
          local_c08 = PTR_DAT_04bc0510 + 0x10;
          uVar14 = local_478._4_4_;
          lVar26 = *plVar34;
          local_c00 = local_478;
          local_bf8 = (uint *)0x0;
          local_c28 = (undefined *)
                      CONCAT62(local_c28._2_6_,
                               uVar9 & 0x7f |
                               (ushort)(*(int *)(*(long *)(puVar7 + 8) + (long)(int)uVar10 * 4) <<
                                       0xb));
          uVar10 = FUN_0277d6c4(&local_c00);
          if (*plVar34 == 0) {
LAB_026bb5dc:
            FUN_007ef010(local_e0,&local_c28);
            uVar9 = 0xbc;
          }
          else {
            lVar26 = *(long *)(lVar26 + 0x57e58);
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
            if ((*(uint *)(lVar26 + 0x1d8) <= uVar10) ||
               (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar10 * 8) == 0))
            goto LAB_026bb5dc;
            lVar26 = *(long *)PTR_DAT_04bc0428;
            uVar10 = FUN_0277d6c4(&local_478);
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
            if ((*(uint *)(lVar26 + 0x1d8) <= uVar10) ||
               (puVar32 = *(uint **)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar10 * 8),
               puVar32 == (uint *)0x0)) goto LAB_026bb5dc;
            FUN_007ef010(local_e0,&local_c28);
            uVar9 = 0;
            uVar10 = *puVar32;
            if ((uVar10 != 0) && (puVar32 != (uint *)(ulong)uVar10)) {
              puVar23 = (uint *)((long)puVar32 - (long)(ulong)uVar10);
              uVar9 = 0;
              if (*puVar23 != 0) {
                uVar10 = puVar23[1];
                if ((uVar10 != 0) && ((ulong)(ushort)puVar23[2] != 0)) {
                  lVar26 = 0xc;
                  if (*(char *)((long)puVar23 + 10) != '\0') {
                    lVar26 = 0x1c;
                  }
                  lVar26 = (long)puVar23 + lVar26 + (ulong)(ushort)puVar23[2] * 8;
                  if (lVar26 != 0) {
                    uVar12 = 0;
                    if ((ulong)uVar10 != 0) {
                      uVar12 = (uint)((ulong)((long)puVar32 - lVar26) / (ulong)uVar10);
                    }
                    if (*puVar23 <= uVar12) {
                      uVar12 = 0xffffffff;
                    }
                    if ((uVar12 < *(uint *)PTR_DAT_04bc00c8) &&
                       (uVar9 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar12 * 2)
                       , uVar9 < 0xbd)) goto LAB_026bb5f4;
                  }
                }
                uVar9 = 0;
              }
            }
          }
LAB_026bb5f4:
          local_dc[0] = local_e0[0];
LAB_026bb604:
          uVar10 = uVar14 & 0xffff0000 | (uint)local_dc[0];
          if (uVar9 != 0xac) {
            uVar10 = uVar14;
          }
          *(undefined2 *)param_1 = uVar25;
          *(undefined1 *)((long)param_1 + 2) = uVar28;
          *(undefined1 *)((long)param_1 + 3) = uVar31;
          param_1[1] = uVar10;
          return;
        }
      }
    }
    local_d8 = *(undefined8 *)(param_2 + 0x12644);
    local_d0 = local_d0 | 0x1ffe;
  }
  else if (iVar11 == 9) {
    if (bVar8) {
      FUN_026942fc(&local_478,param_2,1);
      lVar26 = *plVar34;
      uVar10 = FUN_0277d6c4(&local_478);
      puVar2 = PTR_DAT_04bb3128;
      if (*plVar34 != 0) {
        lVar26 = *(long *)(lVar26 + 0x57e58);
        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
        if ((uVar10 < *(uint *)(lVar26 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
          if (((*PTR_DAT_04bb3128 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar11 != 0)) {
            FUN_00706e58(PTR_DAT_04bb3120);
            __cxa_guard_release(PTR_DAT_04bb3128);
          }
          puVar7 = PTR_DAT_04bb3120;
          if (0 < (int)*(uint *)PTR_DAT_04bb3120) {
            uVar20 = 0;
            do {
              if (*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar20 * 4) == 0xd) goto LAB_026b97dc;
              uVar20 = uVar20 + 1;
            } while (*(uint *)PTR_DAT_04bb3120 != uVar20);
          }
          uVar20 = 0;
LAB_026b97dc:
          local_c28 = (undefined *)((ulong)local_c28 & 0xffffffffffff0000);
          if (((*puVar2 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar11 != 0))
          {
            FUN_00706e58(PTR_DAT_04bb3120);
            __cxa_guard_release(PTR_DAT_04bb3128);
          }
          uVar10 = (uint)uVar20;
          if (*(uint *)puVar7 <= uVar10) {
            uVar10 = 0;
          }
          uVar25 = (undefined2)local_478;
          uVar28 = local_478._2_1_;
          uVar31 = local_478._3_1_;
          local_c08 = PTR_DAT_04bc0510 + 0x10;
          uVar14 = local_478._4_4_;
          lVar26 = *plVar34;
          local_c00 = local_478;
          local_bf8 = (uint *)0x0;
          local_c28 = (undefined *)
                      CONCAT62(local_c28._2_6_,
                               uVar9 & 0x7f |
                               (ushort)(*(int *)(*(long *)(puVar7 + 8) + (long)(int)uVar10 * 4) <<
                                       0xb));
          uVar10 = FUN_0277d6c4(&local_c00);
          if (*plVar34 != 0) {
            lVar26 = *(long *)(lVar26 + 0x57e58);
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
            if ((uVar10 < *(uint *)(lVar26 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
              lVar26 = *(long *)PTR_DAT_04bc0428;
              uVar10 = FUN_0277d6c4(&local_478);
              uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
              if ((uVar10 < *(uint *)(lVar26 + 0x1d8)) &&
                 (puVar32 = *(uint **)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar10 * 8),
                 puVar32 != (uint *)0x0)) {
                FUN_007ef010(local_dc,&local_c28);
                uVar9 = 0;
                uVar10 = *puVar32;
                if ((uVar10 != 0) && (puVar32 != (uint *)(ulong)uVar10)) {
                  puVar23 = (uint *)((long)puVar32 - (long)(ulong)uVar10);
                  uVar9 = 0;
                  if (*puVar23 != 0) {
                    uVar10 = puVar23[1];
                    if ((uVar10 != 0) && ((ulong)(ushort)puVar23[2] != 0)) {
                      lVar26 = 0xc;
                      if (*(char *)((long)puVar23 + 10) != '\0') {
                        lVar26 = 0x1c;
                      }
                      lVar26 = (long)puVar23 + lVar26 + (ulong)(ushort)puVar23[2] * 8;
                      if (lVar26 != 0) {
                        uVar12 = 0;
                        if ((ulong)uVar10 != 0) {
                          uVar12 = (uint)((ulong)((long)puVar32 - lVar26) / (ulong)uVar10);
                        }
                        if (*puVar23 <= uVar12) {
                          uVar12 = 0xffffffff;
                        }
                        if ((uVar12 < *(uint *)PTR_DAT_04bc00c8) &&
                           (uVar9 = *(ushort *)
                                     (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar12 * 2),
                           uVar9 < 0xbd)) goto LAB_026bb604;
                      }
                    }
                    uVar9 = 0;
                  }
                }
                goto LAB_026bb604;
              }
            }
          }
          FUN_007ef010(local_dc,&local_c28);
          uVar9 = 0xbc;
          goto LAB_026bb604;
        }
      }
    }
    local_d8 = *(undefined8 *)(param_2 + 0x125ec);
  }
  fVar35 = 0.0;
  ppuVar24 = &local_470;
  local_e8 = *(uint *)PTR_DAT_04bb37e0;
  local_e4 = *(uint *)(PTR_DAT_04bb37e0 + 4);
  if ((*param_4 == 9) && ((char)param_3[0x12] != '\0')) {
    piVar1 = param_3 + 7;
    uVar20 = FUN_0277d7b4(param_2 + 0x1094c,piVar1);
    if ((((((uVar20 & 1) == 0) &&
          (((((uVar20 = FUN_0277d7b4(param_2 + 0x10978,piVar1), (uVar20 & 1) == 0 &&
              (uVar20 = FUN_0277d7b4(param_2 + 0x109a4,piVar1), (uVar20 & 1) == 0)) &&
             (uVar20 = FUN_0277d7b4(param_2 + 0x109d0,piVar1), (uVar20 & 1) == 0)) &&
            ((uVar20 = FUN_0277d7b4(param_2 + 0x109fc,piVar1), (uVar20 & 1) == 0 &&
             (uVar20 = FUN_0277d7b4(param_2 + 0x10a28,piVar1), (uVar20 & 1) == 0)))) &&
           (uVar20 = FUN_0277d7b4(param_2 + 0x10a54,piVar1), (uVar20 & 1) == 0)))) &&
         (((uVar20 = FUN_0277d7b4(param_2 + 0x10a80,piVar1), (uVar20 & 1) == 0 &&
           (uVar20 = FUN_0277d7b4(param_2 + 0x10aac,piVar1), (uVar20 & 1) == 0)) &&
          (uVar20 = FUN_0277d7b4(param_2 + 0x10ad8,piVar1), (uVar20 & 1) == 0)))) &&
        (((((uVar20 = FUN_0277d7b4(param_2 + 0x10b04,piVar1), (uVar20 & 1) == 0 &&
            (uVar20 = FUN_0277d7b4(param_2 + 0x10b30,piVar1), (uVar20 & 1) == 0)) &&
           (uVar20 = FUN_0277d7b4(param_2 + 0x10b5c,piVar1), (uVar20 & 1) == 0)) &&
          ((uVar20 = FUN_0277d7b4(param_2 + 0x10b88,piVar1), (uVar20 & 1) == 0 &&
           (uVar20 = FUN_0277d7b4(param_2 + 0x10bb4,piVar1), (uVar20 & 1) == 0)))) &&
         ((uVar20 = FUN_0277d7b4(param_2 + 0x10be0,piVar1), (uVar20 & 1) == 0 &&
          ((uVar20 = FUN_0277d7b4(param_2 + 0x10c0c,piVar1), (uVar20 & 1) == 0 &&
           (uVar20 = FUN_0277d7b4(param_2 + 0x10c38,piVar1), (uVar20 & 1) == 0)))))))) &&
       (((uVar20 = FUN_0277d7b4(param_2 + 0x10c64,piVar1), (uVar20 & 1) == 0 &&
         (((uVar20 = FUN_0277d7b4(param_2 + 0x10c90,piVar1), (uVar20 & 1) == 0 &&
           (uVar20 = FUN_0277d7b4(param_2 + 0x10cbc,piVar1), (uVar20 & 1) == 0)) &&
          (uVar20 = FUN_0277d7b4(param_2 + 0x10ce8,piVar1), (uVar20 & 1) == 0)))) &&
        ((uVar20 = FUN_0277d7b4(param_2 + 0x10d14,piVar1), (uVar20 & 1) == 0 &&
         (uVar20 = FUN_0277d7b4(param_2 + 0x10d40,piVar1), (uVar20 & 1) == 0)))))) {
      fVar35 = (float)FUN_021df720(piVar1,param_3,local_cc[0],0,0,0);
      local_e8 = param_3[7];
      local_e4 = param_3[8];
    }
  }
  local_478 = (char *)&local_478;
  local_468 = 0;
  local_448[0] = local_430;
  local_430[0] = local_418;
  local_418[0] = local_400;
  puVar32 = (uint *)(param_2 + 0x1094c);
  local_3e8[0] = local_3d0;
  local_460 = local_448;
  local_3b8[0] = local_3a0;
  local_388[0] = local_370;
  local_358[0] = local_340;
  local_400[0] = local_3e8;
  local_328[0] = local_310;
  local_2f8[0] = local_2e0;
  local_3d0[0] = local_3b8;
  local_2c8[0] = local_2b0;
  local_298[0] = local_280;
  local_3a0[0] = local_388;
  local_268[0] = local_250;
  local_250[0] = local_238;
  local_370[0] = local_358;
  local_238[0] = local_220;
  local_220[0] = local_208;
  local_340[0] = local_328;
  local_208[0] = local_1f0;
  local_1f0[0] = local_1d8;
  local_310[0] = local_2f8;
  local_1d8[0] = local_1c0;
  local_1c0[0] = local_1a8;
  local_2e0[0] = local_2c8;
  local_1a8[0] = local_190;
  local_190[0] = local_178;
  local_2b0[0] = local_298;
  local_178[0] = local_160;
  local_160[0] = local_148;
  local_280[0] = local_268;
  local_148[0] = local_130;
  local_130[0] = local_118;
  local_118[0] = local_100;
  local_100[0] = 0;
  local_450 = 0x24;
  local_470 = (undefined8 *)local_478;
  local_458 = local_460;
  FUN_02694430(param_2,&local_478);
  puVar7 = PTR_DAT_04bc01a0;
  lVar26 = param_2 + 0x1267c;
  local_c6c = 0xffffffff;
  uVar10 = 0;
  iVar11 = 0;
  puVar2 = PTR_DAT_04bc0510 + 0x10;
  ppuVar3 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  do {
    lVar30 = *plVar34;
    puVar23 = puVar32 + (long)iVar11 * 0xb;
    uVar12 = FUN_0277d6c4(puVar23);
    lVar29 = *plVar34;
    uVar14 = local_c6c;
    if (lVar29 != 0) {
      lVar30 = *(long *)(lVar30 + 0x57e58);
      uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
      if ((uVar12 < *(uint *)(lVar30 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
        puVar27 = local_470;
        if (local_470 + -1 != &uStack_480) {
          do {
            uVar20 = FUN_0277d7b4(puVar23);
            if ((uVar20 & 1) != 0) goto LAB_026b9fc4;
            puVar27 = (undefined8 *)puVar27[1];
          } while (puVar27 + -1 != &uStack_480);
          lVar29 = *plVar34;
        }
        local_bf8 = (uint *)0x0;
        local_c00 = *(char **)puVar23;
        local_c08 = puVar2;
        uVar12 = FUN_0277d6c4(&local_c00);
        if (*plVar34 != 0) {
          lVar29 = *(long *)(lVar29 + 0x57e58);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
          if ((uVar12 < *(uint *)(lVar29 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
            lVar29 = *(long *)PTR_DAT_04bc0428;
            uVar12 = FUN_0277d6c4(puVar23);
            uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
            if (uVar12 < *(uint *)(lVar29 + 0x1d8)) {
              puVar22 = *(uint **)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar12 * 8);
              if (puVar22 != (uint *)0x0) {
                local_bf8 = puVar22;
              }
            }
          }
        }
        if (*param_4 == 9) {
          if (local_bf8 == (uint *)0x0) {
            uVar12 = 0xbc;
          }
          else {
            uVar21 = *local_bf8;
            uVar12 = 0;
            if ((uVar21 != 0) && (local_bf8 != (uint *)(ulong)uVar21)) {
              puVar22 = (uint *)((long)local_bf8 - (long)(ulong)uVar21);
              if ((*puVar22 != 0) &&
                 ((uVar12 = puVar22[1], uVar12 != 0 && ((ulong)(ushort)puVar22[2] != 0)))) {
                lVar29 = 0xc;
                if (*(char *)((long)puVar22 + 10) != '\0') {
                  lVar29 = 0x1c;
                }
                lVar29 = (long)puVar22 + lVar29 + (ulong)(ushort)puVar22[2] * 8;
                if (lVar29 != 0) {
                  uVar21 = 0;
                  if ((ulong)uVar12 != 0) {
                    uVar21 = (uint)((ulong)((long)local_bf8 - lVar29) / (ulong)uVar12);
                  }
                  if (*puVar22 <= uVar21) {
                    uVar21 = 0xffffffff;
                  }
                  if ((uVar21 < *(uint *)PTR_DAT_04bc00c8) &&
                     (uVar9 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar21 * 2),
                     uVar12 = (uint)uVar9, uVar9 < 0xbd)) goto LAB_026ba238;
                }
              }
              uVar12 = 0;
            }
          }
LAB_026ba238:
          uVar20 = FUN_01ad9cb4(&local_c08);
          FUN_01ad9cb4(&local_c08);
          if (((uVar20 & 1) == 0) && (0xfffffffd < uVar12 - 0xb)) goto LAB_026ba260;
        }
        else {
          if (local_bf8 == (uint *)0x0) {
LAB_026ba210:
            uVar21 = 0;
          }
          else {
            uVar12 = *local_bf8;
            uVar21 = 0;
            if ((uVar12 != 0) && (local_bf8 != (uint *)(ulong)uVar12)) {
              puVar22 = (uint *)((long)local_bf8 - (long)(ulong)uVar12);
              uVar21 = 0;
              if (*puVar22 != 0) {
                uVar12 = puVar22[1];
                if ((uVar12 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
                  lVar29 = 0xc;
                  if (*(char *)((long)puVar22 + 10) != '\0') {
                    lVar29 = 0x1c;
                  }
                  lVar29 = (long)puVar22 + lVar29 + (ulong)(ushort)puVar22[2] * 8;
                  if (lVar29 != 0) {
                    uVar21 = 0;
                    if ((ulong)uVar12 != 0) {
                      uVar21 = (uint)((ulong)((long)local_bf8 - lVar29) / (ulong)uVar12);
                    }
                    if (*puVar22 <= uVar21) {
                      uVar21 = 0xffffffff;
                    }
                    if ((uVar21 < *(uint *)puVar7) &&
                       (uVar21 = (uint)*(ushort *)(*(long *)(puVar7 + 8) + (long)(int)uVar21 * 2),
                       uVar21 < 0x15)) goto LAB_026ba214;
                  }
                }
                goto LAB_026ba210;
              }
            }
          }
LAB_026ba214:
          local_c8 = (undefined **)CONCAT44(local_c8._4_4_,uVar21);
          if ((uVar21 < 0x15) && ((local_d0 >> (ulong)(uVar21 & 0x1f) & 1) != 0)) {
LAB_026ba260:
            if ((((*(char *)((long)param_3 + 0x49) == '\0') ||
                 (puVar32[(long)iVar11 * 0xb + 2] == 0)) ||
                ((param_3[0x13] != 0 &&
                 ((param_3[0x13] != puVar32[(long)iVar11 * 0xb + 2] ||
                  ((*(long *)(puVar32 + (long)iVar11 * 0xb + 3) != *(long *)(param_3 + 0x14) ||
                   *(long *)(puVar32 + (long)iVar11 * 0xb + 5) != *(long *)(param_3 + 0x16)) ||
                   puVar32[(long)iVar11 * 0xb + 7] != param_3[0x18])))))) ||
               ((puVar32[(long)iVar11 * 0xb + 9] != 6 && (puVar32[(long)iVar11 * 0xb + 9] != 1)))) {
              bVar8 = false;
              uVar33 = 0;
            }
            else {
              uVar33 = 1;
              bVar8 = *(char *)((long)puVar32 + (long)iVar11 * 0x2c + 0x29) != '\0';
            }
            iVar13 = *param_3;
            if (iVar13 == 0x19) {
              if ((*param_4 == 0x10) || (*param_4 == 9)) {
                ppuStack_c0 = (undefined **)0x406845d;
                local_c8 = ppuVar3;
                uVar12 = FUN_02749340(lVar26,&local_c8);
                uVar20 = (ulong)uVar12;
                if (3 < uVar12) {
                  uVar20 = 0;
                }
                iVar13 = FUN_01ae3210(&local_c08);
                local_c8 = (undefined **)CONCAT44(local_c8._4_4_,iVar13);
                if (iVar13 != *(int *)(PTR_DAT_04bc3608 + uVar20 * 4)) goto LAB_026b9fc4;
                iVar13 = *param_3;
                goto LAB_026ba380;
              }
            }
            else {
LAB_026ba380:
              if ((iVar13 == 0x13) && ((*param_4 == 0x10 || (*param_4 == 9)))) {
                local_c8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
                ppuStack_c0 = (undefined **)0x406845d;
                FUN_02749340(lVar26,&local_c8);
                iVar13 = FUN_01ae3210(&local_c08);
                local_c8 = (undefined **)CONCAT44(local_c8._4_4_,iVar13);
                if (iVar13 != param_3[0xc]) {
                  iVar13 = FUN_01ae3210(&local_c08);
                  local_498 = (undefined **)CONCAT44(local_498._4_4_,iVar13);
                  if (iVar13 != param_3[0xd]) {
                    iVar13 = FUN_01ae3bc0(&local_c08);
                    local_c28 = (undefined *)CONCAT44(local_c28._4_4_,iVar13);
                    if ((iVar13 != param_3[0xc]) &&
                       (local_c10 = FUN_01ae3bc0(&local_c08), local_c10 != param_3[0xd]))
                    goto LAB_026b9fc4;
                  }
                }
              }
            }
            fVar36 = (float)FUN_021df720(puVar23,param_3,local_cc[0],uVar33,bVar8,0);
            if (DAT_05594b4c == '\x01') {
              uVar14 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
              DAT_05582b70 = DAT_05582b74;
              DAT_05582b74 = DAT_05582b78;
              uVar12 = uVar14 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar14 ^ DAT_05582b7c;
              DAT_05582b78 = DAT_05582b7c;
              DAT_05582b7c = uVar12;
            }
            else {
              uVar14 = nn::os::GetSystemTick();
              uVar12 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
              uVar14 = uVar12 ^ uVar12 * 0x800;
              uVar12 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 2;
              uVar12 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 3;
              uVar12 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 4;
              uVar12 = uVar14 >> 8 ^ uVar12 >> 0x13 ^ uVar14 ^ uVar12;
            }
            fVar35 = fVar35 + fVar36;
            uVar14 = uVar10;
            if (fVar36 <= fVar35 * ((float)(uVar12 >> 9 | 0x3f800000) + -1.0)) {
              uVar14 = local_c6c;
            }
          }
        }
      }
    }
LAB_026b9fc4:
    local_c6c = uVar14;
    uVar10 = uVar10 + 1;
    iVar11 = iVar11 + 1;
  } while (uVar10 != 0x18);
  if ((-1 < (int)local_c6c) || ((param_6 & 1) == 0)) goto LAB_026bb364;
  local_c08 = PTR_DAT_04bb2020 + 0x10;
  local_c00 = "CarnivalFeatherColor";
  uVar10 = FUN_02749340(lVar26,&local_c08);
  local_498 = &PTR_FUN_04a88458;
  local_490 = PTR_DAT_04bc3608 + (ulong)uVar10 * 4;
  if (3 < uVar10) {
    local_490 = PTR_DAT_04bc3608;
  }
  local_c08 = PTR_DAT_04bbfe60 + 0x10;
  memset(&local_c00,0,0x754);
  uVar10 = nn::os::GetSystemTick();
  local_4ac = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
  local_4a8 = (local_4ac ^ local_4ac >> 0x1e) * 0x6c078965 + 2;
  local_4a4 = (local_4a8 ^ local_4a8 >> 0x1e) * 0x6c078965 + 3;
  local_4a0 = (local_4a4 ^ local_4a4 >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)(**(code **)(local_c08 + 0x18))(&local_c08);
  memset(__s,0,0x754);
  iVar11 = *param_4;
  if (iVar11 == 0x12) {
    local_c28 = (undefined *)CONCAT44(local_c28._4_4_,0x12);
    ppuStack_c0 = &local_c28;
    local_c8 = &PTR_FUN_049ff448;
    FUN_008a1ba0(&local_c08,&local_c8);
    uVar10 = 0;
    ppuStack_c0 = (undefined **)&local_d0;
    local_c8 = &PTR_FUN_04a884d0;
    do {
      (**(code **)(local_c08 + 0x10))(&local_c28,&local_c08,uVar10);
      lVar26 = (**(code **)(local_c08 + 0x20))(&local_c08);
      uVar14 = 1 << (ulong)(uVar10 & 0x1f);
      if ((*(uint *)(lVar26 + (ulong)(uVar10 >> 5) * 4) & uVar14) != 0) {
        lVar26 = *plVar34;
        uVar12 = FUN_0277d6c4(&local_c28);
        if (*plVar34 != 0) {
          lVar26 = *(long *)(lVar26 + 0x57e58);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
          if (((uVar12 < *(uint *)(lVar26 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) &&
             (uVar20 = (*(code *)*local_c8)(&local_c8,&local_c28), (uVar20 & 1) != 0))
          goto LAB_026ba7b0;
        }
        lVar26 = (**(code **)(local_c08 + 0x18))(&local_c08);
        lVar29 = (ulong)(uVar10 >> 5) * 4;
        *(uint *)(lVar26 + lVar29) = *(uint *)(lVar26 + lVar29) & (uVar14 ^ 0xffffffff);
      }
LAB_026ba7b0:
      uVar10 = uVar10 + 1;
    } while (uVar10 != 15000);
LAB_026bab60:
    uVar10 = 0;
    local_b8 = local_cc;
    local_c8 = &PTR_FUN_04a884f8;
    ppuStack_c0 = (undefined **)param_3;
    do {
      (**(code **)(local_c08 + 0x10))(&local_c28,&local_c08,uVar10);
      lVar26 = (**(code **)(local_c08 + 0x20))(&local_c08);
      uVar14 = 1 << (ulong)(uVar10 & 0x1f);
      if ((*(uint *)(lVar26 + (ulong)(uVar10 >> 5) * 4) & uVar14) != 0) {
        lVar26 = *plVar34;
        uVar12 = FUN_0277d6c4(&local_c28);
        if (*plVar34 != 0) {
          lVar26 = *(long *)(lVar26 + 0x57e58);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
          if (((uVar12 < *(uint *)(lVar26 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) &&
             (uVar20 = (*(code *)*local_c8)(&local_c8,&local_c28), (uVar20 & 1) != 0))
          goto LAB_026babb0;
        }
        lVar26 = (**(code **)(local_c08 + 0x18))(&local_c08);
        lVar29 = (ulong)(uVar10 >> 5) * 4;
        *(uint *)(lVar26 + lVar29) = *(uint *)(lVar26 + lVar29) & (uVar14 ^ 0xffffffff);
      }
LAB_026babb0:
      uVar10 = uVar10 + 1;
      puVar27 = local_470;
    } while (uVar10 != 15000);
    for (; puVar27 + -1 != &uStack_480; puVar27 = (undefined8 *)puVar27[1]) {
      lVar26 = (**(code **)(local_c08 + 0x18))(&local_c08);
      uVar10 = FUN_0277d6c4(puVar27 + -1);
      if ((uVar10 >> 3 & 0x1fff) < 0x753) {
        lVar29 = (ulong)((uVar10 & 0xffff) >> 5) * 4;
        *(uint *)(lVar26 + lVar29) =
             *(uint *)(lVar26 + lVar29) & (1 << (ulong)(uVar10 & 0x1f) ^ 0xffffffffU);
      }
    }
    lVar29 = (**(code **)(local_c08 + 0x20))(&local_c08);
    lVar26 = 0;
    iVar11 = 0;
    do {
      puVar23 = (uint *)(lVar29 + lVar26);
      lVar26 = lVar26 + 4;
      uVar10 = *puVar23 - (*puVar23 >> 1 & 0x55555555);
      uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
      uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f;
      uVar10 = uVar10 + (uVar10 >> 8);
      iVar11 = (uVar10 + (uVar10 >> 0x10) & 0x3f) + iVar11;
    } while (lVar26 != 0x754);
    if (iVar11 != 0) {
      lVar26 = (**(code **)(local_c08 + 0x20))(&local_c08);
      uVar20 = 0;
      do {
        if ((*(uint *)(lVar26 + (uVar20 >> 5) * 4) >> (ulong)((uint)uVar20 & 0x1f) & 1) != 0)
        goto LAB_026bad60;
        uVar10 = (uint)uVar20 + 1;
        uVar20 = (ulong)uVar10;
      } while (uVar10 != 15000);
      uVar20 = 0;
LAB_026bad60:
      lVar29 = (**(code **)(local_c08 + 0x20))(&local_c08);
      uVar10 = 15000;
      do {
        if ((*(uint *)(lVar29 + (ulong)(uVar10 - 1 >> 5) * 4) >> (ulong)(uVar10 - 1 & 0x1f) & 1) !=
            0) break;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      uVar14 = (uint)uVar20;
      if (uVar10 != uVar14) {
        fVar35 = 0.0;
        local_c5c = local_e8 & 0xffff;
        local_c84 = local_e8 >> 0x18;
        puVar2 = PTR_DAT_04bc0510 + 0x10;
        local_c88 = local_e8 >> 0x10 & 0xff;
        local_c80 = local_e4;
LAB_026bae10:
        puVar7 = PTR_DAT_04bb43c0;
        puVar23 = (uint *)(PTR_DAT_04bbfe58 + uVar20 * 8);
        if (0x752 < (uint)(uVar20 >> 3)) {
          puVar23 = (uint *)PTR_DAT_04bbfe58;
        }
        puVar22 = (uint *)PTR_DAT_04bb37e0;
        if ((uint)uVar20 < 0x3a99) {
          puVar22 = puVar23;
        }
        uVar21 = *puVar22;
        bVar4 = *(byte *)((long)puVar22 + 2);
        bVar5 = *(byte *)((long)puVar22 + 3);
        local_c10 = *puVar22;
        uVar12 = puVar22[1];
        local_c18 = 0;
        lVar29 = *(long *)PTR_DAT_04bb43c0;
        local_c28 = puVar2;
        local_c20 = (ushort)uVar21;
        local_c1e = bVar4;
        local_c1d = bVar5;
        local_c1c = uVar12;
        local_c0c = uVar12;
        uVar15 = FUN_0277d6c4(&local_c20);
        if (*(long *)puVar7 != 0) {
          lVar29 = *(long *)(lVar29 + 0x57e58);
          uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
          if ((uVar15 < *(uint *)(lVar29 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
            lVar29 = *(long *)PTR_DAT_04bc0428;
            uVar15 = FUN_0277d6c4(&local_c10);
            uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
            if (uVar15 < *(uint *)(lVar29 + 0x1d8)) {
              lVar29 = *(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar15 * 8);
              if (lVar29 != 0) {
                local_c18 = lVar29;
              }
            }
          }
        }
        iVar11 = param_3[0xc];
        iVar13 = param_3[0xd];
        iVar16 = FUN_01ae3210(&local_c28);
        iVar17 = FUN_01ae3bc0(&local_c28);
        if (iVar16 == iVar17) {
          if (iVar11 == iVar16) {
            fVar36 = 6.0;
            if (iVar11 != iVar13) {
              fVar36 = 4.0;
            }
          }
          else {
            fVar36 = 3.0;
            if (iVar13 != iVar16) {
              fVar36 = 0.0;
            }
          }
        }
        else if (iVar16 == iVar11) {
          fVar36 = 4.0;
          if ((iVar16 != iVar13) && (fVar36 = 5.5, iVar17 != iVar13)) {
            fVar36 = 3.5;
          }
        }
        else if (iVar16 == iVar13) {
          fVar36 = 5.0;
          if (iVar17 != iVar11) {
            fVar36 = 2.5;
          }
        }
        else if (iVar17 == iVar11) {
          fVar36 = 3.0;
          if (iVar17 != iVar13) {
            fVar36 = 2.5;
          }
        }
        else {
          fVar36 = 2.0;
          if (iVar17 != iVar13) {
            fVar36 = 0.0;
          }
        }
        if (fVar35 < fVar36) {
          local_c84 = (uint)bVar5;
          local_c88 = (uint)bVar4;
          local_c5c = (uint)(ushort)uVar21;
          local_c80 = uVar12;
          fVar35 = fVar36;
        }
        do {
          uVar12 = (int)uVar20 + 1;
          uVar20 = (ulong)uVar12;
          if (0x752 < uVar12 >> 3) {
            uVar12 = 0x3a95;
            goto LAB_026bb020;
          }
        } while ((*(uint *)(lVar26 + (ulong)(uVar12 >> 5) * 4) >> (ulong)(uVar12 & 0x1f) & 1) == 0);
        goto LAB_026bae08;
      }
      goto LAB_026bb094;
    }
    goto LAB_026bb364;
  }
  if (iVar11 == 0x10) {
    local_c28 = (undefined *)CONCAT44(local_c28._4_4_,0x10);
    ppuStack_c0 = &local_c28;
    local_c8 = &PTR_FUN_049ff448;
    FUN_008a1ba0(&local_c08,&local_c8);
    uVar10 = 0;
    ppuStack_c0 = (undefined **)&local_d0;
    local_c8 = &PTR_FUN_04a884a8;
    do {
      (**(code **)(local_c08 + 0x10))(&local_c28,&local_c08,uVar10);
      lVar26 = (**(code **)(local_c08 + 0x20))(&local_c08);
      uVar14 = 1 << (ulong)(uVar10 & 0x1f);
      if ((*(uint *)(lVar26 + (ulong)(uVar10 >> 5) * 4) & uVar14) != 0) {
        lVar26 = *plVar34;
        uVar12 = FUN_0277d6c4(&local_c28);
        if (*plVar34 != 0) {
          lVar26 = *(long *)(lVar26 + 0x57e58);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
          if (((uVar12 < *(uint *)(lVar26 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) &&
             (uVar20 = (*(code *)*local_c8)(&local_c8,&local_c28), (uVar20 & 1) != 0))
          goto LAB_026ba8c0;
        }
        lVar26 = (**(code **)(local_c08 + 0x18))(&local_c08);
        lVar29 = (ulong)(uVar10 >> 5) * 4;
        *(uint *)(lVar26 + lVar29) = *(uint *)(lVar26 + lVar29) & (uVar14 ^ 0xffffffff);
      }
LAB_026ba8c0:
      uVar10 = uVar10 + 1;
    } while (uVar10 != 15000);
    if (*param_3 == 0x19) {
      uVar10 = 0;
      do {
        (**(code **)(local_c08 + 0x10))(&local_c28,&local_c08,uVar10);
        lVar26 = (**(code **)(local_c08 + 0x20))(&local_c08);
        uVar14 = 1 << (ulong)(uVar10 & 0x1f);
        if ((*(uint *)(lVar26 + (ulong)(uVar10 >> 5) * 4) & uVar14) != 0) {
          lVar26 = *plVar34;
          uVar12 = FUN_0277d6c4(&local_c28);
          if (*plVar34 != 0) {
            lVar26 = *(long *)(lVar26 + 0x57e58);
            uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
            if (((uVar12 < *(uint *)(lVar26 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) &&
               (uVar20 = (*(code *)*local_498)(&local_498,&local_c28), (uVar20 & 1) != 0))
            goto LAB_026ba9b0;
          }
          lVar26 = (**(code **)(local_c08 + 0x18))(&local_c08);
          lVar29 = (ulong)(uVar10 >> 5) * 4;
          *(uint *)(lVar26 + lVar29) = *(uint *)(lVar26 + lVar29) & (uVar14 ^ 0xffffffff);
        }
LAB_026ba9b0:
        uVar10 = uVar10 + 1;
      } while (uVar10 != 15000);
    }
    goto LAB_026bab60;
  }
  if (iVar11 == 9) {
    local_c8 = &PTR_FUN_049ff448;
    ppuStack_c0 = &local_c28;
    local_c28._0_4_ = iVar11;
    FUN_008a1ba0(&local_c08,&local_c8);
    local_c28 = (undefined *)CONCAT44(local_c28._4_4_,10);
    local_c8 = &PTR_FUN_049ff448;
    ppuStack_c0 = &local_c28;
    FUN_008a1ba0(&local_c08,&local_c8);
    iVar11 = *param_3;
    if (iVar11 == 0x19) {
      uVar10 = 0;
      do {
        (**(code **)(local_c08 + 0x10))(&local_c8,&local_c08,uVar10);
        lVar26 = (**(code **)(local_c08 + 0x20))(&local_c08);
        uVar14 = 1 << (ulong)(uVar10 & 0x1f);
        if ((*(uint *)(lVar26 + (ulong)(uVar10 >> 5) * 4) & uVar14) != 0) {
          lVar26 = *plVar34;
          uVar12 = FUN_0277d6c4(&local_c8);
          if (*plVar34 != 0) {
            lVar26 = *(long *)(lVar26 + 0x57e58);
            uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
            if (((uVar12 < *(uint *)(lVar26 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) &&
               (uVar20 = (*(code *)*local_498)(&local_498,&local_c8), (uVar20 & 1) != 0))
            goto LAB_026ba6a0;
          }
          lVar26 = (**(code **)(local_c08 + 0x18))(&local_c08);
          lVar29 = (ulong)(uVar10 >> 5) * 4;
          *(uint *)(lVar26 + lVar29) = *(uint *)(lVar26 + lVar29) & (uVar14 ^ 0xffffffff);
        }
LAB_026ba6a0:
        uVar10 = uVar10 + 1;
      } while (uVar10 != 15000);
      iVar11 = *param_3;
    }
    if (iVar11 == 0x1a) {
      local_c28 = (undefined *)CONCAT44(local_c28._4_4_,0xb);
      ppuStack_c0 = &local_c28;
      local_c8 = &PTR_FUN_049ff448;
      FUN_008a1ba0(&local_c08,&local_c8);
    }
    uVar10 = 0;
    local_c8 = &PTR_FUN_04a88480;
    do {
      (**(code **)(local_c08 + 0x10))(&local_c28,&local_c08,uVar10);
      lVar26 = (**(code **)(local_c08 + 0x20))(&local_c08);
      uVar14 = 1 << (ulong)(uVar10 & 0x1f);
      if ((*(uint *)(lVar26 + (ulong)(uVar10 >> 5) * 4) & uVar14) != 0) {
        lVar26 = *plVar34;
        uVar12 = FUN_0277d6c4(&local_c28);
        if (*plVar34 != 0) {
          lVar26 = *(long *)(lVar26 + 0x57e58);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
          if (((uVar12 < *(uint *)(lVar26 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) &&
             (uVar20 = (*(code *)*local_c8)(&local_c8,&local_c28), (uVar20 & 1) != 0))
          goto LAB_026baac0;
        }
        lVar26 = (**(code **)(local_c08 + 0x18))(&local_c08);
        lVar29 = (ulong)(uVar10 >> 5) * 4;
        *(uint *)(lVar26 + lVar29) = *(uint *)(lVar26 + lVar29) & (uVar14 ^ 0xffffffff);
      }
LAB_026baac0:
      uVar10 = uVar10 + 1;
    } while (uVar10 != 15000);
    goto LAB_026bab60;
  }
  local_e8 = (uint)local_d8;
  local_e4 = local_d8._4_4_;
LAB_026bb3d4:
  *param_1 = local_e8;
  param_1[1] = local_e4;
  goto LAB_026bb56c;
  while( true ) {
    uVar21 = uVar12 + 1;
    if ((*(uint *)(lVar26 + (ulong)(uVar21 >> 5) * 4) >> (ulong)(uVar21 & 0x1f) & 1) != 0)
    goto LAB_026bae00;
    if ((*(uint *)(lVar26 + (ulong)(uVar12 >> 5) * 4) >> (ulong)(uVar12 & 0x1f) & 1) != 0)
    goto LAB_026bae04;
    uVar12 = uVar12 - 3;
    if (uVar12 == 0xfffffffd) break;
LAB_026bb020:
    uVar21 = uVar12 + 2;
    if ((*(uint *)(lVar26 + (ulong)(uVar21 >> 5) * 4) >> (ulong)(uVar21 & 0x1f) & 1) != 0) {
LAB_026bae00:
      uVar12 = uVar21;
LAB_026bae04:
      uVar20 = (ulong)(uVar12 + 1);
      goto LAB_026bae08;
    }
  }
  uVar20 = 0;
LAB_026bae08:
  if (uVar10 == (uint)uVar20) goto LAB_026bb06c;
  goto LAB_026bae10;
  while (uVar21 = uVar21 - 3, uVar21 != 0xfffffffd) {
LAB_026bb270:
    uVar12 = uVar21 + 2;
    if ((((*(uint *)(lVar26 + (ulong)(uVar12 >> 5) * 4) >> (ulong)(uVar12 & 0x1f) & 1) != 0) ||
        (uVar12 = uVar21 + 1,
        (*(uint *)(lVar26 + (ulong)(uVar12 >> 5) * 4) >> (ulong)(uVar12 & 0x1f) & 1) != 0)) ||
       (uVar12 = uVar21,
       (*(uint *)(lVar26 + (ulong)(uVar21 >> 5) * 4) >> (ulong)(uVar21 & 0x1f) & 1) != 0)) {
      uVar12 = uVar12 + 1;
      goto LAB_026bb138;
    }
  }
  uVar12 = 0;
LAB_026bb138:
  if (uVar10 == uVar12) goto LAB_026bb2d4;
  goto LAB_026bb140;
LAB_026bb06c:
  local_e8 = CONCAT13((char)local_c84,CONCAT12((char)local_c88,(short)local_c5c));
  local_e4 = local_c80;
  plVar34 = (long *)PTR_DAT_04bb43c0;
LAB_026bb094:
  lVar29 = *plVar34;
  uVar12 = FUN_0277d6c4(&local_e8);
  if (*plVar34 != 0) {
    lVar29 = *(long *)(lVar29 + 0x57e58);
    uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
    if ((uVar12 < *(uint *)(lVar29 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) goto LAB_026bb364;
  }
  if (((DAT_05569320 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_05569320), iVar11 != 0)) {
    DAT_055692e8 = 7;
    DAT_055692f0 = 0x200000008;
    DAT_055692f8 = 0x400000003;
    DAT_05569300 = 0x600000005;
    DAT_05569308 = 0xd0000000c;
    DAT_05569310 = 0xa00000009;
    DAT_05569318 = 0x10000000b;
    __cxa_guard_release(&DAT_05569320);
  }
  puVar7 = PTR_DAT_04bb43c0;
  local_c5c = 0;
  iVar11 = param_3[0xc];
  puVar2 = PTR_DAT_04bc0510 + 0x10;
  do {
    iVar11 = *(int *)((long)&DAT_055692e8 + (long)iVar11 * 4);
    if (uVar10 != uVar14) {
      uVar12 = uVar14;
LAB_026bb140:
      puVar23 = (uint *)(PTR_DAT_04bbfe58 + (ulong)uVar12 * 8);
      if (0x752 < uVar12 >> 3) {
        puVar23 = (uint *)PTR_DAT_04bbfe58;
      }
      lVar29 = *(long *)puVar7;
      local_c18 = 0;
      puVar22 = (uint *)PTR_DAT_04bb37e0;
      if (uVar12 < 0x3a99) {
        puVar22 = puVar23;
      }
      local_c20 = (ushort)*puVar22;
      local_c1e = *(byte *)((long)puVar22 + 2);
      local_c1d = *(byte *)((long)puVar22 + 3);
      uVar15 = *puVar22;
      local_c10 = *puVar22;
      uVar21 = puVar22[1];
      local_c28 = puVar2;
      local_c1c = uVar21;
      local_c0c = uVar21;
      uVar18 = FUN_0277d6c4(&local_c20);
      if (*(long *)puVar7 != 0) {
        lVar29 = *(long *)(lVar29 + 0x57e58);
        uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
        if ((uVar18 < *(uint *)(lVar29 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
          lVar29 = *(long *)PTR_DAT_04bc0428;
          uVar18 = FUN_0277d6c4(&local_c10);
          uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
          if (uVar18 < *(uint *)(lVar29 + 0x1d8)) {
            lVar29 = *(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar18 * 8);
            if (lVar29 != 0) {
              local_c18 = lVar29;
            }
          }
        }
      }
      iVar13 = FUN_01ae3210(&local_c28);
      if (iVar11 != iVar13) {
        do {
          uVar12 = uVar12 + 1;
          if (0x752 < uVar12 >> 3) {
            uVar21 = 0x3a95;
            goto LAB_026bb270;
          }
        } while ((*(uint *)(lVar26 + (ulong)(uVar12 >> 5) * 4) >> (ulong)(uVar12 & 0x1f) & 1) == 0);
        goto LAB_026bb138;
      }
      local_e8 = uVar15;
      local_e4 = uVar21;
    }
LAB_026bb2d4:
    plVar34 = (long *)PTR_DAT_04bb43c0;
    lVar29 = *(long *)PTR_DAT_04bb43c0;
    uVar12 = FUN_0277d6c4(&local_e8);
    if (*plVar34 != 0) {
      lVar29 = *(long *)(lVar29 + 0x57e58);
      uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
      if (uVar12 < *(uint *)(lVar29 + 0x1d8)) {
        bVar8 = *(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar12 * 8) != 0;
      }
      else {
        bVar8 = false;
      }
      if (bVar8) break;
    }
    local_c5c = local_c5c + 1;
  } while (local_c5c != 0xe);
LAB_026bb364:
  if (-1 < (int)local_c6c) {
    puVar23 = puVar32 + (ulong)local_c6c * 0xb;
    if (0x17 < local_c6c) {
      puVar23 = puVar32;
    }
    uVar10 = puVar23[1];
    *param_1 = *puVar23;
    param_1[1] = uVar10;
    goto LAB_026bb56c;
  }
  lVar26 = *plVar34;
  uVar10 = FUN_0277d6c4(&local_e8);
  if (*plVar34 != 0) {
    lVar26 = *(long *)(lVar26 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
    if ((uVar10 < *(uint *)(lVar26 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) goto LAB_026bb3d4;
  }
  if (*param_4 == 9) {
    if (*param_3 == 0) {
      uVar10 = param_3[7];
      uVar14 = param_3[8];
    }
    else {
      uVar10 = *(uint *)(param_2 + 0x13214);
      uVar14 = *(uint *)(param_2 + 0x13218);
    }
  }
  else {
    uVar10 = *(uint *)PTR_DAT_04bb37e0;
    uVar14 = *(uint *)(PTR_DAT_04bb37e0 + 4);
  }
  *param_1 = uVar10;
  param_1[1] = uVar14;
LAB_026bb56c:
  do {
    puVar27 = *ppuVar24;
    ppuVar24 = (undefined8 **)(puVar27 + 1);
  } while (puVar27 != &local_478);
  return;
}


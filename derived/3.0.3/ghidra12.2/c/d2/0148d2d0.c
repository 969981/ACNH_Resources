
/* WARNING: Removing unreachable block (ram,0x0148d694) */
/* WARNING: Removing unreachable block (ram,0x0148da58) */
/* WARNING: Removing unreachable block (ram,0x0148db78) */
/* WARNING: Removing unreachable block (ram,0x0148dc80) */
/* WARNING: Removing unreachable block (ram,0x0148dbf4) */
/* WARNING: Removing unreachable block (ram,0x0148dbfc) */
/* WARNING: Removing unreachable block (ram,0x0148dc08) */
/* WARNING: Removing unreachable block (ram,0x0148dc90) */
/* WARNING: Removing unreachable block (ram,0x0148dc10) */
/* WARNING: Removing unreachable block (ram,0x0148dc18) */
/* WARNING: Removing unreachable block (ram,0x0148dcb8) */
/* WARNING: Removing unreachable block (ram,0x0148dcb4) */
/* WARNING: Removing unreachable block (ram,0x0148dc24) */
/* WARNING: Removing unreachable block (ram,0x0148dcc8) */
/* WARNING: Removing unreachable block (ram,0x0148dcd4) */
/* WARNING: Removing unreachable block (ram,0x0148dcd8) */
/* WARNING: Removing unreachable block (ram,0x0148ddc0) */
/* WARNING: Removing unreachable block (ram,0x0148dcdc) */
/* WARNING: Removing unreachable block (ram,0x0148dce0) */

undefined8 FUN_0148d2d0(undefined2 *param_1,long param_2,undefined4 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  byte bVar10;
  undefined2 uVar11;
  short sVar12;
  uint uVar13;
  undefined *puVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  long *plVar19;
  byte *pbVar20;
  long *plVar21;
  undefined8 *puVar22;
  ulong uVar23;
  byte bVar24;
  int iVar25;
  long lVar26;
  byte *pbVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  long lVar31;
  uint uVar32;
  uint uVar33;
  undefined *puVar34;
  undefined8 ****ppppuVar35;
  long *plVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  byte local_17b [3];
  undefined8 local_178;
  undefined8 ****local_170;
  undefined8 ***local_168;
  undefined8 ***pppuStack_160;
  undefined8 local_158;
  undefined8 **local_150;
  undefined8 *local_148;
  undefined8 local_140;
  undefined8 ***local_138 [4];
  undefined *local_118;
  ulong local_110;
  float local_108;
  undefined4 local_104;
  uint uStack_100;
  undefined4 local_f4 [3];
  undefined *local_e8;
  undefined *puStack_e0;
  uint local_d8;
  uint local_d4;
  undefined *local_d0;
  int local_c8;
  int iStack_c4;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  byte local_b0;
  
  uVar15 = FUN_02a752d0(*(long *)PTR_DAT_04bb5008 + 0x1e08);
  lVar26 = *(long *)PTR_DAT_04bb27c0;
  if (lVar26 != 0) {
    if ((((uVar15 == 0) ||
         (plVar36 = *(long **)(*(long *)(*(long *)(lVar26 + 0x1c0) + 8) +
                              (ulong)(uVar15 >> 0x14) * 8), plVar36 == (long *)0x0)) ||
        ((*(uint *)(plVar36 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar36 + 0x46) != uVar15)) {
      plVar36 = (long *)0x0;
    }
    if (*(int *)(lVar26 + 0x288) == 1 || *(int *)(lVar26 + 0x288) == -1) {
      plVar19 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      (**(code **)(*plVar19 + 0x60))();
    }
    puVar14 = PTR_DAT_04bb2e50;
    if (plVar36 != (long *)0x0) {
      if (((*PTR_DAT_04bb59a0 & 1) == 0) &&
         (iVar18 = __cxa_guard_acquire(PTR_DAT_04bb59a0), iVar18 != 0)) {
        *(undefined **)PTR_DAT_04bb5998 = puVar14 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb59a0);
      }
      (**(code **)(*plVar36 + 0x20))(plVar36,PTR_DAT_04bb5998);
      fVar37 = *(float *)(param_2 + 8);
      local_150 = &local_148;
      pppuStack_160 = (undefined8 ***)&local_158;
      local_148 = &local_140;
      local_140 = 0;
      local_178 = 0;
      local_170 = (undefined8 ****)0x0;
      fVar39 = *(float *)(param_2 + 0x10);
      local_168 = pppuStack_160;
      local_158 = &local_150;
      if (local_138 != (undefined8 ****)0x0) {
        local_158 = (undefined8 ***)
                    CONCAT44((int)((ulong)&local_150 >> 0x20),*(undefined4 *)(param_2 + 0x14));
        local_178 = 0x400000001;
        local_170 = local_138;
        local_168 = &local_150;
        local_138[0] = pppuStack_160;
      }
      puVar2 = PTR_DAT_04bb3140 + 0x10;
      puVar3 = PTR_DAT_04bbc1a0 + 0x10;
      puVar4 = PTR_DAT_04bbbc20 + 0x10;
      pbVar20 = PTR_DAT_04bb32e0;
      puVar34 = PTR_DAT_04bb2e10;
      uVar15 = 0;
      do {
        while( true ) {
          if ((int)local_178 != 0) break;
          uVar15 = uVar15 + 1;
          if (uVar15 == 0x1000) {
            return 1;
          }
        }
        uVar1 = uVar15 + 1;
        lVar26 = (long)(int)local_178 << 3;
        fVar38 = SQRT((float)uVar1);
        uVar28 = (uint)fVar38;
        if (fVar38 != (float)(int)fVar38) {
          uVar28 = uVar28 + 1;
        }
        uVar5 = uVar28 & 0xfffffffe;
        uVar13 = uVar28 >> 1;
        iVar18 = (uVar28 | 1) * (uVar28 | 1) - uVar1;
        if (uVar28 < 2) {
          uVar5 = 1;
        }
        uVar28 = uVar13;
        if ((int)(uVar5 * 4) <= iVar18) {
          uVar28 = 0;
        }
        ppppuVar35 = local_170;
        do {
          uVar29 = *(uint *)(puVar34 + 8);
          uVar32 = *(uint *)(puVar34 + 0xc);
          if (uVar15 != 0) {
            iVar25 = 0;
            if (uVar5 != 0) {
              iVar25 = iVar18 / (int)uVar5;
            }
            iVar25 = iVar18 - iVar25 * uVar5;
            if (iVar18 < (int)uVar5) {
              uVar16 = uVar13;
              uVar33 = uVar13 - iVar25;
            }
            else if (iVar18 < (int)(uVar5 * 2)) {
              uVar16 = uVar13 - iVar25;
              uVar33 = -uVar13;
            }
            else {
              uVar30 = iVar25 - uVar13;
              if ((int)(uVar5 * 4) <= iVar18) {
                uVar30 = 0;
              }
              uVar16 = -uVar13;
              uVar33 = iVar25 - uVar13;
              if ((int)(uVar5 * 3) <= iVar18) {
                uVar16 = uVar30;
                uVar33 = uVar28;
              }
            }
            if (*(uint *)*local_170 < 4) {
              uVar29 = -uVar16;
              uVar32 = uVar33;
              switch(*(uint *)*local_170) {
              case 1:
                uVar29 = uVar33;
                uVar32 = uVar16;
                break;
              case 2:
                uVar29 = uVar16;
                uVar32 = -uVar33;
                break;
              case 3:
                uVar29 = -uVar33;
                uVar32 = -uVar16;
              }
            }
          }
          plVar19 = plVar36 + 0xae;
          if ((*(byte *)(plVar36 + 0xac) >> 1 & 1) != 0) {
            plVar19 = plVar36 + 0x115;
          }
          fVar38 = ((float)(int)(((int)((float)(int)fVar37 / 5.0) - (uint)(fVar37 < 0.0)) + uVar29)
                    * 5.0 + 2.5) -
                   ((float)(((int)plVar19[4] - (int)plVar19[2]) + 1) * 0.5 * 5.0 + -2.5);
          fVar40 = ((float)(int)(((int)((float)(int)fVar39 / 5.0) - (uint)(fVar39 < 0.0)) + uVar32)
                    * 5.0 + 2.5) -
                   ((float)((*(int *)((long)plVar19 + 0x24) - *(int *)((long)plVar19 + 0x14)) + 1) *
                    0.5 * 5.0 + -2.5);
          uVar29 = (int)((float)(int)fVar38 / 5.0) - (uint)(fVar38 < 0.0);
          uVar32 = (int)((float)(int)fVar40 / 5.0) - (uint)(fVar40 < 0.0);
          if (((uVar29 | uVar32) & 1) == 0) {
            uVar11 = *(undefined2 *)PTR_DAT_04bb37e0;
            uVar8 = PTR_DAT_04bb37e0[2];
            uVar9 = PTR_DAT_04bb37e0[3];
            uVar7 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
            local_17b[1] = 0;
            bVar10 = *pbVar20;
            uVar30 = *(uint *)(param_2 + 0x18);
            bVar24 = bVar10;
            if (7 < bVar10) {
              bVar24 = 0xff;
            }
            iVar25 = *(int *)*ppppuVar35;
            lVar31 = *(long *)PTR_DAT_04bb39b0;
            if (lVar31 == 0) {
              if (7 < bVar10) goto LAB_0148d7f8;
LAB_0148d870:
              local_17b[0] = *pbVar20;
              if (7 < local_17b[0]) {
                local_17b[0] = 0xff;
              }
            }
            else {
              if (*(int *)(lVar31 + 0x15c) != 0) {
                pbVar20 = (byte *)(lVar31 + 0x158);
              }
              if ((*pbVar20 < 8) ||
                 (((*(int *)(lVar31 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
                  (pbVar20 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar20 < 8))))
              goto LAB_0148d870;
LAB_0148d7f8:
              pbVar20 = PTR_DAT_04bb5038;
              if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) goto LAB_0148d870;
              lVar31 = **(long **)PTR_DAT_04bb27d0;
              bVar10 = *(byte *)(lVar31 + 0x473);
              pbVar27 = PTR_DAT_04bb5038;
              if ((long)(char)bVar10 != 0xffffffffffffffff) {
                puVar6 = (uint *)(lVar31 + 0x48) + ((long)(char)bVar10 & 0xffffffffU) * 0x20;
                if (7 < bVar10) {
                  puVar6 = (uint *)(lVar31 + 0x48);
                }
                if ((*puVar6 & 8) != 0) {
                  pbVar27 = (byte *)(lVar31 + 0x471);
                }
              }
              local_17b[0] = *pbVar27;
              if (7 < local_17b[0]) goto LAB_0148d870;
            }
            if (7 < local_17b[0]) {
              local_17b[0] = 0xff;
            }
            uVar16 = FUN_02a752d0(*(long *)PTR_DAT_04bb5008 + 0x1e08,param_3);
            lVar31 = *(long *)PTR_DAT_04bb27c0;
            if (lVar31 == 0) {
              uVar30 = 0;
              uVar32 = 0;
              uVar29 = 0;
              iVar17 = 0;
              iVar25 = 0;
            }
            else {
              if ((((uVar16 == 0) ||
                   (plVar19 = *(long **)(*(long *)(*(long *)(lVar31 + 0x1c0) + 8) +
                                        (ulong)(uVar16 >> 0x14) * 8), plVar19 == (long *)0x0)) ||
                  ((*(uint *)(plVar19 + 0x49) >> 1 & 1) != 0)) ||
                 (*(uint *)(plVar19 + 0x46) != uVar16)) {
                plVar19 = (long *)0x0;
              }
              if ((*(int *)(lVar31 + 0x288) == 1) || (*(int *)(lVar31 + 0x288) == -1)) {
                plVar21 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                       (*(long *)PTR_DAT_04bb3350 + 0x68));
                (**(code **)(*plVar21 + 0x60))();
              }
              if (plVar19 == (long *)0x0) {
                iVar25 = 0;
                uVar30 = 0;
                uVar32 = 0;
                uVar29 = 0;
                iVar17 = 0;
              }
              else {
                if (((*PTR_DAT_04bb59a0 & 1) == 0) &&
                   (iVar17 = __cxa_guard_acquire(PTR_DAT_04bb59a0), iVar17 != 0)) {
                  *(undefined **)PTR_DAT_04bb5998 = puVar14 + 0x10;
                  __cxa_guard_release(PTR_DAT_04bb59a0);
                }
                (**(code **)(*plVar19 + 0x20))(plVar19,PTR_DAT_04bb5998);
                local_b8 = 0;
                lVar31 = *(long *)PTR_DAT_04bb2720;
                if ((lVar31 == 0) || (*(long *)(lVar31 + 0x330) == 0)) {
                  puVar22 = &DAT_055c04a0;
                }
                else {
                  puVar22 = (undefined8 *)
                            (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                      (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar31 + 0x338));
                  iVar17 = FUN_006bd550(*puVar22,0);
                  puVar22 = (undefined8 *)PTR_DAT_04bc3a80;
                  if (iVar17 != 0x758f7eaf) {
                    puVar22 = &DAT_055c04a0;
                  }
                }
                local_b4 = *(undefined4 *)(puVar22 + 7);
                local_b0 = FUN_017baf44();
                local_b0 = local_b0 & 1;
                puStack_e0 = PTR_DAT_04bb2010 + 0x10;
                if ((*(byte *)(plVar19 + 0xac) >> 1 & 1) == 0) {
                  plVar21 = plVar19 + 0xae;
                }
                else {
                  local_118 = (undefined *)CONCAT44(local_118._4_4_,5);
                  plVar21 = plVar19 + 0x115;
                }
                _local_c8 = CONCAT44((*(int *)((long)plVar21 + 0x24) -
                                     *(int *)((long)plVar21 + 0x14)) + uVar32,
                                     ((int)plVar21[4] - (int)plVar21[2]) + uVar29);
                sVar12 = *(short *)PTR_DAT_04bb6298;
                local_e8 = puVar3;
                local_d8 = uVar29;
                local_d4 = uVar32;
                local_d0 = puStack_e0;
                local_c0 = puVar2;
                if (sVar12 != -1) {
                  local_118 = (undefined *)CONCAT44(local_118._4_4_,1);
                  puVar6 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar12 * 8);
                  if (0xff < (uint)(int)sVar12) {
                    puVar6 = (uint *)PTR_DAT_04bc39f8;
                  }
                  if (((*puVar6 >> 1 & 1) != 0) &&
                     (uVar23 = FUN_01a4fafc(&local_c0,uVar30,&local_e8), (uVar23 & 1) != 0)) {
                    lVar31 = *(long *)PTR_DAT_04bbbc38;
                    if (lVar31 == 0) {
                      iVar17 = 0;
                    }
                    else {
                      iVar17 = *(int *)(lVar31 + 0xc);
                    }
                    local_118 = (undefined *)CONCAT44(local_118._4_4_,iVar17);
                    if (((iVar17 == 0) ||
                        (local_118 = (undefined *)CONCAT44(local_118._4_4_,uVar30), 1 < uVar30)) ||
                       (uVar23 = FUN_014e5e70(lVar31,&local_e8), (uVar23 & 1) != 0)) {
                      iVar17 = 1;
                      uVar23 = FUN_0251ee60(0x3f800000,0x40a00000,&local_e8,local_17b,
                                            *(undefined4 *)PTR_DAT_04bb3238,1);
                      if ((((uVar23 & 1) == 0) &&
                          (uVar23 = FUN_01a4ff00(&local_c0,uVar30,&local_e8), (uVar23 & 1) != 0)) &&
                         (uVar23 = FUN_00978be0(&local_e8), (uVar23 & 1) != 0)) {
                        local_f4[0] = 0;
                        local_108 = ((float)(int)local_d4 * 5.0 + (float)iStack_c4 * 5.0 + 5.0) *
                                    0.5;
                        local_110 = (ulong)(uint)(((float)(int)local_d8 * 5.0 +
                                                  (float)local_c8 * 5.0 + 5.0) * 0.5);
                        local_104 = (undefined4)(long)((float)iVar25 * 90.0 * 11930465.0);
                        local_118 = puVar4;
                        uStack_100 = uVar30;
                        uVar23 = (**(code **)(*(long *)plVar19[0x193] + 0x70))
                                           ((long *)plVar19[0x193],local_f4,&local_118);
                        if ((uVar23 & 1) != 0) {
                          iVar17 = 9;
                          goto LAB_0148dc48;
                        }
                      }
                      iVar25 = 0;
                      uVar30 = 0;
                      uVar32 = 0;
                      uVar29 = 0;
                      goto LAB_0148dc48;
                    }
                  }
                }
                iVar25 = 0;
                uVar30 = 0;
                uVar32 = 0;
                uVar29 = 0;
                iVar17 = 1;
              }
            }
LAB_0148dc48:
            if (iVar17 == 9) {
              *(undefined1 *)(param_1 + 1) = uVar8;
              *param_1 = uVar11;
              *(undefined1 *)((long)param_1 + 3) = uVar9;
              *(undefined4 *)(param_1 + 2) = uVar7;
              *(uint *)(param_1 + 8) = uVar29;
              *(uint *)(param_1 + 10) = uVar32;
              *(int *)(param_1 + 0xc) = iVar25;
              *(undefined8 *)(param_1 + 0xe) = 0;
              *(uint *)(param_1 + 0x12) = uVar30;
              *(byte *)(param_1 + 0x14) = bVar24;
              *(undefined4 *)(param_1 + 0x16) = 0;
              return 9;
            }
            pbVar20 = PTR_DAT_04bb32e0;
            puVar34 = PTR_DAT_04bb2e10;
          }
          ppppuVar35 = ppppuVar35 + 1;
          lVar26 = lVar26 + -8;
        } while (lVar26 != 0);
        uVar15 = uVar1;
        if (uVar1 == 0x1000) {
          return 1;
        }
      } while( true );
    }
  }
  return 0;
}


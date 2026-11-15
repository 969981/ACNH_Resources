
/* WARNING: Removing unreachable block (ram,0x0228cc90) */
/* WARNING: Removing unreachable block (ram,0x0228cca0) */
/* WARNING: Removing unreachable block (ram,0x0228ccc4) */

undefined8 FUN_0228c730(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  uint uVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  float fVar20;
  float fVar21;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  byte local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar6 = PTR_DAT_04bb3350;
  puVar5 = PTR_DAT_04bb27c0;
  lVar17 = 0;
  plVar18 = (long *)0x1bfdf8;
  puVar1 = PTR_DAT_04bb3290 + 0x10;
  puVar2 = PTR_DAT_04bb2010 + 0x10;
  puVar3 = PTR_DAT_04bbfe68 + 0x10;
  do {
    uVar16 = *(uint *)(param_1 + lVar17 + 0x364);
    if ((uVar16 != 0) && (lVar14 = *(long *)puVar5, lVar14 != 0)) {
      plVar19 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                          ((ulong)(uVar16 >> 0x11) & 0x7ff8));
      if ((plVar19 == (long *)0x0) ||
         (((*(uint *)(plVar19 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar19 + 0x46) != uVar16)))) {
        plVar19 = (long *)0x0;
      }
      if (*(int *)(lVar14 + 0x288) == 1 || *(int *)(lVar14 + 0x288) == -1) {
        plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
        lVar14 = *(long *)puVar5;
        iVar8 = (**(code **)(*plVar9 + 0x60))();
        if (iVar8 < 0x11) {
          uVar16 = 1;
        }
        else {
          if (4 < *(uint *)(lVar14 + 0x5e8)) goto LAB_0228c858;
          uVar16 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_0228c858:
        uVar16 = 0;
      }
      if (plVar19 != (long *)0x0) {
        lVar14 = plVar19[0x2a];
        if (((*PTR_DAT_04bbe9e0 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04bbe9e0), iVar8 != 0)) {
          *(undefined **)PTR_DAT_04bbe9d8 = PTR_DAT_04bb3290 + 0x10;
          __cxa_guard_release(PTR_DAT_04bbe9e0);
        }
        uVar13 = (**(code **)(*plVar19 + 0x20))(plVar19,PTR_DAT_04bbe9d8);
        uVar4 = 0;
        if ((int)lVar14 == 1) {
          uVar4 = uVar16;
        }
        if (((uVar13 & 1) != 0) && (uVar4 != 0)) {
          local_88 = PTR_DAT_04bb2010 + 0x10;
          fVar20 = *(float *)(plVar19[0xd] + 0x278);
          fVar21 = *(float *)(plVar19[0xd] + 0x280);
          local_80 = CONCAT44((int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0),
                              (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0));
          uVar13 = FUN_02a7c2e0(param_2,&local_88);
          if ((uVar13 & 1) != 0) {
            local_88 = (undefined *)CONCAT44(local_88._4_4_,6);
            if (plVar19[0xe] == 0) {
              iVar8 = 0;
LAB_0228c940:
              local_a0 = (undefined *)CONCAT44(local_a0._4_4_,4);
              if (iVar8 != 4) goto LAB_0228c960;
            }
            else {
              iVar8 = *(int *)(plVar19[0xe] + 0x280);
              if (iVar8 != 6) goto LAB_0228c940;
            }
            FUN_006fb3d0(plVar19);
          }
        }
      }
    }
LAB_0228c960:
    uVar16 = *(uint *)(param_1 + lVar17 + 0x368);
    if ((uVar16 != 0) && (lVar14 = *(long *)puVar5, lVar14 != 0)) {
      plVar19 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                          ((ulong)(uVar16 >> 0x11) & 0x7ff8));
      if ((plVar19 == (long *)0x0) ||
         (((*(uint *)(plVar19 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar19 + 0x46) != uVar16)))) {
        plVar19 = (long *)0x0;
      }
      if (*(int *)(lVar14 + 0x288) == 1 || *(int *)(lVar14 + 0x288) == -1) {
        plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
        lVar14 = *(long *)puVar5;
        iVar8 = (**(code **)(*plVar9 + 0x60))();
        if (iVar8 < 0x11) {
          uVar16 = 1;
        }
        else {
          if (4 < *(uint *)(lVar14 + 0x5e8)) goto LAB_0228c9f8;
          uVar16 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_0228c9f8:
        uVar16 = 0;
      }
      if (plVar19 != (long *)0x0) {
        lVar14 = plVar19[0x2a];
        if (((*PTR_DAT_04bbe9e0 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04bbe9e0), iVar8 != 0)) {
          *(undefined **)PTR_DAT_04bbe9d8 = puVar1;
          __cxa_guard_release(PTR_DAT_04bbe9e0);
        }
        uVar13 = (**(code **)(*plVar19 + 0x20))(plVar19,PTR_DAT_04bbe9d8);
        uVar4 = 0;
        if ((int)lVar14 == 1) {
          uVar4 = uVar16;
        }
        if (((uVar13 & 1) != 0) && (uVar4 != 0)) {
          fVar20 = *(float *)(plVar19[0xd] + 0x278);
          fVar21 = *(float *)(plVar19[0xd] + 0x280);
          local_80 = CONCAT44((int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0),
                              (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0));
          local_88 = puVar2;
          uVar13 = FUN_02a7c2e0(param_2,&local_88);
          puVar7 = PTR_DAT_04bb46b0;
          if ((uVar13 & 1) != 0) {
            lVar14 = *(long *)PTR_DAT_04bb46b0;
            if (lVar14 == 0) {
LAB_0228cb18:
              lVar14 = 0;
              lVar10 = *plVar18;
              if (lVar10 != 0) goto LAB_0228cb24;
LAB_0228cb40:
              uVar13 = 0;
            }
            else {
              puVar15 = *(undefined8 **)(lVar14 + 0x10);
              if ((*(byte *)(lVar14 + 0x453) & 1) == 0) {
                lVar10 = (**(code **)(*(long *)*puVar15 + 0x38))();
                lVar14 = 0;
                if (lVar10 != 0) {
                  lVar14 = lVar10 + 0x70;
                }
                lVar10 = *(long *)(lVar14 + (long)plVar18);
              }
              else {
                if ((puVar15 == (undefined8 *)0x0) || ((long *)puVar15[0x26] == (long *)0x0))
                goto LAB_0228cb18;
                lVar14 = (**(code **)(*(long *)puVar15[0x26] + 0x38))();
                lVar10 = *(long *)(lVar14 + (long)plVar18);
              }
              if (lVar10 == 0) goto LAB_0228cb40;
LAB_0228cb24:
              if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) goto LAB_0228cb40;
              uVar13 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
              uVar13 = uVar13 & 0xffffffff;
            }
            local_98 = 0;
            lVar10 = *(long *)PTR_DAT_04bb2720;
            local_a0 = puVar3;
            if ((lVar10 == 0) || (*(long *)(lVar10 + 0x330) == 0)) {
              puVar15 = &DAT_055c04a0;
            }
            else {
              puVar15 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
              iVar8 = FUN_006bd550(*puVar15,0);
              puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
              if (iVar8 != 0x758f7eaf) {
                puVar15 = &DAT_055c04a0;
              }
            }
            local_94 = *(undefined4 *)(puVar15 + 7);
            local_90 = FUN_017baf44();
            local_90 = local_90 & 1;
            if ((*(long *)(lVar14 + (long)plVar18) != 0) &&
               (plVar9 = *(long **)(*(long *)(lVar14 + (long)plVar18) + 0x20), plVar9 != (long *)0x0
               )) {
              local_88 = *(undefined **)((long)plVar18 + lVar14 + -0x20);
              local_80 = *(undefined8 *)((long)plVar18 + lVar14 + -0x18);
              uStack_78 = 0x6c;
              (**(code **)(*plVar9 + 0x20))(plVar9,&local_88);
            }
            lVar10 = *(long *)((long)plVar18 + lVar14 + -0x18) +
                     *(long *)((long)plVar18 + lVar14 + -0x20);
            fVar20 = *(float *)(lVar10 + 0x14);
            local_88 = PTR_DAT_04bb2010 + 0x10;
            fVar21 = *(float *)(lVar10 + 0x1c);
            local_80 = CONCAT44((int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0),
                                (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0));
            uVar11 = FUN_01a4f798(&local_a0,0,&local_88);
            if (((uVar11 & 1) != 0) &&
               (lVar10 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xd0), lVar10 != 0
               )) {
              FUN_012e5af4(lVar10,&local_88);
            }
            if ((*(long *)(lVar14 + (long)plVar18) != 0) &&
               (plVar9 = *(long **)(*(long *)(lVar14 + (long)plVar18) + 0x20), plVar9 != (long *)0x0
               )) {
              local_88 = *(undefined **)((long)plVar18 + lVar14 + -0x20);
              local_80 = *(undefined8 *)((long)plVar18 + lVar14 + -0x18);
              uStack_78 = 0x6c;
              (**(code **)(*plVar9 + 0x20))(plVar9,&local_88);
            }
            puVar15 = (undefined8 *)
                      (*(long *)((long)plVar18 + lVar14 + -0x18) +
                      *(long *)((long)plVar18 + lVar14 + -0x20));
            *(undefined8 *)((long)puVar15 + 0x5c) = 0;
            puVar15[2] = 0;
            puVar15[3] = 0;
            *(undefined8 *)((long)puVar15 + 0x14) = 0;
            *puVar15 = 0;
            puVar15[1] = 0;
            *(undefined4 *)((long)puVar15 + 0xc) = 9;
            *(undefined4 *)(puVar15 + 2) = 0x3f000000;
            *(undefined4 *)((long)puVar15 + 0x1c) = 0;
            *(undefined8 *)((long)puVar15 + 0x54) = 0;
            *(undefined8 *)((long)puVar15 + 0x4c) = 0;
            *(undefined8 *)((long)puVar15 + 0x44) = 0;
            *(undefined8 *)((long)puVar15 + 100) = 0x300000004;
            puVar15[4] = 0;
            puVar15[5] = 0;
            puVar15[4] = 0x3f00000000000009;
            puVar15[6] = 0;
            puVar15[7] = 0;
            *(undefined4 *)((long)puVar15 + 0x3c) = 0;
            *(undefined4 *)(puVar15 + 8) = 0;
            *(undefined1 *)(puVar15 + 8) = 2;
            lVar10 = *(long *)puVar7;
            *(undefined8 *)((long)puVar15 + 0x2c) = 0;
            *(undefined8 *)((long)puVar15 + 0x34) = 0;
            if (lVar10 == 0) {
LAB_0228cdc4:
              lVar10 = 0;
            }
            else {
              puVar15 = *(undefined8 **)(lVar10 + 0x10);
              if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
                lVar12 = (**(code **)(*(long *)*puVar15 + 0x38))();
                lVar10 = 0;
                if (lVar12 != 0) {
                  lVar10 = lVar12 + 0x70;
                }
              }
              else {
                if (puVar15 == (undefined8 *)0x0) goto LAB_0228cdc4;
                lVar10 = 0;
                if ((long *)puVar15[0x26] != (long *)0x0) {
                  lVar10 = (**(code **)(*(long *)puVar15[0x26] + 0x38))();
                }
              }
            }
            if ((*(long *)(&LAB_001bfd88 + lVar10) == 0) ||
               (puVar15 = *(undefined8 **)(*(long *)(&LAB_001bfd88 + lVar10) + 0x10),
               puVar15 == (undefined8 *)0x0)) {
              uVar11 = 0;
            }
            else {
              uVar11 = (**(code **)*puVar15)();
              uVar11 = uVar11 & 0xffffffff;
            }
            iVar8 = *(int *)(param_1 + 0x354) + -1;
            *(int *)(param_1 + 0x354) = iVar8;
            if ((*(long *)(&LAB_001bfd88 + lVar10) != 0) &&
               (plVar9 = *(long **)(*(long *)(&LAB_001bfd88 + lVar10) + 0x20), plVar9 != (long *)0x0
               )) {
              local_88 = *(undefined **)(&LAB_001bfd68 + lVar10);
              local_80 = *(undefined8 *)(&LAB_001bfd70 + lVar10);
              uStack_78 = 0x1b8;
              (**(code **)(*plVar9 + 0x20))(plVar9,&local_88);
              iVar8 = *(int *)(param_1 + 0x354);
            }
            *(int *)(*(long *)(&LAB_001bfd70 + lVar10) + *(long *)(&LAB_001bfd68 + lVar10) + 0x1b4)
                 = iVar8;
            local_88 = (undefined *)CONCAT44(local_88._4_4_,6);
            if (plVar19[0xe] == 0) {
              iVar8 = 0;
LAB_0228ce78:
              if (iVar8 == 4) goto LAB_0228ce8c;
            }
            else {
              iVar8 = *(int *)(plVar19[0xe] + 0x280);
              if (iVar8 != 6) goto LAB_0228ce78;
LAB_0228ce8c:
              FUN_006fb3d0(plVar19);
            }
            if ((((uVar11 & 1) != 0) && (*(long *)(&LAB_001bfd88 + lVar10) != 0)) &&
               (puVar15 = *(undefined8 **)(*(long *)(&LAB_001bfd88 + lVar10) + 0x18),
               puVar15 != (undefined8 *)0x0)) {
              (**(code **)*puVar15)();
            }
            if ((((uVar13 & 1) != 0) && (*(long *)(lVar14 + (long)plVar18) != 0)) &&
               (puVar15 = *(undefined8 **)(*(long *)(lVar14 + (long)plVar18) + 0x18),
               puVar15 != (undefined8 *)0x0)) {
              (**(code **)*puVar15)();
            }
          }
        }
      }
    }
    lVar17 = lVar17 + 0x18;
    plVar18 = plVar18 + 0x134;
  } while (lVar17 != 0x60);
  uVar16 = *(uint *)(param_1 + 0x308);
  if ((uVar16 != 0) && (lVar17 = *(long *)puVar5, lVar17 != 0)) {
    plVar18 = *(long **)(*(long *)(*(long *)(lVar17 + 0x1c0) + 8) +
                        ((ulong)(uVar16 >> 0x11) & 0x7ff8));
    if ((plVar18 == (long *)0x0) ||
       (((*(uint *)(plVar18 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar18 + 0x46) != uVar16)))) {
      plVar18 = (long *)0x0;
    }
    if ((*(int *)(lVar17 + 0x288) == 1) || (*(int *)(lVar17 + 0x288) == -1)) {
      plVar19 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
      lVar17 = *(long *)puVar5;
      iVar8 = (**(code **)(*plVar19 + 0x60))();
      if (iVar8 < 0x11) {
        uVar16 = 1;
      }
      else {
        if (4 < *(uint *)(lVar17 + 0x5e8)) goto LAB_0228cfdc;
        uVar16 = 0x1aU >> (ulong)(*(uint *)(lVar17 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_0228cfdc:
      uVar16 = 0;
    }
    if (plVar18 != (long *)0x0) {
      lVar17 = plVar18[0x2a];
      if (((*PTR_DAT_04bbe9e0 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04bbe9e0), iVar8 != 0)) {
        *(undefined **)PTR_DAT_04bbe9d8 = PTR_DAT_04bb3290 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbe9e0);
      }
      uVar13 = (**(code **)(*plVar18 + 0x20))(plVar18,PTR_DAT_04bbe9d8);
      uVar4 = 0;
      if ((int)lVar17 == 1) {
        uVar4 = uVar16;
      }
      if (((uVar13 & 1) != 0) && (uVar4 != 0)) {
        local_88 = PTR_DAT_04bb2010 + 0x10;
        local_80 = CONCAT44((int)((float)(int)*(float *)(plVar18 + 0x5e) / 5.0) -
                            (uint)(*(float *)(plVar18 + 0x5e) < 0.0),
                            (int)((float)(int)*(float *)(plVar18 + 0x5d) / 5.0) -
                            (uint)(*(float *)(plVar18 + 0x5d) < 0.0));
        uVar13 = FUN_02a7c2e0(param_2,&local_88);
        if ((uVar13 & 1) != 0) {
          local_88 = (undefined *)CONCAT44(local_88._4_4_,4);
          if (plVar18[0xe] == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = *(int *)(plVar18[0xe] + 0x280);
            if (iVar8 == 4) goto LAB_0228d134;
          }
          local_a0 = (undefined *)CONCAT44(local_a0._4_4_,6);
          if (iVar8 != 6) {
            uVar16 = *(uint *)(plVar18 + 0x54);
            if ((int)uVar16 < 2) {
              lVar17 = *(long *)PTR_DAT_04bb4848 + 8 + (ulong)uVar16 * 0xd8;
              if (1 < uVar16) {
                lVar17 = *(long *)PTR_DAT_04bb4848 + 8;
              }
              *(uint *)(lVar17 + 0x1c) = uVar16;
              *(undefined8 *)(lVar17 + 8) = 0;
              *(undefined4 *)(lVar17 + 0x10) = 0;
              *(undefined8 *)(lVar17 + 0x20) = 9;
            }
            FUN_006fb3d0(plVar18);
            lVar17 = 0;
            if (plVar18[0xe] != 0) {
              lVar17 = plVar18[0xe] + 0x278;
            }
            FUN_03ebb160(lVar17,7);
          }
        }
      }
    }
  }
LAB_0228d134:
  uVar16 = *(uint *)(param_1 + 0x340);
  if (uVar16 == 0) {
    return 1;
  }
  lVar17 = *(long *)puVar5;
  if (lVar17 == 0) {
    return 1;
  }
  plVar18 = *(long **)(*(long *)(*(long *)(lVar17 + 0x1c0) + 8) + ((ulong)(uVar16 >> 0x11) & 0x7ff8)
                      );
  if (((plVar18 == (long *)0x0) || ((*(uint *)(plVar18 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar18 + 0x46) != uVar16)) {
    plVar18 = (long *)0x0;
  }
  if ((*(int *)(lVar17 + 0x288) == 1) || (*(int *)(lVar17 + 0x288) == -1)) {
    plVar19 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
    lVar17 = *(long *)puVar5;
    iVar8 = (**(code **)(*plVar19 + 0x60))();
    if (iVar8 < 0x11) {
      uVar16 = 1;
      goto joined_r0x0228d1dc;
    }
    if (*(uint *)(lVar17 + 0x5e8) < 5) {
      uVar16 = 0x1aU >> (ulong)(*(uint *)(lVar17 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0228d1dc;
    }
  }
  uVar16 = 0;
joined_r0x0228d1dc:
  if (plVar18 != (long *)0x0) {
    lVar17 = plVar18[0x2a];
    if (((*PTR_DAT_04bbe9e0 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bbe9e0), iVar8 != 0)) {
      *(undefined **)PTR_DAT_04bbe9d8 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbe9e0);
    }
    uVar13 = (**(code **)(*plVar18 + 0x20))(plVar18,PTR_DAT_04bbe9d8);
    uVar4 = 0;
    if ((int)lVar17 == 1) {
      uVar4 = uVar16;
    }
    if (((uVar13 & 1) != 0) && (uVar4 != 0)) {
      local_88 = PTR_DAT_04bb2010 + 0x10;
      local_80 = CONCAT44((int)((float)(int)*(float *)(plVar18 + 0x5e) / 5.0) -
                          (uint)(*(float *)(plVar18 + 0x5e) < 0.0),
                          (int)((float)(int)*(float *)(plVar18 + 0x5d) / 5.0) -
                          (uint)(*(float *)(plVar18 + 0x5d) < 0.0));
      uVar13 = FUN_02a7c2e0(param_2,&local_88);
      if ((uVar13 & 1) != 0) {
        local_88 = (undefined *)CONCAT44(local_88._4_4_,4);
        if (plVar18[0xe] == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(plVar18[0xe] + 0x280);
          if (iVar8 == 4) {
            return 1;
          }
        }
        local_a0 = (undefined *)CONCAT44(local_a0._4_4_,6);
        if (iVar8 != 6) {
          uVar16 = *(uint *)(plVar18 + 0x54);
          if ((int)uVar16 < 2) {
            lVar17 = *(long *)PTR_DAT_04bb4848 + 8 + (ulong)uVar16 * 0xd8;
            if (1 < uVar16) {
              lVar17 = *(long *)PTR_DAT_04bb4848 + 8;
            }
            *(uint *)(lVar17 + 0x1c) = uVar16;
            *(undefined8 *)(lVar17 + 8) = 0;
            *(undefined4 *)(lVar17 + 0x10) = 0;
            *(undefined8 *)(lVar17 + 0x20) = 9;
          }
          FUN_006fb3d0(plVar18);
          lVar17 = 0;
          if (plVar18[0xe] != 0) {
            lVar17 = plVar18[0xe] + 0x278;
          }
          FUN_03ebb160(lVar17,7);
        }
      }
    }
  }
  return 1;
}


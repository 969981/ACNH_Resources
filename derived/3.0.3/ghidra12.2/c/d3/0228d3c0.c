
/* WARNING: Removing unreachable block (ram,0x0228d91c) */
/* WARNING: Removing unreachable block (ram,0x0228d92c) */
/* WARNING: Removing unreachable block (ram,0x0228d950) */

undefined8 FUN_0228d3c0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  byte local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar10 = PTR_DAT_04bb27c0;
  lVar21 = 0;
  plVar22 = (long *)0x1bfdf8;
  puVar1 = PTR_DAT_04bb3290 + 0x10;
  puVar2 = PTR_DAT_04bbfe68 + 0x10;
  puVar3 = PTR_DAT_04bb2010 + 0x10;
  plVar15 = (long *)PTR_DAT_04bbe9d8;
  do {
    uVar24 = *(uint *)(param_1 + lVar21 + 0x364);
    if ((uVar24 != 0) && (lVar19 = *(long *)puVar10, lVar19 != 0)) {
      plVar23 = *(long **)(*(long *)(*(long *)(lVar19 + 0x1c0) + 8) +
                          ((ulong)(uVar24 >> 0x11) & 0x7ff8));
      if ((plVar23 == (long *)0x0) ||
         (((*(uint *)(plVar23 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar23 + 0x46) != uVar24)))) {
        plVar23 = (long *)0x0;
      }
      if (*(int *)(lVar19 + 0x288) == 1 || *(int *)(lVar19 + 0x288) == -1) {
        plVar13 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar19 = *(long *)puVar10;
        iVar12 = (**(code **)(*plVar13 + 0x60))();
        if (iVar12 < 0x11) {
          uVar24 = 1;
        }
        else {
          if (4 < *(uint *)(lVar19 + 0x5e8)) goto LAB_0228d4f0;
          uVar24 = 0x1aU >> (ulong)(*(uint *)(lVar19 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_0228d4f0:
        uVar24 = 0;
      }
      if (plVar23 != (long *)0x0) {
        lVar19 = plVar23[0x2a];
        if (((*PTR_DAT_04bbe9e0 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04bbe9e0), iVar12 != 0)) {
          *plVar15 = (long)(PTR_DAT_04bb3290 + 0x10);
          __cxa_guard_release(PTR_DAT_04bbe9e0);
        }
        uVar18 = (**(code **)(*plVar23 + 0x20))(plVar23,plVar15);
        uVar4 = 0;
        if ((int)lVar19 == 1) {
          uVar4 = uVar24;
        }
        if (((uVar18 & 1) != 0) && (uVar4 != 0)) {
          iVar12 = *(int *)(param_2 + 0x20);
          iVar6 = *(int *)(param_2 + 0x24);
          fVar25 = *(float *)(plVar23[0xd] + 0x278);
          fVar26 = *(float *)(plVar23[0xd] + 0x280);
          iVar8 = (int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0);
          iVar9 = (int)((float)(int)fVar26 / 5.0) - (uint)(fVar26 < 0.0);
          iVar5 = *(int *)(param_2 + 0x10);
          iVar7 = *(int *)(param_2 + 0x14);
          if (((iVar5 <= iVar8 && iVar8 <= iVar12) && iVar7 <= iVar9) && iVar9 == iVar6 ||
              (((iVar5 <= iVar8 && iVar8 <= iVar12) && iVar7 <= iVar9) && iVar9 - iVar6 < 0) !=
              (((iVar5 <= iVar8 && iVar8 <= iVar12) && iVar7 <= iVar9) && SBORROW4(iVar9,iVar6))) {
            local_88 = (undefined *)CONCAT44(local_88._4_4_,6);
            if (plVar23[0xe] == 0) {
              iVar12 = 0;
LAB_0228d5cc:
              local_a0 = (undefined *)CONCAT44(local_a0._4_4_,4);
              if (iVar12 != 4) goto LAB_0228d5f0;
            }
            else {
              iVar12 = *(int *)(plVar23[0xe] + 0x280);
              if (iVar12 != 6) goto LAB_0228d5cc;
            }
            FUN_006fb3d0(plVar23);
          }
        }
      }
    }
LAB_0228d5f0:
    uVar24 = *(uint *)(param_1 + lVar21 + 0x368);
    if ((uVar24 != 0) && (lVar19 = *(long *)puVar10, lVar19 != 0)) {
      plVar23 = *(long **)(*(long *)(*(long *)(lVar19 + 0x1c0) + 8) +
                          ((ulong)(uVar24 >> 0x11) & 0x7ff8));
      if ((plVar23 == (long *)0x0) ||
         (((*(uint *)(plVar23 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar23 + 0x46) != uVar24)))) {
        plVar23 = (long *)0x0;
      }
      if (*(int *)(lVar19 + 0x288) == 1 || *(int *)(lVar19 + 0x288) == -1) {
        plVar13 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar19 = *(long *)puVar10;
        iVar12 = (**(code **)(*plVar13 + 0x60))();
        if (iVar12 < 0x11) {
          uVar24 = 1;
        }
        else {
          if (4 < *(uint *)(lVar19 + 0x5e8)) goto LAB_0228d690;
          uVar24 = 0x1aU >> (ulong)(*(uint *)(lVar19 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_0228d690:
        uVar24 = 0;
      }
      if (plVar23 != (long *)0x0) {
        lVar19 = plVar23[0x2a];
        if (((*PTR_DAT_04bbe9e0 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04bbe9e0), iVar12 != 0)) {
          *plVar15 = (long)puVar1;
          __cxa_guard_release(PTR_DAT_04bbe9e0);
        }
        uVar18 = (**(code **)(*plVar23 + 0x20))(plVar23,plVar15);
        puVar11 = PTR_DAT_04bb46b0;
        uVar4 = 0;
        if ((int)lVar19 == 1) {
          uVar4 = uVar24;
        }
        if (((uVar18 & 1) != 0) && (uVar4 != 0)) {
          iVar12 = *(int *)(param_2 + 0x20);
          iVar6 = *(int *)(param_2 + 0x24);
          fVar25 = *(float *)(plVar23[0xd] + 0x278);
          fVar26 = *(float *)(plVar23[0xd] + 0x280);
          iVar8 = (int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0);
          iVar9 = (int)((float)(int)fVar26 / 5.0) - (uint)(fVar26 < 0.0);
          iVar5 = *(int *)(param_2 + 0x10);
          iVar7 = *(int *)(param_2 + 0x14);
          if (((iVar5 <= iVar8 && iVar8 <= iVar12) && iVar7 <= iVar9) && iVar9 == iVar6 ||
              (((iVar5 <= iVar8 && iVar8 <= iVar12) && iVar7 <= iVar9) && iVar9 - iVar6 < 0) !=
              (((iVar5 <= iVar8 && iVar8 <= iVar12) && iVar7 <= iVar9) && SBORROW4(iVar9,iVar6))) {
            lVar19 = *(long *)PTR_DAT_04bb46b0;
            if (lVar19 == 0) {
LAB_0228d7ac:
              lVar19 = 0;
              lVar14 = *plVar22;
              if (lVar14 != 0) goto LAB_0228d7b8;
LAB_0228d7d4:
              uVar18 = 0;
            }
            else {
              puVar20 = *(undefined8 **)(lVar19 + 0x10);
              if ((*(byte *)(lVar19 + 0x453) & 1) == 0) {
                lVar14 = (**(code **)(*(long *)*puVar20 + 0x38))();
                lVar19 = 0;
                if (lVar14 != 0) {
                  lVar19 = lVar14 + 0x70;
                }
                lVar14 = *(long *)(lVar19 + (long)plVar22);
              }
              else {
                if ((puVar20 == (undefined8 *)0x0) || ((long *)puVar20[0x26] == (long *)0x0))
                goto LAB_0228d7ac;
                lVar19 = (**(code **)(*(long *)puVar20[0x26] + 0x38))();
                lVar14 = *(long *)(lVar19 + (long)plVar22);
              }
              if (lVar14 == 0) goto LAB_0228d7d4;
LAB_0228d7b8:
              if (*(undefined8 **)(lVar14 + 0x10) == (undefined8 *)0x0) goto LAB_0228d7d4;
              uVar18 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
              uVar18 = uVar18 & 0xffffffff;
            }
            local_98 = 0;
            lVar14 = *(long *)PTR_DAT_04bb2720;
            local_a0 = puVar2;
            if ((lVar14 == 0) || (*(long *)(lVar14 + 0x330) == 0)) {
              puVar20 = &DAT_055c04a0;
            }
            else {
              puVar20 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
              iVar12 = FUN_006bd550(*puVar20,0);
              puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
              if (iVar12 != 0x758f7eaf) {
                puVar20 = &DAT_055c04a0;
              }
            }
            local_94 = *(undefined4 *)(puVar20 + 7);
            local_90 = FUN_017baf44();
            local_90 = local_90 & 1;
            if ((*(long *)(lVar19 + (long)plVar22) != 0) &&
               (plVar15 = *(long **)(*(long *)(lVar19 + (long)plVar22) + 0x20),
               plVar15 != (long *)0x0)) {
              local_88 = *(undefined **)((long)plVar22 + lVar19 + -0x20);
              local_80 = *(undefined8 *)((long)plVar22 + lVar19 + -0x18);
              uStack_78 = 0x6c;
              (**(code **)(*plVar15 + 0x20))(plVar15,&local_88);
            }
            lVar14 = *(long *)((long)plVar22 + lVar19 + -0x18) +
                     *(long *)((long)plVar22 + lVar19 + -0x20);
            fVar25 = *(float *)(lVar14 + 0x14);
            fVar26 = *(float *)(lVar14 + 0x1c);
            local_80 = CONCAT44((int)((float)(int)fVar26 / 5.0) - (uint)(fVar26 < 0.0),
                                (int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0));
            local_88 = puVar3;
            uVar16 = FUN_01a4f798(&local_a0,0,&local_88);
            if (((uVar16 & 1) != 0) &&
               (lVar14 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xd0), lVar14 != 0
               )) {
              FUN_012e5af4(lVar14,&local_88);
            }
            if ((*(long *)(lVar19 + (long)plVar22) != 0) &&
               (plVar15 = *(long **)(*(long *)(lVar19 + (long)plVar22) + 0x20),
               plVar15 != (long *)0x0)) {
              local_88 = *(undefined **)((long)plVar22 + lVar19 + -0x20);
              local_80 = *(undefined8 *)((long)plVar22 + lVar19 + -0x18);
              uStack_78 = 0x6c;
              (**(code **)(*plVar15 + 0x20))(plVar15,&local_88);
            }
            puVar20 = (undefined8 *)
                      (*(long *)((long)plVar22 + lVar19 + -0x18) +
                      *(long *)((long)plVar22 + lVar19 + -0x20));
            *(undefined8 *)((long)puVar20 + 0x5c) = 0;
            puVar20[2] = 0;
            puVar20[3] = 0;
            *(undefined8 *)((long)puVar20 + 0x14) = 0;
            *puVar20 = 0;
            puVar20[1] = 0;
            *(undefined4 *)((long)puVar20 + 0xc) = 9;
            *(undefined4 *)(puVar20 + 2) = 0x3f000000;
            *(undefined4 *)((long)puVar20 + 0x1c) = 0;
            *(undefined8 *)((long)puVar20 + 0x54) = 0;
            *(undefined8 *)((long)puVar20 + 0x4c) = 0;
            *(undefined8 *)((long)puVar20 + 0x44) = 0;
            *(undefined8 *)((long)puVar20 + 100) = 0x300000004;
            puVar20[4] = 0;
            puVar20[5] = 0;
            puVar20[4] = 0x3f00000000000009;
            puVar20[6] = 0;
            puVar20[7] = 0;
            *(undefined4 *)((long)puVar20 + 0x3c) = 0;
            *(undefined4 *)(puVar20 + 8) = 0;
            *(undefined1 *)(puVar20 + 8) = 2;
            lVar14 = *(long *)puVar11;
            *(undefined8 *)((long)puVar20 + 0x2c) = 0;
            *(undefined8 *)((long)puVar20 + 0x34) = 0;
            if (lVar14 == 0) {
LAB_0228da50:
              lVar14 = 0;
            }
            else {
              puVar20 = *(undefined8 **)(lVar14 + 0x10);
              if ((*(byte *)(lVar14 + 0x453) & 1) == 0) {
                lVar17 = (**(code **)(*(long *)*puVar20 + 0x38))();
                lVar14 = 0;
                if (lVar17 != 0) {
                  lVar14 = lVar17 + 0x70;
                }
              }
              else {
                if (puVar20 == (undefined8 *)0x0) goto LAB_0228da50;
                lVar14 = 0;
                if ((long *)puVar20[0x26] != (long *)0x0) {
                  lVar14 = (**(code **)(*(long *)puVar20[0x26] + 0x38))();
                }
              }
            }
            if ((*(long *)(&LAB_001bfd88 + lVar14) == 0) ||
               (puVar20 = *(undefined8 **)(*(long *)(&LAB_001bfd88 + lVar14) + 0x10),
               puVar20 == (undefined8 *)0x0)) {
              uVar16 = 0;
            }
            else {
              uVar16 = (**(code **)*puVar20)();
              uVar16 = uVar16 & 0xffffffff;
            }
            iVar12 = *(int *)(param_1 + 0x354) + -1;
            *(int *)(param_1 + 0x354) = iVar12;
            if ((*(long *)(&LAB_001bfd88 + lVar14) != 0) &&
               (plVar15 = *(long **)(*(long *)(&LAB_001bfd88 + lVar14) + 0x20),
               plVar15 != (long *)0x0)) {
              local_88 = *(undefined **)(&LAB_001bfd68 + lVar14);
              local_80 = *(undefined8 *)(&LAB_001bfd70 + lVar14);
              uStack_78 = 0x1b8;
              (**(code **)(*plVar15 + 0x20))(plVar15,&local_88);
              iVar12 = *(int *)(param_1 + 0x354);
            }
            *(int *)(*(long *)(&LAB_001bfd70 + lVar14) + *(long *)(&LAB_001bfd68 + lVar14) + 0x1b4)
                 = iVar12;
            local_88 = (undefined *)CONCAT44(local_88._4_4_,6);
            if (plVar23[0xe] == 0) {
              iVar12 = 0;
LAB_0228db04:
              if (iVar12 == 4) goto LAB_0228db18;
            }
            else {
              iVar12 = *(int *)(plVar23[0xe] + 0x280);
              if (iVar12 != 6) goto LAB_0228db04;
LAB_0228db18:
              FUN_006fb3d0(plVar23);
            }
            if ((((uVar16 & 1) != 0) && (*(long *)(&LAB_001bfd88 + lVar14) != 0)) &&
               (puVar20 = *(undefined8 **)(*(long *)(&LAB_001bfd88 + lVar14) + 0x18),
               puVar20 != (undefined8 *)0x0)) {
              (**(code **)*puVar20)();
            }
            plVar15 = (long *)PTR_DAT_04bbe9d8;
            if ((((uVar18 & 1) != 0) && (*(long *)(lVar19 + (long)plVar22) != 0)) &&
               (puVar20 = *(undefined8 **)(*(long *)(lVar19 + (long)plVar22) + 0x18),
               puVar20 != (undefined8 *)0x0)) {
              (**(code **)*puVar20)();
            }
          }
        }
      }
    }
    lVar21 = lVar21 + 0x18;
    plVar22 = plVar22 + 0x134;
  } while (lVar21 != 0x60);
  uVar24 = *(uint *)(param_1 + 0x308);
  if ((uVar24 != 0) && (lVar21 = *(long *)puVar10, lVar21 != 0)) {
    plVar22 = *(long **)(*(long *)(*(long *)(lVar21 + 0x1c0) + 8) +
                        ((ulong)(uVar24 >> 0x11) & 0x7ff8));
    if ((plVar22 == (long *)0x0) ||
       (((*(uint *)(plVar22 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar22 + 0x46) != uVar24)))) {
      plVar22 = (long *)0x0;
    }
    if ((*(int *)(lVar21 + 0x288) == 1) || (*(int *)(lVar21 + 0x288) == -1)) {
      plVar23 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar21 = *(long *)puVar10;
      iVar12 = (**(code **)(*plVar23 + 0x60))();
      if (iVar12 < 0x11) {
        uVar24 = 1;
      }
      else {
        if (4 < *(uint *)(lVar21 + 0x5e8)) goto LAB_0228dc64;
        uVar24 = 0x1aU >> (ulong)(*(uint *)(lVar21 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_0228dc64:
      uVar24 = 0;
    }
    if (plVar22 != (long *)0x0) {
      lVar21 = plVar22[0x2a];
      if (((*PTR_DAT_04bbe9e0 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04bbe9e0), iVar12 != 0)) {
        *plVar15 = (long)(PTR_DAT_04bb3290 + 0x10);
        __cxa_guard_release(PTR_DAT_04bbe9e0);
      }
      uVar18 = (**(code **)(*plVar22 + 0x20))(plVar22,PTR_DAT_04bbe9d8);
      uVar4 = 0;
      if ((int)lVar21 == 1) {
        uVar4 = uVar24;
      }
      if (((uVar18 & 1) != 0) && (uVar4 != 0)) {
        iVar12 = *(int *)(param_2 + 0x20);
        iVar6 = *(int *)(param_2 + 0x24);
        iVar8 = (int)((float)(int)*(float *)(plVar22 + 0x5d) / 5.0) -
                (uint)(*(float *)(plVar22 + 0x5d) < 0.0);
        iVar9 = (int)((float)(int)*(float *)(plVar22 + 0x5e) / 5.0) -
                (uint)(*(float *)(plVar22 + 0x5e) < 0.0);
        iVar5 = *(int *)(param_2 + 0x10);
        iVar7 = *(int *)(param_2 + 0x14);
        if (((iVar5 <= iVar8 && iVar8 <= iVar12) && iVar7 <= iVar9) && iVar9 == iVar6 ||
            (((iVar5 <= iVar8 && iVar8 <= iVar12) && iVar7 <= iVar9) && iVar9 - iVar6 < 0) !=
            (((iVar5 <= iVar8 && iVar8 <= iVar12) && iVar7 <= iVar9) && SBORROW4(iVar9,iVar6))) {
          local_88 = (undefined *)CONCAT44(local_88._4_4_,4);
          if (plVar22[0xe] == 0) {
            iVar12 = 0;
          }
          else {
            iVar12 = *(int *)(plVar22[0xe] + 0x280);
            if (iVar12 == 4) goto LAB_0228ddb4;
          }
          local_a0 = (undefined *)CONCAT44(local_a0._4_4_,6);
          if (iVar12 != 6) {
            uVar24 = *(uint *)(plVar22 + 0x54);
            if ((int)uVar24 < 2) {
              lVar21 = *(long *)PTR_DAT_04bb4848 + 8 + (ulong)uVar24 * 0xd8;
              if (1 < uVar24) {
                lVar21 = *(long *)PTR_DAT_04bb4848 + 8;
              }
              *(uint *)(lVar21 + 0x1c) = uVar24;
              *(undefined8 *)(lVar21 + 8) = 0;
              *(undefined4 *)(lVar21 + 0x10) = 0;
              *(undefined8 *)(lVar21 + 0x20) = 9;
            }
            FUN_006fb3d0(plVar22);
            lVar21 = 0;
            if (plVar22[0xe] != 0) {
              lVar21 = plVar22[0xe] + 0x278;
            }
            FUN_03ebb160(lVar21,7);
          }
        }
      }
    }
  }
LAB_0228ddb4:
  uVar24 = *(uint *)(param_1 + 0x340);
  if (uVar24 == 0) {
    return 1;
  }
  lVar21 = *(long *)puVar10;
  if (lVar21 == 0) {
    return 1;
  }
  plVar22 = *(long **)(*(long *)(*(long *)(lVar21 + 0x1c0) + 8) + ((ulong)(uVar24 >> 0x11) & 0x7ff8)
                      );
  if (((plVar22 == (long *)0x0) || ((*(uint *)(plVar22 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar22 + 0x46) != uVar24)) {
    plVar22 = (long *)0x0;
  }
  if ((*(int *)(lVar21 + 0x288) == 1) || (*(int *)(lVar21 + 0x288) == -1)) {
    plVar23 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar21 = *(long *)puVar10;
    iVar12 = (**(code **)(*plVar23 + 0x60))();
    if (iVar12 < 0x11) {
      uVar24 = 1;
      goto joined_r0x0228de64;
    }
    if (*(uint *)(lVar21 + 0x5e8) < 5) {
      uVar24 = 0x1aU >> (ulong)(*(uint *)(lVar21 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0228de64;
    }
  }
  uVar24 = 0;
joined_r0x0228de64:
  if (plVar22 != (long *)0x0) {
    lVar21 = plVar22[0x2a];
    if (((*PTR_DAT_04bbe9e0 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_04bbe9e0), iVar12 != 0)) {
      *plVar15 = (long)(PTR_DAT_04bb3290 + 0x10);
      __cxa_guard_release(PTR_DAT_04bbe9e0);
    }
    uVar18 = (**(code **)(*plVar22 + 0x20))(plVar22,PTR_DAT_04bbe9d8);
    uVar4 = 0;
    if ((int)lVar21 == 1) {
      uVar4 = uVar24;
    }
    if (((uVar18 & 1) != 0) && (uVar4 != 0)) {
      iVar12 = *(int *)(param_2 + 0x20);
      iVar6 = *(int *)(param_2 + 0x24);
      iVar8 = (int)((float)(int)*(float *)(plVar22 + 0x5d) / 5.0) -
              (uint)(*(float *)(plVar22 + 0x5d) < 0.0);
      iVar9 = (int)((float)(int)*(float *)(plVar22 + 0x5e) / 5.0) -
              (uint)(*(float *)(plVar22 + 0x5e) < 0.0);
      iVar5 = *(int *)(param_2 + 0x10);
      iVar7 = *(int *)(param_2 + 0x14);
      if (((iVar5 <= iVar8 && iVar8 <= iVar12) && iVar7 <= iVar9) && iVar9 == iVar6 ||
          (((iVar5 <= iVar8 && iVar8 <= iVar12) && iVar7 <= iVar9) && iVar9 - iVar6 < 0) !=
          (((iVar5 <= iVar8 && iVar8 <= iVar12) && iVar7 <= iVar9) && SBORROW4(iVar9,iVar6))) {
        local_88 = (undefined *)CONCAT44(local_88._4_4_,4);
        if (plVar22[0xe] == 0) {
          iVar12 = 0;
        }
        else {
          iVar12 = *(int *)(plVar22[0xe] + 0x280);
          if (iVar12 == 4) {
            return 1;
          }
        }
        local_a0 = (undefined *)CONCAT44(local_a0._4_4_,6);
        if (iVar12 != 6) {
          uVar24 = *(uint *)(plVar22 + 0x54);
          if ((int)uVar24 < 2) {
            lVar21 = *(long *)PTR_DAT_04bb4848 + 8 + (ulong)uVar24 * 0xd8;
            if (1 < uVar24) {
              lVar21 = *(long *)PTR_DAT_04bb4848 + 8;
            }
            *(uint *)(lVar21 + 0x1c) = uVar24;
            *(undefined8 *)(lVar21 + 8) = 0;
            *(undefined4 *)(lVar21 + 0x10) = 0;
            *(undefined8 *)(lVar21 + 0x20) = 9;
          }
          FUN_006fb3d0(plVar22);
          lVar21 = 0;
          if (plVar22[0xe] != 0) {
            lVar21 = plVar22[0xe] + 0x278;
          }
          FUN_03ebb160(lVar21,7);
        }
      }
    }
  }
  return 1;
}


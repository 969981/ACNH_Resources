
void FUN_00945c80(undefined8 param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ushort uVar6;
  ushort uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  uint *puVar20;
  long lVar21;
  undefined *local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  int local_68;
  int iStack_64;
  
  puVar10 = PTR_DAT_04bb27a8;
  puVar9 = PTR_DAT_04bb2020;
  puVar8 = PTR_DAT_04bb2018;
  lVar12 = *(long *)PTR_DAT_04bb27a8;
  if (lVar12 == 0) {
    return;
  }
  if ((param_2 & 1) == 0) {
    local_70 = (undefined *)((ulong)local_70._4_4_ << 0x20);
  }
  else {
    if (*(int *)(lVar12 + 0x200) == 0) {
      uVar14 = 1;
    }
    else {
      uVar14 = 0x32;
    }
    local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar14);
    if (uVar14 == 0) {
      return;
    }
    local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar14);
    if (uVar14 != 0) {
      plVar4 = (long *)(lVar12 + 0x30) + uVar14;
      if (0x38 < uVar14) {
        plVar4 = (long *)(lVar12 + 0x30);
      }
      lVar15 = *plVar4;
      goto joined_r0x00945d1c;
    }
  }
  lVar15 = *(long *)(lVar12 + 0x1f8);
joined_r0x00945d1c:
  if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0xb8), lVar15 != 0)) {
    lVar21 = 0;
    puVar1 = PTR_DAT_04bb2018 + 0x10;
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    do {
      lVar3 = lVar15 + lVar21;
      uVar6 = *(ushort *)(lVar12 + 0xb90);
      uVar16 = (uint)uVar6;
      uVar17 = (uint)*(ushort *)(lVar3 + 0x18) - (uint)uVar6;
      uVar14 = *(uint *)(lVar12 + 0xb70);
      if (uVar17 < uVar14) {
        puVar19 = *(uint **)(*(long *)(lVar12 + 0xb78) + (long)(int)uVar17 * 8);
        if (puVar19 != (uint *)0x0) {
          uVar17 = *puVar19;
          if (uVar17 == 0 || puVar19 == (uint *)(ulong)uVar17) {
LAB_00945e90:
            uVar17 = 0;
          }
          else {
            puVar20 = (uint *)((long)puVar19 - (long)(ulong)uVar17);
            if (((*puVar20 == 0) || (uVar17 = puVar20[1], uVar17 == 0)) ||
               ((ulong)(ushort)puVar20[2] == 0)) goto LAB_00945e90;
            lVar5 = 0xc;
            if (*(char *)((long)puVar20 + 10) != '\0') {
              lVar5 = 0x1c;
            }
            lVar5 = (long)puVar20 + lVar5 + (ulong)(ushort)puVar20[2] * 8;
            if (lVar5 == 0) goto LAB_00945e90;
            uVar18 = 0;
            if ((ulong)uVar17 != 0) {
              uVar18 = (uint)((ulong)((long)puVar19 - lVar5) / (ulong)uVar17);
            }
            if (*puVar20 <= uVar18) {
              uVar18 = 0xffffffff;
            }
            if ((*(uint *)PTR_DAT_04bbbd58 <= uVar18) ||
               (uVar7 = *(ushort *)(*(long *)(PTR_DAT_04bbbd58 + 8) + (long)(int)uVar18 * 2),
               uVar17 = (uint)uVar7, 0x1f < uVar7)) goto LAB_00945e90;
          }
          local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar17);
          if (uVar17 != 0x1f) {
            uVar17 = (uint)*(ushort *)(lVar3 + 0x18) - (uint)uVar6;
            puVar13 = &DAT_0407ebb1;
            if (uVar17 < uVar14) {
              lVar12 = *(long *)(*(long *)(lVar12 + 0xb78) + (long)(int)uVar17 * 8);
              if (lVar12 == 0) {
                puVar13 = &DAT_0407ebb1;
              }
              else {
                puVar11 = (undefined8 *)
                          FUN_012660e0(lVar12,3,0x39b5a93d,*(undefined8 *)PTR_DAT_04bbc3a0);
                puVar13 = *(undefined8 **)PTR_PTR_04bbc3a8;
                if (puVar11 != (undefined8 *)0x0) {
                  puVar13 = puVar11;
                }
              }
            }
            local_68 = *(int *)(lVar3 + 0x1c) << 4;
            iStack_64 = *(int *)(lVar3 + 0x20) << 4;
            local_80 = puVar2;
            puStack_78 = puVar13;
            local_70 = puVar1;
            FUN_00944e70(param_1,&local_80,&local_70,0,param_2 & 1);
            lVar12 = *(long *)puVar10;
            uVar16 = (uint)*(ushort *)(lVar12 + 0xb90);
            uVar14 = *(uint *)(lVar12 + 0xb70);
          }
        }
      }
      uVar17 = *(ushort *)(lVar3 + 0x30) - uVar16;
      if (uVar17 < uVar14) {
        puVar19 = *(uint **)(*(long *)(lVar12 + 0xb78) + (long)(int)uVar17 * 8);
        if (puVar19 != (uint *)0x0) {
          uVar17 = *puVar19;
          if (uVar17 == 0 || puVar19 == (uint *)(ulong)uVar17) {
LAB_00945fe0:
            uVar17 = 0;
          }
          else {
            puVar20 = (uint *)((long)puVar19 - (long)(ulong)uVar17);
            if (((*puVar20 == 0) || (uVar17 = puVar20[1], uVar17 == 0)) ||
               ((ulong)(ushort)puVar20[2] == 0)) goto LAB_00945fe0;
            lVar5 = 0xc;
            if (*(char *)((long)puVar20 + 10) != '\0') {
              lVar5 = 0x1c;
            }
            lVar5 = (long)puVar20 + lVar5 + (ulong)(ushort)puVar20[2] * 8;
            if (lVar5 == 0) goto LAB_00945fe0;
            uVar18 = 0;
            if ((ulong)uVar17 != 0) {
              uVar18 = (uint)((ulong)((long)puVar19 - lVar5) / (ulong)uVar17);
            }
            if (*puVar20 <= uVar18) {
              uVar18 = 0xffffffff;
            }
            if ((*(uint *)PTR_DAT_04bbbd58 <= uVar18) ||
               (uVar6 = *(ushort *)(*(long *)(PTR_DAT_04bbbd58 + 8) + (long)(int)uVar18 * 2),
               uVar17 = (uint)uVar6, 0x1f < uVar6)) goto LAB_00945fe0;
          }
          local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar17);
          if (uVar17 != 0x1f) {
            uVar16 = *(ushort *)(lVar3 + 0x30) - uVar16;
            puVar13 = &DAT_0407ebb1;
            if (uVar16 < uVar14) {
              lVar12 = *(long *)(*(long *)(lVar12 + 0xb78) + (long)(int)uVar16 * 8);
              if (lVar12 == 0) {
                puVar13 = &DAT_0407ebb1;
              }
              else {
                puVar11 = (undefined8 *)
                          FUN_012660e0(lVar12,3,0x39b5a93d,*(undefined8 *)PTR_DAT_04bbc3a0);
                puVar13 = *(undefined8 **)PTR_PTR_04bbc3a8;
                if (puVar11 != (undefined8 *)0x0) {
                  puVar13 = puVar11;
                }
              }
            }
            local_70 = puVar8 + 0x10;
            local_68 = *(int *)(lVar3 + 0x34) << 4;
            iStack_64 = *(int *)(lVar3 + 0x38) << 4;
            local_80 = puVar9 + 0x10;
            puStack_78 = puVar13;
            FUN_00944e70(param_1,&local_80,&local_70,0,param_2 & 1);
            lVar12 = *(long *)puVar10;
            uVar16 = (uint)*(ushort *)(lVar12 + 0xb90);
            uVar14 = *(uint *)(lVar12 + 0xb70);
          }
        }
      }
      uVar17 = *(ushort *)(lVar3 + 0x48) - uVar16;
      if (uVar17 < uVar14) {
        puVar19 = *(uint **)(*(long *)(lVar12 + 0xb78) + (long)(int)uVar17 * 8);
        if (puVar19 != (uint *)0x0) {
          uVar17 = *puVar19;
          if (uVar17 == 0 || puVar19 == (uint *)(ulong)uVar17) {
LAB_00946130:
            uVar17 = 0;
          }
          else {
            puVar20 = (uint *)((long)puVar19 - (long)(ulong)uVar17);
            if (((*puVar20 == 0) || (uVar17 = puVar20[1], uVar17 == 0)) ||
               ((ulong)(ushort)puVar20[2] == 0)) goto LAB_00946130;
            lVar5 = 0xc;
            if (*(char *)((long)puVar20 + 10) != '\0') {
              lVar5 = 0x1c;
            }
            lVar5 = (long)puVar20 + lVar5 + (ulong)(ushort)puVar20[2] * 8;
            if (lVar5 == 0) goto LAB_00946130;
            uVar18 = 0;
            if ((ulong)uVar17 != 0) {
              uVar18 = (uint)((ulong)((long)puVar19 - lVar5) / (ulong)uVar17);
            }
            if (*puVar20 <= uVar18) {
              uVar18 = 0xffffffff;
            }
            if ((*(uint *)PTR_DAT_04bbbd58 <= uVar18) ||
               (uVar6 = *(ushort *)(*(long *)(PTR_DAT_04bbbd58 + 8) + (long)(int)uVar18 * 2),
               uVar17 = (uint)uVar6, 0x1f < uVar6)) goto LAB_00946130;
          }
          local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar17);
          if (uVar17 != 0x1f) {
            uVar16 = *(ushort *)(lVar3 + 0x48) - uVar16;
            puVar13 = &DAT_0407ebb1;
            if (uVar16 < uVar14) {
              lVar12 = *(long *)(*(long *)(lVar12 + 0xb78) + (long)(int)uVar16 * 8);
              if (lVar12 == 0) {
                puVar13 = &DAT_0407ebb1;
              }
              else {
                puVar11 = (undefined8 *)
                          FUN_012660e0(lVar12,3,0x39b5a93d,*(undefined8 *)PTR_DAT_04bbc3a0);
                puVar13 = *(undefined8 **)PTR_PTR_04bbc3a8;
                if (puVar11 != (undefined8 *)0x0) {
                  puVar13 = puVar11;
                }
              }
            }
            local_70 = puVar8 + 0x10;
            local_68 = *(int *)(lVar3 + 0x4c) << 4;
            iStack_64 = *(int *)(lVar3 + 0x50) << 4;
            local_80 = puVar9 + 0x10;
            puStack_78 = puVar13;
            FUN_00944e70(param_1,&local_80,&local_70,0,param_2 & 1);
            lVar12 = *(long *)puVar10;
            uVar16 = (uint)*(ushort *)(lVar12 + 0xb90);
            uVar14 = *(uint *)(lVar12 + 0xb70);
          }
        }
      }
      uVar17 = *(ushort *)(lVar3 + 0x60) - uVar16;
      if (uVar17 < uVar14) {
        puVar19 = *(uint **)(*(long *)(lVar12 + 0xb78) + (long)(int)uVar17 * 8);
        if (puVar19 != (uint *)0x0) {
          uVar17 = *puVar19;
          if (uVar17 == 0 || puVar19 == (uint *)(ulong)uVar17) {
LAB_00946280:
            uVar17 = 0;
          }
          else {
            puVar20 = (uint *)((long)puVar19 - (long)(ulong)uVar17);
            if (((*puVar20 == 0) || (uVar17 = puVar20[1], uVar17 == 0)) ||
               ((ulong)(ushort)puVar20[2] == 0)) goto LAB_00946280;
            lVar5 = 0xc;
            if (*(char *)((long)puVar20 + 10) != '\0') {
              lVar5 = 0x1c;
            }
            lVar5 = (long)puVar20 + lVar5 + (ulong)(ushort)puVar20[2] * 8;
            if (lVar5 == 0) goto LAB_00946280;
            uVar18 = 0;
            if ((ulong)uVar17 != 0) {
              uVar18 = (uint)((ulong)((long)puVar19 - lVar5) / (ulong)uVar17);
            }
            if (*puVar20 <= uVar18) {
              uVar18 = 0xffffffff;
            }
            if ((*(uint *)PTR_DAT_04bbbd58 <= uVar18) ||
               (uVar6 = *(ushort *)(*(long *)(PTR_DAT_04bbbd58 + 8) + (long)(int)uVar18 * 2),
               uVar17 = (uint)uVar6, 0x1f < uVar6)) goto LAB_00946280;
          }
          local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar17);
          if (uVar17 != 0x1f) {
            uVar16 = *(ushort *)(lVar3 + 0x60) - uVar16;
            puVar13 = &DAT_0407ebb1;
            if (uVar16 < uVar14) {
              lVar12 = *(long *)(*(long *)(lVar12 + 0xb78) + (long)(int)uVar16 * 8);
              if (lVar12 == 0) {
                puVar13 = &DAT_0407ebb1;
              }
              else {
                puVar11 = (undefined8 *)
                          FUN_012660e0(lVar12,3,0x39b5a93d,*(undefined8 *)PTR_DAT_04bbc3a0);
                puVar13 = *(undefined8 **)PTR_PTR_04bbc3a8;
                if (puVar11 != (undefined8 *)0x0) {
                  puVar13 = puVar11;
                }
              }
            }
            local_70 = puVar8 + 0x10;
            local_68 = *(int *)(lVar3 + 100) << 4;
            iStack_64 = *(int *)(lVar3 + 0x68) << 4;
            local_80 = puVar9 + 0x10;
            puStack_78 = puVar13;
            FUN_00944e70(param_1,&local_80,&local_70,0,param_2 & 1);
            lVar12 = *(long *)puVar10;
            uVar16 = (uint)*(ushort *)(lVar12 + 0xb90);
            uVar14 = *(uint *)(lVar12 + 0xb70);
          }
        }
      }
      uVar17 = *(ushort *)(lVar3 + 0x78) - uVar16;
      if (uVar17 < uVar14) {
        puVar19 = *(uint **)(*(long *)(lVar12 + 0xb78) + (long)(int)uVar17 * 8);
        if (puVar19 != (uint *)0x0) {
          uVar17 = *puVar19;
          uVar18 = 0;
          if ((uVar17 != 0) && (puVar19 != (uint *)(ulong)uVar17)) {
            puVar20 = (uint *)((long)puVar19 - (long)(ulong)uVar17);
            uVar18 = 0;
            if (*puVar20 != 0) {
              uVar17 = puVar20[1];
              if ((uVar17 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
                lVar5 = 0xc;
                if (*(char *)((long)puVar20 + 10) != '\0') {
                  lVar5 = 0x1c;
                }
                lVar5 = (long)puVar20 + lVar5 + (ulong)(ushort)puVar20[2] * 8;
                if (lVar5 != 0) {
                  uVar18 = 0;
                  if ((ulong)uVar17 != 0) {
                    uVar18 = (uint)((ulong)((long)puVar19 - lVar5) / (ulong)uVar17);
                  }
                  if (*puVar20 <= uVar18) {
                    uVar18 = 0xffffffff;
                  }
                  if ((uVar18 < *(uint *)PTR_DAT_04bbbd58) &&
                     (uVar18 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bbbd58 + 8) + (long)(int)uVar18 * 2),
                     uVar18 < 0x20)) goto LAB_009463d8;
                }
              }
              uVar18 = 0;
            }
          }
LAB_009463d8:
          local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar18);
          if (uVar18 != 0x1f) {
            uVar16 = *(ushort *)(lVar3 + 0x78) - uVar16;
            puVar13 = &DAT_0407ebb1;
            if (uVar16 < uVar14) {
              lVar12 = *(long *)(*(long *)(lVar12 + 0xb78) + (long)(int)uVar16 * 8);
              if (lVar12 == 0) {
                puVar13 = &DAT_0407ebb1;
              }
              else {
                puVar11 = (undefined8 *)
                          FUN_012660e0(lVar12,3,0x39b5a93d,*(undefined8 *)PTR_DAT_04bbc3a0);
                puVar13 = *(undefined8 **)PTR_PTR_04bbc3a8;
                if (puVar11 != (undefined8 *)0x0) {
                  puVar13 = puVar11;
                }
              }
            }
            local_70 = puVar8 + 0x10;
            local_68 = *(int *)(lVar3 + 0x7c) << 4;
            iStack_64 = *(int *)(lVar3 + 0x80) << 4;
            local_80 = puVar9 + 0x10;
            puStack_78 = puVar13;
            FUN_00944e70(param_1,&local_80,&local_70,0,param_2 & 1);
            lVar12 = *(long *)puVar10;
            uVar16 = (uint)*(ushort *)(lVar12 + 0xb90);
            uVar14 = *(uint *)(lVar12 + 0xb70);
          }
        }
      }
      uVar17 = *(ushort *)(lVar3 + 0x90) - uVar16;
      if (uVar17 < uVar14) {
        puVar19 = *(uint **)(*(long *)(lVar12 + 0xb78) + (long)(int)uVar17 * 8);
        if (puVar19 != (uint *)0x0) {
          uVar17 = *puVar19;
          uVar18 = 0;
          if ((uVar17 != 0) && (puVar19 != (uint *)(ulong)uVar17)) {
            puVar20 = (uint *)((long)puVar19 - (long)(ulong)uVar17);
            uVar18 = 0;
            if (*puVar20 != 0) {
              uVar17 = puVar20[1];
              if ((uVar17 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
                lVar5 = 0xc;
                if (*(char *)((long)puVar20 + 10) != '\0') {
                  lVar5 = 0x1c;
                }
                lVar5 = (long)puVar20 + lVar5 + (ulong)(ushort)puVar20[2] * 8;
                if (lVar5 != 0) {
                  uVar18 = 0;
                  if ((ulong)uVar17 != 0) {
                    uVar18 = (uint)((ulong)((long)puVar19 - lVar5) / (ulong)uVar17);
                  }
                  if (*puVar20 <= uVar18) {
                    uVar18 = 0xffffffff;
                  }
                  if ((uVar18 < *(uint *)PTR_DAT_04bbbd58) &&
                     (uVar18 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bbbd58 + 8) + (long)(int)uVar18 * 2),
                     uVar18 < 0x20)) goto LAB_00946528;
                }
              }
              uVar18 = 0;
            }
          }
LAB_00946528:
          local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar18);
          if (uVar18 != 0x1f) {
            uVar16 = *(ushort *)(lVar3 + 0x90) - uVar16;
            puVar13 = &DAT_0407ebb1;
            if (uVar16 < uVar14) {
              lVar12 = *(long *)(*(long *)(lVar12 + 0xb78) + (long)(int)uVar16 * 8);
              if (lVar12 == 0) {
                puVar13 = &DAT_0407ebb1;
              }
              else {
                puVar11 = (undefined8 *)
                          FUN_012660e0(lVar12,3,0x39b5a93d,*(undefined8 *)PTR_DAT_04bbc3a0);
                puVar13 = *(undefined8 **)PTR_PTR_04bbc3a8;
                if (puVar11 != (undefined8 *)0x0) {
                  puVar13 = puVar11;
                }
              }
            }
            local_70 = puVar8 + 0x10;
            local_68 = *(int *)(lVar3 + 0x94) << 4;
            iStack_64 = *(int *)(lVar3 + 0x98) << 4;
            local_80 = puVar9 + 0x10;
            puStack_78 = puVar13;
            FUN_00944e70(param_1,&local_80,&local_70,0,param_2 & 1);
            lVar12 = *(long *)puVar10;
            uVar16 = (uint)*(ushort *)(lVar12 + 0xb90);
            uVar14 = *(uint *)(lVar12 + 0xb70);
          }
        }
      }
      uVar17 = *(ushort *)(lVar3 + 0xa8) - uVar16;
      if (uVar17 < uVar14) {
        puVar19 = *(uint **)(*(long *)(lVar12 + 0xb78) + (long)(int)uVar17 * 8);
        if (puVar19 != (uint *)0x0) {
          uVar17 = *puVar19;
          uVar18 = 0;
          if ((uVar17 != 0) && (puVar19 != (uint *)(ulong)uVar17)) {
            puVar20 = (uint *)((long)puVar19 - (long)(ulong)uVar17);
            uVar18 = 0;
            if (*puVar20 != 0) {
              uVar17 = puVar20[1];
              if ((uVar17 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
                lVar5 = 0xc;
                if (*(char *)((long)puVar20 + 10) != '\0') {
                  lVar5 = 0x1c;
                }
                lVar5 = (long)puVar20 + lVar5 + (ulong)(ushort)puVar20[2] * 8;
                if (lVar5 != 0) {
                  uVar18 = 0;
                  if ((ulong)uVar17 != 0) {
                    uVar18 = (uint)((ulong)((long)puVar19 - lVar5) / (ulong)uVar17);
                  }
                  if (*puVar20 <= uVar18) {
                    uVar18 = 0xffffffff;
                  }
                  if ((uVar18 < *(uint *)PTR_DAT_04bbbd58) &&
                     (uVar18 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bbbd58 + 8) + (long)(int)uVar18 * 2),
                     uVar18 < 0x20)) goto LAB_00946678;
                }
              }
              uVar18 = 0;
            }
          }
LAB_00946678:
          local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar18);
          if (uVar18 != 0x1f) {
            uVar16 = *(ushort *)(lVar3 + 0xa8) - uVar16;
            puVar13 = &DAT_0407ebb1;
            if (uVar16 < uVar14) {
              lVar12 = *(long *)(*(long *)(lVar12 + 0xb78) + (long)(int)uVar16 * 8);
              if (lVar12 == 0) {
                puVar13 = &DAT_0407ebb1;
              }
              else {
                puVar11 = (undefined8 *)
                          FUN_012660e0(lVar12,3,0x39b5a93d,*(undefined8 *)PTR_DAT_04bbc3a0);
                puVar13 = *(undefined8 **)PTR_PTR_04bbc3a8;
                if (puVar11 != (undefined8 *)0x0) {
                  puVar13 = puVar11;
                }
              }
            }
            local_70 = puVar8 + 0x10;
            local_68 = *(int *)(lVar3 + 0xac) << 4;
            iStack_64 = *(int *)(lVar3 + 0xb0) << 4;
            local_80 = puVar9 + 0x10;
            puStack_78 = puVar13;
            FUN_00944e70(param_1,&local_80,&local_70,0,param_2 & 1);
            lVar12 = *(long *)puVar10;
            uVar16 = (uint)*(ushort *)(lVar12 + 0xb90);
            uVar14 = *(uint *)(lVar12 + 0xb70);
          }
        }
      }
      uVar17 = *(ushort *)(lVar3 + 0xc0) - uVar16;
      if (uVar17 < uVar14) {
        puVar19 = *(uint **)(*(long *)(lVar12 + 0xb78) + (long)(int)uVar17 * 8);
        if (puVar19 != (uint *)0x0) {
          uVar17 = *puVar19;
          uVar18 = 0;
          if ((uVar17 != 0) && (puVar19 != (uint *)(ulong)uVar17)) {
            puVar20 = (uint *)((long)puVar19 - (long)(ulong)uVar17);
            uVar18 = 0;
            if (*puVar20 != 0) {
              uVar17 = puVar20[1];
              if ((uVar17 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
                lVar5 = 0xc;
                if (*(char *)((long)puVar20 + 10) != '\0') {
                  lVar5 = 0x1c;
                }
                lVar5 = (long)puVar20 + lVar5 + (ulong)(ushort)puVar20[2] * 8;
                if (lVar5 != 0) {
                  uVar18 = 0;
                  if ((ulong)uVar17 != 0) {
                    uVar18 = (uint)((ulong)((long)puVar19 - lVar5) / (ulong)uVar17);
                  }
                  if (*puVar20 <= uVar18) {
                    uVar18 = 0xffffffff;
                  }
                  if ((uVar18 < *(uint *)PTR_DAT_04bbbd58) &&
                     (uVar18 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bbbd58 + 8) + (long)(int)uVar18 * 2),
                     uVar18 < 0x20)) goto LAB_009467c8;
                }
              }
              uVar18 = 0;
            }
          }
LAB_009467c8:
          local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar18);
          if (uVar18 != 0x1f) {
            uVar16 = *(ushort *)(lVar3 + 0xc0) - uVar16;
            puVar13 = &DAT_0407ebb1;
            if (uVar16 < uVar14) {
              lVar12 = *(long *)(*(long *)(lVar12 + 0xb78) + (long)(int)uVar16 * 8);
              if (lVar12 == 0) {
                puVar13 = &DAT_0407ebb1;
              }
              else {
                puVar11 = (undefined8 *)
                          FUN_012660e0(lVar12,3,0x39b5a93d,*(undefined8 *)PTR_DAT_04bbc3a0);
                puVar13 = *(undefined8 **)PTR_PTR_04bbc3a8;
                if (puVar11 != (undefined8 *)0x0) {
                  puVar13 = puVar11;
                }
              }
            }
            local_70 = puVar8 + 0x10;
            local_68 = *(int *)(lVar3 + 0xc4) << 4;
            iStack_64 = *(int *)(lVar3 + 200) << 4;
            local_80 = puVar9 + 0x10;
            puStack_78 = puVar13;
            FUN_00944e70(param_1,&local_80,&local_70,0,param_2 & 1);
            lVar12 = *(long *)puVar10;
            uVar16 = (uint)*(ushort *)(lVar12 + 0xb90);
            uVar14 = *(uint *)(lVar12 + 0xb70);
          }
        }
      }
      uVar17 = *(ushort *)(lVar3 + 0xd8) - uVar16;
      if (uVar17 < uVar14) {
        puVar19 = *(uint **)(*(long *)(lVar12 + 0xb78) + (long)(int)uVar17 * 8);
        if (puVar19 != (uint *)0x0) {
          uVar17 = *puVar19;
          uVar18 = 0;
          if ((uVar17 != 0) && (puVar19 != (uint *)(ulong)uVar17)) {
            puVar20 = (uint *)((long)puVar19 - (long)(ulong)uVar17);
            uVar18 = 0;
            if (*puVar20 != 0) {
              uVar17 = puVar20[1];
              if ((uVar17 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
                lVar5 = 0xc;
                if (*(char *)((long)puVar20 + 10) != '\0') {
                  lVar5 = 0x1c;
                }
                lVar5 = (long)puVar20 + lVar5 + (ulong)(ushort)puVar20[2] * 8;
                if (lVar5 != 0) {
                  uVar18 = 0;
                  if ((ulong)uVar17 != 0) {
                    uVar18 = (uint)((ulong)((long)puVar19 - lVar5) / (ulong)uVar17);
                  }
                  if (*puVar20 <= uVar18) {
                    uVar18 = 0xffffffff;
                  }
                  if ((uVar18 < *(uint *)PTR_DAT_04bbbd58) &&
                     (uVar18 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bbbd58 + 8) + (long)(int)uVar18 * 2),
                     uVar18 < 0x20)) goto LAB_00946918;
                }
              }
              uVar18 = 0;
            }
          }
LAB_00946918:
          local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar18);
          if (uVar18 != 0x1f) {
            uVar16 = *(ushort *)(lVar3 + 0xd8) - uVar16;
            puVar13 = &DAT_0407ebb1;
            if (uVar16 < uVar14) {
              lVar12 = *(long *)(*(long *)(lVar12 + 0xb78) + (long)(int)uVar16 * 8);
              if (lVar12 == 0) {
                puVar13 = &DAT_0407ebb1;
              }
              else {
                puVar11 = (undefined8 *)
                          FUN_012660e0(lVar12,3,0x39b5a93d,*(undefined8 *)PTR_DAT_04bbc3a0);
                puVar13 = *(undefined8 **)PTR_PTR_04bbc3a8;
                if (puVar11 != (undefined8 *)0x0) {
                  puVar13 = puVar11;
                }
              }
            }
            local_70 = puVar8 + 0x10;
            local_68 = *(int *)(lVar3 + 0xdc) << 4;
            iStack_64 = *(int *)(lVar3 + 0xe0) << 4;
            local_80 = puVar9 + 0x10;
            puStack_78 = puVar13;
            FUN_00944e70(param_1,&local_80,&local_70,0,param_2 & 1);
            lVar12 = *(long *)puVar10;
          }
        }
      }
      lVar21 = lVar21 + 0xd8;
    } while (lVar21 != 0x6c0);
  }
  return;
}


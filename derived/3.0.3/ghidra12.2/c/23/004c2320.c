
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_004c2320(undefined8 *param_1,long param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  uint uVar10;
  long *plVar11;
  char *pcVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 *puVar18;
  bool bVar19;
  long lVar20;
  long lVar21;
  undefined **local_2c0;
  char *local_2b8;
  undefined8 *local_2b0;
  long local_2a8;
  undefined1 local_2a0;
  undefined **local_c0;
  char *local_b8;
  undefined8 *puStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char acStack_90 [48];
  
  *(undefined1 *)(param_1 + 0x13) = 1;
  uVar16 = 0x80040200;
  if (*(char *)(param_2 + 0x34) != '\0') {
    FUN_004c9a00(acStack_90);
    lVar17 = (long)*(int *)(param_2 + 0x30);
    if (0 < *(int *)(param_2 + 0x30)) {
      lVar1 = (long)param_1 + 0x44;
      uVar14 = *(undefined8 *)PTR_PTR_04bd4d20;
      plVar2 = param_1 + 0xd;
LAB_004c2d1c:
      lVar13 = *(long *)(param_2 + 0x28);
      lVar17 = lVar17 + -1;
      switch(*(undefined1 *)(lVar13 + lVar17 * 0x10)) {
      case 1:
        plVar11 = *(long **)(lVar13 + lVar17 * 0x10 + 8);
        if (plVar11 != (long *)0x0) {
          if (((int)plVar11[2] == 0xb) && ((int)plVar11[5] == 0)) {
            iVar5 = *(int *)(param_1 + 6);
            if (param_3 == 1) {
              if (0 < iVar5) {
                lVar13 = 0;
                do {
                  uVar6 = **(ulong **)(param_1[5] + lVar13 * 8) & 0xfffffffffffffffe;
                  if (uVar6 != 0) {
                    uVar6 = FUN_0043a700(*plVar11,plVar11[1] - *plVar11,uVar6);
                    if ((uVar6 & 1) != 0) goto LAB_004c2a7c;
                    iVar5 = *(int *)(param_1 + 6);
                  }
                  lVar13 = lVar13 + 1;
                  if (iVar5 <= lVar13) break;
                } while( true );
              }
            }
            else if (0 < iVar5) {
              lVar13 = 0;
              do {
                uVar6 = **(ulong **)(param_1[5] + lVar13 * 8) & 0xfffffffffffffffe;
                if (uVar6 != 0) {
                  uVar6 = FUN_0043a700(*plVar11,plVar11[1] - *plVar11,uVar6);
                  if ((uVar6 & 1) != 0) goto LAB_004c2a9c;
                  iVar5 = *(int *)(param_1 + 6);
                }
                lVar13 = lVar13 + 1;
                if (iVar5 <= lVar13) break;
              } while( true );
            }
          }
          goto LAB_004c2e78;
        }
        break;
      case 2:
        plVar11 = *(long **)(lVar13 + lVar17 * 0x10 + 8);
        if (plVar11 == (long *)0x0) break;
        if (((int)plVar11[2] == 0xb) && ((int)plVar11[5] == 0)) {
          if (0 < *(int *)(param_1 + 6)) {
            lVar13 = 0;
            bVar19 = false;
            do {
              uVar6 = **(ulong **)(param_1[5] + lVar13 * 8) & 0xfffffffffffffffe;
              if ((uVar6 != 0) &&
                 (uVar6 = FUN_0043a700(*plVar11,plVar11[1] - *plVar11,uVar6), (uVar6 & 1) != 0)) {
                if ((*(byte *)(*(long *)(param_1[5] + lVar13 * 8) + 0x20) & 1) != 0)
                goto LAB_004c2e78;
                local_2b8 = acStack_90;
                local_2c0 = &PTR_LAB_04868700;
                local_2b0 = param_1;
                local_2a8 = (**(code **)(*(long *)*param_1 + 0x40))();
                lVar21 = FUN_004ca820(&local_2c0,plVar11,plVar11 + 3);
                if (lVar21 != 0) {
                  *(byte *)(lVar21 + 0x20) = *(byte *)(lVar21 + 0x20) | 2;
                  lVar20 = *(long *)(param_1[5] + lVar13 * 8);
                  *(long *)(param_1[5] + lVar13 * 8) = lVar21;
                  if (lVar20 != 0) {
                    FUN_004ca7b0(lVar20);
                    FUN_00438870(lVar20,0x28);
                  }
                  bVar19 = true;
                }
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < *(int *)(param_1 + 6));
            if (bVar19) goto joined_r0x004c2a2c;
          }
          plVar9 = plVar11 + 3;
          goto LAB_004c2b3c;
        }
        goto LAB_004c2e78;
      case 3:
        puVar18 = *(undefined8 **)(lVar13 + lVar17 * 0x10 + 8);
        if (puVar18 != (undefined8 *)0x0) {
          iVar5 = *(int *)(param_1 + 6);
          if (0 < iVar5) {
            lVar13 = 0;
            do {
              uVar6 = **(ulong **)(param_1[5] + lVar13 * 8) & 0xfffffffffffffffe;
              if (uVar6 != 0) {
                uVar6 = FUN_0043a700(puVar18[2],puVar18[3] - puVar18[2],uVar6);
                if ((uVar6 & 1) != 0) {
                  FUN_0043bf00(*(undefined8 *)(param_1[5] + lVar13 * 8),*puVar18,puVar18[1]);
                  iVar5 = *(int *)(param_1 + 6);
                  bVar19 = true;
                  goto joined_r0x004c2954;
                }
                iVar5 = *(int *)(param_1 + 6);
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < iVar5);
            bVar19 = false;
joined_r0x004c2954:
            if (0 < iVar5) {
              lVar13 = 0;
              do {
                uVar6 = **(ulong **)(param_1[5] + lVar13 * 8) & 0xfffffffffffffffe;
                if (uVar6 != 0) {
                  uVar6 = FUN_0043a700(puVar18[2],puVar18[3] - puVar18[2],uVar6);
                  if ((uVar6 & 1) != 0) goto LAB_004c2e78;
                  iVar5 = *(int *)(param_1 + 6);
                }
                lVar13 = lVar13 + 1;
              } while (lVar13 < iVar5);
            }
            if (bVar19) goto joined_r0x004c2a2c;
          }
          goto LAB_004c2e78;
        }
        break;
      case 7:
        lVar13 = *(long *)(lVar13 + lVar17 * 0x10 + 8);
        if (lVar13 != 0) {
          lVar21 = FUN_00429910(lVar13,0x24,0);
          if (lVar21 != 0) {
            local_2c0 = &PTR_LAB_04868700;
            local_2b8 = acStack_90;
            local_2b0 = param_1;
            local_2a8 = (**(code **)(*(long *)*param_1 + 0x40))();
            local_c0 = (undefined **)0x40a9c41;
            local_b8 = "";
            lVar13 = FUN_004ca820(&local_2c0,&local_c0,lVar13);
            if (lVar13 != 0) {
              FUN_004ca7b0();
              FUN_00438870(lVar13,0x28);
            }
          }
          goto joined_r0x004c2a2c;
        }
        break;
      case 8:
        plVar11 = *(long **)(lVar13 + lVar17 * 0x10 + 8);
        if (plVar11 == (long *)0x0) break;
        if ((*(int *)(param_1 + 8) == 1) && (*(char *)((long)param_1 + 0x99) != '\0')) {
          plVar9 = plVar11 + 2;
          if ((char *)*plVar9 == (char *)plVar11[3]) goto LAB_004c2b8c;
          if (*(char *)*plVar9 != '$') {
            iVar5 = FUN_004c8350(acStack_90,plVar9);
            if (-1 < iVar5) {
              uVar8 = (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,plVar9,iVar5);
              *(undefined8 *)param_1[7] = uVar8;
            }
            goto LAB_004c2b8c;
          }
          uVar6 = FUN_0043d930(0x2d36241f,
                               "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Version/hkVersionedTypeBuilder.cpp"
                               ,0x425,
                               "hkResult hkSerialize::VersionedTypeBuilder::applyPatchToType(const hkReflect::Version::PatchInfo *, VersionedTypeBuilder::PatchingBehavior)"
                               ,&DAT_0407ebb1,"Not implemented",&DAT_0413df78);
          if ((uVar6 & 1) == 0) goto LAB_004c2b8c;
          CallSupervisor(0x26);
          pcVar12 = (char *)*plVar11;
          if (pcVar12 != (char *)plVar11[1]) goto LAB_004c2b98;
LAB_004c26a0:
          iVar5 = *(int *)(param_1 + 8);
          if (iVar5 < (int)(*(uint *)((long)param_1 + 0x44) & 0x3fffffff)) {
            puVar18 = (undefined8 *)param_1[7];
          }
          else {
            puVar18 = (undefined8 *)FUN_00426720(uVar14,iVar5 + 1,8,param_1[7],iVar5,lVar1);
            param_1[7] = puVar18;
          }
          if (0 < iVar5) {
            FUN_0043aa30(puVar18 + 1,puVar18,(long)iVar5 << 3);
          }
          *puVar18 = 0;
          *(int *)(param_1 + 8) = iVar5 + 1;
        }
        else {
LAB_004c2b8c:
          pcVar12 = (char *)*plVar11;
          if (pcVar12 == (char *)plVar11[1]) goto LAB_004c26a0;
LAB_004c2b98:
          if (*pcVar12 == '$') {
            uVar6 = FUN_0043d930(0x7684e26c,
                                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Version/hkVersionedTypeBuilder.cpp"
                                 ,0x438,
                                 "hkResult hkSerialize::VersionedTypeBuilder::applyPatchToType(const hkReflect::Version::PatchInfo *, VersionedTypeBuilder::PatchingBehavior)"
                                 ,&DAT_0407ebb1,"Not implemented",&DAT_0413df78);
            if ((uVar6 & 1) != 0) {
              CallSupervisor(0x26);
            }
          }
          else {
            local_2c0 = (undefined **)*plVar11;
            local_2b8 = (char *)plVar11[1];
            iVar5 = FUN_004c8350(acStack_90,&local_2c0);
            if (iVar5 < 0) {
              iVar4 = *(int *)(param_1 + 8);
              iVar5 = iVar4 + 1;
              if (iVar4 < (int)(*(uint *)((long)param_1 + 0x44) & 0x3fffffff)) {
                puVar18 = (undefined8 *)param_1[7];
              }
              else {
                puVar18 = (undefined8 *)FUN_00426720(uVar14,iVar5,8,param_1[7],iVar4,lVar1);
                param_1[7] = puVar18;
              }
              if (0 < iVar4) {
                FUN_0043aa30(puVar18 + 1,puVar18,(long)iVar4 << 3);
              }
              uVar8 = 0;
            }
            else {
              uVar8 = (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,&local_2c0,iVar5);
              iVar4 = *(int *)(param_1 + 8);
              iVar5 = iVar4 + 1;
              if (iVar4 < (int)(*(uint *)((long)param_1 + 0x44) & 0x3fffffff)) {
                puVar18 = (undefined8 *)param_1[7];
              }
              else {
                puVar18 = (undefined8 *)FUN_00426720(uVar14,iVar5,8,param_1[7],iVar4,lVar1);
                param_1[7] = puVar18;
              }
              if (0 < iVar4) {
                FUN_0043aa30(puVar18 + 1,puVar18,(long)iVar4 << 3);
                *puVar18 = uVar8;
                *(int *)(param_1 + 8) = iVar5;
                goto joined_r0x004c2a2c;
              }
            }
            *puVar18 = uVar8;
            *(int *)(param_1 + 8) = iVar5;
          }
        }
        goto joined_r0x004c2a2c;
      case 9:
      case 0xe:
      case 0xf:
      case 0x12:
        if (*(long *)(lVar13 + lVar17 * 0x10 + 8) != 0) goto joined_r0x004c2a2c;
        break;
      case 0xd:
        plVar11 = *(long **)(lVar13 + lVar17 * 0x10 + 8);
        if (plVar11 == (long *)0x0) break;
        iVar5 = *(int *)(param_1 + 6);
        if (param_3 != 1) {
          if (0 < iVar5) {
            lVar13 = 0;
            do {
              uVar6 = FUN_0043a700(*plVar11,plVar11[1] - *plVar11,
                                   **(ulong **)(param_1[5] + lVar13 * 8) & 0xfffffffffffffffe);
              if ((uVar6 & 1) != 0) {
                FUN_004225d0(&local_2c0,&DAT_04084559);
                FUN_00423880(&local_2c0,**(ulong **)(param_1[5] + lVar13 * 8) & 0xfffffffffffffffe,
                             0xffffffff);
                FUN_0043bfc0(*(undefined8 *)(param_1[5] + lVar13 * 8),&local_2c0);
                FUN_00422550(&local_2c0);
                break;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < *(int *)(param_1 + 6));
          }
          goto LAB_004c2b38;
        }
        if (0 < iVar5) {
          lVar13 = 0;
          do {
            uVar6 = **(ulong **)(param_1[5] + lVar13 * 8) & 0xfffffffffffffffe;
            if (uVar6 != 0) {
              uVar6 = FUN_0043a700(*plVar11,plVar11[1] - *plVar11,uVar6);
              if ((uVar6 & 1) != 0) goto LAB_004c2a64;
              iVar5 = *(int *)(param_1 + 6);
            }
            lVar13 = lVar13 + 1;
            if (iVar5 <= lVar13) break;
          } while( true );
        }
        goto LAB_004c2e78;
      case 0x13:
        puVar18 = *(undefined8 **)(lVar13 + lVar17 * 0x10 + 8);
        if (puVar18 != (undefined8 *)0x0) {
          local_c0 = (undefined **)*puVar18;
          local_b8 = (char *)puVar18[1];
          local_2c0 = &PTR_LAB_04868700;
          local_2b8 = acStack_90;
          local_2b0 = param_1;
          local_2a8 = (**(code **)(*(long *)*param_1 + 0x40))();
          lVar13 = FUN_004ca820(&local_2c0,&local_c0,puVar18 + 2);
          if (lVar13 != 0) {
            uVar10 = *(uint *)(param_1 + 0x10);
            if (uVar10 == (*(uint *)((long)param_1 + 0x84) & 0x3fffffff)) {
              FUN_00426990(uVar14,param_1 + 0xf,0x28);
              uVar10 = *(uint *)(param_1 + 0x10);
            }
            lVar21 = param_1[0xf] + (long)(int)uVar10 * 0x28;
            FUN_0043bd90(lVar21,local_c0,local_b8);
            *(undefined1 *)(lVar21 + 0x20) = 0;
            *(undefined8 *)(lVar21 + 0x10) = 0;
            *(undefined8 *)(lVar21 + 0x18) = 0;
            *(long *)(lVar21 + 8) = lVar13;
            *(uint *)(param_1 + 0x10) = uVar10 + 1;
          }
          goto joined_r0x004c2a2c;
        }
        break;
      case 0x14:
        lVar13 = *(long *)(lVar13 + lVar17 * 0x10 + 8);
        if (lVar13 != 0) {
          if (0 < *(int *)(param_1 + 0xe)) {
            lVar20 = 0;
            lVar21 = 0;
            do {
              FUN_004297c0(&local_a0,*(ulong *)(*plVar2 + lVar20) & 0xfffffffffffffffe);
              uVar6 = FUN_00429cb0(&local_a0,lVar13);
              if ((uVar6 & 1) != 0) {
                bVar3 = *(byte *)(*plVar2 + lVar20 + 0x20);
                if ((bVar3 >> 1 & 1) == 0) {
                  *(byte *)(*plVar2 + lVar20 + 0x20) = bVar3 | 2;
                }
              }
              local_c0 = &PTR_LAB_04868700;
              local_b8 = acStack_90;
              puStack_b0 = param_1;
              local_a8 = (**(code **)(*(long *)*param_1 + 0x40))();
              lVar7 = FUN_004ca820(&local_c0,lVar13 + 0x10,lVar13 + 0x10);
              if (lVar7 != 0) {
                FUN_0043bd90(&local_2c0,local_a0,uStack_98);
                local_2a0 = 0;
                local_2b0 = (undefined8 *)0x0;
                local_2a8 = 0;
                uVar10 = *(uint *)(param_1 + 0xe);
                local_2b8 = (char *)lVar7;
                if (uVar10 == (*(uint *)((long)param_1 + 0x74) & 0x3fffffff)) {
                  FUN_00426990(uVar14,plVar2,0x28);
                  uVar10 = *(uint *)(param_1 + 0xe);
                }
                FUN_0043aa30(param_1[0xd] + 0x28,param_1[0xd],(long)(int)uVar10 * 0x28);
                plVar11 = (long *)param_1[0xd];
                *plVar11 = (long)local_2c0;
                plVar11[1] = (long)local_2b8;
                local_2c0 = (undefined **)0x0;
                local_2b8 = (char *)0x0;
                *(undefined1 *)(plVar11 + 4) = local_2a0;
                plVar11[2] = (long)local_2b0;
                plVar11[3] = local_2a8;
                *(uint *)(param_1 + 0xe) = uVar10 + 1;
                FUN_0043be10(&local_2c0);
                break;
              }
              lVar21 = lVar21 + 1;
              lVar20 = lVar20 + 0x28;
            } while (lVar21 < *(int *)(param_1 + 0xe));
          }
          goto joined_r0x004c2a2c;
        }
      }
      FUN_004426d0(&local_c0,&local_2c0,0x200);
      FUN_0043ac90(&local_c0,"Unknown Component");
      iVar5 = FUN_00422320(0x2e53f5e2,&local_2c0,
                           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Version/hkVersionedTypeBuilder.cpp"
                           ,0x512);
      if (iVar5 != 0) {
        CallSupervisor(0x26);
      }
      FUN_00442760(&local_c0);
      goto LAB_004c2e78;
    }
LAB_004c2d64:
    FUN_004225b0(&local_2c0);
    FUN_004297c0(&local_c0,param_1[1] & 0xfffffffffffffffe);
    uVar16 = *(undefined8 *)(param_2 + 0x10);
    iVar5 = *(int *)(param_2 + 0x18);
    FUN_004225f0(&local_2c0,local_c0,(int)local_b8 - (int)local_c0);
    iVar4 = FUN_004229e0(&local_2c0,0x3c,0,0x7fffffff);
    FUN_004225f0(&local_2c0,uVar16,iVar5 - (int)uVar16);
    if ((-1 < iVar4) && (iVar5 = FUN_004229e0(&local_2c0,0x3c,0,0x7fffffff), iVar5 < 0)) {
      uVar15 = (long)local_b8 - (long)local_c0;
      uVar6 = (long)iVar4;
      if (uVar15 <= (ulong)(long)iVar4) {
        uVar6 = uVar15;
      }
      FUN_00423880(&local_2c0,(char *)((long)local_c0 + uVar6),
                   ((int)local_c0 + (int)uVar15) - (int)(char *)((long)local_c0 + uVar6));
    }
    FUN_0043be70(param_1 + 1,local_2c0);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x24);
    FUN_00422550(&local_2c0);
    uVar16 = 0;
LAB_004c2e78:
    FUN_004c9960(acStack_90);
  }
  return uVar16;
LAB_004c2a64:
  puVar18 = *(undefined8 **)(param_1[5] + lVar13 * 8);
  FUN_0043be10(puVar18);
  *puVar18 = 0;
LAB_004c2b38:
  plVar9 = plVar11 + 2;
LAB_004c2b3c:
  FUN_004c20e0(param_1,acStack_90,plVar11,plVar9,0);
joined_r0x004c2a2c:
  if (lVar17 < 1) goto LAB_004c2d64;
  goto LAB_004c2d1c;
LAB_004c2a9c:
  FUN_004225d0(&local_2c0,&DAT_04084559);
  FUN_00423880(&local_2c0,**(ulong **)(param_1[5] + lVar13 * 8) & 0xfffffffffffffffe,0xffffffff);
  FUN_0043bfc0(*(undefined8 *)(param_1[5] + lVar13 * 8),&local_2c0);
  FUN_00422550(&local_2c0);
  goto joined_r0x004c2a2c;
LAB_004c2a7c:
  puVar18 = *(undefined8 **)(param_1[5] + lVar13 * 8);
  FUN_0043be10(puVar18);
  *puVar18 = 0;
  goto joined_r0x004c2a2c;
}


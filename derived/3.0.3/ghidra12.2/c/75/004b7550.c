
/* WARNING: Type propagation algorithm not settling */

int FUN_004b7550(long param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                undefined8 param_6,uint param_7,uint param_8,int param_9)

{
  ushort *puVar1;
  uint *puVar2;
  double *******pppppppdVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  undefined1 uVar7;
  char cVar8;
  short sVar9;
  ushort uVar10;
  uint uVar11;
  float fVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  long *plVar19;
  int iVar20;
  uint uVar21;
  undefined8 uVar22;
  undefined1 *puVar23;
  double *******pppppppdVar24;
  long lVar25;
  long lVar26;
  double *******pppppppdVar27;
  long lVar28;
  undefined8 *puVar29;
  double *******pppppppdVar30;
  double ******ppppppdVar31;
  long lVar32;
  undefined1 *puVar33;
  double *******pppppppdVar34;
  long lVar35;
  long lVar36;
  ulong uVar37;
  double *******pppppppdVar38;
  ulong uVar39;
  long lVar40;
  undefined8 uVar41;
  ulong uVar42;
  uint uVar43;
  uint uVar44;
  ulong uVar45;
  long *plVar46;
  ulong *puVar47;
  long lVar48;
  long lVar49;
  ulong uVar50;
  long *plVar51;
  long *plVar52;
  int iVar53;
  ulong uVar54;
  long lVar55;
  long lVar56;
  float fVar57;
  ulong local_2d20;
  undefined1 *local_2cb8;
  undefined8 local_2cb0;
  undefined1 local_2ca8 [3072];
  double *******local_20a8;
  ulong local_20a0;
  ulong local_2098;
  ulong local_2090;
  double *******local_a8;
  long local_a0;
  long *local_98;
  double *******local_90;
  long local_88;
  ulong local_80;
  
  fVar12 = DAT_04102e70;
  local_2cb8 = local_2ca8;
  local_2cb0 = 0x8000004000000000;
  uVar22 = *(undefined8 *)PTR_PTR_04bd4d28;
  if (0 < param_9) {
    lVar55 = (long)(int)param_7;
    lVar35 = lVar55 * 2;
    lVar48 = (long)(int)param_8;
    lVar25 = lVar48 * 2;
    iVar20 = 0;
    iVar18 = 0x4102000;
    do {
      uVar11 = param_9 - iVar20;
      lVar26 = (long)iVar20;
      uVar21 = uVar11;
      if (0x3ff < (int)uVar11) {
        uVar21 = 0x400;
      }
      iVar6 = *(int *)(param_2 + 0x10);
      if (iVar6 != 0) {
        pppppppdVar3 = (double *******)(local_2ca8 + (long)(int)(uVar21 << 3) + 0xc00);
        uVar39 = (ulong)uVar21;
        lVar40 = lVar55 * (lVar26 + 1);
        lVar36 = uVar39 - (uVar39 & 1);
        iVar53 = 0;
        lVar4 = param_3 + lVar40;
        do {
          lVar56 = *(long *)(param_2 + 8);
          lVar28 = lVar56 + (long)iVar53 * 0x38;
          if (0xc < *(byte *)(lVar28 + 8) - 1) goto switchD_004b8be0_caseD_3;
          uVar54 = (ulong)*(ushort *)(lVar28 + 0xc);
          pppppppdVar38 = (double *******)(param_3 + lVar26 * lVar55 + uVar54);
          lVar49 = (long)iVar53;
          pppppppdVar27 =
               (double *******)(param_5 + lVar26 * lVar48 + (ulong)*(ushort *)(lVar28 + 10));
          switch((uint)*(byte *)(lVar28 + 8)) {
          case 1:
            lVar28 = *(long *)(lVar56 + lVar49 * 0x38 + 0x20);
            uVar54 = FUN_00428440(lVar28);
            if ((uVar54 & 0x1f) != 2) {
              lVar28 = 0;
            }
            if (lVar28 == 0) {
              plVar19 = (long *)0x0;
            }
            else {
              plVar19 = (long *)FUN_00428370(lVar28);
              if (((ulong)plVar19 & 1) != 0) {
                FUN_0043dd30((ulong)plVar19 & 0xfffffffffffffffe);
              }
            }
            lVar56 = *(long *)(lVar56 + lVar49 * 0x38 + 0x18);
            uVar54 = FUN_00428440(lVar56);
            if ((uVar54 & 0x1f) != 2) {
              lVar56 = 0;
            }
            if (lVar56 == 0) {
              plVar51 = (long *)0x0;
            }
            else {
              plVar51 = (long *)FUN_00428370(lVar56);
              if (((ulong)plVar51 & 1) != 0) {
                FUN_0043dd30((ulong)plVar51 & 0xfffffffffffffffe);
              }
            }
            if ((int)uVar11 < 1) {
              iVar15 = 0xe;
              iVar14 = 0xe;
joined_r0x004b8a94:
              if (((ulong)plVar51 & 1) != 0) {
                FUN_0043dd50((ulong)plVar51 & 0xfffffffffffffffe);
                iVar14 = iVar15;
              }
            }
            else {
              iVar14 = 0;
              plVar46 = plVar19;
              do {
                local_20a8 = (double *******)((ulong)local_20a8 & 0xffffffffffffff00);
                plVar52 = (long *)((ulong)plVar51 & 0xfffffffffffffffe);
                (**(code **)(*plVar52 + 0x38))(plVar52,pppppppdVar27,lVar56,&local_20a8);
                plVar19 = (long *)((ulong)plVar46 & 0xfffffffffffffffe);
                iVar18 = (**(code **)(*plVar19 + 0x30))
                                   (plVar19,pppppppdVar38,lVar28,(ulong)local_20a8 & 0xff);
                if (iVar18 < 0) {
                  iVar15 = 1;
                  iVar14 = 1;
                  plVar19 = plVar46;
                  goto joined_r0x004b8a94;
                }
                if (((ulong)plVar46 & 1) != 0) {
                  FUN_0043dd50(plVar19);
                }
                pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar55);
                pppppppdVar27 = (double *******)((long)pppppppdVar27 + lVar48);
                if (((ulong)plVar51 & 1) != 0) {
                  FUN_0043dd50(plVar52);
                }
                iVar14 = iVar14 + 1;
                plVar46 = plVar19;
                plVar51 = plVar52;
              } while (iVar14 < (int)uVar21);
              iVar14 = 0xe;
            }
            if (((ulong)plVar19 & 1) != 0) {
              FUN_0043dd50((ulong)plVar19 & 0xfffffffffffffffe);
            }
            if (iVar14 != 0xe) goto LAB_004b96bc;
            break;
          case 2:
            lVar28 = *(long *)(lVar56 + lVar49 * 0x38 + 0x20);
            uVar54 = FUN_00428440(lVar28);
            if ((uVar54 & 0x1f) != 4) {
              lVar28 = 0;
            }
            if (lVar28 == 0) {
              plVar19 = (long *)0x0;
            }
            else {
              plVar19 = (long *)FUN_00428370(lVar28);
              if (((ulong)plVar19 & 1) != 0) {
                FUN_0043dd30((ulong)plVar19 & 0xfffffffffffffffe);
              }
            }
            lVar56 = *(long *)(lVar56 + lVar49 * 0x38 + 0x18);
            uVar54 = FUN_00428440(lVar56);
            if ((uVar54 & 0x1f) != 4) {
              lVar56 = 0;
            }
            if (lVar56 == 0) {
              plVar51 = (long *)0x0;
            }
            else {
              plVar51 = (long *)FUN_00428370(lVar56);
              if (((ulong)plVar51 & 1) != 0) {
                FUN_0043dd30((ulong)plVar51 & 0xfffffffffffffffe);
              }
            }
            if (0 < (int)uVar11) {
              iVar14 = 0;
              plVar46 = plVar19;
              plVar52 = plVar51;
              do {
                local_20a8 = (double *******)0x0;
                local_20a0 = local_20a0 & 0xffffffffffffff00;
                plVar51 = (long *)((ulong)plVar52 & 0xfffffffffffffffe);
                (**(code **)(*plVar51 + 0x38))(plVar51,pppppppdVar27,lVar56,&local_20a8);
                plVar19 = (long *)((ulong)plVar46 & 0xfffffffffffffffe);
                iVar18 = (**(code **)(*plVar19 + 0x30))(plVar19,pppppppdVar38,lVar28,&local_20a8);
                if (iVar18 < 0) {
                  iVar15 = 1;
                  iVar14 = 1;
                  plVar19 = plVar46;
                  plVar51 = plVar52;
                  goto joined_r0x004b8c84;
                }
                if (((ulong)plVar46 & 1) != 0) {
                  FUN_0043dd50(plVar19);
                }
                pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar55);
                pppppppdVar27 = (double *******)((long)pppppppdVar27 + lVar48);
                if (((ulong)plVar52 & 1) != 0) {
                  FUN_0043dd50(plVar51);
                }
                iVar14 = iVar14 + 1;
                plVar46 = plVar19;
                plVar52 = plVar51;
              } while (iVar14 < (int)uVar21);
            }
            iVar15 = 0x13;
            iVar14 = 0x13;
joined_r0x004b8c84:
            if (((ulong)plVar51 & 1) != 0) {
              FUN_0043dd50((ulong)plVar51 & 0xfffffffffffffffe);
              iVar14 = iVar15;
            }
            if (((ulong)plVar19 & 1) != 0) {
              FUN_0043dd50((ulong)plVar19 & 0xfffffffffffffffe);
            }
            if (iVar14 != 0x13) goto LAB_004b96bc;
            break;
          case 3:
            lVar28 = *(long *)(lVar56 + lVar49 * 0x38 + 0x20);
            uVar54 = FUN_00428440(lVar28);
            if ((uVar54 & 0x1f) != 5) {
              lVar28 = 0;
            }
            if (lVar28 == 0) {
              plVar19 = (long *)0x0;
            }
            else {
              plVar19 = (long *)FUN_00428370(lVar28);
              if (((ulong)plVar19 & 1) != 0) {
                FUN_0043dd30((ulong)plVar19 & 0xfffffffffffffffe);
              }
            }
            lVar56 = *(long *)(lVar56 + lVar49 * 0x38 + 0x18);
            uVar54 = FUN_00428440(lVar56);
            if ((uVar54 & 0x1f) != 5) {
              lVar56 = 0;
            }
            if (lVar56 == 0) {
              plVar51 = (long *)0x0;
            }
            else {
              plVar51 = (long *)FUN_00428370(lVar56);
              if (((ulong)plVar51 & 1) != 0) {
                FUN_0043dd30((ulong)plVar51 & 0xfffffffffffffffe);
              }
            }
            if ((int)uVar11 < 1) {
              iVar15 = 0x18;
              iVar14 = 0x18;
joined_r0x004b8b08:
              if (((ulong)plVar51 & 1) != 0) {
                FUN_0043dd50((ulong)plVar51 & 0xfffffffffffffffe);
                iVar14 = iVar15;
              }
            }
            else {
              iVar14 = 0;
              plVar46 = plVar19;
              do {
                local_20a8 = (double *******)0x0;
                plVar52 = (long *)((ulong)plVar51 & 0xfffffffffffffffe);
                (**(code **)(*plVar52 + 0x38))(plVar52,pppppppdVar27,lVar56,&local_20a8);
                plVar19 = (long *)((ulong)plVar46 & 0xfffffffffffffffe);
                iVar18 = (**(code **)(*plVar19 + 0x30))(local_20a8,plVar19,pppppppdVar38,lVar28);
                if (iVar18 < 0) {
                  iVar15 = 1;
                  iVar14 = 1;
                  plVar19 = plVar46;
                  goto joined_r0x004b8b08;
                }
                if (((ulong)plVar46 & 1) != 0) {
                  FUN_0043dd50(plVar19);
                }
                pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar55);
                pppppppdVar27 = (double *******)((long)pppppppdVar27 + lVar48);
                if (((ulong)plVar51 & 1) != 0) {
                  FUN_0043dd50(plVar52);
                }
                iVar14 = iVar14 + 1;
                plVar51 = plVar52;
                plVar46 = plVar19;
              } while (iVar14 < (int)uVar21);
              iVar14 = 0x18;
            }
            if (((ulong)plVar19 & 1) != 0) {
              FUN_0043dd50((ulong)plVar19 & 0xfffffffffffffffe);
            }
            if (iVar14 != 0x18) goto LAB_004b96bc;
            break;
          case 4:
            lVar28 = *(long *)(lVar56 + lVar49 * 0x38 + 0x20);
            uVar54 = FUN_00428440(lVar28);
            if (lVar28 == 0 || (uVar54 & 0x1f) != 6) {
              local_2d20 = 0;
            }
            else {
              local_2d20 = FUN_00428370(lVar28);
              if ((local_2d20 & 1) != 0) {
                FUN_0043dd30(local_2d20 & 0xfffffffffffffffe);
              }
            }
            lVar28 = *(long *)(lVar56 + lVar49 * 0x38 + 0x18);
            uVar54 = FUN_00428440(lVar28);
            if ((uVar54 & 0x1f) != 6) {
              lVar28 = 0;
            }
            if (lVar28 == 0) {
              plVar19 = (long *)0x0;
            }
            else {
              plVar19 = (long *)FUN_00428370();
              if (((ulong)plVar19 & 1) != 0) {
                FUN_0043dd30((ulong)plVar19 & 0xfffffffffffffffe);
                FUN_0043dd30((ulong)plVar19 & 0xfffffffffffffffe);
              }
            }
            if ((int)uVar11 < 1) {
              if (((ulong)plVar19 & 1) != 0) {
                FUN_0043dd50((ulong)plVar19 & 0xfffffffffffffffe);
                goto LAB_004b8eb0;
              }
            }
            else {
              plVar51 = plVar19;
              uVar16 = uVar21;
              do {
                local_88 = 0;
                local_80 = 0;
                plVar46 = (long *)((ulong)plVar51 & 0xfffffffffffffffe);
                local_90 = (double *******)0x0;
                (**(code **)(*plVar46 + 0x50))(plVar46,pppppppdVar27,lVar28,&local_90);
                if ((local_88 == 0) ||
                   (uVar54 = FUN_0044f8a0(local_88,&DAT_04c16210), (uVar54 & 1) == 0)) {
                  pppppppdVar24 = local_90;
                  *pppppppdVar38 = (double ******)0x0;
                  lVar56 = *(long *)(param_1 + 0x288);
                  local_a8 = pppppppdVar27;
                  local_a0 = lVar28;
                  local_98 = plVar51;
                  if (((ulong)plVar51 & 1) != 0) {
                    FUN_0043dd30(plVar46);
                  }
                  lVar32 = FUN_004272d0(local_a0);
                  lVar49 = local_a0;
                  pppppppdVar34 = local_a8;
                  if (lVar32 == lVar56) {
                    plVar52 = *(long **)(((ulong)local_98 & 0xfffffffffffffffe) + 0x10);
                    if (((ulong)plVar52 & 1) != 0) {
                      FUN_0043dd30((ulong)plVar52 & 0xfffffffffffffffe);
                      local_a8 = pppppppdVar34;
                      local_a0 = lVar49;
                      FUN_0043dd30((ulong)plVar52 & 0xfffffffffffffffe);
                    }
                    if (((ulong)local_98 & 1) != 0) {
                      FUN_0043dd50((ulong)local_98 & 0xfffffffffffffffe);
                    }
                    local_98 = plVar52;
                    if (((ulong)plVar52 & 1) != 0) {
                      FUN_0043dd50((ulong)plVar52 & 0xfffffffffffffffe);
                    }
LAB_004b8928:
                    (**(code **)(**(long **)(lVar56 + 0x2c0) + 0x20))
                              (&local_20a8,*(long **)(lVar56 + 0x2c0),&local_a8);
                    if (local_20a8 == (double *******)0x0) goto LAB_004b88b0;
LAB_004b8948:
                    uVar17 = FUN_004b9a20(lVar56);
                  }
                  else {
                    if (((ulong)local_98 & 0xfffffffffffffffe) != lVar56 + 0x1d8U)
                    goto LAB_004b8928;
                    FUN_004ba160(&local_20a8,lVar56 + 0x2c8,&local_a8);
                    if (local_20a8 != (double *******)0x0) goto LAB_004b8948;
LAB_004b88b0:
                    uVar17 = 0;
                  }
                  if ((local_2098 & 1) != 0) {
                    FUN_0043dd50(local_2098 & 0xfffffffffffffffe);
                  }
                  if (((ulong)local_98 & 1) != 0) {
                    FUN_0043dd50((ulong)local_98 & 0xfffffffffffffffe);
                  }
                  if (uVar17 == 0) {
                    if (pppppppdVar24 != (double *******)0x0) {
                      uVar17 = FUN_004b9a20(*(undefined8 *)(param_1 + 0x288),pppppppdVar24);
                      *(uint *)pppppppdVar38 = uVar17;
                    }
                  }
                  else {
                    *(uint *)pppppppdVar38 = uVar17;
                  }
                }
                else {
                  if (local_90 == (double *******)0x0) {
                    ppppppdVar31 = (double ******)0x0;
                  }
                  else {
                    ppppppdVar31 = (double ******)
                                   FUN_004b9c00(*(undefined8 *)(param_1 + 0x288),local_90);
                  }
                  *pppppppdVar38 = ppppppdVar31;
                }
                if (((ulong)plVar51 & 1) != 0) {
                  FUN_0043dd50(plVar46);
                }
                pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar55);
                pppppppdVar27 = (double *******)((long)pppppppdVar27 + lVar48);
                if ((local_80 & 1) != 0) {
                  FUN_0043dd50(local_80 & 0xfffffffffffffffe);
                }
                uVar16 = uVar16 - 1;
                plVar51 = plVar46;
              } while (uVar16 != 0);
              if (((ulong)plVar19 & 1) != 0) {
LAB_004b8eb0:
                FUN_0043dd50((ulong)plVar19 & 0xfffffffffffffffe);
              }
            }
            if ((local_2d20 & 1) == 0) {
              iVar18 = 0;
            }
            else {
              FUN_0043dd50(local_2d20 & 0xfffffffffffffffe);
              iVar18 = 0;
            }
            break;
          case 5:
            if ((int)(local_2cb0._4_4_ & 0x3fffffff) < (int)((uint)local_2cb0 + uVar21)) {
              local_2cb8 = (undefined1 *)
                           FUN_00426720(uVar22,(uint)local_2cb0 + uVar21,0x30,local_2cb8,
                                        local_2cb0 & 0xffffffff,(long)&local_2cb0 + 4);
            }
            lVar28 = *(long *)(lVar56 + lVar49 * 0x38 + 0x20);
            uVar54 = FUN_00428440(lVar28);
            if ((uVar54 & 0x1f) != 3) {
              lVar28 = 0;
            }
            if (lVar28 == 0) {
              uVar54 = 0;
            }
            else {
              uVar54 = FUN_00428370(lVar28);
              if ((uVar54 & 1) != 0) {
                FUN_0043dd30(uVar54 & 0xfffffffffffffffe);
              }
            }
            lVar56 = *(long *)(lVar56 + lVar49 * 0x38 + 0x18);
            uVar42 = FUN_00428440(lVar56);
            if ((uVar42 & 0x1f) != 3) {
              lVar56 = 0;
            }
            if (lVar56 == 0) {
              uVar42 = 0;
            }
            else {
              uVar42 = FUN_00428370(lVar56);
              if ((uVar42 & 1) != 0) {
                FUN_0043dd30(uVar42 & 0xfffffffffffffffe);
              }
            }
            if ((int)uVar11 < 1) {
              if ((uVar42 & 1) != 0) {
                FUN_0043dd50(uVar42 & 0xfffffffffffffffe);
              }
            }
            else {
              iVar14 = 0;
              do {
                if ((uVar54 & 1) != 0) {
                  FUN_0043dd30(uVar54 & 0xfffffffffffffffe);
                }
                if ((uVar42 & 1) != 0) {
                  FUN_0043dd30(uVar42 & 0xfffffffffffffffe);
                }
                if ((uint)local_2cb0 == (local_2cb0._4_4_ & 0x3fffffff)) {
                  FUN_00426990(uVar22,&local_2cb8,0x30);
                }
                puVar23 = local_2cb8;
                iVar15 = (int)local_2cb0;
                puVar29 = (undefined8 *)(local_2cb8 + (long)iVar15 * 0x30);
                puVar29[2] = uVar54;
                *puVar29 = pppppppdVar38;
                puVar29[1] = lVar28;
                if ((uVar54 & 1) != 0) {
                  FUN_0043dd30(uVar54 & 0xfffffffffffffffe);
                }
                *(ulong *)(puVar23 + (long)iVar15 * 0x30 + 0x28) = uVar42;
                *(double ********)(puVar23 + (long)iVar15 * 0x30 + 0x18) = pppppppdVar27;
                *(long *)(puVar23 + (long)iVar15 * 0x30 + 0x20) = lVar56;
                if ((uVar42 & 1) == 0) {
                  local_2cb0 = CONCAT44(local_2cb0._4_4_,iVar15 + 1);
                }
                else {
                  FUN_0043dd30(uVar42 & 0xfffffffffffffffe);
                  local_2cb0 = CONCAT44(local_2cb0._4_4_,iVar15 + 1);
                  FUN_0043dd50(uVar42 & 0xfffffffffffffffe);
                }
                if ((uVar54 & 1) != 0) {
                  FUN_0043dd50(uVar54 & 0xfffffffffffffffe);
                  FUN_0043dd50(uVar54 & 0xfffffffffffffffe);
                }
                uVar54 = uVar54 & 0xfffffffffffffffe;
                pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar55);
                pppppppdVar27 = (double *******)((long)pppppppdVar27 + lVar48);
                if ((uVar42 & 1) != 0) {
                  FUN_0043dd50(uVar42 & 0xfffffffffffffffe);
                }
                iVar14 = iVar14 + 1;
                uVar42 = uVar42 & 0xfffffffffffffffe;
              } while (iVar14 < (int)uVar21);
            }
            if ((uVar54 & 1) != 0) {
              FUN_0043dd50(uVar54 & 0xfffffffffffffffe);
            }
            break;
          case 6:
            lVar28 = *(long *)(lVar56 + lVar49 * 0x38 + 0x20);
            if (lVar28 == 0) {
              uVar54 = 0;
            }
            else {
              uVar54 = FUN_00428370(lVar28);
              if ((uVar54 & 1) != 0) {
                FUN_0043dd30(uVar54 & 0xfffffffffffffffe);
              }
            }
            lVar32 = *(long *)(lVar56 + lVar49 * 0x38 + 0x18);
            if (lVar32 == 0) {
              uVar42 = 0;
            }
            else {
              uVar42 = FUN_00428370(lVar32);
              if ((uVar42 & 1) != 0) {
                FUN_0043dd30(uVar42 & 0xfffffffffffffffe);
              }
            }
            iVar18 = (**(code **)(lVar56 + lVar49 * 0x38 + 0x28))
                               (pppppppdVar38,lVar28,pppppppdVar27,lVar32,uVar21);
            if ((uVar42 & 1) != 0) {
              FUN_0043dd50(uVar42 & 0xfffffffffffffffe);
            }
            if ((uVar54 & 1) != 0) {
              FUN_0043dd50(uVar54 & 0xfffffffffffffffe);
            }
            if (iVar18 < 0) goto LAB_004b96bc;
            break;
          case 7:
            lVar56 = lVar56 + lVar49 * 0x38;
            uVar41 = *(undefined8 *)(lVar56 + 0x20);
            uVar42 = FUN_00428440(uVar41);
            if ((uVar42 & 0x1f) != 4) {
              uVar41 = 0;
            }
            uVar42 = FUN_00428440(uVar41);
            uVar41 = *(undefined8 *)(lVar56 + 0x18);
            uVar45 = FUN_00428440(uVar41);
            if ((uVar45 & 0x1f) != 4) {
              uVar41 = 0;
            }
            uVar45 = FUN_00428440(uVar41);
            uVar16 = ((uint)(uVar42 >> 10) & 0x3fffff) + 7 >> 3;
            uVar37 = (ulong)uVar16;
            uVar17 = ((uint)(uVar45 >> 10) & 0x3fffff) + 7 >> 3;
            uVar50 = (ulong)uVar17;
            uVar43 = (uint)uVar45;
            iVar14 = uVar16 - uVar17;
            uVar44 = ((uint)uVar42 ^ uVar43) >> 8 & 1;
            if (iVar14 < 1) {
              if ((uVar45 & 0x100) != 0) {
                pppppppdVar27 = (double *******)((long)pppppppdVar27 + (long)-iVar14);
              }
              if (uVar44 == 0) {
                if (uVar16 != param_7 || uVar16 != param_8) {
                  if (uVar16 != 0 && 0 < (int)uVar11) {
                    uVar17 = 0;
                    do {
                      if (uVar37 - 1 < 7) {
                        lVar28 = 0;
                      }
                      else {
                        lVar28 = 0;
                        do {
                          puVar23 = (undefined1 *)((long)pppppppdVar27 + lVar28);
                          puVar33 = (undefined1 *)((long)pppppppdVar38 + lVar28);
                          lVar28 = lVar28 + 8;
                          *puVar33 = *puVar23;
                          puVar33[1] = puVar23[1];
                          puVar33[2] = puVar23[2];
                          puVar33[3] = puVar23[3];
                          puVar33[4] = puVar23[4];
                          puVar33[5] = puVar23[5];
                          puVar33[6] = puVar23[6];
                          puVar33[7] = puVar23[7];
                        } while (uVar37 - (uVar37 & 7) != lVar28);
                      }
                      if ((uVar16 & 7) != 0) {
                        lVar56 = -(uVar37 & 7);
                        do {
                          lVar56 = lVar56 + 1;
                          *(undefined1 *)((long)pppppppdVar38 + lVar28) =
                               *(undefined1 *)((long)pppppppdVar27 + lVar28);
                          lVar28 = lVar28 + 1;
                        } while (lVar56 != 0);
                      }
                      uVar17 = uVar17 + 1;
                      pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar55);
                      pppppppdVar27 = (double *******)((long)pppppppdVar27 + lVar48);
                    } while (uVar17 != uVar21);
                  }
                  break;
                }
                FUN_0043a3b0(pppppppdVar38,pppppppdVar27,uVar21 * param_8);
              }
              else if (0 < (int)uVar11) {
                switch(uVar16) {
                case 1:
                  if (uVar39 - 1 < 3) {
                    lVar28 = 0;
                  }
                  else {
                    lVar28 = 0;
                    pppppppdVar38 = pppppppdVar27;
                    lVar56 = param_3;
                    do {
                      *(undefined1 *)(lVar55 * lVar26 + uVar54 + lVar56) =
                           *(undefined1 *)pppppppdVar38;
                      lVar28 = lVar28 + 4;
                      *(undefined1 *)(lVar40 + uVar54 + lVar56) =
                           *(undefined1 *)(lVar48 + (long)pppppppdVar38);
                      *(undefined1 *)(lVar55 * (lVar26 + 2) + uVar54 + lVar56) =
                           *(undefined1 *)(lVar25 + (long)pppppppdVar38);
                      puVar23 = (undefined1 *)(lVar48 * 3 + (long)pppppppdVar38);
                      pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar48 * 4);
                      *(undefined1 *)(lVar55 * (lVar26 + 3) + uVar54 + lVar56) = *puVar23;
                      lVar56 = lVar56 + lVar55 * 4;
                    } while (uVar39 - (uVar39 & 3) != lVar28);
                  }
                  if ((uVar21 & 3) != 0) {
                    pppppppdVar27 = (double *******)((long)pppppppdVar27 + lVar48 * lVar28);
                    puVar23 = (undefined1 *)(param_3 + lVar55 * (lVar26 + lVar28) + uVar54);
                    lVar28 = -(uVar39 & 3);
                    do {
                      *puVar23 = *(undefined1 *)pppppppdVar27;
                      pppppppdVar27 = (double *******)((long)pppppppdVar27 + lVar48);
                      puVar23 = puVar23 + lVar55;
                      lVar28 = lVar28 + 1;
                    } while (lVar28 != 0);
                  }
                  break;
                case 2:
                  if (uVar39 == 1) {
                    lVar28 = 0;
                  }
                  else {
                    lVar56 = 0;
                    lVar28 = 0;
                    pppppppdVar24 = pppppppdVar27;
                    do {
                      *(ushort *)((long)pppppppdVar38 + lVar56) =
                           *(ushort *)pppppppdVar24 >> 8 | *(ushort *)pppppppdVar24 << 8;
                      lVar28 = lVar28 + 2;
                      puVar1 = (ushort *)(lVar48 + (long)pppppppdVar24);
                      pppppppdVar24 = (double *******)((long)pppppppdVar24 + lVar25);
                      *(ushort *)(lVar4 + uVar54 + lVar56) = *puVar1 >> 8 | *puVar1 << 8;
                      lVar56 = lVar56 + lVar35;
                    } while (lVar36 != lVar28);
                  }
                  if ((uVar21 & 1) != 0) {
                    uVar10 = *(ushort *)(lVar28 * lVar48 + (long)pppppppdVar27);
                    *(ushort *)(lVar28 * lVar55 + (long)pppppppdVar38) = uVar10 >> 8 | uVar10 << 8;
                  }
                  break;
                case 3:
                case 5:
                case 6:
                case 7:
                  break;
                case 4:
                  if (uVar39 == 1) {
                    lVar28 = 0;
                  }
                  else {
                    lVar56 = 0;
                    lVar28 = 0;
                    pppppppdVar24 = pppppppdVar27;
                    do {
                      uVar16 = (*(uint *)pppppppdVar24 & 0xff00ff00) >> 8 |
                               (*(uint *)pppppppdVar24 & 0xff00ff) << 8;
                      lVar28 = lVar28 + 2;
                      *(uint *)((long)pppppppdVar38 + lVar56) = uVar16 >> 0x10 | uVar16 << 0x10;
                      puVar2 = (uint *)(lVar48 + (long)pppppppdVar24);
                      pppppppdVar24 = (double *******)((long)pppppppdVar24 + lVar25);
                      uVar16 = (*puVar2 & 0xff00ff00) >> 8 | (*puVar2 & 0xff00ff) << 8;
                      *(uint *)(lVar4 + uVar54 + lVar56) = uVar16 >> 0x10 | uVar16 << 0x10;
                      lVar56 = lVar56 + lVar35;
                    } while (lVar36 != lVar28);
                  }
                  if ((uVar21 & 1) != 0) {
                    uVar16 = *(uint *)(lVar28 * lVar48 + (long)pppppppdVar27);
                    uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
                    *(uint *)(lVar28 * lVar55 + (long)pppppppdVar38) =
                         uVar16 >> 0x10 | uVar16 << 0x10;
                  }
                  break;
                case 8:
                  if (uVar39 == 1) {
                    lVar28 = 0;
                  }
                  else {
                    lVar56 = 0;
                    lVar28 = 0;
                    pppppppdVar24 = pppppppdVar27;
                    do {
                      uVar42 = ((ulong)*pppppppdVar24 & 0xff00ff00ff00ff00) >> 8 |
                               ((ulong)*pppppppdVar24 & 0xff00ff00ff00ff) << 8;
                      uVar42 = (uVar42 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar42 & 0xffff0000ffff) << 0x10;
                      lVar28 = lVar28 + 2;
                      *(ulong *)((long)pppppppdVar38 + lVar56) = uVar42 >> 0x20 | uVar42 << 0x20;
                      puVar47 = (ulong *)(lVar48 + (long)pppppppdVar24);
                      pppppppdVar24 = (double *******)((long)pppppppdVar24 + lVar25);
                      uVar42 = (*puVar47 & 0xff00ff00ff00ff00) >> 8 |
                               (*puVar47 & 0xff00ff00ff00ff) << 8;
                      uVar42 = (uVar42 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar42 & 0xffff0000ffff) << 0x10;
                      *(ulong *)(lVar4 + uVar54 + lVar56) = uVar42 >> 0x20 | uVar42 << 0x20;
                      lVar56 = lVar56 + lVar35;
                    } while (lVar36 != lVar28);
                  }
                  if ((uVar21 & 1) != 0) {
                    ppppppdVar31 = *(double *******)(lVar28 * lVar48 + (long)pppppppdVar27);
                    uVar54 = ((ulong)ppppppdVar31 & 0xff00ff00ff00ff00) >> 8 |
                             ((ulong)ppppppdVar31 & 0xff00ff00ff00ff) << 8;
                    uVar54 = (uVar54 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar54 & 0xffff0000ffff) << 0x10;
                    *(double *******)(lVar28 * lVar55 + (long)pppppppdVar38) =
                         (double ******)(uVar54 >> 0x20 | uVar54 << 0x20);
                  }
                  break;
                default:
                  goto switchD_004b8be0_default;
                }
                break;
              }
switchD_004b8be0_default:
            }
            else {
              bVar13 = (uVar42 & 0x100) != 0;
              lVar28 = 0;
              if (bVar13) {
                lVar28 = (long)iVar14;
              }
              uVar16 = uVar17 - 1;
              lVar56 = 1;
              if (bVar13) {
                uVar16 = uVar17;
                lVar56 = (long)-iVar14;
              }
              if ((int)uVar11 < 1) goto switchD_004b8be0_default;
              lVar49 = (long)(int)uVar16;
              if (uVar44 == 0) {
                if (uVar17 != 0) {
                  uVar16 = 0;
                  do {
                    if (uVar50 - 1 < 7) {
                      lVar32 = 0;
                    }
                    else {
                      lVar32 = 0;
                      do {
                        puVar23 = (undefined1 *)((long)pppppppdVar27 + lVar32 + 3);
                        puVar33 = (undefined1 *)((long)pppppppdVar38 + lVar32 + lVar28 + 3);
                        lVar32 = lVar32 + 8;
                        puVar33[-3] = puVar23[-3];
                        puVar33[-2] = puVar23[-2];
                        puVar33[-1] = puVar23[-1];
                        *puVar33 = *puVar23;
                        puVar33[1] = puVar23[1];
                        puVar33[2] = puVar23[2];
                        puVar33[3] = puVar23[3];
                        puVar33[4] = puVar23[4];
                      } while (uVar50 - (uVar50 & 7) != lVar32);
                    }
                    if ((uVar17 & 7) != 0) {
                      puVar23 = (undefined1 *)((long)pppppppdVar38 + lVar32 + lVar28);
                      puVar33 = (undefined1 *)((long)pppppppdVar27 + lVar32);
                      lVar32 = -(uVar50 & 7);
                      do {
                        lVar32 = lVar32 + 1;
                        *puVar23 = *puVar33;
                        puVar23 = puVar23 + 1;
                        puVar33 = puVar33 + 1;
                      } while (lVar32 != 0);
                    }
                    if ((uVar43 >> 9 & 1) != 0) {
                      FUN_0043a4d0((char *)((long)pppppppdVar38 + lVar49) + lVar56,
                                   (int)*(char *)((long)pppppppdVar38 + lVar49) >> 0x1f & 0xff,
                                   iVar14);
                    }
                    pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar55);
                    pppppppdVar27 = (double *******)((long)pppppppdVar27 + lVar48);
                    uVar16 = uVar16 + 1;
                  } while (uVar16 != uVar21);
                  goto switchD_004b8be0_default;
                }
                uVar16 = uVar21;
                do {
                  FUN_0043a3b0(lVar28 + (long)pppppppdVar38,pppppppdVar27,0);
                  if ((uVar43 >> 9 & 1) != 0) {
                    FUN_0043a4d0((char *)((long)pppppppdVar38 + lVar49) + lVar56,
                                 (int)*(char *)((long)pppppppdVar38 + lVar49) >> 0x1f & 0xff,iVar14)
                    ;
                  }
                  pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar55);
                  uVar16 = uVar16 - 1;
                  pppppppdVar27 = (double *******)((long)pppppppdVar27 + lVar48);
                } while (uVar16 != 0);
              }
              else if (uVar17 == 1) {
                uVar16 = uVar21;
                do {
                  *(undefined1 *)(lVar28 + (long)pppppppdVar38) = *(undefined1 *)pppppppdVar27;
                  if ((uVar43 >> 9 & 1) != 0) {
                    FUN_0043a4d0((char *)((long)pppppppdVar38 + lVar49) + lVar56,
                                 (int)*(char *)((long)pppppppdVar38 + lVar49) >> 0x1f & 0xff,iVar14)
                    ;
                  }
                  pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar55);
                  uVar16 = uVar16 - 1;
                  pppppppdVar27 = (double *******)((long)pppppppdVar27 + lVar48);
                } while (uVar16 != 0);
              }
              else {
                uVar16 = uVar21;
                do {
                  if (uVar17 == 2) {
                    *(ushort *)((long)pppppppdVar38 + lVar28) =
                         *(ushort *)pppppppdVar27 >> 8 | *(ushort *)pppppppdVar27 << 8;
                  }
                  else if (uVar17 == 4) {
                    uVar44 = (*(uint *)pppppppdVar27 & 0xff00ff00) >> 8 |
                             (*(uint *)pppppppdVar27 & 0xff00ff) << 8;
                    *(uint *)((long)pppppppdVar38 + lVar28) = uVar44 >> 0x10 | uVar44 << 0x10;
                  }
                  else if (uVar17 == 8) {
                    uVar54 = ((ulong)*pppppppdVar27 & 0xff00ff00ff00ff00) >> 8 |
                             ((ulong)*pppppppdVar27 & 0xff00ff00ff00ff) << 8;
                    uVar54 = (uVar54 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar54 & 0xffff0000ffff) << 0x10;
                    *(ulong *)((long)pppppppdVar38 + lVar28) = uVar54 >> 0x20 | uVar54 << 0x20;
                  }
                  if ((uVar43 >> 9 & 1) != 0) {
                    FUN_0043a4d0((char *)((long)pppppppdVar38 + lVar49) + lVar56,
                                 (int)*(char *)((long)pppppppdVar38 + lVar49) >> 0x1f & 0xff,iVar14)
                    ;
                  }
                  pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar55);
                  uVar16 = uVar16 - 1;
                  pppppppdVar27 = (double *******)((long)pppppppdVar27 + lVar48);
                } while (uVar16 != 0);
              }
            }
            break;
          case 8:
            lVar56 = lVar56 + lVar49 * 0x38;
            uVar41 = *(undefined8 *)(lVar56 + 0x20);
            uVar54 = FUN_00428440(uVar41);
            if ((uVar54 & 0x1f) != 5) {
              uVar41 = 0;
            }
            uVar54 = FUN_00428440(uVar41);
            uVar41 = *(undefined8 *)(lVar56 + 0x18);
            uVar42 = FUN_00428440(uVar41);
            if ((uVar42 & 0x1f) != 5) {
              uVar41 = 0;
            }
            uVar16 = FUN_00428440(uVar41);
            bVar13 = (uVar16 & 0x100) == 0;
            pppppppdVar24 = (double *******)&local_20a8;
            if (bVar13) {
              pppppppdVar24 = pppppppdVar27;
            }
            uVar17 = 8;
            if (bVar13) {
              uVar17 = param_8;
            }
            if ((uVar16 >> 8 & 1) != 0) {
              switch((uVar16 >> 10 & 1) + (uVar16 >> 0xb & 0x1f) + (uVar16 >> 0x10 & 0xff) + 7 >> 3)
              {
              case 1:
                if (&local_20a8 < pppppppdVar3) {
                  pppppppdVar34 = (double *******)&local_20a8;
                  do {
                    uVar7 = *(undefined1 *)pppppppdVar27;
                    pppppppdVar27 = (double *******)((long)pppppppdVar27 + lVar48);
                    pppppppdVar30 = pppppppdVar34 + 1;
                    *(undefined1 *)pppppppdVar34 = uVar7;
                    pppppppdVar34 = pppppppdVar30;
                  } while (pppppppdVar30 < pppppppdVar3);
                }
                break;
              case 2:
                if (&local_20a8 < pppppppdVar3) {
                  pppppppdVar34 = (double *******)&local_20a8;
                  do {
                    uVar10 = *(ushort *)pppppppdVar27;
                    pppppppdVar27 = (double *******)((long)pppppppdVar27 + lVar48);
                    pppppppdVar30 = pppppppdVar34 + 1;
                    *(ushort *)pppppppdVar34 = uVar10 >> 8 | uVar10 << 8;
                    pppppppdVar34 = pppppppdVar30;
                  } while (pppppppdVar30 < pppppppdVar3);
                }
                break;
              case 4:
                if (&local_20a8 < pppppppdVar3) {
                  pppppppdVar34 = (double *******)&local_20a8;
                  do {
                    uVar44 = *(uint *)pppppppdVar27;
                    pppppppdVar27 = (double *******)((long)pppppppdVar27 + lVar48);
                    uVar44 = (uVar44 & 0xff00ff00) >> 8 | (uVar44 & 0xff00ff) << 8;
                    pppppppdVar30 = pppppppdVar34 + 1;
                    *(uint *)pppppppdVar34 = uVar44 >> 0x10 | uVar44 << 0x10;
                    pppppppdVar34 = pppppppdVar30;
                  } while (pppppppdVar30 < pppppppdVar3);
                }
                break;
              case 8:
                if (&local_20a8 < pppppppdVar3) {
                  pppppppdVar34 = (double *******)&local_20a8;
                  do {
                    ppppppdVar31 = *pppppppdVar27;
                    pppppppdVar27 = (double *******)((long)pppppppdVar27 + lVar48);
                    uVar42 = ((ulong)ppppppdVar31 & 0xff00ff00ff00ff00) >> 8 |
                             ((ulong)ppppppdVar31 & 0xff00ff00ff00ff) << 8;
                    uVar42 = (uVar42 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar42 & 0xffff0000ffff) << 0x10;
                    pppppppdVar30 = pppppppdVar34 + 1;
                    *pppppppdVar34 = (double ******)(uVar42 >> 0x20 | uVar42 << 0x20);
                    pppppppdVar34 = pppppppdVar30;
                  } while (pppppppdVar30 < pppppppdVar3);
                }
              }
              uVar16 = uVar16 & 0xfffffeff;
            }
            uVar44 = (uint)uVar54;
            bVar13 = (uVar54 & 0x100) == 0;
            pppppppdVar27 = (double *******)&local_20a8;
            if (bVar13) {
              pppppppdVar27 = pppppppdVar38;
            }
            uVar43 = 8;
            if (bVar13) {
              uVar43 = param_7;
            }
            uVar5 = uVar44 & 0xfffffeff;
            if (uVar16 == 0x345e05) {
              if (uVar5 == 0x345e05) {
                pppppppdVar34 = (double *******)((long)pppppppdVar27 + (long)(int)(uVar43 * uVar21))
                ;
                if (pppppppdVar27 < pppppppdVar34) {
                  do {
                    *pppppppdVar27 = *pppppppdVar24;
                    pppppppdVar27 = (double *******)((long)pppppppdVar27 + (long)(int)uVar43);
                    pppppppdVar24 = (double *******)((long)pppppppdVar24 + (long)(int)uVar17);
                  } while (pppppppdVar27 < pppppppdVar34);
                }
              }
              else if (uVar5 == 0x174605) {
                pppppppdVar34 = (double *******)((long)pppppppdVar27 + (long)(int)(uVar43 * uVar21))
                ;
                if (pppppppdVar27 < pppppppdVar34) {
                  do {
                    ppppppdVar31 = *pppppppdVar24;
                    pppppppdVar24 = (double *******)((long)pppppppdVar24 + (long)(int)uVar17);
                    *(float *)pppppppdVar27 = (float)(double)ppppppdVar31;
                    pppppppdVar27 = (double *******)((long)pppppppdVar27 + (long)(int)uVar43);
                  } while (pppppppdVar27 < pppppppdVar34);
                }
              }
              else if ((uVar5 == 0x74605) &&
                      (pppppppdVar34 =
                            (double *******)((long)pppppppdVar27 + (long)(int)(uVar43 * uVar21)),
                      pppppppdVar27 < pppppppdVar34)) {
                do {
                  ppppppdVar31 = *pppppppdVar24;
                  pppppppdVar24 = (double *******)((long)pppppppdVar24 + (long)(int)uVar17);
                  *(short *)pppppppdVar27 =
                       (short)((uint)((float)(double)ppppppdVar31 * fVar12) >> 0x10);
                  pppppppdVar27 = (double *******)((long)pppppppdVar27 + (long)(int)uVar43);
                } while (pppppppdVar27 < pppppppdVar34);
              }
            }
            else if (uVar16 == 0x174605) {
              if (uVar5 == 0x345e05) {
                pppppppdVar34 = (double *******)((long)pppppppdVar27 + (long)(int)(uVar43 * uVar21))
                ;
                if (pppppppdVar27 < pppppppdVar34) {
                  do {
                    fVar57 = *(float *)pppppppdVar24;
                    pppppppdVar24 = (double *******)((long)pppppppdVar24 + (long)(int)uVar17);
                    *pppppppdVar27 = (double ******)(double)fVar57;
                    pppppppdVar27 = (double *******)((long)pppppppdVar27 + (long)(int)uVar43);
                  } while (pppppppdVar27 < pppppppdVar34);
                }
              }
              else if (uVar5 == 0x174605) {
                pppppppdVar34 = (double *******)((long)pppppppdVar27 + (long)(int)(uVar43 * uVar21))
                ;
                if (pppppppdVar27 < pppppppdVar34) {
                  do {
                    *(uint *)pppppppdVar27 = *(uint *)pppppppdVar24;
                    pppppppdVar27 = (double *******)((long)pppppppdVar27 + (long)(int)uVar43);
                    pppppppdVar24 = (double *******)((long)pppppppdVar24 + (long)(int)uVar17);
                  } while (pppppppdVar27 < pppppppdVar34);
                }
              }
              else if ((uVar5 == 0x74605) &&
                      (pppppppdVar34 =
                            (double *******)((long)pppppppdVar27 + (long)(int)(uVar43 * uVar21)),
                      pppppppdVar27 < pppppppdVar34)) {
                do {
                  fVar57 = *(float *)pppppppdVar24;
                  pppppppdVar24 = (double *******)((long)pppppppdVar24 + (long)(int)uVar17);
                  *(short *)pppppppdVar27 = (short)((uint)(fVar57 * fVar12) >> 0x10);
                  pppppppdVar27 = (double *******)((long)pppppppdVar27 + (long)(int)uVar43);
                } while (pppppppdVar27 < pppppppdVar34);
              }
            }
            else if (uVar16 == 0x74605) {
              if (uVar5 == 0x345e05) {
                pppppppdVar34 = (double *******)((long)pppppppdVar27 + (long)(int)(uVar43 * uVar21))
                ;
                if (pppppppdVar27 < pppppppdVar34) {
                  do {
                    uVar10 = *(ushort *)pppppppdVar24;
                    pppppppdVar24 = (double *******)((long)pppppppdVar24 + (long)(int)uVar17);
                    *pppppppdVar27 = (double ******)(double)(float)((uint)uVar10 << 0x10);
                    pppppppdVar27 = (double *******)((long)pppppppdVar27 + (long)(int)uVar43);
                  } while (pppppppdVar27 < pppppppdVar34);
                }
              }
              else if (uVar5 == 0x174605) {
                pppppppdVar34 = (double *******)((long)pppppppdVar27 + (long)(int)(uVar43 * uVar21))
                ;
                if (pppppppdVar27 < pppppppdVar34) {
                  do {
                    uVar10 = *(ushort *)pppppppdVar24;
                    pppppppdVar24 = (double *******)((long)pppppppdVar24 + (long)(int)uVar17);
                    *(uint *)pppppppdVar27 = (uint)uVar10 << 0x10;
                    pppppppdVar27 = (double *******)((long)pppppppdVar27 + (long)(int)uVar43);
                  } while (pppppppdVar27 < pppppppdVar34);
                }
              }
              else if ((uVar5 == 0x74605) &&
                      (pppppppdVar34 =
                            (double *******)((long)pppppppdVar27 + (long)(int)(uVar43 * uVar21)),
                      pppppppdVar27 < pppppppdVar34)) {
                do {
                  *(undefined2 *)pppppppdVar27 = *(undefined2 *)pppppppdVar24;
                  pppppppdVar27 = (double *******)((long)pppppppdVar27 + (long)(int)uVar43);
                  pppppppdVar24 = (double *******)((long)pppppppdVar24 + (long)(int)uVar17);
                } while (pppppppdVar27 < pppppppdVar34);
              }
            }
            if (((uVar44 >> 8 & 1) != 0) &&
               (uVar16 = (uVar44 >> 10 & 1) + (uVar44 >> 0xb & 0x1f) +
                         ((uint)(uVar54 >> 0x10) & 0xff) + 7 >> 3, uVar16 - 1 < 8)) {
              pppppppdVar27 = (double *******)((long)pppppppdVar38 + (long)(int)(uVar21 * param_7));
              switch(uVar16) {
              case 1:
                if (pppppppdVar38 < pppppppdVar27) {
                  pppppppdVar24 = (double *******)&local_20a8;
                  do {
                    *(undefined1 *)pppppppdVar38 = *(undefined1 *)pppppppdVar24;
                    pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar55);
                    pppppppdVar24 = pppppppdVar24 + 1;
                  } while (pppppppdVar38 < pppppppdVar27);
                }
                break;
              case 2:
                if (pppppppdVar38 < pppppppdVar27) {
                  pppppppdVar24 = (double *******)&local_20a8;
                  do {
                    *(ushort *)pppppppdVar38 =
                         *(ushort *)pppppppdVar24 >> 8 | *(ushort *)pppppppdVar24 << 8;
                    pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar55);
                    pppppppdVar24 = pppppppdVar24 + 1;
                  } while (pppppppdVar38 < pppppppdVar27);
                }
                break;
              case 4:
                if (pppppppdVar38 < pppppppdVar27) {
                  pppppppdVar24 = (double *******)&local_20a8;
                  do {
                    uVar16 = (*(uint *)pppppppdVar24 & 0xff00ff00) >> 8 |
                             (*(uint *)pppppppdVar24 & 0xff00ff) << 8;
                    *(uint *)pppppppdVar38 = uVar16 >> 0x10 | uVar16 << 0x10;
                    pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar55);
                    pppppppdVar24 = pppppppdVar24 + 1;
                  } while (pppppppdVar38 < pppppppdVar27);
                }
                break;
              case 8:
                if (pppppppdVar38 < pppppppdVar27) {
                  pppppppdVar24 = (double *******)&local_20a8;
                  do {
                    uVar54 = ((ulong)*pppppppdVar24 & 0xff00ff00ff00ff00) >> 8 |
                             ((ulong)*pppppppdVar24 & 0xff00ff00ff00ff) << 8;
                    uVar54 = (uVar54 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar54 & 0xffff0000ffff) << 0x10;
                    *pppppppdVar38 = (double ******)(uVar54 >> 0x20 | uVar54 << 0x20);
                    pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar55);
                    pppppppdVar24 = pppppppdVar24 + 1;
                  } while (pppppppdVar38 < pppppppdVar27);
                }
              }
            }
            goto switchD_004b9584_caseD_3;
          case 9:
            lVar56 = lVar56 + lVar49 * 0x38;
            FUN_00426fc0(*(undefined8 *)(lVar56 + 0x20));
            FUN_00426fc0(*(undefined8 *)(lVar56 + 0x18));
            uVar41 = *(undefined8 *)(lVar56 + 0x20);
            iVar14 = FUN_00426fc0(*(undefined8 *)(lVar56 + 0x18));
            iVar15 = FUN_00426fc0(uVar41);
            pppppppdVar24 = (double *******)((long)pppppppdVar38 + (long)(int)(uVar21 * param_7));
            if (pppppppdVar24 <= pppppppdVar38) goto switchD_004b8be0_default;
            if (iVar14 == 1) {
              switch(iVar15) {
              case 1:
                do {
                  cVar8 = *(char *)pppppppdVar27;
                  pppppppdVar27 = (double *******)((long)pppppppdVar27 + lVar48);
                  *(bool *)pppppppdVar38 = cVar8 != '\0';
                  pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar55);
                } while (pppppppdVar38 < pppppppdVar24);
                break;
              case 2:
                do {
                  cVar8 = *(char *)pppppppdVar27;
                  pppppppdVar27 = (double *******)((long)pppppppdVar27 + lVar48);
                  *(ushort *)pppppppdVar38 = (ushort)(cVar8 != '\0');
                  pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar55);
                } while (pppppppdVar38 < pppppppdVar24);
                break;
              default:
switchD_004b8248_caseD_3:
                do {
                } while( true );
              case 4:
                do {
                  cVar8 = *(char *)pppppppdVar27;
                  pppppppdVar27 = (double *******)((long)pppppppdVar27 + lVar48);
                  *(uint *)pppppppdVar38 = (uint)(cVar8 != '\0');
                  pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar55);
                } while (pppppppdVar38 < pppppppdVar24);
                break;
              case 8:
                do {
                  cVar8 = *(char *)pppppppdVar27;
                  pppppppdVar27 = (double *******)((long)pppppppdVar27 + lVar48);
                  *pppppppdVar38 = (double ******)(ulong)(cVar8 != '\0');
                  pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar55);
                } while (pppppppdVar38 < pppppppdVar24);
              }
            }
            else if (iVar14 == 2) {
              if (iVar15 == 1) {
                do {
                  sVar9 = *(short *)pppppppdVar27;
                  pppppppdVar27 = (double *******)((long)pppppppdVar27 + lVar48);
                  *(bool *)pppppppdVar38 = sVar9 != 0;
                  pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar55);
                } while (pppppppdVar38 < pppppppdVar24);
              }
              else if (iVar15 == 2) {
                do {
                  sVar9 = *(short *)pppppppdVar27;
                  pppppppdVar27 = (double *******)((long)pppppppdVar27 + lVar48);
                  *(ushort *)pppppppdVar38 = (ushort)(sVar9 != 0);
                  pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar55);
                } while (pppppppdVar38 < pppppppdVar24);
              }
              else if (iVar15 == 4) {
                do {
                  sVar9 = *(short *)pppppppdVar27;
                  pppppppdVar27 = (double *******)((long)pppppppdVar27 + lVar48);
                  *(uint *)pppppppdVar38 = (uint)(sVar9 != 0);
                  pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar55);
                } while (pppppppdVar38 < pppppppdVar24);
              }
              else {
                do {
                  if (iVar15 != 8) goto switchD_004b8248_caseD_3;
                  sVar9 = *(short *)pppppppdVar27;
                  pppppppdVar27 = (double *******)((long)pppppppdVar27 + lVar48);
                  *pppppppdVar38 = (double ******)(ulong)(sVar9 != 0);
                  pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar55);
                } while (pppppppdVar38 < pppppppdVar24);
              }
            }
            else if (iVar14 == 8) {
              do {
                if (7 < iVar15 - 1U) goto switchD_004b8248_caseD_3;
                ppppppdVar31 = *pppppppdVar27;
                switch(iVar15) {
                case 1:
                  *(bool *)pppppppdVar38 = ppppppdVar31 != (double ******)0x0;
                  break;
                case 2:
                  *(ushort *)pppppppdVar38 = (ushort)(ppppppdVar31 != (double ******)0x0);
                  break;
                default:
                  goto switchD_004b8248_caseD_3;
                case 4:
                  *(uint *)pppppppdVar38 = (uint)(ppppppdVar31 != (double ******)0x0);
                  break;
                case 8:
                  *pppppppdVar38 = (double ******)(ulong)(ppppppdVar31 != (double ******)0x0);
                }
                pppppppdVar27 = (double *******)((long)pppppppdVar27 + lVar48);
                pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar55);
              } while (pppppppdVar38 < pppppppdVar24);
            }
            else {
              do {
                if (iVar14 != 4) {
                  do {
                    /* WARNING: Do nothing block with infinite loop */
                  } while( true );
                }
                if (7 < iVar15 - 1U) goto switchD_004b8248_caseD_3;
                uVar16 = *(uint *)pppppppdVar27;
                switch(iVar15) {
                case 1:
                  *(bool *)pppppppdVar38 = uVar16 != 0;
                  break;
                case 2:
                  *(ushort *)pppppppdVar38 = (ushort)(uVar16 != 0);
                  break;
                default:
                  goto switchD_004b8248_caseD_3;
                case 4:
                  *(uint *)pppppppdVar38 = (uint)(uVar16 != 0);
                  break;
                case 8:
                  *pppppppdVar38 = (double ******)(ulong)(uVar16 != 0);
                }
                pppppppdVar27 = (double *******)((long)pppppppdVar27 + lVar48);
                pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar55);
              } while (pppppppdVar38 < pppppppdVar24);
            }
            break;
          case 10:
            lVar56 = lVar56 + lVar49 * 0x38;
            FUN_00426fc0(*(undefined8 *)(lVar56 + 0x20));
            FUN_00426fc0(*(undefined8 *)(lVar56 + 0x18));
            lVar28 = *(long *)(lVar56 + 0x18);
            local_20a0 = *(ulong *)(lVar56 + 0x20);
            uVar54 = 0;
            local_20a8 = pppppppdVar38;
            if (local_20a0 != 0) {
              uVar54 = FUN_00428370();
            }
            local_2098 = uVar54;
            if ((uVar54 & 1) != 0) {
              FUN_0043dd30(uVar54 & 0xfffffffffffffffe);
            }
            uVar54 = 0;
            local_90 = pppppppdVar27;
            local_88 = lVar28;
            if (lVar28 != 0) {
              uVar54 = FUN_00428370(lVar28);
            }
            local_80 = uVar54;
            if ((uVar54 & 1) != 0) {
              FUN_0043dd30(uVar54 & 0xfffffffffffffffe);
            }
            uVar16 = uVar21;
            if (0 < (int)uVar11) {
              do {
                FUN_00466cd0(param_1,&local_20a8,&local_90);
                local_20a8 = (double *******)((long)local_20a8 + lVar55);
                uVar42 = local_2098 & 0xfffffffffffffffe;
                uVar54 = local_2098 & 1;
                local_2098 = uVar42;
                if (uVar54 != 0) {
                  FUN_0043dd50();
                }
                local_90 = (double *******)((long)local_90 + lVar48);
                uVar42 = local_80 & 0xfffffffffffffffe;
                uVar54 = local_80 & 1;
                local_80 = uVar42;
                if (uVar54 != 0) {
                  FUN_0043dd50();
                }
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
              uVar54 = local_80;
            }
            if ((uVar54 & 1) != 0) {
              FUN_0043dd50(uVar54 & 0xfffffffffffffffe);
            }
            if ((local_2098 & 1) != 0) {
              FUN_0043dd50(local_2098 & 0xfffffffffffffffe);
            }
            break;
          case 0xb:
            lVar28 = *(long *)(lVar56 + lVar49 * 0x38 + 0x20);
            uVar54 = FUN_00428440(lVar28);
            if ((uVar54 & 0x1f) != 8) {
              lVar28 = 0;
            }
            uVar54 = FUN_00428440(lVar28);
            uVar42 = 0;
            if ((uVar54 & 0x1f) == 8 && lVar28 != 0) {
              uVar42 = FUN_00428370(lVar28);
            }
            if ((uVar42 & 1) != 0) {
              FUN_0043dd30(uVar42 & 0xfffffffffffffffe);
            }
            lVar28 = *(long *)(lVar56 + lVar49 * 0x38 + 0x18);
            uVar54 = FUN_00428440(lVar28);
            if ((uVar54 & 0x1f) != 8) {
              lVar28 = 0;
            }
            if (lVar28 == 0) {
              plVar19 = (long *)0x0;
            }
            else {
              plVar19 = (long *)FUN_00428370(lVar28);
              if (((ulong)plVar19 & 1) != 0) {
                FUN_0043dd30((ulong)plVar19 & 0xfffffffffffffffe);
              }
            }
            if ((int)uVar11 < 1) {
              if (((ulong)plVar19 & 1) != 0) {
                FUN_0043dd50((ulong)plVar19 & 0xfffffffffffffffe);
              }
              if ((uVar42 & 1) != 0) {
                FUN_0043dd50(uVar42 & 0xfffffffffffffffe);
              }
            }
            else {
              iVar18 = 0;
              do {
                if ((uVar42 & 1) != 0) {
                  FUN_0043dd30(uVar42 & 0xfffffffffffffffe);
                }
                plVar51 = (long *)((ulong)plVar19 & 0xfffffffffffffffe);
                if (((ulong)plVar19 & 1) != 0) {
                  FUN_0043dd30(plVar51);
                }
                local_2090 = 0;
                local_2098 = 0;
                local_20a0 = 0;
                local_20a8 = (double *******)0x0;
                (**(code **)(*plVar51 + 0x50))(plVar51,pppppppdVar27,lVar28,&local_20a8);
                uVar16 = FUN_004b97c0(*(undefined8 *)(param_1 + 0x288),local_20a8,local_20a0);
                *(uint *)pppppppdVar38 = uVar16;
                if ((local_2090 & 1) != 0) {
                  FUN_0043dd50(local_2090 & 0xfffffffffffffffe);
                }
                if (((ulong)plVar19 & 1) != 0) {
                  FUN_0043dd50(plVar51);
                }
                if ((uVar42 & 1) != 0) {
                  FUN_0043dd50(uVar42 & 0xfffffffffffffffe);
                  FUN_0043dd50(uVar42 & 0xfffffffffffffffe);
                }
                if (((ulong)plVar19 & 1) != 0) {
                  FUN_0043dd50(plVar51);
                }
                pppppppdVar27 = (double *******)((long)pppppppdVar27 + lVar48);
                pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar55);
                uVar42 = uVar42 & 0xfffffffffffffffe;
                iVar18 = iVar18 + 1;
                plVar19 = plVar51;
              } while (iVar18 < (int)uVar21);
              iVar18 = 0;
            }
switchD_004b9584_caseD_3:
            break;
          case 0xc:
            lVar28 = *(long *)(lVar56 + lVar49 * 0x38 + 0x20);
            uVar54 = FUN_00428440(lVar28);
            if ((uVar54 & 0x1f) != 7) {
              lVar28 = 0;
            }
            uVar54 = FUN_00428440(lVar28);
            uVar42 = 0;
            if ((uVar54 & 0x1f) == 7 && lVar28 != 0) {
              uVar42 = FUN_00428370(lVar28);
            }
            if ((uVar42 & 1) != 0) {
              FUN_0043dd30(uVar42 & 0xfffffffffffffffe);
            }
            lVar28 = *(long *)(lVar56 + lVar49 * 0x38 + 0x18);
            uVar54 = FUN_00428440(lVar28);
            uVar45 = 0;
            if (lVar28 != 0) {
              if ((uVar54 & 0x1f) == 7) {
                uVar45 = FUN_00428370(lVar28);
              }
              if ((uVar45 & 1) != 0) {
                FUN_0043dd30(uVar45 & 0xfffffffffffffffe);
              }
            }
            if ((int)uVar11 < 1) {
              bVar13 = true;
            }
            else {
              uVar54 = FUN_0043d930(0x28f4dd16,
                                    "../..\\Common/Base/Reflect/TypeVm/hkTypeVmFastCopyInterpreter.inl"
                                    ,0x20b,
                                    "hkResult hkTypeVm::FastCopyInterpreter::execRecord(const hkReflect::RecordVar &, const hkReflect::RecordVar &)"
                                    ,&DAT_0407ebb1,"Not implemented",&DAT_0413df78);
              bVar13 = false;
              if ((uVar54 & 1) != 0) {
                CallSupervisor(0x26);
              }
              iVar18 = -0x7ffbfe00;
            }
            if ((uVar45 & 1) != 0) {
              FUN_0043dd50(uVar45 & 0xfffffffffffffffe);
            }
            if ((uVar42 & 1) != 0) {
              FUN_0043dd50(uVar42 & 0xfffffffffffffffe);
            }
            if (!bVar13) goto LAB_004b96bc;
            break;
          case 0xd:
            uVar16 = *(uint *)(lVar56 + lVar49 * 0x38 + 0x18);
            uVar54 = (ulong)uVar16;
            if (!(uVar16 != param_7 || uVar16 != param_8)) {
              FUN_0043a3b0(pppppppdVar38,pppppppdVar27,uVar21 * param_8);
              goto switchD_004b8be0_default;
            }
            if ((0 < (int)uVar11) && (0 < (int)uVar16)) {
              uVar17 = 0;
              do {
                if (uVar54 - 1 < 7) {
                  lVar28 = 0;
                }
                else {
                  lVar28 = 0;
                  do {
                    puVar23 = (undefined1 *)((long)pppppppdVar27 + lVar28);
                    puVar33 = (undefined1 *)((long)pppppppdVar38 + lVar28);
                    lVar28 = lVar28 + 8;
                    *puVar33 = *puVar23;
                    puVar33[1] = puVar23[1];
                    puVar33[2] = puVar23[2];
                    puVar33[3] = puVar23[3];
                    puVar33[4] = puVar23[4];
                    puVar33[5] = puVar23[5];
                    puVar33[6] = puVar23[6];
                    puVar33[7] = puVar23[7];
                  } while (uVar54 - (uVar54 & 7) != lVar28);
                }
                if ((uVar16 & 7) != 0) {
                  lVar56 = -(uVar54 & 7);
                  do {
                    lVar56 = lVar56 + 1;
                    *(undefined1 *)((long)pppppppdVar38 + lVar28) =
                         *(undefined1 *)((long)pppppppdVar27 + lVar28);
                    lVar28 = lVar28 + 1;
                  } while (lVar56 != 0);
                }
                uVar17 = uVar17 + 1;
                pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar55);
                pppppppdVar27 = (double *******)((long)pppppppdVar27 + lVar48);
              } while (uVar17 != uVar21);
            }
          }
switchD_004b8be0_caseD_3:
          iVar53 = iVar53 + 1;
        } while (iVar6 != iVar53);
      }
      iVar20 = uVar21 + iVar20;
    } while (iVar20 < param_9);
  }
  if ((uint)local_2cb0 == 0) {
    iVar18 = 0;
    uVar21 = local_2cb0._4_4_;
  }
  else {
    lVar25 = (long)(int)(uint)local_2cb0 * 0x30;
    puVar29 = (undefined8 *)(local_2cb8 + 0x18);
    do {
      local_20a8 = (double *******)0x0;
      (**(code **)(*(long *)(puVar29[2] & 0xfffffffffffffffe) + 0x38))
                ((long *)(puVar29[2] & 0xfffffffffffffffe),*puVar29,puVar29[1],&local_20a8);
      iVar18 = (**(code **)(*(long *)(puVar29[-1] & 0xfffffffffffffffe) + 0x30))
                         ((long *)(puVar29[-1] & 0xfffffffffffffffe),puVar29[-3],puVar29[-2],
                          local_20a8);
      if (iVar18 < 0) {
        iVar20 = (uint)local_2cb0;
        goto joined_r0x004b9774;
      }
      lVar25 = lVar25 + -0x30;
      puVar29 = puVar29 + 6;
    } while (lVar25 != 0);
    iVar18 = 0;
LAB_004b96bc:
    iVar20 = (uint)local_2cb0;
joined_r0x004b9774:
    if (iVar20 < 1) {
      local_2cb0._4_4_ = (uint)(local_2cb0 >> 0x20);
      uVar21 = local_2cb0._4_4_;
    }
    else {
      puVar47 = (ulong *)(local_2cb8 + (long)iVar20 * 0x30 + -0x20);
      do {
        while ((puVar47[3] & 1) != 0) {
          FUN_0043dd50(puVar47[3] & 0xfffffffffffffffe);
          uVar39 = *puVar47;
          if ((uVar39 & 1) != 0) goto LAB_004b9710;
LAB_004b96f0:
          iVar20 = iVar20 + -1;
          puVar47 = puVar47 + -6;
          if (iVar20 == 0) goto LAB_004b9724;
        }
        uVar39 = *puVar47;
        if ((uVar39 & 1) == 0) goto LAB_004b96f0;
LAB_004b9710:
        FUN_0043dd50(uVar39 & 0xfffffffffffffffe);
        iVar20 = iVar20 + -1;
        puVar47 = puVar47 + -6;
      } while (iVar20 != 0);
LAB_004b9724:
      uVar21 = local_2cb0._4_4_;
    }
  }
  if ((-1 < (long)local_2cb0) &&
     (local_2cb0 = (ulong)uVar21 << 0x20, local_2cb8 != (undefined1 *)0x0)) {
    FUN_00421f90(uVar22,local_2cb8,0x30,uVar21 & 0x3fffffff);
  }
  return iVar18;
}


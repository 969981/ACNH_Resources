
/* WARNING: Type propagation algorithm not settling */

int FUN_0045d430(long param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                undefined8 param_6,undefined8 param_7,undefined8 param_8,int param_9)

{
  ushort *puVar1;
  uint *puVar2;
  double *******pppppppdVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  undefined1 uVar7;
  char cVar8;
  ushort uVar9;
  short sVar10;
  uint uVar11;
  float fVar12;
  undefined *puVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  undefined8 uVar26;
  undefined1 *puVar27;
  double *******pppppppdVar28;
  uint uVar29;
  long lVar30;
  long lVar31;
  double *******pppppppdVar32;
  double ******ppppppdVar33;
  double *******pppppppdVar34;
  long lVar35;
  double *******pppppppdVar36;
  uint uVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  double *******pppppppdVar41;
  ulong uVar42;
  long lVar43;
  undefined8 uVar44;
  long *plVar45;
  ulong uVar46;
  undefined1 *puVar47;
  ulong *puVar48;
  int iVar49;
  uint uVar50;
  uint uVar51;
  long lVar52;
  long lVar53;
  long *plVar54;
  long *plVar55;
  ulong uVar56;
  long lVar57;
  long lVar58;
  float fVar59;
  undefined1 *local_2ca0;
  undefined8 local_2c98;
  undefined1 auStack_2c90 [3072];
  double *******local_2090;
  ulong local_2088;
  ulong local_2080;
  double *******local_90;
  long lStack_88;
  ulong local_80;
  
  puVar13 = PTR_DAT_048607b8;
  fVar12 = DAT_04102e70;
  local_2ca0 = auStack_2c90;
  local_2c98 = 0x8000004000000000;
  uVar26 = *(undefined8 *)PTR_PTR_04bd4d28;
  if (0 < param_9) {
    iVar23 = 0;
    uVar29 = (uint)param_7;
    lVar57 = (long)(int)uVar29;
    uVar37 = (uint)param_8;
    lVar52 = (long)(int)uVar37;
    lVar38 = lVar52 * 2;
    lVar40 = lVar57 * 2;
    iVar15 = 0x4102000;
    do {
      uVar11 = param_9 - iVar23;
      lVar30 = (long)iVar23;
      uVar24 = uVar11;
      if (0x3ff < (int)uVar11) {
        uVar24 = 0x400;
      }
      iVar6 = *(int *)(param_2 + 0x10);
      if (iVar6 != 0) {
        pppppppdVar3 = (double *******)(auStack_2c90 + (long)(int)(uVar24 << 3) + 0xc00);
        uVar42 = (ulong)uVar24;
        lVar39 = uVar42 - (uVar42 & 1);
        lVar43 = lVar57 * (lVar30 + 1);
        iVar49 = 0;
        lVar4 = param_3 + lVar43;
        do {
          lVar53 = *(long *)(param_2 + 8);
          lVar31 = lVar53 + (long)iVar49 * 0x38;
          if (0xc < *(byte *)(lVar31 + 8) - 1) goto switchD_0045e8a0_caseD_3;
          uVar56 = (ulong)*(ushort *)(lVar31 + 0xc);
          uVar9 = *(ushort *)(lVar31 + 10);
          pppppppdVar41 = (double *******)(param_3 + lVar30 * lVar57 + uVar56);
          pppppppdVar34 = (double *******)(param_5 + lVar30 * lVar52 + (ulong)uVar9);
          lVar58 = (long)iVar49;
          switch((uint)*(byte *)(lVar31 + 8)) {
          case 1:
            lVar31 = *(long *)(lVar53 + lVar58 * 0x38 + 0x20);
            uVar56 = FUN_00428440(lVar31);
            if ((uVar56 & 0x1f) != 2) {
              lVar31 = 0;
            }
            if (lVar31 == 0) {
              plVar55 = (long *)0x0;
            }
            else {
              plVar55 = (long *)FUN_00428370(lVar31);
              if (((ulong)plVar55 & 1) != 0) {
                FUN_0043dd30((ulong)plVar55 & 0xfffffffffffffffe);
              }
            }
            lVar53 = *(long *)(lVar53 + lVar58 * 0x38 + 0x18);
            uVar56 = FUN_00428440(lVar53);
            if ((uVar56 & 0x1f) != 2) {
              lVar53 = 0;
            }
            if (lVar53 == 0) {
              plVar19 = (long *)0x0;
            }
            else {
              plVar19 = (long *)FUN_00428370(lVar53);
              if (((ulong)plVar19 & 1) != 0) {
                FUN_0043dd30((ulong)plVar19 & 0xfffffffffffffffe);
              }
            }
            if ((int)uVar11 < 1) {
              iVar18 = 0xe;
              iVar17 = 0xe;
joined_r0x0045e70c:
              if (((ulong)plVar19 & 1) != 0) {
                FUN_0043dd50((ulong)plVar19 & 0xfffffffffffffffe);
                iVar17 = iVar18;
              }
            }
            else {
              iVar17 = 0;
              plVar45 = plVar55;
              do {
                local_2090 = (double *******)((ulong)local_2090 & 0xffffffffffffff00);
                plVar54 = (long *)((ulong)plVar19 & 0xfffffffffffffffe);
                (**(code **)(*plVar54 + 0x38))(plVar54,pppppppdVar34,lVar53,&local_2090);
                plVar55 = (long *)((ulong)plVar45 & 0xfffffffffffffffe);
                iVar15 = (**(code **)(*plVar55 + 0x30))
                                   (plVar55,pppppppdVar41,lVar31,(ulong)local_2090 & 0xff);
                if (iVar15 < 0) {
                  iVar18 = 1;
                  iVar17 = 1;
                  plVar55 = plVar45;
                  goto joined_r0x0045e70c;
                }
                if (((ulong)plVar45 & 1) != 0) {
                  FUN_0043dd50(plVar55);
                }
                pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar57);
                pppppppdVar34 = (double *******)((long)pppppppdVar34 + lVar52);
                if (((ulong)plVar19 & 1) != 0) {
                  FUN_0043dd50(plVar54);
                }
                iVar17 = iVar17 + 1;
                plVar19 = plVar54;
                plVar45 = plVar55;
              } while (iVar17 < (int)uVar24);
              iVar17 = 0xe;
            }
            if (((ulong)plVar55 & 1) != 0) {
              FUN_0043dd50((ulong)plVar55 & 0xfffffffffffffffe);
            }
            if (iVar17 != 0xe) goto LAB_0045f334;
            break;
          case 2:
            lVar31 = *(long *)(lVar53 + lVar58 * 0x38 + 0x20);
            uVar56 = FUN_00428440(lVar31);
            if ((uVar56 & 0x1f) != 4) {
              lVar31 = 0;
            }
            if (lVar31 == 0) {
              plVar55 = (long *)0x0;
            }
            else {
              plVar55 = (long *)FUN_00428370(lVar31);
              if (((ulong)plVar55 & 1) != 0) {
                FUN_0043dd30((ulong)plVar55 & 0xfffffffffffffffe);
              }
            }
            lVar53 = *(long *)(lVar53 + lVar58 * 0x38 + 0x18);
            uVar56 = FUN_00428440(lVar53);
            if ((uVar56 & 0x1f) != 4) {
              lVar53 = 0;
            }
            if (lVar53 == 0) {
              plVar19 = (long *)0x0;
            }
            else {
              plVar19 = (long *)FUN_00428370(lVar53);
              if (((ulong)plVar19 & 1) != 0) {
                FUN_0043dd30((ulong)plVar19 & 0xfffffffffffffffe);
              }
            }
            if (0 < (int)uVar11) {
              iVar17 = 0;
              plVar45 = plVar55;
              plVar54 = plVar19;
              do {
                local_2090 = (double *******)0x0;
                local_2088 = local_2088 & 0xffffffffffffff00;
                plVar19 = (long *)((ulong)plVar54 & 0xfffffffffffffffe);
                (**(code **)(*plVar19 + 0x38))(plVar19,pppppppdVar34,lVar53,&local_2090);
                plVar55 = (long *)((ulong)plVar45 & 0xfffffffffffffffe);
                iVar15 = (**(code **)(*plVar55 + 0x30))(plVar55,pppppppdVar41,lVar31,&local_2090);
                if (iVar15 < 0) {
                  iVar18 = 1;
                  iVar17 = 1;
                  plVar55 = plVar45;
                  plVar19 = plVar54;
                  goto joined_r0x0045e9c0;
                }
                if (((ulong)plVar45 & 1) != 0) {
                  FUN_0043dd50(plVar55);
                }
                pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar57);
                pppppppdVar34 = (double *******)((long)pppppppdVar34 + lVar52);
                if (((ulong)plVar54 & 1) != 0) {
                  FUN_0043dd50(plVar19);
                }
                iVar17 = iVar17 + 1;
                plVar45 = plVar55;
                plVar54 = plVar19;
              } while (iVar17 < (int)uVar24);
            }
            iVar18 = 0x13;
            iVar17 = 0x13;
joined_r0x0045e9c0:
            if (((ulong)plVar19 & 1) != 0) {
              FUN_0043dd50((ulong)plVar19 & 0xfffffffffffffffe);
              iVar17 = iVar18;
            }
            if (((ulong)plVar55 & 1) != 0) {
              FUN_0043dd50((ulong)plVar55 & 0xfffffffffffffffe);
            }
            if (iVar17 != 0x13) goto LAB_0045f334;
            break;
          case 3:
            lVar31 = *(long *)(lVar53 + lVar58 * 0x38 + 0x20);
            uVar56 = FUN_00428440(lVar31);
            if ((uVar56 & 0x1f) != 5) {
              lVar31 = 0;
            }
            if (lVar31 == 0) {
              plVar55 = (long *)0x0;
            }
            else {
              plVar55 = (long *)FUN_00428370(lVar31);
              if (((ulong)plVar55 & 1) != 0) {
                FUN_0043dd30((ulong)plVar55 & 0xfffffffffffffffe);
              }
            }
            lVar53 = *(long *)(lVar53 + lVar58 * 0x38 + 0x18);
            uVar56 = FUN_00428440(lVar53);
            if ((uVar56 & 0x1f) != 5) {
              lVar53 = 0;
            }
            if (lVar53 == 0) {
              plVar19 = (long *)0x0;
            }
            else {
              plVar19 = (long *)FUN_00428370(lVar53);
              if (((ulong)plVar19 & 1) != 0) {
                FUN_0043dd30((ulong)plVar19 & 0xfffffffffffffffe);
              }
            }
            if ((int)uVar11 < 1) {
              iVar18 = 0x18;
              iVar17 = 0x18;
joined_r0x0045e780:
              if (((ulong)plVar19 & 1) != 0) {
                FUN_0043dd50((ulong)plVar19 & 0xfffffffffffffffe);
                iVar17 = iVar18;
              }
            }
            else {
              iVar17 = 0;
              plVar45 = plVar55;
              do {
                local_2090 = (double *******)0x0;
                plVar54 = (long *)((ulong)plVar19 & 0xfffffffffffffffe);
                (**(code **)(*plVar54 + 0x38))(plVar54,pppppppdVar34,lVar53,&local_2090);
                plVar55 = (long *)((ulong)plVar45 & 0xfffffffffffffffe);
                iVar15 = (**(code **)(*plVar55 + 0x30))(local_2090,plVar55,pppppppdVar41,lVar31);
                if (iVar15 < 0) {
                  iVar18 = 1;
                  iVar17 = 1;
                  plVar55 = plVar45;
                  goto joined_r0x0045e780;
                }
                if (((ulong)plVar45 & 1) != 0) {
                  FUN_0043dd50(plVar55);
                }
                pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar57);
                pppppppdVar34 = (double *******)((long)pppppppdVar34 + lVar52);
                if (((ulong)plVar19 & 1) != 0) {
                  FUN_0043dd50(plVar54);
                }
                iVar17 = iVar17 + 1;
                plVar19 = plVar54;
                plVar45 = plVar55;
              } while (iVar17 < (int)uVar24);
              iVar17 = 0x18;
            }
            if (((ulong)plVar55 & 1) != 0) {
              FUN_0043dd50((ulong)plVar55 & 0xfffffffffffffffe);
            }
            if (iVar17 != 0x18) goto LAB_0045f334;
            break;
          case 4:
            uVar56 = *(ulong *)(lVar53 + lVar58 * 0x38 + 0x20);
            uVar21 = FUN_00428440(uVar56);
            if ((uVar21 & 0x1f) != 6) {
              uVar56 = 0;
            }
            local_2088 = uVar56;
            if (uVar56 == 0) {
              uVar56 = 0;
              local_2080 = 0;
              local_2090 = pppppppdVar41;
            }
            else {
              local_2090 = pppppppdVar41;
              uVar56 = FUN_00428370();
              local_2080 = uVar56;
              if ((uVar56 & 1) != 0) {
                FUN_0043dd30(uVar56 & 0xfffffffffffffffe);
              }
            }
            lVar31 = *(long *)(lVar53 + lVar58 * 0x38 + 0x18);
            uVar21 = FUN_00428440(lVar31);
            if ((uVar21 & 0x1f) != 6) {
              lVar31 = 0;
            }
            uVar21 = 0;
            local_90 = pppppppdVar34;
            lStack_88 = lVar31;
            if (lVar31 != 0) {
              uVar21 = FUN_00428370();
            }
            local_80 = uVar21;
            if ((uVar21 & 1) == 0) {
              FUN_0045f4d0(param_1,&local_2090,&local_90,param_7,param_8,uVar24);
            }
            else {
              FUN_0043dd30(uVar21 & 0xfffffffffffffffe);
              FUN_0045f4d0(param_1,&local_2090,&local_90,param_7,param_8,uVar24);
              FUN_0043dd50(uVar21 & 0xfffffffffffffffe);
            }
            if ((uVar56 & 1) != 0) {
              FUN_0043dd50(uVar56 & 0xfffffffffffffffe);
            }
            iVar15 = 0;
            break;
          case 5:
            if ((int)(local_2c98._4_4_ & 0x3fffffff) < (int)((uint)local_2c98 + uVar24)) {
              local_2ca0 = (undefined1 *)
                           FUN_00426720(uVar26,(uint)local_2c98 + uVar24,0x30,local_2ca0,
                                        local_2c98 & 0xffffffff,(long)&local_2c98 + 4);
            }
            uVar56 = *(ulong *)(lVar53 + lVar58 * 0x38 + 0x20);
            uVar21 = FUN_00428440(uVar56);
            if ((uVar21 & 0x1f) != 3) {
              uVar56 = 0;
            }
            if (uVar56 == 0) {
              uVar21 = 0;
            }
            else {
              uVar21 = FUN_00428370(uVar56);
              if ((uVar21 & 1) != 0) {
                FUN_0043dd30(uVar21 & 0xfffffffffffffffe);
              }
            }
            lVar31 = *(long *)(lVar53 + lVar58 * 0x38 + 0x18);
            uVar22 = FUN_00428440(lVar31);
            if ((uVar22 & 0x1f) != 3) {
              lVar31 = 0;
            }
            if (lVar31 == 0) {
              uVar22 = 0;
            }
            else {
              uVar22 = FUN_00428370(lVar31);
              if ((uVar22 & 1) != 0) {
                FUN_0043dd30(uVar22 & 0xfffffffffffffffe);
              }
            }
            if ((int)uVar11 < 1) {
              if ((uVar22 & 1) != 0) {
                FUN_0043dd50(uVar22 & 0xfffffffffffffffe);
              }
            }
            else {
              iVar17 = 0;
              do {
                if ((uVar21 & 1) != 0) {
                  FUN_0043dd30(uVar21 & 0xfffffffffffffffe);
                }
                if ((uVar22 & 1) != 0) {
                  FUN_0043dd30(uVar22 & 0xfffffffffffffffe);
                }
                if ((uint)local_2c98 == (local_2c98._4_4_ & 0x3fffffff)) {
                  FUN_00426990(uVar26,&local_2ca0,0x30);
                }
                puVar27 = local_2ca0;
                iVar18 = (int)local_2c98;
                puVar48 = (ulong *)(local_2ca0 + (long)iVar18 * 0x30);
                puVar48[2] = uVar21;
                *puVar48 = (ulong)pppppppdVar41;
                puVar48[1] = uVar56;
                if ((uVar21 & 1) != 0) {
                  FUN_0043dd30(uVar21 & 0xfffffffffffffffe);
                }
                *(ulong *)(puVar27 + (long)iVar18 * 0x30 + 0x28) = uVar22;
                *(double ********)(puVar27 + (long)iVar18 * 0x30 + 0x18) = pppppppdVar34;
                *(long *)(puVar27 + (long)iVar18 * 0x30 + 0x20) = lVar31;
                if ((uVar22 & 1) == 0) {
                  local_2c98 = CONCAT44(local_2c98._4_4_,iVar18 + 1);
                }
                else {
                  FUN_0043dd30(uVar22 & 0xfffffffffffffffe);
                  local_2c98 = CONCAT44(local_2c98._4_4_,iVar18 + 1);
                  FUN_0043dd50(uVar22 & 0xfffffffffffffffe);
                }
                if ((uVar21 & 1) != 0) {
                  FUN_0043dd50(uVar21 & 0xfffffffffffffffe);
                  FUN_0043dd50(uVar21 & 0xfffffffffffffffe);
                }
                uVar21 = uVar21 & 0xfffffffffffffffe;
                pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar57);
                pppppppdVar34 = (double *******)((long)pppppppdVar34 + lVar52);
                if ((uVar22 & 1) != 0) {
                  FUN_0043dd50(uVar22 & 0xfffffffffffffffe);
                }
                iVar17 = iVar17 + 1;
                uVar22 = uVar22 & 0xfffffffffffffffe;
              } while (iVar17 < (int)uVar24);
            }
            if ((uVar21 & 1) != 0) {
              FUN_0043dd50(uVar21 & 0xfffffffffffffffe);
            }
            goto switchD_0045e8a0_default;
          case 6:
            lVar31 = *(long *)(lVar53 + lVar58 * 0x38 + 0x20);
            if (lVar31 == 0) {
              uVar56 = 0;
            }
            else {
              uVar56 = FUN_00428370(lVar31);
              if ((uVar56 & 1) != 0) {
                FUN_0043dd30(uVar56 & 0xfffffffffffffffe);
              }
            }
            lVar35 = *(long *)(lVar53 + lVar58 * 0x38 + 0x18);
            if (lVar35 == 0) {
              uVar21 = 0;
            }
            else {
              uVar21 = FUN_00428370(lVar35);
              if ((uVar21 & 1) != 0) {
                FUN_0043dd30(uVar21 & 0xfffffffffffffffe);
              }
            }
            iVar15 = (**(code **)(lVar53 + lVar58 * 0x38 + 0x28))
                               (pppppppdVar41,lVar31,pppppppdVar34,lVar35,uVar24);
            if ((uVar21 & 1) != 0) {
              FUN_0043dd50(uVar21 & 0xfffffffffffffffe);
            }
            if ((uVar56 & 1) != 0) {
              FUN_0043dd50(uVar56 & 0xfffffffffffffffe);
            }
            if (iVar15 < 0) goto LAB_0045f334;
            break;
          case 7:
            lVar53 = lVar53 + lVar58 * 0x38;
            uVar44 = *(undefined8 *)(lVar53 + 0x20);
            uVar21 = FUN_00428440(uVar44);
            if ((uVar21 & 0x1f) != 4) {
              uVar44 = 0;
            }
            uVar21 = FUN_00428440(uVar44);
            uVar44 = *(undefined8 *)(lVar53 + 0x18);
            uVar22 = FUN_00428440(uVar44);
            if ((uVar22 & 0x1f) != 4) {
              uVar44 = 0;
            }
            uVar22 = FUN_00428440(uVar44);
            uVar16 = ((uint)(uVar21 >> 10) & 0x3fffff) + 7 >> 3;
            uVar20 = (ulong)uVar16;
            uVar25 = ((uint)(uVar22 >> 10) & 0x3fffff) + 7 >> 3;
            uVar46 = (ulong)uVar25;
            uVar50 = (uint)uVar22;
            iVar17 = uVar16 - uVar25;
            uVar51 = ((uint)uVar21 ^ uVar50) >> 8 & 1;
            if (iVar17 < 1) {
              if ((uVar22 & 0x100) != 0) {
                pppppppdVar34 = (double *******)((long)pppppppdVar34 + (long)-iVar17);
              }
              if (uVar51 == 0) {
                if (uVar16 != uVar29 || uVar16 != uVar37) {
                  if (uVar16 != 0 && 0 < (int)uVar11) {
                    uVar25 = 0;
                    do {
                      if (uVar20 - 1 < 7) {
                        lVar31 = 0;
                      }
                      else {
                        lVar31 = 0;
                        do {
                          puVar27 = (undefined1 *)((long)pppppppdVar34 + lVar31);
                          puVar47 = (undefined1 *)((long)pppppppdVar41 + lVar31);
                          lVar31 = lVar31 + 8;
                          *puVar47 = *puVar27;
                          puVar47[1] = puVar27[1];
                          puVar47[2] = puVar27[2];
                          puVar47[3] = puVar27[3];
                          puVar47[4] = puVar27[4];
                          puVar47[5] = puVar27[5];
                          puVar47[6] = puVar27[6];
                          puVar47[7] = puVar27[7];
                        } while (uVar20 - (uVar20 & 7) != lVar31);
                      }
                      if ((uVar16 & 7) != 0) {
                        lVar53 = -(uVar20 & 7);
                        do {
                          lVar53 = lVar53 + 1;
                          *(undefined1 *)((long)pppppppdVar41 + lVar31) =
                               *(undefined1 *)((long)pppppppdVar34 + lVar31);
                          lVar31 = lVar31 + 1;
                        } while (lVar53 != 0);
                      }
                      uVar25 = uVar25 + 1;
                      pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar57);
                      pppppppdVar34 = (double *******)((long)pppppppdVar34 + lVar52);
                    } while (uVar25 != uVar24);
                  }
                  break;
                }
                FUN_0043a3b0(pppppppdVar41,pppppppdVar34,uVar24 * uVar37);
              }
              else if (0 < (int)uVar11) {
                switch(uVar16) {
                case 1:
                  lVar31 = 0;
                  if (2 < uVar42 - 1) {
                    pppppppdVar41 = pppppppdVar34;
                    lVar53 = param_3;
                    do {
                      *(undefined1 *)(lVar57 * lVar30 + uVar56 + lVar53) =
                           *(undefined1 *)pppppppdVar41;
                      lVar31 = lVar31 + 4;
                      *(undefined1 *)(lVar43 + uVar56 + lVar53) =
                           *(undefined1 *)(lVar52 + (long)pppppppdVar41);
                      *(undefined1 *)(lVar57 * (lVar30 + 2) + uVar56 + lVar53) =
                           *(undefined1 *)(lVar38 + (long)pppppppdVar41);
                      puVar27 = (undefined1 *)(lVar52 * 3 + (long)pppppppdVar41);
                      pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar52 * 4);
                      *(undefined1 *)(lVar57 * (lVar30 + 3) + uVar56 + lVar53) = *puVar27;
                      lVar53 = lVar53 + lVar57 * 4;
                    } while (uVar42 - (uVar42 & 3) != lVar31);
                  }
                  if ((uVar24 & 3) != 0) {
                    pppppppdVar34 = (double *******)((long)pppppppdVar34 + lVar52 * lVar31);
                    puVar27 = (undefined1 *)(param_3 + lVar57 * (lVar30 + lVar31) + uVar56);
                    lVar31 = -(uVar42 & 3);
                    do {
                      *puVar27 = *(undefined1 *)pppppppdVar34;
                      pppppppdVar34 = (double *******)((long)pppppppdVar34 + lVar52);
                      puVar27 = puVar27 + lVar57;
                      lVar31 = lVar31 + 1;
                    } while (lVar31 != 0);
                  }
                  break;
                case 2:
                  lVar31 = 0;
                  if (uVar42 != 1) {
                    lVar53 = 0;
                    lVar31 = 0;
                    pppppppdVar28 = pppppppdVar34;
                    do {
                      *(ushort *)((long)pppppppdVar41 + lVar53) =
                           *(ushort *)pppppppdVar28 >> 8 | *(ushort *)pppppppdVar28 << 8;
                      lVar31 = lVar31 + 2;
                      puVar1 = (ushort *)(lVar52 + (long)pppppppdVar28);
                      pppppppdVar28 = (double *******)((long)pppppppdVar28 + lVar38);
                      *(ushort *)(lVar4 + uVar56 + lVar53) = *puVar1 >> 8 | *puVar1 << 8;
                      lVar53 = lVar53 + lVar40;
                    } while (lVar39 != lVar31);
                  }
                  if ((uVar24 & 1) != 0) {
                    uVar9 = *(ushort *)(lVar31 * lVar52 + (long)pppppppdVar34);
                    *(ushort *)(lVar31 * lVar57 + (long)pppppppdVar41) = uVar9 >> 8 | uVar9 << 8;
                  }
                  break;
                case 3:
                case 5:
                case 6:
                case 7:
                  break;
                case 4:
                  lVar31 = 0;
                  if (uVar42 != 1) {
                    lVar53 = 0;
                    lVar31 = 0;
                    pppppppdVar28 = pppppppdVar34;
                    do {
                      uVar16 = (*(uint *)pppppppdVar28 & 0xff00ff00) >> 8 |
                               (*(uint *)pppppppdVar28 & 0xff00ff) << 8;
                      lVar31 = lVar31 + 2;
                      *(uint *)((long)pppppppdVar41 + lVar53) = uVar16 >> 0x10 | uVar16 << 0x10;
                      puVar2 = (uint *)(lVar52 + (long)pppppppdVar28);
                      pppppppdVar28 = (double *******)((long)pppppppdVar28 + lVar38);
                      uVar16 = (*puVar2 & 0xff00ff00) >> 8 | (*puVar2 & 0xff00ff) << 8;
                      *(uint *)(lVar4 + uVar56 + lVar53) = uVar16 >> 0x10 | uVar16 << 0x10;
                      lVar53 = lVar53 + lVar40;
                    } while (lVar39 != lVar31);
                  }
                  if ((uVar24 & 1) != 0) {
                    uVar16 = *(uint *)(lVar31 * lVar52 + (long)pppppppdVar34);
                    uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
                    *(uint *)(lVar31 * lVar57 + (long)pppppppdVar41) =
                         uVar16 >> 0x10 | uVar16 << 0x10;
                  }
                  break;
                case 8:
                  lVar31 = 0;
                  if (uVar42 != 1) {
                    lVar53 = 0;
                    lVar31 = 0;
                    pppppppdVar28 = pppppppdVar34;
                    do {
                      uVar21 = ((ulong)*pppppppdVar28 & 0xff00ff00ff00ff00) >> 8 |
                               ((ulong)*pppppppdVar28 & 0xff00ff00ff00ff) << 8;
                      uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar21 & 0xffff0000ffff) << 0x10;
                      lVar31 = lVar31 + 2;
                      *(ulong *)((long)pppppppdVar41 + lVar53) = uVar21 >> 0x20 | uVar21 << 0x20;
                      puVar48 = (ulong *)(lVar52 + (long)pppppppdVar28);
                      pppppppdVar28 = (double *******)((long)pppppppdVar28 + lVar38);
                      uVar21 = (*puVar48 & 0xff00ff00ff00ff00) >> 8 |
                               (*puVar48 & 0xff00ff00ff00ff) << 8;
                      uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar21 & 0xffff0000ffff) << 0x10;
                      *(ulong *)(lVar4 + uVar56 + lVar53) = uVar21 >> 0x20 | uVar21 << 0x20;
                      lVar53 = lVar53 + lVar40;
                    } while (lVar39 != lVar31);
                  }
                  if ((uVar24 & 1) != 0) {
                    ppppppdVar33 = *(double *******)(lVar31 * lVar52 + (long)pppppppdVar34);
                    uVar56 = ((ulong)ppppppdVar33 & 0xff00ff00ff00ff00) >> 8 |
                             ((ulong)ppppppdVar33 & 0xff00ff00ff00ff) << 8;
                    uVar56 = (uVar56 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar56 & 0xffff0000ffff) << 0x10;
                    *(double *******)(lVar31 * lVar57 + (long)pppppppdVar41) =
                         (double ******)(uVar56 >> 0x20 | uVar56 << 0x20);
                  }
                  break;
                default:
                  goto switchD_0045e8a0_default;
                }
                break;
              }
            }
            else {
              bVar14 = (uVar21 & 0x100) != 0;
              lVar31 = 0;
              if (bVar14) {
                lVar31 = (long)iVar17;
              }
              uVar16 = uVar25 - 1;
              lVar53 = 1;
              if (bVar14) {
                uVar16 = uVar25;
                lVar53 = (long)-iVar17;
              }
              if (0 < (int)uVar11) {
                lVar58 = (long)(int)uVar16;
                if (uVar51 == 0) {
                  if (uVar25 == 0) {
                    uVar16 = uVar24;
                    do {
                      FUN_0043a3b0(lVar31 + (long)pppppppdVar41,pppppppdVar34,0);
                      if ((uVar50 >> 9 & 1) != 0) {
                        FUN_0043a4d0((char *)((long)pppppppdVar41 + lVar58) + lVar53,
                                     (int)*(char *)((long)pppppppdVar41 + lVar58) >> 0x1f & 0xff,
                                     iVar17);
                      }
                      pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar57);
                      uVar16 = uVar16 - 1;
                      pppppppdVar34 = (double *******)((long)pppppppdVar34 + lVar52);
                    } while (uVar16 != 0);
                  }
                  else {
                    uVar16 = 0;
                    do {
                      if (uVar46 - 1 < 7) {
                        lVar35 = 0;
                      }
                      else {
                        lVar35 = 0;
                        do {
                          puVar27 = (undefined1 *)((long)pppppppdVar34 + lVar35 + 3);
                          puVar47 = (undefined1 *)((long)pppppppdVar41 + lVar35 + lVar31 + 3);
                          lVar35 = lVar35 + 8;
                          puVar47[-3] = puVar27[-3];
                          puVar47[-2] = puVar27[-2];
                          puVar47[-1] = puVar27[-1];
                          *puVar47 = *puVar27;
                          puVar47[1] = puVar27[1];
                          puVar47[2] = puVar27[2];
                          puVar47[3] = puVar27[3];
                          puVar47[4] = puVar27[4];
                        } while (uVar46 - (uVar46 & 7) != lVar35);
                      }
                      if ((uVar25 & 7) != 0) {
                        puVar27 = (undefined1 *)((long)pppppppdVar41 + lVar35 + lVar31);
                        puVar47 = (undefined1 *)((long)pppppppdVar34 + lVar35);
                        lVar35 = -(uVar46 & 7);
                        do {
                          lVar35 = lVar35 + 1;
                          *puVar27 = *puVar47;
                          puVar27 = puVar27 + 1;
                          puVar47 = puVar47 + 1;
                        } while (lVar35 != 0);
                      }
                      if ((uVar50 >> 9 & 1) != 0) {
                        FUN_0043a4d0((char *)((long)pppppppdVar41 + lVar58) + lVar53,
                                     (int)*(char *)((long)pppppppdVar41 + lVar58) >> 0x1f & 0xff,
                                     iVar17);
                      }
                      pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar57);
                      uVar16 = uVar16 + 1;
                      pppppppdVar34 = (double *******)((long)pppppppdVar34 + lVar52);
                    } while (uVar16 != uVar24);
                  }
                }
                else if (uVar25 == 1) {
                  uVar16 = uVar24;
                  do {
                    *(undefined1 *)(lVar31 + (long)pppppppdVar41) = *(undefined1 *)pppppppdVar34;
                    if ((uVar50 >> 9 & 1) != 0) {
                      FUN_0043a4d0((char *)((long)pppppppdVar41 + lVar58) + lVar53,
                                   (int)*(char *)((long)pppppppdVar41 + lVar58) >> 0x1f & 0xff,
                                   iVar17);
                    }
                    pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar57);
                    uVar16 = uVar16 - 1;
                    pppppppdVar34 = (double *******)((long)pppppppdVar34 + lVar52);
                  } while (uVar16 != 0);
                }
                else {
                  uVar16 = uVar24;
                  do {
                    if (uVar25 == 2) {
                      *(ushort *)((long)pppppppdVar41 + lVar31) =
                           *(ushort *)pppppppdVar34 >> 8 | *(ushort *)pppppppdVar34 << 8;
                    }
                    else if (uVar25 == 4) {
                      uVar51 = (*(uint *)pppppppdVar34 & 0xff00ff00) >> 8 |
                               (*(uint *)pppppppdVar34 & 0xff00ff) << 8;
                      *(uint *)((long)pppppppdVar41 + lVar31) = uVar51 >> 0x10 | uVar51 << 0x10;
                    }
                    else if (uVar25 == 8) {
                      uVar56 = ((ulong)*pppppppdVar34 & 0xff00ff00ff00ff00) >> 8 |
                               ((ulong)*pppppppdVar34 & 0xff00ff00ff00ff) << 8;
                      uVar56 = (uVar56 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar56 & 0xffff0000ffff) << 0x10;
                      *(ulong *)((long)pppppppdVar41 + lVar31) = uVar56 >> 0x20 | uVar56 << 0x20;
                    }
                    if ((uVar50 >> 9 & 1) != 0) {
                      FUN_0043a4d0((char *)((long)pppppppdVar41 + lVar58) + lVar53,
                                   (int)*(char *)((long)pppppppdVar41 + lVar58) >> 0x1f & 0xff,
                                   iVar17);
                    }
                    pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar57);
                    uVar16 = uVar16 - 1;
                    pppppppdVar34 = (double *******)((long)pppppppdVar34 + lVar52);
                  } while (uVar16 != 0);
                }
              }
            }
switchD_0045e8a0_default:
            break;
          case 8:
            lVar53 = lVar53 + lVar58 * 0x38;
            uVar44 = *(undefined8 *)(lVar53 + 0x20);
            uVar56 = FUN_00428440(uVar44);
            if ((uVar56 & 0x1f) != 5) {
              uVar44 = 0;
            }
            uVar56 = FUN_00428440(uVar44);
            uVar44 = *(undefined8 *)(lVar53 + 0x18);
            uVar21 = FUN_00428440(uVar44);
            if ((uVar21 & 0x1f) != 5) {
              uVar44 = 0;
            }
            uVar16 = FUN_00428440(uVar44);
            bVar14 = (uVar16 & 0x100) == 0;
            pppppppdVar28 = (double *******)&local_2090;
            if (bVar14) {
              pppppppdVar28 = pppppppdVar34;
            }
            uVar25 = 8;
            if (bVar14) {
              uVar25 = uVar37;
            }
            if ((uVar16 >> 8 & 1) != 0) {
              switch((uVar16 >> 10 & 1) + (uVar16 >> 0xb & 0x1f) + (uVar16 >> 0x10 & 0xff) + 7 >> 3)
              {
              case 1:
                if (&local_2090 < pppppppdVar3) {
                  pppppppdVar36 = (double *******)&local_2090;
                  do {
                    uVar7 = *(undefined1 *)pppppppdVar34;
                    pppppppdVar34 = (double *******)((long)pppppppdVar34 + lVar52);
                    pppppppdVar32 = pppppppdVar36 + 1;
                    *(undefined1 *)pppppppdVar36 = uVar7;
                    pppppppdVar36 = pppppppdVar32;
                  } while (pppppppdVar32 < pppppppdVar3);
                }
                break;
              case 2:
                if (&local_2090 < pppppppdVar3) {
                  pppppppdVar36 = (double *******)&local_2090;
                  do {
                    uVar9 = *(ushort *)pppppppdVar34;
                    pppppppdVar34 = (double *******)((long)pppppppdVar34 + lVar52);
                    pppppppdVar32 = pppppppdVar36 + 1;
                    *(ushort *)pppppppdVar36 = uVar9 >> 8 | uVar9 << 8;
                    pppppppdVar36 = pppppppdVar32;
                  } while (pppppppdVar32 < pppppppdVar3);
                }
                break;
              case 4:
                if (&local_2090 < pppppppdVar3) {
                  pppppppdVar36 = (double *******)&local_2090;
                  do {
                    uVar51 = *(uint *)pppppppdVar34;
                    pppppppdVar34 = (double *******)((long)pppppppdVar34 + lVar52);
                    uVar51 = (uVar51 & 0xff00ff00) >> 8 | (uVar51 & 0xff00ff) << 8;
                    pppppppdVar32 = pppppppdVar36 + 1;
                    *(uint *)pppppppdVar36 = uVar51 >> 0x10 | uVar51 << 0x10;
                    pppppppdVar36 = pppppppdVar32;
                  } while (pppppppdVar32 < pppppppdVar3);
                }
                break;
              case 8:
                if (&local_2090 < pppppppdVar3) {
                  pppppppdVar36 = (double *******)&local_2090;
                  do {
                    ppppppdVar33 = *pppppppdVar34;
                    pppppppdVar34 = (double *******)((long)pppppppdVar34 + lVar52);
                    uVar21 = ((ulong)ppppppdVar33 & 0xff00ff00ff00ff00) >> 8 |
                             ((ulong)ppppppdVar33 & 0xff00ff00ff00ff) << 8;
                    uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar21 & 0xffff0000ffff) << 0x10;
                    pppppppdVar32 = pppppppdVar36 + 1;
                    *pppppppdVar36 = (double ******)(uVar21 >> 0x20 | uVar21 << 0x20);
                    pppppppdVar36 = pppppppdVar32;
                  } while (pppppppdVar32 < pppppppdVar3);
                }
              }
              uVar16 = uVar16 & 0xfffffeff;
            }
            uVar51 = (uint)uVar56;
            bVar14 = (uVar56 & 0x100) == 0;
            pppppppdVar34 = (double *******)&local_2090;
            if (bVar14) {
              pppppppdVar34 = pppppppdVar41;
            }
            uVar50 = 8;
            if (bVar14) {
              uVar50 = uVar29;
            }
            uVar5 = uVar51 & 0xfffffeff;
            if (uVar16 == 0x345e05) {
              if (uVar5 == 0x345e05) {
                pppppppdVar36 = (double *******)((long)pppppppdVar34 + (long)(int)(uVar50 * uVar24))
                ;
                if (pppppppdVar34 < pppppppdVar36) {
                  do {
                    *pppppppdVar34 = *pppppppdVar28;
                    pppppppdVar34 = (double *******)((long)pppppppdVar34 + (long)(int)uVar50);
                    pppppppdVar28 = (double *******)((long)pppppppdVar28 + (long)(int)uVar25);
                  } while (pppppppdVar34 < pppppppdVar36);
                }
              }
              else if (uVar5 == 0x174605) {
                pppppppdVar36 = (double *******)((long)pppppppdVar34 + (long)(int)(uVar50 * uVar24))
                ;
                if (pppppppdVar34 < pppppppdVar36) {
                  do {
                    ppppppdVar33 = *pppppppdVar28;
                    pppppppdVar28 = (double *******)((long)pppppppdVar28 + (long)(int)uVar25);
                    *(float *)pppppppdVar34 = (float)(double)ppppppdVar33;
                    pppppppdVar34 = (double *******)((long)pppppppdVar34 + (long)(int)uVar50);
                  } while (pppppppdVar34 < pppppppdVar36);
                }
              }
              else if ((uVar5 == 0x74605) &&
                      (pppppppdVar36 =
                            (double *******)((long)pppppppdVar34 + (long)(int)(uVar50 * uVar24)),
                      pppppppdVar34 < pppppppdVar36)) {
                do {
                  ppppppdVar33 = *pppppppdVar28;
                  pppppppdVar28 = (double *******)((long)pppppppdVar28 + (long)(int)uVar25);
                  *(short *)pppppppdVar34 =
                       (short)((uint)((float)(double)ppppppdVar33 * fVar12) >> 0x10);
                  pppppppdVar34 = (double *******)((long)pppppppdVar34 + (long)(int)uVar50);
                } while (pppppppdVar34 < pppppppdVar36);
              }
            }
            else if (uVar16 == 0x174605) {
              if (uVar5 == 0x345e05) {
                pppppppdVar36 = (double *******)((long)pppppppdVar34 + (long)(int)(uVar50 * uVar24))
                ;
                if (pppppppdVar34 < pppppppdVar36) {
                  do {
                    fVar59 = *(float *)pppppppdVar28;
                    pppppppdVar28 = (double *******)((long)pppppppdVar28 + (long)(int)uVar25);
                    *pppppppdVar34 = (double ******)(double)fVar59;
                    pppppppdVar34 = (double *******)((long)pppppppdVar34 + (long)(int)uVar50);
                  } while (pppppppdVar34 < pppppppdVar36);
                }
              }
              else if (uVar5 == 0x174605) {
                pppppppdVar36 = (double *******)((long)pppppppdVar34 + (long)(int)(uVar50 * uVar24))
                ;
                if (pppppppdVar34 < pppppppdVar36) {
                  do {
                    *(uint *)pppppppdVar34 = *(uint *)pppppppdVar28;
                    pppppppdVar34 = (double *******)((long)pppppppdVar34 + (long)(int)uVar50);
                    pppppppdVar28 = (double *******)((long)pppppppdVar28 + (long)(int)uVar25);
                  } while (pppppppdVar34 < pppppppdVar36);
                }
              }
              else if ((uVar5 == 0x74605) &&
                      (pppppppdVar36 =
                            (double *******)((long)pppppppdVar34 + (long)(int)(uVar50 * uVar24)),
                      pppppppdVar34 < pppppppdVar36)) {
                do {
                  fVar59 = *(float *)pppppppdVar28;
                  pppppppdVar28 = (double *******)((long)pppppppdVar28 + (long)(int)uVar25);
                  *(short *)pppppppdVar34 = (short)((uint)(fVar59 * fVar12) >> 0x10);
                  pppppppdVar34 = (double *******)((long)pppppppdVar34 + (long)(int)uVar50);
                } while (pppppppdVar34 < pppppppdVar36);
              }
            }
            else if (uVar16 == 0x74605) {
              if (uVar5 == 0x345e05) {
                pppppppdVar36 = (double *******)((long)pppppppdVar34 + (long)(int)(uVar50 * uVar24))
                ;
                if (pppppppdVar34 < pppppppdVar36) {
                  do {
                    uVar9 = *(ushort *)pppppppdVar28;
                    pppppppdVar28 = (double *******)((long)pppppppdVar28 + (long)(int)uVar25);
                    *pppppppdVar34 = (double ******)(double)(float)((uint)uVar9 << 0x10);
                    pppppppdVar34 = (double *******)((long)pppppppdVar34 + (long)(int)uVar50);
                  } while (pppppppdVar34 < pppppppdVar36);
                }
              }
              else if (uVar5 == 0x174605) {
                pppppppdVar36 = (double *******)((long)pppppppdVar34 + (long)(int)(uVar50 * uVar24))
                ;
                if (pppppppdVar34 < pppppppdVar36) {
                  do {
                    uVar9 = *(ushort *)pppppppdVar28;
                    pppppppdVar28 = (double *******)((long)pppppppdVar28 + (long)(int)uVar25);
                    *(uint *)pppppppdVar34 = (uint)uVar9 << 0x10;
                    pppppppdVar34 = (double *******)((long)pppppppdVar34 + (long)(int)uVar50);
                  } while (pppppppdVar34 < pppppppdVar36);
                }
              }
              else if ((uVar5 == 0x74605) &&
                      (pppppppdVar36 =
                            (double *******)((long)pppppppdVar34 + (long)(int)(uVar50 * uVar24)),
                      pppppppdVar34 < pppppppdVar36)) {
                do {
                  *(undefined2 *)pppppppdVar34 = *(undefined2 *)pppppppdVar28;
                  pppppppdVar34 = (double *******)((long)pppppppdVar34 + (long)(int)uVar50);
                  pppppppdVar28 = (double *******)((long)pppppppdVar28 + (long)(int)uVar25);
                } while (pppppppdVar34 < pppppppdVar36);
              }
            }
            if (((uVar51 >> 8 & 1) != 0) &&
               (uVar16 = (uVar51 >> 10 & 1) + (uVar51 >> 0xb & 0x1f) +
                         ((uint)(uVar56 >> 0x10) & 0xff) + 7 >> 3, uVar16 - 1 < 8)) {
              pppppppdVar34 = (double *******)((long)pppppppdVar41 + (long)(int)(uVar24 * uVar29));
              switch(uVar16) {
              case 1:
                if (pppppppdVar41 < pppppppdVar34) {
                  pppppppdVar28 = (double *******)&local_2090;
                  do {
                    *(undefined1 *)pppppppdVar41 = *(undefined1 *)pppppppdVar28;
                    pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar57);
                    pppppppdVar28 = pppppppdVar28 + 1;
                  } while (pppppppdVar41 < pppppppdVar34);
                }
                break;
              case 2:
                if (pppppppdVar41 < pppppppdVar34) {
                  pppppppdVar28 = (double *******)&local_2090;
                  do {
                    *(ushort *)pppppppdVar41 =
                         *(ushort *)pppppppdVar28 >> 8 | *(ushort *)pppppppdVar28 << 8;
                    pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar57);
                    pppppppdVar28 = pppppppdVar28 + 1;
                  } while (pppppppdVar41 < pppppppdVar34);
                }
                break;
              case 4:
                if (pppppppdVar41 < pppppppdVar34) {
                  pppppppdVar28 = (double *******)&local_2090;
                  do {
                    uVar16 = (*(uint *)pppppppdVar28 & 0xff00ff00) >> 8 |
                             (*(uint *)pppppppdVar28 & 0xff00ff) << 8;
                    *(uint *)pppppppdVar41 = uVar16 >> 0x10 | uVar16 << 0x10;
                    pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar57);
                    pppppppdVar28 = pppppppdVar28 + 1;
                  } while (pppppppdVar41 < pppppppdVar34);
                }
                break;
              case 8:
                if (pppppppdVar41 < pppppppdVar34) {
                  pppppppdVar28 = (double *******)&local_2090;
                  do {
                    uVar56 = ((ulong)*pppppppdVar28 & 0xff00ff00ff00ff00) >> 8 |
                             ((ulong)*pppppppdVar28 & 0xff00ff00ff00ff) << 8;
                    uVar56 = (uVar56 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar56 & 0xffff0000ffff) << 0x10;
                    *pppppppdVar41 = (double ******)(uVar56 >> 0x20 | uVar56 << 0x20);
                    pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar57);
                    pppppppdVar28 = pppppppdVar28 + 1;
                  } while (pppppppdVar41 < pppppppdVar34);
                }
              }
            }
            break;
          case 9:
            lVar53 = lVar53 + lVar58 * 0x38;
            FUN_00426fc0(*(undefined8 *)(lVar53 + 0x20));
            FUN_00426fc0(*(undefined8 *)(lVar53 + 0x18));
            uVar44 = *(undefined8 *)(lVar53 + 0x20);
            iVar17 = FUN_00426fc0(*(undefined8 *)(lVar53 + 0x18));
            iVar18 = FUN_00426fc0(uVar44);
            pppppppdVar28 = (double *******)((long)pppppppdVar41 + (long)(int)(uVar24 * uVar29));
            if (pppppppdVar41 < pppppppdVar28) {
              if (iVar17 == 1) {
                switch(iVar18) {
                case 1:
                  do {
                    cVar8 = *(char *)pppppppdVar34;
                    pppppppdVar34 = (double *******)((long)pppppppdVar34 + lVar52);
                    *(bool *)pppppppdVar41 = cVar8 != '\0';
                    pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar57);
                  } while (pppppppdVar41 < pppppppdVar28);
                  break;
                case 2:
                  do {
                    cVar8 = *(char *)pppppppdVar34;
                    pppppppdVar34 = (double *******)((long)pppppppdVar34 + lVar52);
                    *(ushort *)pppppppdVar41 = (ushort)(cVar8 != '\0');
                    pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar57);
                  } while (pppppppdVar41 < pppppppdVar28);
                  break;
                default:
switchD_0045e0c8_caseD_3:
                  do {
                  } while( true );
                case 4:
                  do {
                    cVar8 = *(char *)pppppppdVar34;
                    pppppppdVar34 = (double *******)((long)pppppppdVar34 + lVar52);
                    *(uint *)pppppppdVar41 = (uint)(cVar8 != '\0');
                    pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar57);
                  } while (pppppppdVar41 < pppppppdVar28);
                  break;
                case 8:
                  do {
                    cVar8 = *(char *)pppppppdVar34;
                    pppppppdVar34 = (double *******)((long)pppppppdVar34 + lVar52);
                    *pppppppdVar41 = (double ******)(ulong)(cVar8 != '\0');
                    pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar57);
                  } while (pppppppdVar41 < pppppppdVar28);
                }
              }
              else if (iVar17 == 2) {
                if (iVar18 == 1) {
                  do {
                    sVar10 = *(short *)pppppppdVar34;
                    pppppppdVar34 = (double *******)((long)pppppppdVar34 + lVar52);
                    *(bool *)pppppppdVar41 = sVar10 != 0;
                    pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar57);
                  } while (pppppppdVar41 < pppppppdVar28);
                }
                else if (iVar18 == 2) {
                  do {
                    sVar10 = *(short *)pppppppdVar34;
                    pppppppdVar34 = (double *******)((long)pppppppdVar34 + lVar52);
                    *(ushort *)pppppppdVar41 = (ushort)(sVar10 != 0);
                    pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar57);
                  } while (pppppppdVar41 < pppppppdVar28);
                }
                else if (iVar18 == 4) {
                  do {
                    sVar10 = *(short *)pppppppdVar34;
                    pppppppdVar34 = (double *******)((long)pppppppdVar34 + lVar52);
                    *(uint *)pppppppdVar41 = (uint)(sVar10 != 0);
                    pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar57);
                  } while (pppppppdVar41 < pppppppdVar28);
                }
                else {
                  do {
                    if (iVar18 != 8) goto switchD_0045e0c8_caseD_3;
                    sVar10 = *(short *)pppppppdVar34;
                    pppppppdVar34 = (double *******)((long)pppppppdVar34 + lVar52);
                    *pppppppdVar41 = (double ******)(ulong)(sVar10 != 0);
                    pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar57);
                  } while (pppppppdVar41 < pppppppdVar28);
                }
              }
              else if (iVar17 == 8) {
                do {
                  if (7 < iVar18 - 1U) goto switchD_0045e0c8_caseD_3;
                  ppppppdVar33 = *pppppppdVar34;
                  switch(iVar18) {
                  case 1:
                    *(bool *)pppppppdVar41 = ppppppdVar33 != (double ******)0x0;
                    break;
                  case 2:
                    *(ushort *)pppppppdVar41 = (ushort)(ppppppdVar33 != (double ******)0x0);
                    break;
                  default:
                    goto switchD_0045e0c8_caseD_3;
                  case 4:
                    *(uint *)pppppppdVar41 = (uint)(ppppppdVar33 != (double ******)0x0);
                    break;
                  case 8:
                    *pppppppdVar41 = (double ******)(ulong)(ppppppdVar33 != (double ******)0x0);
                  }
                  pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar57);
                  pppppppdVar34 = (double *******)((long)pppppppdVar34 + lVar52);
                } while (pppppppdVar41 < pppppppdVar28);
              }
              else {
                do {
                  if (iVar17 != 4) {
                    do {
                    /* WARNING: Do nothing block with infinite loop */
                    } while( true );
                  }
                  if (7 < iVar18 - 1U) goto switchD_0045e0c8_caseD_3;
                  uVar16 = *(uint *)pppppppdVar34;
                  switch(iVar18) {
                  case 1:
                    *(bool *)pppppppdVar41 = uVar16 != 0;
                    break;
                  case 2:
                    *(ushort *)pppppppdVar41 = (ushort)(uVar16 != 0);
                    break;
                  default:
                    goto switchD_0045e0c8_caseD_3;
                  case 4:
                    *(uint *)pppppppdVar41 = (uint)(uVar16 != 0);
                    break;
                  case 8:
                    *pppppppdVar41 = (double ******)(ulong)(uVar16 != 0);
                  }
                  pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar57);
                  pppppppdVar34 = (double *******)((long)pppppppdVar34 + lVar52);
                } while (pppppppdVar41 < pppppppdVar28);
              }
            }
            break;
          case 10:
            lVar53 = lVar53 + lVar58 * 0x38;
            FUN_00426fc0(*(undefined8 *)(lVar53 + 0x20));
            FUN_00426fc0(*(undefined8 *)(lVar53 + 0x18));
            lVar31 = *(long *)(lVar53 + 0x18);
            local_2088 = *(ulong *)(lVar53 + 0x20);
            uVar56 = 0;
            local_2090 = pppppppdVar41;
            if (local_2088 != 0) {
              uVar56 = FUN_00428370();
            }
            local_2080 = uVar56;
            if ((uVar56 & 1) != 0) {
              FUN_0043dd30(uVar56 & 0xfffffffffffffffe);
            }
            uVar56 = 0;
            local_90 = pppppppdVar34;
            lStack_88 = lVar31;
            if (lVar31 != 0) {
              uVar56 = FUN_00428370(lVar31);
            }
            local_80 = uVar56;
            if ((uVar56 & 1) != 0) {
              FUN_0043dd30(uVar56 & 0xfffffffffffffffe);
            }
            uVar16 = uVar24;
            if (0 < (int)uVar11) {
              do {
                FUN_00466cd0(param_1,&local_2090,&local_90);
                local_2090 = (double *******)((long)local_2090 + lVar57);
                uVar21 = local_2080 & 0xfffffffffffffffe;
                uVar56 = local_2080 & 1;
                local_2080 = uVar21;
                if (uVar56 != 0) {
                  FUN_0043dd50();
                }
                local_90 = (double *******)((long)local_90 + lVar52);
                uVar21 = local_80 & 0xfffffffffffffffe;
                uVar56 = local_80 & 1;
                local_80 = uVar21;
                if (uVar56 != 0) {
                  FUN_0043dd50();
                }
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
              uVar56 = local_80;
            }
            if ((uVar56 & 1) != 0) {
              FUN_0043dd50(uVar56 & 0xfffffffffffffffe);
            }
            uVar21 = local_2080;
            if ((local_2080 & 1) != 0) {
LAB_0045e83c:
              FUN_0043dd50(uVar21 & 0xfffffffffffffffe);
            }
            break;
          case 0xb:
            uVar21 = *(ulong *)(lVar53 + lVar58 * 0x38 + 0x20);
            uVar22 = FUN_00428440(uVar21);
            if ((uVar22 & 0x1f) != 8) {
              uVar21 = 0;
            }
            uVar22 = FUN_00428440(uVar21);
            if ((uVar22 & 0x1f) != 8) {
              uVar21 = 0;
            }
            local_2088 = uVar21;
            if (uVar21 == 0) {
              uVar22 = 0;
              local_2080 = 0;
              local_2090 = pppppppdVar41;
            }
            else {
              local_2090 = pppppppdVar41;
              uVar22 = FUN_00428370(uVar21);
              local_2080 = uVar22;
              if ((uVar22 & 1) != 0) {
                FUN_0043dd30(uVar22 & 0xfffffffffffffffe);
              }
            }
            lVar31 = *(long *)(lVar53 + lVar58 * 0x38 + 0x18);
            uVar20 = FUN_00428440(lVar31);
            if ((uVar20 & 0x1f) != 8) {
              lVar31 = 0;
            }
            lStack_88 = lVar31;
            if (lVar31 == 0) {
              uVar20 = 0;
              local_80 = 0;
              local_90 = pppppppdVar34;
            }
            else {
              local_90 = pppppppdVar34;
              uVar20 = FUN_00428370(lVar31);
              local_80 = uVar20;
              if ((uVar20 & 1) != 0) {
                FUN_0043dd30(uVar20 & 0xfffffffffffffffe);
              }
            }
            if ((int)uVar11 < 1) {
              if ((uVar20 & 1) != 0) {
                FUN_0043dd50(uVar20 & 0xfffffffffffffffe);
              }
              if ((uVar22 & 1) != 0) {
                FUN_0043dd50(uVar22 & 0xfffffffffffffffe);
              }
            }
            else {
              pppppppdVar41 = (double *******)(param_5 + lVar52 * (lVar30 + 1) + (ulong)uVar9);
              iVar15 = 0;
              pppppppdVar34 = (double *******)(lVar4 + uVar56);
              do {
                FUN_0045f410(*(undefined8 *)(param_1 + 0x288),&local_2090,&local_90);
                uVar56 = uVar22 & 0xfffffffffffffffe;
                local_2090 = pppppppdVar34;
                local_2088 = uVar21;
                if ((uVar22 & 1) != 0) {
                  FUN_0043dd50(uVar56);
                }
                uVar46 = uVar20 & 0xfffffffffffffffe;
                local_2080 = uVar56;
                local_90 = pppppppdVar41;
                lStack_88 = lVar31;
                if ((uVar20 & 1) != 0) {
                  FUN_0043dd50(uVar46);
                }
                pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar52);
                iVar15 = iVar15 + 1;
                pppppppdVar34 = (double *******)((long)pppppppdVar34 + lVar57);
                uVar22 = uVar56;
                uVar20 = uVar46;
                local_80 = uVar46;
              } while (iVar15 < (int)uVar24);
              iVar15 = 0;
            }
            break;
          case 0xc:
            uVar56 = *(ulong *)(lVar53 + lVar58 * 0x38 + 0x20);
            uVar21 = FUN_00428440(uVar56);
            if ((uVar21 & 0x1f) != 7) {
              uVar56 = 0;
            }
            uVar21 = FUN_00428440(uVar56);
            if ((uVar21 & 0x1f) != 7) {
              uVar56 = 0;
            }
            if (uVar56 == 0) {
              uVar21 = 0;
            }
            else {
              uVar21 = FUN_00428370();
              if ((uVar21 & 1) != 0) {
                FUN_0043dd30(uVar21 & 0xfffffffffffffffe);
              }
            }
            lVar31 = *(long *)(lVar53 + lVar58 * 0x38 + 0x18);
            uVar22 = FUN_00428440(lVar31);
            if ((uVar22 & 0x1f) != 7) {
              lVar31 = 0;
            }
            if (lVar31 == 0) {
              uVar22 = 0;
            }
            else {
              uVar22 = FUN_00428370(lVar31);
              if ((uVar22 & 1) != 0) {
                FUN_0043dd30(uVar22 & 0xfffffffffffffffe);
              }
            }
            if ((int)uVar11 < 1) {
              if ((uVar22 & 1) != 0) {
                FUN_0043dd50(uVar22 & 0xfffffffffffffffe);
              }
              if ((uVar21 & 1) != 0) {
                goto LAB_0045e83c;
              }
            }
            else {
              iVar15 = 0;
              do {
                plVar55 = *(long **)(param_1 + 0x288);
                uVar16 = *(uint *)(plVar55 + 1);
                if (uVar16 == (*(uint *)((long)plVar55 + 0xc) & 0x3fffffff)) {
                  FUN_00426990(puVar13,plVar55,0x30);
                  uVar16 = *(uint *)(plVar55 + 1);
                }
                lVar53 = *plVar55;
                puVar48 = (ulong *)(lVar53 + (long)(int)uVar16 * 0x30);
                puVar48[2] = uVar21;
                *puVar48 = (ulong)pppppppdVar41;
                puVar48[1] = uVar56;
                if ((uVar21 & 1) != 0) {
                  FUN_0043dd30(uVar21 & 0xfffffffffffffffe);
                }
                lVar53 = lVar53 + (long)(int)uVar16 * 0x30;
                *(ulong *)(lVar53 + 0x28) = uVar22;
                *(double ********)(lVar53 + 0x18) = pppppppdVar34;
                *(long *)(lVar53 + 0x20) = lVar31;
                if ((uVar22 & 1) != 0) {
                  FUN_0043dd30(uVar22 & 0xfffffffffffffffe);
                }
                *(uint *)(plVar55 + 1) = uVar16 + 1;
                if ((uVar21 & 1) != 0) {
                  FUN_0043dd50(uVar21 & 0xfffffffffffffffe);
                }
                pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar57);
                pppppppdVar34 = (double *******)((long)pppppppdVar34 + lVar52);
                if ((uVar22 & 1) != 0) {
                  FUN_0043dd50(uVar22 & 0xfffffffffffffffe);
                }
                iVar15 = iVar15 + 1;
                uVar22 = uVar22 & 0xfffffffffffffffe;
                uVar21 = uVar21 & 0xfffffffffffffffe;
              } while (iVar15 < (int)uVar24);
              iVar15 = 0;
            }
            break;
          case 0xd:
            uVar16 = *(uint *)(lVar53 + lVar58 * 0x38 + 0x18);
            uVar56 = (ulong)uVar16;
            if (uVar16 == uVar29 && uVar16 == uVar37) {
              FUN_0043a3b0(pppppppdVar41,pppppppdVar34,uVar24 * uVar37);
            }
            else if ((0 < (int)uVar11) && (0 < (int)uVar16)) {
              uVar25 = 0;
              do {
                if (uVar56 - 1 < 7) {
                  lVar31 = 0;
                }
                else {
                  lVar31 = 0;
                  do {
                    puVar27 = (undefined1 *)((long)pppppppdVar34 + lVar31);
                    puVar47 = (undefined1 *)((long)pppppppdVar41 + lVar31);
                    lVar31 = lVar31 + 8;
                    *puVar47 = *puVar27;
                    puVar47[1] = puVar27[1];
                    puVar47[2] = puVar27[2];
                    puVar47[3] = puVar27[3];
                    puVar47[4] = puVar27[4];
                    puVar47[5] = puVar27[5];
                    puVar47[6] = puVar27[6];
                    puVar47[7] = puVar27[7];
                  } while (uVar56 - (uVar56 & 7) != lVar31);
                }
                if ((uVar16 & 7) != 0) {
                  lVar53 = -(uVar56 & 7);
                  do {
                    lVar53 = lVar53 + 1;
                    *(undefined1 *)((long)pppppppdVar41 + lVar31) =
                         *(undefined1 *)((long)pppppppdVar34 + lVar31);
                    lVar31 = lVar31 + 1;
                  } while (lVar53 != 0);
                }
                uVar25 = uVar25 + 1;
                pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar57);
                pppppppdVar34 = (double *******)((long)pppppppdVar34 + lVar52);
              } while (uVar25 != uVar24);
            }
          }
switchD_0045e8a0_caseD_3:
          iVar49 = iVar49 + 1;
        } while (iVar6 != iVar49);
      }
      iVar23 = uVar24 + iVar23;
    } while (iVar23 < param_9);
  }
  if ((uint)local_2c98 == 0) {
    iVar15 = 0;
    uVar29 = local_2c98._4_4_;
  }
  else {
    puVar47 = local_2ca0 + (long)(int)(uint)local_2c98 * 0x30;
    puVar27 = local_2ca0;
    do {
      FUN_0045f690(*(undefined8 *)(param_1 + 0x288),puVar27,puVar27 + 0x18);
      puVar27 = puVar27 + 0x30;
    } while (puVar27 != puVar47);
    iVar15 = 0;
LAB_0045f334:
    if (0 < (int)(uint)local_2c98) {
      puVar48 = (ulong *)(local_2ca0 + (long)(int)(uint)local_2c98 * 0x30 + -0x20);
      iVar23 = (uint)local_2c98;
      do {
        while ((puVar48[3] & 1) != 0) {
          FUN_0043dd50(puVar48[3] & 0xfffffffffffffffe);
          uVar42 = *puVar48;
          if ((uVar42 & 1) != 0) goto LAB_0045f384;
LAB_0045f364:
          iVar23 = iVar23 + -1;
          puVar48 = puVar48 + -6;
          if (iVar23 == 0) goto LAB_0045f398;
        }
        uVar42 = *puVar48;
        if ((uVar42 & 1) == 0) goto LAB_0045f364;
LAB_0045f384:
        FUN_0043dd50(uVar42 & 0xfffffffffffffffe);
        iVar23 = iVar23 + -1;
        puVar48 = puVar48 + -6;
      } while (iVar23 != 0);
    }
LAB_0045f398:
    uVar29 = local_2c98._4_4_;
  }
  if ((-1 < (long)local_2c98) &&
     (local_2c98 = (ulong)uVar29 << 0x20, local_2ca0 != (undefined1 *)0x0)) {
    FUN_00421f90(uVar26,local_2ca0,0x30,uVar29 & 0x3fffffff);
  }
  return iVar15;
}


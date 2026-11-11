
/* WARNING: Type propagation algorithm not settling */

int FUN_004d7ed0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                undefined8 param_6,uint param_7,uint param_8,int param_9)

{
  ushort *puVar1;
  uint *puVar2;
  double *******pppppppdVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 uVar8;
  char cVar9;
  short sVar10;
  ushort uVar11;
  uint uVar12;
  float fVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  long *plVar19;
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  int iVar23;
  uint uVar24;
  undefined8 uVar25;
  undefined1 *puVar26;
  double *******pppppppdVar27;
  long lVar28;
  long lVar29;
  double *******pppppppdVar30;
  double ******ppppppdVar31;
  double *******pppppppdVar32;
  long lVar33;
  undefined1 *puVar34;
  double *******pppppppdVar35;
  long lVar36;
  long lVar37;
  ulong uVar38;
  ulong uVar39;
  long lVar40;
  double *******pppppppdVar41;
  long lVar42;
  int iVar43;
  undefined8 uVar44;
  undefined8 *puVar45;
  ulong *puVar46;
  ulong uVar47;
  uint uVar48;
  uint uVar49;
  long lVar50;
  long *plVar51;
  long *plVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  ulong uVar56;
  float fVar57;
  undefined1 *local_2ca0;
  undefined8 local_2c98;
  undefined1 local_2c90 [3072];
  double *******local_2090;
  ulong local_2088;
  ulong local_2080;
  double *******local_90;
  long lStack_88;
  ulong local_80;
  
  fVar13 = DAT_04102e70;
  local_2ca0 = local_2c90;
  local_2c98 = 0x8000004000000000;
  uVar25 = *(undefined8 *)PTR_PTR_04bd4d28;
  if (0 < param_9) {
    lVar53 = (long)(int)param_7;
    lVar36 = lVar53 * 2;
    lVar54 = (long)(int)param_8;
    lVar28 = lVar54 * 2;
    iVar23 = 0;
    iVar18 = 0x4102000;
    do {
      lVar40 = (long)iVar23;
      uVar12 = param_9 - iVar23;
      iVar7 = *(int *)(param_2 + 0x10);
      uVar6 = uVar12;
      if (0x3ff < (int)uVar12) {
        uVar6 = 0x400;
      }
      if (iVar7 != 0) {
        uVar39 = (ulong)uVar6;
        pppppppdVar3 = (double *******)(local_2c90 + (long)(int)(uVar6 << 3) + 0xc00);
        lVar37 = uVar39 - (uVar39 & 1);
        lVar42 = lVar53 * (lVar40 + 1);
        lVar4 = param_3 + lVar42;
        iVar43 = 0;
        do {
          lVar50 = *(long *)(param_2 + 8);
          lVar29 = lVar50 + (long)iVar43 * 0x38;
          if (0xc < *(byte *)(lVar29 + 8) - 1) goto switchD_004d919c_caseD_3;
          uVar47 = (ulong)*(ushort *)(lVar29 + 0xc);
          pppppppdVar41 = (double *******)(param_3 + lVar40 * lVar53 + uVar47);
          pppppppdVar32 =
               (double *******)(param_5 + lVar40 * lVar54 + (ulong)*(ushort *)(lVar29 + 10));
          lVar55 = (long)iVar43;
          switch((uint)*(byte *)(lVar29 + 8)) {
          case 1:
            lVar29 = *(long *)(lVar50 + lVar55 * 0x38 + 0x20);
            uVar47 = FUN_00428440(lVar29);
            if ((uVar47 & 0x1f) != 2) {
              lVar29 = 0;
            }
            if (lVar29 == 0) {
              plVar19 = (long *)0x0;
            }
            else {
              plVar19 = (long *)FUN_00428370(lVar29);
              if (((ulong)plVar19 & 1) != 0) {
                FUN_0043dd30((ulong)plVar19 & 0xfffffffffffffffe);
              }
            }
            lVar50 = *(long *)(lVar50 + lVar55 * 0x38 + 0x18);
            uVar47 = FUN_00428440(lVar50);
            if ((uVar47 & 0x1f) != 2) {
              lVar50 = 0;
            }
            if (lVar50 == 0) {
              plVar20 = (long *)0x0;
            }
            else {
              plVar20 = (long *)FUN_00428370(lVar50);
              if (((ulong)plVar20 & 1) != 0) {
                FUN_0043dd30((ulong)plVar20 & 0xfffffffffffffffe);
              }
            }
            if ((int)uVar12 < 1) {
              iVar16 = 0xe;
            }
            else {
              iVar16 = 0;
              do {
                local_2090 = (double *******)((ulong)local_2090 & 0xffffffffffffff00);
                plVar51 = (long *)((ulong)plVar20 & 0xfffffffffffffffe);
                (**(code **)(*plVar51 + 0x38))(plVar51,pppppppdVar32,lVar50,&local_2090);
                plVar52 = (long *)((ulong)plVar19 & 0xfffffffffffffffe);
                iVar18 = (**(code **)(*plVar52 + 0x30))
                                   (plVar52,pppppppdVar41,lVar29,(ulong)local_2090 & 0xff);
                if (iVar18 < 0) {
                  iVar16 = 1;
                  goto LAB_004d9258;
                }
                if (((ulong)plVar19 & 1) != 0) {
                  FUN_0043dd50(plVar52);
                }
                pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar53);
                pppppppdVar32 = (double *******)((long)pppppppdVar32 + lVar54);
                if (((ulong)plVar20 & 1) != 0) {
                  FUN_0043dd50(plVar51);
                }
                iVar16 = iVar16 + 1;
                plVar20 = plVar51;
                plVar19 = plVar52;
              } while (iVar16 < (int)uVar6);
              iVar16 = 0xe;
            }
LAB_004d9258:
            if (((ulong)plVar20 & 1) != 0) {
              FUN_0043dd50((ulong)plVar20 & 0xfffffffffffffffe);
            }
            if (((ulong)plVar19 & 1) != 0) {
              FUN_0043dd50((ulong)plVar19 & 0xfffffffffffffffe);
            }
            if (iVar16 != 0xe) goto LAB_004d9bb8;
            break;
          case 2:
            lVar29 = *(long *)(lVar50 + lVar55 * 0x38 + 0x20);
            uVar47 = FUN_00428440(lVar29);
            if ((uVar47 & 0x1f) != 4) {
              lVar29 = 0;
            }
            if (lVar29 == 0) {
              plVar19 = (long *)0x0;
            }
            else {
              plVar19 = (long *)FUN_00428370(lVar29);
              if (((ulong)plVar19 & 1) != 0) {
                FUN_0043dd30((ulong)plVar19 & 0xfffffffffffffffe);
              }
            }
            lVar50 = *(long *)(lVar50 + lVar55 * 0x38 + 0x18);
            uVar47 = FUN_00428440(lVar50);
            if ((uVar47 & 0x1f) != 4) {
              lVar50 = 0;
            }
            if (lVar50 == 0) {
              plVar20 = (long *)0x0;
            }
            else {
              plVar20 = (long *)FUN_00428370(lVar50);
              if (((ulong)plVar20 & 1) != 0) {
                FUN_0043dd30((ulong)plVar20 & 0xfffffffffffffffe);
              }
            }
            if (0 < (int)uVar12) {
              iVar16 = 0;
              plVar51 = plVar19;
              plVar52 = plVar20;
              do {
                local_2090 = (double *******)0x0;
                local_2088 = local_2088 & 0xffffffffffffff00;
                plVar20 = (long *)((ulong)plVar52 & 0xfffffffffffffffe);
                (**(code **)(*plVar20 + 0x38))(plVar20,pppppppdVar32,lVar50,&local_2090);
                plVar19 = (long *)((ulong)plVar51 & 0xfffffffffffffffe);
                iVar18 = (**(code **)(*plVar19 + 0x30))(plVar19,pppppppdVar41,lVar29,&local_2090);
                if (iVar18 < 0) {
                  iVar16 = 1;
                  goto LAB_004d9294;
                }
                if (((ulong)plVar51 & 1) != 0) {
                  FUN_0043dd50(plVar19);
                }
                pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar53);
                pppppppdVar32 = (double *******)((long)pppppppdVar32 + lVar54);
                if (((ulong)plVar52 & 1) != 0) {
                  FUN_0043dd50(plVar20);
                }
                iVar16 = iVar16 + 1;
                plVar51 = plVar19;
                plVar52 = plVar20;
              } while (iVar16 < (int)uVar6);
            }
            iVar16 = 0x13;
            plVar51 = plVar19;
            plVar52 = plVar20;
LAB_004d9294:
            if (((ulong)plVar52 & 1) != 0) {
              FUN_0043dd50((ulong)plVar52 & 0xfffffffffffffffe);
            }
            if (((ulong)plVar51 & 1) != 0) {
              FUN_0043dd50((ulong)plVar51 & 0xfffffffffffffffe);
            }
            if (iVar16 != 0x13) goto LAB_004d9bb8;
            break;
          case 3:
            lVar29 = *(long *)(lVar50 + lVar55 * 0x38 + 0x20);
            uVar47 = FUN_00428440(lVar29);
            if ((uVar47 & 0x1f) != 5) {
              lVar29 = 0;
            }
            if (lVar29 == 0) {
              plVar19 = (long *)0x0;
            }
            else {
              plVar19 = (long *)FUN_00428370(lVar29);
              if (((ulong)plVar19 & 1) != 0) {
                FUN_0043dd30((ulong)plVar19 & 0xfffffffffffffffe);
              }
            }
            lVar50 = *(long *)(lVar50 + lVar55 * 0x38 + 0x18);
            uVar47 = FUN_00428440(lVar50);
            if ((uVar47 & 0x1f) != 5) {
              lVar50 = 0;
            }
            if (lVar50 == 0) {
              plVar20 = (long *)0x0;
            }
            else {
              plVar20 = (long *)FUN_00428370(lVar50);
              if (((ulong)plVar20 & 1) != 0) {
                FUN_0043dd30((ulong)plVar20 & 0xfffffffffffffffe);
              }
            }
            if ((int)uVar12 < 1) {
              iVar17 = 0x18;
              iVar16 = 0x18;
joined_r0x004d90b8:
              if (((ulong)plVar20 & 1) != 0) {
                FUN_0043dd50((ulong)plVar20 & 0xfffffffffffffffe);
                iVar16 = iVar17;
              }
            }
            else {
              iVar16 = 0;
              plVar51 = plVar19;
              do {
                local_2090 = (double *******)0x0;
                plVar52 = (long *)((ulong)plVar20 & 0xfffffffffffffffe);
                (**(code **)(*plVar52 + 0x38))(plVar52,pppppppdVar32,lVar50,&local_2090);
                plVar19 = (long *)((ulong)plVar51 & 0xfffffffffffffffe);
                iVar18 = (**(code **)(*plVar19 + 0x30))(local_2090,plVar19,pppppppdVar41,lVar29);
                if (iVar18 < 0) {
                  iVar17 = 1;
                  iVar16 = 1;
                  plVar19 = plVar51;
                  goto joined_r0x004d90b8;
                }
                if (((ulong)plVar51 & 1) != 0) {
                  FUN_0043dd50(plVar19);
                }
                pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar53);
                pppppppdVar32 = (double *******)((long)pppppppdVar32 + lVar54);
                if (((ulong)plVar20 & 1) != 0) {
                  FUN_0043dd50(plVar52);
                }
                iVar16 = iVar16 + 1;
                plVar20 = plVar52;
                plVar51 = plVar19;
              } while (iVar16 < (int)uVar6);
              iVar16 = 0x18;
            }
            if (((ulong)plVar19 & 1) != 0) {
              FUN_0043dd50((ulong)plVar19 & 0xfffffffffffffffe);
            }
            if (iVar16 != 0x18) goto LAB_004d9bb8;
            break;
          case 4:
            lVar28 = *(long *)(lVar50 + lVar55 * 0x38 + 0x20);
            uVar39 = FUN_00428440(lVar28);
            if (lVar28 == 0 || (uVar39 & 0x1f) != 6) {
              uVar39 = 0;
            }
            else {
              uVar39 = FUN_00428370(lVar28);
              if ((uVar39 & 1) != 0) {
                FUN_0043dd30(uVar39 & 0xfffffffffffffffe);
              }
            }
            lVar28 = *(long *)(lVar50 + lVar55 * 0x38 + 0x18);
            uVar47 = FUN_00428440(lVar28);
            uVar21 = 0;
            if ((lVar28 != 0) && ((uVar47 & 0x1f) == 6)) {
              uVar21 = FUN_00428370(lVar28);
            }
            if ((uVar21 & 1) != 0) {
              FUN_0043dd30(uVar21 & 0xfffffffffffffffe);
            }
            uVar47 = FUN_0043d930(0x2ecb65d7,
                                  "../..\\Common/Base/Reflect/TypeVm/hkTypeVmFastCopyInterpreter.inl"
                                  ,0xea,
                                  "hkResult hkTypeVm::FastCopyInterpreter::execPointer(const hkReflect::PointerVar &, const hkReflect::PointerVar &, int, int, int)"
                                  ,&DAT_0407ebb1,"Not implemented",&DAT_0413df78);
            if ((uVar47 & 1) != 0) {
              CallSupervisor(0x26);
            }
            if ((uVar21 & 1) != 0) {
              FUN_0043dd50(uVar21 & 0xfffffffffffffffe);
            }
            if ((uVar39 & 1) != 0) {
              FUN_0043dd50(uVar39 & 0xfffffffffffffffe);
            }
            iVar18 = -0x7ffbfe00;
            iVar23 = (uint)local_2c98;
            goto joined_r0x004d9db0;
          case 5:
            if ((int)(local_2c98._4_4_ & 0x3fffffff) < (int)((uint)local_2c98 + uVar6)) {
              local_2ca0 = (undefined1 *)
                           FUN_00426720(uVar25,(uint)local_2c98 + uVar6,0x30,local_2ca0,
                                        local_2c98 & 0xffffffff,(long)&local_2c98 + 4);
            }
            uVar47 = *(ulong *)(lVar50 + lVar55 * 0x38 + 0x20);
            uVar21 = FUN_00428440(uVar47);
            if ((uVar21 & 0x1f) != 3) {
              uVar47 = 0;
            }
            if (uVar47 == 0) {
              uVar21 = 0;
            }
            else {
              uVar21 = FUN_00428370(uVar47);
              if ((uVar21 & 1) != 0) {
                FUN_0043dd30(uVar21 & 0xfffffffffffffffe);
              }
            }
            lVar29 = *(long *)(lVar50 + lVar55 * 0x38 + 0x18);
            uVar22 = FUN_00428440(lVar29);
            if ((uVar22 & 0x1f) != 3) {
              lVar29 = 0;
            }
            if (lVar29 == 0) {
              uVar22 = 0;
            }
            else {
              uVar22 = FUN_00428370(lVar29);
              if ((uVar22 & 1) != 0) {
                FUN_0043dd30(uVar22 & 0xfffffffffffffffe);
              }
            }
            if ((int)uVar12 < 1) {
              if ((uVar22 & 1) != 0) {
                FUN_0043dd50(uVar22 & 0xfffffffffffffffe);
              }
            }
            else {
              iVar16 = 0;
              do {
                if ((uVar21 & 1) != 0) {
                  FUN_0043dd30(uVar21 & 0xfffffffffffffffe);
                }
                if ((uVar22 & 1) != 0) {
                  FUN_0043dd30(uVar22 & 0xfffffffffffffffe);
                }
                if ((uint)local_2c98 == (local_2c98._4_4_ & 0x3fffffff)) {
                  FUN_00426990(uVar25,&local_2ca0,0x30);
                }
                puVar26 = local_2ca0;
                iVar17 = (int)local_2c98;
                puVar46 = (ulong *)(local_2ca0 + (long)iVar17 * 0x30);
                puVar46[2] = uVar21;
                *puVar46 = (ulong)pppppppdVar41;
                puVar46[1] = uVar47;
                if ((uVar21 & 1) != 0) {
                  FUN_0043dd30(uVar21 & 0xfffffffffffffffe);
                }
                *(double ********)(puVar26 + (long)iVar17 * 0x30 + 0x18) = pppppppdVar32;
                *(long *)(puVar26 + (long)iVar17 * 0x30 + 0x20) = lVar29;
                *(ulong *)(puVar26 + (long)iVar17 * 0x30 + 0x28) = uVar22;
                if ((uVar22 & 1) == 0) {
                  local_2c98 = CONCAT44(local_2c98._4_4_,iVar17 + 1);
                }
                else {
                  FUN_0043dd30(uVar22 & 0xfffffffffffffffe);
                  local_2c98 = CONCAT44(local_2c98._4_4_,iVar17 + 1);
                  FUN_0043dd50(uVar22 & 0xfffffffffffffffe);
                }
                if ((uVar21 & 1) != 0) {
                  FUN_0043dd50(uVar21 & 0xfffffffffffffffe);
                  FUN_0043dd50(uVar21 & 0xfffffffffffffffe);
                }
                uVar21 = uVar21 & 0xfffffffffffffffe;
                pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar53);
                pppppppdVar32 = (double *******)((long)pppppppdVar32 + lVar54);
                if ((uVar22 & 1) != 0) {
                  FUN_0043dd50(uVar22 & 0xfffffffffffffffe);
                }
                iVar16 = iVar16 + 1;
                uVar22 = uVar22 & 0xfffffffffffffffe;
              } while (iVar16 < (int)uVar6);
            }
            if ((uVar21 & 1) != 0) {
              FUN_0043dd50(uVar21 & 0xfffffffffffffffe);
            }
            break;
          case 6:
            lVar29 = *(long *)(lVar50 + lVar55 * 0x38 + 0x20);
            if (lVar29 == 0) {
              uVar47 = 0;
            }
            else {
              uVar47 = FUN_00428370(lVar29);
              if ((uVar47 & 1) != 0) {
                FUN_0043dd30(uVar47 & 0xfffffffffffffffe);
              }
            }
            lVar33 = *(long *)(lVar50 + lVar55 * 0x38 + 0x18);
            if (lVar33 == 0) {
              uVar21 = 0;
            }
            else {
              uVar21 = FUN_00428370(lVar33);
              if ((uVar21 & 1) != 0) {
                FUN_0043dd30(uVar21 & 0xfffffffffffffffe);
              }
            }
            iVar18 = (**(code **)(lVar50 + lVar55 * 0x38 + 0x28))
                               (pppppppdVar41,lVar29,pppppppdVar32,lVar33,uVar6);
            if ((uVar21 & 1) != 0) {
              FUN_0043dd50(uVar21 & 0xfffffffffffffffe);
            }
            if ((uVar47 & 1) != 0) {
              FUN_0043dd50(uVar47 & 0xfffffffffffffffe);
            }
            if (iVar18 < 0) goto LAB_004d9bb8;
            break;
          case 7:
            lVar50 = lVar50 + lVar55 * 0x38;
            uVar44 = *(undefined8 *)(lVar50 + 0x20);
            uVar21 = FUN_00428440(uVar44);
            if ((uVar21 & 0x1f) != 4) {
              uVar44 = 0;
            }
            uVar21 = FUN_00428440(uVar44);
            uVar44 = *(undefined8 *)(lVar50 + 0x18);
            uVar22 = FUN_00428440(uVar44);
            if ((uVar22 & 0x1f) != 4) {
              uVar44 = 0;
            }
            uVar22 = FUN_00428440(uVar44);
            uVar15 = ((uint)(uVar21 >> 10) & 0x3fffff) + 7 >> 3;
            uVar38 = (ulong)uVar15;
            uVar24 = ((uint)(uVar22 >> 10) & 0x3fffff) + 7 >> 3;
            uVar56 = (ulong)uVar24;
            uVar48 = (uint)uVar22;
            iVar16 = uVar15 - uVar24;
            uVar49 = ((uint)uVar21 ^ uVar48) >> 8 & 1;
            if (iVar16 < 1) {
              if ((uVar22 & 0x100) != 0) {
                pppppppdVar32 = (double *******)((long)pppppppdVar32 + (long)-iVar16);
              }
              if (uVar49 == 0) {
                if (uVar15 != param_7 || uVar15 != param_8) {
                  if (uVar15 != 0 && 0 < (int)uVar12) {
                    uVar24 = 0;
                    do {
                      if (uVar38 - 1 < 7) {
                        lVar29 = 0;
                      }
                      else {
                        lVar29 = 0;
                        do {
                          puVar26 = (undefined1 *)((long)pppppppdVar32 + lVar29);
                          puVar34 = (undefined1 *)((long)pppppppdVar41 + lVar29);
                          lVar29 = lVar29 + 8;
                          *puVar34 = *puVar26;
                          puVar34[1] = puVar26[1];
                          puVar34[2] = puVar26[2];
                          puVar34[3] = puVar26[3];
                          puVar34[4] = puVar26[4];
                          puVar34[5] = puVar26[5];
                          puVar34[6] = puVar26[6];
                          puVar34[7] = puVar26[7];
                        } while (uVar38 - (uVar38 & 7) != lVar29);
                      }
                      if ((uVar15 & 7) != 0) {
                        lVar50 = -(uVar38 & 7);
                        do {
                          lVar50 = lVar50 + 1;
                          *(undefined1 *)((long)pppppppdVar41 + lVar29) =
                               *(undefined1 *)((long)pppppppdVar32 + lVar29);
                          lVar29 = lVar29 + 1;
                        } while (lVar50 != 0);
                      }
                      uVar24 = uVar24 + 1;
                      pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar53);
                      pppppppdVar32 = (double *******)((long)pppppppdVar32 + lVar54);
                    } while (uVar24 != uVar6);
                  }
                  break;
                }
                FUN_0043a3b0(pppppppdVar41,pppppppdVar32,uVar6 * param_8);
              }
              else if (0 < (int)uVar12) {
                switch(uVar15) {
                case 1:
                  lVar29 = 0;
                  if (2 < uVar39 - 1) {
                    pppppppdVar41 = pppppppdVar32;
                    lVar50 = param_3;
                    do {
                      *(undefined1 *)(lVar53 * lVar40 + uVar47 + lVar50) =
                           *(undefined1 *)pppppppdVar41;
                      lVar29 = lVar29 + 4;
                      *(undefined1 *)(lVar42 + uVar47 + lVar50) =
                           *(undefined1 *)(lVar54 + (long)pppppppdVar41);
                      *(undefined1 *)(lVar53 * (lVar40 + 2) + uVar47 + lVar50) =
                           *(undefined1 *)(lVar28 + (long)pppppppdVar41);
                      puVar26 = (undefined1 *)(lVar54 * 3 + (long)pppppppdVar41);
                      pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar54 * 4);
                      *(undefined1 *)(lVar53 * (lVar40 + 3) + uVar47 + lVar50) = *puVar26;
                      lVar50 = lVar50 + lVar53 * 4;
                    } while (uVar39 - (uVar39 & 3) != lVar29);
                  }
                  if ((uVar6 & 3) != 0) {
                    pppppppdVar32 = (double *******)((long)pppppppdVar32 + lVar54 * lVar29);
                    puVar26 = (undefined1 *)(param_3 + lVar53 * (lVar40 + lVar29) + uVar47);
                    lVar29 = -(uVar39 & 3);
                    do {
                      *puVar26 = *(undefined1 *)pppppppdVar32;
                      pppppppdVar32 = (double *******)((long)pppppppdVar32 + lVar54);
                      puVar26 = puVar26 + lVar53;
                      lVar29 = lVar29 + 1;
                    } while (lVar29 != 0);
                  }
                  break;
                case 2:
                  lVar29 = 0;
                  if (uVar39 != 1) {
                    lVar50 = 0;
                    lVar29 = 0;
                    pppppppdVar27 = pppppppdVar32;
                    do {
                      *(ushort *)((long)pppppppdVar41 + lVar50) =
                           *(ushort *)pppppppdVar27 >> 8 | *(ushort *)pppppppdVar27 << 8;
                      lVar29 = lVar29 + 2;
                      puVar1 = (ushort *)(lVar54 + (long)pppppppdVar27);
                      pppppppdVar27 = (double *******)((long)pppppppdVar27 + lVar28);
                      *(ushort *)(lVar4 + uVar47 + lVar50) = *puVar1 >> 8 | *puVar1 << 8;
                      lVar50 = lVar50 + lVar36;
                    } while (lVar37 != lVar29);
                  }
                  if ((uVar6 & 1) != 0) {
                    uVar11 = *(ushort *)(lVar29 * lVar54 + (long)pppppppdVar32);
                    *(ushort *)(lVar29 * lVar53 + (long)pppppppdVar41) = uVar11 >> 8 | uVar11 << 8;
                  }
                  break;
                case 3:
                case 5:
                case 6:
                case 7:
                  break;
                case 4:
                  lVar29 = 0;
                  if (uVar39 != 1) {
                    lVar50 = 0;
                    lVar29 = 0;
                    pppppppdVar27 = pppppppdVar32;
                    do {
                      uVar15 = (*(uint *)pppppppdVar27 & 0xff00ff00) >> 8 |
                               (*(uint *)pppppppdVar27 & 0xff00ff) << 8;
                      lVar29 = lVar29 + 2;
                      *(uint *)((long)pppppppdVar41 + lVar50) = uVar15 >> 0x10 | uVar15 << 0x10;
                      puVar2 = (uint *)(lVar54 + (long)pppppppdVar27);
                      pppppppdVar27 = (double *******)((long)pppppppdVar27 + lVar28);
                      uVar15 = (*puVar2 & 0xff00ff00) >> 8 | (*puVar2 & 0xff00ff) << 8;
                      *(uint *)(lVar4 + uVar47 + lVar50) = uVar15 >> 0x10 | uVar15 << 0x10;
                      lVar50 = lVar50 + lVar36;
                    } while (lVar37 != lVar29);
                  }
                  if ((uVar6 & 1) != 0) {
                    uVar15 = *(uint *)(lVar29 * lVar54 + (long)pppppppdVar32);
                    uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
                    *(uint *)(lVar29 * lVar53 + (long)pppppppdVar41) =
                         uVar15 >> 0x10 | uVar15 << 0x10;
                  }
                  break;
                case 8:
                  lVar29 = 0;
                  if (uVar39 != 1) {
                    lVar50 = 0;
                    lVar29 = 0;
                    pppppppdVar27 = pppppppdVar32;
                    do {
                      uVar21 = ((ulong)*pppppppdVar27 & 0xff00ff00ff00ff00) >> 8 |
                               ((ulong)*pppppppdVar27 & 0xff00ff00ff00ff) << 8;
                      uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar21 & 0xffff0000ffff) << 0x10;
                      lVar29 = lVar29 + 2;
                      *(ulong *)((long)pppppppdVar41 + lVar50) = uVar21 >> 0x20 | uVar21 << 0x20;
                      puVar46 = (ulong *)(lVar54 + (long)pppppppdVar27);
                      pppppppdVar27 = (double *******)((long)pppppppdVar27 + lVar28);
                      uVar21 = (*puVar46 & 0xff00ff00ff00ff00) >> 8 |
                               (*puVar46 & 0xff00ff00ff00ff) << 8;
                      uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar21 & 0xffff0000ffff) << 0x10;
                      *(ulong *)(lVar4 + uVar47 + lVar50) = uVar21 >> 0x20 | uVar21 << 0x20;
                      lVar50 = lVar50 + lVar36;
                    } while (lVar37 != lVar29);
                  }
                  if ((uVar6 & 1) != 0) {
                    ppppppdVar31 = *(double *******)(lVar29 * lVar54 + (long)pppppppdVar32);
                    uVar47 = ((ulong)ppppppdVar31 & 0xff00ff00ff00ff00) >> 8 |
                             ((ulong)ppppppdVar31 & 0xff00ff00ff00ff) << 8;
                    uVar47 = (uVar47 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar47 & 0xffff0000ffff) << 0x10;
                    *(double *******)(lVar29 * lVar53 + (long)pppppppdVar41) =
                         (double ******)(uVar47 >> 0x20 | uVar47 << 0x20);
                  }
                  break;
                default:
                  goto switchD_004d9a80_caseD_3;
                }
                break;
              }
            }
            else {
              bVar14 = (uVar21 & 0x100) != 0;
              lVar29 = 0;
              if (bVar14) {
                lVar29 = (long)iVar16;
              }
              uVar15 = uVar24 - 1;
              lVar50 = 1;
              if (bVar14) {
                uVar15 = uVar24;
                lVar50 = (long)-iVar16;
              }
              if (0 < (int)uVar12) {
                lVar55 = (long)(int)uVar15;
                if (uVar49 == 0) {
                  if (uVar24 != 0) {
                    uVar15 = 0;
                    do {
                      if (uVar56 - 1 < 7) {
                        lVar33 = 0;
                      }
                      else {
                        lVar33 = 0;
                        do {
                          puVar26 = (undefined1 *)((long)pppppppdVar32 + lVar33 + 3);
                          puVar34 = (undefined1 *)((long)pppppppdVar41 + lVar33 + lVar29 + 3);
                          lVar33 = lVar33 + 8;
                          puVar34[-3] = puVar26[-3];
                          puVar34[-2] = puVar26[-2];
                          puVar34[-1] = puVar26[-1];
                          *puVar34 = *puVar26;
                          puVar34[1] = puVar26[1];
                          puVar34[2] = puVar26[2];
                          puVar34[3] = puVar26[3];
                          puVar34[4] = puVar26[4];
                        } while (uVar56 - (uVar56 & 7) != lVar33);
                      }
                      if ((uVar24 & 7) != 0) {
                        puVar26 = (undefined1 *)((long)pppppppdVar41 + lVar33 + lVar29);
                        puVar34 = (undefined1 *)((long)pppppppdVar32 + lVar33);
                        lVar33 = -(uVar56 & 7);
                        do {
                          lVar33 = lVar33 + 1;
                          *puVar26 = *puVar34;
                          puVar26 = puVar26 + 1;
                          puVar34 = puVar34 + 1;
                        } while (lVar33 != 0);
                      }
                      if ((uVar48 >> 9 & 1) != 0) {
                        FUN_0043a4d0((char *)((long)pppppppdVar41 + lVar55) + lVar50,
                                     (int)*(char *)((long)pppppppdVar41 + lVar55) >> 0x1f & 0xff,
                                     iVar16);
                      }
                      uVar15 = uVar15 + 1;
                      pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar53);
                      pppppppdVar32 = (double *******)((long)pppppppdVar32 + lVar54);
                    } while (uVar15 != uVar6);
                    break;
                  }
                  uVar15 = uVar6;
                  do {
                    FUN_0043a3b0(lVar29 + (long)pppppppdVar41,pppppppdVar32,0);
                    if ((uVar48 >> 9 & 1) != 0) {
                      FUN_0043a4d0((char *)((long)pppppppdVar41 + lVar55) + lVar50,
                                   (int)*(char *)((long)pppppppdVar41 + lVar55) >> 0x1f & 0xff,
                                   iVar16);
                    }
                    pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar53);
                    pppppppdVar32 = (double *******)((long)pppppppdVar32 + lVar54);
                    uVar15 = uVar15 - 1;
                  } while (uVar15 != 0);
                }
                else {
                  uVar15 = uVar6;
                  if (uVar24 == 1) {
                    do {
                      *(undefined1 *)(lVar29 + (long)pppppppdVar41) = *(undefined1 *)pppppppdVar32;
                      if ((uVar48 >> 9 & 1) != 0) {
                        FUN_0043a4d0((char *)((long)pppppppdVar41 + lVar55) + lVar50,
                                     (int)*(char *)((long)pppppppdVar41 + lVar55) >> 0x1f & 0xff,
                                     iVar16);
                      }
                      pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar53);
                      pppppppdVar32 = (double *******)((long)pppppppdVar32 + lVar54);
                      uVar15 = uVar15 - 1;
                    } while (uVar15 != 0);
                  }
                  else {
                    do {
                      if (uVar24 == 2) {
                        *(ushort *)((long)pppppppdVar41 + lVar29) =
                             *(ushort *)pppppppdVar32 >> 8 | *(ushort *)pppppppdVar32 << 8;
                      }
                      else if (uVar24 == 4) {
                        uVar49 = (*(uint *)pppppppdVar32 & 0xff00ff00) >> 8 |
                                 (*(uint *)pppppppdVar32 & 0xff00ff) << 8;
                        *(uint *)((long)pppppppdVar41 + lVar29) = uVar49 >> 0x10 | uVar49 << 0x10;
                      }
                      else if (uVar24 == 8) {
                        uVar47 = ((ulong)*pppppppdVar32 & 0xff00ff00ff00ff00) >> 8 |
                                 ((ulong)*pppppppdVar32 & 0xff00ff00ff00ff) << 8;
                        uVar47 = (uVar47 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar47 & 0xffff0000ffff) << 0x10;
                        *(ulong *)((long)pppppppdVar41 + lVar29) = uVar47 >> 0x20 | uVar47 << 0x20;
                      }
                      if ((uVar48 >> 9 & 1) != 0) {
                        FUN_0043a4d0((char *)((long)pppppppdVar41 + lVar55) + lVar50,
                                     (int)*(char *)((long)pppppppdVar41 + lVar55) >> 0x1f & 0xff,
                                     iVar16);
                      }
                      pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar53);
                      uVar15 = uVar15 - 1;
                      pppppppdVar32 = (double *******)((long)pppppppdVar32 + lVar54);
                    } while (uVar15 != 0);
                  }
                }
              }
            }
            goto switchD_004d9a80_caseD_3;
          case 8:
            lVar50 = lVar50 + lVar55 * 0x38;
            uVar44 = *(undefined8 *)(lVar50 + 0x20);
            uVar47 = FUN_00428440(uVar44);
            if ((uVar47 & 0x1f) != 5) {
              uVar44 = 0;
            }
            uVar47 = FUN_00428440(uVar44);
            uVar44 = *(undefined8 *)(lVar50 + 0x18);
            uVar21 = FUN_00428440(uVar44);
            if ((uVar21 & 0x1f) != 5) {
              uVar44 = 0;
            }
            uVar15 = FUN_00428440(uVar44);
            bVar14 = (uVar15 & 0x100) == 0;
            pppppppdVar27 = (double *******)&local_2090;
            if (bVar14) {
              pppppppdVar27 = pppppppdVar32;
            }
            uVar24 = 8;
            if (bVar14) {
              uVar24 = param_8;
            }
            if ((uVar15 >> 8 & 1) != 0) {
              switch((uVar15 >> 10 & 1) + (uVar15 >> 0xb & 0x1f) + (uVar15 >> 0x10 & 0xff) + 7 >> 3)
              {
              case 1:
                if (&local_2090 < pppppppdVar3) {
                  pppppppdVar35 = (double *******)&local_2090;
                  do {
                    uVar8 = *(undefined1 *)pppppppdVar32;
                    pppppppdVar32 = (double *******)((long)pppppppdVar32 + lVar54);
                    pppppppdVar30 = pppppppdVar35 + 1;
                    *(undefined1 *)pppppppdVar35 = uVar8;
                    pppppppdVar35 = pppppppdVar30;
                  } while (pppppppdVar30 < pppppppdVar3);
                }
                break;
              case 2:
                if (&local_2090 < pppppppdVar3) {
                  pppppppdVar35 = (double *******)&local_2090;
                  do {
                    uVar11 = *(ushort *)pppppppdVar32;
                    pppppppdVar32 = (double *******)((long)pppppppdVar32 + lVar54);
                    pppppppdVar30 = pppppppdVar35 + 1;
                    *(ushort *)pppppppdVar35 = uVar11 >> 8 | uVar11 << 8;
                    pppppppdVar35 = pppppppdVar30;
                  } while (pppppppdVar30 < pppppppdVar3);
                }
                break;
              case 4:
                if (&local_2090 < pppppppdVar3) {
                  pppppppdVar35 = (double *******)&local_2090;
                  do {
                    uVar49 = *(uint *)pppppppdVar32;
                    pppppppdVar32 = (double *******)((long)pppppppdVar32 + lVar54);
                    uVar49 = (uVar49 & 0xff00ff00) >> 8 | (uVar49 & 0xff00ff) << 8;
                    pppppppdVar30 = pppppppdVar35 + 1;
                    *(uint *)pppppppdVar35 = uVar49 >> 0x10 | uVar49 << 0x10;
                    pppppppdVar35 = pppppppdVar30;
                  } while (pppppppdVar30 < pppppppdVar3);
                }
                break;
              case 8:
                if (&local_2090 < pppppppdVar3) {
                  pppppppdVar35 = (double *******)&local_2090;
                  do {
                    ppppppdVar31 = *pppppppdVar32;
                    pppppppdVar32 = (double *******)((long)pppppppdVar32 + lVar54);
                    uVar21 = ((ulong)ppppppdVar31 & 0xff00ff00ff00ff00) >> 8 |
                             ((ulong)ppppppdVar31 & 0xff00ff00ff00ff) << 8;
                    uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar21 & 0xffff0000ffff) << 0x10;
                    pppppppdVar30 = pppppppdVar35 + 1;
                    *pppppppdVar35 = (double ******)(uVar21 >> 0x20 | uVar21 << 0x20);
                    pppppppdVar35 = pppppppdVar30;
                  } while (pppppppdVar30 < pppppppdVar3);
                }
              }
              uVar15 = uVar15 & 0xfffffeff;
            }
            uVar49 = (uint)uVar47;
            bVar14 = (uVar47 & 0x100) == 0;
            pppppppdVar32 = (double *******)&local_2090;
            if (bVar14) {
              pppppppdVar32 = pppppppdVar41;
            }
            uVar48 = 8;
            if (bVar14) {
              uVar48 = param_7;
            }
            uVar5 = uVar49 & 0xfffffeff;
            if (uVar15 == 0x345e05) {
              if (uVar5 == 0x345e05) {
                pppppppdVar35 = (double *******)((long)pppppppdVar32 + (long)(int)(uVar48 * uVar6));
                if (pppppppdVar32 < pppppppdVar35) {
                  do {
                    *pppppppdVar32 = *pppppppdVar27;
                    pppppppdVar32 = (double *******)((long)pppppppdVar32 + (long)(int)uVar48);
                    pppppppdVar27 = (double *******)((long)pppppppdVar27 + (long)(int)uVar24);
                  } while (pppppppdVar32 < pppppppdVar35);
                }
              }
              else if (uVar5 == 0x174605) {
                pppppppdVar35 = (double *******)((long)pppppppdVar32 + (long)(int)(uVar48 * uVar6));
                if (pppppppdVar32 < pppppppdVar35) {
                  do {
                    ppppppdVar31 = *pppppppdVar27;
                    pppppppdVar27 = (double *******)((long)pppppppdVar27 + (long)(int)uVar24);
                    *(float *)pppppppdVar32 = (float)(double)ppppppdVar31;
                    pppppppdVar32 = (double *******)((long)pppppppdVar32 + (long)(int)uVar48);
                  } while (pppppppdVar32 < pppppppdVar35);
                }
              }
              else if ((uVar5 == 0x74605) &&
                      (pppppppdVar35 =
                            (double *******)((long)pppppppdVar32 + (long)(int)(uVar48 * uVar6)),
                      pppppppdVar32 < pppppppdVar35)) {
                do {
                  ppppppdVar31 = *pppppppdVar27;
                  pppppppdVar27 = (double *******)((long)pppppppdVar27 + (long)(int)uVar24);
                  *(short *)pppppppdVar32 =
                       (short)((uint)((float)(double)ppppppdVar31 * fVar13) >> 0x10);
                  pppppppdVar32 = (double *******)((long)pppppppdVar32 + (long)(int)uVar48);
                } while (pppppppdVar32 < pppppppdVar35);
              }
            }
            else if (uVar15 == 0x174605) {
              if (uVar5 == 0x345e05) {
                pppppppdVar35 = (double *******)((long)pppppppdVar32 + (long)(int)(uVar48 * uVar6));
                if (pppppppdVar32 < pppppppdVar35) {
                  do {
                    fVar57 = *(float *)pppppppdVar27;
                    pppppppdVar27 = (double *******)((long)pppppppdVar27 + (long)(int)uVar24);
                    *pppppppdVar32 = (double ******)(double)fVar57;
                    pppppppdVar32 = (double *******)((long)pppppppdVar32 + (long)(int)uVar48);
                  } while (pppppppdVar32 < pppppppdVar35);
                }
              }
              else if (uVar5 == 0x174605) {
                pppppppdVar35 = (double *******)((long)pppppppdVar32 + (long)(int)(uVar48 * uVar6));
                if (pppppppdVar32 < pppppppdVar35) {
                  do {
                    *(uint *)pppppppdVar32 = *(uint *)pppppppdVar27;
                    pppppppdVar32 = (double *******)((long)pppppppdVar32 + (long)(int)uVar48);
                    pppppppdVar27 = (double *******)((long)pppppppdVar27 + (long)(int)uVar24);
                  } while (pppppppdVar32 < pppppppdVar35);
                }
              }
              else if ((uVar5 == 0x74605) &&
                      (pppppppdVar35 =
                            (double *******)((long)pppppppdVar32 + (long)(int)(uVar48 * uVar6)),
                      pppppppdVar32 < pppppppdVar35)) {
                do {
                  fVar57 = *(float *)pppppppdVar27;
                  pppppppdVar27 = (double *******)((long)pppppppdVar27 + (long)(int)uVar24);
                  *(short *)pppppppdVar32 = (short)((uint)(fVar57 * fVar13) >> 0x10);
                  pppppppdVar32 = (double *******)((long)pppppppdVar32 + (long)(int)uVar48);
                } while (pppppppdVar32 < pppppppdVar35);
              }
            }
            else if (uVar15 == 0x74605) {
              if (uVar5 == 0x345e05) {
                pppppppdVar35 = (double *******)((long)pppppppdVar32 + (long)(int)(uVar48 * uVar6));
                if (pppppppdVar32 < pppppppdVar35) {
                  do {
                    uVar11 = *(ushort *)pppppppdVar27;
                    pppppppdVar27 = (double *******)((long)pppppppdVar27 + (long)(int)uVar24);
                    *pppppppdVar32 = (double ******)(double)(float)((uint)uVar11 << 0x10);
                    pppppppdVar32 = (double *******)((long)pppppppdVar32 + (long)(int)uVar48);
                  } while (pppppppdVar32 < pppppppdVar35);
                }
              }
              else if (uVar5 == 0x174605) {
                pppppppdVar35 = (double *******)((long)pppppppdVar32 + (long)(int)(uVar48 * uVar6));
                if (pppppppdVar32 < pppppppdVar35) {
                  do {
                    uVar11 = *(ushort *)pppppppdVar27;
                    pppppppdVar27 = (double *******)((long)pppppppdVar27 + (long)(int)uVar24);
                    *(uint *)pppppppdVar32 = (uint)uVar11 << 0x10;
                    pppppppdVar32 = (double *******)((long)pppppppdVar32 + (long)(int)uVar48);
                  } while (pppppppdVar32 < pppppppdVar35);
                }
              }
              else if ((uVar5 == 0x74605) &&
                      (pppppppdVar35 =
                            (double *******)((long)pppppppdVar32 + (long)(int)(uVar48 * uVar6)),
                      pppppppdVar32 < pppppppdVar35)) {
                do {
                  *(undefined2 *)pppppppdVar32 = *(undefined2 *)pppppppdVar27;
                  pppppppdVar32 = (double *******)((long)pppppppdVar32 + (long)(int)uVar48);
                  pppppppdVar27 = (double *******)((long)pppppppdVar27 + (long)(int)uVar24);
                } while (pppppppdVar32 < pppppppdVar35);
              }
            }
            if (((uVar49 >> 8 & 1) != 0) &&
               (uVar15 = (uVar49 >> 10 & 1) + (uVar49 >> 0xb & 0x1f) +
                         ((uint)(uVar47 >> 0x10) & 0xff) + 7 >> 3, uVar15 - 1 < 8)) {
              pppppppdVar32 = (double *******)((long)pppppppdVar41 + (long)(int)(uVar6 * param_7));
              switch(uVar15) {
              case 1:
                if (pppppppdVar41 < pppppppdVar32) {
                  pppppppdVar27 = (double *******)&local_2090;
                  do {
                    *(undefined1 *)pppppppdVar41 = *(undefined1 *)pppppppdVar27;
                    pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar53);
                    pppppppdVar27 = pppppppdVar27 + 1;
                  } while (pppppppdVar41 < pppppppdVar32);
                }
                break;
              case 2:
                if (pppppppdVar41 < pppppppdVar32) {
                  pppppppdVar27 = (double *******)&local_2090;
                  do {
                    *(ushort *)pppppppdVar41 =
                         *(ushort *)pppppppdVar27 >> 8 | *(ushort *)pppppppdVar27 << 8;
                    pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar53);
                    pppppppdVar27 = pppppppdVar27 + 1;
                  } while (pppppppdVar41 < pppppppdVar32);
                }
                break;
              case 4:
                if (pppppppdVar41 < pppppppdVar32) {
                  pppppppdVar27 = (double *******)&local_2090;
                  do {
                    uVar15 = (*(uint *)pppppppdVar27 & 0xff00ff00) >> 8 |
                             (*(uint *)pppppppdVar27 & 0xff00ff) << 8;
                    *(uint *)pppppppdVar41 = uVar15 >> 0x10 | uVar15 << 0x10;
                    pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar53);
                    pppppppdVar27 = pppppppdVar27 + 1;
                  } while (pppppppdVar41 < pppppppdVar32);
                }
                break;
              case 8:
                if (pppppppdVar41 < pppppppdVar32) {
                  pppppppdVar27 = (double *******)&local_2090;
                  do {
                    uVar47 = ((ulong)*pppppppdVar27 & 0xff00ff00ff00ff00) >> 8 |
                             ((ulong)*pppppppdVar27 & 0xff00ff00ff00ff) << 8;
                    uVar47 = (uVar47 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar47 & 0xffff0000ffff) << 0x10;
                    *pppppppdVar41 = (double ******)(uVar47 >> 0x20 | uVar47 << 0x20);
                    pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar53);
                    pppppppdVar27 = pppppppdVar27 + 1;
                  } while (pppppppdVar41 < pppppppdVar32);
                }
              }
            }
switchD_004d9a80_caseD_3:
            break;
          case 9:
            lVar50 = lVar50 + lVar55 * 0x38;
            FUN_00426fc0(*(undefined8 *)(lVar50 + 0x20));
            FUN_00426fc0(*(undefined8 *)(lVar50 + 0x18));
            uVar44 = *(undefined8 *)(lVar50 + 0x20);
            iVar16 = FUN_00426fc0(*(undefined8 *)(lVar50 + 0x18));
            iVar17 = FUN_00426fc0(uVar44);
            pppppppdVar27 = (double *******)((long)pppppppdVar41 + (long)(int)(uVar6 * param_7));
            if (pppppppdVar41 < pppppppdVar27) {
              if (iVar16 == 1) {
                switch(iVar17) {
                case 1:
                  do {
                    cVar9 = *(char *)pppppppdVar32;
                    pppppppdVar32 = (double *******)((long)pppppppdVar32 + lVar54);
                    *(bool *)pppppppdVar41 = cVar9 != '\0';
                    pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar53);
                  } while (pppppppdVar41 < pppppppdVar27);
                  break;
                case 2:
                  do {
                    cVar9 = *(char *)pppppppdVar32;
                    pppppppdVar32 = (double *******)((long)pppppppdVar32 + lVar54);
                    *(ushort *)pppppppdVar41 = (ushort)(cVar9 != '\0');
                    pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar53);
                  } while (pppppppdVar41 < pppppppdVar27);
                  break;
                default:
switchD_004d8a60_caseD_3:
                  do {
                  } while( true );
                case 4:
                  do {
                    cVar9 = *(char *)pppppppdVar32;
                    pppppppdVar32 = (double *******)((long)pppppppdVar32 + lVar54);
                    *(uint *)pppppppdVar41 = (uint)(cVar9 != '\0');
                    pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar53);
                  } while (pppppppdVar41 < pppppppdVar27);
                  break;
                case 8:
                  do {
                    cVar9 = *(char *)pppppppdVar32;
                    pppppppdVar32 = (double *******)((long)pppppppdVar32 + lVar54);
                    *pppppppdVar41 = (double ******)(ulong)(cVar9 != '\0');
                    pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar53);
                  } while (pppppppdVar41 < pppppppdVar27);
                }
              }
              else if (iVar16 == 2) {
                if (iVar17 == 1) {
                  do {
                    sVar10 = *(short *)pppppppdVar32;
                    pppppppdVar32 = (double *******)((long)pppppppdVar32 + lVar54);
                    *(bool *)pppppppdVar41 = sVar10 != 0;
                    pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar53);
                  } while (pppppppdVar41 < pppppppdVar27);
                }
                else if (iVar17 == 2) {
                  do {
                    sVar10 = *(short *)pppppppdVar32;
                    pppppppdVar32 = (double *******)((long)pppppppdVar32 + lVar54);
                    *(ushort *)pppppppdVar41 = (ushort)(sVar10 != 0);
                    pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar53);
                  } while (pppppppdVar41 < pppppppdVar27);
                }
                else if (iVar17 == 4) {
                  do {
                    sVar10 = *(short *)pppppppdVar32;
                    pppppppdVar32 = (double *******)((long)pppppppdVar32 + lVar54);
                    *(uint *)pppppppdVar41 = (uint)(sVar10 != 0);
                    pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar53);
                  } while (pppppppdVar41 < pppppppdVar27);
                }
                else {
                  do {
                    if (iVar17 != 8) goto switchD_004d8a60_caseD_3;
                    sVar10 = *(short *)pppppppdVar32;
                    pppppppdVar32 = (double *******)((long)pppppppdVar32 + lVar54);
                    *pppppppdVar41 = (double ******)(ulong)(sVar10 != 0);
                    pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar53);
                  } while (pppppppdVar41 < pppppppdVar27);
                }
              }
              else if (iVar16 == 8) {
                do {
                  if (7 < iVar17 - 1U) goto switchD_004d8a60_caseD_3;
                  ppppppdVar31 = *pppppppdVar32;
                  switch(iVar17) {
                  case 1:
                    *(bool *)pppppppdVar41 = ppppppdVar31 != (double ******)0x0;
                    break;
                  case 2:
                    *(ushort *)pppppppdVar41 = (ushort)(ppppppdVar31 != (double ******)0x0);
                    break;
                  default:
                    goto switchD_004d8a60_caseD_3;
                  case 4:
                    *(uint *)pppppppdVar41 = (uint)(ppppppdVar31 != (double ******)0x0);
                    break;
                  case 8:
                    *pppppppdVar41 = (double ******)(ulong)(ppppppdVar31 != (double ******)0x0);
                  }
                  pppppppdVar32 = (double *******)((long)pppppppdVar32 + lVar54);
                  pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar53);
                } while (pppppppdVar41 < pppppppdVar27);
              }
              else {
                do {
                  if (iVar16 != 4) {
                    do {
                    /* WARNING: Do nothing block with infinite loop */
                    } while( true );
                  }
                  if (7 < iVar17 - 1U) goto switchD_004d8a60_caseD_3;
                  uVar15 = *(uint *)pppppppdVar32;
                  switch(iVar17) {
                  case 1:
                    *(bool *)pppppppdVar41 = uVar15 != 0;
                    break;
                  case 2:
                    *(ushort *)pppppppdVar41 = (ushort)(uVar15 != 0);
                    break;
                  default:
                    goto switchD_004d8a60_caseD_3;
                  case 4:
                    *(uint *)pppppppdVar41 = (uint)(uVar15 != 0);
                    break;
                  case 8:
                    *pppppppdVar41 = (double ******)(ulong)(uVar15 != 0);
                  }
                  pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar53);
                  pppppppdVar32 = (double *******)((long)pppppppdVar32 + lVar54);
                } while (pppppppdVar41 < pppppppdVar27);
              }
            }
            break;
          case 10:
            lVar50 = lVar50 + lVar55 * 0x38;
            FUN_00426fc0(*(undefined8 *)(lVar50 + 0x20));
            FUN_00426fc0(*(undefined8 *)(lVar50 + 0x18));
            lVar29 = *(long *)(lVar50 + 0x18);
            local_2088 = *(ulong *)(lVar50 + 0x20);
            uVar47 = 0;
            local_2090 = pppppppdVar41;
            if (local_2088 != 0) {
              uVar47 = FUN_00428370();
            }
            local_2080 = uVar47;
            if ((uVar47 & 1) != 0) {
              FUN_0043dd30(uVar47 & 0xfffffffffffffffe);
            }
            uVar47 = 0;
            local_90 = pppppppdVar32;
            lStack_88 = lVar29;
            if (lVar29 != 0) {
              uVar47 = FUN_00428370(lVar29);
            }
            local_80 = uVar47;
            if ((uVar47 & 1) != 0) {
              FUN_0043dd30(uVar47 & 0xfffffffffffffffe);
            }
            uVar15 = uVar6;
            if (0 < (int)uVar12) {
              do {
                FUN_00466cd0(param_1,&local_2090,&local_90);
                local_2090 = (double *******)((long)local_2090 + lVar53);
                uVar21 = local_2080 & 0xfffffffffffffffe;
                uVar47 = local_2080 & 1;
                local_2080 = uVar21;
                if (uVar47 != 0) {
                  FUN_0043dd50();
                }
                local_90 = (double *******)((long)local_90 + lVar54);
                uVar21 = local_80 & 0xfffffffffffffffe;
                uVar47 = local_80 & 1;
                local_80 = uVar21;
                if (uVar47 != 0) {
                  FUN_0043dd50();
                }
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
              uVar47 = local_80;
            }
            if ((uVar47 & 1) != 0) {
              FUN_0043dd50(uVar47 & 0xfffffffffffffffe);
            }
            if ((local_2080 & 1) != 0) {
              FUN_0043dd50(local_2080 & 0xfffffffffffffffe);
            }
            break;
          case 0xb:
            lVar29 = *(long *)(lVar50 + lVar55 * 0x38 + 0x20);
            uVar47 = FUN_00428440(lVar29);
            if ((uVar47 & 0x1f) != 8) {
              lVar29 = 0;
            }
            uVar21 = FUN_00428440(lVar29);
            uVar47 = 0;
            if ((uVar21 & 0x1f) == 8 && lVar29 != 0) {
              uVar47 = FUN_00428370(lVar29);
            }
            if ((uVar47 & 1) != 0) {
              FUN_0043dd30(uVar47 & 0xfffffffffffffffe);
            }
            lVar29 = *(long *)(lVar50 + lVar55 * 0x38 + 0x18);
            uVar22 = FUN_00428440(lVar29);
            uVar21 = 0;
            if (lVar29 != 0) {
              if ((uVar22 & 0x1f) == 8) {
                uVar21 = FUN_00428370(lVar29);
              }
              if ((uVar21 & 1) != 0) {
                FUN_0043dd30(uVar21 & 0xfffffffffffffffe);
              }
            }
            if ((int)uVar12 < 1) {
LAB_004d8fec:
              bVar14 = true;
            }
            else {
              uVar22 = FUN_0043d930(0x3d485f34,
                                    "../..\\Common/Base/Reflect/TypeVm/hkTypeVmFastCopyInterpreter.inl"
                                    ,0x205,
                                    "hkResult hkTypeVm::FastCopyInterpreter::execArray(const hkReflect::ArrayVar &, const hkReflect::ArrayVar &)"
                                    ,&DAT_0407ebb1,"Not implemented",&DAT_0413df78);
              bVar14 = false;
              if ((uVar22 & 1) == 0) goto LAB_004d8e40;
              CallSupervisor(0x26);
              iVar18 = -0x7ffbfe00;
            }
            goto joined_r0x004d8e4c;
          case 0xc:
            lVar29 = *(long *)(lVar50 + lVar55 * 0x38 + 0x20);
            uVar47 = FUN_00428440(lVar29);
            if ((uVar47 & 0x1f) != 7) {
              lVar29 = 0;
            }
            uVar21 = FUN_00428440(lVar29);
            uVar47 = 0;
            if ((uVar21 & 0x1f) == 7 && lVar29 != 0) {
              uVar47 = FUN_00428370(lVar29);
            }
            if ((uVar47 & 1) != 0) {
              FUN_0043dd30(uVar47 & 0xfffffffffffffffe);
            }
            lVar29 = *(long *)(lVar50 + lVar55 * 0x38 + 0x18);
            uVar22 = FUN_00428440(lVar29);
            uVar21 = 0;
            if (lVar29 != 0) {
              if ((uVar22 & 0x1f) == 7) {
                uVar21 = FUN_00428370(lVar29);
              }
              if ((uVar21 & 1) != 0) {
                FUN_0043dd30(uVar21 & 0xfffffffffffffffe);
              }
            }
            if ((int)uVar12 < 1) goto LAB_004d8fec;
            uVar22 = FUN_0043d930(0x28f4dd16,
                                  "../..\\Common/Base/Reflect/TypeVm/hkTypeVmFastCopyInterpreter.inl"
                                  ,0x20b,
                                  "hkResult hkTypeVm::FastCopyInterpreter::execRecord(const hkReflect::RecordVar &, const hkReflect::RecordVar &)"
                                  ,&DAT_0407ebb1,"Not implemented",&DAT_0413df78);
            if ((uVar22 & 1) != 0) {
              CallSupervisor(0x26);
            }
LAB_004d8e40:
            bVar14 = false;
            iVar18 = -0x7ffbfe00;
joined_r0x004d8e4c:
            if ((uVar21 & 1) != 0) {
              FUN_0043dd50(uVar21 & 0xfffffffffffffffe);
            }
            if ((uVar47 & 1) != 0) {
              FUN_0043dd50(uVar47 & 0xfffffffffffffffe);
            }
            if (!bVar14) goto LAB_004d9bb8;
            break;
          case 0xd:
            uVar15 = *(uint *)(lVar50 + lVar55 * 0x38 + 0x18);
            uVar47 = (ulong)uVar15;
            if (uVar15 == param_7 && uVar15 == param_8) {
              FUN_0043a3b0(pppppppdVar41,pppppppdVar32,uVar6 * param_8);
            }
            else if ((0 < (int)uVar12) && (0 < (int)uVar15)) {
              uVar24 = 0;
              do {
                if (uVar47 - 1 < 7) {
                  lVar29 = 0;
                }
                else {
                  lVar29 = 0;
                  do {
                    puVar26 = (undefined1 *)((long)pppppppdVar32 + lVar29);
                    puVar34 = (undefined1 *)((long)pppppppdVar41 + lVar29);
                    lVar29 = lVar29 + 8;
                    *puVar34 = *puVar26;
                    puVar34[1] = puVar26[1];
                    puVar34[2] = puVar26[2];
                    puVar34[3] = puVar26[3];
                    puVar34[4] = puVar26[4];
                    puVar34[5] = puVar26[5];
                    puVar34[6] = puVar26[6];
                    puVar34[7] = puVar26[7];
                  } while (uVar47 - (uVar47 & 7) != lVar29);
                }
                if ((uVar15 & 7) != 0) {
                  lVar50 = -(uVar47 & 7);
                  do {
                    lVar50 = lVar50 + 1;
                    *(undefined1 *)((long)pppppppdVar41 + lVar29) =
                         *(undefined1 *)((long)pppppppdVar32 + lVar29);
                    lVar29 = lVar29 + 1;
                  } while (lVar50 != 0);
                }
                uVar24 = uVar24 + 1;
                pppppppdVar41 = (double *******)((long)pppppppdVar41 + lVar53);
                pppppppdVar32 = (double *******)((long)pppppppdVar32 + lVar54);
              } while (uVar24 != uVar6);
            }
          }
switchD_004d919c_caseD_3:
          iVar43 = iVar43 + 1;
        } while (iVar7 != iVar43);
      }
      iVar23 = uVar6 + iVar23;
    } while (iVar23 < param_9);
  }
  if ((uint)local_2c98 == 0) {
    iVar18 = 0;
    uVar6 = local_2c98._4_4_;
  }
  else {
    lVar28 = (long)(int)(uint)local_2c98 * 0x30;
    puVar45 = (undefined8 *)(local_2ca0 + 0x18);
    do {
      local_2090 = (double *******)0x0;
      (**(code **)(*(long *)(puVar45[2] & 0xfffffffffffffffe) + 0x38))
                ((long *)(puVar45[2] & 0xfffffffffffffffe),*puVar45,puVar45[1],&local_2090);
      iVar18 = (**(code **)(*(long *)(puVar45[-1] & 0xfffffffffffffffe) + 0x30))
                         ((long *)(puVar45[-1] & 0xfffffffffffffffe),puVar45[-3],puVar45[-2],
                          local_2090);
      if (iVar18 < 0) {
        iVar23 = (uint)local_2c98;
        goto joined_r0x004d9db0;
      }
      lVar28 = lVar28 + -0x30;
      puVar45 = puVar45 + 6;
    } while (lVar28 != 0);
    iVar18 = 0;
LAB_004d9bb8:
    iVar23 = (uint)local_2c98;
joined_r0x004d9db0:
    if (iVar23 < 1) {
      local_2c98._4_4_ = (uint)(local_2c98 >> 0x20);
      uVar6 = local_2c98._4_4_;
    }
    else {
      puVar46 = (ulong *)((long)local_2ca0 + (long)iVar23 * 0x30 + -0x20);
      do {
        while ((puVar46[3] & 1) != 0) {
          FUN_0043dd50(puVar46[3] & 0xfffffffffffffffe);
          uVar39 = *puVar46;
          if ((uVar39 & 1) != 0) goto LAB_004d9c0c;
LAB_004d9bec:
          iVar23 = iVar23 + -1;
          puVar46 = puVar46 + -6;
          if (iVar23 == 0) goto LAB_004d9c20;
        }
        uVar39 = *puVar46;
        if ((uVar39 & 1) == 0) goto LAB_004d9bec;
LAB_004d9c0c:
        FUN_0043dd50(uVar39 & 0xfffffffffffffffe);
        iVar23 = iVar23 + -1;
        puVar46 = puVar46 + -6;
      } while (iVar23 != 0);
LAB_004d9c20:
      uVar6 = local_2c98._4_4_;
    }
  }
  if ((-1 < (long)local_2c98) &&
     (local_2c98 = (ulong)uVar6 << 0x20, local_2ca0 != (undefined1 *)0x0)) {
    FUN_00421f90(uVar25,local_2ca0,0x30,uVar6 & 0x3fffffff);
  }
  return iVar18;
}


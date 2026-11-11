
/* WARNING: Type propagation algorithm not settling */

int FUN_00497e10(long param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                undefined8 param_6,uint param_7,uint param_8,int param_9)

{
  ushort *puVar1;
  uint *puVar2;
  double *******pppppppdVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  undefined1 uVar9;
  char cVar10;
  short sVar11;
  ushort uVar12;
  float fVar13;
  undefined *puVar14;
  undefined *puVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  uint uVar22;
  int iVar23;
  long *plVar24;
  undefined8 uVar25;
  size_t sVar26;
  uint uVar27;
  uint uVar28;
  undefined1 *puVar29;
  double *******pppppppdVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  double *******pppppppdVar34;
  double ******ppppppdVar35;
  double *******pppppppdVar36;
  undefined1 *puVar37;
  double *******pppppppdVar38;
  long lVar39;
  long lVar40;
  ulong uVar41;
  ulong uVar42;
  long lVar43;
  int iVar44;
  ulong uVar45;
  long *plVar46;
  ulong uVar47;
  int *piVar48;
  ulong *puVar49;
  ulong uVar50;
  ulong uVar51;
  long lVar52;
  uint uVar53;
  uint uVar54;
  long lVar55;
  long lVar56;
  long *plVar57;
  long lVar58;
  long *plVar59;
  long lVar60;
  float fVar61;
  long *local_2ca0;
  undefined8 local_2c98;
  long local_2c90 [384];
  double *******local_2090;
  ulong local_2088;
  ulong local_2080;
  ulong local_2078;
  double *******local_90;
  long lStack_88;
  ulong local_80;
  double *******local_68;
  
  puVar15 = PTR_DAT_048607c0;
  puVar14 = PTR_DAT_048607b8;
  fVar13 = DAT_04102e70;
  local_2ca0 = local_2c90;
  local_2c98 = 0x8000004000000000;
  puVar4 = (undefined8 *)(param_1 + 0x290);
  if (0 < param_9) {
    lVar55 = (long)(int)param_7;
    lVar39 = lVar55 * 2;
    lVar60 = (long)(int)param_8;
    lVar31 = lVar60 * 2;
    iVar23 = 0;
    iVar17 = 0x4102000;
    do {
      uVar28 = param_9 - iVar23;
      lVar32 = (long)iVar23;
      uVar22 = uVar28;
      if (0x3ff < (int)uVar28) {
        uVar22 = 0x400;
      }
      iVar8 = *(int *)(param_2 + 0x10);
      if (iVar8 != 0) {
        pppppppdVar3 = (double *******)((long)local_2c90 + (long)(int)(uVar22 << 3) + 0xc00);
        uVar42 = (ulong)uVar22;
        lVar40 = uVar42 - (uVar42 & 1);
        lVar43 = lVar55 * (lVar32 + 1);
        iVar44 = 0;
        lVar5 = param_3 + lVar43;
        do {
          lVar58 = *(long *)(param_2 + 8);
          lVar33 = lVar58 + (long)iVar44 * 0x38;
          if (*(byte *)(lVar33 + 8) - 1 < 0xd) {
            uVar50 = (ulong)*(ushort *)(lVar33 + 0xc);
            local_68 = (double *******)(param_3 + lVar32 * lVar55 + uVar50);
            pppppppdVar36 =
                 (double *******)(param_5 + lVar32 * lVar60 + (ulong)*(ushort *)(lVar33 + 10));
            lVar56 = (long)iVar44;
            switch((uint)*(byte *)(lVar33 + 8)) {
            case 1:
              lVar33 = *(long *)(lVar58 + lVar56 * 0x38 + 0x20);
              uVar50 = FUN_00428440(lVar33);
              if ((uVar50 & 0x1f) != 2) {
                lVar33 = 0;
              }
              if (lVar33 == 0) {
                plVar24 = (long *)0x0;
              }
              else {
                plVar24 = (long *)FUN_00428370(lVar33);
                if (((ulong)plVar24 & 1) != 0) {
                  FUN_0043dd30((ulong)plVar24 & 0xfffffffffffffffe);
                }
              }
              lVar58 = *(long *)(lVar58 + lVar56 * 0x38 + 0x18);
              uVar50 = FUN_00428440(lVar58);
              if ((uVar50 & 0x1f) != 2) {
                lVar58 = 0;
              }
              if (lVar58 == 0) {
                plVar57 = (long *)0x0;
              }
              else {
                plVar57 = (long *)FUN_00428370(lVar58);
                if (((ulong)plVar57 & 1) != 0) {
                  FUN_0043dd30((ulong)plVar57 & 0xfffffffffffffffe);
                }
              }
              if ((int)uVar28 < 1) {
                iVar20 = 0xe;
                iVar19 = 0xe;
joined_r0x004991a4:
                if (((ulong)plVar57 & 1) != 0) {
                  FUN_0043dd50((ulong)plVar57 & 0xfffffffffffffffe);
                  iVar19 = iVar20;
                }
              }
              else {
                iVar19 = 0;
                plVar46 = plVar24;
                do {
                  local_2090 = (double *******)((ulong)local_2090 & 0xffffffffffffff00);
                  plVar59 = (long *)((ulong)plVar57 & 0xfffffffffffffffe);
                  (**(code **)(*plVar59 + 0x38))(plVar59,pppppppdVar36,lVar58,&local_2090);
                  plVar24 = (long *)((ulong)plVar46 & 0xfffffffffffffffe);
                  iVar17 = (**(code **)(*plVar24 + 0x30))
                                     (plVar24,local_68,lVar33,(ulong)local_2090 & 0xff);
                  if (iVar17 < 0) {
                    iVar20 = 1;
                    iVar19 = 1;
                    plVar24 = plVar46;
                    goto joined_r0x004991a4;
                  }
                  if (((ulong)plVar46 & 1) != 0) {
                    FUN_0043dd50(plVar24);
                  }
                  local_68 = (double *******)((long)local_68 + lVar55);
                  pppppppdVar36 = (double *******)((long)pppppppdVar36 + lVar60);
                  if (((ulong)plVar57 & 1) != 0) {
                    FUN_0043dd50(plVar59);
                  }
                  iVar19 = iVar19 + 1;
                  plVar46 = plVar24;
                  plVar57 = plVar59;
                } while (iVar19 < (int)uVar22);
                iVar19 = 0xe;
              }
              if (((ulong)plVar24 & 1) != 0) {
                FUN_0043dd50((ulong)plVar24 & 0xfffffffffffffffe);
              }
              if (iVar19 != 0xe) goto LAB_0049a2f0;
              break;
            case 2:
              lVar33 = *(long *)(lVar58 + lVar56 * 0x38 + 0x20);
              uVar50 = FUN_00428440(lVar33);
              if ((uVar50 & 0x1f) != 4) {
                lVar33 = 0;
              }
              if (lVar33 == 0) {
                plVar24 = (long *)0x0;
              }
              else {
                plVar24 = (long *)FUN_00428370(lVar33);
                if (((ulong)plVar24 & 1) != 0) {
                  FUN_0043dd30((ulong)plVar24 & 0xfffffffffffffffe);
                }
              }
              lVar58 = *(long *)(lVar58 + lVar56 * 0x38 + 0x18);
              uVar50 = FUN_00428440(lVar58);
              if ((uVar50 & 0x1f) != 4) {
                lVar58 = 0;
              }
              if (lVar58 == 0) {
                plVar57 = (long *)0x0;
              }
              else {
                plVar57 = (long *)FUN_00428370(lVar58);
                if (((ulong)plVar57 & 1) != 0) {
                  FUN_0043dd30((ulong)plVar57 & 0xfffffffffffffffe);
                }
              }
              if (0 < (int)uVar28) {
                iVar19 = 0;
                plVar46 = plVar24;
                plVar59 = plVar57;
                do {
                  local_2090 = (double *******)0x0;
                  local_2088 = local_2088 & 0xffffffffffffff00;
                  plVar57 = (long *)((ulong)plVar59 & 0xfffffffffffffffe);
                  (**(code **)(*plVar57 + 0x38))(plVar57,pppppppdVar36,lVar58,&local_2090);
                  plVar24 = (long *)((ulong)plVar46 & 0xfffffffffffffffe);
                  iVar17 = (**(code **)(*plVar24 + 0x30))(plVar24,local_68,lVar33,&local_2090);
                  if (iVar17 < 0) {
                    iVar20 = 1;
                    iVar19 = 1;
                    plVar24 = plVar46;
                    plVar57 = plVar59;
                    goto joined_r0x00499598;
                  }
                  if (((ulong)plVar46 & 1) != 0) {
                    FUN_0043dd50(plVar24);
                  }
                  local_68 = (double *******)((long)local_68 + lVar55);
                  pppppppdVar36 = (double *******)((long)pppppppdVar36 + lVar60);
                  if (((ulong)plVar59 & 1) != 0) {
                    FUN_0043dd50(plVar57);
                  }
                  iVar19 = iVar19 + 1;
                  plVar46 = plVar24;
                  plVar59 = plVar57;
                } while (iVar19 < (int)uVar22);
              }
              iVar20 = 0x13;
              iVar19 = 0x13;
joined_r0x00499598:
              if (((ulong)plVar57 & 1) != 0) {
                FUN_0043dd50((ulong)plVar57 & 0xfffffffffffffffe);
                iVar19 = iVar20;
              }
              if (((ulong)plVar24 & 1) != 0) {
                FUN_0043dd50((ulong)plVar24 & 0xfffffffffffffffe);
              }
              if (iVar19 != 0x13) goto LAB_0049a2f0;
              break;
            case 3:
              lVar33 = *(long *)(lVar58 + lVar56 * 0x38 + 0x20);
              uVar50 = FUN_00428440(lVar33);
              if ((uVar50 & 0x1f) != 5) {
                lVar33 = 0;
              }
              if (lVar33 == 0) {
                plVar24 = (long *)0x0;
              }
              else {
                plVar24 = (long *)FUN_00428370(lVar33);
                if (((ulong)plVar24 & 1) != 0) {
                  FUN_0043dd30((ulong)plVar24 & 0xfffffffffffffffe);
                }
              }
              lVar58 = *(long *)(lVar58 + lVar56 * 0x38 + 0x18);
              uVar50 = FUN_00428440(lVar58);
              if ((uVar50 & 0x1f) != 5) {
                lVar58 = 0;
              }
              if (lVar58 == 0) {
                plVar57 = (long *)0x0;
              }
              else {
                plVar57 = (long *)FUN_00428370(lVar58);
                if (((ulong)plVar57 & 1) != 0) {
                  FUN_0043dd30((ulong)plVar57 & 0xfffffffffffffffe);
                }
              }
              if ((int)uVar28 < 1) {
                iVar20 = 0x18;
                iVar19 = 0x18;
joined_r0x00499220:
                if (((ulong)plVar57 & 1) != 0) {
                  FUN_0043dd50((ulong)plVar57 & 0xfffffffffffffffe);
                  iVar19 = iVar20;
                }
              }
              else {
                iVar19 = 0;
                plVar46 = plVar24;
                do {
                  local_2090 = (double *******)0x0;
                  plVar59 = (long *)((ulong)plVar57 & 0xfffffffffffffffe);
                  (**(code **)(*plVar59 + 0x38))(plVar59,pppppppdVar36,lVar58,&local_2090);
                  plVar24 = (long *)((ulong)plVar46 & 0xfffffffffffffffe);
                  iVar17 = (**(code **)(*plVar24 + 0x30))(local_2090,plVar24,local_68,lVar33);
                  if (iVar17 < 0) {
                    iVar20 = 1;
                    iVar19 = 1;
                    plVar24 = plVar46;
                    goto joined_r0x00499220;
                  }
                  if (((ulong)plVar46 & 1) != 0) {
                    FUN_0043dd50(plVar24);
                  }
                  local_68 = (double *******)((long)local_68 + lVar55);
                  pppppppdVar36 = (double *******)((long)pppppppdVar36 + lVar60);
                  if (((ulong)plVar57 & 1) != 0) {
                    FUN_0043dd50(plVar59);
                  }
                  iVar19 = iVar19 + 1;
                  plVar46 = plVar24;
                  plVar57 = plVar59;
                } while (iVar19 < (int)uVar22);
                iVar19 = 0x18;
              }
              if (((ulong)plVar24 & 1) != 0) {
                FUN_0043dd50((ulong)plVar24 & 0xfffffffffffffffe);
              }
              if (iVar19 != 0x18) goto LAB_0049a2f0;
              break;
            case 4:
              lVar33 = *(long *)(lVar58 + lVar56 * 0x38 + 0x20);
              uVar50 = FUN_00428440(lVar33);
              if ((uVar50 & 0x1f) != 6) {
                lVar33 = 0;
              }
              if (lVar33 == 0) {
                uVar50 = 0;
              }
              else {
                uVar50 = FUN_00428370(lVar33);
                if ((uVar50 & 1) != 0) {
                  FUN_0043dd30(uVar50 & 0xfffffffffffffffe);
                }
              }
              uVar45 = *(ulong *)(lVar58 + lVar56 * 0x38 + 0x18);
              uVar51 = FUN_00428440(uVar45);
              if ((uVar51 & 0x1f) != 6) {
                uVar45 = 0;
              }
              if (uVar45 == 0) {
                uVar51 = 0;
LAB_004985d8:
                local_2090 = pppppppdVar36;
                local_2088 = uVar45;
                local_2080 = uVar51;
                if ((int)uVar28 < 1) goto LAB_004985f0;
LAB_00499294:
                uVar18 = 0;
                do {
                  iVar17 = (**(code **)(**(long **)(param_1 + 0x288) + 0x20))
                                     (*(long **)(param_1 + 0x288),&local_2090);
                  if (iVar17 != 0 && *(char *)(param_1 + 0x2a8) != '\0') {
                    plVar24 = *(long **)(param_1 + 0x2a0);
                    FUN_00429460(&local_90,lVar33);
                    lVar58 = lVar33;
                    if ((double *******)0x1 < local_90) {
                      do {
                        lVar58 = *(long *)(lVar58 + 8);
                        FUN_00429460(&local_90,lVar58);
                      } while ((double *******)0x1 < local_90);
                    }
                    uVar45 = local_2088;
                    FUN_00429460(&local_90,local_2088);
                    while ((double *******)0x1 < local_90) {
                      uVar45 = *(ulong *)(uVar45 + 8);
                      FUN_00429460(&local_90,uVar45);
                    }
                    (**(code **)(*plVar24 + 0x10))(plVar24,local_68,lVar58,uVar45);
                  }
                  *(uint *)local_68 = 0;
                  (**(code **)(**(long **)(param_1 + 0x2a0) + 0x18))
                            (*(long **)(param_1 + 0x2a0),local_68,iVar17);
                  local_68 = (double *******)((long)local_68 + lVar55);
                  local_2090 = (double *******)((long)local_2090 + lVar60);
                  uVar45 = local_2080 & 0xfffffffffffffffe;
                  if ((local_2080 & 1) != 0) {
                    FUN_0043dd50(uVar45);
                  }
                  uVar18 = uVar18 + 1;
                  local_2080 = uVar45;
                } while (uVar18 != uVar22);
                if ((uVar51 & 1) != 0) {
                  uVar51 = uVar51 & 0xfffffffffffffffe;
                  goto LAB_004996e0;
                }
              }
              else {
                uVar51 = FUN_00428370(uVar45);
                if ((uVar51 & 1) == 0) goto LAB_004985d8;
                FUN_0043dd30(uVar51 & 0xfffffffffffffffe);
                local_2090 = pppppppdVar36;
                local_2088 = uVar45;
                local_2080 = uVar51;
                FUN_0043dd30(uVar51 & 0xfffffffffffffffe);
                if (0 < (int)uVar28) goto LAB_00499294;
LAB_004985f0:
                if ((uVar51 & 1) != 0) {
                  uVar51 = uVar51 & 0xfffffffffffffffe;
                  FUN_0043dd50(uVar51);
LAB_004996e0:
                  FUN_0043dd50(uVar51);
                }
              }
              if ((uVar50 & 1) != 0) {
                FUN_0043dd50(uVar50 & 0xfffffffffffffffe);
              }
              iVar17 = 0;
              break;
            case 5:
              if ((int)(local_2c98._4_4_ & 0x3fffffff) < (int)((uint)local_2c98 + uVar22)) {
                local_2ca0 = (long *)FUN_00426720(puVar15,(uint)local_2c98 + uVar22,0x30,local_2ca0,
                                                  local_2c98 & 0xffffffff,(long)&local_2c98 + 4);
              }
              lVar33 = *(long *)(lVar58 + lVar56 * 0x38 + 0x20);
              uVar50 = FUN_00428440(lVar33);
              if ((uVar50 & 0x1f) != 3) {
                lVar33 = 0;
              }
              if (lVar33 == 0) {
                uVar50 = 0;
              }
              else {
                uVar50 = FUN_00428370(lVar33);
                if ((uVar50 & 1) != 0) {
                  FUN_0043dd30(uVar50 & 0xfffffffffffffffe);
                }
              }
              lVar58 = *(long *)(lVar58 + lVar56 * 0x38 + 0x18);
              uVar45 = FUN_00428440(lVar58);
              if ((uVar45 & 0x1f) != 3) {
                lVar58 = 0;
              }
              if (lVar58 == 0) {
                uVar45 = 0;
              }
              else {
                uVar45 = FUN_00428370(lVar58);
                if ((uVar45 & 1) != 0) {
                  FUN_0043dd30(uVar45 & 0xfffffffffffffffe);
                }
              }
              if ((int)uVar28 < 1) {
                if ((uVar45 & 1) != 0) {
                  FUN_0043dd50(uVar45 & 0xfffffffffffffffe);
                }
              }
              else {
                iVar19 = 0;
                do {
                  if ((uVar50 & 1) != 0) {
                    FUN_0043dd30(uVar50 & 0xfffffffffffffffe);
                  }
                  if ((uVar45 & 1) != 0) {
                    FUN_0043dd30(uVar45 & 0xfffffffffffffffe);
                  }
                  if ((uint)local_2c98 == (local_2c98._4_4_ & 0x3fffffff)) {
                    FUN_00426990(puVar15,&local_2ca0,0x30);
                  }
                  plVar24 = local_2ca0;
                  iVar20 = (int)local_2c98;
                  plVar57 = local_2ca0 + (long)iVar20 * 6;
                  plVar57[2] = uVar50;
                  *plVar57 = (long)local_68;
                  plVar57[1] = lVar33;
                  if ((uVar50 & 1) != 0) {
                    FUN_0043dd30(uVar50 & 0xfffffffffffffffe);
                  }
                  plVar24[(long)iVar20 * 6 + 5] = uVar45;
                  plVar24[(long)iVar20 * 6 + 3] = (long)pppppppdVar36;
                  plVar24[(long)iVar20 * 6 + 4] = lVar58;
                  if ((uVar45 & 1) == 0) {
                    local_2c98 = CONCAT44(local_2c98._4_4_,iVar20 + 1);
                  }
                  else {
                    FUN_0043dd30(uVar45 & 0xfffffffffffffffe);
                    local_2c98 = CONCAT44(local_2c98._4_4_,iVar20 + 1);
                    FUN_0043dd50(uVar45 & 0xfffffffffffffffe);
                  }
                  if ((uVar50 & 1) != 0) {
                    FUN_0043dd50(uVar50 & 0xfffffffffffffffe);
                    FUN_0043dd50(uVar50 & 0xfffffffffffffffe);
                  }
                  uVar50 = uVar50 & 0xfffffffffffffffe;
                  local_68 = (double *******)((long)local_68 + lVar55);
                  pppppppdVar36 = (double *******)((long)pppppppdVar36 + lVar60);
                  if ((uVar45 & 1) != 0) {
                    FUN_0043dd50(uVar45 & 0xfffffffffffffffe);
                  }
                  iVar19 = iVar19 + 1;
                  uVar45 = uVar45 & 0xfffffffffffffffe;
                } while (iVar19 < (int)uVar22);
              }
              if ((uVar50 & 1) != 0) {
                FUN_0043dd50(uVar50 & 0xfffffffffffffffe);
              }
              break;
            case 6:
              lVar33 = *(long *)(lVar58 + lVar56 * 0x38 + 0x20);
              if (lVar33 == 0) {
                uVar50 = 0;
              }
              else {
                uVar50 = FUN_00428370(lVar33);
                if ((uVar50 & 1) != 0) {
                  FUN_0043dd30(uVar50 & 0xfffffffffffffffe);
                }
              }
              lVar52 = *(long *)(lVar58 + lVar56 * 0x38 + 0x18);
              if (lVar52 == 0) {
                uVar45 = 0;
              }
              else {
                uVar45 = FUN_00428370(lVar52);
                if ((uVar45 & 1) != 0) {
                  FUN_0043dd30(uVar45 & 0xfffffffffffffffe);
                }
              }
              iVar17 = (**(code **)(lVar58 + lVar56 * 0x38 + 0x28))
                                 (local_68,lVar33,pppppppdVar36,lVar52,uVar22);
              if ((uVar45 & 1) != 0) {
                FUN_0043dd50(uVar45 & 0xfffffffffffffffe);
              }
              if ((uVar50 & 1) != 0) {
                FUN_0043dd50(uVar50 & 0xfffffffffffffffe);
              }
              if (iVar17 < 0) goto LAB_0049a2f0;
              break;
            case 7:
              lVar58 = lVar58 + lVar56 * 0x38;
              uVar25 = *(undefined8 *)(lVar58 + 0x20);
              uVar45 = FUN_00428440(uVar25);
              if ((uVar45 & 0x1f) != 4) {
                uVar25 = 0;
              }
              uVar45 = FUN_00428440(uVar25);
              uVar25 = *(undefined8 *)(lVar58 + 0x18);
              uVar51 = FUN_00428440(uVar25);
              if ((uVar51 & 0x1f) != 4) {
                uVar25 = 0;
              }
              uVar51 = FUN_00428440(uVar25);
              uVar18 = ((uint)(uVar45 >> 10) & 0x3fffff) + 7 >> 3;
              uVar41 = (ulong)uVar18;
              uVar27 = ((uint)(uVar51 >> 10) & 0x3fffff) + 7 >> 3;
              uVar47 = (ulong)uVar27;
              uVar53 = (uint)uVar51;
              iVar19 = uVar18 - uVar27;
              uVar54 = ((uint)uVar45 ^ uVar53) >> 8 & 1;
              if (iVar19 < 1) {
                if ((uVar51 & 0x100) != 0) {
                  pppppppdVar36 = (double *******)((long)pppppppdVar36 + (long)-iVar19);
                }
                if (uVar54 == 0) {
                  if (uVar18 != param_7 || uVar18 != param_8) {
                    if (uVar18 != 0 && 0 < (int)uVar28) {
                      uVar27 = 0;
                      do {
                        if (uVar41 - 1 < 7) {
                          lVar33 = 0;
                        }
                        else {
                          lVar33 = 0;
                          do {
                            puVar29 = (undefined1 *)((long)pppppppdVar36 + lVar33);
                            puVar37 = (undefined1 *)((long)local_68 + lVar33);
                            lVar33 = lVar33 + 8;
                            *puVar37 = *puVar29;
                            puVar37[1] = puVar29[1];
                            puVar37[2] = puVar29[2];
                            puVar37[3] = puVar29[3];
                            puVar37[4] = puVar29[4];
                            puVar37[5] = puVar29[5];
                            puVar37[6] = puVar29[6];
                            puVar37[7] = puVar29[7];
                          } while (uVar41 - (uVar41 & 7) != lVar33);
                        }
                        if ((uVar18 & 7) != 0) {
                          lVar58 = -(uVar41 & 7);
                          do {
                            lVar58 = lVar58 + 1;
                            *(undefined1 *)((long)local_68 + lVar33) =
                                 *(undefined1 *)((long)pppppppdVar36 + lVar33);
                            lVar33 = lVar33 + 1;
                          } while (lVar58 != 0);
                        }
                        uVar27 = uVar27 + 1;
                        local_68 = (double *******)((long)local_68 + lVar55);
                        pppppppdVar36 = (double *******)((long)pppppppdVar36 + lVar60);
                      } while (uVar27 != uVar22);
                    }
                    break;
                  }
                  FUN_0043a3b0(local_68,pppppppdVar36,uVar22 * param_8);
                }
                else if (0 < (int)uVar28) {
                  switch(uVar18) {
                  case 1:
                    lVar33 = 0;
                    if (2 < uVar42 - 1) {
                      pppppppdVar30 = pppppppdVar36;
                      lVar58 = param_3;
                      do {
                        *(undefined1 *)(lVar55 * lVar32 + uVar50 + lVar58) =
                             *(undefined1 *)pppppppdVar30;
                        lVar33 = lVar33 + 4;
                        *(undefined1 *)(lVar43 + uVar50 + lVar58) =
                             *(undefined1 *)(lVar60 + (long)pppppppdVar30);
                        *(undefined1 *)(lVar55 * (lVar32 + 2) + uVar50 + lVar58) =
                             *(undefined1 *)(lVar31 + (long)pppppppdVar30);
                        puVar29 = (undefined1 *)(lVar60 * 3 + (long)pppppppdVar30);
                        pppppppdVar30 = (double *******)((long)pppppppdVar30 + lVar60 * 4);
                        *(undefined1 *)(lVar55 * (lVar32 + 3) + uVar50 + lVar58) = *puVar29;
                        lVar58 = lVar58 + lVar55 * 4;
                      } while (uVar42 - (uVar42 & 3) != lVar33);
                    }
                    if ((uVar22 & 3) != 0) {
                      pppppppdVar36 = (double *******)((long)pppppppdVar36 + lVar60 * lVar33);
                      puVar29 = (undefined1 *)(param_3 + lVar55 * (lVar32 + lVar33) + uVar50);
                      lVar33 = -(uVar42 & 3);
                      do {
                        *puVar29 = *(undefined1 *)pppppppdVar36;
                        pppppppdVar36 = (double *******)((long)pppppppdVar36 + lVar60);
                        puVar29 = puVar29 + lVar55;
                        lVar33 = lVar33 + 1;
                      } while (lVar33 != 0);
                    }
                    break;
                  case 2:
                    lVar33 = 0;
                    if (uVar42 != 1) {
                      lVar58 = 0;
                      lVar33 = 0;
                      pppppppdVar30 = pppppppdVar36;
                      do {
                        *(ushort *)((long)local_68 + lVar58) =
                             *(ushort *)pppppppdVar30 >> 8 | *(ushort *)pppppppdVar30 << 8;
                        lVar33 = lVar33 + 2;
                        puVar1 = (ushort *)(lVar60 + (long)pppppppdVar30);
                        pppppppdVar30 = (double *******)((long)pppppppdVar30 + lVar31);
                        *(ushort *)(lVar5 + uVar50 + lVar58) = *puVar1 >> 8 | *puVar1 << 8;
                        lVar58 = lVar58 + lVar39;
                      } while (lVar40 != lVar33);
                    }
                    if ((uVar22 & 1) != 0) {
                      uVar12 = *(ushort *)(lVar33 * lVar60 + (long)pppppppdVar36);
                      *(ushort *)(lVar33 * lVar55 + (long)local_68) = uVar12 >> 8 | uVar12 << 8;
                    }
                    break;
                  case 3:
                  case 5:
                  case 6:
                  case 7:
                    break;
                  case 4:
                    lVar33 = 0;
                    if (uVar42 != 1) {
                      lVar58 = 0;
                      lVar33 = 0;
                      pppppppdVar30 = pppppppdVar36;
                      do {
                        uVar18 = (*(uint *)pppppppdVar30 & 0xff00ff00) >> 8 |
                                 (*(uint *)pppppppdVar30 & 0xff00ff) << 8;
                        lVar33 = lVar33 + 2;
                        *(uint *)((long)local_68 + lVar58) = uVar18 >> 0x10 | uVar18 << 0x10;
                        puVar2 = (uint *)(lVar60 + (long)pppppppdVar30);
                        pppppppdVar30 = (double *******)((long)pppppppdVar30 + lVar31);
                        uVar18 = (*puVar2 & 0xff00ff00) >> 8 | (*puVar2 & 0xff00ff) << 8;
                        *(uint *)(lVar5 + uVar50 + lVar58) = uVar18 >> 0x10 | uVar18 << 0x10;
                        lVar58 = lVar58 + lVar39;
                      } while (lVar40 != lVar33);
                    }
                    if ((uVar22 & 1) != 0) {
                      uVar18 = *(uint *)(lVar33 * lVar60 + (long)pppppppdVar36);
                      uVar18 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
                      *(uint *)(lVar33 * lVar55 + (long)local_68) = uVar18 >> 0x10 | uVar18 << 0x10;
                    }
                    break;
                  case 8:
                    lVar33 = 0;
                    if (uVar42 != 1) {
                      lVar58 = 0;
                      lVar33 = 0;
                      pppppppdVar30 = pppppppdVar36;
                      do {
                        uVar45 = ((ulong)*pppppppdVar30 & 0xff00ff00ff00ff00) >> 8 |
                                 ((ulong)*pppppppdVar30 & 0xff00ff00ff00ff) << 8;
                        uVar45 = (uVar45 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar45 & 0xffff0000ffff) << 0x10;
                        lVar33 = lVar33 + 2;
                        *(ulong *)((long)local_68 + lVar58) = uVar45 >> 0x20 | uVar45 << 0x20;
                        puVar49 = (ulong *)(lVar60 + (long)pppppppdVar30);
                        pppppppdVar30 = (double *******)((long)pppppppdVar30 + lVar31);
                        uVar45 = (*puVar49 & 0xff00ff00ff00ff00) >> 8 |
                                 (*puVar49 & 0xff00ff00ff00ff) << 8;
                        uVar45 = (uVar45 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar45 & 0xffff0000ffff) << 0x10;
                        *(ulong *)(lVar5 + uVar50 + lVar58) = uVar45 >> 0x20 | uVar45 << 0x20;
                        lVar58 = lVar58 + lVar39;
                      } while (lVar40 != lVar33);
                    }
                    if ((uVar22 & 1) != 0) {
                      ppppppdVar35 = *(double *******)(lVar33 * lVar60 + (long)pppppppdVar36);
                      uVar50 = ((ulong)ppppppdVar35 & 0xff00ff00ff00ff00) >> 8 |
                               ((ulong)ppppppdVar35 & 0xff00ff00ff00ff) << 8;
                      uVar50 = (uVar50 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar50 & 0xffff0000ffff) << 0x10;
                      *(double *******)(lVar33 * lVar55 + (long)local_68) =
                           (double ******)(uVar50 >> 0x20 | uVar50 << 0x20);
                    }
                    break;
                  default:
                    goto switchD_00499480_default;
                  }
                  break;
                }
switchD_00499480_default:
              }
              else {
                bVar16 = (uVar45 & 0x100) != 0;
                lVar33 = 0;
                if (bVar16) {
                  lVar33 = (long)iVar19;
                }
                uVar18 = uVar27 - 1;
                lVar58 = 1;
                if (bVar16) {
                  uVar18 = uVar27;
                  lVar58 = (long)-iVar19;
                }
                if ((int)uVar28 < 1) goto switchD_00499480_default;
                lVar56 = (long)(int)uVar18;
                if (uVar54 == 0) {
                  if (uVar27 != 0) {
                    uVar18 = 0;
                    do {
                      if (uVar47 - 1 < 7) {
                        lVar52 = 0;
                      }
                      else {
                        lVar52 = 0;
                        do {
                          puVar29 = (undefined1 *)((long)pppppppdVar36 + lVar52 + 3);
                          puVar37 = (undefined1 *)((long)local_68 + lVar52 + lVar33 + 3);
                          lVar52 = lVar52 + 8;
                          puVar37[-3] = puVar29[-3];
                          puVar37[-2] = puVar29[-2];
                          puVar37[-1] = puVar29[-1];
                          *puVar37 = *puVar29;
                          puVar37[1] = puVar29[1];
                          puVar37[2] = puVar29[2];
                          puVar37[3] = puVar29[3];
                          puVar37[4] = puVar29[4];
                        } while (uVar47 - (uVar47 & 7) != lVar52);
                      }
                      if ((uVar27 & 7) != 0) {
                        puVar29 = (undefined1 *)((long)local_68 + lVar52 + lVar33);
                        puVar37 = (undefined1 *)((long)pppppppdVar36 + lVar52);
                        lVar52 = -(uVar47 & 7);
                        do {
                          lVar52 = lVar52 + 1;
                          *puVar29 = *puVar37;
                          puVar29 = puVar29 + 1;
                          puVar37 = puVar37 + 1;
                        } while (lVar52 != 0);
                      }
                      if ((uVar53 >> 9 & 1) != 0) {
                        FUN_0043a4d0((char *)((long)local_68 + lVar56) + lVar58,
                                     (int)*(char *)((long)local_68 + lVar56) >> 0x1f & 0xff,iVar19);
                      }
                      local_68 = (double *******)((long)local_68 + lVar55);
                      pppppppdVar36 = (double *******)((long)pppppppdVar36 + lVar60);
                      uVar18 = uVar18 + 1;
                    } while (uVar18 != uVar22);
                    goto switchD_00499480_default;
                  }
                  uVar18 = uVar22;
                  do {
                    FUN_0043a3b0(lVar33 + (long)local_68,pppppppdVar36,0);
                    if ((uVar53 >> 9 & 1) != 0) {
                      FUN_0043a4d0((char *)((long)local_68 + lVar56) + lVar58,
                                   (int)*(char *)((long)local_68 + lVar56) >> 0x1f & 0xff,iVar19);
                    }
                    local_68 = (double *******)((long)local_68 + lVar55);
                    pppppppdVar36 = (double *******)((long)pppppppdVar36 + lVar60);
                    uVar18 = uVar18 - 1;
                  } while (uVar18 != 0);
                }
                else if (uVar27 == 1) {
                  uVar18 = uVar22;
                  do {
                    *(undefined1 *)(lVar33 + (long)local_68) = *(undefined1 *)pppppppdVar36;
                    if ((uVar53 >> 9 & 1) != 0) {
                      FUN_0043a4d0((char *)((long)local_68 + lVar56) + lVar58,
                                   (int)*(char *)((long)local_68 + lVar56) >> 0x1f & 0xff,iVar19);
                    }
                    local_68 = (double *******)((long)local_68 + lVar55);
                    pppppppdVar36 = (double *******)((long)pppppppdVar36 + lVar60);
                    uVar18 = uVar18 - 1;
                  } while (uVar18 != 0);
                }
                else {
                  uVar18 = uVar22;
                  do {
                    if (uVar27 == 2) {
                      *(ushort *)((long)local_68 + lVar33) =
                           *(ushort *)pppppppdVar36 >> 8 | *(ushort *)pppppppdVar36 << 8;
                    }
                    else if (uVar27 == 4) {
                      uVar54 = (*(uint *)pppppppdVar36 & 0xff00ff00) >> 8 |
                               (*(uint *)pppppppdVar36 & 0xff00ff) << 8;
                      *(uint *)((long)local_68 + lVar33) = uVar54 >> 0x10 | uVar54 << 0x10;
                    }
                    else if (uVar27 == 8) {
                      uVar50 = ((ulong)*pppppppdVar36 & 0xff00ff00ff00ff00) >> 8 |
                               ((ulong)*pppppppdVar36 & 0xff00ff00ff00ff) << 8;
                      uVar50 = (uVar50 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar50 & 0xffff0000ffff) << 0x10;
                      *(ulong *)((long)local_68 + lVar33) = uVar50 >> 0x20 | uVar50 << 0x20;
                    }
                    if ((uVar53 >> 9 & 1) != 0) {
                      FUN_0043a4d0((char *)((long)local_68 + lVar56) + lVar58,
                                   (int)*(char *)((long)local_68 + lVar56) >> 0x1f & 0xff,iVar19);
                    }
                    local_68 = (double *******)((long)local_68 + lVar55);
                    pppppppdVar36 = (double *******)((long)pppppppdVar36 + lVar60);
                    uVar18 = uVar18 - 1;
                  } while (uVar18 != 0);
                }
              }
              break;
            case 8:
              lVar58 = lVar58 + lVar56 * 0x38;
              uVar25 = *(undefined8 *)(lVar58 + 0x20);
              uVar50 = FUN_00428440(uVar25);
              if ((uVar50 & 0x1f) != 5) {
                uVar25 = 0;
              }
              uVar50 = FUN_00428440(uVar25);
              uVar25 = *(undefined8 *)(lVar58 + 0x18);
              uVar45 = FUN_00428440(uVar25);
              if ((uVar45 & 0x1f) != 5) {
                uVar25 = 0;
              }
              uVar18 = FUN_00428440(uVar25);
              bVar16 = (uVar18 & 0x100) == 0;
              pppppppdVar30 = (double *******)&local_2090;
              if (bVar16) {
                pppppppdVar30 = pppppppdVar36;
              }
              uVar27 = 8;
              if (bVar16) {
                uVar27 = param_8;
              }
              if ((uVar18 >> 8 & 1) != 0) {
                switch((uVar18 >> 10 & 1) + (uVar18 >> 0xb & 0x1f) + (uVar18 >> 0x10 & 0xff) + 7 >>
                       3) {
                case 1:
                  if (&local_2090 < pppppppdVar3) {
                    pppppppdVar38 = (double *******)&local_2090;
                    do {
                      uVar9 = *(undefined1 *)pppppppdVar36;
                      pppppppdVar36 = (double *******)((long)pppppppdVar36 + lVar60);
                      pppppppdVar34 = pppppppdVar38 + 1;
                      *(undefined1 *)pppppppdVar38 = uVar9;
                      pppppppdVar38 = pppppppdVar34;
                    } while (pppppppdVar34 < pppppppdVar3);
                  }
                  break;
                case 2:
                  if (&local_2090 < pppppppdVar3) {
                    pppppppdVar38 = (double *******)&local_2090;
                    do {
                      uVar12 = *(ushort *)pppppppdVar36;
                      pppppppdVar36 = (double *******)((long)pppppppdVar36 + lVar60);
                      pppppppdVar34 = pppppppdVar38 + 1;
                      *(ushort *)pppppppdVar38 = uVar12 >> 8 | uVar12 << 8;
                      pppppppdVar38 = pppppppdVar34;
                    } while (pppppppdVar34 < pppppppdVar3);
                  }
                  break;
                case 4:
                  if (&local_2090 < pppppppdVar3) {
                    pppppppdVar38 = (double *******)&local_2090;
                    do {
                      uVar54 = *(uint *)pppppppdVar36;
                      pppppppdVar36 = (double *******)((long)pppppppdVar36 + lVar60);
                      uVar54 = (uVar54 & 0xff00ff00) >> 8 | (uVar54 & 0xff00ff) << 8;
                      pppppppdVar34 = pppppppdVar38 + 1;
                      *(uint *)pppppppdVar38 = uVar54 >> 0x10 | uVar54 << 0x10;
                      pppppppdVar38 = pppppppdVar34;
                    } while (pppppppdVar34 < pppppppdVar3);
                  }
                  break;
                case 8:
                  if (&local_2090 < pppppppdVar3) {
                    pppppppdVar38 = (double *******)&local_2090;
                    do {
                      ppppppdVar35 = *pppppppdVar36;
                      pppppppdVar36 = (double *******)((long)pppppppdVar36 + lVar60);
                      uVar45 = ((ulong)ppppppdVar35 & 0xff00ff00ff00ff00) >> 8 |
                               ((ulong)ppppppdVar35 & 0xff00ff00ff00ff) << 8;
                      uVar45 = (uVar45 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar45 & 0xffff0000ffff) << 0x10;
                      pppppppdVar34 = pppppppdVar38 + 1;
                      *pppppppdVar38 = (double ******)(uVar45 >> 0x20 | uVar45 << 0x20);
                      pppppppdVar38 = pppppppdVar34;
                    } while (pppppppdVar34 < pppppppdVar3);
                  }
                }
                uVar18 = uVar18 & 0xfffffeff;
              }
              uVar54 = (uint)uVar50;
              bVar16 = (uVar50 & 0x100) == 0;
              pppppppdVar36 = (double *******)&local_2090;
              if (bVar16) {
                pppppppdVar36 = local_68;
              }
              uVar53 = 8;
              if (bVar16) {
                uVar53 = param_7;
              }
              uVar7 = uVar54 & 0xfffffeff;
              if (uVar18 == 0x345e05) {
                if (uVar7 == 0x345e05) {
                  pppppppdVar38 =
                       (double *******)((long)pppppppdVar36 + (long)(int)(uVar53 * uVar22));
                  if (pppppppdVar36 < pppppppdVar38) {
                    do {
                      *pppppppdVar36 = *pppppppdVar30;
                      pppppppdVar36 = (double *******)((long)pppppppdVar36 + (long)(int)uVar53);
                      pppppppdVar30 = (double *******)((long)pppppppdVar30 + (long)(int)uVar27);
                    } while (pppppppdVar36 < pppppppdVar38);
                  }
                }
                else if (uVar7 == 0x174605) {
                  pppppppdVar38 =
                       (double *******)((long)pppppppdVar36 + (long)(int)(uVar53 * uVar22));
                  if (pppppppdVar36 < pppppppdVar38) {
                    do {
                      ppppppdVar35 = *pppppppdVar30;
                      pppppppdVar30 = (double *******)((long)pppppppdVar30 + (long)(int)uVar27);
                      *(float *)pppppppdVar36 = (float)(double)ppppppdVar35;
                      pppppppdVar36 = (double *******)((long)pppppppdVar36 + (long)(int)uVar53);
                    } while (pppppppdVar36 < pppppppdVar38);
                  }
                }
                else if ((uVar7 == 0x74605) &&
                        (pppppppdVar38 =
                              (double *******)((long)pppppppdVar36 + (long)(int)(uVar53 * uVar22)),
                        pppppppdVar36 < pppppppdVar38)) {
                  do {
                    ppppppdVar35 = *pppppppdVar30;
                    pppppppdVar30 = (double *******)((long)pppppppdVar30 + (long)(int)uVar27);
                    *(short *)pppppppdVar36 =
                         (short)((uint)((float)(double)ppppppdVar35 * fVar13) >> 0x10);
                    pppppppdVar36 = (double *******)((long)pppppppdVar36 + (long)(int)uVar53);
                  } while (pppppppdVar36 < pppppppdVar38);
                }
              }
              else if (uVar18 == 0x174605) {
                if (uVar7 == 0x345e05) {
                  pppppppdVar38 =
                       (double *******)((long)pppppppdVar36 + (long)(int)(uVar53 * uVar22));
                  if (pppppppdVar36 < pppppppdVar38) {
                    do {
                      fVar61 = *(float *)pppppppdVar30;
                      pppppppdVar30 = (double *******)((long)pppppppdVar30 + (long)(int)uVar27);
                      *pppppppdVar36 = (double ******)(double)fVar61;
                      pppppppdVar36 = (double *******)((long)pppppppdVar36 + (long)(int)uVar53);
                    } while (pppppppdVar36 < pppppppdVar38);
                  }
                }
                else if (uVar7 == 0x174605) {
                  pppppppdVar38 =
                       (double *******)((long)pppppppdVar36 + (long)(int)(uVar53 * uVar22));
                  if (pppppppdVar36 < pppppppdVar38) {
                    do {
                      *(uint *)pppppppdVar36 = *(uint *)pppppppdVar30;
                      pppppppdVar36 = (double *******)((long)pppppppdVar36 + (long)(int)uVar53);
                      pppppppdVar30 = (double *******)((long)pppppppdVar30 + (long)(int)uVar27);
                    } while (pppppppdVar36 < pppppppdVar38);
                  }
                }
                else if ((uVar7 == 0x74605) &&
                        (pppppppdVar38 =
                              (double *******)((long)pppppppdVar36 + (long)(int)(uVar53 * uVar22)),
                        pppppppdVar36 < pppppppdVar38)) {
                  do {
                    fVar61 = *(float *)pppppppdVar30;
                    pppppppdVar30 = (double *******)((long)pppppppdVar30 + (long)(int)uVar27);
                    *(short *)pppppppdVar36 = (short)((uint)(fVar61 * fVar13) >> 0x10);
                    pppppppdVar36 = (double *******)((long)pppppppdVar36 + (long)(int)uVar53);
                  } while (pppppppdVar36 < pppppppdVar38);
                }
              }
              else if (uVar18 == 0x74605) {
                if (uVar7 == 0x345e05) {
                  pppppppdVar38 =
                       (double *******)((long)pppppppdVar36 + (long)(int)(uVar53 * uVar22));
                  if (pppppppdVar36 < pppppppdVar38) {
                    do {
                      uVar12 = *(ushort *)pppppppdVar30;
                      pppppppdVar30 = (double *******)((long)pppppppdVar30 + (long)(int)uVar27);
                      *pppppppdVar36 = (double ******)(double)(float)((uint)uVar12 << 0x10);
                      pppppppdVar36 = (double *******)((long)pppppppdVar36 + (long)(int)uVar53);
                    } while (pppppppdVar36 < pppppppdVar38);
                  }
                }
                else if (uVar7 == 0x174605) {
                  pppppppdVar38 =
                       (double *******)((long)pppppppdVar36 + (long)(int)(uVar53 * uVar22));
                  if (pppppppdVar36 < pppppppdVar38) {
                    do {
                      uVar12 = *(ushort *)pppppppdVar30;
                      pppppppdVar30 = (double *******)((long)pppppppdVar30 + (long)(int)uVar27);
                      *(uint *)pppppppdVar36 = (uint)uVar12 << 0x10;
                      pppppppdVar36 = (double *******)((long)pppppppdVar36 + (long)(int)uVar53);
                    } while (pppppppdVar36 < pppppppdVar38);
                  }
                }
                else if ((uVar7 == 0x74605) &&
                        (pppppppdVar38 =
                              (double *******)((long)pppppppdVar36 + (long)(int)(uVar53 * uVar22)),
                        pppppppdVar36 < pppppppdVar38)) {
                  do {
                    *(undefined2 *)pppppppdVar36 = *(undefined2 *)pppppppdVar30;
                    pppppppdVar36 = (double *******)((long)pppppppdVar36 + (long)(int)uVar53);
                    pppppppdVar30 = (double *******)((long)pppppppdVar30 + (long)(int)uVar27);
                  } while (pppppppdVar36 < pppppppdVar38);
                }
              }
              if (((uVar54 >> 8 & 1) != 0) &&
                 (uVar18 = (uVar54 >> 10 & 1) + (uVar54 >> 0xb & 0x1f) +
                           ((uint)(uVar50 >> 0x10) & 0xff) + 7 >> 3, uVar18 - 1 < 8)) {
                pppppppdVar36 = (double *******)((long)local_68 + (long)(int)(uVar22 * param_7));
                switch(uVar18) {
                case 1:
                  if (local_68 < pppppppdVar36) {
                    pppppppdVar30 = (double *******)&local_2090;
                    do {
                      *(undefined1 *)local_68 = *(undefined1 *)pppppppdVar30;
                      local_68 = (double *******)((long)local_68 + lVar55);
                      pppppppdVar30 = pppppppdVar30 + 1;
                    } while (local_68 < pppppppdVar36);
                  }
                  break;
                case 2:
                  if (local_68 < pppppppdVar36) {
                    pppppppdVar30 = (double *******)&local_2090;
                    do {
                      *(ushort *)local_68 =
                           *(ushort *)pppppppdVar30 >> 8 | *(ushort *)pppppppdVar30 << 8;
                      local_68 = (double *******)((long)local_68 + lVar55);
                      pppppppdVar30 = pppppppdVar30 + 1;
                    } while (local_68 < pppppppdVar36);
                  }
                  break;
                case 4:
                  if (local_68 < pppppppdVar36) {
                    pppppppdVar30 = (double *******)&local_2090;
                    do {
                      uVar18 = (*(uint *)pppppppdVar30 & 0xff00ff00) >> 8 |
                               (*(uint *)pppppppdVar30 & 0xff00ff) << 8;
                      *(uint *)local_68 = uVar18 >> 0x10 | uVar18 << 0x10;
                      local_68 = (double *******)((long)local_68 + lVar55);
                      pppppppdVar30 = pppppppdVar30 + 1;
                    } while (local_68 < pppppppdVar36);
                  }
                  break;
                case 8:
                  if (local_68 < pppppppdVar36) {
                    pppppppdVar30 = (double *******)&local_2090;
                    do {
                      uVar50 = ((ulong)*pppppppdVar30 & 0xff00ff00ff00ff00) >> 8 |
                               ((ulong)*pppppppdVar30 & 0xff00ff00ff00ff) << 8;
                      uVar50 = (uVar50 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar50 & 0xffff0000ffff) << 0x10;
                      *local_68 = (double ******)(uVar50 >> 0x20 | uVar50 << 0x20);
                      local_68 = (double *******)((long)local_68 + lVar55);
                      pppppppdVar30 = pppppppdVar30 + 1;
                    } while (local_68 < pppppppdVar36);
                  }
                }
              }
              break;
            case 9:
              lVar58 = lVar58 + lVar56 * 0x38;
              FUN_00426fc0(*(undefined8 *)(lVar58 + 0x20));
              FUN_00426fc0(*(undefined8 *)(lVar58 + 0x18));
              uVar25 = *(undefined8 *)(lVar58 + 0x20);
              iVar19 = FUN_00426fc0(*(undefined8 *)(lVar58 + 0x18));
              iVar20 = FUN_00426fc0(uVar25);
              pppppppdVar30 = (double *******)((long)local_68 + (long)(int)(uVar22 * param_7));
              if (local_68 < pppppppdVar30) {
                if (iVar19 == 1) {
                  switch(iVar20) {
                  case 1:
                    do {
                      cVar10 = *(char *)pppppppdVar36;
                      pppppppdVar36 = (double *******)((long)pppppppdVar36 + lVar60);
                      *(bool *)local_68 = cVar10 != '\0';
                      local_68 = (double *******)((long)local_68 + lVar55);
                    } while (local_68 < pppppppdVar30);
                    break;
                  case 2:
                    do {
                      cVar10 = *(char *)pppppppdVar36;
                      pppppppdVar36 = (double *******)((long)pppppppdVar36 + lVar60);
                      *(ushort *)local_68 = (ushort)(cVar10 != '\0');
                      local_68 = (double *******)((long)local_68 + lVar55);
                    } while (local_68 < pppppppdVar30);
                    break;
                  default:
switchD_00498ad0_caseD_3:
                    do {
                    } while( true );
                  case 4:
                    do {
                      cVar10 = *(char *)pppppppdVar36;
                      pppppppdVar36 = (double *******)((long)pppppppdVar36 + lVar60);
                      *(uint *)local_68 = (uint)(cVar10 != '\0');
                      local_68 = (double *******)((long)local_68 + lVar55);
                    } while (local_68 < pppppppdVar30);
                    break;
                  case 8:
                    do {
                      cVar10 = *(char *)pppppppdVar36;
                      pppppppdVar36 = (double *******)((long)pppppppdVar36 + lVar60);
                      *local_68 = (double ******)(ulong)(cVar10 != '\0');
                      local_68 = (double *******)((long)local_68 + lVar55);
                    } while (local_68 < pppppppdVar30);
                  }
                }
                else if (iVar19 == 2) {
                  if (iVar20 == 1) {
                    do {
                      sVar11 = *(short *)pppppppdVar36;
                      pppppppdVar36 = (double *******)((long)pppppppdVar36 + lVar60);
                      *(bool *)local_68 = sVar11 != 0;
                      local_68 = (double *******)((long)local_68 + lVar55);
                    } while (local_68 < pppppppdVar30);
                  }
                  else if (iVar20 == 2) {
                    do {
                      sVar11 = *(short *)pppppppdVar36;
                      pppppppdVar36 = (double *******)((long)pppppppdVar36 + lVar60);
                      *(ushort *)local_68 = (ushort)(sVar11 != 0);
                      local_68 = (double *******)((long)local_68 + lVar55);
                    } while (local_68 < pppppppdVar30);
                  }
                  else if (iVar20 == 4) {
                    do {
                      sVar11 = *(short *)pppppppdVar36;
                      pppppppdVar36 = (double *******)((long)pppppppdVar36 + lVar60);
                      *(uint *)local_68 = (uint)(sVar11 != 0);
                      local_68 = (double *******)((long)local_68 + lVar55);
                    } while (local_68 < pppppppdVar30);
                  }
                  else {
                    do {
                      if (iVar20 != 8) goto switchD_00498ad0_caseD_3;
                      sVar11 = *(short *)pppppppdVar36;
                      pppppppdVar36 = (double *******)((long)pppppppdVar36 + lVar60);
                      *local_68 = (double ******)(ulong)(sVar11 != 0);
                      local_68 = (double *******)((long)local_68 + lVar55);
                    } while (local_68 < pppppppdVar30);
                  }
                }
                else if (iVar19 == 8) {
                  do {
                    if (7 < iVar20 - 1U) goto switchD_00498ad0_caseD_3;
                    ppppppdVar35 = *pppppppdVar36;
                    switch(iVar20) {
                    case 1:
                      *(bool *)local_68 = ppppppdVar35 != (double ******)0x0;
                      break;
                    case 2:
                      *(ushort *)local_68 = (ushort)(ppppppdVar35 != (double ******)0x0);
                      break;
                    default:
                      goto switchD_00498ad0_caseD_3;
                    case 4:
                      *(uint *)local_68 = (uint)(ppppppdVar35 != (double ******)0x0);
                      break;
                    case 8:
                      *local_68 = (double ******)(ulong)(ppppppdVar35 != (double ******)0x0);
                    }
                    pppppppdVar36 = (double *******)((long)pppppppdVar36 + lVar60);
                    local_68 = (double *******)((long)local_68 + lVar55);
                  } while (local_68 < pppppppdVar30);
                }
                else {
                  do {
                    if (iVar19 != 4) {
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    if (7 < iVar20 - 1U) goto switchD_00498ad0_caseD_3;
                    uVar18 = *(uint *)pppppppdVar36;
                    switch(iVar20) {
                    case 1:
                      *(bool *)local_68 = uVar18 != 0;
                      break;
                    case 2:
                      *(ushort *)local_68 = (ushort)(uVar18 != 0);
                      break;
                    default:
                      goto switchD_00498ad0_caseD_3;
                    case 4:
                      *(uint *)local_68 = (uint)(uVar18 != 0);
                      break;
                    case 8:
                      *local_68 = (double ******)(ulong)(uVar18 != 0);
                    }
                    pppppppdVar36 = (double *******)((long)pppppppdVar36 + lVar60);
                    local_68 = (double *******)((long)local_68 + lVar55);
                  } while (local_68 < pppppppdVar30);
                }
              }
              break;
            case 10:
              lVar58 = lVar58 + lVar56 * 0x38;
              FUN_00426fc0(*(undefined8 *)(lVar58 + 0x20));
              FUN_00426fc0(*(undefined8 *)(lVar58 + 0x18));
              lVar33 = *(long *)(lVar58 + 0x18);
              local_2088 = *(ulong *)(lVar58 + 0x20);
              uVar50 = 0;
              local_2090 = local_68;
              if (local_2088 != 0) {
                uVar50 = FUN_00428370();
              }
              local_2080 = uVar50;
              if ((uVar50 & 1) != 0) {
                FUN_0043dd30(uVar50 & 0xfffffffffffffffe);
              }
              uVar50 = 0;
              local_90 = pppppppdVar36;
              lStack_88 = lVar33;
              if (lVar33 != 0) {
                uVar50 = FUN_00428370(lVar33);
              }
              local_80 = uVar50;
              if ((uVar50 & 1) != 0) {
                FUN_0043dd30(uVar50 & 0xfffffffffffffffe);
              }
              uVar18 = uVar22;
              if (0 < (int)uVar28) {
                do {
                  FUN_00466cd0(param_1,&local_2090,&local_90);
                  local_2090 = (double *******)((long)local_2090 + lVar55);
                  uVar45 = local_2080 & 0xfffffffffffffffe;
                  uVar50 = local_2080 & 1;
                  local_2080 = uVar45;
                  if (uVar50 != 0) {
                    FUN_0043dd50();
                  }
                  local_90 = (double *******)((long)local_90 + lVar60);
                  uVar45 = local_80 & 0xfffffffffffffffe;
                  uVar50 = local_80 & 1;
                  local_80 = uVar45;
                  if (uVar50 != 0) {
                    FUN_0043dd50();
                  }
                  uVar18 = uVar18 - 1;
                } while (uVar18 != 0);
                uVar50 = local_80;
              }
              if ((uVar50 & 1) != 0) {
                FUN_0043dd50(uVar50 & 0xfffffffffffffffe);
              }
              if ((local_2080 & 1) != 0) {
                FUN_0043dd50(local_2080 & 0xfffffffffffffffe);
              }
              break;
            case 0xb:
              lVar33 = *(long *)(lVar58 + lVar56 * 0x38 + 0x20);
              uVar50 = FUN_00428440(lVar33);
              if ((uVar50 & 0x1f) != 8) {
                lVar33 = 0;
              }
              uVar50 = FUN_00428440(lVar33);
              if ((uVar50 & 0x1f) != 8) {
                lVar33 = 0;
              }
              if (lVar33 == 0) {
                uVar50 = 0;
              }
              else {
                uVar50 = FUN_00428370(lVar33);
                if ((uVar50 & 1) != 0) {
                  FUN_0043dd30(uVar50 & 0xfffffffffffffffe);
                }
              }
              lVar58 = *(long *)(lVar58 + lVar56 * 0x38 + 0x18);
              uVar45 = FUN_00428440(lVar58);
              if ((uVar45 & 0x1f) != 8) {
                lVar58 = 0;
              }
              if (lVar58 == 0) {
                plVar24 = (long *)0x0;
              }
              else {
                plVar24 = (long *)FUN_00428370();
                if (((ulong)plVar24 & 1) != 0) {
                  FUN_0043dd30((ulong)plVar24 & 0xfffffffffffffffe);
                }
              }
              iVar19 = *(int *)(param_1 + 0x298) + uVar22;
              if ((int)(*(uint *)(param_1 + 0x29c) & 0x3fffffff) < iVar19) {
                uVar25 = FUN_00426720(puVar14,iVar19,0x20,*puVar4,*(int *)(param_1 + 0x298),
                                      param_1 + 0x29c);
                *puVar4 = uVar25;
              }
              if ((int)uVar28 < 1) {
                if (((ulong)plVar24 & 1) != 0) {
                  FUN_0043dd50((ulong)plVar24 & 0xfffffffffffffffe);
                }
                if ((uVar50 & 1) != 0) {
                  FUN_0043dd50(uVar50 & 0xfffffffffffffffe);
                }
              }
              else {
                iVar17 = 0;
                do {
                  local_2078 = 0;
                  local_2080 = 0;
                  plVar57 = (long *)((ulong)plVar24 & 0xfffffffffffffffe);
                  local_2088 = 0;
                  local_2090 = (double *******)0x0;
                  (**(code **)(*plVar57 + 0x50))(plVar57,pppppppdVar36,lVar58,&local_2090);
                  if (((int)local_2080 == 0) &&
                     ((local_2088 == 0 || (uVar45 = FUN_00426d90(lVar58), 1 < uVar45)))) {
                    uVar21 = 0;
                  }
                  else {
                    uVar21 = (**(code **)(**(long **)(param_1 + 0x288) + 0x30))();
                    if (((ulong)plVar24 & 1) != 0) {
                      FUN_0043dd30(plVar57);
                    }
                    uVar18 = *(uint *)(param_1 + 0x298);
                    if (uVar18 == (*(uint *)(param_1 + 0x29c) & 0x3fffffff)) {
                      FUN_00426990(puVar14,puVar4,0x20);
                      uVar18 = *(uint *)(param_1 + 0x298);
                    }
                    puVar6 = (undefined8 *)(*(long *)(param_1 + 0x290) + (long)(int)uVar18 * 0x20);
                    *puVar6 = pppppppdVar36;
                    puVar6[1] = lVar58;
                    puVar6[2] = plVar24;
                    *(undefined4 *)(puVar6 + 3) = uVar21;
                    *(uint *)(param_1 + 0x298) = uVar18 + 1;
                    if (*(char *)(param_1 + 0x2a8) != '\0') {
                      plVar46 = *(long **)(param_1 + 0x2a0);
                      FUN_00429460(&local_90,lVar33);
                      lVar56 = lVar33;
                      if ((double *******)0x1 < local_90) {
                        do {
                          lVar56 = *(long *)(lVar56 + 8);
                          FUN_00429460(&local_90,lVar56);
                        } while ((double *******)0x1 < local_90);
                      }
                      FUN_00429460(&local_90,lVar58);
                      lVar52 = lVar58;
                      if ((double *******)0x1 < local_90) {
                        do {
                          lVar52 = *(long *)(lVar52 + 8);
                          FUN_00429460(&local_90,lVar52);
                        } while ((double *******)0x1 < local_90);
                      }
                      (**(code **)(*plVar46 + 0x10))(plVar46,local_68,lVar56,lVar52);
                    }
                  }
                  *(uint *)local_68 = 0;
                  (**(code **)(**(long **)(param_1 + 0x2a0) + 0x18))
                            (*(long **)(param_1 + 0x2a0),local_68,uVar21);
                  if ((local_2078 & 1) != 0) {
                    FUN_0043dd50(local_2078 & 0xfffffffffffffffe);
                  }
                  local_68 = (double *******)((long)local_68 + lVar55);
                  if ((uVar50 & 1) != 0) {
                    FUN_0043dd50(uVar50 & 0xfffffffffffffffe);
                  }
                  pppppppdVar36 = (double *******)((long)pppppppdVar36 + lVar60);
                  if (((ulong)plVar24 & 1) != 0) {
                    FUN_0043dd50(plVar57);
                  }
                  iVar17 = iVar17 + 1;
                  uVar50 = uVar50 & 0xfffffffffffffffe;
                  plVar24 = plVar57;
                } while (iVar17 < (int)uVar22);
                iVar17 = 0;
              }
              break;
            case 0xc:
              lVar33 = *(long *)(lVar58 + lVar56 * 0x38 + 0x20);
              uVar50 = FUN_00428440(lVar33);
              if ((uVar50 & 0x1f) != 7) {
                lVar33 = 0;
              }
              uVar50 = FUN_00428440(lVar33);
              uVar45 = 0;
              if ((uVar50 & 0x1f) == 7 && lVar33 != 0) {
                uVar45 = FUN_00428370(lVar33);
              }
              if ((uVar45 & 1) != 0) {
                FUN_0043dd30(uVar45 & 0xfffffffffffffffe);
              }
              lVar33 = *(long *)(lVar58 + lVar56 * 0x38 + 0x18);
              uVar50 = FUN_00428440(lVar33);
              uVar51 = 0;
              if (lVar33 != 0) {
                if ((uVar50 & 0x1f) == 7) {
                  uVar51 = FUN_00428370(lVar33);
                }
                if ((uVar51 & 1) != 0) {
                  FUN_0043dd30(uVar51 & 0xfffffffffffffffe);
                }
              }
              if ((int)uVar28 < 1) {
                bVar16 = true;
              }
              else {
                uVar50 = FUN_0043d930(0x28f4dd16,
                                      "../..\\Common/Base/Reflect/TypeVm/hkTypeVmFastCopyInterpreter.inl"
                                      ,0x20b,
                                      "hkResult hkTypeVm::FastCopyInterpreter::execRecord(const hkReflect::RecordVar &, const hkReflect::RecordVar &)"
                                      ,&DAT_0407ebb1,"Not implemented",&DAT_0413df78);
                bVar16 = false;
                if ((uVar50 & 1) != 0) {
                  CallSupervisor(0x26);
                }
                iVar17 = -0x7ffbfe00;
              }
              if ((uVar51 & 1) != 0) {
                FUN_0043dd50(uVar51 & 0xfffffffffffffffe);
              }
              if ((uVar45 & 1) != 0) {
                FUN_0043dd50(uVar45 & 0xfffffffffffffffe);
              }
              if (!bVar16) goto LAB_0049a2f0;
              break;
            case 0xd:
              uVar18 = *(uint *)(lVar58 + lVar56 * 0x38 + 0x18);
              uVar50 = (ulong)uVar18;
              if (uVar18 == param_7 && uVar18 == param_8) {
                FUN_0043a3b0(local_68,pppppppdVar36,uVar22 * param_8);
              }
              else if ((0 < (int)uVar28) && (0 < (int)uVar18)) {
                uVar27 = 0;
                do {
                  if (uVar50 - 1 < 7) {
                    lVar33 = 0;
                  }
                  else {
                    lVar33 = 0;
                    do {
                      puVar29 = (undefined1 *)((long)pppppppdVar36 + lVar33);
                      puVar37 = (undefined1 *)((long)local_68 + lVar33);
                      lVar33 = lVar33 + 8;
                      *puVar37 = *puVar29;
                      puVar37[1] = puVar29[1];
                      puVar37[2] = puVar29[2];
                      puVar37[3] = puVar29[3];
                      puVar37[4] = puVar29[4];
                      puVar37[5] = puVar29[5];
                      puVar37[6] = puVar29[6];
                      puVar37[7] = puVar29[7];
                    } while (uVar50 - (uVar50 & 7) != lVar33);
                  }
                  if ((uVar18 & 7) != 0) {
                    lVar58 = -(uVar50 & 7);
                    do {
                      lVar58 = lVar58 + 1;
                      *(undefined1 *)((long)local_68 + lVar33) =
                           *(undefined1 *)((long)pppppppdVar36 + lVar33);
                      lVar33 = lVar33 + 1;
                    } while (lVar58 != 0);
                  }
                  uVar27 = uVar27 + 1;
                  local_68 = (double *******)((long)local_68 + lVar55);
                  pppppppdVar36 = (double *******)((long)pppppppdVar36 + lVar60);
                } while (uVar27 != uVar22);
              }
            }
          }
          iVar44 = iVar44 + 1;
        } while (iVar8 != iVar44);
      }
      iVar23 = uVar22 + iVar23;
    } while (iVar23 < param_9);
  }
  if ((uint)local_2c98 == 0) {
    iVar17 = 0;
    uVar22 = local_2c98._4_4_;
  }
  else {
    plVar57 = local_2ca0 + (long)(int)(uint)local_2c98 * 6;
    plVar24 = local_2ca0;
    do {
      while( true ) {
        local_2090 = (double *******)0x0;
        (**(code **)(*(long *)(plVar24[5] & 0xfffffffffffffffeU) + 0x38))
                  ((long *)(plVar24[5] & 0xfffffffffffffffeU),plVar24[3],plVar24[4],&local_2090);
        pppppppdVar3 = local_2090;
        local_90 = local_2090;
        uVar22 = FUN_00428440(plVar24[1]);
        if ((*(char *)(param_1 + 0x2a8) != '\0') && ((uVar22 >> 5 & 1) != 0)) break;
LAB_0049a120:
        if (pppppppdVar3 == (double *******)0x0) {
          iVar23 = 0;
        }
        else {
          if ((uVar22 >> 7 & 1) == 0) {
            iVar23 = (**(code **)(**(long **)(param_1 + 0x288) + 0x30))();
            lVar31 = plVar24[3];
            lVar39 = plVar24[4];
            uVar42 = plVar24[5];
            if ((uVar42 & 1) != 0) {
              FUN_0043dd30(uVar42 & 0xfffffffffffffffe);
            }
            uVar22 = *(uint *)(param_1 + 0x298);
            if (uVar22 == (*(uint *)(param_1 + 0x29c) & 0x3fffffff)) {
              FUN_00426990(puVar14,puVar4,0x20);
              uVar22 = *(uint *)(param_1 + 0x298);
            }
            plVar46 = (long *)(*(long *)(param_1 + 0x290) + (long)(int)uVar22 * 0x20);
            *plVar46 = lVar31;
            plVar46[1] = lVar39;
            plVar46[2] = uVar42;
            *(int *)(plVar46 + 3) = iVar23;
            *(uint *)(param_1 + 0x298) = uVar22 + 1;
            cVar10 = *(char *)(param_1 + 0x2a8);
          }
          else {
            plVar46 = *(long **)(param_1 + 0x2b0);
            uVar22 = FUN_0047d6f0(plVar46,&local_90);
            if (*(uint *)(plVar46 + 1) == uVar22) {
              uVar28 = uVar22;
              if ((*(uint *)((long)plVar46 + 0xc) & 0x3fffffff) == uVar22) {
                FUN_00426990(puVar14,plVar46,0x10);
                uVar28 = *(uint *)(plVar46 + 1);
              }
              lVar31 = *plVar46 + (long)(int)uVar28 * 0x10;
              FUN_0043bce0(lVar31,local_90,0xffffffff);
              *(undefined4 *)(lVar31 + 8) = 0;
              *(uint *)(plVar46 + 1) = uVar28 + 1;
            }
            piVar48 = (int *)(*plVar46 + ((long)((ulong)uVar22 << 0x20) >> 0x1c) + 8);
            iVar23 = *piVar48;
            if (iVar23 == 0) {
              iVar23 = (**(code **)(**(long **)(param_1 + 0x288) + 0x30))();
              *piVar48 = iVar23;
              lVar31 = plVar24[3];
              lVar39 = plVar24[4];
              uVar42 = plVar24[5];
              if ((uVar42 & 1) != 0) {
                FUN_0043dd30(uVar42 & 0xfffffffffffffffe);
                iVar23 = *piVar48;
              }
              uVar22 = *(uint *)(param_1 + 0x298);
              if (uVar22 == (*(uint *)(param_1 + 0x29c) & 0x3fffffff)) {
                FUN_00426990(puVar14,puVar4,0x20);
                uVar22 = *(uint *)(param_1 + 0x298);
              }
              plVar46 = (long *)(*(long *)(param_1 + 0x290) + (long)(int)uVar22 * 0x20);
              *plVar46 = lVar31;
              plVar46[1] = lVar39;
              plVar46[2] = uVar42;
              *(int *)(plVar46 + 3) = iVar23;
              *(uint *)(param_1 + 0x298) = uVar22 + 1;
              iVar23 = *piVar48;
              cVar10 = *(char *)(param_1 + 0x2a8);
            }
            else {
              cVar10 = *(char *)(param_1 + 0x2a8);
            }
          }
          if (cVar10 != '\0') {
            plVar46 = *(long **)(param_1 + 0x2a0);
            lVar31 = *plVar24;
            lVar39 = plVar24[1];
            FUN_00429460(&local_2090,lVar39);
            while ((double *******)0x1 < local_2090) {
              lVar39 = *(long *)(lVar39 + 8);
              FUN_00429460(&local_2090,lVar39);
            }
            lVar55 = plVar24[4];
            FUN_00429460(&local_2090,lVar55);
            while ((double *******)0x1 < local_2090) {
              lVar55 = *(long *)(lVar55 + 8);
              FUN_00429460(&local_2090,lVar55);
            }
            (**(code **)(*plVar46 + 0x10))(plVar46,lVar31,lVar39,lVar55);
          }
        }
        *(int *)*plVar24 = iVar23;
        (**(code **)(**(long **)(param_1 + 0x2a0) + 0x18))
                  (*(long **)(param_1 + 0x2a0),*plVar24,iVar23);
joined_r0x00499fd8:
        plVar24 = plVar24 + 6;
        if (plVar24 == plVar57) goto LAB_0049a2ec;
      }
      uVar28 = uVar22 >> 0x10;
      uVar42 = (ulong)uVar28;
      if (uVar28 == 0) goto LAB_0049a120;
      if (pppppppdVar3 == (double *******)0x0) {
        uVar50 = 1;
        if (uVar42 != 0) goto LAB_00499fa8;
        goto LAB_0049a120;
      }
      sVar26 = strlen((char *)pppppppdVar3);
      uVar50 = sVar26 + 1;
      if (uVar42 < uVar50) goto LAB_0049a120;
LAB_00499fa8:
      if (pppppppdVar3 != (double *******)0x0) {
        memcpy((undefined1 *)*plVar24,pppppppdVar3,uVar50);
        uVar42 = uVar42 - uVar50;
        if (0xfe < uVar42) goto LAB_0049a018;
LAB_00499fc8:
        *(char *)(*plVar24 + (ulong)(uVar28 - 1)) = (char)uVar42;
        goto joined_r0x00499fd8;
      }
      *(undefined1 *)*plVar24 = 0;
      uVar42 = uVar42 - uVar50;
      if (uVar42 < 0xff) goto LAB_00499fc8;
LAB_0049a018:
      if (0xfffe < uVar42) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      *(char *)(*plVar24 + (ulong)(uVar28 - 3)) = (char)uVar42;
      *(char *)(*plVar24 + (ulong)(uVar28 - 2)) = (char)(uVar42 >> 8);
      plVar46 = plVar24 + 6;
      *(undefined1 *)(*plVar24 + (ulong)(uVar28 - 1)) = 0xff;
      plVar24 = plVar46;
    } while (plVar46 != plVar57);
LAB_0049a2ec:
    iVar17 = 0;
LAB_0049a2f0:
    if ((int)(uint)local_2c98 < 1) {
      uVar22 = local_2c98._4_4_;
    }
    else {
      puVar49 = (ulong *)(local_2ca0 + (long)(int)(uint)local_2c98 * 6 + -4);
      iVar23 = (uint)local_2c98;
      do {
        while ((puVar49[3] & 1) != 0) {
          FUN_0043dd50(puVar49[3] & 0xfffffffffffffffe);
          uVar42 = *puVar49;
          if ((uVar42 & 1) == 0) goto LAB_0049a324;
LAB_0049a344:
          FUN_0043dd50(uVar42 & 0xfffffffffffffffe);
          iVar23 = iVar23 + -1;
          puVar49 = puVar49 + -6;
          if (iVar23 == 0) goto LAB_0049a358;
        }
        uVar42 = *puVar49;
        if ((uVar42 & 1) != 0) goto LAB_0049a344;
LAB_0049a324:
        iVar23 = iVar23 + -1;
        puVar49 = puVar49 + -6;
      } while (iVar23 != 0);
LAB_0049a358:
      uVar22 = local_2c98._4_4_;
    }
  }
  if ((-1 < (long)local_2c98) && (local_2c98 = (ulong)uVar22 << 0x20, local_2ca0 != (long *)0x0)) {
    FUN_00421f90(puVar15,local_2ca0,0x30,uVar22 & 0x3fffffff);
  }
  return iVar17;
}


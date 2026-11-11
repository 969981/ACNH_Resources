
/* WARNING: Type propagation algorithm not settling */

int FUN_004dcdd0(long param_1,long param_2,long param_3,undefined8 param_4,long param_5,
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
  long lVar27;
  undefined8 *puVar28;
  double *******pppppppdVar29;
  double ******ppppppdVar30;
  double *******pppppppdVar31;
  long lVar32;
  undefined1 *puVar33;
  double *******pppppppdVar34;
  long lVar35;
  ulong uVar36;
  ulong uVar37;
  double *******pppppppdVar38;
  long lVar39;
  int iVar40;
  undefined8 uVar41;
  long *plVar42;
  ulong uVar43;
  long *plVar44;
  ulong uVar45;
  ulong *puVar46;
  ulong uVar47;
  uint uVar48;
  uint uVar49;
  long lVar50;
  long *plVar51;
  long lVar52;
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
  ulong local_2078;
  double *******local_90;
  long lStack_88;
  long *local_80;
  
  fVar12 = DAT_04102e70;
  local_2ca0 = local_2c90;
  local_2c98 = 0x8000004000000000;
  uVar22 = *(undefined8 *)PTR_PTR_04bd4d28;
  if (0 < param_9) {
    lVar52 = (long)(int)param_7;
    lVar35 = lVar52 * 2;
    lVar54 = (long)(int)param_8;
    lVar25 = lVar54 * 2;
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
        uVar37 = (ulong)uVar21;
        pppppppdVar3 = (double *******)(local_2c90 + (long)(int)(uVar21 << 3) + 0xc00);
        lVar39 = lVar52 * (lVar26 + 1);
        iVar40 = 0;
        lVar53 = uVar37 - (uVar37 & 1);
        lVar4 = param_3 + lVar39;
        do {
          lVar50 = *(long *)(param_2 + 8);
          lVar27 = lVar50 + (long)iVar40 * 0x38;
          if (*(byte *)(lVar27 + 8) - 1 < 0xd) {
            uVar47 = (ulong)*(ushort *)(lVar27 + 0xc);
            pppppppdVar38 = (double *******)(param_3 + lVar26 * lVar52 + uVar47);
            pppppppdVar31 =
                 (double *******)(param_5 + lVar26 * lVar54 + (ulong)*(ushort *)(lVar27 + 10));
            lVar55 = (long)iVar40;
            switch((uint)*(byte *)(lVar27 + 8)) {
            case 1:
              lVar27 = *(long *)(lVar50 + lVar55 * 0x38 + 0x20);
              uVar47 = FUN_00428440(lVar27);
              if ((uVar47 & 0x1f) != 2) {
                lVar27 = 0;
              }
              if (lVar27 == 0) {
                plVar19 = (long *)0x0;
              }
              else {
                plVar19 = (long *)FUN_00428370(lVar27);
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
                plVar42 = (long *)0x0;
              }
              else {
                plVar42 = (long *)FUN_00428370(lVar50);
                if (((ulong)plVar42 & 1) != 0) {
                  FUN_0043dd30((ulong)plVar42 & 0xfffffffffffffffe);
                }
              }
              if ((int)uVar11 < 1) {
                iVar15 = 0xe;
                iVar14 = 0xe;
joined_r0x004de0d0:
                if (((ulong)plVar42 & 1) != 0) {
                  FUN_0043dd50((ulong)plVar42 & 0xfffffffffffffffe);
                  iVar14 = iVar15;
                }
              }
              else {
                iVar14 = 0;
                plVar44 = plVar19;
                do {
                  local_2090 = (double *******)((ulong)local_2090 & 0xffffffffffffff00);
                  plVar51 = (long *)((ulong)plVar42 & 0xfffffffffffffffe);
                  (**(code **)(*plVar51 + 0x38))(plVar51,pppppppdVar31,lVar50,&local_2090);
                  plVar19 = (long *)((ulong)plVar44 & 0xfffffffffffffffe);
                  iVar18 = (**(code **)(*plVar19 + 0x30))
                                     (plVar19,pppppppdVar38,lVar27,(ulong)local_2090 & 0xff);
                  if (iVar18 < 0) {
                    iVar15 = 1;
                    iVar14 = 1;
                    plVar19 = plVar44;
                    goto joined_r0x004de0d0;
                  }
                  if (((ulong)plVar44 & 1) != 0) {
                    FUN_0043dd50(plVar19);
                  }
                  pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar52);
                  pppppppdVar31 = (double *******)((long)pppppppdVar31 + lVar54);
                  if (((ulong)plVar42 & 1) != 0) {
                    FUN_0043dd50(plVar51);
                  }
                  iVar14 = iVar14 + 1;
                  plVar42 = plVar51;
                  plVar44 = plVar19;
                } while (iVar14 < (int)uVar21);
                iVar14 = 0xe;
              }
              if (((ulong)plVar19 & 1) != 0) {
                FUN_0043dd50((ulong)plVar19 & 0xfffffffffffffffe);
              }
              if (iVar14 != 0xe) goto LAB_004dee04;
              break;
            case 2:
              lVar27 = *(long *)(lVar50 + lVar55 * 0x38 + 0x20);
              uVar47 = FUN_00428440(lVar27);
              if ((uVar47 & 0x1f) != 4) {
                lVar27 = 0;
              }
              if (lVar27 == 0) {
                plVar19 = (long *)0x0;
              }
              else {
                plVar19 = (long *)FUN_00428370(lVar27);
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
                plVar42 = (long *)0x0;
              }
              else {
                plVar42 = (long *)FUN_00428370(lVar50);
                if (((ulong)plVar42 & 1) != 0) {
                  FUN_0043dd30((ulong)plVar42 & 0xfffffffffffffffe);
                }
              }
              if ((int)uVar11 < 1) {
                iVar15 = 0x13;
                iVar14 = 0x13;
joined_r0x004de120:
                if (((ulong)plVar42 & 1) != 0) {
                  FUN_0043dd50((ulong)plVar42 & 0xfffffffffffffffe);
                  iVar14 = iVar15;
                }
              }
              else {
                iVar14 = 0;
                plVar44 = plVar19;
                do {
                  local_2090 = (double *******)0x0;
                  local_2088 = local_2088 & 0xffffffffffffff00;
                  plVar51 = (long *)((ulong)plVar42 & 0xfffffffffffffffe);
                  (**(code **)(*plVar51 + 0x38))(plVar51,pppppppdVar31,lVar50,&local_2090);
                  plVar19 = (long *)((ulong)plVar44 & 0xfffffffffffffffe);
                  iVar18 = (**(code **)(*plVar19 + 0x30))(plVar19,pppppppdVar38,lVar27,&local_2090);
                  if (iVar18 < 0) {
                    iVar15 = 1;
                    iVar14 = 1;
                    plVar19 = plVar44;
                    goto joined_r0x004de120;
                  }
                  if (((ulong)plVar44 & 1) != 0) {
                    FUN_0043dd50(plVar19);
                  }
                  pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar52);
                  pppppppdVar31 = (double *******)((long)pppppppdVar31 + lVar54);
                  if (((ulong)plVar42 & 1) != 0) {
                    FUN_0043dd50(plVar51);
                  }
                  iVar14 = iVar14 + 1;
                  plVar44 = plVar19;
                  plVar42 = plVar51;
                } while (iVar14 < (int)uVar21);
                iVar14 = 0x13;
              }
              if (((ulong)plVar19 & 1) != 0) {
                FUN_0043dd50((ulong)plVar19 & 0xfffffffffffffffe);
              }
              if (iVar14 != 0x13) goto LAB_004dee04;
              break;
            case 3:
              lVar27 = *(long *)(lVar50 + lVar55 * 0x38 + 0x20);
              uVar47 = FUN_00428440(lVar27);
              if ((uVar47 & 0x1f) != 5) {
                lVar27 = 0;
              }
              if (lVar27 == 0) {
                plVar19 = (long *)0x0;
              }
              else {
                plVar19 = (long *)FUN_00428370(lVar27);
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
                plVar42 = (long *)0x0;
              }
              else {
                plVar42 = (long *)FUN_00428370(lVar50);
                if (((ulong)plVar42 & 1) != 0) {
                  FUN_0043dd30((ulong)plVar42 & 0xfffffffffffffffe);
                }
              }
              if ((int)uVar11 < 1) {
                iVar15 = 0x18;
                iVar14 = 0x18;
joined_r0x004de174:
                if (((ulong)plVar42 & 1) != 0) {
                  FUN_0043dd50((ulong)plVar42 & 0xfffffffffffffffe);
                  iVar14 = iVar15;
                }
              }
              else {
                iVar14 = 0;
                plVar44 = plVar19;
                do {
                  local_2090 = (double *******)0x0;
                  plVar51 = (long *)((ulong)plVar42 & 0xfffffffffffffffe);
                  (**(code **)(*plVar51 + 0x38))(plVar51,pppppppdVar31,lVar50,&local_2090);
                  plVar19 = (long *)((ulong)plVar44 & 0xfffffffffffffffe);
                  iVar18 = (**(code **)(*plVar19 + 0x30))(local_2090,plVar19,pppppppdVar38,lVar27);
                  if (iVar18 < 0) {
                    iVar15 = 1;
                    iVar14 = 1;
                    plVar19 = plVar44;
                    goto joined_r0x004de174;
                  }
                  if (((ulong)plVar44 & 1) != 0) {
                    FUN_0043dd50(plVar19);
                  }
                  pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar52);
                  pppppppdVar31 = (double *******)((long)pppppppdVar31 + lVar54);
                  if (((ulong)plVar42 & 1) != 0) {
                    FUN_0043dd50(plVar51);
                  }
                  iVar14 = iVar14 + 1;
                  plVar42 = plVar51;
                  plVar44 = plVar19;
                } while (iVar14 < (int)uVar21);
                iVar14 = 0x18;
              }
              if (((ulong)plVar19 & 1) != 0) {
                FUN_0043dd50((ulong)plVar19 & 0xfffffffffffffffe);
              }
              if (iVar14 != 0x18) goto LAB_004dee04;
              break;
            case 4:
              lVar27 = *(long *)(lVar50 + lVar55 * 0x38 + 0x20);
              uVar47 = FUN_00428440(lVar27);
              if (lVar27 == 0 || (uVar47 & 0x1f) != 6) {
                uVar47 = 0;
              }
              else {
                uVar47 = FUN_00428370(lVar27);
                if ((uVar47 & 1) != 0) {
                  FUN_0043dd30(uVar47 & 0xfffffffffffffffe);
                }
              }
              lVar27 = *(long *)(lVar50 + lVar55 * 0x38 + 0x18);
              uVar43 = FUN_00428440(lVar27);
              if ((uVar43 & 0x1f) != 6) {
                lVar27 = 0;
              }
              if (lVar27 == 0) {
                plVar19 = (long *)0x0;
              }
              else {
                plVar19 = (long *)FUN_00428370(lVar27);
                if (((ulong)plVar19 & 1) != 0) {
                  FUN_0043dd30((ulong)plVar19 & 0xfffffffffffffffe);
                  FUN_0043dd30((ulong)plVar19 & 0xfffffffffffffffe);
                }
              }
              if ((int)uVar11 < 1) {
                if (((ulong)plVar19 & 1) != 0) {
                  FUN_0043dd50((ulong)plVar19 & 0xfffffffffffffffe);
                  goto LAB_004de500;
                }
              }
              else {
                plVar42 = plVar19;
                uVar16 = uVar21;
                do {
                  local_2080 = 0;
                  local_2088 = 0;
                  plVar44 = (long *)((ulong)plVar42 & 0xfffffffffffffffe);
                  local_2090 = (double *******)0x0;
                  (**(code **)(*plVar44 + 0x50))(plVar44,pppppppdVar31,lVar27,&local_2090);
                  pppppppdVar24 = local_2090;
                  uVar41 = *(undefined8 *)(param_1 + 0x288);
                  local_90 = pppppppdVar31;
                  lStack_88 = lVar27;
                  local_80 = plVar42;
                  if (((ulong)plVar42 & 1) != 0) {
                    FUN_0043dd30(plVar44);
                  }
                  uVar17 = FUN_004df020(uVar41,&local_90);
                  if (((ulong)local_80 & 1) == 0) {
                    if (uVar17 == 0) goto LAB_004ddf74;
LAB_004de010:
                    *(uint *)pppppppdVar38 = uVar17;
                  }
                  else {
                    FUN_0043dd50((ulong)local_80 & 0xfffffffffffffffe);
                    if (uVar17 != 0) goto LAB_004de010;
LAB_004ddf74:
                    if (pppppppdVar24 == (double *******)0x0) {
                      *(uint *)pppppppdVar38 = 0;
                    }
                    else {
                      uVar17 = FUN_004df140(*(undefined8 *)(param_1 + 0x288),pppppppdVar24);
                      *(uint *)pppppppdVar38 = uVar17;
                    }
                  }
                  if (((ulong)plVar42 & 1) != 0) {
                    FUN_0043dd50(plVar44);
                  }
                  pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar52);
                  pppppppdVar31 = (double *******)((long)pppppppdVar31 + lVar54);
                  if ((local_2080 & 1) != 0) {
                    FUN_0043dd50(local_2080 & 0xfffffffffffffffe);
                  }
                  uVar16 = uVar16 - 1;
                  plVar42 = plVar44;
                } while (uVar16 != 0);
                if (((ulong)plVar19 & 1) != 0) {
LAB_004de500:
                  FUN_0043dd50((ulong)plVar19 & 0xfffffffffffffffe);
                }
              }
              if ((uVar47 & 1) != 0) {
                FUN_0043dd50(uVar47 & 0xfffffffffffffffe);
              }
              iVar18 = 0;
              break;
            case 5:
              if ((int)(local_2c98._4_4_ & 0x3fffffff) < (int)((uint)local_2c98 + uVar21)) {
                local_2ca0 = (undefined1 *)
                             FUN_00426720(uVar22,(uint)local_2c98 + uVar21,0x30,local_2ca0,
                                          local_2c98 & 0xffffffff,(long)&local_2c98 + 4);
              }
              lVar27 = *(long *)(lVar50 + lVar55 * 0x38 + 0x20);
              uVar47 = FUN_00428440(lVar27);
              if ((uVar47 & 0x1f) != 3) {
                lVar27 = 0;
              }
              if (lVar27 == 0) {
                uVar47 = 0;
              }
              else {
                uVar47 = FUN_00428370(lVar27);
                if ((uVar47 & 1) != 0) {
                  FUN_0043dd30(uVar47 & 0xfffffffffffffffe);
                }
              }
              lVar50 = *(long *)(lVar50 + lVar55 * 0x38 + 0x18);
              uVar43 = FUN_00428440(lVar50);
              if ((uVar43 & 0x1f) != 3) {
                lVar50 = 0;
              }
              if (lVar50 == 0) {
                uVar43 = 0;
              }
              else {
                uVar43 = FUN_00428370(lVar50);
                if ((uVar43 & 1) != 0) {
                  FUN_0043dd30(uVar43 & 0xfffffffffffffffe);
                }
              }
              if ((int)uVar11 < 1) {
                if ((uVar43 & 1) != 0) {
                  FUN_0043dd50(uVar43 & 0xfffffffffffffffe);
                }
              }
              else {
                iVar14 = 0;
                do {
                  if ((uVar47 & 1) != 0) {
                    FUN_0043dd30(uVar47 & 0xfffffffffffffffe);
                  }
                  if ((uVar43 & 1) != 0) {
                    FUN_0043dd30(uVar43 & 0xfffffffffffffffe);
                  }
                  if ((uint)local_2c98 == (local_2c98._4_4_ & 0x3fffffff)) {
                    FUN_00426990(uVar22,&local_2ca0,0x30);
                  }
                  puVar23 = local_2ca0;
                  iVar15 = (int)local_2c98;
                  puVar28 = (undefined8 *)(local_2ca0 + (long)iVar15 * 0x30);
                  puVar28[2] = uVar47;
                  *puVar28 = pppppppdVar38;
                  puVar28[1] = lVar27;
                  if ((uVar47 & 1) != 0) {
                    FUN_0043dd30(uVar47 & 0xfffffffffffffffe);
                  }
                  *(ulong *)(puVar23 + (long)iVar15 * 0x30 + 0x28) = uVar43;
                  *(double ********)(puVar23 + (long)iVar15 * 0x30 + 0x18) = pppppppdVar31;
                  *(long *)(puVar23 + (long)iVar15 * 0x30 + 0x20) = lVar50;
                  if ((uVar43 & 1) == 0) {
                    local_2c98 = CONCAT44(local_2c98._4_4_,iVar15 + 1);
                  }
                  else {
                    FUN_0043dd30(uVar43 & 0xfffffffffffffffe);
                    local_2c98 = CONCAT44(local_2c98._4_4_,iVar15 + 1);
                    FUN_0043dd50(uVar43 & 0xfffffffffffffffe);
                  }
                  if ((uVar47 & 1) != 0) {
                    FUN_0043dd50(uVar47 & 0xfffffffffffffffe);
                    FUN_0043dd50(uVar47 & 0xfffffffffffffffe);
                  }
                  uVar47 = uVar47 & 0xfffffffffffffffe;
                  pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar52);
                  pppppppdVar31 = (double *******)((long)pppppppdVar31 + lVar54);
                  if ((uVar43 & 1) != 0) {
                    FUN_0043dd50(uVar43 & 0xfffffffffffffffe);
                  }
                  iVar14 = iVar14 + 1;
                  uVar43 = uVar43 & 0xfffffffffffffffe;
                } while (iVar14 < (int)uVar21);
              }
              if ((uVar47 & 1) != 0) {
                FUN_0043dd50(uVar47 & 0xfffffffffffffffe);
              }
              break;
            case 6:
              lVar27 = *(long *)(lVar50 + lVar55 * 0x38 + 0x20);
              if (lVar27 == 0) {
                uVar47 = 0;
              }
              else {
                uVar47 = FUN_00428370(lVar27);
                if ((uVar47 & 1) != 0) {
                  FUN_0043dd30(uVar47 & 0xfffffffffffffffe);
                }
              }
              lVar32 = *(long *)(lVar50 + lVar55 * 0x38 + 0x18);
              if (lVar32 == 0) {
                uVar43 = 0;
              }
              else {
                uVar43 = FUN_00428370(lVar32);
                if ((uVar43 & 1) != 0) {
                  FUN_0043dd30(uVar43 & 0xfffffffffffffffe);
                }
              }
              iVar18 = (**(code **)(lVar50 + lVar55 * 0x38 + 0x28))
                                 (pppppppdVar38,lVar27,pppppppdVar31,lVar32,uVar21);
              if ((uVar43 & 1) != 0) {
                FUN_0043dd50(uVar43 & 0xfffffffffffffffe);
              }
              if ((uVar47 & 1) != 0) {
                FUN_0043dd50(uVar47 & 0xfffffffffffffffe);
              }
              if (iVar18 < 0) goto LAB_004dee04;
              break;
            case 7:
              lVar50 = lVar50 + lVar55 * 0x38;
              uVar41 = *(undefined8 *)(lVar50 + 0x20);
              uVar43 = FUN_00428440(uVar41);
              if ((uVar43 & 0x1f) != 4) {
                uVar41 = 0;
              }
              uVar43 = FUN_00428440(uVar41);
              uVar41 = *(undefined8 *)(lVar50 + 0x18);
              uVar45 = FUN_00428440(uVar41);
              if ((uVar45 & 0x1f) != 4) {
                uVar41 = 0;
              }
              uVar45 = FUN_00428440(uVar41);
              uVar16 = ((uint)(uVar43 >> 10) & 0x3fffff) + 7 >> 3;
              uVar36 = (ulong)uVar16;
              uVar17 = ((uint)(uVar45 >> 10) & 0x3fffff) + 7 >> 3;
              uVar56 = (ulong)uVar17;
              uVar48 = (uint)uVar45;
              iVar14 = uVar16 - uVar17;
              uVar49 = ((uint)uVar43 ^ uVar48) >> 8 & 1;
              if (iVar14 < 1) {
                if ((uVar45 & 0x100) != 0) {
                  pppppppdVar31 = (double *******)((long)pppppppdVar31 + (long)-iVar14);
                }
                if (uVar49 == 0) {
                  if (uVar16 != param_7 || uVar16 != param_8) {
                    if (uVar16 != 0 && 0 < (int)uVar11) {
                      uVar17 = 0;
                      do {
                        if (uVar36 - 1 < 7) {
                          lVar27 = 0;
                        }
                        else {
                          lVar27 = 0;
                          do {
                            puVar23 = (undefined1 *)((long)pppppppdVar31 + lVar27);
                            puVar33 = (undefined1 *)((long)pppppppdVar38 + lVar27);
                            lVar27 = lVar27 + 8;
                            *puVar33 = *puVar23;
                            puVar33[1] = puVar23[1];
                            puVar33[2] = puVar23[2];
                            puVar33[3] = puVar23[3];
                            puVar33[4] = puVar23[4];
                            puVar33[5] = puVar23[5];
                            puVar33[6] = puVar23[6];
                            puVar33[7] = puVar23[7];
                          } while (uVar36 - (uVar36 & 7) != lVar27);
                        }
                        if ((uVar16 & 7) != 0) {
                          lVar50 = -(uVar36 & 7);
                          do {
                            lVar50 = lVar50 + 1;
                            *(undefined1 *)((long)pppppppdVar38 + lVar27) =
                                 *(undefined1 *)((long)pppppppdVar31 + lVar27);
                            lVar27 = lVar27 + 1;
                          } while (lVar50 != 0);
                        }
                        uVar17 = uVar17 + 1;
                        pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar52);
                        pppppppdVar31 = (double *******)((long)pppppppdVar31 + lVar54);
                      } while (uVar17 != uVar21);
                    }
                    break;
                  }
                  FUN_0043a3b0(pppppppdVar38,pppppppdVar31,uVar21 * param_8);
                }
                else if (0 < (int)uVar11) {
                  switch(uVar16) {
                  case 1:
                    lVar27 = 0;
                    if (2 < uVar37 - 1) {
                      pppppppdVar38 = pppppppdVar31;
                      lVar50 = param_3;
                      do {
                        *(undefined1 *)(lVar52 * lVar26 + uVar47 + lVar50) =
                             *(undefined1 *)pppppppdVar38;
                        lVar27 = lVar27 + 4;
                        *(undefined1 *)(lVar39 + uVar47 + lVar50) =
                             *(undefined1 *)(lVar54 + (long)pppppppdVar38);
                        *(undefined1 *)(lVar52 * (lVar26 + 2) + uVar47 + lVar50) =
                             *(undefined1 *)(lVar25 + (long)pppppppdVar38);
                        puVar23 = (undefined1 *)(lVar54 * 3 + (long)pppppppdVar38);
                        pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar54 * 4);
                        *(undefined1 *)(lVar52 * (lVar26 + 3) + uVar47 + lVar50) = *puVar23;
                        lVar50 = lVar50 + lVar52 * 4;
                      } while (uVar37 - (uVar37 & 3) != lVar27);
                    }
                    if ((uVar21 & 3) != 0) {
                      pppppppdVar31 = (double *******)((long)pppppppdVar31 + lVar54 * lVar27);
                      puVar23 = (undefined1 *)(param_3 + lVar52 * (lVar26 + lVar27) + uVar47);
                      lVar27 = -(uVar37 & 3);
                      do {
                        *puVar23 = *(undefined1 *)pppppppdVar31;
                        pppppppdVar31 = (double *******)((long)pppppppdVar31 + lVar54);
                        puVar23 = puVar23 + lVar52;
                        lVar27 = lVar27 + 1;
                      } while (lVar27 != 0);
                    }
                    break;
                  case 2:
                    lVar27 = 0;
                    if (uVar37 != 1) {
                      lVar50 = 0;
                      lVar27 = 0;
                      pppppppdVar24 = pppppppdVar31;
                      do {
                        *(ushort *)((long)pppppppdVar38 + lVar50) =
                             *(ushort *)pppppppdVar24 >> 8 | *(ushort *)pppppppdVar24 << 8;
                        lVar27 = lVar27 + 2;
                        puVar1 = (ushort *)(lVar54 + (long)pppppppdVar24);
                        pppppppdVar24 = (double *******)((long)pppppppdVar24 + lVar25);
                        *(ushort *)(lVar4 + uVar47 + lVar50) = *puVar1 >> 8 | *puVar1 << 8;
                        lVar50 = lVar50 + lVar35;
                      } while (lVar53 != lVar27);
                    }
                    if ((uVar21 & 1) != 0) {
                      uVar10 = *(ushort *)(lVar27 * lVar54 + (long)pppppppdVar31);
                      *(ushort *)(lVar27 * lVar52 + (long)pppppppdVar38) = uVar10 >> 8 | uVar10 << 8
                      ;
                    }
                    break;
                  case 3:
                  case 5:
                  case 6:
                  case 7:
                    break;
                  case 4:
                    lVar27 = 0;
                    if (uVar37 != 1) {
                      lVar50 = 0;
                      lVar27 = 0;
                      pppppppdVar24 = pppppppdVar31;
                      do {
                        uVar16 = (*(uint *)pppppppdVar24 & 0xff00ff00) >> 8 |
                                 (*(uint *)pppppppdVar24 & 0xff00ff) << 8;
                        lVar27 = lVar27 + 2;
                        *(uint *)((long)pppppppdVar38 + lVar50) = uVar16 >> 0x10 | uVar16 << 0x10;
                        puVar2 = (uint *)(lVar54 + (long)pppppppdVar24);
                        pppppppdVar24 = (double *******)((long)pppppppdVar24 + lVar25);
                        uVar16 = (*puVar2 & 0xff00ff00) >> 8 | (*puVar2 & 0xff00ff) << 8;
                        *(uint *)(lVar4 + uVar47 + lVar50) = uVar16 >> 0x10 | uVar16 << 0x10;
                        lVar50 = lVar50 + lVar35;
                      } while (lVar53 != lVar27);
                    }
                    if ((uVar21 & 1) != 0) {
                      uVar16 = *(uint *)(lVar27 * lVar54 + (long)pppppppdVar31);
                      uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
                      *(uint *)(lVar27 * lVar52 + (long)pppppppdVar38) =
                           uVar16 >> 0x10 | uVar16 << 0x10;
                    }
                    break;
                  case 8:
                    lVar27 = 0;
                    if (uVar37 != 1) {
                      lVar50 = 0;
                      lVar27 = 0;
                      pppppppdVar24 = pppppppdVar31;
                      do {
                        uVar43 = ((ulong)*pppppppdVar24 & 0xff00ff00ff00ff00) >> 8 |
                                 ((ulong)*pppppppdVar24 & 0xff00ff00ff00ff) << 8;
                        uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar43 & 0xffff0000ffff) << 0x10;
                        lVar27 = lVar27 + 2;
                        *(ulong *)((long)pppppppdVar38 + lVar50) = uVar43 >> 0x20 | uVar43 << 0x20;
                        puVar46 = (ulong *)(lVar54 + (long)pppppppdVar24);
                        pppppppdVar24 = (double *******)((long)pppppppdVar24 + lVar25);
                        uVar43 = (*puVar46 & 0xff00ff00ff00ff00) >> 8 |
                                 (*puVar46 & 0xff00ff00ff00ff) << 8;
                        uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar43 & 0xffff0000ffff) << 0x10;
                        *(ulong *)(lVar4 + uVar47 + lVar50) = uVar43 >> 0x20 | uVar43 << 0x20;
                        lVar50 = lVar50 + lVar35;
                      } while (lVar53 != lVar27);
                    }
                    if ((uVar21 & 1) != 0) {
                      ppppppdVar30 = *(double *******)(lVar27 * lVar54 + (long)pppppppdVar31);
                      uVar47 = ((ulong)ppppppdVar30 & 0xff00ff00ff00ff00) >> 8 |
                               ((ulong)ppppppdVar30 & 0xff00ff00ff00ff) << 8;
                      uVar47 = (uVar47 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar47 & 0xffff0000ffff) << 0x10;
                      *(double *******)(lVar27 * lVar52 + (long)pppppppdVar38) =
                           (double ******)(uVar47 >> 0x20 | uVar47 << 0x20);
                    }
                    break;
                  default:
                    goto switchD_004de284_default;
                  }
                  break;
                }
              }
              else {
                bVar13 = (uVar43 & 0x100) != 0;
                uVar16 = uVar17 - 1;
                lVar27 = 0;
                if (bVar13) {
                  uVar16 = uVar17;
                  lVar27 = (long)iVar14;
                }
                lVar50 = 1;
                if (bVar13) {
                  lVar50 = (long)-iVar14;
                }
                if (0 < (int)uVar11) {
                  lVar55 = (long)(int)uVar16;
                  if (uVar49 == 0) {
                    if (uVar17 != 0) {
                      uVar16 = 0;
                      do {
                        if (uVar56 - 1 < 7) {
                          lVar32 = 0;
                        }
                        else {
                          lVar32 = 0;
                          do {
                            puVar23 = (undefined1 *)((long)pppppppdVar31 + lVar32 + 3);
                            puVar33 = (undefined1 *)((long)pppppppdVar38 + lVar32 + lVar27 + 3);
                            lVar32 = lVar32 + 8;
                            puVar33[-3] = puVar23[-3];
                            puVar33[-2] = puVar23[-2];
                            puVar33[-1] = puVar23[-1];
                            *puVar33 = *puVar23;
                            puVar33[1] = puVar23[1];
                            puVar33[2] = puVar23[2];
                            puVar33[3] = puVar23[3];
                            puVar33[4] = puVar23[4];
                          } while (uVar56 - (uVar56 & 7) != lVar32);
                        }
                        if ((uVar17 & 7) != 0) {
                          puVar23 = (undefined1 *)((long)pppppppdVar38 + lVar32 + lVar27);
                          puVar33 = (undefined1 *)((long)pppppppdVar31 + lVar32);
                          lVar32 = -(uVar56 & 7);
                          do {
                            lVar32 = lVar32 + 1;
                            *puVar23 = *puVar33;
                            puVar23 = puVar23 + 1;
                            puVar33 = puVar33 + 1;
                          } while (lVar32 != 0);
                        }
                        if ((uVar48 >> 9 & 1) != 0) {
                          FUN_0043a4d0((char *)((long)pppppppdVar38 + lVar55) + lVar50,
                                       (int)*(char *)((long)pppppppdVar38 + lVar55) >> 0x1f & 0xff,
                                       iVar14);
                        }
                        uVar16 = uVar16 + 1;
                        pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar52);
                        pppppppdVar31 = (double *******)((long)pppppppdVar31 + lVar54);
                      } while (uVar16 != uVar21);
                      break;
                    }
                    uVar16 = uVar21;
                    do {
                      FUN_0043a3b0(lVar27 + (long)pppppppdVar38,pppppppdVar31,0);
                      if ((uVar48 >> 9 & 1) != 0) {
                        FUN_0043a4d0((char *)((long)pppppppdVar38 + lVar55) + lVar50,
                                     (int)*(char *)((long)pppppppdVar38 + lVar55) >> 0x1f & 0xff,
                                     iVar14);
                      }
                      pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar52);
                      pppppppdVar31 = (double *******)((long)pppppppdVar31 + lVar54);
                      uVar16 = uVar16 - 1;
                    } while (uVar16 != 0);
                  }
                  else if (uVar17 == 1) {
                    uVar16 = uVar21;
                    do {
                      *(undefined1 *)(lVar27 + (long)pppppppdVar38) = *(undefined1 *)pppppppdVar31;
                      if ((uVar48 >> 9 & 1) != 0) {
                        FUN_0043a4d0((char *)((long)pppppppdVar38 + lVar55) + lVar50,
                                     (int)*(char *)((long)pppppppdVar38 + lVar55) >> 0x1f & 0xff,
                                     iVar14);
                      }
                      pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar52);
                      pppppppdVar31 = (double *******)((long)pppppppdVar31 + lVar54);
                      uVar16 = uVar16 - 1;
                    } while (uVar16 != 0);
                  }
                  else {
                    uVar16 = uVar21;
                    do {
                      if (uVar17 == 2) {
                        *(ushort *)((long)pppppppdVar38 + lVar27) =
                             *(ushort *)pppppppdVar31 >> 8 | *(ushort *)pppppppdVar31 << 8;
                      }
                      else if (uVar17 == 4) {
                        uVar49 = (*(uint *)pppppppdVar31 & 0xff00ff00) >> 8 |
                                 (*(uint *)pppppppdVar31 & 0xff00ff) << 8;
                        *(uint *)((long)pppppppdVar38 + lVar27) = uVar49 >> 0x10 | uVar49 << 0x10;
                      }
                      else if (uVar17 == 8) {
                        uVar47 = ((ulong)*pppppppdVar31 & 0xff00ff00ff00ff00) >> 8 |
                                 ((ulong)*pppppppdVar31 & 0xff00ff00ff00ff) << 8;
                        uVar47 = (uVar47 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar47 & 0xffff0000ffff) << 0x10;
                        *(ulong *)((long)pppppppdVar38 + lVar27) = uVar47 >> 0x20 | uVar47 << 0x20;
                      }
                      if ((uVar48 >> 9 & 1) != 0) {
                        FUN_0043a4d0((char *)((long)pppppppdVar38 + lVar55) + lVar50,
                                     (int)*(char *)((long)pppppppdVar38 + lVar55) >> 0x1f & 0xff,
                                     iVar14);
                      }
                      pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar52);
                      uVar16 = uVar16 - 1;
                      pppppppdVar31 = (double *******)((long)pppppppdVar31 + lVar54);
                    } while (uVar16 != 0);
                  }
                }
              }
switchD_004de284_default:
              break;
            case 8:
              lVar50 = lVar50 + lVar55 * 0x38;
              uVar41 = *(undefined8 *)(lVar50 + 0x20);
              uVar47 = FUN_00428440(uVar41);
              if ((uVar47 & 0x1f) != 5) {
                uVar41 = 0;
              }
              uVar47 = FUN_00428440(uVar41);
              uVar41 = *(undefined8 *)(lVar50 + 0x18);
              uVar43 = FUN_00428440(uVar41);
              if ((uVar43 & 0x1f) != 5) {
                uVar41 = 0;
              }
              uVar16 = FUN_00428440(uVar41);
              bVar13 = (uVar16 & 0x100) == 0;
              pppppppdVar24 = (double *******)&local_2090;
              if (bVar13) {
                pppppppdVar24 = pppppppdVar31;
              }
              uVar17 = 8;
              if (bVar13) {
                uVar17 = param_8;
              }
              if ((uVar16 >> 8 & 1) != 0) {
                switch((uVar16 >> 10 & 1) + (uVar16 >> 0xb & 0x1f) + (uVar16 >> 0x10 & 0xff) + 7 >>
                       3) {
                case 1:
                  if (&local_2090 < pppppppdVar3) {
                    pppppppdVar34 = (double *******)&local_2090;
                    do {
                      uVar7 = *(undefined1 *)pppppppdVar31;
                      pppppppdVar31 = (double *******)((long)pppppppdVar31 + lVar54);
                      pppppppdVar29 = pppppppdVar34 + 1;
                      *(undefined1 *)pppppppdVar34 = uVar7;
                      pppppppdVar34 = pppppppdVar29;
                    } while (pppppppdVar29 < pppppppdVar3);
                  }
                  break;
                case 2:
                  if (&local_2090 < pppppppdVar3) {
                    pppppppdVar34 = (double *******)&local_2090;
                    do {
                      uVar10 = *(ushort *)pppppppdVar31;
                      pppppppdVar31 = (double *******)((long)pppppppdVar31 + lVar54);
                      pppppppdVar29 = pppppppdVar34 + 1;
                      *(ushort *)pppppppdVar34 = uVar10 >> 8 | uVar10 << 8;
                      pppppppdVar34 = pppppppdVar29;
                    } while (pppppppdVar29 < pppppppdVar3);
                  }
                  break;
                case 4:
                  if (&local_2090 < pppppppdVar3) {
                    pppppppdVar34 = (double *******)&local_2090;
                    do {
                      uVar49 = *(uint *)pppppppdVar31;
                      pppppppdVar31 = (double *******)((long)pppppppdVar31 + lVar54);
                      uVar49 = (uVar49 & 0xff00ff00) >> 8 | (uVar49 & 0xff00ff) << 8;
                      pppppppdVar29 = pppppppdVar34 + 1;
                      *(uint *)pppppppdVar34 = uVar49 >> 0x10 | uVar49 << 0x10;
                      pppppppdVar34 = pppppppdVar29;
                    } while (pppppppdVar29 < pppppppdVar3);
                  }
                  break;
                case 8:
                  if (&local_2090 < pppppppdVar3) {
                    pppppppdVar34 = (double *******)&local_2090;
                    do {
                      ppppppdVar30 = *pppppppdVar31;
                      pppppppdVar31 = (double *******)((long)pppppppdVar31 + lVar54);
                      uVar43 = ((ulong)ppppppdVar30 & 0xff00ff00ff00ff00) >> 8 |
                               ((ulong)ppppppdVar30 & 0xff00ff00ff00ff) << 8;
                      uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar43 & 0xffff0000ffff) << 0x10;
                      pppppppdVar29 = pppppppdVar34 + 1;
                      *pppppppdVar34 = (double ******)(uVar43 >> 0x20 | uVar43 << 0x20);
                      pppppppdVar34 = pppppppdVar29;
                    } while (pppppppdVar29 < pppppppdVar3);
                  }
                }
                uVar16 = uVar16 & 0xfffffeff;
              }
              uVar49 = (uint)uVar47;
              bVar13 = (uVar47 & 0x100) == 0;
              pppppppdVar31 = (double *******)&local_2090;
              if (bVar13) {
                pppppppdVar31 = pppppppdVar38;
              }
              uVar48 = 8;
              if (bVar13) {
                uVar48 = param_7;
              }
              uVar5 = uVar49 & 0xfffffeff;
              if (uVar16 == 0x345e05) {
                if (uVar5 == 0x345e05) {
                  pppppppdVar34 =
                       (double *******)((long)pppppppdVar31 + (long)(int)(uVar48 * uVar21));
                  if (pppppppdVar31 < pppppppdVar34) {
                    do {
                      *pppppppdVar31 = *pppppppdVar24;
                      pppppppdVar31 = (double *******)((long)pppppppdVar31 + (long)(int)uVar48);
                      pppppppdVar24 = (double *******)((long)pppppppdVar24 + (long)(int)uVar17);
                    } while (pppppppdVar31 < pppppppdVar34);
                  }
                }
                else if (uVar5 == 0x174605) {
                  pppppppdVar34 =
                       (double *******)((long)pppppppdVar31 + (long)(int)(uVar48 * uVar21));
                  if (pppppppdVar31 < pppppppdVar34) {
                    do {
                      ppppppdVar30 = *pppppppdVar24;
                      pppppppdVar24 = (double *******)((long)pppppppdVar24 + (long)(int)uVar17);
                      *(float *)pppppppdVar31 = (float)(double)ppppppdVar30;
                      pppppppdVar31 = (double *******)((long)pppppppdVar31 + (long)(int)uVar48);
                    } while (pppppppdVar31 < pppppppdVar34);
                  }
                }
                else if ((uVar5 == 0x74605) &&
                        (pppppppdVar34 =
                              (double *******)((long)pppppppdVar31 + (long)(int)(uVar48 * uVar21)),
                        pppppppdVar31 < pppppppdVar34)) {
                  do {
                    ppppppdVar30 = *pppppppdVar24;
                    pppppppdVar24 = (double *******)((long)pppppppdVar24 + (long)(int)uVar17);
                    *(short *)pppppppdVar31 =
                         (short)((uint)((float)(double)ppppppdVar30 * fVar12) >> 0x10);
                    pppppppdVar31 = (double *******)((long)pppppppdVar31 + (long)(int)uVar48);
                  } while (pppppppdVar31 < pppppppdVar34);
                }
              }
              else if (uVar16 == 0x174605) {
                if (uVar5 == 0x345e05) {
                  pppppppdVar34 =
                       (double *******)((long)pppppppdVar31 + (long)(int)(uVar48 * uVar21));
                  if (pppppppdVar31 < pppppppdVar34) {
                    do {
                      fVar57 = *(float *)pppppppdVar24;
                      pppppppdVar24 = (double *******)((long)pppppppdVar24 + (long)(int)uVar17);
                      *pppppppdVar31 = (double ******)(double)fVar57;
                      pppppppdVar31 = (double *******)((long)pppppppdVar31 + (long)(int)uVar48);
                    } while (pppppppdVar31 < pppppppdVar34);
                  }
                }
                else if (uVar5 == 0x174605) {
                  pppppppdVar34 =
                       (double *******)((long)pppppppdVar31 + (long)(int)(uVar48 * uVar21));
                  if (pppppppdVar31 < pppppppdVar34) {
                    do {
                      *(uint *)pppppppdVar31 = *(uint *)pppppppdVar24;
                      pppppppdVar31 = (double *******)((long)pppppppdVar31 + (long)(int)uVar48);
                      pppppppdVar24 = (double *******)((long)pppppppdVar24 + (long)(int)uVar17);
                    } while (pppppppdVar31 < pppppppdVar34);
                  }
                }
                else if ((uVar5 == 0x74605) &&
                        (pppppppdVar34 =
                              (double *******)((long)pppppppdVar31 + (long)(int)(uVar48 * uVar21)),
                        pppppppdVar31 < pppppppdVar34)) {
                  do {
                    fVar57 = *(float *)pppppppdVar24;
                    pppppppdVar24 = (double *******)((long)pppppppdVar24 + (long)(int)uVar17);
                    *(short *)pppppppdVar31 = (short)((uint)(fVar57 * fVar12) >> 0x10);
                    pppppppdVar31 = (double *******)((long)pppppppdVar31 + (long)(int)uVar48);
                  } while (pppppppdVar31 < pppppppdVar34);
                }
              }
              else if (uVar16 == 0x74605) {
                if (uVar5 == 0x345e05) {
                  pppppppdVar34 =
                       (double *******)((long)pppppppdVar31 + (long)(int)(uVar48 * uVar21));
                  if (pppppppdVar31 < pppppppdVar34) {
                    do {
                      uVar10 = *(ushort *)pppppppdVar24;
                      pppppppdVar24 = (double *******)((long)pppppppdVar24 + (long)(int)uVar17);
                      *pppppppdVar31 = (double ******)(double)(float)((uint)uVar10 << 0x10);
                      pppppppdVar31 = (double *******)((long)pppppppdVar31 + (long)(int)uVar48);
                    } while (pppppppdVar31 < pppppppdVar34);
                  }
                }
                else if (uVar5 == 0x174605) {
                  pppppppdVar34 =
                       (double *******)((long)pppppppdVar31 + (long)(int)(uVar48 * uVar21));
                  if (pppppppdVar31 < pppppppdVar34) {
                    do {
                      uVar10 = *(ushort *)pppppppdVar24;
                      pppppppdVar24 = (double *******)((long)pppppppdVar24 + (long)(int)uVar17);
                      *(uint *)pppppppdVar31 = (uint)uVar10 << 0x10;
                      pppppppdVar31 = (double *******)((long)pppppppdVar31 + (long)(int)uVar48);
                    } while (pppppppdVar31 < pppppppdVar34);
                  }
                }
                else if ((uVar5 == 0x74605) &&
                        (pppppppdVar34 =
                              (double *******)((long)pppppppdVar31 + (long)(int)(uVar48 * uVar21)),
                        pppppppdVar31 < pppppppdVar34)) {
                  do {
                    *(undefined2 *)pppppppdVar31 = *(undefined2 *)pppppppdVar24;
                    pppppppdVar31 = (double *******)((long)pppppppdVar31 + (long)(int)uVar48);
                    pppppppdVar24 = (double *******)((long)pppppppdVar24 + (long)(int)uVar17);
                  } while (pppppppdVar31 < pppppppdVar34);
                }
              }
              if (((uVar49 >> 8 & 1) != 0) &&
                 (uVar16 = (uVar49 >> 10 & 1) + (uVar49 >> 0xb & 0x1f) +
                           ((uint)(uVar47 >> 0x10) & 0xff) + 7 >> 3, uVar16 - 1 < 8)) {
                pppppppdVar31 =
                     (double *******)((long)pppppppdVar38 + (long)(int)(uVar21 * param_7));
                switch(uVar16) {
                case 1:
                  if (pppppppdVar38 < pppppppdVar31) {
                    pppppppdVar24 = (double *******)&local_2090;
                    do {
                      *(undefined1 *)pppppppdVar38 = *(undefined1 *)pppppppdVar24;
                      pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar52);
                      pppppppdVar24 = pppppppdVar24 + 1;
                    } while (pppppppdVar38 < pppppppdVar31);
                  }
                  break;
                case 2:
                  if (pppppppdVar38 < pppppppdVar31) {
                    pppppppdVar24 = (double *******)&local_2090;
                    do {
                      *(ushort *)pppppppdVar38 =
                           *(ushort *)pppppppdVar24 >> 8 | *(ushort *)pppppppdVar24 << 8;
                      pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar52);
                      pppppppdVar24 = pppppppdVar24 + 1;
                    } while (pppppppdVar38 < pppppppdVar31);
                  }
                  break;
                case 4:
                  if (pppppppdVar38 < pppppppdVar31) {
                    pppppppdVar24 = (double *******)&local_2090;
                    do {
                      uVar16 = (*(uint *)pppppppdVar24 & 0xff00ff00) >> 8 |
                               (*(uint *)pppppppdVar24 & 0xff00ff) << 8;
                      *(uint *)pppppppdVar38 = uVar16 >> 0x10 | uVar16 << 0x10;
                      pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar52);
                      pppppppdVar24 = pppppppdVar24 + 1;
                    } while (pppppppdVar38 < pppppppdVar31);
                  }
                  break;
                case 8:
                  if (pppppppdVar38 < pppppppdVar31) {
                    pppppppdVar24 = (double *******)&local_2090;
                    do {
                      uVar47 = ((ulong)*pppppppdVar24 & 0xff00ff00ff00ff00) >> 8 |
                               ((ulong)*pppppppdVar24 & 0xff00ff00ff00ff) << 8;
                      uVar47 = (uVar47 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar47 & 0xffff0000ffff) << 0x10;
                      *pppppppdVar38 = (double ******)(uVar47 >> 0x20 | uVar47 << 0x20);
                      pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar52);
                      pppppppdVar24 = pppppppdVar24 + 1;
                    } while (pppppppdVar38 < pppppppdVar31);
                  }
                }
              }
              break;
            case 9:
              lVar50 = lVar50 + lVar55 * 0x38;
              FUN_00426fc0(*(undefined8 *)(lVar50 + 0x20));
              FUN_00426fc0(*(undefined8 *)(lVar50 + 0x18));
              uVar41 = *(undefined8 *)(lVar50 + 0x20);
              iVar14 = FUN_00426fc0(*(undefined8 *)(lVar50 + 0x18));
              iVar15 = FUN_00426fc0(uVar41);
              pppppppdVar24 = (double *******)((long)pppppppdVar38 + (long)(int)(uVar21 * param_7));
              if (pppppppdVar38 < pppppppdVar24) {
                if (iVar14 == 1) {
                  switch(iVar15) {
                  case 1:
                    do {
                      cVar8 = *(char *)pppppppdVar31;
                      pppppppdVar31 = (double *******)((long)pppppppdVar31 + lVar54);
                      *(bool *)pppppppdVar38 = cVar8 != '\0';
                      pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar52);
                    } while (pppppppdVar38 < pppppppdVar24);
                    break;
                  case 2:
                    do {
                      cVar8 = *(char *)pppppppdVar31;
                      pppppppdVar31 = (double *******)((long)pppppppdVar31 + lVar54);
                      *(ushort *)pppppppdVar38 = (ushort)(cVar8 != '\0');
                      pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar52);
                    } while (pppppppdVar38 < pppppppdVar24);
                    break;
                  default:
switchD_004dd9d8_caseD_3:
                    do {
                    } while( true );
                  case 4:
                    do {
                      cVar8 = *(char *)pppppppdVar31;
                      pppppppdVar31 = (double *******)((long)pppppppdVar31 + lVar54);
                      *(uint *)pppppppdVar38 = (uint)(cVar8 != '\0');
                      pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar52);
                    } while (pppppppdVar38 < pppppppdVar24);
                    break;
                  case 8:
                    do {
                      cVar8 = *(char *)pppppppdVar31;
                      pppppppdVar31 = (double *******)((long)pppppppdVar31 + lVar54);
                      *pppppppdVar38 = (double ******)(ulong)(cVar8 != '\0');
                      pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar52);
                    } while (pppppppdVar38 < pppppppdVar24);
                  }
                }
                else if (iVar14 == 2) {
                  if (iVar15 == 1) {
                    do {
                      sVar9 = *(short *)pppppppdVar31;
                      pppppppdVar31 = (double *******)((long)pppppppdVar31 + lVar54);
                      *(bool *)pppppppdVar38 = sVar9 != 0;
                      pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar52);
                    } while (pppppppdVar38 < pppppppdVar24);
                  }
                  else if (iVar15 == 2) {
                    do {
                      sVar9 = *(short *)pppppppdVar31;
                      pppppppdVar31 = (double *******)((long)pppppppdVar31 + lVar54);
                      *(ushort *)pppppppdVar38 = (ushort)(sVar9 != 0);
                      pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar52);
                    } while (pppppppdVar38 < pppppppdVar24);
                  }
                  else if (iVar15 == 4) {
                    do {
                      sVar9 = *(short *)pppppppdVar31;
                      pppppppdVar31 = (double *******)((long)pppppppdVar31 + lVar54);
                      *(uint *)pppppppdVar38 = (uint)(sVar9 != 0);
                      pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar52);
                    } while (pppppppdVar38 < pppppppdVar24);
                  }
                  else {
                    do {
                      if (iVar15 != 8) goto switchD_004dd9d8_caseD_3;
                      sVar9 = *(short *)pppppppdVar31;
                      pppppppdVar31 = (double *******)((long)pppppppdVar31 + lVar54);
                      *pppppppdVar38 = (double ******)(ulong)(sVar9 != 0);
                      pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar52);
                    } while (pppppppdVar38 < pppppppdVar24);
                  }
                }
                else if (iVar14 == 8) {
                  do {
                    if (7 < iVar15 - 1U) goto switchD_004dd9d8_caseD_3;
                    ppppppdVar30 = *pppppppdVar31;
                    switch(iVar15) {
                    case 1:
                      *(bool *)pppppppdVar38 = ppppppdVar30 != (double ******)0x0;
                      break;
                    case 2:
                      *(ushort *)pppppppdVar38 = (ushort)(ppppppdVar30 != (double ******)0x0);
                      break;
                    default:
                      goto switchD_004dd9d8_caseD_3;
                    case 4:
                      *(uint *)pppppppdVar38 = (uint)(ppppppdVar30 != (double ******)0x0);
                      break;
                    case 8:
                      *pppppppdVar38 = (double ******)(ulong)(ppppppdVar30 != (double ******)0x0);
                    }
                    pppppppdVar31 = (double *******)((long)pppppppdVar31 + lVar54);
                    pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar52);
                  } while (pppppppdVar38 < pppppppdVar24);
                }
                else {
                  do {
                    if (iVar14 != 4) {
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    if (7 < iVar15 - 1U) goto switchD_004dd9d8_caseD_3;
                    uVar16 = *(uint *)pppppppdVar31;
                    switch(iVar15) {
                    case 1:
                      *(bool *)pppppppdVar38 = uVar16 != 0;
                      break;
                    case 2:
                      *(ushort *)pppppppdVar38 = (ushort)(uVar16 != 0);
                      break;
                    default:
                      goto switchD_004dd9d8_caseD_3;
                    case 4:
                      *(uint *)pppppppdVar38 = (uint)(uVar16 != 0);
                      break;
                    case 8:
                      *pppppppdVar38 = (double ******)(ulong)(uVar16 != 0);
                    }
                    pppppppdVar31 = (double *******)((long)pppppppdVar31 + lVar54);
                    pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar52);
                  } while (pppppppdVar38 < pppppppdVar24);
                }
              }
              break;
            case 10:
              lVar50 = lVar50 + lVar55 * 0x38;
              FUN_00426fc0(*(undefined8 *)(lVar50 + 0x20));
              FUN_00426fc0(*(undefined8 *)(lVar50 + 0x18));
              lVar27 = *(long *)(lVar50 + 0x18);
              local_2088 = *(ulong *)(lVar50 + 0x20);
              uVar47 = 0;
              local_2090 = pppppppdVar38;
              if (local_2088 != 0) {
                uVar47 = FUN_00428370();
              }
              local_2080 = uVar47;
              if ((uVar47 & 1) != 0) {
                FUN_0043dd30(uVar47 & 0xfffffffffffffffe);
              }
              plVar19 = (long *)0x0;
              local_90 = pppppppdVar31;
              lStack_88 = lVar27;
              if (lVar27 != 0) {
                plVar19 = (long *)FUN_00428370(lVar27);
              }
              local_80 = plVar19;
              if (((ulong)plVar19 & 1) != 0) {
                FUN_0043dd30((ulong)plVar19 & 0xfffffffffffffffe);
              }
              uVar16 = uVar21;
              if (0 < (int)uVar11) {
                do {
                  FUN_00466cd0(param_1,&local_2090,&local_90);
                  local_2090 = (double *******)((long)local_2090 + lVar52);
                  uVar43 = local_2080 & 0xfffffffffffffffe;
                  uVar47 = local_2080 & 1;
                  local_2080 = uVar43;
                  if (uVar47 != 0) {
                    FUN_0043dd50();
                  }
                  local_90 = (double *******)((long)local_90 + lVar54);
                  plVar19 = (long *)((ulong)local_80 & 0xfffffffffffffffe);
                  uVar47 = (ulong)local_80 & 1;
                  local_80 = plVar19;
                  if (uVar47 != 0) {
                    FUN_0043dd50();
                  }
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
                plVar19 = local_80;
              }
              if (((ulong)plVar19 & 1) != 0) {
                FUN_0043dd50((ulong)plVar19 & 0xfffffffffffffffe);
              }
              if ((local_2080 & 1) != 0) {
                FUN_0043dd50(local_2080 & 0xfffffffffffffffe);
              }
              break;
            case 0xb:
              lVar27 = *(long *)(lVar50 + lVar55 * 0x38 + 0x20);
              uVar47 = FUN_00428440(lVar27);
              if ((uVar47 & 0x1f) != 8) {
                lVar27 = 0;
              }
              uVar47 = FUN_00428440(lVar27);
              uVar43 = 0;
              if ((uVar47 & 0x1f) == 8 && lVar27 != 0) {
                uVar43 = FUN_00428370(lVar27);
              }
              if ((uVar43 & 1) != 0) {
                FUN_0043dd30(uVar43 & 0xfffffffffffffffe);
              }
              lVar27 = *(long *)(lVar50 + lVar55 * 0x38 + 0x18);
              uVar47 = FUN_00428440(lVar27);
              if ((uVar47 & 0x1f) != 8) {
                lVar27 = 0;
              }
              if (lVar27 == 0) {
                plVar19 = (long *)0x0;
              }
              else {
                plVar19 = (long *)FUN_00428370(lVar27);
                if (((ulong)plVar19 & 1) != 0) {
                  FUN_0043dd30((ulong)plVar19 & 0xfffffffffffffffe);
                }
              }
              if ((int)uVar11 < 1) {
                if (((ulong)plVar19 & 1) != 0) {
                  FUN_0043dd50((ulong)plVar19 & 0xfffffffffffffffe);
                }
                if ((uVar43 & 1) != 0) {
                  FUN_0043dd50(uVar43 & 0xfffffffffffffffe);
                }
              }
              else {
                iVar18 = 0;
                do {
                  if ((uVar43 & 1) != 0) {
                    FUN_0043dd30(uVar43 & 0xfffffffffffffffe);
                  }
                  plVar42 = (long *)((ulong)plVar19 & 0xfffffffffffffffe);
                  if (((ulong)plVar19 & 1) != 0) {
                    FUN_0043dd30(plVar42);
                  }
                  local_2078 = 0;
                  local_2080 = 0;
                  local_2088 = 0;
                  local_2090 = (double *******)0x0;
                  (**(code **)(*plVar42 + 0x50))(plVar42,pppppppdVar31,lVar27,&local_2090);
                  pppppppdVar24 = local_2090;
                  if ((local_2078 & 1) != 0) {
                    FUN_0043dd50(local_2078 & 0xfffffffffffffffe);
                  }
                  uVar16 = FUN_004def00(*(undefined8 *)(param_1 + 0x288),pppppppdVar24);
                  *(uint *)pppppppdVar38 = uVar16;
                  if (((ulong)plVar19 & 1) != 0) {
                    FUN_0043dd50(plVar42);
                  }
                  if ((uVar43 & 1) != 0) {
                    FUN_0043dd50(uVar43 & 0xfffffffffffffffe);
                    FUN_0043dd50(uVar43 & 0xfffffffffffffffe);
                  }
                  if (((ulong)plVar19 & 1) != 0) {
                    FUN_0043dd50(plVar42);
                  }
                  pppppppdVar31 = (double *******)((long)pppppppdVar31 + lVar54);
                  pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar52);
                  uVar43 = uVar43 & 0xfffffffffffffffe;
                  iVar18 = iVar18 + 1;
                  plVar19 = plVar42;
                } while (iVar18 < (int)uVar21);
                iVar18 = 0;
              }
              break;
            case 0xc:
              lVar27 = *(long *)(lVar50 + lVar55 * 0x38 + 0x20);
              uVar47 = FUN_00428440(lVar27);
              if ((uVar47 & 0x1f) != 7) {
                lVar27 = 0;
              }
              uVar47 = FUN_00428440(lVar27);
              uVar43 = 0;
              if ((uVar47 & 0x1f) == 7 && lVar27 != 0) {
                uVar43 = FUN_00428370(lVar27);
              }
              if ((uVar43 & 1) != 0) {
                FUN_0043dd30(uVar43 & 0xfffffffffffffffe);
              }
              lVar27 = *(long *)(lVar50 + lVar55 * 0x38 + 0x18);
              uVar47 = FUN_00428440(lVar27);
              uVar45 = 0;
              if (lVar27 != 0) {
                if ((uVar47 & 0x1f) == 7) {
                  uVar45 = FUN_00428370(lVar27);
                }
                if ((uVar45 & 1) != 0) {
                  FUN_0043dd30(uVar45 & 0xfffffffffffffffe);
                }
              }
              if ((int)uVar11 < 1) {
                bVar13 = true;
              }
              else {
                uVar47 = FUN_0043d930(0x28f4dd16,
                                      "../..\\Common/Base/Reflect/TypeVm/hkTypeVmFastCopyInterpreter.inl"
                                      ,0x20b,
                                      "hkResult hkTypeVm::FastCopyInterpreter::execRecord(const hkReflect::RecordVar &, const hkReflect::RecordVar &)"
                                      ,&DAT_0407ebb1,"Not implemented",&DAT_0413df78);
                bVar13 = false;
                if ((uVar47 & 1) != 0) {
                  CallSupervisor(0x26);
                }
                iVar18 = -0x7ffbfe00;
              }
              if ((uVar45 & 1) != 0) {
                FUN_0043dd50(uVar45 & 0xfffffffffffffffe);
              }
              if ((uVar43 & 1) != 0) {
                FUN_0043dd50(uVar43 & 0xfffffffffffffffe);
              }
              if (!bVar13) goto LAB_004dee04;
              break;
            case 0xd:
              uVar16 = *(uint *)(lVar50 + lVar55 * 0x38 + 0x18);
              uVar47 = (ulong)uVar16;
              if (uVar16 == param_7 && uVar16 == param_8) {
                FUN_0043a3b0(pppppppdVar38,pppppppdVar31,uVar21 * param_8);
              }
              else if ((0 < (int)uVar11) && (0 < (int)uVar16)) {
                uVar17 = 0;
                do {
                  if (uVar47 - 1 < 7) {
                    lVar27 = 0;
                  }
                  else {
                    lVar27 = 0;
                    do {
                      puVar23 = (undefined1 *)((long)pppppppdVar31 + lVar27);
                      puVar33 = (undefined1 *)((long)pppppppdVar38 + lVar27);
                      lVar27 = lVar27 + 8;
                      *puVar33 = *puVar23;
                      puVar33[1] = puVar23[1];
                      puVar33[2] = puVar23[2];
                      puVar33[3] = puVar23[3];
                      puVar33[4] = puVar23[4];
                      puVar33[5] = puVar23[5];
                      puVar33[6] = puVar23[6];
                      puVar33[7] = puVar23[7];
                    } while (uVar47 - (uVar47 & 7) != lVar27);
                  }
                  if ((uVar16 & 7) != 0) {
                    lVar50 = -(uVar47 & 7);
                    do {
                      lVar50 = lVar50 + 1;
                      *(undefined1 *)((long)pppppppdVar38 + lVar27) =
                           *(undefined1 *)((long)pppppppdVar31 + lVar27);
                      lVar27 = lVar27 + 1;
                    } while (lVar50 != 0);
                  }
                  uVar17 = uVar17 + 1;
                  pppppppdVar38 = (double *******)((long)pppppppdVar38 + lVar52);
                  pppppppdVar31 = (double *******)((long)pppppppdVar31 + lVar54);
                } while (uVar17 != uVar21);
              }
            }
          }
          iVar40 = iVar40 + 1;
        } while (iVar6 != iVar40);
      }
      iVar20 = uVar21 + iVar20;
    } while (iVar20 < param_9);
  }
  if ((uint)local_2c98 == 0) {
    iVar18 = 0;
    uVar21 = local_2c98._4_4_;
  }
  else {
    lVar25 = (long)(int)(uint)local_2c98 * 0x30;
    puVar28 = (undefined8 *)(local_2ca0 + 0x18);
    do {
      local_2090 = (double *******)0x0;
      (**(code **)(*(long *)(puVar28[2] & 0xfffffffffffffffe) + 0x38))
                ((long *)(puVar28[2] & 0xfffffffffffffffe),*puVar28,puVar28[1],&local_2090);
      iVar18 = (**(code **)(*(long *)(puVar28[-1] & 0xfffffffffffffffe) + 0x30))
                         ((long *)(puVar28[-1] & 0xfffffffffffffffe),puVar28[-3],puVar28[-2],
                          local_2090);
      if (iVar18 < 0) {
        iVar20 = (uint)local_2c98;
        goto joined_r0x004deebc;
      }
      lVar25 = lVar25 + -0x30;
      puVar28 = puVar28 + 6;
    } while (lVar25 != 0);
    iVar18 = 0;
LAB_004dee04:
    iVar20 = (uint)local_2c98;
joined_r0x004deebc:
    if (iVar20 < 1) {
      local_2c98._4_4_ = (uint)(local_2c98 >> 0x20);
      uVar21 = local_2c98._4_4_;
    }
    else {
      puVar46 = (ulong *)(local_2ca0 + (long)iVar20 * 0x30 + -0x20);
      do {
        while ((puVar46[3] & 1) != 0) {
          FUN_0043dd50(puVar46[3] & 0xfffffffffffffffe);
          uVar37 = *puVar46;
          if ((uVar37 & 1) == 0) goto LAB_004dee38;
LAB_004dee58:
          FUN_0043dd50(uVar37 & 0xfffffffffffffffe);
          iVar20 = iVar20 + -1;
          puVar46 = puVar46 + -6;
          if (iVar20 == 0) goto LAB_004dee6c;
        }
        uVar37 = *puVar46;
        if ((uVar37 & 1) != 0) goto LAB_004dee58;
LAB_004dee38:
        iVar20 = iVar20 + -1;
        puVar46 = puVar46 + -6;
      } while (iVar20 != 0);
LAB_004dee6c:
      uVar21 = local_2c98._4_4_;
    }
  }
  if ((-1 < (long)local_2c98) &&
     (local_2c98 = (ulong)uVar21 << 0x20, local_2ca0 != (undefined1 *)0x0)) {
    FUN_00421f90(uVar22,local_2ca0,0x30,uVar21 & 0x3fffffff);
  }
  return iVar18;
}


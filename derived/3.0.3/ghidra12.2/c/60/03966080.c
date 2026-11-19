
undefined8
FUN_03966080(undefined8 param_1,long *param_2,uint param_3,uint param_4,long param_5,long *param_6,
            long *param_7)

{
  long lVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  int iVar22;
  int iVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  uint uVar27;
  undefined8 uVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  uint local_78;
  undefined4 uStack_74;
  long local_70;
  long *plStack_68;
  
  uVar14 = 0x18;
  if (param_3 != 1) {
    uVar14 = 0x20;
  }
  uVar5 = *(ushort *)(param_5 + 0x32);
  uVar16 = 8;
  if (param_3 != 0) {
    uVar16 = uVar14;
  }
  uVar6 = *(ushort *)(param_5 + 0x30);
  uVar14 = (uint)uVar6;
  if (uVar14 < 2) {
    uVar14 = 1;
  }
  uVar31 = (ulong)uVar14;
  uVar3 = (uint)uVar5;
  if (*(short *)(param_5 + 0x3a) != 3) {
    uVar3 = 1;
  }
  if (uVar3 == uVar5 || uVar3 < uVar5) {
    uVar3 = (uint)uVar5;
  }
  uVar29 = (ulong)uVar3;
  uVar27 = uVar3 * uVar14 * uVar16 >> 3;
  *(uint *)(param_2 + 1) = uVar27 + 0x2c;
  puVar10 = (undefined8 *)(**(code **)(*param_6 + 0x30))(param_6,uVar27 + 0x6b & 0x1fffffc0,0x40);
  *param_2 = (long)puVar10;
  *puVar10 = 0;
  *(undefined4 *)(puVar10 + 1) = 0;
  if (param_3 < 3) {
    *(char *)((long)puVar10 + 2) = (char)(0x20203 >> (ulong)((param_3 & 3) << 3));
  }
  *(short *)((long)puVar10 + 0xc) = (short)uVar14;
  *(short *)((long)puVar10 + 0xe) = (short)uVar3;
  uVar8 = s_TRUEVISION_XFILE__041b3d44._8_8_;
  uVar28 = s_TRUEVISION_XFILE__041b3d44._0_8_;
  *(undefined1 *)((long)puVar10 + 0x11) = 8;
  uVar7 = uVar3 * uVar14 * 4;
  *(char *)(puVar10 + 2) = (char)uVar16;
  lVar30 = *param_2 + 0x12;
  puVar10 = (undefined8 *)(lVar30 + (ulong)uVar27);
  *puVar10 = 0;
  puVar10[1] = uVar28;
  puVar10[2] = uVar8;
  *(undefined2 *)(puVar10 + 3) = 0x2e;
  lVar15 = DAT_05ae7600;
  uVar27 = *(uint *)(param_5 + 0x40);
  if (*(uint *)(param_5 + 0x40) <= uVar7) {
    uVar27 = uVar7;
  }
  if (DAT_05ae7600 == 0) {
    plVar12 = malloc(0x38);
  }
  else {
    plVar12 = param_7;
    if (param_7 == (long *)0x0) {
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar12 = (long *)(lVar15 + 8);
      if (lVar11 != 0) {
        plVar12 = (long *)(lVar11 + 0xa8);
      }
      plVar12 = (long *)*plVar12;
      if (plVar12 == (long *)0x0) {
        plVar12 = (long *)0x0;
        goto LAB_039661fc;
      }
    }
    plVar12 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12,0x38,8);
  }
LAB_039661fc:
  puVar9 = PTR_DAT_04bb2cc8;
  plVar12[1] = 0;
  plVar12[6] = 0;
  *(undefined2 *)((long)plVar12 + 0x2a) = 0;
  plVar12[2] = 0;
  plVar12[3] = 0;
  plVar12[4] = 0;
  *(undefined1 *)(plVar12 + 5) = 0;
  *plVar12 = (long)(puVar9 + 0x10);
  if ((uVar27 != 0) &&
     (uVar13 = FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,plVar12,param_7,uVar27,0x2000,2),
     (uVar13 & 1) != 0)) {
    lVar15 = plVar12[3];
    *(undefined2 *)((long)plVar12 + 0x2a) = 2;
    if (plVar12[4] == 0) {
      uVar27 = 0;
    }
    else {
      uVar27 = (int)plVar12[1] - *(int *)(plVar12[4] + 0x10);
    }
    if (lVar15 != 0) {
      uVar4 = *(undefined4 *)(lVar15 + 0x104);
      lVar11 = (**(code **)PTR_DAT_04bb2cd8)(lVar15);
      lVar11 = lVar11 + (ulong)uVar27;
      local_78 = uVar27;
      uStack_74 = uVar4;
      local_70 = lVar15;
      plStack_68 = plVar12;
      FUN_038fb0a0(*(undefined8 *)PTR_DAT_04bc1010,&local_78,param_5);
      uVar16 = uVar16 >> 3;
      if (uVar16 == 1) {
        if (uVar3 != 0) {
          if ((param_4 & 1) == 0) {
            lVar15 = 0;
            uVar13 = 0;
            uVar20 = 0xc;
            uVar28 = 1;
            do {
              if (uVar14 < 4) {
                uVar21 = 0;
              }
              else {
                uVar21 = 0;
                uVar24 = uVar20;
                do {
                  iVar23 = (int)uVar24;
                  puVar2 = (undefined1 *)(lVar30 + uVar21);
                  uVar21 = uVar21 + 4;
                  *puVar2 = *(undefined1 *)(lVar11 + (ulong)(iVar23 - 0xc));
                  puVar2[1] = *(undefined1 *)(lVar11 + (ulong)(iVar23 - 8));
                  puVar2[2] = *(undefined1 *)(lVar11 + (ulong)(iVar23 - 4));
                  uVar25 = uVar24 & 0xfffffffc;
                  uVar24 = uVar24 + 0x10;
                  puVar2[3] = *(undefined1 *)(lVar11 + uVar25);
                } while ((uVar31 & 0xfffc) != uVar21);
              }
              if ((uVar14 & 3) != 0) {
                uVar24 = (uVar21 + lVar15) * 4;
                uVar25 = uVar31 & 3;
                do {
                  uVar26 = uVar24 & 0xfffffffc;
                  uVar24 = uVar24 + 4;
                  uVar25 = uVar25 - 1;
                  *(undefined1 *)(lVar30 + uVar21) = *(undefined1 *)(lVar11 + uVar26);
                  uVar21 = uVar21 + 1;
                } while (uVar25 != 0);
              }
              uVar13 = uVar13 + 1;
              uVar20 = uVar20 + uVar31 * 4;
              lVar30 = lVar30 + uVar31;
              lVar15 = lVar15 + uVar31;
            } while (uVar13 != uVar29);
          }
          else {
            uVar13 = 0;
            iVar19 = uVar14 * (uVar3 - 1);
            uVar28 = 1;
            iVar23 = iVar19 * 4 + 0xc;
            do {
              if (uVar14 < 4) {
                uVar20 = 0;
              }
              else {
                uVar20 = 0;
                iVar22 = iVar23;
                do {
                  puVar2 = (undefined1 *)(lVar30 + uVar20);
                  *puVar2 = *(undefined1 *)(lVar11 + (iVar22 + -0xc));
                  uVar20 = uVar20 + 4;
                  puVar2[1] = *(undefined1 *)(lVar11 + (iVar22 + -8));
                  puVar2[2] = *(undefined1 *)(lVar11 + (iVar22 + -4));
                  lVar15 = (long)iVar22;
                  iVar22 = iVar22 + 0x10;
                  puVar2[3] = *(undefined1 *)(lVar11 + lVar15);
                } while ((uVar31 & 0xfffc) != uVar20);
              }
              if ((uVar14 & 3) != 0) {
                iVar22 = (iVar19 + (int)uVar20) * 4;
                uVar24 = uVar31 & 3;
                do {
                  lVar15 = (long)iVar22;
                  iVar22 = iVar22 + 4;
                  uVar24 = uVar24 - 1;
                  *(undefined1 *)(lVar30 + uVar20) = *(undefined1 *)(lVar11 + lVar15);
                  uVar20 = uVar20 + 1;
                } while (uVar24 != 0);
              }
              uVar13 = uVar13 + 1;
              iVar23 = iVar23 + uVar14 * -4;
              lVar30 = lVar30 + uVar31;
              iVar19 = iVar19 - uVar14;
            } while (uVar13 != uVar29);
          }
          goto LAB_03966374;
        }
      }
      else if (uVar16 == 3) {
        if (uVar3 != 0) {
          lVar15 = uVar31 + (ulong)uVar14 * 2;
          lVar18 = 0;
          uVar31 = 0;
          uVar28 = 1;
          do {
            lVar17 = 0;
            uVar16 = uVar3 + ~(uint)uVar31;
            if ((param_4 & 1) == 0) {
              uVar16 = (uint)uVar31;
            }
            iVar23 = uVar14 * 4 * uVar16;
            do {
              uVar13 = lVar18 + lVar17;
              lVar17 = lVar17 + 3;
              iVar19 = (int)uVar13;
              *(undefined1 *)(lVar30 + (uVar13 & 0xffffffff)) =
                   *(undefined1 *)(lVar11 + (iVar23 + 2));
              *(undefined1 *)(lVar30 + (ulong)(iVar19 + 1)) = *(undefined1 *)(lVar11 + (iVar23 + 1))
              ;
              lVar1 = (long)iVar23;
              iVar23 = iVar23 + 4;
              *(undefined1 *)(lVar30 + (ulong)(iVar19 + 2)) = *(undefined1 *)(lVar11 + lVar1);
            } while (lVar15 != lVar17);
            uVar31 = uVar31 + 1;
            lVar18 = lVar18 + lVar15;
          } while (uVar31 != uVar29);
          goto LAB_03966374;
        }
      }
      else if ((uVar16 == 4) && (uVar3 != 0)) {
        if ((param_4 & 1) == 0) {
          lVar15 = 0;
          uVar16 = 0;
          uVar28 = 1;
          do {
            if (uVar6 < 2) {
              iVar23 = 0;
            }
            else {
              uVar29 = 0;
              iVar23 = 0;
              do {
                uVar27 = (int)lVar15 + (int)uVar29;
                uVar29 = uVar29 + 8;
                iVar23 = iVar23 + 2;
                *(undefined1 *)(lVar30 + (ulong)uVar27) =
                     *(undefined1 *)(lVar11 + (ulong)(uVar27 + 2));
                *(undefined1 *)(lVar30 + (ulong)(uVar27 + 1)) =
                     *(undefined1 *)(lVar11 + (ulong)(uVar27 + 1));
                *(undefined1 *)(lVar30 + (ulong)(uVar27 + 2)) =
                     *(undefined1 *)(lVar11 + (ulong)uVar27);
                *(undefined1 *)(lVar30 + (ulong)(uVar27 + 3)) =
                     *(undefined1 *)(lVar11 + (ulong)(uVar27 + 3));
                *(undefined1 *)(lVar30 + (ulong)(uVar27 + 4)) =
                     *(undefined1 *)(lVar11 + (ulong)(uVar27 + 6));
                *(undefined1 *)(lVar30 + (ulong)(uVar27 + 5)) =
                     *(undefined1 *)(lVar11 + (ulong)(uVar27 + 5));
                *(undefined1 *)(lVar30 + (ulong)(uVar27 + 6)) =
                     *(undefined1 *)(lVar11 + (ulong)(uVar27 + 4));
                *(undefined1 *)(lVar30 + (ulong)(uVar27 + 7)) =
                     *(undefined1 *)(lVar11 + (ulong)(uVar27 + 7));
              } while ((uVar31 * 4 & 0x3fff8) != uVar29);
            }
            if ((uVar14 & 1) != 0) {
              uVar29 = (ulong)((uVar16 * uVar14 + iVar23) * 4);
              *(undefined1 *)(lVar30 + uVar29) = *(undefined1 *)(lVar11 + (uVar29 | 2));
              *(undefined1 *)(lVar30 + (uVar29 | 1)) = *(undefined1 *)(lVar11 + (uVar29 | 1));
              *(undefined1 *)(lVar30 + (uVar29 | 2)) = *(undefined1 *)(lVar11 + uVar29);
              *(undefined1 *)(lVar30 + (uVar29 | 3)) = *(undefined1 *)(lVar11 + (uVar29 | 3));
            }
            uVar16 = uVar16 + 1;
            lVar15 = lVar15 + uVar31 * 4;
          } while (uVar16 != uVar3);
        }
        else {
          lVar15 = 0;
          uVar16 = 0;
          uVar28 = 1;
          iVar23 = uVar14 * (uVar3 - 1) * 4;
          do {
            lVar18 = 0;
            do {
              iVar19 = iVar23 + (int)lVar18;
              uVar27 = (int)lVar15 + (int)lVar18;
              lVar18 = lVar18 + 4;
              *(undefined1 *)(lVar30 + (ulong)uVar27) = *(undefined1 *)(lVar11 + (iVar19 + 2));
              *(undefined1 *)(lVar30 + (ulong)(uVar27 + 1)) = *(undefined1 *)(lVar11 + (iVar19 + 1))
              ;
              *(undefined1 *)(lVar30 + (ulong)(uVar27 + 2)) = *(undefined1 *)(lVar11 + iVar19);
              *(undefined1 *)(lVar30 + (ulong)(uVar27 + 3)) = *(undefined1 *)(lVar11 + (iVar19 + 3))
              ;
            } while (uVar31 * 4 != lVar18);
            uVar16 = uVar16 + 1;
            lVar15 = lVar15 + uVar31 * 4;
            iVar23 = iVar23 + uVar14 * -4;
          } while (uVar16 != uVar3);
        }
        goto LAB_03966374;
      }
      uVar28 = 1;
      goto LAB_03966374;
    }
  }
  uVar28 = 0;
LAB_03966374:
  (**(code **)(*plVar12 + 8))(plVar12);
  return uVar28;
}


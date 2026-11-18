
/* WARNING: Type propagation algorithm not settling */

void FUN_03263dc0(undefined8 ******param_1)

{
  short *psVar1;
  uint *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined8 *******pppppppuVar6;
  bool bVar7;
  uint uVar8;
  undefined2 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  void *__s;
  byte *pbVar13;
  long *plVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte bVar17;
  long lVar18;
  undefined8 *****pppppuVar19;
  undefined8 *****pppppuVar20;
  long *plVar21;
  int iVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  short *psVar26;
  uint uVar27;
  undefined8 ****ppppuVar28;
  undefined2 local_228;
  undefined1 local_226;
  char local_225;
  int local_224;
  undefined8 local_220;
  undefined8 *local_218;
  undefined8 *******local_210;
  undefined8 *******local_208;
  undefined8 *******local_200 [4];
  undefined8 *******local_1e0 [4];
  undefined8 *******local_1c0 [4];
  undefined8 ******local_1a0 [4];
  undefined8 *****local_180 [4];
  undefined8 ****local_160 [4];
  undefined8 ***local_140 [4];
  undefined8 **local_120 [4];
  undefined8 *local_100 [4];
  undefined8 local_e0 [4];
  undefined8 auStack_c0 [10];
  byte local_6c [12];
  
  puVar5 = PTR_DAT_04bb43c0;
  local_e0[0] = 0;
  local_210 = local_200;
  local_200[0] = local_1e0;
  local_1e0[0] = local_1c0;
  local_1c0[0] = local_1a0;
  local_1a0[0] = local_180;
  local_180[0] = local_160;
  local_160[0] = local_140;
  local_140[0] = local_120;
  local_120[0] = local_100;
  local_100[0] = local_e0;
  local_220 = 0;
  local_218 = (undefined8 *)0x0;
  if (auStack_c0 != (undefined8 *)0x0) {
    local_220 = 0xa00000000;
    local_218 = auStack_c0;
  }
  local_208 = local_210;
  if (*(int *)param_1 != 0) {
    pppppuVar20 = param_1[1];
    pppppuVar19 = pppppuVar20 + *(int *)param_1;
    plVar21 = (long *)PTR_DAT_04bb39b0;
    pbVar16 = PTR_DAT_04bb32e0;
    do {
      pppppppuVar6 = local_210;
      ppppuVar28 = *pppppuVar20;
      iVar22 = *(int *)ppppuVar28;
      if (iVar22 - 5U < 3) {
LAB_03263f08:
        uVar27 = *(uint *)((long)ppppuVar28 + 0xc);
        if (uVar27 != 0xffffffff) {
          if (*(int *)(param_1 + 0x8d3d) == 0) {
            uVar23 = 0xffffffff;
          }
          else {
            uVar23 = 0xffffffff;
            if (uVar27 <= *(int *)(param_1 + 0x8d3d) - 1U) {
              uVar23 = (ulong)*(uint *)param_1[0x8d3e][(int)uVar27];
            }
          }
          lVar18 = *plVar21;
          pbVar13 = pbVar16;
          if (lVar18 == 0) {
            if (7 < *pbVar16) goto LAB_03264034;
LAB_032640b4:
            local_6c[0] = *pbVar13;
            if (7 < local_6c[0]) {
              local_6c[0] = 0xff;
            }
          }
          else {
            if (*(int *)(lVar18 + 0x15c) != 0) {
              pbVar13 = (byte *)(lVar18 + 0x158);
            }
            if ((*pbVar13 < 8) ||
               (((*(int *)(lVar18 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
                (pbVar13 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar13 < 8))))
            goto LAB_032640b4;
LAB_03264034:
            pbVar13 = PTR_DAT_04bb5038;
            if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) goto LAB_032640b4;
            lVar18 = **(long **)PTR_DAT_04bb27d0;
            bVar17 = *(byte *)(lVar18 + 0x473);
            pbVar15 = PTR_DAT_04bb5038;
            if ((long)(char)bVar17 != 0xffffffffffffffff) {
              puVar2 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar17 & 0xffffffffU) * 0x20;
              if (7 < bVar17) {
                puVar2 = (uint *)(lVar18 + 0x48);
              }
              if ((*puVar2 & 8) != 0) {
                pbVar15 = (byte *)(lVar18 + 0x471);
              }
            }
            local_6c[0] = *pbVar15;
            if (7 < local_6c[0]) goto LAB_032640b4;
          }
          puVar9 = (undefined2 *)FUN_0267ce80(local_6c,uVar23);
          local_228 = *puVar9;
          local_226 = *(undefined1 *)(puVar9 + 1);
          local_225 = *(char *)((long)puVar9 + 3);
          local_224 = *(int *)(puVar9 + 2);
          uVar10 = FUN_0277d7b4(&local_228,(int *)((long)ppppuVar28 + 4));
          if ((((uVar10 & 1) == 0) || (local_225 != *(char *)((long)ppppuVar28 + 7))) ||
             (local_224 != *(int *)(ppppuVar28 + 1))) {
            lVar18 = *plVar21;
            pbVar13 = pbVar16;
            if (lVar18 == 0) {
              if (7 < *pbVar16) goto LAB_03264188;
LAB_03264200:
              local_6c[0] = *pbVar13;
              if (7 < local_6c[0]) {
                local_6c[0] = 0xff;
              }
            }
            else {
              if (*(int *)(lVar18 + 0x15c) != 0) {
                pbVar13 = (byte *)(lVar18 + 0x158);
              }
              if ((*pbVar13 < 8) ||
                 (((*(int *)(lVar18 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
                  (pbVar13 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar13 < 8))))
              goto LAB_03264200;
LAB_03264188:
              pbVar13 = PTR_DAT_04bb5038;
              if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) goto LAB_03264200;
              lVar18 = **(long **)PTR_DAT_04bb27d0;
              bVar17 = *(byte *)(lVar18 + 0x473);
              pbVar15 = PTR_DAT_04bb5038;
              if ((long)(char)bVar17 != 0xffffffffffffffff) {
                puVar2 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar17 & 0xffffffffU) * 0x20;
                if (7 < bVar17) {
                  puVar2 = (uint *)(lVar18 + 0x48);
                }
                if ((*puVar2 & 8) != 0) {
                  pbVar15 = (byte *)(lVar18 + 0x471);
                }
              }
              local_6c[0] = *pbVar15;
              if (7 < local_6c[0]) goto LAB_03264200;
            }
            if (7 < local_6c[0]) {
              local_6c[0] = 0xff;
            }
            lVar18 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_6c,1);
            if (lVar18 == 0) {
              uVar23 = 0xffffffff;
              goto LAB_0326426c;
            }
            lVar24 = lVar18 + 0x194b0;
            if (*(long *)(lVar18 + 0x194b8) == 0) {
              lVar24 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
              plVar14 = *(long **)(lVar24 + 0x178);
              if (plVar14 == (long *)0x0) goto LAB_0326428c;
LAB_03264250:
              uVar10 = 0;
              if ((undefined8 *)*plVar14 != (undefined8 *)0x0) {
                uVar10 = (*(code *)**(undefined8 **)*plVar14)();
              }
            }
            else {
              plVar14 = *(long **)(lVar18 + 0x19628);
              if (plVar14 != (long *)0x0) goto LAB_03264250;
LAB_0326428c:
              uVar10 = 0;
            }
            uVar27 = *(uint *)(*(long *)(lVar24 + 0x160) + *(long *)(lVar24 + 0x158) + 72000);
            if (8999 < uVar27) {
              uVar27 = 9000;
            }
            if (uVar27 == 0) {
              uVar23 = 0xffffffff;
            }
            else {
              lVar18 = 0;
              uVar23 = 0;
              do {
                lVar25 = *(long *)(lVar24 + 0x160) + *(long *)(lVar24 + 0x158);
                uVar8 = *(uint *)(lVar25 + 72000);
                if (8999 < uVar8) {
                  uVar8 = 9000;
                }
                psVar26 = (short *)PTR_DAT_04bb37e0;
                if (uVar23 < uVar8) {
                  psVar1 = (short *)(lVar25 + lVar18);
                  if (*psVar1 == -2) {
                    psVar26 = psVar1;
                  }
                  else {
                    lVar25 = *(long *)puVar5;
                    uVar8 = FUN_0277d6c4(psVar1);
                    psVar26 = (short *)PTR_DAT_04bb37e0;
                    if (*(long *)puVar5 != 0) {
                      lVar25 = *(long *)(lVar25 + 0x57e58);
                      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
                      if (uVar8 < *(uint *)(lVar25 + 0x1d8)) {
                        if (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar8 * 8) != 0) {
                          psVar26 = psVar1;
                        }
                      }
                    }
                  }
                }
                uVar11 = FUN_0277d7b4(psVar26,(int *)((long)ppppuVar28 + 4));
                plVar21 = (long *)PTR_DAT_04bb39b0;
                pbVar16 = PTR_DAT_04bb32e0;
                if ((((uVar11 & 1) != 0) &&
                    (*(char *)((long)psVar26 + 3) == *(char *)((long)ppppuVar28 + 7))) &&
                   (*(int *)(psVar26 + 2) == *(int *)(ppppuVar28 + 1))) goto joined_r0x032643e8;
                lVar18 = lVar18 + 8;
                uVar23 = uVar23 + 1;
              } while ((ulong)uVar27 * 8 != lVar18);
              uVar23 = 0xffffffff;
            }
joined_r0x032643e8:
            if ((((uVar10 & 1) != 0) && (*(long *)(lVar24 + 0x178) != 0)) &&
               (puVar12 = *(undefined8 **)(*(long *)(lVar24 + 0x178) + 8),
               puVar12 != (undefined8 *)0x0)) {
              (**(code **)*puVar12)();
            }
            iVar22 = (int)uVar23;
          }
          else {
LAB_0326426c:
            iVar22 = (int)uVar23;
          }
          if (-1 < iVar22) {
            lVar18 = *plVar21;
            pbVar13 = pbVar16;
            if (lVar18 == 0) {
              if (7 < *pbVar16) goto LAB_0326447c;
LAB_03263eb0:
              local_6c[0] = *pbVar13;
              if (7 < *pbVar13) {
                local_6c[0] = 0xff;
              }
            }
            else {
              if (*(int *)(lVar18 + 0x15c) != 0) {
                pbVar13 = (byte *)(lVar18 + 0x158);
              }
              if ((*pbVar13 < 8) ||
                 (((*(int *)(lVar18 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
                  (pbVar13 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar13 < 8))))
              goto LAB_03263eb0;
LAB_0326447c:
              pbVar13 = PTR_DAT_04bb5038;
              if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) goto LAB_03263eb0;
              lVar18 = **(long **)PTR_DAT_04bb27d0;
              bVar17 = *(byte *)(lVar18 + 0x473);
              pbVar15 = PTR_DAT_04bb5038;
              if ((long)(char)bVar17 != 0xffffffffffffffff) {
                puVar2 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar17 & 0xffffffffU) * 0x20;
                if (7 < bVar17) {
                  puVar2 = (uint *)(lVar18 + 0x48);
                }
                if ((*puVar2 & 8) != 0) {
                  pbVar15 = (byte *)(lVar18 + 0x471);
                }
              }
              local_6c[0] = *pbVar15;
              if (7 < local_6c[0]) goto LAB_03263eb0;
            }
            FUN_0267c820(local_6c,uVar23 & 0xffffffff,PTR_DAT_04bb37e0,0);
          }
        }
      }
      else if (iVar22 == 3) {
        if (*(int *)((long)ppppuVar28 + 0xc) == -1) {
          if ((int)local_220 < local_220._4_4_) {
            uVar3 = *(undefined1 *)((long)ppppuVar28 + 6);
            uVar4 = *(undefined1 *)((long)ppppuVar28 + 7);
            iVar22 = *(int *)(ppppuVar28 + 1);
            if (local_210 != (undefined8 *******)0x0) {
              local_210 = (undefined8 *******)*local_210;
            }
            *(undefined2 *)((long)pppppppuVar6 + 0x14) = *(undefined2 *)((long)ppppuVar28 + 4);
            *pppppppuVar6 = (undefined8 ******)&DAT_04b15d18;
            *(undefined1 *)((long)pppppppuVar6 + 0x16) = uVar3;
            *(undefined1 *)((long)pppppppuVar6 + 0x17) = uVar4;
            pppppppuVar6[1] = param_1;
            *(undefined4 *)(pppppppuVar6 + 2) = 3;
            *(int *)(pppppppuVar6 + 3) = iVar22;
            *(undefined4 *)((long)pppppppuVar6 + 0x1c) = 0xffffffff;
            if ((int)local_220 < local_220._4_4_) {
              local_218[(int)local_220] = pppppppuVar6;
              local_220 = CONCAT44(local_220._4_4_,(int)local_220 + 1);
            }
          }
        }
      }
      else if (iVar22 == 0) goto LAB_03263f08;
      pppppuVar20 = pppppuVar20 + 1;
    } while (pppppuVar20 != pppppuVar19);
    if ((int)local_220 != 0) {
      lVar18 = (long)(int)local_220 << 3;
      puVar12 = local_218;
      do {
        (*(code *)**(undefined8 **)*puVar12)();
        lVar18 = lVar18 + -8;
        puVar12 = puVar12 + 1;
      } while (lVar18 != 0);
    }
  }
  lVar18 = *(long *)PTR_DAT_04bb39b0;
  pbVar16 = PTR_DAT_04bb32e0;
  if (lVar18 == 0) {
LAB_03264590:
    if (7 < *pbVar16) {
LAB_0326459c:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar18 = **(long **)PTR_DAT_04bb27d0;
        bVar17 = *(byte *)(lVar18 + 0x473);
        pbVar16 = PTR_DAT_04bb5038;
        if ((long)(char)bVar17 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar17 & 0xffffffffU) * 0x20;
          if (7 < bVar17) {
            puVar2 = (uint *)(lVar18 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar16 = (byte *)(lVar18 + 0x471);
          }
        }
        bVar17 = *pbVar16;
        bVar7 = bVar17 < 8;
        if (!bVar7) {
          bVar17 = 0xff;
        }
        local_228 = CONCAT11(local_228._1_1_,bVar17);
        if (bVar7) goto LAB_0326461c;
      }
      pbVar16 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar18 + 0x15c) != 0) {
      pbVar16 = (byte *)(lVar18 + 0x158);
    }
    if (7 < *pbVar16) {
      if ((*(int *)(lVar18 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar16 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_03264590;
      }
      goto LAB_0326459c;
    }
  }
  bVar17 = *pbVar16;
  if (7 < bVar17) {
    bVar17 = 0xff;
  }
  local_228 = CONCAT11(local_228._1_1_,bVar17);
LAB_0326461c:
  FUN_0267d190(&local_228);
  if (0 < *(int *)param_1) {
    lVar18 = 0;
    pppppuVar20 = param_1[2];
    do {
      pppppuVar19 = (undefined8 *****)param_1[1][lVar18];
      lVar18 = lVar18 + 1;
      *pppppuVar19 = pppppuVar20;
      param_1[2] = pppppuVar19;
      pppppuVar20 = pppppuVar19;
    } while (lVar18 < *(int *)param_1);
  }
  *(int *)param_1 = 0;
  __s = (void *)(*(code *)param_1[0x6985][3])(param_1 + 0x6985);
  memset(__s,0,0x468);
  return;
}


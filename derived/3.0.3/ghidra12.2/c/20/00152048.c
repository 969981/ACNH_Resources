
undefined8
FUN_00152048(long param_1,long *param_2,undefined8 *param_3,undefined1 *param_4,undefined1 *param_5)

{
  char *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long *plVar12;
  char *pcVar13;
  uint uVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  ulong local_a0;
  
  uVar4 = FUN_001526a4();
  *param_4 = 0;
  *param_5 = 0;
  uVar14 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar6 = FUN_00166920(param_1,param_2);
    uVar14 = uVar4 & 2;
    if ((uVar6 & 1) == 0) {
      uVar14 = uVar4;
    }
  }
  piVar7 = (int *)FUN_0014ea2c(param_2,*(undefined8 *)(param_1 + 0x1120));
  if (piVar7 == (int *)0x0) goto LAB_00152660;
  if (*piVar7 == 2) {
    uVar6 = 0;
    pcVar13 = "can multiplex";
  }
  else {
    if (*(long *)(param_1 + 0xd8) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(ulong *)(*(long *)(param_1 + 0xd8) + 0x168);
    }
    pcVar13 = "serially";
  }
  lVar9 = 0xd0;
  if ((*(uint *)((long)param_2 + 0x41c) & 4) != 0) {
    lVar9 = 0x100;
  }
  pcVar1 = "can pipeline";
  if (*piVar7 != 1) {
    pcVar1 = pcVar13;
  }
  FUN_0014d430(param_1,"Found bundle for host %s: %p [%s]\n",*(undefined8 *)((long)param_2 + lVar9),
               piVar7,pcVar1);
  if (uVar14 != 0) {
    iVar5 = *piVar7;
    if (iVar5 < 1) {
      if ((iVar5 == 0) && ((*(byte *)(param_1 + 0xf66) >> 1 & 1) != 0)) {
        FUN_0014d430(param_1,"Server doesn\'t support multi-use yet, wait\n");
        *param_5 = 1;
        goto LAB_00152660;
      }
      FUN_0014d430(param_1,"Server doesn\'t support multi-use (yet)\n");
      iVar5 = *piVar7;
      uVar14 = 0;
    }
    if (iVar5 == 1) {
      uVar8 = FUN_00148068(*(undefined8 *)(param_1 + 0xd8),1);
      if ((uVar8 & 1) != 0) {
        iVar5 = *piVar7;
        goto LAB_00152180;
      }
      pcVar13 = "Could pipeline, but not asked to!\n";
    }
    else {
LAB_00152180:
      if ((iVar5 != 2) ||
         (uVar8 = FUN_00148068(*(undefined8 *)(param_1 + 0xd8),2), (uVar8 & 1) != 0))
      goto LAB_001521b8;
      pcVar13 = "Could multiplex, but not asked to!\n";
    }
    FUN_0014d430(param_1,pcVar13);
    uVar14 = 0;
  }
LAB_001521b8:
  puVar15 = *(undefined8 **)(piVar7 + 4);
  if (puVar15 == (undefined8 *)0x0) {
LAB_00152660:
    FUN_0014e958(param_1);
    return 0;
  }
  bVar3 = false;
  plVar16 = (long *)0x0;
  local_a0 = uVar6;
LAB_001521f4:
  plVar17 = (long *)*puVar15;
  puVar15 = (undefined8 *)puVar15[2];
  if (-1 < *(int *)((long)plVar17 + 0x41c)) {
    uVar8 = FUN_00153008(plVar17,param_1);
    if ((uVar8 & 1) == 0) {
      uVar8 = plVar17[0xa0] + plVar17[0x9c];
      if (uVar14 == 0) {
        if (uVar8 == 0) {
          if ((char)plVar17[0x11] == '\0') {
            uVar8 = plVar17[0xc];
            pcVar13 = "Connection #%ld is still name resolving, can\'t reuse\n";
          }
          else {
            uVar4 = *(uint *)((long)plVar17 + 0x41c) & 1;
            if ((int)plVar17[0x4b] != -1) {
              if (uVar4 == 0) goto LAB_001522cc;
              uVar4 = 1;
            }
            uVar8 = plVar17[0xc];
            pcVar13 = "Connection #%ld isn\'t open enough, can\'t reuse\n";
            if (uVar4 == 0) {
              bVar3 = true;
            }
          }
          goto LAB_00152498;
        }
      }
      else if (((*(uint *)((long)plVar17 + 0x41c) ^ 0xffffffff) & 0x1001) != 0) {
        if ((*(uint *)((long)plVar17 + 0x41c) >> 0x1a & 1) == 0) {
          if ((long *)plVar17[0x99] == (long *)0x0) {
            plVar12 = (long *)plVar17[0x9d];
            if (plVar12 != (long *)0x0) {
LAB_001522b8:
              lVar9 = *plVar12;
              goto LAB_001522bc;
            }
          }
          else {
            lVar9 = *(long *)plVar17[0x99];
            plVar12 = (long *)plVar17[0x9d];
            if (plVar12 == (long *)0x0) {
LAB_001522bc:
              if (lVar9 == 0) goto LAB_001522cc;
            }
            else if (lVar9 == 0) goto LAB_001522b8;
            uVar10 = FUN_001526a4(lVar9,plVar17);
            if ((uVar10 & 1) == 0) goto LAB_0015249c;
          }
        }
LAB_001522cc:
        lVar9 = param_2[0x88];
        if (((*(uint *)(plVar17[0x88] + 0x84) ^ *(uint *)(lVar9 + 0x84)) & 1) == 0) {
LAB_00152300:
          uVar11 = *(uint *)((long)param_2 + 0x41c);
          uVar4 = *(uint *)((long)plVar17 + 0x41c) ^ uVar11;
          if ((uVar4 >> 5 & 1) == 0) {
            uVar2 = uVar11 >> 6 & 1;
            if (uVar2 == (*(uint *)((long)plVar17 + 0x41c) >> 6 & 1)) {
              if (uVar2 != 0) {
                uVar10 = FUN_00153264(param_2 + 0x22,plVar17 + 0x22);
                if ((uVar10 & 1) == 0) goto LAB_0015249c;
                uVar11 = *(uint *)((long)param_2 + 0x41c);
                uVar4 = *(uint *)((long)plVar17 + 0x41c) ^ uVar11;
              }
              if ((uVar4 & 0xc) == 0) {
                if ((uVar11 >> 5 & 1) == 0) {
LAB_0015234c:
                  if ((uVar14 != 0) || (*plVar17 == 0)) {
                    if ((plVar17[0x9c] + plVar17[0xa0] != 0) && (*plVar17 != 0)) {
                      if (*(long *)(*plVar17 + 0xd8) != *(long *)(*param_2 + 0xd8))
                      goto LAB_0015249c;
                    }
                    pcVar13 = (char *)param_2[0xcd];
                    if (((pcVar13 == (char *)0x0) && ((short)param_2[0xce] == 0)) ||
                       ((((short)plVar17[0xce] == (short)param_2[0xce] &&
                         (*(int *)((long)plVar17 + 0x674) == *(int *)((long)param_2 + 0x674))) &&
                        ((pcVar13 == (char *)0x0 ||
                         (((char *)plVar17[0xcd] != (char *)0x0 &&
                          (iVar5 = strcmp((char *)plVar17[0xcd],pcVar13), iVar5 == 0)))))))) {
                      puVar18 = (undefined8 *)param_2[0x88];
                      uVar4 = *(uint *)((long)puVar18 + 0x84);
                      if ((uVar4 >> 7 & 1) == 0) {
                        iVar5 = strcmp((char *)param_2[0x42],(char *)plVar17[0x42]);
                        if (iVar5 == 0) {
                          iVar5 = strcmp((char *)param_2[0x43],(char *)plVar17[0x43]);
                          if (iVar5 == 0) goto LAB_001523c0;
                        }
                      }
                      else {
LAB_001523c0:
                        if (((*(uint *)((long)param_2 + 0x41c) >> 5 & 1) != 0) &&
                           ((*(uint *)((long)param_2 + 0x41c) & 0x4000) == 0 && (uVar4 & 1) == 0))
                        goto LAB_00152460;
                        iVar5 = FUN_00144a90(*puVar18,*(undefined8 *)plVar17[0x88]);
                        if ((iVar5 != 0) ||
                           ((iVar5 = FUN_001530bc(*(undefined4 *)(plVar17[0x88] + 0x80)),
                            iVar5 == *(int *)(param_2[0x88] + 0x80) &&
                            ((*(byte *)((long)plVar17 + 0x68c) & 1) != 0)))) {
                          uVar4 = *(uint *)((long)param_2 + 0x41c);
                          if ((uVar4 >> 2 & 1) != 0) {
                            iVar5 = FUN_00144a90(param_2[0x20],plVar17[0x20]);
                            if (iVar5 == 0) goto LAB_0015249c;
                            uVar4 = *(uint *)((long)param_2 + 0x41c);
                          }
                          if ((uVar4 >> 3 & 1) != 0) {
                            if (*(int *)((long)param_2 + 0x19c) != *(int *)((long)plVar17 + 0x19c))
                            goto LAB_0015249c;
                          }
                          iVar5 = FUN_00144a90(param_2[0x1a],plVar17[0x1a]);
                          if (iVar5 != 0) {
                            if ((int)param_2[0x33] == (int)plVar17[0x33]) {
                              if ((*(byte *)(param_2[0x88] + 0x84) & 1) == 0) {
LAB_00152460:
                                if ((uVar14 == 0) || (uVar8 == 0)) goto LAB_001525f4;
                                if (uVar6 - 1 < uVar8) {
                                  pcVar13 = "Pipe is full, skip (%zu)\n";
                                }
                                else {
                                  if (((*(byte *)((long)plVar17 + 0x41f) >> 2 & 1) == 0) ||
                                     (uVar8 < *(uint *)(plVar17 + 0xc1))) {
                                    uVar10 = FUN_00166764(param_1,plVar17);
                                    if ((uVar10 & 1) != 0) {
                                      FUN_0014d430(param_1,"Penalized, skip\n");
                                      goto LAB_0015249c;
                                    }
                                    if (uVar6 == 0) {
                                      FUN_0014d430(param_1,"Multiplexed connection found!\n");
                                      goto LAB_001525f4;
                                    }
                                    if (uVar8 < local_a0) {
                                      plVar16 = plVar17;
                                      local_a0 = uVar8;
                                    }
                                    goto LAB_0015249c;
                                  }
                                  pcVar13 = "MAX_CONCURRENT_STREAMS reached, skip (%zu)\n";
                                }
LAB_00152498:
                                FUN_0014d430(param_1,pcVar13,uVar8);
                              }
                              else {
                                uVar10 = FUN_00143c88(param_2 + 0x5f,plVar17 + 0x5f);
                                if ((uVar10 & 1) != 0) {
                                  if ((int)plVar17[0x52] == 2) goto LAB_00152460;
                                  bVar3 = true;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  uVar10 = FUN_00153264(param_2 + 0x2a,plVar17 + 0x2a);
                  if (((uVar10 & 1) != 0) &&
                     (((*(uint *)((long)plVar17 + 0x41c) ^ *(uint *)((long)param_2 + 0x41c)) >> 0xe
                      & 1) == 0)) {
                    if ((int)param_2[0x2f] != 2) goto LAB_0015234c;
                    if ((*(byte *)(param_2[0x88] + 0x84) & 1) == 0) {
                      uVar10 = FUN_00143c88(param_2 + 0x5f,plVar17 + 0x5f);
                      if ((uVar10 & 1) != 0) {
                        iVar5 = (int)plVar17[0x52];
                        goto LAB_00152570;
                      }
                    }
                    else {
                      uVar10 = FUN_00143c88(param_2 + 0x71,plVar17 + 0x71);
                      if ((uVar10 & 1) != 0) {
                        iVar5 = (int)plVar17[0x58];
LAB_00152570:
                        if (iVar5 == 2) goto LAB_0015234c;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          iVar5 = FUN_001530bc(*(undefined4 *)(plVar17[0x88] + 0x80));
          if (iVar5 == *(int *)(lVar9 + 0x80)) {
            if ((*(byte *)((long)plVar17 + 0x68c) & 1) != 0) goto LAB_00152300;
          }
        }
      }
    }
    else {
      FUN_0014f784(param_1,plVar17,1);
    }
  }
LAB_0015249c:
  if (puVar15 == (undefined8 *)0x0) {
    plVar17 = plVar16;
    if (plVar16 == (long *)0x0) {
      FUN_0014e958(param_1);
      if (!bVar3) {
        return 0;
      }
      if ((*(byte *)(param_1 + 0xf66) >> 1 & 1) == 0) {
        return 0;
      }
      FUN_0014d430(param_1,"Found pending candidate for reuse and CURLOPT_PIPEWAIT is set\n");
      *param_5 = 1;
      return 0;
    }
LAB_001525f4:
    *plVar17 = param_1;
    FUN_0014e958(param_1);
    *param_3 = plVar17;
    return 1;
  }
  goto LAB_001521f4;
}


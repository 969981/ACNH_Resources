
void FUN_03b63f90(float param_1,long param_2,int param_3,float *param_4)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  undefined2 uVar6;
  char cVar7;
  bool bVar8;
  long *plVar9;
  ulong uVar10;
  VoiceType *pVVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 *local_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_68;
  int local_64;
  
  local_64 = param_3;
  if (param_3 - 2U < 2) {
    fVar22 = *param_4;
    if (fVar22 <= 0.0) goto LAB_03b64158;
    uVar6 = *(undefined2 *)(param_2 + 0x118);
    local_68 = 1;
    local_b8 = 0;
    local_b4 = 0x3f800000;
    fVar4 = param_4[1];
    fVar5 = param_4[2];
    lVar18 = *(long *)(*(long *)PTR_DAT_04bd1e70 + 0x188);
    piVar1 = (int *)(lVar18 + 0x40);
    if (*piVar1 == 0) {
      local_a0 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (uint *)(lVar18 + 0x38);
      do {
        while( true ) {
          uVar20 = *puVar2;
          if (*puVar2 == uVar20) break;
          ClearExclusiveLocal();
        }
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar8) {
          *puVar2 = (uint)*(ushort *)(*(long *)(lVar18 + 0x30) + (ulong)uVar20 * 2);
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      piVar3 = (int *)(lVar18 + 0x10);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar8) {
          *piVar3 = *piVar3 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      local_a0 = (undefined8 *)(*(long *)(lVar18 + 0x18) + ((ulong)uVar20 & 0xffff) * 0x40);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = *piVar1 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      *(undefined2 *)(local_a0 + 1) = uVar6;
      *(int *)((long)local_a0 + 0xc) = param_3;
      *(undefined4 *)(local_a0 + 2) = 0;
      local_a0[3] = 0;
      *(undefined4 *)(local_a0 + 4) = 0;
      local_a0[5] = 0;
      *local_a0 = &PTR_LAB_04b77270;
    }
    local_b0 = CONCAT44(fVar4,fVar22);
    uStack_a8 = CONCAT44(uStack_a8._4_4_,fVar5);
    FUN_03b64d40(param_2 + 0x98,&local_b4,&local_b8,&local_b0,*(undefined2 *)(param_2 + 0x118),
                 &local_68);
  }
  else {
    if (param_3 != 1) {
LAB_03b64158:
      FUN_03b65290(param_2);
      return;
    }
    if ((((*(uint *)(param_2 + 0x74) | 2) != 3) && (*(char *)(param_2 + 0x7a) != '\0')) &&
       (0 < *(int *)(param_2 + 0xf8))) {
      lVar18 = 0;
      if (*(long *)(param_2 + 0xf0) != 0) {
        lVar18 = *(long *)(param_2 + 0xf0) - (long)*(int *)(param_2 + 0xfc);
      }
      uVar10 = nn::audio::IsVoiceValid((VoiceType *)(lVar18 + 0x80));
      if ((uVar10 & 1) != 0) {
        lVar18 = *(long *)(param_2 + 0x108);
        if ((lVar18 == 0) || (*(char *)(lVar18 + 0xb8) != '\0')) {
          bVar8 = false;
        }
        else {
          uVar20 = *(uint *)(lVar18 + 0x10);
          if (0 < (int)uVar20) {
            uVar21 = 0;
            uVar12 = 1;
            do {
              if (uVar21 < uVar20) {
                lVar17 = lVar18;
                if (6 < uVar21) {
                  uVar20 = uVar12 & 0xfffffff8;
                  do {
                    uVar20 = uVar20 - 8;
                    lVar17 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*
                                                  (long *)(lVar17 + 8) + 8) + 8) + 8) + 8) + 8) + 8)
                                      + 8);
                  } while (uVar20 != 0);
                }
                if ((uVar21 + 1 & 7) != 0) {
                  uVar20 = uVar12 & 7;
                  do {
                    lVar17 = *(long *)(lVar17 + 8);
                    uVar20 = uVar20 - 1;
                  } while (uVar20 != 0);
                }
              }
              else {
                lVar17 = 0;
              }
              lVar14 = 0;
              if (lVar17 != 0) {
                lVar14 = lVar17 - *(int *)(lVar18 + 0x14);
              }
              if (*(char *)(lVar14 + 0xb2) != '\0') {
                bVar8 = true;
                goto LAB_03b64218;
              }
              uVar20 = *(uint *)(lVar18 + 0x10);
              uVar21 = uVar21 + 1;
              uVar12 = uVar12 + 1;
            } while ((int)uVar21 < (int)uVar20);
          }
          bVar8 = false;
          *(undefined1 *)(lVar18 + 0xb8) = 1;
        }
LAB_03b64218:
        lVar18 = *(long *)(param_2 + 0x100);
        if (*(short *)(lVar18 + 0x30) != 0) {
          lVar17 = param_2 + 0xe8;
          if (param_1 <= 0.0) {
            if (!bVar8) {
              uVar20 = 0;
              uVar21 = 1;
              do {
                uVar16 = uVar21 & 7;
                uVar19 = uVar21 & 0xfffffff8;
                uVar12 = uVar20 + 1;
                if ((int)uVar20 < (int)*(uint *)(param_2 + 0xf8)) {
                  if (uVar20 < *(uint *)(param_2 + 0xf8)) {
                    lVar14 = lVar17;
                    if (6 < uVar20) {
                      uVar13 = uVar19;
                      do {
                        uVar13 = uVar13 - 8;
                        lVar14 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long 
                                                  *)(*(long *)(lVar14 + 8) + 8) + 8) + 8) + 8) + 8)
                                                  + 8) + 8);
                      } while (uVar13 != 0);
                    }
                    if ((uVar12 & 7) != 0) {
                      uVar13 = uVar16;
                      do {
                        lVar14 = *(long *)(lVar14 + 8);
                        uVar13 = uVar13 - 1;
                      } while (uVar13 != 0);
                    }
                  }
                  else {
                    lVar14 = 0;
                  }
                  lVar18 = 0;
                  if (lVar14 != 0) {
                    lVar18 = lVar14 - *(int *)(param_2 + 0xfc);
                  }
                }
                else {
                  lVar18 = 0;
                }
                uVar10 = FUN_03b6c740(lVar18 + 0x90,&local_b0);
                if ((uVar10 & 1) != 0) {
                  if ((int)uVar20 < (int)*(uint *)(param_2 + 0xf8)) {
                    if (uVar20 < *(uint *)(param_2 + 0xf8)) {
                      lVar18 = lVar17;
                      if (6 < uVar20) {
                        uVar13 = uVar19;
                        do {
                          uVar13 = uVar13 - 8;
                          lVar18 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(
                                                  long *)(*(long *)(lVar18 + 8) + 8) + 8) + 8) + 8)
                                                  + 8) + 8) + 8);
                        } while (uVar13 != 0);
                      }
                      if ((uVar12 & 7) != 0) {
                        uVar13 = uVar16;
                        do {
                          lVar18 = *(long *)(lVar18 + 8);
                          uVar13 = uVar13 - 1;
                        } while (uVar13 != 0);
                      }
                    }
                    else {
                      lVar18 = 0;
                    }
                    lVar14 = 0;
                    if (lVar18 != 0) {
                      lVar14 = lVar18 - *(int *)(param_2 + 0xfc);
                    }
                    pVVar11 = (VoiceType *)(lVar14 + 0x80);
                  }
                  else {
                    pVVar11 = (VoiceType *)0x0;
                  }
                  nn::audio::AppendWaveBuffer(pVVar11,(WaveBuffer *)&local_b0);
                }
                if ((int)uVar20 < (int)*(uint *)(param_2 + 0xf8)) {
                  if (uVar20 < *(uint *)(param_2 + 0xf8)) {
                    lVar14 = lVar17;
                    if (6 < uVar20) {
                      uVar13 = uVar19;
                      do {
                        uVar13 = uVar13 - 8;
                        lVar14 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long 
                                                  *)(*(long *)(lVar14 + 8) + 8) + 8) + 8) + 8) + 8)
                                                  + 8) + 8);
                      } while (uVar13 != 0);
                    }
                    if ((uVar12 & 7) != 0) {
                      uVar13 = uVar16;
                      do {
                        lVar14 = *(long *)(lVar14 + 8);
                        uVar13 = uVar13 - 1;
                      } while (uVar13 != 0);
                    }
                  }
                  else {
                    lVar14 = 0;
                  }
                  lVar18 = 0;
                  if (lVar14 != 0) {
                    lVar18 = lVar14 - *(int *)(param_2 + 0xfc);
                  }
                }
                else {
                  lVar18 = 0;
                }
                uVar10 = FUN_03b6c740(lVar18 + 0x90,&local_b0);
                if ((uVar10 & 1) != 0) {
                  if ((int)uVar20 < (int)*(uint *)(param_2 + 0xf8)) {
                    if (uVar20 < *(uint *)(param_2 + 0xf8)) {
                      lVar18 = lVar17;
                      if (6 < uVar20) {
                        uVar13 = uVar19;
                        do {
                          uVar13 = uVar13 - 8;
                          lVar18 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(
                                                  long *)(*(long *)(lVar18 + 8) + 8) + 8) + 8) + 8)
                                                  + 8) + 8) + 8);
                        } while (uVar13 != 0);
                      }
                      if ((uVar12 & 7) != 0) {
                        uVar13 = uVar16;
                        do {
                          lVar18 = *(long *)(lVar18 + 8);
                          uVar13 = uVar13 - 1;
                        } while (uVar13 != 0);
                      }
                    }
                    else {
                      lVar18 = 0;
                    }
                    lVar14 = 0;
                    if (lVar18 != 0) {
                      lVar14 = lVar18 - *(int *)(param_2 + 0xfc);
                    }
                    pVVar11 = (VoiceType *)(lVar14 + 0x80);
                  }
                  else {
                    pVVar11 = (VoiceType *)0x0;
                  }
                  nn::audio::AppendWaveBuffer(pVVar11,(WaveBuffer *)&local_b0);
                }
                if ((int)uVar20 < (int)*(uint *)(param_2 + 0xf8)) {
                  if (uVar20 < *(uint *)(param_2 + 0xf8)) {
                    lVar14 = lVar17;
                    if (6 < uVar20) {
                      uVar13 = uVar19;
                      do {
                        uVar13 = uVar13 - 8;
                        lVar14 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long 
                                                  *)(*(long *)(lVar14 + 8) + 8) + 8) + 8) + 8) + 8)
                                                  + 8) + 8);
                      } while (uVar13 != 0);
                    }
                    if ((uVar12 & 7) != 0) {
                      uVar13 = uVar16;
                      do {
                        lVar14 = *(long *)(lVar14 + 8);
                        uVar13 = uVar13 - 1;
                      } while (uVar13 != 0);
                    }
                  }
                  else {
                    lVar14 = 0;
                  }
                  lVar18 = 0;
                  if (lVar14 != 0) {
                    lVar18 = lVar14 - *(int *)(param_2 + 0xfc);
                  }
                }
                else {
                  lVar18 = 0;
                }
                uVar10 = FUN_03b6c740(lVar18 + 0x90,&local_b0);
                if ((uVar10 & 1) != 0) {
                  if ((int)uVar20 < (int)*(uint *)(param_2 + 0xf8)) {
                    if (uVar20 < *(uint *)(param_2 + 0xf8)) {
                      lVar18 = lVar17;
                      if (6 < uVar20) {
                        uVar13 = uVar19;
                        do {
                          uVar13 = uVar13 - 8;
                          lVar18 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(
                                                  long *)(*(long *)(lVar18 + 8) + 8) + 8) + 8) + 8)
                                                  + 8) + 8) + 8);
                        } while (uVar13 != 0);
                      }
                      if ((uVar12 & 7) != 0) {
                        uVar13 = uVar16;
                        do {
                          lVar18 = *(long *)(lVar18 + 8);
                          uVar13 = uVar13 - 1;
                        } while (uVar13 != 0);
                      }
                    }
                    else {
                      lVar18 = 0;
                    }
                    lVar14 = 0;
                    if (lVar18 != 0) {
                      lVar14 = lVar18 - *(int *)(param_2 + 0xfc);
                    }
                    pVVar11 = (VoiceType *)(lVar14 + 0x80);
                  }
                  else {
                    pVVar11 = (VoiceType *)0x0;
                  }
                  nn::audio::AppendWaveBuffer(pVVar11,(WaveBuffer *)&local_b0);
                }
                if ((int)uVar20 < (int)*(uint *)(param_2 + 0xf8)) {
                  if (uVar20 < *(uint *)(param_2 + 0xf8)) {
                    lVar14 = lVar17;
                    if (6 < uVar20) {
                      uVar13 = uVar19;
                      do {
                        uVar13 = uVar13 - 8;
                        lVar14 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long 
                                                  *)(*(long *)(lVar14 + 8) + 8) + 8) + 8) + 8) + 8)
                                                  + 8) + 8);
                      } while (uVar13 != 0);
                    }
                    if ((uVar12 & 7) != 0) {
                      uVar13 = uVar16;
                      do {
                        lVar14 = *(long *)(lVar14 + 8);
                        uVar13 = uVar13 - 1;
                      } while (uVar13 != 0);
                    }
                  }
                  else {
                    lVar14 = 0;
                  }
                  lVar18 = 0;
                  if (lVar14 != 0) {
                    lVar18 = lVar14 - *(int *)(param_2 + 0xfc);
                  }
                }
                else {
                  lVar18 = 0;
                }
                uVar10 = FUN_03b6c740(lVar18 + 0x90,&local_b0);
                if ((uVar10 & 1) != 0) {
                  if ((int)uVar20 < (int)*(uint *)(param_2 + 0xf8)) {
                    if (uVar20 < *(uint *)(param_2 + 0xf8)) {
                      lVar18 = lVar17;
                      if (6 < uVar20) {
                        do {
                          uVar19 = uVar19 - 8;
                          lVar18 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(
                                                  long *)(*(long *)(lVar18 + 8) + 8) + 8) + 8) + 8)
                                                  + 8) + 8) + 8);
                        } while (uVar19 != 0);
                      }
                      uVar12 = uVar12 & 7;
                      while (uVar12 != 0) {
                        lVar18 = *(long *)(lVar18 + 8);
                        uVar16 = uVar16 - 1;
                        uVar12 = uVar16;
                      }
                    }
                    else {
                      lVar18 = 0;
                    }
                    lVar14 = 0;
                    if (lVar18 != 0) {
                      lVar14 = lVar18 - *(int *)(param_2 + 0xfc);
                    }
                    pVVar11 = (VoiceType *)(lVar14 + 0x80);
                  }
                  else {
                    pVVar11 = (VoiceType *)0x0;
                  }
                  nn::audio::AppendWaveBuffer(pVVar11,(WaveBuffer *)&local_b0);
                }
                uVar20 = uVar20 + 1;
                uVar21 = uVar21 + 1;
              } while (uVar20 < *(ushort *)(*(long *)(param_2 + 0x100) + 0x30));
            }
          }
          else {
            uVar20 = 0;
            uVar12 = 1;
            uVar21 = 1;
            do {
              if (((*(char *)(lVar18 + 8) == '\0') || (*(int **)(lVar18 + 0x10) == (int *)0x0)) ||
                 (**(int **)(lVar18 + 0x10) != 0x56415742 || *(ushort *)(lVar18 + 0x30) <= uVar20))
              {
                iVar15 = 0;
              }
              else {
                lVar18 = *(long *)(lVar18 + 0x18);
                if (uVar20 != 0) {
                  if (3 < uVar20) {
                    uVar16 = uVar20 & 0xfffffffc;
                    do {
                      uVar16 = uVar16 - 4;
                      lVar18 = lVar18 + (ulong)*(ushort *)(lVar18 + 0x38) * 0xc;
                      lVar18 = lVar18 + (ulong)*(ushort *)(lVar18 + 0x78) * 0xc;
                      lVar18 = lVar18 + 0x40 + (ulong)*(ushort *)(lVar18 + 0xb8) * 0xc;
                      lVar18 = lVar18 + (ulong)*(ushort *)(lVar18 + 0xb8) * 0xc + 0xc0;
                    } while (uVar16 != 0);
                  }
                  if ((uVar20 & 3) != 0) {
                    uVar16 = uVar20 & 3;
                    do {
                      uVar16 = uVar16 - 1;
                      lVar18 = lVar18 + (ulong)*(ushort *)(lVar18 + 0x38) * 0xc + 0x40;
                    } while (uVar16 != 0);
                  }
                }
                iVar15 = *(int *)(lVar18 + 4);
              }
              uVar12 = uVar12 & 7;
              pVVar11 = (VoiceType *)0x0;
              uVar19 = uVar21 & 0xfffffff8;
              uVar16 = uVar20 + 1;
              local_98 = 0x100;
              local_90 = 0;
              uStack_88 = 0;
              fVar22 = (float)iVar15 * param_1;
              uVar13 = 0;
              if (fVar22 != (float)(int)fVar22) {
                uVar13 = (uint)(0.0 <= fVar22);
              }
              local_b0 = *(undefined8 *)(*(long *)(DAT_05aebb88 + 0x1a0) + 0x80);
              local_a0 = (undefined8 *)((ulong)(uVar13 + (int)fVar22) << 0x20);
              uStack_a8 = 0x780;
              if ((int)uVar20 < (int)*(uint *)(param_2 + 0xf8)) {
                if (uVar20 < *(uint *)(param_2 + 0xf8)) {
                  lVar18 = lVar17;
                  if (6 < uVar20) {
                    uVar13 = uVar19;
                    do {
                      uVar13 = uVar13 - 8;
                      lVar18 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)
                                                  (*(long *)(lVar18 + 8) + 8) + 8) + 8) + 8) + 8) +
                                                  8) + 8);
                    } while (uVar13 != 0);
                  }
                  if ((uVar16 & 7) != 0) {
                    uVar13 = uVar12;
                    do {
                      lVar18 = *(long *)(lVar18 + 8);
                      uVar13 = uVar13 - 1;
                    } while (uVar13 != 0);
                  }
                }
                else {
                  lVar18 = 0;
                }
                lVar14 = 0;
                if (lVar18 != 0) {
                  lVar14 = lVar18 - *(int *)(param_2 + 0xfc);
                }
                pVVar11 = (VoiceType *)(lVar14 + 0x80);
              }
              nn::audio::AppendWaveBuffer(pVVar11,(WaveBuffer *)&local_b0);
              if (!bVar8) {
                if ((int)uVar20 < (int)*(uint *)(param_2 + 0xf8)) {
                  if (uVar20 < *(uint *)(param_2 + 0xf8)) {
                    lVar14 = lVar17;
                    if (6 < uVar20) {
                      uVar13 = uVar19;
                      do {
                        uVar13 = uVar13 - 8;
                        lVar14 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long 
                                                  *)(*(long *)(lVar14 + 8) + 8) + 8) + 8) + 8) + 8)
                                                  + 8) + 8);
                      } while (uVar13 != 0);
                    }
                    if ((uVar16 & 7) != 0) {
                      uVar13 = uVar12;
                      do {
                        lVar14 = *(long *)(lVar14 + 8);
                        uVar13 = uVar13 - 1;
                      } while (uVar13 != 0);
                    }
                  }
                  else {
                    lVar14 = 0;
                  }
                  lVar18 = 0;
                  if (lVar14 != 0) {
                    lVar18 = lVar14 - *(int *)(param_2 + 0xfc);
                  }
                }
                else {
                  lVar18 = 0;
                }
                uVar10 = FUN_03b6c740(lVar18 + 0x90,&local_b0);
                if ((uVar10 & 1) != 0) {
                  if ((int)uVar20 < (int)*(uint *)(param_2 + 0xf8)) {
                    if (uVar20 < *(uint *)(param_2 + 0xf8)) {
                      lVar18 = lVar17;
                      if (6 < uVar20) {
                        uVar13 = uVar19;
                        do {
                          uVar13 = uVar13 - 8;
                          lVar18 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(
                                                  long *)(*(long *)(lVar18 + 8) + 8) + 8) + 8) + 8)
                                                  + 8) + 8) + 8);
                        } while (uVar13 != 0);
                      }
                      if ((uVar16 & 7) != 0) {
                        uVar13 = uVar12;
                        do {
                          lVar18 = *(long *)(lVar18 + 8);
                          uVar13 = uVar13 - 1;
                        } while (uVar13 != 0);
                      }
                    }
                    else {
                      lVar18 = 0;
                    }
                    lVar14 = 0;
                    if (lVar18 != 0) {
                      lVar14 = lVar18 - *(int *)(param_2 + 0xfc);
                    }
                    pVVar11 = (VoiceType *)(lVar14 + 0x80);
                  }
                  else {
                    pVVar11 = (VoiceType *)0x0;
                  }
                  nn::audio::AppendWaveBuffer(pVVar11,(WaveBuffer *)&local_b0);
                }
                if ((int)uVar20 < (int)*(uint *)(param_2 + 0xf8)) {
                  if (uVar20 < *(uint *)(param_2 + 0xf8)) {
                    lVar14 = lVar17;
                    if (6 < uVar20) {
                      uVar13 = uVar19;
                      do {
                        uVar13 = uVar13 - 8;
                        lVar14 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long 
                                                  *)(*(long *)(lVar14 + 8) + 8) + 8) + 8) + 8) + 8)
                                                  + 8) + 8);
                      } while (uVar13 != 0);
                    }
                    if ((uVar16 & 7) != 0) {
                      uVar13 = uVar12;
                      do {
                        lVar14 = *(long *)(lVar14 + 8);
                        uVar13 = uVar13 - 1;
                      } while (uVar13 != 0);
                    }
                  }
                  else {
                    lVar14 = 0;
                  }
                  lVar18 = 0;
                  if (lVar14 != 0) {
                    lVar18 = lVar14 - *(int *)(param_2 + 0xfc);
                  }
                }
                else {
                  lVar18 = 0;
                }
                uVar10 = FUN_03b6c740(lVar18 + 0x90,&local_b0);
                if ((uVar10 & 1) != 0) {
                  if ((int)uVar20 < (int)*(uint *)(param_2 + 0xf8)) {
                    if (uVar20 < *(uint *)(param_2 + 0xf8)) {
                      lVar18 = lVar17;
                      if (6 < uVar20) {
                        uVar13 = uVar19;
                        do {
                          uVar13 = uVar13 - 8;
                          lVar18 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(
                                                  long *)(*(long *)(lVar18 + 8) + 8) + 8) + 8) + 8)
                                                  + 8) + 8) + 8);
                        } while (uVar13 != 0);
                      }
                      if ((uVar16 & 7) != 0) {
                        uVar13 = uVar12;
                        do {
                          lVar18 = *(long *)(lVar18 + 8);
                          uVar13 = uVar13 - 1;
                        } while (uVar13 != 0);
                      }
                    }
                    else {
                      lVar18 = 0;
                    }
                    lVar14 = 0;
                    if (lVar18 != 0) {
                      lVar14 = lVar18 - *(int *)(param_2 + 0xfc);
                    }
                    pVVar11 = (VoiceType *)(lVar14 + 0x80);
                  }
                  else {
                    pVVar11 = (VoiceType *)0x0;
                  }
                  nn::audio::AppendWaveBuffer(pVVar11,(WaveBuffer *)&local_b0);
                }
                if ((int)uVar20 < (int)*(uint *)(param_2 + 0xf8)) {
                  if (uVar20 < *(uint *)(param_2 + 0xf8)) {
                    lVar14 = lVar17;
                    if (6 < uVar20) {
                      uVar13 = uVar19;
                      do {
                        uVar13 = uVar13 - 8;
                        lVar14 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long 
                                                  *)(*(long *)(lVar14 + 8) + 8) + 8) + 8) + 8) + 8)
                                                  + 8) + 8);
                      } while (uVar13 != 0);
                    }
                    if ((uVar16 & 7) != 0) {
                      uVar13 = uVar12;
                      do {
                        lVar14 = *(long *)(lVar14 + 8);
                        uVar13 = uVar13 - 1;
                      } while (uVar13 != 0);
                    }
                  }
                  else {
                    lVar14 = 0;
                  }
                  lVar18 = 0;
                  if (lVar14 != 0) {
                    lVar18 = lVar14 - *(int *)(param_2 + 0xfc);
                  }
                }
                else {
                  lVar18 = 0;
                }
                uVar10 = FUN_03b6c740(lVar18 + 0x90,&local_b0);
                if ((uVar10 & 1) != 0) {
                  if ((int)uVar20 < (int)*(uint *)(param_2 + 0xf8)) {
                    if (uVar20 < *(uint *)(param_2 + 0xf8)) {
                      lVar18 = lVar17;
                      if (6 < uVar20) {
                        do {
                          uVar19 = uVar19 - 8;
                          lVar18 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(
                                                  long *)(*(long *)(lVar18 + 8) + 8) + 8) + 8) + 8)
                                                  + 8) + 8) + 8);
                        } while (uVar19 != 0);
                      }
                      if ((uVar16 & 7) != 0) {
                        uVar16 = uVar12;
                        do {
                          lVar18 = *(long *)(lVar18 + 8);
                          uVar16 = uVar16 - 1;
                        } while (uVar16 != 0);
                      }
                    }
                    else {
                      lVar18 = 0;
                    }
                    lVar14 = 0;
                    if (lVar18 != 0) {
                      lVar14 = lVar18 - *(int *)(param_2 + 0xfc);
                    }
                    pVVar11 = (VoiceType *)(lVar14 + 0x80);
                  }
                  else {
                    pVVar11 = (VoiceType *)0x0;
                  }
                  nn::audio::AppendWaveBuffer(pVVar11,(WaveBuffer *)&local_b0);
                }
              }
              lVar18 = *(long *)(param_2 + 0x100);
              uVar20 = uVar20 + 1;
              uVar21 = uVar21 + 1;
              uVar12 = uVar12 + 1;
            } while (uVar20 < *(ushort *)(lVar18 + 0x30));
          }
        }
      }
    }
    iVar15 = 1;
    if (0.0 < *param_4) {
      local_b0 = CONCAT44(local_b0._4_4_,1);
      uVar6 = *(undefined2 *)(param_2 + 0x118);
      local_68 = 0;
      *(undefined4 *)(param_2 + 0xa0) = 0;
      *(undefined4 *)(param_2 + 0xa4) = 0;
      plVar9 = *(long **)(param_2 + 0xa8);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x10))();
        *(long *)(param_2 + 0xa8) = 0;
      }
      FUN_03b66dc4(&local_68,uVar6,&local_b0);
      local_68 = 0;
      local_b4 = 0x3f800000;
      FUN_03b64d40(param_2 + (long)(int)local_b0 * 0x18 + 0x80,&local_68,&local_b4,param_4,
                   *(undefined2 *)(param_2 + 0x118),&local_b0);
      iVar15 = local_64;
    }
    FUN_03b65290(param_2,iVar15);
  }
  return;
}


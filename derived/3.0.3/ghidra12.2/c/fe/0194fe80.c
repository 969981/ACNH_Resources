
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff8c : 0x019504dc */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong FUN_0194fe80(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  ushort *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  uint uVar8;
  ushort uVar9;
  short sVar10;
  ushort uVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  code *pcVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  uint *puVar20;
  ulong uVar21;
  int *piVar22;
  char cVar23;
  uint uVar24;
  uint *puVar25;
  uint local_184;
  int local_180;
  int local_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined2 local_74;
  char local_72;
  undefined4 local_70;
  undefined4 local_6c;
  
  uVar14 = FUN_01950840();
  puVar2 = PTR_DAT_04bb30a0;
  if ((int)uVar14 != 0xfffe) {
    return uVar14;
  }
  sVar10 = *(short *)PTR_DAT_04bb6298;
  if (sVar10 != -1) {
    local_178 = CONCAT44(local_178._4_4_,0x20);
    puVar4 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar10 * 8;
    if (0xff < (uint)(int)sVar10) {
      puVar4 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar4 + 4) & 1) != 0) {
      lVar15 = FUN_00a8c18c(*(undefined8 *)PTR_DAT_04bb30a0);
      goto LAB_0194ff2c;
    }
  }
  lVar15 = *(long *)PTR_DAT_04bb32e8 + 0x4060;
LAB_0194ff2c:
  local_17c = *(byte *)(lVar15 + 2) - 1;
  uVar13 = *(uint *)(lVar15 + 4);
  if ((uVar13 & 0xfc) == 4) {
    local_180 = 1;
  }
  else {
    uVar24 = uVar13 & 0xff;
    if ((uVar13 & 0xf8) == 8) {
      local_180 = 2;
    }
    else if (uVar24 == 0x10) {
      local_180 = 3;
    }
    else if (uVar24 - 0x11 < 2) {
      local_180 = 4;
    }
    else {
      local_180 = 5;
      if (3 < uVar24 - 0x13) {
        local_180 = 0;
      }
    }
  }
  local_184 = 0;
  if ((*(long *)puVar2 != 0) && (local_184 = *(uint *)(*(long *)puVar2 + 0x65204), 1 < local_184)) {
    local_184 = 0;
  }
  lVar15 = FUN_01950d30(param_1,&local_184);
  local_88 = 0;
  uStack_80 = 0;
  uVar14 = 0;
  uVar13 = 0;
  local_98 = 0;
  uStack_90 = 0;
  plVar1 = (long *)(param_1 + 0x170);
  local_100 = 0;
  local_118 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_110 = 0;
  uStack_108 = 0;
  puVar2 = PTR_DAT_04bbfc80 + 0x10;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_178 = 0;
  uStack_170 = 0;
  do {
    if ((int)*(uint *)(lVar15 + 0x1c0) < 1) {
      lVar18 = *(long *)(lVar15 + 0xb0);
      if (lVar18 == 0) break;
      uVar21 = 0;
      if (*(uint **)(lVar18 + 8) != (uint *)0x0) {
        uVar21 = (ulong)**(uint **)(lVar18 + 8);
      }
      if (uVar21 <= uVar14) break;
      if ((((lVar18 != 0) && (puVar25 = *(uint **)(lVar18 + 8), puVar25 != (uint *)0x0)) &&
          ((*(uint *)(lVar15 + 200) <= uVar14 ||
           (*(char *)(*(long *)(lVar15 + 0xd0) + uVar14) != '\0')))) &&
         (((uVar14 < *puVar25 && (puVar25[1] != 0)) && ((ushort)puVar25[2] != 0)))) {
        iVar12 = 0xc;
        if (*(char *)((long)puVar25 + 10) != '\0') {
          iVar12 = 0x1c;
        }
        puVar25 = (uint *)((ulong)(puVar25[1] * (uint)uVar14 + (uint)(ushort)puVar25[2] * 8 + iVar12
                                  ) + (long)puVar25);
        goto joined_r0x019502dc;
      }
    }
    else {
      if (*(uint *)(lVar15 + 0x1c0) <= uVar14) break;
      uVar21 = uVar14 & 0xffffffff;
      if (*(uint *)(lVar15 + 0x1b0) <= uVar14) {
        uVar21 = 0;
      }
      puVar25 = *(uint **)(*(long *)(lVar15 + 0x1b8) + uVar21 * 8);
joined_r0x019502dc:
      if (puVar25 != (uint *)0x0) {
        uVar24 = *puVar25;
        if (uVar24 != 0) {
          cVar23 = DAT_052cba40;
          do {
            if (cVar23 == '\0') {
              cVar23 = '\x01';
              DAT_052cba40 = '\x01';
              memset(&DAT_052cba44,0xff,300);
              uVar24 = *puVar25;
            }
            else if (DAT_052cba44 != 0xffffffff) break;
            if (((ulong)uVar24 == 0) || (lVar18 = (long)puVar25 - (ulong)uVar24, lVar18 == 0))
            break;
            lVar5 = 0xc;
            if (*(char *)(lVar18 + 10) != '\0') {
              lVar5 = 0x1c;
            }
            if (lVar5 + lVar18 == 0) break;
            uVar21 = (ulong)*(ushort *)(lVar18 + 8);
            DAT_052cba44 = 0xfffffffe;
            if (uVar21 == 0) break;
            puVar20 = (uint *)(lVar5 + lVar18 + 4);
            while (puVar20[-1] != 0x20cb67bc) {
              puVar20 = puVar20 + 2;
              uVar21 = uVar21 - 1;
              if (uVar21 == 0) goto LAB_01950150;
            }
            DAT_052cba44 = 0;
            if (*puVar20 != 0xffffffff) {
              DAT_052cba44 = *puVar20;
            }
            uVar24 = *puVar25;
            if (uVar24 == 0) break;
          } while( true );
        }
LAB_01950150:
        uVar24 = local_180 + local_17c * 6;
        plVar6 = plVar1 + (ulong)uVar24 * 2;
        if (0x47 < uVar24) {
          plVar6 = plVar1;
        }
        pcVar16 = (code *)*plVar6;
        if ((plVar6[1] & 1U) != 0) {
          pcVar16 = *(code **)(pcVar16 + *(long *)((long)puVar25 + (plVar6[1] >> 1)));
        }
        uVar11 = (*pcVar16)();
        if (uVar11 != 0) {
          uVar24 = *puVar25;
          if (uVar24 != 0) {
            cVar23 = DAT_052cba40;
            do {
              if (cVar23 == '\0') {
                cVar23 = '\x01';
                DAT_052cba40 = '\x01';
                memset(&DAT_052cba44,0xff,300);
                uVar24 = *puVar25;
              }
              else {
                if (-1 < (int)DAT_052cba44) {
                  if ((ushort *)((ulong)DAT_052cba44 + (long)puVar25) != (ushort *)0x0) {
                    uVar9 = *(ushort *)((ulong)DAT_052cba44 + (long)puVar25);
                    uVar24 = (uint)uVar9;
                    if (uVar9 != 0xfffe) goto LAB_01950304;
                    goto LAB_01950540;
                  }
                  break;
                }
                if (DAT_052cba44 != 0xffffffff) break;
              }
              if (((ulong)uVar24 == 0) || (lVar18 = (long)puVar25 - (ulong)uVar24, lVar18 == 0))
              break;
              lVar5 = 0xc;
              if (*(char *)(lVar18 + 10) != '\0') {
                lVar5 = 0x1c;
              }
              if (lVar5 + lVar18 == 0) break;
              uVar21 = (ulong)*(ushort *)(lVar18 + 8);
              DAT_052cba44 = 0xfffffffe;
              if (uVar21 == 0) break;
              puVar20 = (uint *)(lVar5 + lVar18 + 4);
              while (puVar20[-1] != 0x20cb67bc) {
                puVar20 = puVar20 + 2;
                uVar21 = uVar21 - 1;
                if (uVar21 == 0) goto LAB_01950300;
              }
              DAT_052cba44 = 0;
              if (*puVar20 != 0xffffffff) {
                DAT_052cba44 = *puVar20;
              }
              uVar24 = *puVar25;
              if (uVar24 == 0) break;
            } while( true );
          }
LAB_01950300:
          uVar24 = 0;
LAB_01950304:
          puVar17 = *(undefined8 **)(*(long *)PTR_DAT_04bb4008 + 0x20);
          if (puVar17 != (undefined8 *)0x0 && *(int *)(*(long *)PTR_DAT_04bb4008 + 0x18) != 0) {
            puVar17 = (undefined8 *)*puVar17;
            if (((*PTR_DAT_04bbfc78 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_04bbfc78), iVar12 != 0)) {
              *(undefined **)PTR_DAT_04bbfc70 = puVar2;
              __cxa_guard_release(PTR_DAT_04bbfc78);
            }
            if ((((puVar17 != (undefined8 *)0x0) &&
                 (uVar21 = (**(code **)*puVar17)(puVar17,PTR_DAT_04bbfc70), (uVar21 & 1) != 0)) &&
                (uVar24 - *(ushort *)(puVar17 + 0x3f) < *(uint *)(puVar17 + 0x3b))) &&
               (puVar25 = *(uint **)(puVar17[0x3c] +
                                    (long)(int)(uVar24 - *(ushort *)(puVar17 + 0x3f)) * 8),
               puVar25 != (uint *)0x0)) {
              uVar7 = *puVar25;
              if (uVar7 != 0) {
                cVar23 = *PTR_DAT_04bbec78;
                do {
                  if (cVar23 == '\0') {
                    cVar23 = '\x01';
                    *PTR_DAT_04bbec78 = 1;
                    puVar4 = PTR_DAT_04bbec80;
                    *(undefined8 *)PTR_DAT_04bbec80 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
                    uVar7 = *puVar25;
                  }
                  else {
                    uVar8 = *(uint *)(PTR_DAT_04bbec80 + 0x24);
                    if (-1 < (int)uVar8) {
                      puVar3 = (ushort *)((ulong)uVar8 + (long)puVar25);
                      if (puVar3 != (ushort *)0x0) {
                        local_74 = *puVar3;
                        local_72 = (char)puVar3[1];
                        goto LAB_01950490;
                      }
                      break;
                    }
                    if (uVar8 != 0xffffffff) break;
                  }
                  puVar20 = (uint *)(ulong)uVar7;
                  if ((puVar20 == (uint *)0x0) || (puVar25 == puVar20)) break;
                  lVar18 = 0xc;
                  if (*(char *)((long)puVar25 + (10 - (long)puVar20)) != '\0') {
                    lVar18 = 0x1c;
                  }
                  lVar18 = (long)puVar25 + (lVar18 - (long)puVar20);
                  if (lVar18 == 0) break;
                  uVar21 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar20));
                  *(undefined4 *)(PTR_DAT_04bbec80 + 0x24) = 0xfffffffe;
                  if (uVar21 == 0) break;
                  piVar22 = (int *)(lVar18 + 4);
                  while (piVar22[-1] != -0x45319aac) {
                    piVar22 = piVar22 + 2;
                    uVar21 = uVar21 - 1;
                    if (uVar21 == 0) goto LAB_01950488;
                  }
                  iVar12 = 0;
                  if (*piVar22 != -1) {
                    iVar12 = *piVar22;
                  }
                  *(int *)(PTR_DAT_04bbec80 + 0x24) = iVar12;
                  uVar7 = *puVar25;
                  if (uVar7 == 0) break;
                } while( true );
              }
LAB_01950488:
              local_72 = '\0';
              local_74 = 0;
LAB_01950490:
              local_70 = 3;
              local_6c = 3;
              local_6c = 3;
              local_74 = local_74 & 0xfff7;
              local_6c = 3;
              if ((((char)local_74 != '\0') || (local_74._1_1_ != '\0')) ||
                 ((local_72 != '\0' ||
                  ((((uVar24 - 0x250 < 0x3c &&
                     ((1L << ((ulong)(uVar24 - 0x250) & 0x3f) & 0x800000001001005U) != 0)) ||
                    (uVar24 == 0x1425)) || (uVar24 == 0x24b)))))) goto LAB_01950054;
            }
          }
LAB_01950540:
          if (uVar14 < 0x800) {
            uVar21 = uVar14 >> 3 & 0x1ffffffffffffffc;
            *(uint *)((long)&local_178 + uVar21) =
                 *(uint *)((long)&local_178 + uVar21) | 1 << (ulong)((uint)uVar14 & 0x1f);
          }
          uVar13 = uVar13 + uVar11;
        }
      }
    }
LAB_01950054:
    uVar14 = uVar14 + 1;
  } while( true );
  if (uVar13 == 0) {
    return 0xfffe;
  }
  puVar25 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar14 = 0;
  uVar7 = puVar25[3];
  uVar24 = *puVar25 ^ *puVar25 << 0xb;
  *puVar25 = puVar25[1];
  puVar25[1] = puVar25[2];
  uVar24 = uVar24 >> 8 ^ uVar7 >> 0x13 ^ uVar24 ^ uVar7;
  puVar25[2] = uVar7;
  puVar25[3] = uVar24;
  uVar21 = (ulong)uVar24 * (ulong)uVar13 >> 0x20;
  do {
    uVar13 = *(uint *)(lVar15 + 0x1c0);
    uVar19 = (ulong)uVar13;
    if ((int)uVar13 < 1) {
      uVar19 = 0;
      if (*(long *)(lVar15 + 0xb0) != 0) {
        puVar25 = *(uint **)(*(long *)(lVar15 + 0xb0) + 8);
        uVar19 = 0;
        if (puVar25 != (uint *)0x0) {
          uVar19 = (ulong)*puVar25;
        }
      }
    }
    if (uVar19 <= uVar14) {
      return 0xfffe;
    }
    if ((*(uint *)((long)&local_178 + (uVar14 >> 5 & 0x7ffffff) * 4) >> (ulong)((uint)uVar14 & 0x1f)
        & 1) != 0) {
      if ((int)uVar13 < 1) {
        if ((((*(long *)(lVar15 + 0xb0) == 0) ||
             (puVar25 = *(uint **)(*(long *)(lVar15 + 0xb0) + 8), puVar25 == (uint *)0x0)) ||
            ((uVar14 < *(uint *)(lVar15 + 200) &&
             (*(char *)(*(long *)(lVar15 + 0xd0) + uVar14) == '\0')))) ||
           (((*puVar25 <= uVar14 || (puVar25[1] == 0)) || ((ushort)puVar25[2] == 0))))
        goto LAB_019505f0;
        iVar12 = 0xc;
        if (*(char *)((long)puVar25 + 10) != '\0') {
          iVar12 = 0x1c;
        }
        puVar25 = (uint *)((ulong)(puVar25[1] * (uint)uVar14 + (uint)(ushort)puVar25[2] * 8 + iVar12
                                  ) + (long)puVar25);
LAB_0195065c:
        if (puVar25 == (uint *)0x0) {
          uVar13 = 0;
        }
        else {
          uVar13 = local_180 + local_17c * 6;
          plVar6 = plVar1 + (ulong)uVar13 * 2;
          if (0x47 < uVar13) {
            plVar6 = plVar1;
          }
          pcVar16 = (code *)*plVar6;
          if ((plVar6[1] & 1U) != 0) {
            pcVar16 = *(code **)(pcVar16 + *(long *)((long)puVar25 + (plVar6[1] >> 1)));
          }
          uVar13 = (*pcVar16)();
        }
      }
      else {
        if (uVar14 < uVar13) {
          uVar19 = uVar14;
          if (*(uint *)(lVar15 + 0x1b0) <= uVar14) {
            uVar19 = 0;
          }
          puVar25 = *(uint **)(*(long *)(lVar15 + 0x1b8) + uVar19 * 8);
          goto LAB_0195065c;
        }
LAB_019505f0:
        puVar25 = (uint *)0x0;
        uVar13 = 0;
      }
      iVar12 = (int)uVar21;
      uVar21 = (ulong)(iVar12 - (uVar13 & 0xffff));
      if (iVar12 < (int)(uVar13 & 0xffff)) {
        uVar13 = *puVar25;
        if (uVar13 == 0) {
          return 0;
        }
        cVar23 = DAT_052cba40;
        while( true ) {
          if (cVar23 == '\0') {
            cVar23 = '\x01';
            DAT_052cba40 = '\x01';
            memset(&DAT_052cba44,0xff,300);
            uVar13 = *puVar25;
          }
          else {
            if (-1 < (int)DAT_052cba44) {
              if ((ushort *)((ulong)DAT_052cba44 + (long)puVar25) == (ushort *)0x0) {
                return 0;
              }
              return (ulong)*(ushort *)((ulong)DAT_052cba44 + (long)puVar25);
            }
            if (DAT_052cba44 != 0xffffffff) {
              return 0;
            }
          }
          puVar20 = (uint *)(ulong)uVar13;
          if (puVar20 == (uint *)0x0) {
            return 0;
          }
          if (puVar25 == puVar20) break;
          lVar15 = 0xc;
          if (*(char *)((long)puVar25 + (10 - (long)puVar20)) != '\0') {
            lVar15 = 0x1c;
          }
          lVar15 = (long)puVar25 + (lVar15 - (long)puVar20);
          if (lVar15 == 0) {
            return 0;
          }
          uVar14 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar20));
          if (uVar14 == 0) {
            DAT_052cba44 = 0xfffffffe;
            return 0;
          }
          puVar20 = (uint *)(lVar15 + 4);
          while (puVar20[-1] != 0x20cb67bc) {
            puVar20 = puVar20 + 2;
            uVar14 = uVar14 - 1;
            if (uVar14 == 0) {
              DAT_052cba44 = 0xfffffffe;
              return 0;
            }
          }
          DAT_052cba44 = 0;
          if (*puVar20 != 0xffffffff) {
            DAT_052cba44 = *puVar20;
          }
          uVar13 = *puVar25;
          if (uVar13 == 0) {
            return 0;
          }
        }
        return 0;
      }
    }
    uVar14 = uVar14 + 1;
  } while( true );
}


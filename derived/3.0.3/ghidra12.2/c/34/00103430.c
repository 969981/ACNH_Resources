
/* WARNING: Removing unreachable block (ram,0x00103978) */
/* WARNING: Type propagation algorithm not settling */

uint FUN_00103430(long param_1,long *param_2,void *param_3)

{
  ushort *puVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  char cVar8;
  byte bVar9;
  ushort uVar10;
  ushort uVar11;
  bool bVar12;
  bool bVar13;
  ushort *puVar14;
  short sVar15;
  ushort uVar16;
  undefined2 uVar17;
  short sVar18;
  long lVar19;
  ushort uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  long lVar24;
  long *plVar25;
  code *pcVar26;
  short *psVar27;
  long lVar28;
  ushort uVar29;
  byte *pbVar30;
  long lVar31;
  ushort *puVar32;
  short *psVar33;
  undefined4 *puVar34;
  char *pcVar35;
  ushort uVar36;
  long lVar37;
  uint uVar38;
  long lVar39;
  long *plVar40;
  ushort *puVar41;
  ulong uVar42;
  undefined2 *puVar43;
  ulong uVar44;
  ushort uVar45;
  uint uVar46;
  ulong uVar47;
  void *__dest;
  int iVar48;
  int iVar49;
  uint uVar50;
  ulong uVar51;
  ulong local_1358;
  long *local_1338;
  undefined8 local_1330;
  ushort local_12c8;
  ushort local_12c6;
  undefined1 auStack_12b0 [114];
  ushort local_123e;
  undefined1 auStack_998 [16];
  long local_988;
  undefined2 local_980;
  undefined2 local_97e;
  long *local_970;
  long local_968;
  short local_94c;
  undefined2 local_948;
  byte local_932;
  ushort local_926;
  byte local_923;
  char local_7c [4];
  undefined8 local_78;
  ushort local_70 [2];
  undefined4 local_6c;
  long local_68;
  
  puVar41 = (ushort *)(param_2 + 0x16e2);
  if (*(char *)((long)param_2 + 0x13) == '\0') {
    lVar24 = *param_2;
    param_2[0x151c] = *(long *)(lVar24 + 0x640);
    param_2[0x15f6] = *(long *)(lVar24 + 0x640);
    lVar39 = 0;
    param_2[0x16d0] = *(long *)(lVar24 + 0x640);
    do {
      while( true ) {
        lVar28 = (long)param_2 + lVar39 + 0xa2a0;
        lVar19 = (long)param_2 + lVar39 + 0xa970;
        lVar2 = (long)param_2 + lVar39 + 0xb040;
        plVar40 = (long *)(lVar24 + lVar39);
        FUN_0010d900(lVar28);
        FUN_0010d900(lVar19);
        FUN_0010d900(lVar2);
        lVar24 = *plVar40;
        if ((lVar24 == 0) || (*(ushort *)((long)plVar40 + 0x32) < *(ushort *)(plVar40 + 6)))
        goto LAB_00103754;
        cVar8 = (char)plVar40[9];
        if (cVar8 == '\x01') goto LAB_001036e0;
        if (cVar8 != '\x02') break;
LAB_001036e8:
        lVar19 = lVar2;
LAB_001036ec:
        FUN_0010d930(lVar19,plVar40,0);
        lVar24 = *param_2;
        lVar39 = lVar39 + 0x50;
        if (lVar39 == 0x640) goto LAB_00103764;
      }
      if (cVar8 == '\x03') {
        uVar21 = *(uint *)(lVar24 + 0x70);
        if (0x20001 < (int)uVar21) goto LAB_00103624;
LAB_00103670:
        if (uVar21 < 7) {
          if ((1 << (ulong)(uVar21 & 0x1f) & 0x6dU) != 0) goto LAB_001036e0;
          if (uVar21 == 1) goto LAB_001036e8;
        }
        if (uVar21 != 0x80020000) {
          if (uVar21 != 0x80030000) goto LAB_00103754;
          goto LAB_001036e0;
        }
        goto LAB_001036ec;
      }
      uVar21 = (*(uint *)(lVar24 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar24 + 8) & 0xff00ff) << 8;
      uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
      if ((int)uVar21 < 0x20002) goto LAB_00103670;
LAB_00103624:
      if (0xe0000 < (int)uVar21) {
        if (1 < uVar21 + 0xbffb0000) {
          if (uVar21 == 0xe0001) goto LAB_001036e8;
          if (uVar21 != 0x40000006) goto LAB_00103754;
        }
LAB_001036e0:
        lVar19 = lVar28;
        goto LAB_001036ec;
      }
      if (((uVar21 - 0x20002 < 2) || (uVar21 - 0x50000 < 2)) || (uVar21 == 0xe0000))
      goto LAB_001036e0;
LAB_00103754:
      lVar24 = *param_2;
      lVar39 = lVar39 + 0x50;
    } while (lVar39 != 0x640);
LAB_00103764:
    if (*(long *)(lVar24 + 0x640) == 0) {
      return 0x8807;
    }
    uVar16 = FUN_0011f660(*(long *)(lVar24 + 0x640),0);
    *puVar41 = uVar16;
    uVar17 = FUN_0011f660(*(undefined8 *)(*param_2 + 0x640),1);
    *(undefined2 *)((long)param_2 + 0xb716) = uVar17;
    uVar17 = FUN_0011f660(*(undefined8 *)(*param_2 + 0x640),2);
    *(undefined2 *)(param_2 + 0x16e3) = uVar17;
    uVar17 = FUN_0011f660(*(undefined8 *)(*param_2 + 0x640),0xe);
    *(undefined2 *)((long)param_2 + 0xb71a) = uVar17;
    sVar15 = FUN_0011f660(*(undefined8 *)(*param_2 + 0x640),3);
    *(short *)((long)param_2 + 0xb71c) = sVar15;
    if (((*puVar41 == 0) || (*(short *)((long)param_2 + 0xb716) == 0)) ||
       ((short)param_2[0x16e3] == 0)) {
      return 0x8707;
    }
    if (sVar15 == 0) {
      return 0x8707;
    }
    if (*(short *)((long)param_2 + 0xb71a) == 0) {
      return 0x8707;
    }
    FUN_0011f7e0(*(undefined8 *)(*param_2 + 0x640));
    uVar16 = *(ushort *)((long)param_2 + 0xb994);
    if (uVar16 == 0) {
      pbVar30 = (byte *)param_2[0x16e5];
      uVar21 = 0;
    }
    else {
      pbVar30 = (byte *)param_2[0x16e5];
      uVar44 = 0;
      iVar23 = 0;
      do {
        iVar49 = iVar23;
        uVar44 = uVar44 & 0xffff;
        if ((pbVar30[uVar44 * 2] & 0xfc) == 0xd8) {
          iVar23 = 1;
          if (*(short *)(pbVar30 + uVar44 * 2 + 2) != 0) {
            iVar23 = 2;
          }
        }
        else {
          iVar23 = 1;
        }
        uVar21 = iVar23 + (int)uVar44;
        uVar44 = (ulong)uVar21;
        iVar23 = (int)(short)((short)iVar49 + 1);
        uVar21 = uVar21 & 0xffff;
      } while (uVar21 <= uVar16 && uVar16 != uVar21);
      uVar21 = iVar49 - 0x1b;
      if (iVar23 < 0x1c) {
        uVar21 = 0;
      }
    }
    uVar44 = 1;
    if ((*pbVar30 & 0xfc) == 0xd8) {
      uVar38 = 1;
      if (*(short *)(pbVar30 + 2) != 0) {
        uVar38 = 2;
      }
      uVar44 = (ulong)uVar38;
    }
    if ((uint)uVar44 <= (uint)uVar16) {
LAB_00104fa8:
      do {
        if ((uVar21 & 0xffff) == 0) {
          puVar34 = (undefined4 *)
                    ((long)param_2 + (ulong)*(ushort *)((long)param_2 + 0xb992) * 6 + 0x18);
          *puVar34 = 0;
          *(ushort *)(puVar34 + 1) = (ushort)uVar44 & 0x7f;
          uVar16 = *(ushort *)((long)param_2 + 0xb992);
          uVar42 = (ulong)uVar16;
          if (uVar42 != 0) {
            psVar33 = (short *)((long)param_2 + uVar42 * 6 + 0x18);
            uVar36 = 0;
            puVar32 = (ushort *)((long)param_2 + 0x1c);
            do {
              if ((*puVar32 & 0x7f) == (psVar33[2] & 0x7fU)) {
                if (((*(ushort *)((long)param_2 + uVar42 * 6 + 0x1a) ^ puVar32[-1]) & 0x7f) == 0) {
                  if (-1 < (short)uVar36) {
                    psVar27 = (short *)((long)param_2 + (long)(short)uVar36 * 6 + 0x18);
                    if (*psVar27 <= *psVar33) {
                      uVar7 = *(undefined4 *)psVar33;
                      *(short *)((long)param_2 + (long)(short)uVar36 * 6 + 0x1c) = psVar33[2];
                      *(undefined4 *)psVar27 = uVar7;
                      FUN_00109030(param_2);
                    }
                    goto LAB_00105094;
                  }
                  break;
                }
              }
              else if ((*puVar32 & 0x7f) < (psVar33[2] & 0x7fU)) break;
              uVar36 = uVar36 + 1;
              puVar32 = puVar32 + 3;
            } while (uVar36 < uVar16);
          }
          *(ushort *)((long)param_2 + 0xb992) = uVar16 + 1;
          FUN_00109030(param_2,uVar16);
          if (*(ushort *)((long)param_2 + 0xb992) < 0x6f) {
LAB_00105094:
            uVar21 = 0;
          }
          else {
            uVar21 = 0;
            *(undefined2 *)((long)param_2 + 0xb992) = 0x6e;
          }
        }
        else {
          uVar21 = uVar21 - 1;
        }
        if ((*(byte *)(param_2[0x16e5] + (uVar44 & 0xffff) * 2) & 0xfc) == 0xd8) {
          iVar23 = 1;
          if (*(short *)(param_2[0x16e5] + (uVar44 & 0xffff) * 2 + 2) != 0) {
            iVar23 = 2;
          }
          uVar38 = iVar23 + (int)uVar44;
          uVar44 = (ulong)uVar38;
          if ((uint)*(ushort *)((long)param_2 + 0xb994) < (uVar38 & 0xffff)) break;
          goto LAB_00104fa8;
        }
        uVar38 = (int)uVar44 + 1;
        uVar44 = (ulong)uVar38;
      } while ((uVar38 & 0xffff) <= (uint)*(ushort *)((long)param_2 + 0xb994));
    }
    FUN_0010d850(auStack_998);
    local_970 = param_2 + 0x1608;
    local_948 = 0;
    local_980 = *(undefined2 *)((long)param_2 + 0xb71e);
    local_97e = 1;
    uVar21 = (uint)*(ushort *)((long)param_2 + 0xb992);
    if (*(ushort *)((long)param_2 + 0xb992) != 0) {
      uVar44 = 0;
LAB_00105130:
      iVar23 = uVar21 - 1;
      if (-1 < (short)iVar23) {
        puVar32 = (ushort *)((long)param_2 + (long)iVar23 * 6 + 0x1c);
        uVar38 = 0xffff;
        do {
          uVar46 = *puVar32 & 0x7f;
          if ((~uVar38 & 0xffff) == 0) {
            if (uVar46 <= (uint)uVar44) {
              uVar46 = 0xffffffff;
            }
            uVar38 = uVar46;
          }
          else if ((int)(short)uVar38 < (int)uVar46) goto LAB_00105188;
          iVar23 = (int)(short)((short)iVar23 + -1);
          puVar32 = puVar32 + -3;
          if (iVar23 < 0) break;
        } while( true );
      }
    }
LAB_00105570:
    uVar21 = (uint)*(ushort *)((long)param_2 + 0x1c);
    if ((*(ushort *)((long)param_2 + 0x1c) & 0x7f) == *(ushort *)((long)param_2 + 0xb994)) {
      uVar46 = 0;
      plVar40 = param_2 + 3;
      do {
        if ((*plVar40 & 0x7f0000) == 0) {
LAB_00105618:
          uVar46 = uVar46 + 1;
          plVar40 = (long *)((long)plVar40 + 6);
        }
        else {
          uVar21 = uVar21 >> 7;
          local_68 = 0;
          if ((((uVar21 != 0) &&
               (uVar38 = (uint)*puVar41, *(long *)(*param_2 + 0x640) != 0 && uVar38 != 0)) &&
              (uVar38 <= *(ushort *)((long)param_2 + 0xb71e))) &&
             ((uVar21 <= *(ushort *)(param_2 + 0x16e4) &&
              (FUN_0011f730(*(long *)(*param_2 + 0x640),uVar21,0,&local_68),
              (0x80U >> (ulong)(uVar38 - 1 & 7) &
              (uint)*(byte *)(local_68 + ((ulong)(uVar38 - 1 >> 3) & 0x1fff))) != 0))))
          goto LAB_00105618;
          uVar44 = (ulong)(uVar46 + 1);
          uVar21 = uVar46;
          if ((uVar46 + 1 & 0xffff) < (uint)*(ushort *)((long)param_2 + 0xb992)) {
            puVar34 = (undefined4 *)((long)(param_2 + 3) + (uVar44 & 0xffff) * 6);
            do {
              uVar42 = (ulong)uVar21;
              uVar21 = uVar21 + 1;
              uVar7 = *puVar34;
              *(undefined2 *)((long)param_2 + (uVar42 & 0xffff) * 6 + 0x1c) =
                   *(undefined2 *)(puVar34 + 1);
              *(undefined4 *)((long)param_2 + (uVar42 & 0xffff) * 6 + 0x18) = uVar7;
              uVar38 = (int)uVar44 + 1;
              uVar44 = (ulong)uVar38;
              puVar34 = (undefined4 *)((long)puVar34 + 6);
            } while ((uVar38 & 0xffff) < (uint)*(ushort *)((long)param_2 + 0xb992));
          }
          *(short *)((long)param_2 + 0xb992) = (short)uVar21;
        }
        uVar21 = (uint)*(ushort *)((long)plVar40 + 4);
      } while ((uVar21 & 0x7f) == (uint)*(ushort *)((long)param_2 + 0xb994));
    }
    else {
      uVar46 = 0;
    }
    *(short *)((long)param_2 + 0xb992) = (short)uVar46;
LAB_0010569c:
    if ((short)uVar46 < 0) {
      return uVar46;
    }
  }
  if ((param_3 == (void *)0x0) && (*(char *)((long)param_2 + 0x12) != '\0')) {
    memcpy(param_2 + 0x57,(void *)param_2[1],0x88);
    *(undefined1 *)(param_2 + 0x67) = 0x31;
    *(undefined2 *)((long)param_2 + 0xb996) = 1;
    sVar15 = FUN_00131950(param_1,param_2 + 0x57,*(undefined2 *)((long)param_2 + 0xb994),
                          param_2 + 0x16e7);
    if (sVar15 < 0) {
      return (int)sVar15;
    }
  }
  local_78 = 0;
  uVar21 = 0;
  if (*(byte *)((long)param_2 + 0x13) < 4) {
    uVar21 = 0;
    switch(*(byte *)((long)param_2 + 0x13)) {
    case 0:
      plVar40 = (long *)param_2[0x16e6];
      *(undefined2 *)(plVar40 + 0x2cb0) = 0;
      FUN_0011f730(*(undefined8 *)(*param_2 + 0x640),*(undefined2 *)((long)param_2 + 0xb71c),0,
                   &local_78);
      uVar16 = 1;
      if (((*(byte *)param_2[0x16e5] & 0xfc) == 0xd8) &&
         (uVar16 = 1, *(short *)((byte *)param_2[0x16e5] + 2) != 0)) {
        uVar16 = 2;
      }
      if (uVar16 <= *(ushort *)((long)param_2 + 0xb994)) {
LAB_00104afc:
        do {
          *(undefined1 *)(*plVar40 + 0x50) = 0;
          *(undefined1 *)(*plVar40 + 0x51) = 0;
          *(long **)(*plVar40 + 0x28) = param_2 + 0x152e;
          *(undefined8 *)*plVar40 = local_78;
          *(undefined2 *)(*plVar40 + 0x18) = *(undefined2 *)((long)param_2 + 0xb71e);
          *(undefined2 *)(*plVar40 + 0x1a) = 0;
          *(undefined8 *)(*plVar40 + 8) = 0;
          *(short *)(*plVar40 + 0x1c) = (short)param_2[0x16e4];
          *(undefined2 *)(*plVar40 + 0x1e) = 0;
          *(undefined8 *)(*plVar40 + 0x10) = 0;
          *(undefined2 *)(*plVar40 + 0x20) = 0;
          *(long *)(*plVar40 + 0x30) = param_2[0x16e5];
          *(ushort *)(*plVar40 + 0x4c) = uVar16;
          *(undefined8 *)(*plVar40 + 0x38) = 0;
          *(undefined8 *)(*plVar40 + 0x40) = 0;
          *(undefined1 *)(*plVar40 + 0x52) = 1;
          sVar15 = FUN_00109f40(param_1,*plVar40,1,local_7c);
          uVar21 = (uint)sVar15;
          if ((int)uVar21 < 0) {
            return uVar21;
          }
          *(bool *)((long)plVar40 + 0x339) = uVar21 != 0;
          if (uVar21 == 0) {
            if (local_7c[0] == '\x01') break;
          }
          else {
            sVar15 = FUN_0010a610(param_1,*plVar40,auStack_998,1);
            uVar21 = (uint)sVar15;
            if (0 < (int)uVar21) {
              do {
                memcpy(plVar40 + 1,auStack_998,0x88);
                uVar36 = local_926 & 0x7f;
                if (uVar36 < 0x38) {
                  plVar25 = (long *)*param_2;
                  if (*plVar25 == local_988) {
                    lVar39 = 0;
LAB_00104dac:
                    local_6c = (undefined4)plVar25[lVar39 * 10 + 6];
                  }
                  else {
                    if (plVar25[10] == local_988) {
                      lVar39 = 1;
                      goto LAB_00104dac;
                    }
                    if (plVar25[0x14] == local_988) {
                      lVar39 = 2;
                      goto LAB_00104dac;
                    }
                    if (plVar25[0x1e] == local_988) {
                      lVar39 = 3;
                      goto LAB_00104dac;
                    }
                    if (plVar25[0x28] == local_988) {
                      lVar39 = 4;
                      goto LAB_00104dac;
                    }
                    if (plVar25[0x32] == local_988) {
                      lVar39 = 5;
                      goto LAB_00104dac;
                    }
                    if (plVar25[0x3c] == local_988) {
                      lVar39 = 6;
                      goto LAB_00104dac;
                    }
                    if (plVar25[0x46] == local_988) {
                      lVar39 = 7;
                      goto LAB_00104dac;
                    }
                    if (plVar25[0x50] == local_988) {
                      lVar39 = 8;
                      goto LAB_00104dac;
                    }
                    if (plVar25[0x5a] == local_988) {
                      lVar39 = 9;
                      goto LAB_00104dac;
                    }
                    if (plVar25[100] == local_988) {
                      lVar39 = 10;
                      goto LAB_00104dac;
                    }
                    if (plVar25[0x6e] == local_988) {
                      lVar39 = 0xb;
                      goto LAB_00104dac;
                    }
                    if (plVar25[0x78] == local_988) {
                      lVar39 = 0xc;
                      goto LAB_00104dac;
                    }
                    if (plVar25[0x82] == local_988) {
                      lVar39 = 0xd;
                      goto LAB_00104dac;
                    }
                    if (plVar25[0x8c] == local_988) {
                      lVar39 = 0xe;
                      goto LAB_00104dac;
                    }
                    if (plVar25[0x96] == local_988) {
                      lVar39 = 0xf;
                      goto LAB_00104dac;
                    }
                    if (plVar25[0xa0] == local_988) {
                      lVar39 = 0x10;
                      goto LAB_00104dac;
                    }
                    if (plVar25[0xaa] == local_988) {
                      lVar39 = 0x11;
                      goto LAB_00104dac;
                    }
                    if (plVar25[0xb4] == local_988) {
                      lVar39 = 0x12;
                      goto LAB_00104dac;
                    }
                    if (plVar25[0xbe] == local_988) {
                      lVar39 = 0x13;
                      goto LAB_00104dac;
                    }
                  }
                  *(byte *)(plVar40 + 0x67) = local_932 >> 4;
                  if (local_932 < 0x20) {
                    if (local_932 >> 4 == 1) break;
                  }
                  else {
                    uVar44 = 1;
                    plVar25 = plVar40 + 0x12;
                    do {
                      sVar15 = FUN_0010be60(param_1,auStack_998,auStack_12b0,&local_6c);
                      if (sVar15 < 0) {
                        return (int)sVar15;
                      }
                      uVar36 = (local_123e & 0x7f) + uVar36;
                      if (0x37 < uVar36) {
                        *(char *)(plVar40 + 0x67) = (char)uVar44;
                        *(char *)((long)plVar40 + 0x6e) = (char)((int)uVar44 << 4);
                        goto LAB_00104eac;
                      }
                      memcpy(plVar25,auStack_12b0,0x88);
                      memcpy(auStack_998,auStack_12b0,0x88);
                      uVar44 = uVar44 + 1;
                      plVar25 = plVar25 + 0x11;
                    } while (uVar44 < *(byte *)(plVar40 + 0x67));
                    if ((uint)*(byte *)(plVar40 + 0x67) == ((uint)uVar44 & 0xff)) break;
                  }
                }
                sVar15 = FUN_0010a610(param_1,*plVar40,auStack_998,1);
                uVar21 = (uint)sVar15;
              } while (0 < (int)uVar21);
            }
LAB_00104eac:
            if ((short)uVar21 < 0) {
              return uVar21;
            }
            if ((uVar21 & 0xffff) != 0) {
              plVar40 = plVar40 + 0x68;
              *(short *)(param_2[0x16e6] + 0x16580) = *(short *)(param_2[0x16e6] + 0x16580) + 1;
            }
          }
          if ((*(byte *)(param_2[0x16e5] + (ulong)uVar16 * 2) & 0xfc) == 0xd8) {
            sVar15 = 1;
            if (*(short *)(param_2[0x16e5] + (ulong)uVar16 * 2 + 2) != 0) {
              sVar15 = 2;
            }
            uVar16 = sVar15 + uVar16;
            if (*(ushort *)((long)param_2 + 0xb994) < uVar16) break;
            goto LAB_00104afc;
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 <= *(ushort *)((long)param_2 + 0xb994));
      }
      *(undefined1 *)((long)param_2 + 0x13) = 1;
      *(undefined2 *)(param_2 + 2) = 0;
    case 1:
      uVar21 = 0;
      do {
        if (param_3 == (void *)0x0) {
          lVar39 = param_2[0x16e6];
          uVar16 = *(ushort *)(lVar39 + 0x16580);
          if (uVar16 == 0) {
LAB_0010429c:
            *(undefined1 *)((long)param_2 + 0x13) = 2;
            goto switchD_0010350c_caseD_2;
          }
          bVar12 = false;
          do {
            if (bVar12) goto LAB_0010429c;
            uVar45 = 0;
            uVar36 = 0;
            bVar13 = true;
            pcVar35 = (char *)(lVar39 + 0x339);
            iVar23 = -1000;
            do {
              while (*pcVar35 == '\0') {
LAB_00103a24:
                uVar36 = uVar36 + 1;
                pcVar35 = pcVar35 + 0x340;
                if (uVar16 <= uVar36) goto LAB_00103a4c;
              }
              sVar15 = *(short *)(pcVar35 + (ulong)(byte)pcVar35[-1] * 0x88 + -0x3b1);
              sVar18 = *(short *)(pcVar35 + (ulong)(byte)pcVar35[-1] * 0x88 + -0x341);
              if (bVar13) {
LAB_001039fc:
                iVar23 = (int)sVar15 + (int)sVar18;
                iVar49 = iVar23;
                if (399 < iVar23) {
                  iVar49 = 400;
                }
                iVar48 = 100;
                if (99 < iVar23) {
                  iVar48 = iVar49;
                }
                iVar23 = (int)sVar15;
                if (((int)sVar18 & 0x80000000U) != 0) {
                  iVar23 = iVar48;
                }
                bVar13 = false;
                iVar23 = iVar23 + -1000;
                uVar45 = uVar36;
                goto LAB_00103a24;
              }
              iVar49 = (int)sVar18 + (int)sVar15;
              iVar48 = iVar49;
              if (399 < iVar49) {
                iVar48 = 400;
              }
              iVar4 = 100;
              if (99 < iVar49) {
                iVar4 = iVar48;
              }
              iVar49 = (int)sVar15;
              if (((int)sVar18 & 0x80000000U) != 0) {
                iVar49 = iVar4;
              }
              if (iVar23 < iVar49 + -1000) goto LAB_001039fc;
              bVar13 = false;
              uVar36 = uVar36 + 1;
              pcVar35 = pcVar35 + 0x340;
            } while (uVar36 < uVar16);
LAB_00103a4c:
            bVar12 = true;
          } while (bVar13);
        }
        else {
          if (*(ushort *)(param_2 + 2) < *(ushort *)((long)param_2 + 0xb996)) {
            memcpy(param_3,param_2 + 0x57,0x88);
            uVar16 = *(ushort *)((long)param_2 + 0xb996);
            if (1 < uVar16) {
              puVar43 = (undefined2 *)((long)param_2 + 0xb73a);
              uVar44 = 1;
              plVar40 = param_2 + 0x57;
              do {
                memcpy(plVar40,plVar40 + 0x11,0x88);
                puVar43[-1] = *puVar43;
                uVar16 = *(ushort *)((long)param_2 + 0xb996);
                uVar44 = uVar44 + 1;
                puVar43 = puVar43 + 1;
                plVar40 = plVar40 + 0x11;
              } while (uVar44 < uVar16);
            }
            goto LAB_00104ad8;
          }
          lVar39 = param_2[0x16e6];
          uVar16 = *(ushort *)(lVar39 + 0x16580);
          bVar12 = false;
          do {
            while( true ) {
              if (bVar12) goto LAB_0010429c;
              uVar45 = 0;
              if (uVar16 != 0) break;
              bVar12 = true;
            }
            uVar36 = 0;
            bVar13 = true;
            pcVar35 = (char *)(lVar39 + 0x339);
            iVar23 = -1000;
            do {
              while (*pcVar35 == '\0') {
LAB_00103938:
                uVar36 = uVar36 + 1;
                pcVar35 = pcVar35 + 0x340;
                if (uVar16 <= uVar36) goto LAB_00103960;
              }
              sVar15 = *(short *)(pcVar35 + (ulong)(byte)pcVar35[-1] * 0x88 + -0x3b1);
              sVar18 = *(short *)(pcVar35 + (ulong)(byte)pcVar35[-1] * 0x88 + -0x341);
              if (bVar13) {
LAB_00103910:
                iVar23 = (int)sVar15 + (int)sVar18;
                iVar49 = iVar23;
                if (399 < iVar23) {
                  iVar49 = 400;
                }
                iVar48 = 100;
                if (99 < iVar23) {
                  iVar48 = iVar49;
                }
                iVar23 = (int)sVar15;
                if (((int)sVar18 & 0x80000000U) != 0) {
                  iVar23 = iVar48;
                }
                bVar13 = false;
                iVar23 = iVar23 + -1000;
                uVar45 = uVar36;
                goto LAB_00103938;
              }
              iVar49 = (int)sVar18 + (int)sVar15;
              iVar48 = iVar49;
              if (399 < iVar49) {
                iVar48 = 400;
              }
              iVar4 = 100;
              if (99 < iVar49) {
                iVar4 = iVar48;
              }
              iVar49 = (int)sVar15;
              if (((int)sVar18 & 0x80000000U) != 0) {
                iVar49 = iVar4;
              }
              if (iVar23 < iVar49 + -1000) goto LAB_00103910;
              bVar13 = false;
              uVar36 = uVar36 + 1;
              pcVar35 = pcVar35 + 0x340;
            } while (uVar36 < uVar16);
LAB_00103960:
            bVar12 = true;
          } while (bVar13);
        }
        uVar44 = (ulong)uVar45;
        plVar40 = param_2 + 3;
        if (*(short *)((long)param_2 + 0xb992) != 0) {
          uVar16 = 0;
          do {
            lVar24 = lVar39 + uVar44 * 0x340;
            uVar36 = (*(ushort *)((long)plVar40 + 4) & 0x7f) -
                     (*(ushort *)((long)plVar40 + 2) & 0x7f);
            bVar9 = *(byte *)(lVar24 + 0x338);
            if (bVar9 == 0) {
              uVar45 = 0;
              lVar24 = lVar24 + 8;
              if (uVar36 == 0) goto LAB_00103be0;
            }
            else {
              uVar29 = 0;
              uVar45 = 0;
              lVar39 = lVar39 + uVar44 * 0x340 + 0x7a;
              do {
                lVar24 = lVar39;
                lVar39 = 0;
                if (1 < (byte)((*(byte *)(lVar24 + -0xb) >> 4) - 5)) {
                  lVar39 = -2;
                }
                uVar29 = (*(ushort *)(lVar24 + lVar39) & 0x7f) + uVar29;
                if (uVar29 == uVar36) {
                  lVar24 = lVar24 + -0x72;
                  goto LAB_00103be0;
                }
                uVar45 = uVar45 + 1;
                lVar39 = lVar24 + 0x88;
              } while (uVar45 <= bVar9 && bVar9 != uVar45);
              lVar24 = lVar24 + 0x16;
              if (uVar29 == uVar36) {
LAB_00103be0:
                uVar29 = *(ushort *)((long)plVar40 + 2) >> 7;
                uVar38 = (uint)uVar29;
                lVar39 = *(long *)(*param_2 + 0x640);
                uVar20 = *(ushort *)(lVar24 + 0x72) >> 7;
                if (uVar29 == 0) {
                  uVar38 = (uint)*puVar41;
                  local_68 = 0;
                  if ((lVar39 != 0) && (uVar20 != 0 && uVar38 != 0)) goto LAB_00103c04;
                }
                else {
                  local_68 = 0;
                  if ((lVar39 != 0) && (uVar20 != 0)) {
LAB_00103c04:
                    local_68 = 0;
                    if (((uVar38 <= *(ushort *)((long)param_2 + 0xb71e)) &&
                        (uVar20 <= *(ushort *)(param_2 + 0x16e4))) &&
                       (FUN_0011f730(lVar39,uVar20,0,&local_68),
                       (0x80U >> (ulong)(uVar38 - 1 & 7) &
                       (uint)*(byte *)(local_68 + ((ulong)(uVar38 - 1 >> 3) & 0x1fff))) != 0)) {
                      lVar37 = param_2[0x16e6];
                      lVar31 = lVar37 + uVar44 * 0x340;
                      uVar42 = (ulong)*(ushort *)((long)param_2 + 0xb996);
                      *(ushort *)(param_2 + uVar42 * 0x11 + 0x67) =
                           *(ushort *)(lVar31 + 0x88) & 0xfff0 | 1;
                      param_2[uVar42 * 0x11 + 0x57] = param_2[0x16e5];
                      lVar39 = *(long *)(lVar31 + 0x60);
                      puVar32 = (ushort *)(lVar31 + 8);
                      lVar24 = *(long *)(lVar31 + 0x70);
                      lVar2 = *(long *)(lVar31 + 0x78);
                      param_2[uVar42 * 0x11 + 99] = *(long *)(lVar31 + 0x68);
                      lVar28 = *(long *)(lVar31 + 0x10);
                      param_2[uVar42 * 0x11 + 0x59] = *(long *)(lVar31 + 0x18);
                      param_2[uVar42 * 0x11 + 0x58] = lVar28;
                      lVar28 = *(long *)(lVar31 + 0x20);
                      lVar5 = *(long *)(lVar31 + 0x28);
                      lVar19 = *(long *)(lVar31 + 0x30);
                      param_2[uVar42 * 0x11 + 0x5d] = *(long *)(lVar31 + 0x38);
                      param_2[uVar42 * 0x11 + 0x5c] = lVar19;
                      param_2[uVar42 * 0x11 + 0x5b] = lVar5;
                      param_2[uVar42 * 0x11 + 0x5a] = lVar28;
                      lVar28 = *(long *)(lVar31 + 0x40);
                      lVar5 = *(long *)(lVar31 + 0x48);
                      lVar19 = *(long *)(lVar31 + 0x50);
                      lVar6 = *(long *)(lVar31 + 0x58);
                      param_2[uVar42 * 0x11 + 100] = lVar24;
                      *(char *)((long)param_2 + uVar42 * 0x88 + 0x31e) =
                           (char)uVar45 * '\x10' + '\x10';
                      param_2[uVar42 * 0x11 + 0x60] = lVar19;
                      param_2[uVar42 * 0x11 + 0x61] = lVar6;
                      param_2[uVar42 * 0x11 + 0x5f] = lVar5;
                      param_2[uVar42 * 0x11 + 0x5e] = lVar28;
                      param_2[uVar42 * 0x11 + 0x65] = lVar2;
                      param_2[uVar42 * 0x11 + 0x62] = lVar39;
                      uVar29 = *(ushort *)((long)param_2 + uVar42 * 0x88 + 0x334);
                      *(ushort *)(param_2 + uVar42 * 0x11 + 0x65) =
                           (ushort)lVar2 & 0xff80 | uVar36 & 0x7f;
                      uVar36 = *(ushort *)(lVar31 + 0x10);
                      *(ushort *)(param_2 + uVar42 * 0x11 + 0x58) = uVar36;
                      uVar20 = *(ushort *)((long)plVar40 + 2);
                      *(ushort *)((long)param_2 + uVar42 * 0x88 + 0x332) =
                           *(ushort *)((long)param_2 + uVar42 * 0x88 + 0x332) & 0xff80 |
                           uVar20 & 0x7f;
                      uVar10 = *(ushort *)((long)plVar40 + 2);
                      *(ushort *)((long)param_2 + uVar42 * 0x88 + 0x334) =
                           uVar29 & 0xff80 | uVar10 & 0x7f;
                      *(ushort *)((long)param_2 + uVar42 * 0x88 + 0x332) =
                           *(ushort *)((long)plVar40 + 2) & 0xff80 | uVar20 & 0x7f;
                      *(ushort *)((long)param_2 + uVar42 * 0x88 + 0x334) =
                           *(ushort *)((long)plVar40 + 4) & 0xff80 | uVar10 & 0x7f;
                      *(short *)(param_2 + uVar42 * 0x11 + 0x66) = (short)*plVar40;
                      if ((uVar45 & 0xff) == 0) {
                        sVar15 = 0;
                      }
                      else {
                        puVar1 = (ushort *)(param_2 + uVar42 * 0x11 + 0x58);
                        if ((uVar45 & 0xff) == 1) {
                          sVar15 = 0;
                        }
                        else {
                          sVar15 = 0;
                          uVar29 = uVar45 - (uVar45 & 1);
                          puVar14 = (ushort *)(lVar37 + uVar44 * 0x340 + 0x102);
                          do {
                            puVar32 = puVar14;
                            uVar20 = *puVar32;
                            uVar11 = puVar32[-0x35];
                            if ((short)uVar36 < (short)uVar11) {
                              *puVar1 = uVar11;
                              uVar36 = uVar11;
                            }
                            sVar15 = (puVar32[0x44] & 0x7f) + (uVar20 & 0x7f) + sVar15;
                            uVar20 = puVar32[0xf];
                            if ((short)uVar36 < (short)uVar20) {
                              *puVar1 = uVar20;
                              uVar36 = uVar20;
                            }
                            uVar29 = uVar29 - 2;
                            puVar14 = puVar32 + 0x88;
                          } while ((uVar29 & 0xff) != 0);
                          puVar32 = puVar32 + 0xb;
                        }
                        if ((uVar45 & 1) != 0) {
                          sVar15 = (puVar32[0x7d] & 0x7f) + sVar15;
                          puVar14 = puVar32 + 0x48;
                          puVar32 = puVar32 + 0x44;
                          if ((short)uVar36 < (short)*puVar14) {
                            *puVar1 = *puVar14;
                          }
                        }
                      }
                      uVar45 = *(ushort *)((long)param_2 + uVar42 * 0x88 + 0x32a);
                      uVar36 = uVar45 + sVar15;
                      *(ushort *)((long)param_2 + uVar42 * 0x88 + 0x32a) =
                           uVar45 & 0xff80 | uVar36 & 0x7f;
                      *(ushort *)((long)param_2 + uVar42 * 0x88 + 0x32a) =
                           puVar32[0x39] & 0xff80 | uVar36 & 0x7f;
                      if (((ushort)((uVar36 & 0x7f) + (uVar10 & 0x7f)) < 0x38) &&
                         ((ushort)((*(ushort *)((long)plVar40 + 2) & 0x7f) +
                                  (ushort)*(byte *)((long)param_2 + uVar42 * 0x88 + 0x32d)) < 0x38))
                      {
                        pcVar26 = *(code **)(param_1 + 0x6f4c8);
                        if (pcVar26 != (code *)0x0) {
                          local_1338 = param_2 + uVar42 * 0x11 + 0x57;
                          local_1330 = *(undefined8 *)(param_1 + 0x6f4d0);
                          sVar15 = (*pcVar26)(param_1,&local_1338);
                          if (sVar15 == 0) goto LAB_00103e88;
                        }
                        sVar15 = FUN_001091d0(param_1,param_2,local_70);
                        if ((0 < sVar15) && (uVar21 = uVar21 + 1, param_3 != (void *)0x0)) {
                          if ((short)*plVar40 < 0) {
                            sVar15 = (short)param_2[2] + 1;
                          }
                          else {
                            if ((int)(short)local_70[0] <
                                (int)((uint)*(ushort *)((long)param_2 + 0xb996) -
                                     (uint)*(ushort *)(param_2 + 2))) goto LAB_00103e88;
                            sVar15 = *(ushort *)((long)param_2 + 0xb996) + ~local_70[0];
                          }
                          *(short *)(param_2 + 2) = sVar15;
                        }
                      }
                    }
                  }
                }
              }
            }
LAB_00103e88:
            lVar39 = param_2[0x16e6];
            uVar16 = uVar16 + 1;
            plVar40 = (long *)((long)plVar40 + 6);
          } while (uVar16 < *(ushort *)((long)param_2 + 0xb992));
        }
        *(undefined1 *)(lVar39 + uVar44 * 0x340 + 0x338) = 0;
        lVar39 = param_2[0x16e6];
        puVar3 = (undefined8 *)(lVar39 + uVar44 * 0x340);
        sVar15 = FUN_0010a610(param_1,*puVar3,auStack_998,1);
        uVar38 = (uint)sVar15;
        if (0 < (int)uVar38) {
          lVar24 = lVar39 + uVar44 * 0x340;
          pbVar30 = (byte *)(lVar24 + 0x338);
          do {
            memcpy((void *)(lVar24 + 8),auStack_998,0x88);
            uVar16 = local_926 & 0x7f;
            if ((uVar16 < 0x38) &&
               ((ushort)((*(ushort *)((long)plVar40 + 2) & 0x7f) + (ushort)local_923) < 0x38)) {
              plVar25 = (long *)*param_2;
              if (*plVar25 == local_988) {
                lVar28 = 0;
LAB_001040e8:
                local_6c = (undefined4)plVar25[lVar28 * 10 + 6];
              }
              else {
                if (plVar25[10] == local_988) {
                  lVar28 = 1;
                  goto LAB_001040e8;
                }
                if (plVar25[0x14] == local_988) {
                  lVar28 = 2;
                  goto LAB_001040e8;
                }
                if (plVar25[0x1e] == local_988) {
                  lVar28 = 3;
                  goto LAB_001040e8;
                }
                if (plVar25[0x28] == local_988) {
                  lVar28 = 4;
                  goto LAB_001040e8;
                }
                if (plVar25[0x32] == local_988) {
                  lVar28 = 5;
                  goto LAB_001040e8;
                }
                if (plVar25[0x3c] == local_988) {
                  lVar28 = 6;
                  goto LAB_001040e8;
                }
                if (plVar25[0x46] == local_988) {
                  lVar28 = 7;
                  goto LAB_001040e8;
                }
                if (plVar25[0x50] == local_988) {
                  lVar28 = 8;
                  goto LAB_001040e8;
                }
                if (plVar25[0x5a] == local_988) {
                  lVar28 = 9;
                  goto LAB_001040e8;
                }
                if (plVar25[100] == local_988) {
                  lVar28 = 10;
                  goto LAB_001040e8;
                }
                if (plVar25[0x6e] == local_988) {
                  lVar28 = 0xb;
                  goto LAB_001040e8;
                }
                if (plVar25[0x78] == local_988) {
                  lVar28 = 0xc;
                  goto LAB_001040e8;
                }
                if (plVar25[0x82] == local_988) {
                  lVar28 = 0xd;
                  goto LAB_001040e8;
                }
                if (plVar25[0x8c] == local_988) {
                  lVar28 = 0xe;
                  goto LAB_001040e8;
                }
                if (plVar25[0x96] == local_988) {
                  lVar28 = 0xf;
                  goto LAB_001040e8;
                }
                if (plVar25[0xa0] == local_988) {
                  lVar28 = 0x10;
                  goto LAB_001040e8;
                }
                if (plVar25[0xaa] == local_988) {
                  lVar28 = 0x11;
                  goto LAB_001040e8;
                }
                if (plVar25[0xb4] == local_988) {
                  lVar28 = 0x12;
                  goto LAB_001040e8;
                }
                if (plVar25[0xbe] == local_988) {
                  lVar28 = 0x13;
                  goto LAB_001040e8;
                }
              }
              *pbVar30 = local_932 >> 4;
              if (local_932 < 0x20) {
                if (local_932 >> 4 == 1) break;
              }
              else {
                uVar42 = 1;
                __dest = (void *)(lVar24 + 0x90);
                do {
                  sVar15 = FUN_0010be60(param_1,auStack_998,auStack_12b0,&local_6c);
                  if (sVar15 < 0) {
                    return (int)sVar15;
                  }
                  uVar16 = (local_123e & 0x7f) + uVar16;
                  if (0x37 < uVar16) {
                    *pbVar30 = (byte)uVar42;
                    *(char *)(lVar24 + 0x6e) = (char)((int)uVar42 << 4);
                    goto LAB_001041e8;
                  }
                  memcpy(__dest,auStack_12b0,0x88);
                  memcpy(auStack_998,auStack_12b0,0x88);
                  uVar42 = uVar42 + 1;
                  __dest = (void *)((long)__dest + 0x88);
                } while (uVar42 < *pbVar30);
                if ((uint)*pbVar30 == ((uint)uVar42 & 0xff)) break;
              }
            }
            sVar15 = FUN_0010a610(param_1,*puVar3,auStack_998,1);
            uVar38 = (uint)sVar15;
          } while (0 < (int)uVar38);
        }
LAB_001041e8:
        if ((short)uVar38 < 0) {
          return uVar38;
        }
        if ((uVar38 & 0xffff) == 0) {
          *(undefined1 *)(lVar39 + uVar44 * 0x340 + 0x339) = 0;
        }
      } while( true );
    case 2:
switchD_0010350c_caseD_2:
      plVar40 = (long *)param_2[0x16e6];
      *(undefined2 *)(plVar40 + 0x2cb0) = 0;
      FUN_0011f730(*(undefined8 *)(*param_2 + 0x640),*(undefined2 *)((long)param_2 + 0xb71c),0,
                   &local_78);
      if (*(short *)((long)param_2 + 0xb992) != 0) {
        uVar16 = 0;
        plVar25 = param_2 + 3;
LAB_001042f8:
        uVar36 = *(ushort *)((long)plVar25 + 4);
        uVar45 = *(ushort *)((long)plVar25 + 2);
        *(undefined1 *)(*plVar40 + 0x50) = 0;
        *(undefined1 *)(*plVar40 + 0x51) = 0;
        *(long **)(*plVar40 + 0x28) = param_2 + 0x1454;
        uVar29 = uVar45 >> 7;
        *(undefined8 *)*plVar40 = local_78;
        *(undefined2 *)(*plVar40 + 0x18) = *(undefined2 *)((long)param_2 + 0xb71e);
        *(undefined2 *)(*plVar40 + 0x1a) = 0;
        if (uVar29 == 0) {
          lVar39 = *plVar40;
          uVar20 = *puVar41;
        }
        else {
          lVar39 = *plVar40;
          uVar20 = uVar29;
        }
        FUN_0011f730(*(undefined8 *)(*param_2 + 0x640),uVar20,1,lVar39 + 8);
        *(short *)(*plVar40 + 0x1c) = (short)param_2[0x16e4];
        *(undefined2 *)(*plVar40 + 0x1e) = 0;
        *(undefined8 *)(*plVar40 + 0x10) = 0;
        *(undefined2 *)(*plVar40 + 0x20) = 0;
        *(long *)(*plVar40 + 0x30) = param_2[0x16e5];
        *(ushort *)(*plVar40 + 0x4c) = (uVar36 & 0x7f) - (uVar45 & 0x7f);
        *(undefined8 *)(*plVar40 + 0x38) = 0;
        *(undefined8 *)(*plVar40 + 0x40) = 0;
        *(bool *)(*plVar40 + 0x52) = (*plVar25 & 0x7f0000) != 0;
        sVar15 = FUN_00109f40(param_1,*plVar40,1,local_7c);
        uVar38 = (uint)sVar15;
        if ((int)uVar38 < 0) {
          return uVar38;
        }
        *(bool *)((long)plVar40 + 0x339) = uVar38 != 0;
        if (uVar38 != 0) {
          sVar15 = FUN_0010a610(param_1,*plVar40,auStack_998,1);
          uVar38 = (uint)sVar15;
          if (0 < (int)uVar38) {
            uVar46 = (uint)uVar29;
            if (uVar46 == 0) {
              do {
                memcpy(plVar40 + 1,auStack_998,0x88);
                if ((((local_926 & 0x78) < 0x38) &&
                    ((ushort)((*(ushort *)((long)plVar25 + 2) & 0x7f) + (ushort)local_923) < 0x38))
                   && (*(char *)(*plVar40 + 0x52) == '\0')) goto LAB_001045b4;
                sVar15 = FUN_0010a610(param_1,*plVar40,auStack_998,1);
                uVar38 = (uint)sVar15;
              } while (0 < (int)uVar38);
            }
            else {
              do {
                memcpy(plVar40 + 1,auStack_998,0x88);
                if (((local_926 & 0x78) < 0x38) &&
                   ((ushort)((*(ushort *)((long)plVar25 + 2) & 0x7f) + (ushort)local_923) < 0x38)) {
                  if (*(char *)(*plVar40 + 0x52) == '\0') goto LAB_001045b4;
                  uVar36 = local_926 >> 7;
                  local_68 = 0;
                  if (((uVar36 != 0) && (*(long *)(*param_2 + 0x640) != 0)) &&
                     ((uVar46 <= *(ushort *)((long)param_2 + 0xb71e) &&
                      ((uVar36 <= *(ushort *)(param_2 + 0x16e4) &&
                       (FUN_0011f730(*(long *)(*param_2 + 0x640),uVar36,0,&local_68),
                       (0x80U >> (ulong)(uVar46 - 1 & 7) &
                       (uint)*(byte *)(local_68 + ((ulong)(uVar46 - 1 >> 3) & 0x1fff))) != 0))))))
                  goto LAB_001045b4;
                }
                sVar15 = FUN_0010a610(param_1,*plVar40,auStack_998,1);
                uVar38 = (uint)sVar15;
              } while (0 < (int)uVar38);
            }
          }
          if ((int)uVar38 < 0) {
            return uVar38;
          }
          *(undefined1 *)((long)plVar40 + 0x339) = 0;
        }
        goto LAB_00104588;
      }
LAB_001045d4:
      *(undefined1 *)((long)param_2 + 0x13) = 3;
    }
LAB_0010460c:
    if ((param_3 != (void *)0x0) && (*(ushort *)(param_2 + 2) < *(ushort *)((long)param_2 + 0xb996))
       ) {
      memcpy(param_3,param_2 + 0x57,0x88);
      uVar16 = *(ushort *)((long)param_2 + 0xb996);
      if (1 < uVar16) {
        puVar43 = (undefined2 *)((long)param_2 + 0xb73a);
        uVar44 = 1;
        plVar40 = param_2 + 0x57;
        do {
          memcpy(plVar40,plVar40 + 0x11,0x88);
          puVar43[-1] = *puVar43;
          uVar16 = *(ushort *)((long)param_2 + 0xb996);
          uVar44 = uVar44 + 1;
          puVar43 = puVar43 + 1;
          plVar40 = plVar40 + 0x11;
        } while (uVar44 < uVar16);
      }
      goto LAB_00104ad8;
    }
    lVar39 = param_2[0x16e6];
    uVar16 = *(ushort *)(lVar39 + 0x16580);
    if (uVar16 != 0) {
      uVar45 = 0;
      uVar36 = 0;
      pcVar35 = (char *)(lVar39 + 0x339);
      bVar12 = true;
      iVar23 = -1000;
      do {
        while (*pcVar35 == '\0') {
LAB_001046b8:
          uVar36 = uVar36 + 1;
          pcVar35 = pcVar35 + 0x340;
          if (uVar16 <= uVar36) goto LAB_001046e0;
        }
        sVar15 = *(short *)(pcVar35 + (ulong)(byte)pcVar35[-1] * 0x88 + -0x3b1);
        sVar18 = *(short *)(pcVar35 + (ulong)(byte)pcVar35[-1] * 0x88 + -0x341);
        if (bVar12) {
LAB_00104690:
          iVar23 = (int)sVar15 + (int)sVar18;
          iVar49 = iVar23;
          if (399 < iVar23) {
            iVar49 = 400;
          }
          iVar48 = 100;
          if (99 < iVar23) {
            iVar48 = iVar49;
          }
          iVar23 = (int)sVar15;
          if (((int)sVar18 & 0x80000000U) != 0) {
            iVar23 = iVar48;
          }
          bVar12 = false;
          iVar23 = iVar23 + -1000;
          uVar45 = uVar36;
          goto LAB_001046b8;
        }
        iVar49 = (int)sVar18 + (int)sVar15;
        iVar48 = iVar49;
        if (399 < iVar49) {
          iVar48 = 400;
        }
        iVar4 = 100;
        if (99 < iVar49) {
          iVar4 = iVar48;
        }
        iVar49 = (int)sVar15;
        if (((int)sVar18 & 0x80000000U) != 0) {
          iVar49 = iVar4;
        }
        if (iVar23 < iVar49 + -1000) goto LAB_00104690;
        bVar12 = false;
        uVar36 = uVar36 + 1;
        pcVar35 = pcVar35 + 0x340;
      } while (uVar36 < uVar16);
LAB_001046e0:
      if (bVar12) goto LAB_001049f4;
      uVar42 = (ulong)uVar45;
      lVar39 = lVar39 + uVar42 * 0x340;
      uVar44 = (ulong)*(ushort *)((long)param_2 + 0xb996);
      *(ushort *)(param_2 + uVar44 * 0x11 + 0x67) = *(ushort *)(lVar39 + 0x88) & 0xfff0 | 1;
      param_2[uVar44 * 0x11 + 0x57] = param_2[0x16e5];
      lVar24 = *(long *)(lVar39 + 0x10);
      param_2[uVar44 * 0x11 + 0x59] = *(long *)(lVar39 + 0x18);
      param_2[uVar44 * 0x11 + 0x58] = lVar24;
      lVar24 = *(long *)(lVar39 + 0x20);
      lVar19 = *(long *)(lVar39 + 0x28);
      lVar28 = *(long *)(lVar39 + 0x30);
      param_2[uVar44 * 0x11 + 0x5d] = *(long *)(lVar39 + 0x38);
      param_2[uVar44 * 0x11 + 0x5c] = lVar28;
      param_2[uVar44 * 0x11 + 0x5b] = lVar19;
      param_2[uVar44 * 0x11 + 0x5a] = lVar24;
      lVar24 = *(long *)(lVar39 + 0x40);
      lVar19 = *(long *)(lVar39 + 0x48);
      lVar28 = *(long *)(lVar39 + 0x50);
      param_2[uVar44 * 0x11 + 0x61] = *(long *)(lVar39 + 0x58);
      param_2[uVar44 * 0x11 + 0x60] = lVar28;
      param_2[uVar44 * 0x11 + 0x5f] = lVar19;
      param_2[uVar44 * 0x11 + 0x5e] = lVar24;
      lVar24 = *(long *)(lVar39 + 0x60);
      lVar19 = *(long *)(lVar39 + 0x68);
      lVar28 = *(long *)(lVar39 + 0x70);
      param_2[uVar44 * 0x11 + 0x65] = *(long *)(lVar39 + 0x78);
      uVar16 = *(ushort *)((long)param_2 + uVar44 * 0x88 + 0x332);
      param_2[uVar44 * 0x11 + 100] = lVar28;
      param_2[uVar44 * 0x11 + 99] = lVar19;
      param_2[uVar44 * 0x11 + 0x62] = lVar24;
      puVar41 = (ushort *)((long)param_2 + uVar42 * 6 + 0x1a);
      uVar36 = *puVar41;
      *(ushort *)((long)param_2 + uVar44 * 0x88 + 0x332) = uVar16 & 0xff80 | uVar36 & 0x7f;
      uVar16 = *puVar41;
      *(ushort *)((long)param_2 + uVar44 * 0x88 + 0x334) =
           *(ushort *)((long)param_2 + uVar44 * 0x88 + 0x334) & 0xff80 | uVar16 & 0x7f;
      *(ushort *)((long)param_2 + uVar44 * 0x88 + 0x332) = *puVar41 & 0xff80 | uVar36 & 0x7f;
      *(ushort *)((long)param_2 + uVar44 * 0x88 + 0x334) =
           *(ushort *)((long)param_2 + uVar42 * 6 + 0x1c) & 0xff80 | uVar16 & 0x7f;
      psVar33 = (short *)((long)param_2 + uVar42 * 6 + 0x18);
      *(short *)(param_2 + uVar44 * 0x11 + 0x66) = *psVar33;
      if ((ushort)((*puVar41 & 0x7f) + (ushort)*(byte *)((long)param_2 + uVar44 * 0x88 + 0x32d)) <
          0x38) {
        if ((ushort)((*(ushort *)((long)param_2 + uVar44 * 0x88 + 0x32a) & 0x7f) + (uVar16 & 0x7f))
            < 0x38) {
          pcVar26 = *(code **)(param_1 + 0x6f4c8);
          if (pcVar26 != (code *)0x0) {
            local_1338 = param_2 + uVar44 * 0x11 + 0x57;
            local_1330 = *(undefined8 *)(param_1 + 0x6f4d0);
            sVar15 = (*pcVar26)(param_1,&local_1338);
            if (sVar15 == 0) goto LAB_00104880;
          }
          sVar15 = FUN_001091d0(param_1,param_2,local_70);
          if ((0 < sVar15) && (uVar21 = uVar21 + 1, param_3 != (void *)0x0)) {
            if (*psVar33 < 0) {
              sVar15 = (short)param_2[2] + 1;
            }
            else {
              if ((int)(short)local_70[0] <
                  (int)((uint)*(ushort *)((long)param_2 + 0xb996) - (uint)*(ushort *)(param_2 + 2)))
              goto LAB_00104880;
              sVar15 = *(ushort *)((long)param_2 + 0xb996) + ~local_70[0];
            }
            *(short *)(param_2 + 2) = sVar15;
          }
        }
LAB_00104880:
        *(undefined1 *)(param_2[0x16e6] + uVar42 * 0x340 + 0x338) = 0;
        lVar39 = param_2[0x16e6];
        plVar40 = (long *)(lVar39 + uVar42 * 0x340);
        sVar15 = FUN_0010a610(param_1,*plVar40,auStack_998,1);
        uVar38 = (uint)sVar15;
        if (0 < (int)uVar38) {
          do {
            memcpy((void *)(lVar39 + uVar42 * 0x340 + 8),auStack_998,0x88);
            if (((local_926 & 0x78) < 0x38) &&
               ((ushort)((*puVar41 & 0x7f) + (ushort)local_923) < 0x38)) {
              if (*(char *)(*plVar40 + 0x52) != '\0') {
                uVar16 = *puVar41 >> 7;
                local_68 = 0;
                if ((((uVar16 == 0) || (uVar36 = local_926 >> 7, uVar36 == 0)) ||
                    (*(long *)(*param_2 + 0x640) == 0)) ||
                   (((*(ushort *)((long)param_2 + 0xb71e) < uVar16 ||
                     (*(ushort *)(param_2 + 0x16e4) < uVar36)) ||
                    (FUN_0011f730(*(long *)(*param_2 + 0x640),uVar36,0,&local_68),
                    (0x80U >> (ulong)(uVar16 - 1 & 7) &
                    (uint)*(byte *)(local_68 + ((ulong)(uVar16 - 1 >> 3) & 0x1fff))) == 0))))
                goto LAB_00104904;
              }
              local_932 = 0x10;
              *(undefined1 *)(lVar39 + uVar42 * 0x340 + 0x338) = 1;
              goto LAB_0010460c;
            }
LAB_00104904:
            sVar15 = FUN_0010a610(param_1,*plVar40,auStack_998,1);
            uVar38 = (uint)sVar15;
          } while (0 < (int)uVar38);
        }
        if ((int)uVar38 < 0) {
          return uVar38;
        }
        *(undefined1 *)(lVar39 + uVar42 * 0x340 + 0x339) = 0;
      }
      goto LAB_0010460c;
    }
LAB_001049f4:
    *(undefined1 *)((long)param_2 + 0x13) = 5;
  }
  if ((param_3 != (void *)0x0) && (*(short *)((long)param_2 + 0xb996) != 0)) {
    memcpy(param_3,param_2 + 0x57,0x88);
    uVar16 = *(ushort *)((long)param_2 + 0xb996);
    if (1 < uVar16) {
      puVar43 = (undefined2 *)((long)param_2 + 0xb73a);
      uVar44 = 1;
      plVar40 = param_2 + 0x57;
      do {
        memcpy(plVar40,plVar40 + 0x11,0x88);
        puVar43[-1] = *puVar43;
        uVar16 = *(ushort *)((long)param_2 + 0xb996);
        uVar44 = uVar44 + 1;
        puVar43 = puVar43 + 1;
        plVar40 = plVar40 + 0x11;
      } while (uVar44 < uVar16);
    }
LAB_00104ad8:
    *(ushort *)((long)param_2 + 0xb996) = uVar16 - 1;
    uVar21 = 1;
  }
  return uVar21;
LAB_00105188:
  local_1358 = (ulong)(iVar23 + 1U);
  uVar44 = (ulong)*(ushort *)((long)param_2 + (long)(short)(iVar23 + 1U) * 6 + 0x1c) & 0x7f;
  uVar38 = (uint)uVar44;
  if (uVar38 == 0) goto LAB_00105570;
  if (uVar38 <= *(ushort *)((long)param_2 + 0xb994)) {
    lVar39 = param_2[0x16e5];
    uVar42 = uVar44;
LAB_001051c4:
    do {
      uVar21 = (uint)uVar42;
      if (uVar38 != (uVar21 & 0xffff)) {
        sVar15 = (short)uVar42 - (short)uVar44;
        local_968 = lVar39 + uVar44 * 2;
        local_94c = sVar15;
        sVar18 = FUN_00109f40(param_1,auStack_998,1,&local_78);
        if (sVar18 == 0) {
          if ((char)local_78 == '\x01') break;
        }
        else {
          uVar46 = (uint)sVar18;
          if ((int)uVar46 < 0) goto LAB_0010569c;
          uVar51 = local_1358;
          if (((uint)local_1358 & 0xffff) < (uint)*(ushort *)((long)param_2 + 0xb992)) {
            do {
              uVar50 = (uint)uVar51;
              if ((*(ushort *)((long)param_2 + (uVar51 & 0xffff) * 6 + 0x1c) & 0x7f) != uVar38)
              break;
              memcpy(auStack_12b0,auStack_998,0x918);
              sVar18 = FUN_0010a610(param_1,auStack_12b0,&local_1338,1);
              uVar46 = (uint)sVar18;
              if (0 < (int)uVar46) {
LAB_001052a0:
                uVar50 = (uint)uVar51;
                uVar47 = uVar51 & 0xffff;
                pbVar30 = (byte *)((long)param_2 + uVar47 * 6 + 0x1a);
                puVar32 = (ushort *)((long)param_2 + uVar47 * 6 + 0x1c);
                do {
                  if ((*pbVar30 & 0x7f) == 0) {
LAB_0010533c:
                    if ((ushort)((*puVar32 & 0x7f) + (local_12c6 & 0x7f)) < 0x38) goto LAB_0010537c;
                  }
                  else {
                    local_68 = 0;
                    uVar16 = *puVar32 >> 7;
                    uVar36 = local_12c8 >> 7;
                    if ((((*(long *)(*param_2 + 0x640) != 0 && uVar16 != 0) && uVar36 != 0) &&
                        ((uint)uVar36 <= (uint)*(ushort *)((long)param_2 + 0xb71e))) &&
                       ((uVar16 <= *(ushort *)(param_2 + 0x16e4) &&
                        (FUN_0011f730(*(long *)(*param_2 + 0x640),uVar16,0,&local_68),
                        uVar22 = uVar36 - 1,
                        (0x80U >> (ulong)(uVar22 & 7) &
                        (uint)*(byte *)(local_68 + ((ulong)(uVar22 >> 3) & 0x1fff))) != 0))))
                    goto LAB_0010533c;
                  }
                  sVar18 = FUN_0010a610(param_1,auStack_12b0,&local_1338,1);
                  uVar46 = (uint)sVar18;
                  if ((int)uVar46 < 1) break;
                } while( true );
              }
LAB_001054d4:
              if ((short)uVar46 < 0) goto LAB_0010569c;
              uVar51 = (ulong)(uVar50 + 1);
            } while ((uVar50 + 1 & 0xffff) < (uint)*(ushort *)((long)param_2 + 0xb992));
          }
        }
      }
      if ((*(byte *)(param_2[0x16e5] + (uVar42 & 0xffff) * 2) & 0xfc) == 0xd8) {
        iVar23 = 1;
        if (*(short *)(param_2[0x16e5] + (uVar42 & 0xffff) * 2 + 2) != 0) {
          iVar23 = 2;
        }
        uVar42 = (ulong)(iVar23 + uVar21);
        if ((uint)*(ushort *)((long)param_2 + 0xb994) < (iVar23 + uVar21 & 0xffff)) break;
        goto LAB_001051c4;
      }
      uVar42 = (ulong)(uVar21 + 1);
    } while ((uVar21 + 1 & 0xffff) <= (uint)*(ushort *)((long)param_2 + 0xb994));
    uVar21 = (uint)*(ushort *)((long)param_2 + 0xb992);
  }
  if (uVar21 == 0) goto LAB_00105570;
  goto LAB_00105130;
LAB_0010537c:
  puVar34 = (undefined4 *)((long)param_2 + uVar47 * 6 + 0x18);
  uVar36 = *(ushort *)((long)param_2 + 0xb992);
  psVar33 = (short *)((long)param_2 + (ulong)uVar36 * 6 + 0x18);
  uVar7 = *puVar34;
  psVar33[2] = *(short *)(puVar34 + 1);
  *(undefined4 *)psVar33 = uVar7;
  puVar32 = (ushort *)(psVar33 + 1);
  uVar16 = *puVar32;
  if ((*pbVar30 & 0x7f) == 0) {
    uVar16 = local_12c8 & 0xff80 | uVar16 & 0x7f;
    *puVar32 = uVar16;
  }
  lVar24 = (ulong)uVar36 * 6;
  *puVar32 = uVar16 & 0xff80 | uVar16 + sVar15 & 0x7f;
  *(ushort *)((long)param_2 + lVar24 + 0x1c) =
       local_12c6 & 0xff80 | *(short *)((long)param_2 + lVar24 + 0x1c) + sVar15 & 0x7fU;
  *psVar33 = (short)local_1330 + *psVar33;
  uVar16 = *(ushort *)((long)param_2 + 0xb992);
  uVar47 = (ulong)uVar16;
  if (uVar47 != 0) {
    psVar33 = (short *)((long)param_2 + uVar47 * 6 + 0x18);
    uVar36 = 0;
    uVar45 = psVar33[2] & 0x7f;
    puVar32 = (ushort *)((long)param_2 + 0x1c);
    do {
      uVar29 = *puVar32 & 0x7f;
      if (uVar29 == uVar45) {
        uVar29 = *(ushort *)((long)param_2 + uVar47 * 6 + 0x1a) ^ puVar32[-1];
        if ((ushort)(uVar29 | *puVar32 ^ psVar33[2]) < 0x80 && (uVar29 & 0x7f) == 0) {
          if (-1 < (short)uVar36) {
            psVar27 = (short *)((long)param_2 + (long)(short)uVar36 * 6 + 0x18);
            if (*psVar27 < *psVar33) {
              uVar7 = *(undefined4 *)psVar33;
              *(short *)((long)param_2 + (long)(short)uVar36 * 6 + 0x1c) = psVar33[2];
              *(undefined4 *)psVar27 = uVar7;
              FUN_00109030(param_2);
            }
            goto LAB_001054ac;
          }
          break;
        }
      }
      else if (uVar29 < uVar45) break;
      uVar36 = uVar36 + 1;
      puVar32 = puVar32 + 3;
    } while (uVar36 < uVar16);
  }
  *(ushort *)((long)param_2 + 0xb992) = uVar16 + 1;
  FUN_00109030(param_2,uVar16);
  uVar22 = (uint)*(ushort *)((long)param_2 + 0xb992);
  if (0x6e < *(ushort *)((long)param_2 + 0xb992)) {
    uVar22 = 0x6e;
    *(undefined2 *)((long)param_2 + 0xb992) = 0x6e;
  }
  uVar50 = uVar50 + 1;
  uVar51 = (ulong)uVar50;
  local_1358 = (ulong)((int)local_1358 + 1);
  if (uVar22 <= (uVar50 & 0xffff)) goto LAB_001054d4;
LAB_001054ac:
  uVar50 = (uint)uVar51;
  sVar18 = FUN_0010a610(param_1,auStack_12b0,&local_1338,1);
  uVar46 = (uint)sVar18;
  if ((int)uVar46 < 1) goto LAB_001054d4;
  goto LAB_001052a0;
LAB_001045b4:
  local_932 = 0x10;
  *(undefined1 *)(plVar40 + 0x67) = 1;
LAB_00104588:
  *(short *)(param_2[0x16e6] + 0x16580) = *(short *)(param_2[0x16e6] + 0x16580) + 1;
  uVar16 = uVar16 + 1;
  plVar40 = plVar40 + 0x68;
  plVar25 = (long *)((long)plVar25 + 6);
  if (*(ushort *)((long)param_2 + 0xb992) <= uVar16) goto LAB_001045d4;
  goto LAB_001042f8;
}



void FUN_039c1820(long param_1,long param_2,long param_3)

{
  uint *puVar1;
  undefined *puVar2;
  long lVar3;
  ushort uVar4;
  byte bVar5;
  uint uVar6;
  undefined1 uVar7;
  char cVar8;
  bool bVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  undefined8 uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  byte *pbVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  ulong uVar25;
  undefined8 uVar26;
  long lVar27;
  ulong uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined8 *puVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  uint local_80;
  undefined8 local_7c;
  
  uVar19 = *(uint *)(param_1 + 0xb8);
  pbVar21 = *(byte **)(param_1 + 0xc0);
  bVar12 = *(char *)(param_1 + 0xcd) < '\0';
  iVar16 = 0;
  bVar9 = *(float *)(param_1 + 0xd0) <= 0.0;
  if (uVar19 != 0) {
    uVar17 = 0;
    do {
      lVar27 = (long)(int)uVar17;
      uVar17 = uVar17 + 1;
      if (0.0 < *(float *)(pbVar21 + lVar27 * 8 + 4) && -1 < (char)pbVar21[lVar27 * 8]) {
        iVar16 = iVar16 + 1;
      }
    } while (uVar19 != uVar17);
  }
  bVar5 = *pbVar21;
  if ((char)bVar5 < '\0') {
    bVar13 = true;
  }
  else {
    uVar17 = (uint)bVar5;
    if (*(uint *)(param_3 + 0x1d0) <= (uint)bVar5) {
      uVar17 = 0;
    }
    bVar13 = *(short *)(*(long *)(param_3 + 0x1d8) + (ulong)uVar17 * 0x910 + 0x2a2) == 9;
  }
  bVar5 = pbVar21[(ulong)(1 < uVar19) * 8];
  if ((char)bVar5 < '\0') {
    bVar14 = true;
  }
  else {
    uVar19 = (uint)bVar5;
    if (*(uint *)(param_3 + 0x1d0) <= (uint)bVar5) {
      uVar19 = 0;
    }
    bVar14 = *(short *)(*(long *)(param_3 + 0x1d8) + (ulong)uVar19 * 0x910 + 0x2a2) == 9;
  }
  plVar24 = *(long **)(param_1 + 0x158);
  lVar22 = *(long *)(*(long *)(*(long *)(DAT_05ae9310 + 0x10) + 0x2f8) + 8);
  uVar19 = *(uint *)(lVar22 + 0x30);
  lVar23 = *(long *)(lVar22 + 0x38);
  lVar27 = 0x70;
  if (uVar19 < 3) {
    lVar27 = 0;
  }
  lVar3 = 0xa8;
  if (uVar19 < 4) {
    lVar3 = 0;
  }
  uVar19 = (uint)*(ushort *)(lVar23 + (ulong)(1 < uVar19) * 0x38 + 0x30);
  if (!bVar13) {
    uVar19 = 0;
  }
  uVar17 = (uint)*(ushort *)(lVar23 + lVar27 + 0x30);
  if (!bVar14) {
    uVar17 = 0;
  }
  uVar18 = (uint)*(ushort *)(lVar23 + lVar3 + 0x30);
  if (bVar9 || bVar12) {
    uVar18 = 0;
  }
  iVar16 = uVar19 + iVar16 * (uint)*(ushort *)(lVar23 + 0x30) + uVar17 + uVar18;
  if (iVar16 < 1) {
    lVar27 = *(long *)(lVar22 + 0x18);
  }
  else {
    uVar19 = iVar16 - 1;
    if (*(uint *)(lVar22 + 0x20) <= uVar19) {
      uVar19 = 0;
    }
    lVar27 = *(long *)(lVar22 + 0x28) + (ulong)uVar19 * 0x150;
  }
  FUN_03907810(lVar27,param_2);
  FUN_01557430(lVar27,param_2,0,param_1 + 0x310,0);
  FUN_01557430(lVar27,param_2,1,param_1 + 0x388,0);
  puVar1 = (uint *)(lVar27 + 0x14);
  do {
    uVar19 = *puVar1;
    cVar8 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar13) {
      *puVar1 = uVar19 | 0x80000000;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if ((uVar19 & 0x7fffffff) != 0) {
    if ((int)uVar19 < 0) {
      if ((int)*puVar1 < 0) {
        lVar22 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar22 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar27);
    }
  }
  do {
    cVar8 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar13) {
      *puVar1 = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  FUN_0390d290(param_3 + 0x608,param_2,*(undefined8 *)(lVar27 + 0x68),0xffffffff,0);
  uVar19 = *(uint *)(param_1 + 0xb8);
  if (0 < (int)uVar19) {
    lVar22 = *(long *)PTR_DAT_04bb29d0;
    uVar17 = 0;
    do {
      uVar18 = uVar17 + 1;
      if (*(uint *)(param_1 + 0xb8) <= uVar17) {
        uVar17 = 0;
      }
      bVar5 = *(byte *)(*(long *)(param_1 + 0xc0) + (ulong)uVar17 * 8);
      if (-1 < (char)bVar5) {
        lVar23 = *(long *)(param_3 + 0x1d8);
        uVar17 = (uint)bVar5;
        if (*(uint *)(param_3 + 0x1d0) <= (uint)bVar5) {
          uVar17 = 0;
        }
        do {
          uVar6 = *puVar1;
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar13) {
            *puVar1 = uVar6 | 0x80000000;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if ((uVar6 & 0x7fffffff) != 0) {
          if ((int)uVar6 < 0) {
            while ((int)*puVar1 < 0) {
              nn::os::ConvertToTimeSpan(lVar22 / 1000000);
              nn::os::SleepThread();
            }
          }
          else {
            FUN_03907b80(lVar27);
          }
        }
        uVar6 = (uint)(char)uVar18;
        do {
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar13) {
            *puVar1 = 0;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (*(uint *)(lVar27 + 0x60) <= uVar6) {
          uVar6 = 0;
        }
        FUN_0390d290(lVar23 + (ulong)uVar17 * 0x910 + 0x188,param_2,
                     *(long *)(lVar27 + 0x68) + (long)(int)uVar6 * 0x18,0xffffffff,0);
      }
      uVar17 = uVar18;
    } while (uVar18 != uVar19);
  }
  lVar27 = *(long *)PTR_DAT_04bbd7e0;
  uVar26 = *(undefined8 *)(param_2 + 0xb8);
  (**(code **)PTR_DAT_04bcf1a8)(uVar26,0x10,lVar27 + 0x1024);
  (*DAT_04c62870)(uVar26,0x10,lVar27 + 0x1068);
  iVar16 = *(int *)(lVar27 + 0x1010);
  if (iVar16 != 0) {
    lVar27 = *(long *)(lVar27 + 0x1018);
    uVar28 = 0;
    uVar25 = 0;
    do {
      lVar22 = *(long *)(lVar27 + (-(uVar25 >> 0x1f) & 0xfffffff800000000 | uVar25 << 3));
      if (lVar22 != 0) {
        uVar15 = (*DAT_04c620e0)(lVar22 + 8);
        (**(code **)PTR_DAT_04bcf1e8)
                  (uVar26,uVar28 & 0xffffffff,uVar15,*(undefined4 *)(lVar22 + 0x118));
      }
      uVar28 = uVar25 + 1;
      uVar25 = uVar28 & 0xffffffff;
    } while (iVar16 != (int)uVar28);
  }
  puVar10 = PTR_DAT_04bc1010;
  bVar5 = *(byte *)(param_1 + 0x279);
  uVar19 = (uint)bVar5 - (uint)*(byte *)(param_1 + 0xcc);
  puVar31 = &DAT_04c620e0;
  if (uVar19 != 0) {
    uVar17 = 0;
    if (uVar19 < 2) {
      uVar19 = 1;
    }
    uVar29 = 0x112;
    uVar30 = 0x12;
    puVar2 = PTR_DAT_04bd0f08 + 0x10;
    do {
      uVar4 = *(ushort *)(param_1 + 0x270);
      plVar24[2] = 0;
      uVar18 = (uint)uVar4;
      if (uVar4 < 2) {
        uVar18 = 1;
      }
      fVar32 = (float)(uVar18 >> (ulong)(uVar17 & 0x1f));
      lVar27 = plVar24[4];
      *(float *)(plVar24 + 1) = fVar32;
      *(float *)((long)plVar24 + 0xc) = fVar32;
      *(float *)(plVar24 + 3) = fVar32;
      *(float *)((long)plVar24 + 0x1c) = fVar32;
      uVar7 = (undefined1)uVar17;
      if (uVar17 != *(byte *)(lVar27 + 0xbe)) {
        puVar1 = (uint *)(lVar27 + 0xb8);
        do {
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar13) {
            *puVar1 = *puVar1 | 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        *(undefined1 *)(lVar27 + 0xbe) = uVar7;
      }
      lVar27 = plVar24[5];
      if (uVar17 != *(byte *)(lVar27 + 0xbe)) {
        puVar1 = (uint *)(lVar27 + 0xb8);
        do {
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar13) {
            *puVar1 = *puVar1 | 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        *(undefined1 *)(lVar27 + 0xbe) = uVar7;
      }
      lVar27 = plVar24[6];
      if (uVar17 != *(byte *)(lVar27 + 0xbe)) {
        puVar1 = (uint *)(lVar27 + 0xb8);
        do {
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar13) {
            *puVar1 = *puVar1 | 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        *(undefined1 *)(lVar27 + 0xbe) = uVar7;
      }
      lVar27 = plVar24[7];
      if (uVar17 != *(byte *)(lVar27 + 0xbe)) {
        puVar1 = (uint *)(lVar27 + 0xb8);
        do {
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar13) {
            *puVar1 = *puVar1 | 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        *(undefined1 *)(lVar27 + 0xbe) = uVar7;
      }
      lVar27 = plVar24[8];
      if (uVar17 != *(byte *)(lVar27 + 0xbe)) {
        puVar1 = (uint *)(lVar27 + 0xb8);
        do {
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar13) {
            *puVar1 = *puVar1 | 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        *(undefined1 *)(lVar27 + 0xbe) = uVar7;
      }
      lVar27 = plVar24[9];
      if (uVar17 != *(byte *)(lVar27 + 0xbe)) {
        puVar1 = (uint *)(lVar27 + 0xb8);
        do {
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar13) {
            *puVar1 = *puVar1 | 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        *(undefined1 *)(lVar27 + 0xbe) = uVar7;
      }
      (**(code **)(*plVar24 + 0x38))(plVar24,param_2);
      local_90 = 0x7f7fffff7f7fffff;
      local_88 = 0xff7fffffff7fffff;
      local_7c = 0x3f80000000000000;
      local_80 = DAT_05ae77d0;
      if (DAT_05ae77d0 < 6) {
        if ((1 << (ulong)(DAT_05ae77d0 & 0x1f) & 0x39U) == 0) {
          fVar34 = *(float *)(plVar24 + 1);
          fVar32 = *(float *)((long)plVar24 + 0xc);
        }
        else {
          fVar32 = *(float *)(plVar24 + 1);
          fVar34 = *(float *)((long)plVar24 + 0xc);
        }
        fVar33 = fVar32;
        if (fVar32 <= 0.0) {
          fVar33 = 0.0;
        }
        fVar36 = 0.0;
        if (fVar32 <= 0.0) {
          fVar36 = fVar32;
        }
        fVar35 = fVar34;
        fVar32 = 0.0;
        if (fVar34 <= 0.0) {
          fVar35 = 0.0;
          fVar32 = fVar34;
        }
        local_90 = CONCAT44(fVar32,fVar36);
        local_88 = CONCAT44(fVar35,fVar33);
      }
      local_98 = puVar2;
      FUN_038e77e4(&local_98,param_2,plVar24);
      lVar27 = *(long *)PTR_DAT_04bbd7e8;
      iVar16 = *(int *)(lVar27 + 0x480);
      if (iVar16 != 0) {
        uVar20 = *(undefined4 *)(lVar27 + 0x464);
        uVar15 = *(undefined8 *)(param_2 + 0xb8);
        uVar26 = (**(code **)PTR_DAT_04bbd560)(lVar27 + 0x488);
        (**(code **)PTR_DAT_04bbd568)(uVar15,uVar20,*(undefined4 *)(lVar27 + 0x460),iVar16,uVar26);
      }
      puVar11 = PTR_DAT_04bcf2a8;
      uVar18 = *(uint *)(plVar24[4] + 0x58);
      if (uVar18 != 0xffffffff) {
        lVar27 = *(long *)puVar10;
        if ((*(uint *)(lVar27 + 0x5c8) >> 3 & 1) == 0) {
          uVar6 = uVar18 - *(ushort *)(lVar27 + 0x3da);
          if (*(uint *)(lVar27 + 0x368) <= uVar6) {
            uVar6 = 0;
          }
          if ((*(uint *)(*(long *)(lVar27 + 0x370) + (long)(int)uVar6 * 0x20 + 4) >> 2 & 1) != 0)
          goto LAB_039c1fd0;
          uVar28 = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar18 & 0x3f);
        }
        else {
LAB_039c1fd0:
          bVar13 = (*(uint *)(lVar27 + 800) & 2) != 0;
          if ((*(uint *)(lVar27 + 0x5c8) >> 5 & 1) == 0) {
            uVar20 = uVar30;
            if (bVar13) {
              uVar20 = uVar29;
            }
          }
          else {
            uVar20 = 0x11;
            if (bVar13) {
              uVar20 = 0x111;
            }
          }
          (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar20);
          uVar28 = 0;
        }
        *(ulong *)(param_2 + 0x100) = uVar28;
      }
      uVar18 = *(uint *)(plVar24[5] + 0x58);
      if (uVar18 != 0xffffffff) {
        lVar27 = *(long *)puVar10;
        if ((*(uint *)(lVar27 + 0x5c8) >> 3 & 1) == 0) {
          uVar6 = uVar18 - *(ushort *)(lVar27 + 0x3da);
          if (*(uint *)(lVar27 + 0x368) <= uVar6) {
            uVar6 = 0;
          }
          if ((*(uint *)(*(long *)(lVar27 + 0x370) + (long)(int)uVar6 * 0x20 + 4) >> 2 & 1) != 0)
          goto LAB_039c2060;
          uVar28 = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar18 & 0x3f);
        }
        else {
LAB_039c2060:
          bVar13 = (*(uint *)(lVar27 + 800) & 2) != 0;
          if ((*(uint *)(lVar27 + 0x5c8) >> 5 & 1) == 0) {
            uVar20 = uVar30;
            if (bVar13) {
              uVar20 = uVar29;
            }
          }
          else {
            uVar20 = 0x11;
            if (bVar13) {
              uVar20 = 0x111;
            }
          }
          (**(code **)puVar11)(*(undefined8 *)(param_2 + 0xb8),uVar20);
          uVar28 = 0;
        }
        *(ulong *)(param_2 + 0x100) = uVar28;
      }
      uVar18 = *(uint *)(plVar24[6] + 0x58);
      if (uVar18 != 0xffffffff) {
        lVar27 = *(long *)puVar10;
        if ((*(uint *)(lVar27 + 0x5c8) >> 3 & 1) == 0) {
          uVar6 = uVar18 - *(ushort *)(lVar27 + 0x3da);
          if (*(uint *)(lVar27 + 0x368) <= uVar6) {
            uVar6 = 0;
          }
          if ((*(uint *)(*(long *)(lVar27 + 0x370) + (long)(int)uVar6 * 0x20 + 4) >> 2 & 1) != 0)
          goto LAB_039c20f0;
          uVar28 = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar18 & 0x3f);
        }
        else {
LAB_039c20f0:
          bVar13 = (*(uint *)(lVar27 + 800) & 2) != 0;
          if ((*(uint *)(lVar27 + 0x5c8) >> 5 & 1) == 0) {
            uVar20 = uVar30;
            if (bVar13) {
              uVar20 = uVar29;
            }
          }
          else {
            uVar20 = 0x11;
            if (bVar13) {
              uVar20 = 0x111;
            }
          }
          (**(code **)puVar11)(*(undefined8 *)(param_2 + 0xb8),uVar20);
          uVar28 = 0;
        }
        *(ulong *)(param_2 + 0x100) = uVar28;
      }
      uVar18 = *(uint *)(plVar24[7] + 0x58);
      if (uVar18 != 0xffffffff) {
        lVar27 = *(long *)puVar10;
        if ((*(uint *)(lVar27 + 0x5c8) >> 3 & 1) == 0) {
          uVar6 = uVar18 - *(ushort *)(lVar27 + 0x3da);
          if (*(uint *)(lVar27 + 0x368) <= uVar6) {
            uVar6 = 0;
          }
          if ((*(uint *)(*(long *)(lVar27 + 0x370) + (long)(int)uVar6 * 0x20 + 4) >> 2 & 1) != 0)
          goto LAB_039c2180;
          uVar28 = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar18 & 0x3f);
        }
        else {
LAB_039c2180:
          bVar13 = (*(uint *)(lVar27 + 800) & 2) != 0;
          if ((*(uint *)(lVar27 + 0x5c8) >> 5 & 1) == 0) {
            uVar20 = uVar30;
            if (bVar13) {
              uVar20 = uVar29;
            }
          }
          else {
            uVar20 = 0x11;
            if (bVar13) {
              uVar20 = 0x111;
            }
          }
          (**(code **)puVar11)(*(undefined8 *)(param_2 + 0xb8),uVar20);
          uVar28 = 0;
        }
        *(ulong *)(param_2 + 0x100) = uVar28;
      }
      uVar18 = *(uint *)(plVar24[8] + 0x58);
      if (uVar18 != 0xffffffff) {
        lVar27 = *(long *)puVar10;
        if ((*(uint *)(lVar27 + 0x5c8) >> 3 & 1) == 0) {
          uVar6 = uVar18 - *(ushort *)(lVar27 + 0x3da);
          if (*(uint *)(lVar27 + 0x368) <= uVar6) {
            uVar6 = 0;
          }
          if ((*(uint *)(*(long *)(lVar27 + 0x370) + (long)(int)uVar6 * 0x20 + 4) >> 2 & 1) != 0)
          goto LAB_039c2210;
          uVar28 = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar18 & 0x3f);
        }
        else {
LAB_039c2210:
          bVar13 = (*(uint *)(lVar27 + 800) & 2) != 0;
          if ((*(uint *)(lVar27 + 0x5c8) >> 5 & 1) == 0) {
            uVar20 = uVar30;
            if (bVar13) {
              uVar20 = uVar29;
            }
          }
          else {
            uVar20 = 0x11;
            if (bVar13) {
              uVar20 = 0x111;
            }
          }
          (**(code **)puVar11)(*(undefined8 *)(param_2 + 0xb8),uVar20);
          uVar28 = 0;
        }
        *(ulong *)(param_2 + 0x100) = uVar28;
      }
      uVar18 = *(uint *)(plVar24[9] + 0x58);
      if (uVar18 != 0xffffffff) {
        lVar27 = *(long *)puVar10;
        if ((*(uint *)(lVar27 + 0x5c8) >> 3 & 1) == 0) {
          uVar6 = uVar18 - *(ushort *)(lVar27 + 0x3da);
          if (*(uint *)(lVar27 + 0x368) <= uVar6) {
            uVar6 = 0;
          }
          if ((*(uint *)(*(long *)(lVar27 + 0x370) + (long)(int)uVar6 * 0x20 + 4) >> 2 & 1) != 0)
          goto LAB_039c22a0;
          uVar28 = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar18 & 0x3f);
        }
        else {
LAB_039c22a0:
          bVar13 = (*(uint *)(lVar27 + 800) & 2) != 0;
          if ((*(uint *)(lVar27 + 0x5c8) >> 5 & 1) == 0) {
            uVar20 = uVar30;
            if (bVar13) {
              uVar20 = uVar29;
            }
          }
          else {
            uVar20 = 0x11;
            if (bVar13) {
              uVar20 = 0x111;
            }
          }
          (**(code **)puVar11)(*(undefined8 *)(param_2 + 0xb8),uVar20);
          uVar28 = 0;
        }
        *(ulong *)(param_2 + 0x100) = uVar28;
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar19);
    bVar5 = *(byte *)(param_1 + 0xcc);
    puVar31 = (undefined8 *)PTR_DAT_04bbd560;
  }
  puVar2 = PTR_DAT_04bbd7e0;
  if (bVar5 != 0) {
    lVar22 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x2f8) + 8);
    uVar19 = *(uint *)(lVar22 + 0x30);
    lVar23 = *(long *)(lVar22 + 0x38);
    lVar27 = 0x70;
    if (uVar19 < 3) {
      lVar27 = 0;
    }
    lVar3 = 0xa8;
    if (uVar19 < 4) {
      lVar3 = 0;
    }
    uVar17 = (uint)*(ushort *)(lVar23 + lVar3 + 0x30);
    if (bVar9 || bVar12) {
      uVar17 = 0;
    }
    iVar16 = *(ushort *)(lVar23 + lVar27 + 0x30) + uVar17 +
             (uint)*(ushort *)(lVar23 + (ulong)(1 < uVar19) * 0x38 + 0x30);
    if (iVar16 == 0) {
      lVar27 = *(long *)(lVar22 + 0x18);
    }
    else {
      uVar19 = iVar16 - 1;
      if (*(uint *)(lVar22 + 0x20) <= uVar19) {
        uVar19 = 0;
      }
      lVar27 = *(long *)(lVar22 + 0x28) + (ulong)uVar19 * 0x150;
    }
    FUN_03907810(lVar27,param_2);
    FUN_01557430(lVar27,param_2,0,param_1 + 0x310,0);
    FUN_01557430(lVar27,param_2,1,param_1 + 0x388,0);
    puVar1 = (uint *)(lVar27 + 0x14);
    do {
      uVar19 = *puVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = uVar19 | 0x80000000;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((uVar19 & 0x7fffffff) != 0) {
      if ((int)uVar19 < 0) {
        if ((int)*puVar1 < 0) {
          lVar22 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar22 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar27);
      }
    }
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = 0;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    FUN_0390d290(param_3 + 0x608,param_2,*(undefined8 *)(lVar27 + 0x68),0xffffffff,0);
    lVar27 = *(long *)puVar2;
    uVar26 = *(undefined8 *)(param_2 + 0xb8);
    (**(code **)PTR_DAT_04bcf1a8)(uVar26,0x10,lVar27 + 0x1024);
    (*DAT_04c62870)(uVar26,0x10,lVar27 + 0x1068);
    iVar16 = *(int *)(lVar27 + 0x1010);
    if (iVar16 != 0) {
      lVar27 = *(long *)(lVar27 + 0x1018);
      uVar28 = 0;
      uVar25 = 0;
      do {
        lVar22 = *(long *)(lVar27 + (-(uVar25 >> 0x1f) & 0xfffffff800000000 | uVar25 << 3));
        if (lVar22 != 0) {
          uVar15 = (*(code *)*puVar31)(lVar22 + 8);
          (**(code **)PTR_DAT_04bcf1e8)
                    (uVar26,uVar28 & 0xffffffff,uVar15,*(undefined4 *)(lVar22 + 0x118));
        }
        uVar28 = uVar25 + 1;
        uVar25 = uVar28 & 0xffffffff;
      } while (iVar16 != (int)uVar28);
    }
    uVar19 = (uint)*(ushort *)(param_1 + 0x270);
    if (*(ushort *)(param_1 + 0x270) < 2) {
      uVar19 = 1;
    }
    lVar27 = plVar24[4];
    fVar34 = (float)(uVar19 >> 2);
    *(float *)(plVar24 + 1) = fVar34;
    *(float *)((long)plVar24 + 0xc) = fVar34;
    fVar32 = fVar34;
    if (3 < uVar19) {
      fVar32 = 0.0;
    }
    fVar33 = 0.0;
    if (3 < uVar19) {
      fVar33 = fVar34;
    }
    *(float *)(plVar24 + 2) = fVar32;
    *(float *)((long)plVar24 + 0x14) = fVar32;
    *(float *)(plVar24 + 3) = fVar33;
    *(float *)((long)plVar24 + 0x1c) = fVar33;
    if (*(char *)(lVar27 + 0xbe) != '\x02') {
      puVar1 = (uint *)(lVar27 + 0xb8);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar9) {
          *puVar1 = *puVar1 | 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      *(undefined1 *)(lVar27 + 0xbe) = 2;
    }
    lVar27 = plVar24[5];
    if (*(char *)(lVar27 + 0xbe) != '\x02') {
      puVar1 = (uint *)(lVar27 + 0xb8);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar9) {
          *puVar1 = *puVar1 | 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      *(undefined1 *)(lVar27 + 0xbe) = 2;
    }
    lVar27 = plVar24[6];
    if (*(char *)(lVar27 + 0xbe) != '\x02') {
      puVar1 = (uint *)(lVar27 + 0xb8);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar9) {
          *puVar1 = *puVar1 | 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      *(undefined1 *)(lVar27 + 0xbe) = 2;
    }
    lVar27 = plVar24[7];
    if (*(char *)(lVar27 + 0xbe) != '\x02') {
      puVar1 = (uint *)(lVar27 + 0xb8);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar9) {
          *puVar1 = *puVar1 | 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      *(undefined1 *)(lVar27 + 0xbe) = 2;
    }
    lVar27 = plVar24[8];
    if (*(char *)(lVar27 + 0xbe) != '\x02') {
      puVar1 = (uint *)(lVar27 + 0xb8);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar9) {
          *puVar1 = *puVar1 | 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      *(undefined1 *)(lVar27 + 0xbe) = 2;
    }
    lVar27 = plVar24[9];
    if (*(char *)(lVar27 + 0xbe) != '\x02') {
      puVar1 = (uint *)(lVar27 + 0xb8);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar9) {
          *puVar1 = *puVar1 | 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      *(undefined1 *)(lVar27 + 0xbe) = 2;
    }
    (**(code **)(*plVar24 + 0x38))(plVar24,param_2);
    local_88 = 0xff7fffffff7fffff;
    local_98 = PTR_DAT_04bd0f08 + 0x10;
    local_90 = 0x7f7fffff7f7fffff;
    local_7c = 0x3f80000000000000;
    local_80 = *(uint *)PTR_DAT_04bd0ea8;
    if (local_80 < 6) {
      if ((1 << (ulong)(local_80 & 0x1f) & 0x39U) == 0) {
        fVar34 = *(float *)(plVar24 + 1);
        fVar32 = *(float *)((long)plVar24 + 0xc);
      }
      else {
        fVar32 = *(float *)(plVar24 + 1);
        fVar34 = *(float *)((long)plVar24 + 0xc);
      }
      fVar36 = fVar32;
      fVar33 = 0.0;
      if (fVar32 <= 0.0) {
        fVar36 = 0.0;
        fVar33 = fVar32;
      }
      fVar35 = fVar34;
      fVar32 = 0.0;
      if (fVar34 <= 0.0) {
        fVar35 = 0.0;
        fVar32 = fVar34;
      }
      local_90 = CONCAT44(fVar32,fVar33);
      local_88 = CONCAT44(fVar35,fVar36);
    }
    FUN_038e77e4(&local_98,param_2,plVar24);
    lVar27 = DAT_05ae9100;
    iVar16 = *(int *)(DAT_05ae9100 + 0x480);
    if (iVar16 != 0) {
      uVar29 = *(undefined4 *)(DAT_05ae9100 + 0x464);
      uVar15 = *(undefined8 *)(param_2 + 0xb8);
      uVar26 = (*(code *)*puVar31)(DAT_05ae9100 + 0x488);
      (**(code **)PTR_DAT_04bbd568)(uVar15,uVar29,*(undefined4 *)(lVar27 + 0x460),iVar16,uVar26);
    }
    uVar19 = *(uint *)(plVar24[4] + 0x58);
    if (uVar19 != 0xffffffff) {
      lVar27 = *(long *)puVar10;
      if ((*(uint *)(lVar27 + 0x5c8) >> 3 & 1) == 0) {
        uVar17 = uVar19 - *(ushort *)(lVar27 + 0x3da);
        if (*(uint *)(lVar27 + 0x368) <= uVar17) {
          uVar17 = 0;
        }
        if ((*(uint *)(*(long *)(lVar27 + 0x370) + (long)(int)uVar17 * 0x20 + 4) >> 2 & 1) == 0) {
          *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar19 & 0x3f);
          return;
        }
      }
      if ((*(uint *)(lVar27 + 0x5c8) >> 5 & 1) == 0) {
        uVar30 = 0x112;
        uVar29 = 0x12;
      }
      else {
        uVar30 = 0x111;
        uVar29 = 0x11;
      }
      if ((*(uint *)(lVar27 + 800) & 2) != 0) {
        uVar29 = uVar30;
      }
      (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar29);
      *(undefined8 *)(param_2 + 0x100) = 0;
    }
  }
  return;
}


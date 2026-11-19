
void FUN_039e6ca0(long param_1,long param_2,uint param_3,long *param_4)

{
  uint *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  byte bVar4;
  ushort uVar5;
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  bool bVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  long *plVar18;
  int iVar19;
  undefined8 uVar20;
  ulong uVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  uint local_80;
  undefined8 local_7c;
  
  cVar6 = *(char *)(param_1 + 0x30d);
  if ((int)cVar6 != 0xffffffff) {
    uVar14 = *(uint *)(*(long *)(param_1 + 0x168) + 0x1d0);
    lVar11 = *(long *)(*(long *)(param_1 + 0x168) + 0x1d8);
    uVar13 = (uint)cVar6;
    if (uVar14 < (uint)(int)cVar6 || uVar14 == uVar13) {
      uVar13 = 0;
    }
    lVar15 = lVar11 + (long)(int)uVar13 * 0x910;
    do {
      lVar16 = lVar15;
      lVar15 = *(long *)(lVar16 + 0x170);
    } while (lVar15 != 0);
    lVar15 = param_1;
    do {
      lVar12 = lVar15;
      lVar15 = *(long *)(lVar12 + 0x170);
    } while (lVar15 != 0);
    if (*(int *)(lVar16 + 0x848) == *(int *)(lVar12 + 0x848)) {
      lVar15 = param_1;
      do {
        lVar16 = lVar15;
        lVar15 = *(long *)(lVar16 + 0x170);
      } while (lVar15 != 0);
      lVar15 = lVar11 + (long)(int)uVar13 * 0x910;
      if (*(int *)(lVar16 + 0x848) == 2) {
        iVar17 = 6;
      }
      else {
        lVar16 = param_1;
        do {
          lVar12 = lVar16;
          lVar16 = *(long *)(lVar12 + 0x170);
        } while (lVar16 != 0);
        iVar17 = 1;
        if (*(int *)(lVar12 + 0x848) != 0) {
          iVar17 = 2;
        }
      }
      cVar6 = *(char *)(param_1 + 0x30a);
      iVar19 = 0;
      cVar7 = *(char *)(lVar11 + (long)(int)uVar13 * 0x910 + 0x30a);
      do {
        bVar4 = *(byte *)(lVar15 + 0x1c1);
        if (*(byte *)(param_1 + 0x2a1) <= bVar4) {
          bVar4 = *(byte *)(param_1 + 0x2a1);
        }
        if (bVar4 != 0) {
          uVar13 = 0;
          do {
            FUN_0390ad90(lVar15 + 0x188,param_2,param_1 + 0x268,iVar19 + iVar17 * cVar6,uVar13,
                         iVar19 + iVar17 * cVar7,uVar13);
            uVar13 = uVar13 + 1;
          } while (bVar4 != uVar13);
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 != iVar17);
    }
  }
  lVar11 = *(long *)(param_1 + 0x180);
  if (*(uint *)(param_1 + 0x178) <= param_3) {
    param_3 = 0;
  }
  plVar18 = (long *)(lVar11 + (long)(int)param_3 * 0x620);
  if (*(byte *)(param_1 + 0x30b) == 0) {
    lVar15 = param_1;
    do {
      lVar16 = lVar15;
      lVar15 = *(long *)(lVar16 + 0x170);
    } while (lVar15 != 0);
    uVar13 = *(uint *)(lVar16 + 0x848);
    lVar15 = *(long *)(*(long *)(*(long *)(DAT_05ae9310 + 0x10) + 0x2f0) + 8);
  }
  else {
    lVar15 = param_1;
    do {
      lVar16 = lVar15;
      lVar15 = *(long *)(lVar16 + 0x170);
    } while (lVar15 != 0);
    lVar15 = param_1;
    do {
      lVar12 = lVar15;
      lVar15 = *(long *)(lVar12 + 0x170);
    } while (lVar15 != 0);
    iVar17 = *(int *)(lVar12 + 0x6e8);
    uVar13 = ((uint)*(byte *)(param_1 + 0x30b) * 8 + *(int *)(lVar16 + 0x848) * 0x40) - 8;
    if (iVar17 == 1) {
      uVar13 = uVar13 | 2;
    }
    else if (iVar17 == 2) {
      uVar13 = uVar13 | 6;
    }
    else if (iVar17 == 3) {
      uVar13 = uVar13 | 4;
    }
    if (*(char *)(param_1 + 0x708) == '\0') {
      uVar13 = uVar13 + 1;
    }
    lVar15 = *(long *)(*(long *)(*(long *)(DAT_05ae9310 + 0x10) + 0x2e8) + 8);
  }
  if ((int)uVar13 < 1) {
    lVar15 = *(long *)(lVar15 + 0x18);
  }
  else {
    uVar13 = uVar13 - 1;
    if (*(uint *)(lVar15 + 0x20) <= uVar13) {
      uVar13 = 0;
    }
    lVar15 = *(long *)(lVar15 + 0x28) + (ulong)uVar13 * 0x150;
  }
  lVar16 = param_1;
  do {
    lVar12 = lVar16;
    lVar16 = *(long *)(lVar12 + 0x170);
  } while (lVar16 != 0);
  FUN_038e4d90(*param_4 + (long)*(int *)(lVar12 + 0x848) * 0xe8 +
               (ulong)(*(char *)(param_1 + 0x30d) != -1) * 0x74,param_2);
  FUN_03907810(lVar15,param_2);
  lVar16 = param_1;
  do {
    lVar12 = lVar16;
    lVar16 = *(long *)(lVar12 + 0x170);
  } while (lVar16 != 0);
  lVar16 = param_4[(long)*(int *)(lVar12 + 0x848) + 1];
  puVar1 = (uint *)(lVar15 + 0x14);
  do {
    uVar13 = *puVar1;
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = uVar13 | 0x80000000;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if ((uVar13 & 0x7fffffff) != 0) {
    if ((int)uVar13 < 0) {
      if ((int)*puVar1 < 0) {
        lVar12 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar12 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar15);
    }
  }
  do {
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  FUN_0390d290(lVar16,param_2,
               *(long *)(lVar15 + 0x68) + (ulong)(1 < *(uint *)(lVar15 + 0x60)) * 0x18,0xffffffff,0)
  ;
  lVar16 = param_4[4];
  do {
    uVar13 = *puVar1;
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = uVar13 | 0x80000000;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if ((uVar13 & 0x7fffffff) != 0) {
    if ((int)uVar13 < 0) {
      if ((int)*puVar1 < 0) {
        lVar12 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar12 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar15);
    }
  }
  do {
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  FUN_0390d290(lVar16,param_2,*(undefined8 *)(lVar15 + 0x68),0xffffffff,0);
  FUN_01557430(lVar15,param_2,0,param_1 + 0x620,0);
  FUN_01557430(lVar15,param_2,1,lVar11 + (long)(int)param_3 * 0x620 + 0x5a8,0);
  uVar20 = *(undefined8 *)(param_2 + 0xb8);
  lVar11 = *(long *)PTR_DAT_04bbd7e0;
  (*DAT_04c62868)(uVar20,0x10,lVar11 + 0x1024);
  (*DAT_04c62870)(uVar20,0x10,lVar11 + 0x1068);
  puVar2 = PTR_DAT_04bcf1e8;
  iVar17 = *(int *)(lVar11 + 0x1010);
  if (iVar17 != 0) {
    lVar11 = *(long *)(lVar11 + 0x1018);
    uVar21 = 0;
    uVar22 = 0;
    do {
      lVar16 = *(long *)(lVar11 + (-(uVar22 >> 0x1f) & 0xfffffff800000000 | uVar22 << 3));
      if (lVar16 != 0) {
        uVar10 = (**(code **)PTR_DAT_04bbd560)(lVar16 + 8);
        (**(code **)puVar2)(uVar20,uVar21 & 0xffffffff,uVar10,*(undefined4 *)(lVar16 + 0x118));
      }
      uVar21 = uVar22 + 1;
      uVar22 = uVar21 & 0xffffffff;
    } while (iVar17 != (int)uVar21);
  }
  lVar11 = param_1;
  do {
    lVar16 = lVar11;
    lVar11 = *(long *)(lVar16 + 0x170);
  } while (lVar11 != 0);
  if (*(char *)(param_1 + 0x2a1) != '\0') {
    iVar17 = *(int *)(lVar16 + 0x848);
    uVar13 = 0;
    uVar21 = 1;
    if (iVar17 == 1) {
      uVar21 = 2;
    }
    puVar2 = PTR_DAT_04bd0f08 + 0x10;
    uVar22 = 6;
    if (iVar17 != 2) {
      uVar22 = uVar21;
    }
    do {
      uVar5 = *(ushort *)(param_1 + 0x298);
      uVar21 = 0;
      plVar18[2] = 0;
      uVar14 = (uint)uVar5;
      if (uVar5 < 2) {
        uVar14 = 1;
      }
      fVar23 = (float)(uVar14 >> (ulong)(uVar13 & 0x1f));
      *(float *)(plVar18 + 1) = fVar23;
      *(float *)((long)plVar18 + 0xc) = fVar23;
      *(float *)(plVar18 + 3) = fVar23;
      *(float *)((long)plVar18 + 0x1c) = fVar23;
      uVar8 = (undefined1)uVar13;
      if (uVar22 != 1) {
        uVar21 = 0;
        do {
          lVar11 = plVar18[uVar21 + 4];
          if (uVar13 != *(byte *)(lVar11 + 0xbe)) {
            puVar1 = (uint *)(lVar11 + 0xb8);
            do {
              cVar6 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar9) {
                *puVar1 = *puVar1 | 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            *(undefined1 *)(lVar11 + 0xbe) = uVar8;
          }
          lVar11 = *(long *)((long)plVar18 + (uVar21 << 3 | 8) + 0x20);
          if (uVar13 != *(byte *)(lVar11 + 0xbe)) {
            puVar1 = (uint *)(lVar11 + 0xb8);
            do {
              cVar6 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar9) {
                *puVar1 = *puVar1 | 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            *(undefined1 *)(lVar11 + 0xbe) = uVar8;
          }
          uVar21 = uVar21 + 2;
        } while (uVar21 != (uVar22 & 6));
      }
      if (((uVar22 & 1) != 0) && (lVar11 = plVar18[uVar21 + 4], uVar13 != *(byte *)(lVar11 + 0xbe)))
      {
        puVar1 = (uint *)(lVar11 + 0xb8);
        do {
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar9) {
            *puVar1 = *puVar1 | 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        *(undefined1 *)(lVar11 + 0xbe) = uVar8;
      }
      (**(code **)(*plVar18 + 0x38))(plVar18,param_2);
      local_90 = 0x7f7fffff7f7fffff;
      local_88 = 0xff7fffffff7fffff;
      local_7c = 0x3f80000000000000;
      local_80 = DAT_05ae77d0;
      if (DAT_05ae77d0 < 6) {
        if ((1 << (ulong)(DAT_05ae77d0 & 0x1f) & 0x39U) == 0) {
          fVar24 = *(float *)(plVar18 + 1);
          fVar23 = *(float *)((long)plVar18 + 0xc);
        }
        else {
          fVar23 = *(float *)(plVar18 + 1);
          fVar24 = *(float *)((long)plVar18 + 0xc);
        }
        fVar27 = fVar23;
        if (fVar23 <= 0.0) {
          fVar27 = 0.0;
        }
        fVar26 = 0.0;
        if (fVar23 <= 0.0) {
          fVar26 = fVar23;
        }
        fVar25 = fVar24;
        fVar23 = 0.0;
        if (fVar24 <= 0.0) {
          fVar25 = 0.0;
          fVar23 = fVar24;
        }
        local_90 = CONCAT44(fVar23,fVar26);
        local_88 = CONCAT44(fVar25,fVar27);
      }
      local_98 = puVar2;
      FUN_038e77e4(&local_98,param_2,plVar18);
      uVar14 = uVar13;
      if (*(uint *)(param_1 + 0x698) <= uVar13) {
        uVar14 = 0;
      }
      FUN_01557430(lVar15,param_2,2,*(long *)(param_1 + 0x6a0) + (ulong)uVar14 * 0x78,0);
      lVar11 = DAT_05ae9100;
      iVar17 = *(int *)(DAT_05ae9100 + 0x480);
      if (iVar17 != 0) {
        uVar3 = *(undefined4 *)(DAT_05ae9100 + 0x464);
        uVar10 = *(undefined8 *)(param_2 + 0xb8);
        uVar20 = (**(code **)PTR_DAT_04bbd560)(DAT_05ae9100 + 0x488);
        (**(code **)PTR_DAT_04bbd568)(uVar10,uVar3,*(undefined4 *)(lVar11 + 0x460),iVar17,uVar20);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(byte *)(param_1 + 0x2a1));
  }
  return;
}


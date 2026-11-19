
void FUN_03a11120(long param_1,long param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  uint *puVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  bool bVar10;
  long lVar11;
  bool bVar12;
  undefined *puVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  ulong uVar25;
  undefined4 *puVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long *plVar30;
  undefined8 uVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 uVar40;
  float local_138;
  float local_134;
  float local_130;
  undefined4 local_12c;
  undefined *local_128;
  undefined8 local_120;
  undefined8 local_118;
  uint local_110;
  undefined8 local_10c;
  undefined *local_100;
  char *pcStack_f8;
  uint local_e4;
  
  puVar13 = PTR_DAT_04bbd510;
  lVar20 = *(long *)(param_1 + 0x1d8);
  uVar6 = *(ushort *)(lVar20 + 0x3a);
  if (uVar6 < 10 && (1 << (ulong)(uVar6 & 0x1f) & 0x350U) != 0) {
    uVar18 = (uint)*(ushort *)(lVar20 + 0x34);
    uVar21 = uVar18;
  }
  else {
    uVar18 = (uint)*(ushort *)(lVar20 + 0x34);
    uVar21 = 1;
  }
  if (uVar21 <= uVar18) {
    uVar21 = uVar18;
  }
  if (uVar6 == 1) {
    lVar20 = *(long *)PTR_DAT_04bbd510;
    if (*(char *)(param_1 + 0x108) == '\0') {
      uVar23 = *(undefined4 *)(param_1 + 0x68);
      local_100 = PTR_DAT_04bb2020 + 0x10;
      uVar19 = *(undefined4 *)(param_1 + 0x88);
      pcStack_f8 = "vsm";
      lVar27 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
      if (lVar27 == 0) {
        iVar14 = nn::os::GetCurrentCoreNumber();
      }
      else {
        iVar14 = (int)lVar27 + -1;
      }
      local_128 = (undefined *)CONCAT44(local_128._4_4_,iVar14);
      lVar27 = lVar20 + (long)iVar14 * 0x290 + 0x10;
      uVar40 = 1;
    }
    else {
      uVar23 = *(undefined4 *)(param_1 + 0x68);
      lVar27 = lVar20 + 0x7c0;
      uVar19 = *(undefined4 *)(param_1 + 0x88);
      uVar40 = 0;
      local_100 = PTR_DAT_04bb2020 + 0x10;
      pcStack_f8 = "vsm";
    }
    puVar15 = (undefined4 *)
              FUN_03948e10(lVar20,param_2,lVar27,&local_100,0x26,1,uVar23,uVar19,1,0,1,0,uVar40,0,0,
                           0);
    bVar12 = false;
LAB_03a113d0:
    *(undefined4 **)(param_1 + 0x2c0) = puVar15;
  }
  else {
    if (uVar6 == 4) {
      lVar20 = *(long *)PTR_DAT_04bbd510;
      local_100 = PTR_DAT_04bb2020 + 0x10;
      if (*(char *)(param_1 + 0x108) == '\0') {
        pcStack_f8 = "vsm";
        uVar23 = *(undefined4 *)(param_1 + 0x68);
        uVar19 = *(undefined4 *)(param_1 + 0x88);
        lVar27 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
        if (lVar27 == 0) {
          iVar14 = nn::os::GetCurrentCoreNumber();
        }
        else {
          iVar14 = (int)lVar27 + -1;
        }
        local_128 = (undefined *)CONCAT44(local_128._4_4_,iVar14);
        lVar27 = lVar20 + (long)iVar14 * 0x290 + 0x10;
        uVar40 = 1;
      }
      else {
        pcStack_f8 = "vsm";
        uVar23 = *(undefined4 *)(param_1 + 0x68);
        uVar19 = *(undefined4 *)(param_1 + 0x88);
        lVar27 = lVar20 + 0x7c0;
        uVar40 = 0;
      }
      bVar12 = true;
      puVar15 = (undefined4 *)
                FUN_03948e10(lVar20,param_2,lVar27,&local_100,0x26,4,uVar23,uVar19,1,0,uVar21,0,
                             uVar40,0,0,0);
      goto LAB_03a113d0;
    }
    puVar15 = *(undefined4 **)(param_1 + 0x2c0);
    bVar12 = true;
  }
  *(undefined4 *)(param_1 + 0x2c8) = *puVar15;
  *(undefined4 *)(param_1 + 0x2cc) = puVar15[1];
  *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(puVar15 + 2);
  *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(puVar15 + 4);
  *(undefined4 *)(param_1 + 0x2e0) = puVar15[6];
  *(undefined4 *)(param_1 + 0x2e4) = puVar15[7];
  *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(puVar15 + 8);
  *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(puVar15 + 10);
  uVar24 = *(undefined8 *)(puVar15 + 0x10);
  uVar31 = *(undefined8 *)(puVar15 + 0xc);
  uVar16 = *(undefined8 *)(puVar15 + 0xe);
  *(undefined8 *)(param_1 + 0x30f) = *(undefined8 *)((long)puVar15 + 0x47);
  *(undefined8 *)(param_1 + 0x308) = uVar24;
  *(undefined8 *)(param_1 + 0x300) = uVar16;
  *(undefined8 *)(param_1 + 0x2f8) = uVar31;
  FUN_038fd1e0(param_1 + 0x318);
  FUN_038fd2f0(param_1 + 0x318,puVar15 + 0x14);
  uVar23 = puVar15[0x26];
  *(undefined8 *)(param_1 + 0x358) = *(undefined8 *)(puVar15 + 0x24);
  puVar1 = (uint *)(param_1 + 0x39c);
  *(undefined4 *)(param_1 + 0x360) = uVar23;
  do {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar10) {
      *puVar1 = *puVar1 | 1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  *(long *)(param_1 + 0x1d0) = param_1 + 0x2c8;
  lVar20 = *(long *)puVar13;
  if (*(char *)(param_1 + 0x108) == '\0') {
    uVar23 = *(undefined4 *)(param_1 + 0x68);
    local_100 = PTR_DAT_04bb2020 + 0x10;
    uVar19 = *(undefined4 *)(param_1 + 0x88);
    pcStack_f8 = "vsm_temp";
    lVar27 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
    if (lVar27 == 0) {
      iVar14 = nn::os::GetCurrentCoreNumber();
    }
    else {
      iVar14 = (int)lVar27 + -1;
    }
    local_128 = (undefined *)CONCAT44(local_128._4_4_,iVar14);
    lVar27 = lVar20 + (long)iVar14 * 0x290 + 0x10;
    uVar40 = 1;
  }
  else {
    lVar27 = lVar20 + 0x7c0;
    uVar23 = *(undefined4 *)(param_1 + 0x68);
    uVar19 = *(undefined4 *)(param_1 + 0x88);
    local_100 = PTR_DAT_04bb2020 + 0x10;
    uVar40 = 0;
    pcStack_f8 = "vsm_temp";
  }
  puVar15 = (undefined4 *)
            FUN_03948e10(lVar20,param_2,lVar27,&local_100,0x26,1,uVar23,uVar19,1,0,1,0,uVar40,0,0,0)
  ;
  *(undefined1 *)(param_1 + 0xb98) = *(undefined1 *)(param_1 + 0x108);
  FUN_038e4cec(&local_100);
  local_e4 = local_e4 & 0xfffffff0 | 3;
  local_100 = (undefined *)((ulong)local_100 & 0xfffffffeffff0000);
  FUN_038e4d90(&local_100,param_2);
  lVar20 = param_1 + 0x658;
  local_118 = 0xff7fffffff7fffff;
  local_128 = PTR_DAT_04bd0f08 + 0x10;
  local_120 = 0x7f7fffff7f7fffff;
  local_110 = *(uint *)PTR_DAT_04bd0ea8;
  local_10c = 0x3f80000000000000;
  if (local_110 < 6) {
    if ((1 << (ulong)(local_110 & 0x1f) & 0x39U) == 0) {
      fVar35 = *(float *)(param_1 + 0x664);
      fVar36 = *(float *)(param_1 + 0x660);
    }
    else {
      fVar35 = *(float *)(param_1 + 0x660);
      fVar36 = *(float *)(param_1 + 0x664);
    }
    fVar39 = fVar35;
    fVar38 = 0.0;
    if (fVar35 <= 0.0) {
      fVar39 = 0.0;
      fVar38 = fVar35;
    }
    fVar37 = fVar36;
    fVar35 = 0.0;
    if (fVar36 <= 0.0) {
      fVar37 = 0.0;
      fVar35 = fVar36;
    }
    local_120 = CONCAT44(fVar35,fVar38);
    local_118 = CONCAT44(fVar37,fVar39);
  }
  FUN_038e77e4(&local_128,param_2,lVar20);
  uVar31 = *(undefined8 *)(param_2 + 0xb8);
  lVar27 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar31,0x10,lVar27 + 0x1024);
  (**(code **)PTR_DAT_04bcf1b0)(uVar31,0x10,lVar27 + 0x1068);
  puVar13 = PTR_DAT_04bcf1e8;
  iVar14 = *(int *)(lVar27 + 0x1010);
  if (iVar14 != 0) {
    lVar27 = *(long *)(lVar27 + 0x1018);
    uVar32 = 0;
    uVar25 = 0;
    do {
      lVar33 = *(long *)(lVar27 + (-(uVar25 >> 0x1f) & 0xfffffff800000000 | uVar25 << 3));
      if (lVar33 != 0) {
        uVar16 = (**(code **)PTR_DAT_04bbd560)(lVar33 + 8);
        (**(code **)puVar13)(uVar31,uVar32 & 0xffffffff,uVar16,*(undefined4 *)(lVar33 + 0x118));
      }
      uVar32 = uVar25 + 1;
      uVar25 = uVar32 & 0xffffffff;
    } while (iVar14 != (int)uVar32);
  }
  uVar18 = *(uint *)(param_1 + 0x68);
  uVar22 = *(uint *)(param_1 + 0x88);
  fVar36 = (float)(int)uVar18;
  *(float *)(param_1 + 0x660) = fVar36;
  *(float *)(param_1 + 0x668) = (float)(int)(uVar18 & (int)uVar18 >> 0x1f);
  fVar35 = (float)(int)uVar22;
  *(float *)(param_1 + 0x670) = (float)(int)(uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU));
  *(float *)(param_1 + 0x66c) = (float)(int)(uVar22 & (int)uVar22 >> 0x1f);
  *(float *)(param_1 + 0x674) = (float)(int)(uVar22 & ((int)uVar22 >> 0x1f ^ 0xffffffffU));
  *(float *)(param_1 + 0x664) = fVar35;
  if (uVar21 != 0) {
    fVar38 = fVar35 / fVar36;
    lVar27 = param_1 + 0x880;
    lVar33 = param_1 + 0x6c0;
    uVar18 = 0;
    uVar22 = 1;
    if (bVar12) {
      uVar22 = 2;
    }
    puVar1 = (uint *)(param_1 + 0x954);
    lVar11 = *(long *)PTR_DAT_04bb29d0 / 1000000;
    puVar2 = (undefined8 *)(param_1 + 0x8b0);
    uVar17 = 3;
    if (bVar12) {
      uVar17 = 4;
    }
    fVar36 = 1.0 / fVar36;
    lVar3 = param_1 + 0x8d0;
    fVar35 = 1.0 / fVar35;
    puVar4 = (undefined8 *)(param_1 + 0x910);
    do {
      lVar34 = 0x28;
      if (!bVar12) {
        lVar34 = 0x18;
      }
      lVar34 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x390) +
                                  8) + lVar34);
      FUN_03907810(lVar34,param_2);
      puVar5 = (uint *)(lVar34 + 0x14);
      do {
        uVar7 = *puVar5;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar10) {
          *puVar5 = uVar7 | 0x80000000;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if ((uVar7 & 0x7fffffff) != 0) {
        if ((int)uVar7 < 0) {
          while ((int)*puVar5 < 0) {
            nn::os::ConvertToTimeSpan(lVar11);
            nn::os::SleepThread();
          }
        }
        else {
          FUN_03907b80(lVar34);
        }
      }
      fVar39 = (float)(int)uVar18;
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar10) {
          *puVar5 = 0;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      iVar14 = *(int *)(*(long *)(lVar34 + 0x38) + (ulong)(1 < *(uint *)(lVar34 + 0x30)) * 0x18);
      local_138 = fVar39;
      if (iVar14 != -1) {
        (**(code **)PTR_DAT_04bcf2e0)
                  (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70)
                   ,*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar14,4,&local_138);
      }
      puVar26 = *(undefined4 **)(param_1 + 0x1d8);
      *(undefined4 *)(param_1 + 0x880) = *puVar26;
      *(undefined4 *)(param_1 + 0x884) = puVar26[1];
      *(undefined8 *)(param_1 + 0x888) = *(undefined8 *)(puVar26 + 2);
      *(undefined8 *)(param_1 + 0x890) = *(undefined8 *)(puVar26 + 4);
      *(undefined4 *)(param_1 + 0x898) = puVar26[6];
      *(undefined4 *)(param_1 + 0x89c) = puVar26[7];
      *(undefined8 *)(param_1 + 0x8a0) = *(undefined8 *)(puVar26 + 8);
      *(undefined8 *)(param_1 + 0x8a8) = *(undefined8 *)(puVar26 + 10);
      uVar31 = *(undefined8 *)(puVar26 + 0xc);
      uVar16 = *(undefined8 *)(puVar26 + 0xe);
      uVar24 = *(undefined8 *)(puVar26 + 0x10);
      *(undefined8 *)(param_1 + 0x8c7) = *(undefined8 *)((long)puVar26 + 0x47);
      *puVar2 = uVar31;
      *(undefined8 *)(param_1 + 0x8b8) = uVar16;
      *(undefined8 *)(param_1 + 0x8c0) = uVar24;
      FUN_038fd1e0(lVar3);
      FUN_038fd2f0(lVar3,puVar26 + 0x14);
      uVar31 = *(undefined8 *)(puVar26 + 0x24);
      *(undefined4 *)(param_1 + 0x918) = puVar26[0x26];
      *puVar4 = uVar31;
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar10) {
          *puVar1 = *puVar1 | 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      *(undefined2 *)(param_1 + 0x944) = 0;
      *(undefined1 *)(param_1 + 0x946) = 0;
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar10) {
          *puVar1 = *puVar1 & 0xfffffffb | 4;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      do {
        uVar7 = *puVar5;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar10) {
          *puVar5 = uVar7 | 0x80000000;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if ((uVar7 & 0x7fffffff) != 0) {
        if ((int)uVar7 < 0) {
          while ((int)*puVar5 < 0) {
            nn::os::ConvertToTimeSpan(lVar11);
            nn::os::SleepThread();
          }
        }
        else {
          FUN_03907b80(lVar34);
        }
      }
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar10) {
          *puVar5 = 0;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      FUN_0390d290(lVar27,param_2,*(undefined8 *)(lVar34 + 0x68),0xffffffff,0);
      FUN_01560750(lVar33,*(undefined8 *)(param_1 + 0x2c0),0,uVar18);
      *(long *)(param_1 + 0x678) = lVar33;
      *(undefined8 *)(param_1 + 0x6b8) = 0;
      (**(code **)(*(long *)(param_1 + 0x658) + 0x38))(lVar20,param_2);
      lVar34 = *(long *)PTR_DAT_04bbd7e8;
      iVar14 = *(int *)(lVar34 + 0x480);
      if (iVar14 != 0) {
        uVar23 = *(undefined4 *)(lVar34 + 0x464);
        uVar16 = *(undefined8 *)(param_2 + 0xb8);
        uVar31 = (**(code **)PTR_DAT_04bbd560)(lVar34 + 0x488);
        (**(code **)PTR_DAT_04bbd568)(uVar16,uVar23,*(undefined4 *)(lVar34 + 0x460),iVar14,uVar31);
      }
      lVar34 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x390) + 8);
      lVar28 = *(long *)(lVar34 + 0x28);
      uVar7 = uVar22;
      if (*(uint *)(lVar34 + 0x20) <= uVar22) {
        uVar7 = 0;
      }
      lVar34 = lVar28 + (ulong)uVar7 * 0x150;
      FUN_03907810(lVar34,param_2);
      puVar5 = (uint *)(lVar34 + 0x14);
      local_134 = 0.0;
      local_12c = 0x3f800000;
      do {
        uVar8 = *puVar5;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar10) {
          *puVar5 = uVar8 | 0x80000000;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      local_138 = fVar36;
      local_130 = fVar38;
      if ((uVar8 & 0x7fffffff) != 0) {
        if ((int)uVar8 < 0) {
          while ((int)*puVar5 < 0) {
            nn::os::ConvertToTimeSpan(lVar11);
            nn::os::SleepThread();
          }
        }
        else {
          FUN_03907b80(lVar34);
        }
      }
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar10) {
          *puVar5 = 0;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      lVar29 = lVar28 + (ulong)uVar7 * 0x150;
      plVar30 = (long *)(lVar29 + 0x38);
      iVar14 = *(int *)*plVar30;
      if (iVar14 != -1) {
        (**(code **)PTR_DAT_04bcf2e0)
                  (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70)
                   ,*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar14,0x10,&local_138);
      }
      do {
        uVar8 = *puVar5;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar10) {
          *puVar5 = uVar8 | 0x80000000;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if ((uVar8 & 0x7fffffff) != 0) {
        if ((int)uVar8 < 0) {
          while ((int)*puVar5 < 0) {
            nn::os::ConvertToTimeSpan(lVar11);
            nn::os::SleepThread();
          }
        }
        else {
          FUN_03907b80(lVar34);
        }
      }
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar10) {
          *puVar5 = 0;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      iVar14 = *(int *)(*plVar30 + (ulong)(1 < *(uint *)(lVar29 + 0x30)) * 0x18);
      local_138 = fVar39;
      if (iVar14 != -1) {
        (**(code **)PTR_DAT_04bcf2e0)
                  (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70)
                   ,*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar14,4,&local_138);
      }
      puVar26 = *(undefined4 **)(param_1 + 0x2c0);
      *(undefined4 *)(param_1 + 0x880) = *puVar26;
      *(undefined4 *)(param_1 + 0x884) = puVar26[1];
      *(undefined8 *)(param_1 + 0x888) = *(undefined8 *)(puVar26 + 2);
      *(undefined8 *)(param_1 + 0x890) = *(undefined8 *)(puVar26 + 4);
      *(undefined4 *)(param_1 + 0x898) = puVar26[6];
      *(undefined4 *)(param_1 + 0x89c) = puVar26[7];
      *(undefined8 *)(param_1 + 0x8a0) = *(undefined8 *)(puVar26 + 8);
      *(undefined8 *)(param_1 + 0x8a8) = *(undefined8 *)(puVar26 + 10);
      uVar31 = *(undefined8 *)(puVar26 + 0xc);
      uVar16 = *(undefined8 *)(puVar26 + 0xe);
      uVar24 = *(undefined8 *)(puVar26 + 0x10);
      *(undefined8 *)(param_1 + 0x8c7) = *(undefined8 *)((long)puVar26 + 0x47);
      *puVar2 = uVar31;
      *(undefined8 *)(param_1 + 0x8b8) = uVar16;
      *(undefined8 *)(param_1 + 0x8c0) = uVar24;
      FUN_038fd1e0(lVar3);
      FUN_038fd2f0(lVar3,puVar26 + 0x14);
      uVar31 = *(undefined8 *)(puVar26 + 0x24);
      *(undefined4 *)(param_1 + 0x918) = puVar26[0x26];
      *puVar4 = uVar31;
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar10) {
          *puVar1 = *puVar1 | 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      *(undefined1 *)(param_1 + 0x946) = 0;
      *(undefined2 *)(param_1 + 0x944) = 0x101;
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar10) {
          *puVar1 = *puVar1 & 0xfffffffb | 4;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      do {
        uVar8 = *puVar5;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar10) {
          *puVar5 = uVar8 | 0x80000000;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if ((uVar8 & 0x7fffffff) != 0) {
        if ((int)uVar8 < 0) {
          while ((int)*puVar5 < 0) {
            nn::os::ConvertToTimeSpan(lVar11);
            nn::os::SleepThread();
          }
        }
        else {
          FUN_03907b80(lVar34);
        }
      }
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar10) {
          *puVar5 = 0;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      FUN_0390d290(lVar27,param_2,*(undefined8 *)(lVar28 + (ulong)uVar7 * 0x150 + 0x68),0xffffffff,0
                  );
      FUN_01560750(lVar33,puVar15,*(undefined1 *)(param_1 + 0x77e),*(undefined2 *)(param_1 + 0x77c))
      ;
      *(long *)(param_1 + 0x678) = lVar33;
      *(undefined8 *)(param_1 + 0x6b8) = 0;
      (**(code **)(*(long *)(param_1 + 0x658) + 0x38))(lVar20,param_2);
      lVar34 = *(long *)PTR_DAT_04bbd7e8;
      iVar14 = *(int *)(lVar34 + 0x480);
      if (iVar14 != 0) {
        uVar23 = *(undefined4 *)(lVar34 + 0x464);
        uVar16 = *(undefined8 *)(param_2 + 0xb8);
        uVar31 = (**(code **)PTR_DAT_04bbd560)(lVar34 + 0x488);
        (**(code **)PTR_DAT_04bbd568)(uVar16,uVar23,*(undefined4 *)(lVar34 + 0x460),iVar14,uVar31);
      }
      lVar34 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x390) + 8);
      lVar28 = *(long *)(lVar34 + 0x28);
      uVar7 = uVar17;
      if (*(uint *)(lVar34 + 0x20) <= uVar17) {
        uVar7 = 0;
      }
      lVar34 = lVar28 + (ulong)uVar7 * 0x150;
      FUN_03907810(lVar34,param_2);
      puVar5 = (uint *)(lVar34 + 0x14);
      local_138 = 0.0;
      local_12c = 0x3f800000;
      do {
        uVar8 = *puVar5;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar10) {
          *puVar5 = uVar8 | 0x80000000;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      local_134 = fVar35;
      local_130 = fVar38;
      if ((uVar8 & 0x7fffffff) != 0) {
        if ((int)uVar8 < 0) {
          while ((int)*puVar5 < 0) {
            nn::os::ConvertToTimeSpan(lVar11);
            nn::os::SleepThread();
          }
        }
        else {
          FUN_03907b80(lVar34);
        }
      }
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar10) {
          *puVar5 = 0;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      lVar29 = lVar28 + (ulong)uVar7 * 0x150;
      plVar30 = (long *)(lVar29 + 0x38);
      iVar14 = *(int *)*plVar30;
      if (iVar14 != -1) {
        (**(code **)PTR_DAT_04bcf2e0)
                  (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70)
                   ,*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar14,0x10,&local_138);
      }
      do {
        uVar8 = *puVar5;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar10) {
          *puVar5 = uVar8 | 0x80000000;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if ((uVar8 & 0x7fffffff) != 0) {
        if ((int)uVar8 < 0) {
          while ((int)*puVar5 < 0) {
            nn::os::ConvertToTimeSpan(lVar11);
            nn::os::SleepThread();
          }
        }
        else {
          FUN_03907b80(lVar34);
        }
      }
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar10) {
          *puVar5 = 0;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      iVar14 = *(int *)(*plVar30 + (ulong)(1 < *(uint *)(lVar29 + 0x30)) * 0x18);
      local_138 = fVar39;
      if (iVar14 != -1) {
        (**(code **)PTR_DAT_04bcf2e0)
                  (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70)
                   ,*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar14,4,&local_138);
      }
      *(undefined4 *)(param_1 + 0x880) = *puVar15;
      *(undefined4 *)(param_1 + 0x884) = puVar15[1];
      *(undefined8 *)(param_1 + 0x888) = *(undefined8 *)(puVar15 + 2);
      *(undefined8 *)(param_1 + 0x890) = *(undefined8 *)(puVar15 + 4);
      *(undefined4 *)(param_1 + 0x898) = puVar15[6];
      *(undefined4 *)(param_1 + 0x89c) = puVar15[7];
      *(undefined8 *)(param_1 + 0x8a0) = *(undefined8 *)(puVar15 + 8);
      *(undefined8 *)(param_1 + 0x8a8) = *(undefined8 *)(puVar15 + 10);
      uVar31 = *(undefined8 *)(puVar15 + 0xc);
      uVar16 = *(undefined8 *)(puVar15 + 0xe);
      uVar24 = *(undefined8 *)(puVar15 + 0x10);
      *(undefined8 *)(param_1 + 0x8c7) = *(undefined8 *)((long)puVar15 + 0x47);
      *puVar2 = uVar31;
      *(undefined8 *)(param_1 + 0x8b8) = uVar16;
      *(undefined8 *)(param_1 + 0x8c0) = uVar24;
      FUN_038fd1e0(lVar3);
      FUN_038fd2f0(lVar3,puVar15 + 0x14);
      uVar31 = *(undefined8 *)(puVar15 + 0x24);
      *(undefined4 *)(param_1 + 0x918) = puVar15[0x26];
      *puVar4 = uVar31;
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar10) {
          *puVar1 = *puVar1 | 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      *(undefined1 *)(param_1 + 0x946) = 0;
      *(undefined2 *)(param_1 + 0x944) = 0x101;
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar10) {
          *puVar1 = *puVar1 & 0xfffffffb | 4;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      do {
        uVar8 = *puVar5;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar10) {
          *puVar5 = uVar8 | 0x80000000;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if ((uVar8 & 0x7fffffff) != 0) {
        if ((int)uVar8 < 0) {
          while ((int)*puVar5 < 0) {
            nn::os::ConvertToTimeSpan(lVar11);
            nn::os::SleepThread();
          }
        }
        else {
          FUN_03907b80(lVar34);
        }
      }
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar10) {
          *puVar5 = 0;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      FUN_0390d290(lVar27,param_2,*(undefined8 *)(lVar28 + (ulong)uVar7 * 0x150 + 0x68),0xffffffff,0
                  );
      FUN_01560750(lVar33,*(undefined8 *)(param_1 + 0x2c0),0,uVar18);
      *(long *)(param_1 + 0x678) = lVar33;
      *(undefined8 *)(param_1 + 0x6b8) = 0;
      (**(code **)(*(long *)(param_1 + 0x658) + 0x38))(lVar20,param_2);
      lVar34 = *(long *)PTR_DAT_04bbd7e8;
      iVar14 = *(int *)(lVar34 + 0x480);
      if (iVar14 != 0) {
        uVar23 = *(undefined4 *)(lVar34 + 0x464);
        uVar16 = *(undefined8 *)(param_2 + 0xb8);
        uVar31 = (**(code **)PTR_DAT_04bbd560)(lVar34 + 0x488);
        (**(code **)PTR_DAT_04bbd568)(uVar16,uVar23,*(undefined4 *)(lVar34 + 0x460),iVar14,uVar31);
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar21);
  }
  puVar13 = PTR_DAT_04bbd510;
  uVar21 = *(uint *)(param_1 + 0x718);
  if (uVar21 != 0xffffffff) {
    lVar20 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar20 + 0x5c8) >> 3 & 1) == 0) {
      uVar18 = uVar21 - *(ushort *)(lVar20 + 0x3da);
      if (*(uint *)(lVar20 + 0x368) <= uVar18) {
        uVar18 = 0;
      }
      if ((*(uint *)(*(long *)(lVar20 + 0x370) + (long)(int)uVar18 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar21 & 0x3f);
        goto LAB_03a12264;
      }
    }
    if ((*(uint *)(lVar20 + 0x5c8) >> 5 & 1) == 0) {
      uVar19 = 0x112;
      uVar23 = 0x12;
    }
    else {
      uVar19 = 0x111;
      uVar23 = 0x11;
    }
    if ((*(uint *)(lVar20 + 800) & 2) != 0) {
      uVar23 = uVar19;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar23);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_03a12264:
  FUN_039499cc(*(undefined8 *)puVar13,puVar15);
  if (*(long *)(param_1 + 0x1d8) != 0) {
    FUN_039499cc(*(undefined8 *)puVar13);
    *(undefined8 *)(param_1 + 0x1d8) = 0;
  }
  if (*(long *)(param_1 + 0x3a8) != 0) {
    FUN_039499cc(*(undefined8 *)puVar13);
    *(undefined8 *)(param_1 + 0x3a8) = 0;
  }
  if (*(long *)(param_1 + 0x490) != 0) {
    FUN_039499cc(*(undefined8 *)puVar13);
    *(undefined8 *)(param_1 + 0x490) = 0;
  }
  return;
}


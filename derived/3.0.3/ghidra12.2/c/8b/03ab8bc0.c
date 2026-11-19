
void FUN_03ab8bc0(float param_1,float param_2,float param_3,float param_4,long param_5,long param_6,
                 uint param_7,uint param_8,uint param_9,undefined4 *param_10,uint param_11)

{
  uint *puVar1;
  long *plVar2;
  long *plVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long *plVar7;
  undefined *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  ushort uVar12;
  int iVar13;
  byte bVar14;
  ushort uVar15;
  ushort uVar16;
  undefined2 uVar17;
  short sVar18;
  uint uVar19;
  char cVar20;
  bool bVar21;
  float *pfVar22;
  undefined *puVar23;
  int iVar24;
  undefined8 uVar25;
  undefined4 *puVar26;
  uint uVar27;
  undefined8 uVar28;
  int iVar29;
  undefined4 uVar30;
  long *plVar31;
  long lVar32;
  long lVar33;
  undefined4 uVar34;
  long lVar35;
  long *plVar36;
  undefined8 uVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long *plVar41;
  uint uVar42;
  long lVar43;
  long lVar44;
  undefined8 uVar45;
  undefined4 *puVar46;
  undefined4 *puVar47;
  long *plVar48;
  ulong uVar49;
  long lVar50;
  ulong uVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  uint uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  long local_228;
  undefined2 local_1ec [2];
  uint local_1e8;
  uint local_1d0;
  undefined1 local_188;
  undefined *local_178;
  undefined8 local_170;
  undefined8 local_168;
  uint local_160;
  undefined8 local_15c;
  float local_150;
  float fStack_14c;
  float local_148;
  undefined4 local_144;
  undefined8 local_140;
  undefined8 uStack_138;
  int local_130;
  float local_12c;
  float fStack_128;
  undefined4 local_124;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  uint local_108;
  ulong local_104;
  
  FUN_038e4cec(local_1ec);
  local_1ec[0] = 0;
  lVar52 = *(long *)(param_5 + 0x1d8);
  local_1e8 = local_1e8 & 0xfffffffe;
  local_1d0 = local_1d0 & 0xfffffff0 | 3;
  uVar10 = param_7;
  if (*(uint *)(param_5 + 0x1d0) <= param_7) {
    uVar10 = 0;
  }
  lVar43 = lVar52 + (long)(int)uVar10 * 0x648;
  if (*(long *)(lVar43 + 0x640) == 0) {
    iVar24 = *(int *)(param_5 + 0x8c8);
    lVar44 = *(long *)PTR_DAT_04bbd510;
    lVar35 = lVar52 + (long)(int)uVar10 * 0x648;
    *(float *)(lVar35 + 0x18) = (float)(int)param_8;
    *(float *)(lVar35 + 0x1c) = (float)(int)param_9;
    *(undefined1 *)(lVar35 + 0x226) = 0;
    *(undefined2 *)(lVar35 + 0x224) = 0x101;
    puVar1 = (uint *)(lVar35 + 0x234);
    *(float *)(lVar35 + 0x20) = (float)(int)(param_8 & (int)param_8 >> 0x1f);
    *(float *)(lVar35 + 0x24) = (float)(int)(param_9 & (int)param_9 >> 0x1f);
    *(float *)(lVar35 + 0x28) = (float)(int)(param_8 & ((int)param_8 >> 0x1f ^ 0xffffffffU));
    *(float *)(lVar35 + 0x2c) = (float)(int)(param_9 & ((int)param_9 >> 0x1f ^ 0xffffffffU));
    do {
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = *puVar1 & 0xfffffffb | 4;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    uVar63 = 1;
    if (iVar24 != 0) {
      uVar63 = 2;
    }
    plVar48 = (long *)(lVar52 + (long)(int)uVar10 * 0x648);
    if (*plVar48 != 0) {
      FUN_039499cc(lVar44);
    }
    local_120 = PTR_DAT_04bb2020 + 0x10;
    local_118 = "ao_buffer";
    lVar35 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
    if (lVar35 == 0) {
      iVar24 = nn::os::GetCurrentCoreNumber();
    }
    else {
      iVar24 = (int)lVar35 + -1;
    }
    local_178 = (undefined *)CONCAT44(local_178._4_4_,iVar24);
    lVar35 = FUN_03948e10(lVar44,param_6,lVar44 + (long)iVar24 * 0x290 + 0x10,&local_120,1,1,param_8
                          ,param_9,uVar63,0,1,0,1,0,0,0);
    *plVar48 = lVar35;
    plVar48 = (long *)(lVar52 + (long)(int)uVar10 * 0x648 + 8);
    if (*plVar48 == 0) {
      local_120 = PTR_DAT_04bb2020 + 0x10;
      local_118 = "ssao_ao";
      lVar35 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
      if (lVar35 == 0) {
        iVar24 = nn::os::GetCurrentCoreNumber();
      }
      else {
        iVar24 = (int)lVar35 + -1;
      }
      local_178 = (undefined *)CONCAT44(local_178._4_4_,iVar24);
      lVar35 = FUN_03948e10(lVar44,param_6,lVar44 + (long)iVar24 * 0x290 + 0x10,&local_120,1,1,
                            param_8,param_9,1,0,1,0,1,1,0,0);
      *plVar48 = lVar35;
    }
  }
  uVar45 = *(undefined8 *)(param_6 + 0xb8);
  lVar35 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar45,0x10,lVar35 + 0x1024);
  (**(code **)PTR_DAT_04bcf1b0)(uVar45,0x10,lVar35 + 0x1068);
  puVar8 = PTR_DAT_04bcf1e8;
  iVar24 = *(int *)(lVar35 + 0x1010);
  if (iVar24 != 0) {
    lVar35 = *(long *)(lVar35 + 0x1018);
    uVar49 = 0;
    uVar51 = 0;
    do {
      lVar44 = *(long *)(lVar35 + (-(uVar51 >> 0x1f) & 0xfffffff800000000 | uVar51 << 3));
      if (lVar44 != 0) {
        uVar25 = (**(code **)PTR_DAT_04bbd560)(lVar44 + 8);
        (**(code **)puVar8)(uVar45,uVar49 & 0xffffffff,uVar25,*(undefined4 *)(lVar44 + 0x118));
      }
      uVar49 = uVar51 + 1;
      uVar51 = uVar49 & 0xffffffff;
    } while (iVar24 != (int)uVar49);
  }
  lVar35 = lVar52 + (long)(int)uVar10 * 0x648;
  *(undefined4 *)(lVar35 + 0x160) = *param_10;
  *(undefined4 *)(lVar35 + 0x164) = param_10[1];
  *(undefined8 *)(lVar35 + 0x168) = *(undefined8 *)(param_10 + 2);
  *(undefined8 *)(lVar35 + 0x170) = *(undefined8 *)(param_10 + 4);
  *(undefined4 *)(lVar35 + 0x178) = param_10[6];
  *(undefined4 *)(lVar35 + 0x17c) = param_10[7];
  *(undefined8 *)(lVar35 + 0x180) = *(undefined8 *)(param_10 + 8);
  *(undefined8 *)(lVar35 + 0x188) = *(undefined8 *)(param_10 + 10);
  uVar45 = *(undefined8 *)(param_10 + 0xe);
  uVar25 = *(undefined8 *)(param_10 + 0x10);
  uVar28 = *(undefined8 *)(param_10 + 0xc);
  *(undefined8 *)(lVar35 + 0x1a7) = *(undefined8 *)((long)param_10 + 0x47);
  *(undefined8 *)(lVar35 + 0x198) = uVar45;
  *(undefined8 *)(lVar35 + 0x1a0) = uVar25;
  plVar48 = (long *)(lVar43 + 0x640);
  *(undefined8 *)(lVar35 + 400) = uVar28;
  FUN_038fd1e0(lVar35 + 0x1b0);
  FUN_038fd2f0(lVar35 + 0x1b0,param_10 + 0x14);
  uVar63 = param_10[0x26];
  *(undefined8 *)(lVar35 + 0x1f0) = *(undefined8 *)(param_10 + 0x24);
  puVar1 = (uint *)(lVar35 + 0x234);
  *(undefined4 *)(lVar35 + 0x1f8) = uVar63;
  do {
    cVar20 = '\x01';
    bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar21) {
      *puVar1 = *puVar1 | 1;
      cVar20 = ExclusiveMonitorsStatus();
    }
  } while (cVar20 != '\0');
  lVar43 = lVar52 + (long)(int)uVar10 * 0x648;
  *(undefined2 *)(lVar43 + 0x224) = 0;
  *(undefined1 *)(lVar43 + 0x226) = 0;
  do {
    cVar20 = '\x01';
    bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar21) {
      *puVar1 = *puVar1 & 0xfffffffb | 4;
      cVar20 = ExclusiveMonitorsStatus();
    }
  } while (cVar20 != '\0');
  uVar15 = *(ushort *)((long)param_10 + 0x32);
  lVar43 = *(long *)(param_5 + 0x1d8);
  uVar27 = (uint)*(ushort *)(param_10 + 0xc);
  if (*(ushort *)(param_10 + 0xc) < 2) {
    uVar27 = 1;
  }
  uVar42 = (uint)uVar15;
  if (*(short *)((long)param_10 + 0x3a) != 3) {
    uVar42 = 1;
  }
  if (uVar42 == uVar15 || uVar42 < uVar15) {
    uVar42 = (uint)uVar15;
  }
  uVar11 = param_7;
  if (*(uint *)(param_5 + 0x1d0) <= param_7) {
    uVar11 = 0;
  }
  iVar24 = 0;
  if (*(char *)(param_5 + 0x4d8) != '\0') {
    iVar24 = *(int *)(param_5 + 0x4d4);
  }
  iVar29 = *(int *)(param_5 + 0x4d0);
  if (*(int *)(param_5 + 0x4d0) <= iVar24) {
    iVar29 = iVar24;
  }
  if ((*(char *)(param_5 + 0x4d8) == '\0') && (iVar29 < 1)) {
    lVar35 = lVar43 + (long)(int)uVar11 * 0x648;
    *(undefined4 *)(lVar35 + 0x390) = *param_10;
    *(undefined4 *)(lVar35 + 0x394) = param_10[1];
    *(undefined8 *)(lVar35 + 0x398) = *(undefined8 *)(param_10 + 2);
    *(undefined8 *)(lVar35 + 0x3a0) = *(undefined8 *)(param_10 + 4);
    *(undefined4 *)(lVar35 + 0x3a8) = param_10[6];
    *(undefined4 *)(lVar35 + 0x3ac) = param_10[7];
    *(undefined8 *)(lVar35 + 0x3b0) = *(undefined8 *)(param_10 + 8);
    *(undefined8 *)(lVar35 + 0x3b8) = *(undefined8 *)(param_10 + 10);
    uVar28 = *(undefined8 *)(param_10 + 0x10);
    uVar45 = *(undefined8 *)(param_10 + 0xc);
    uVar25 = *(undefined8 *)(param_10 + 0xe);
    *(undefined8 *)(lVar35 + 0x3d7) = *(undefined8 *)((long)param_10 + 0x47);
    *(undefined8 *)(lVar35 + 0x3d0) = uVar28;
    *(undefined8 *)(lVar35 + 0x3c8) = uVar25;
    *(undefined8 *)(lVar35 + 0x3c0) = uVar45;
    FUN_038fd1e0(lVar35 + 0x3e0);
    FUN_038fd2f0(lVar35 + 0x3e0,param_10 + 0x14);
    uVar63 = param_10[0x26];
    *(undefined8 *)(lVar35 + 0x420) = *(undefined8 *)(param_10 + 0x24);
    puVar1 = (uint *)(lVar35 + 0x464);
    *(undefined4 *)(lVar35 + 0x428) = uVar63;
    do {
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = *puVar1 | 1;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    lVar35 = lVar43 + (long)(int)uVar11 * 0x648;
    *(undefined2 *)(lVar35 + 0x454) = 0x101;
    *(undefined1 *)(lVar35 + 0x456) = 0;
    do {
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = *puVar1 & 0xfffffffb | 4;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    lVar43 = lVar43 + (long)(int)uVar11 * 0x648;
    *(undefined8 *)(lVar43 + 0x448) = 0x3f80000000000000;
    *(undefined4 *)(lVar43 + 0x450) = 0;
    do {
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = *puVar1 & 0xfffffff7 | 8;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
  }
  else {
    lVar44 = *(long *)PTR_DAT_04bbd510;
    uVar17 = *(undefined2 *)(param_10 + 0x26);
    local_120 = PTR_DAT_04bb2020 + 0x10;
    local_118 = "ssao_reduced_depth";
    lVar35 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
    if (lVar35 == 0) {
      iVar24 = nn::os::GetCurrentCoreNumber();
    }
    else {
      iVar24 = (int)lVar35 + -1;
    }
    local_178 = (undefined *)CONCAT44(local_178._4_4_,iVar24);
    lVar35 = FUN_03948e10(lVar44,param_6,lVar44 + (long)iVar24 * 0x290 + 0x10,&local_120,uVar17,1,
                          uVar27,uVar42,iVar29 + 1,0,1,0,1,1,0,0);
    lVar44 = lVar43 + (long)(int)uVar11 * 0x648;
    *(long *)(lVar44 + 0x240) = lVar35;
    bVar14 = *(byte *)(lVar35 + 0x39);
    lVar35 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x3b0) + 8)
                      + 0x18);
    FUN_03907810(lVar35,param_6);
    puVar46 = *(undefined4 **)(lVar44 + 0x240);
    *(undefined4 *)(lVar44 + 0x390) = *puVar46;
    *(undefined4 *)(lVar44 + 0x394) = puVar46[1];
    *(undefined8 *)(lVar44 + 0x398) = *(undefined8 *)(puVar46 + 2);
    *(undefined8 *)(lVar44 + 0x3a0) = *(undefined8 *)(puVar46 + 4);
    *(undefined4 *)(lVar44 + 0x3a8) = puVar46[6];
    *(undefined4 *)(lVar44 + 0x3ac) = puVar46[7];
    *(undefined8 *)(lVar44 + 0x3b0) = *(undefined8 *)(puVar46 + 8);
    *(undefined8 *)(lVar44 + 0x3b8) = *(undefined8 *)(puVar46 + 10);
    uVar45 = *(undefined8 *)(puVar46 + 0xc);
    uVar25 = *(undefined8 *)(puVar46 + 0xe);
    uVar28 = *(undefined8 *)(puVar46 + 0x10);
    *(undefined8 *)(lVar44 + 0x3d7) = *(undefined8 *)((long)puVar46 + 0x47);
    *(undefined8 *)(lVar44 + 0x3d0) = uVar28;
    *(undefined8 *)(lVar44 + 0x3c8) = uVar25;
    *(undefined8 *)(lVar44 + 0x3c0) = uVar45;
    FUN_038fd1e0(lVar44 + 0x3e0);
    FUN_038fd2f0(lVar44 + 0x3e0,puVar46 + 0x14);
    uVar45 = *(undefined8 *)(puVar46 + 0x24);
    puVar1 = (uint *)(lVar44 + 0x464);
    *(undefined4 *)(lVar44 + 0x428) = puVar46[0x26];
    *(undefined8 *)(lVar44 + 0x420) = uVar45;
    do {
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = *puVar1 | 1;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    lVar50 = lVar43 + (long)(int)uVar11 * 0x648;
    *(undefined2 *)(lVar50 + 0x454) = 0x101;
    *(undefined1 *)(lVar50 + 0x456) = 2;
    do {
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = *puVar1 & 0xfffffffb | 4;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    if (bVar14 != 0) {
      uVar55 = 0;
      lVar50 = *(long *)PTR_DAT_04bb29d0;
      puVar4 = (uint *)(lVar35 + 0x14);
      lVar40 = lVar43 + (long)(int)uVar11 * 0x648;
      puVar9 = (uint *)(lVar40 + 0x368);
      plVar31 = (long *)(lVar40 + 0x248);
      puVar8 = PTR_DAT_04bd0f08 + 0x10;
      do {
        *(float *)(lVar40 + 0x448) = (float)(int)uVar55;
        *(float *)(lVar40 + 0x44c) = (float)(int)uVar55;
        *(undefined4 *)(lVar40 + 0x450) = 0;
        do {
          cVar20 = '\x01';
          bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar21) {
            *puVar1 = *puVar1 & 0xfffffff7 | 8;
            cVar20 = ExclusiveMonitorsStatus();
          }
        } while (cVar20 != '\0');
        if (uVar55 != *(byte *)(lVar40 + 0x36e)) {
          do {
            cVar20 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(puVar9,0x10);
            if (bVar21) {
              *puVar9 = *puVar9 | 1;
              cVar20 = ExclusiveMonitorsStatus();
            }
          } while (cVar20 != '\0');
          *(char *)(lVar40 + 0x36e) = (char)uVar55;
        }
        FUN_01560750(lVar40 + 0x2b0,*(undefined8 *)(lVar44 + 0x240),uVar55,
                     *(undefined2 *)(lVar40 + 0x36c));
        *(undefined8 *)(lVar40 + 600) = 0;
        *(float *)(lVar40 + 0x260) = (float)uVar27;
        *(float *)(lVar40 + 0x264) = (float)uVar42;
        *(float *)(lVar40 + 0x250) = (float)uVar27;
        *(float *)(lVar40 + 0x254) = (float)uVar42;
        *(long *)(lVar40 + 0x268) = lVar40 + 0x2b0;
        local_118 = (char *)0x7f7fffff7f7fffff;
        local_110 = 0xff7fffffff7fffff;
        local_104 = 0x3f80000000000000;
        local_108 = *(uint *)PTR_DAT_04bd0ea8;
        if (local_108 < 6) {
          if ((1 << (ulong)(local_108 & 0x1f) & 0x39U) == 0) {
            fVar60 = *(float *)(lVar40 + 0x250);
            fVar56 = *(float *)(lVar40 + 0x254);
          }
          else {
            fVar56 = *(float *)(lVar40 + 0x250);
            fVar60 = *(float *)(lVar40 + 0x254);
          }
          fVar57 = fVar56;
          if (fVar56 <= 0.0) {
            fVar57 = 0.0;
          }
          fVar61 = 0.0;
          if (fVar56 <= 0.0) {
            fVar61 = fVar56;
          }
          fVar59 = fVar60;
          fVar56 = 0.0;
          if (fVar60 <= 0.0) {
            fVar59 = 0.0;
            fVar56 = fVar60;
          }
          local_118 = (char *)CONCAT44(fVar56,fVar61);
          local_110 = CONCAT44(fVar59,fVar57);
        }
        local_120 = puVar8;
        FUN_038e77e4(&local_120,param_6,plVar31);
        (**(code **)(*plVar31 + 0x38))(plVar31,param_6);
        do {
          uVar19 = *puVar4;
          cVar20 = '\x01';
          bVar21 = (bool)ExclusiveMonitorPass(puVar4,0x10);
          if (bVar21) {
            *puVar4 = uVar19 | 0x80000000;
            cVar20 = ExclusiveMonitorsStatus();
          }
        } while (cVar20 != '\0');
        lVar53 = lVar40 + 0x160;
        if (uVar55 != 0) {
          lVar53 = lVar44 + 0x390;
        }
        if ((uVar19 & 0x7fffffff) != 0) {
          if ((int)uVar19 < 0) {
            while ((int)*puVar4 < 0) {
              nn::os::ConvertToTimeSpan(lVar50 / 1000000);
              nn::os::SleepThread();
            }
          }
          else {
            FUN_03907b80(lVar35);
          }
        }
        do {
          cVar20 = '\x01';
          bVar21 = (bool)ExclusiveMonitorPass(puVar4,0x10);
          if (bVar21) {
            *puVar4 = 0;
            cVar20 = ExclusiveMonitorsStatus();
          }
        } while (cVar20 != '\0');
        FUN_0390d290(lVar53,param_6,*(undefined8 *)(lVar35 + 0x68),0xffffffff,0);
        lVar53 = *(long *)PTR_DAT_04bbd7e8;
        iVar24 = *(int *)(lVar53 + 0x480);
        if (iVar24 != 0) {
          uVar63 = *(undefined4 *)(lVar53 + 0x464);
          uVar25 = *(undefined8 *)(param_6 + 0xb8);
          uVar45 = (**(code **)PTR_DAT_04bbd560)(lVar53 + 0x488);
          (**(code **)PTR_DAT_04bbd568)(uVar25,uVar63,*(undefined4 *)(lVar53 + 0x460),iVar24,uVar45)
          ;
        }
        uVar55 = uVar55 + 1;
        uVar27 = uVar27 >> 1;
        uVar42 = uVar42 >> 1;
      } while (uVar55 != bVar14);
    }
    iVar24 = *(int *)(param_5 + 0x4d0);
    lVar35 = lVar43 + (long)(int)uVar11 * 0x648;
    *(undefined4 *)(lVar35 + 0x448) = 0;
    *(undefined4 *)(lVar35 + 0x450) = 0;
    *(float *)(lVar35 + 0x44c) = (float)(iVar24 + 1);
    do {
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = *puVar1 & 0xfffffff7 | 8;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    if (*(char *)(param_5 + 0x4d8) != '\0') {
      if (*(uint *)(*(long *)PTR_DAT_04bbdd18 + 8) < 0x78) {
        lVar35 = 0;
      }
      else {
        lVar35 = *(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x3b8);
      }
      FUN_03907810(lVar35,param_6);
      lVar53 = *(long *)PTR_DAT_04bbd510;
      local_120 = PTR_DAT_04bb2020 + 0x10;
      local_118 = "ssao_mask";
      lVar40 = lVar43 + (long)(int)uVar11 * 0x648;
      fVar56 = *(float *)(lVar40 + 0x260);
      fVar57 = *(float *)(lVar40 + 600);
      fVar61 = *(float *)(lVar40 + 0x25c);
      fVar60 = *(float *)(lVar40 + 0x264);
      lVar50 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
      if (lVar50 == 0) {
        iVar24 = nn::os::GetCurrentCoreNumber();
      }
      else {
        iVar24 = (int)lVar50 + -1;
      }
      local_178 = (undefined *)CONCAT44(local_178._4_4_,iVar24);
      uVar45 = FUN_03948e10(lVar53,param_6,lVar53 + (long)iVar24 * 0x290 + 0x10,&local_120,1,1,
                            (int)(fVar56 - fVar57),(int)(fVar60 - fVar61),1,0,1,0,1,1,0,0);
      lVar50 = lVar43 + (long)(int)uVar11 * 0x648;
      *(undefined8 *)(lVar50 + 0x470) = uVar45;
      FUN_01560750(lVar50 + 0x2b0,*(undefined8 *)(lVar50 + 0x470),0,0);
      puVar1 = (uint *)(lVar35 + 0x14);
      do {
        uVar27 = *puVar1;
        cVar20 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar21) {
          *puVar1 = uVar27 | 0x80000000;
          cVar20 = ExclusiveMonitorsStatus();
        }
      } while (cVar20 != '\0');
      if ((uVar27 & 0x7fffffff) != 0) {
        if ((int)uVar27 < 0) {
          if ((int)*puVar1 < 0) {
            lVar53 = *(long *)PTR_DAT_04bb29d0;
            do {
              nn::os::ConvertToTimeSpan(lVar53 / 1000000);
              nn::os::SleepThread();
            } while ((int)*puVar1 < 0);
          }
        }
        else {
          FUN_03907b80(lVar35);
        }
      }
      do {
        cVar20 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar21) {
          *puVar1 = 0;
          cVar20 = ExclusiveMonitorsStatus();
        }
      } while (cVar20 != '\0');
      FUN_0390d290(lVar44 + 0x390,param_6,*(undefined8 *)(lVar35 + 0x68),0xffffffff,0);
      (**(code **)(*(long *)(lVar40 + 0x248) + 0x38))((long *)(lVar40 + 0x248),param_6);
      lVar35 = *(long *)PTR_DAT_04bbd7e8;
      iVar24 = *(int *)(lVar35 + 0x480);
      if (iVar24 != 0) {
        uVar63 = *(undefined4 *)(lVar35 + 0x464);
        uVar25 = *(undefined8 *)(param_6 + 0xb8);
        uVar45 = (**(code **)PTR_DAT_04bbd560)(lVar35 + 0x488);
        (**(code **)PTR_DAT_04bbd568)(uVar25,uVar63,*(undefined4 *)(lVar35 + 0x460),iVar24,uVar45);
      }
      puVar46 = *(undefined4 **)(lVar50 + 0x470);
      lVar43 = lVar43 + (long)(int)uVar11 * 0x648;
      *(undefined4 *)(lVar43 + 0x478) = *puVar46;
      *(undefined4 *)(lVar43 + 0x47c) = puVar46[1];
      *(undefined8 *)(lVar43 + 0x480) = *(undefined8 *)(puVar46 + 2);
      *(undefined8 *)(lVar43 + 0x488) = *(undefined8 *)(puVar46 + 4);
      *(undefined4 *)(lVar43 + 0x490) = puVar46[6];
      *(undefined4 *)(lVar43 + 0x494) = puVar46[7];
      *(undefined8 *)(lVar43 + 0x498) = *(undefined8 *)(puVar46 + 8);
      *(undefined8 *)(lVar43 + 0x4a0) = *(undefined8 *)(puVar46 + 10);
      uVar45 = *(undefined8 *)(puVar46 + 0xc);
      uVar25 = *(undefined8 *)(puVar46 + 0xe);
      uVar28 = *(undefined8 *)(puVar46 + 0x10);
      *(undefined8 *)(lVar43 + 0x4bf) = *(undefined8 *)((long)puVar46 + 0x47);
      *(undefined8 *)(lVar43 + 0x4b8) = uVar28;
      *(undefined8 *)(lVar43 + 0x4b0) = uVar25;
      *(undefined8 *)(lVar43 + 0x4a8) = uVar45;
      FUN_038fd1e0(lVar43 + 0x4c8);
      FUN_038fd2f0(lVar43 + 0x4c8,puVar46 + 0x14);
      uVar63 = puVar46[0x26];
      *(undefined8 *)(lVar43 + 0x508) = *(undefined8 *)(puVar46 + 0x24);
      puVar1 = (uint *)(lVar43 + 0x54c);
      *(undefined4 *)(lVar43 + 0x510) = uVar63;
      do {
        cVar20 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar21) {
          *puVar1 = *puVar1 | 1;
          cVar20 = ExclusiveMonitorsStatus();
        }
      } while (cVar20 != '\0');
    }
  }
  lVar43 = *plVar48;
  if (lVar43 == 0) {
    lVar43 = lVar52 + (long)(int)uVar10 * 0x648;
    FUN_01560750(lVar43 + 0x78,*(undefined8 *)(lVar43 + 8),*(undefined1 *)(lVar43 + 0x136),
                 *(undefined2 *)(lVar43 + 0x134));
    local_110 = 0xff7fffffff7fffff;
    plVar31 = (long *)(lVar43 + 0x10);
    local_120 = PTR_DAT_04bd0f08 + 0x10;
    local_118 = (char *)0x7f7fffff7f7fffff;
    local_108 = *(uint *)PTR_DAT_04bd0ea8;
    local_104 = 0x3f80000000000000;
    if (local_108 < 6) {
      if ((1 << (ulong)(local_108 & 0x1f) & 0x39U) == 0) {
        fVar60 = *(float *)(lVar43 + 0x18);
        fVar56 = *(float *)(lVar43 + 0x1c);
      }
      else {
        fVar56 = *(float *)(lVar43 + 0x18);
        fVar60 = *(float *)(lVar43 + 0x1c);
      }
      fVar61 = fVar56;
      fVar57 = 0.0;
      if (fVar56 <= 0.0) {
        fVar61 = 0.0;
        fVar57 = fVar56;
      }
      fVar59 = fVar60;
      fVar56 = 0.0;
      if (fVar60 <= 0.0) {
        fVar59 = 0.0;
        fVar56 = fVar60;
      }
      local_118 = (char *)CONCAT44(fVar56,fVar57);
      local_110 = CONCAT44(fVar59,fVar61);
    }
    FUN_038e77e4(&local_120,param_6,plVar31);
    lVar43 = lVar52 + (long)(int)uVar10 * 0x648;
    lVar35 = *(long *)(lVar43 + 0x158);
    if (lVar35 == 0) {
LAB_03ab9bdc:
      *(undefined8 *)(lVar52 + (long)(int)uVar10 * 0x648 + 0x70) = 0;
    }
    else {
      uVar27 = (uint)*(ushort *)(lVar35 + 0x38);
      if (*(ushort *)(lVar35 + 0x38) < 2) {
        uVar27 = 1;
      }
      if (uVar27 != param_8) goto LAB_03ab9bdc;
      uVar15 = *(ushort *)(lVar35 + 0x3a);
      uVar27 = (uint)uVar15;
      if (*(short *)(lVar35 + 0x42) != 3) {
        uVar27 = 1;
      }
      if (uVar27 == uVar15 || uVar27 < uVar15) {
        uVar27 = (uint)uVar15;
      }
      if (uVar27 != param_9) goto LAB_03ab9bdc;
      local_1ec[0] = 1;
      local_188 = 4;
      FUN_038e4d90(local_1ec,param_6);
      *(undefined8 *)(lVar52 + (long)(int)uVar10 * 0x648 + 0x70) = *(undefined8 *)(lVar43 + 0x158);
      (**(code **)(*plVar31 + 0x38))(plVar31,param_6);
      if ((param_11 & 1) == 0) {
        fVar56 = *(float *)(param_5 + 0x708) - param_1;
        fVar60 = param_2 - param_1;
      }
      else {
        fVar56 = 1.0 - param_1 / *(float *)(param_5 + 0x708);
        fVar60 = 1.0 - param_1 / param_2;
      }
      fVar56 = fVar56 / fVar60;
      fVar60 = 1.0;
      if (fVar56 <= 1.0) {
        fVar60 = fVar56;
      }
      fVar57 = 0.0;
      if (0.0 <= fVar56) {
        fVar57 = fVar60;
      }
      if (*(uint *)(*(long *)PTR_DAT_04bbdd18 + 8) < 0x36) {
        lVar43 = 0;
      }
      else {
        lVar43 = *(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x1a8);
      }
      FUN_03907810(lVar43,param_6);
      puVar1 = (uint *)(lVar43 + 0x14);
      do {
        uVar27 = *puVar1;
        cVar20 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar21) {
          *puVar1 = uVar27 | 0x80000000;
          cVar20 = ExclusiveMonitorsStatus();
        }
      } while (cVar20 != '\0');
      if ((uVar27 & 0x7fffffff) != 0) {
        if ((int)uVar27 < 0) {
          if ((int)*puVar1 < 0) {
            lVar35 = *(long *)PTR_DAT_04bb29d0;
            do {
              nn::os::ConvertToTimeSpan(lVar35 / 1000000);
              nn::os::SleepThread();
            } while ((int)*puVar1 < 0);
          }
        }
        else {
          FUN_03907b80(lVar43);
        }
      }
      do {
        cVar20 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar21) {
          *puVar1 = 0;
          cVar20 = ExclusiveMonitorsStatus();
        }
      } while (cVar20 != '\0');
      local_178 = (undefined *)CONCAT44(local_178._4_4_,fVar57 * 2.0 + -1.0);
      lVar35 = 0x240;
      if (*(uint *)(lVar43 + 0x30) < 0x19) {
        lVar35 = 0;
      }
      iVar24 = *(int *)(*(long *)(lVar43 + 0x38) + lVar35);
      if (iVar24 != -1) {
        (**(code **)PTR_DAT_04bcf2e0)
                  (*(undefined8 *)(param_6 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70)
                   ,*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar24,4,&local_178);
      }
      local_178 = &DAT_3f8000003f800000;
      local_170 = &DAT_3f8000003f800000;
      do {
        uVar27 = *puVar1;
        cVar20 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar21) {
          *puVar1 = uVar27 | 0x80000000;
          cVar20 = ExclusiveMonitorsStatus();
        }
      } while (cVar20 != '\0');
      if ((uVar27 & 0x7fffffff) != 0) {
        if ((int)uVar27 < 0) {
          if ((int)*puVar1 < 0) {
            lVar35 = *(long *)PTR_DAT_04bb29d0;
            do {
              nn::os::ConvertToTimeSpan(lVar35 / 1000000);
              nn::os::SleepThread();
            } while ((int)*puVar1 < 0);
          }
        }
        else {
          FUN_03907b80(lVar43);
        }
      }
      do {
        cVar20 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar21) {
          *puVar1 = 0;
          cVar20 = ExclusiveMonitorsStatus();
        }
      } while (cVar20 != '\0');
      lVar35 = 0xc0;
      if (*(uint *)(lVar43 + 0x30) < 9) {
        lVar35 = 0;
      }
      iVar24 = *(int *)(*(long *)(lVar43 + 0x38) + lVar35);
      if (iVar24 != -1) {
        (**(code **)PTR_DAT_04bcf2e0)
                  (*(undefined8 *)(param_6 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70)
                   ,*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar24,0x10,&local_178);
      }
      lVar43 = *(long *)PTR_DAT_04bbd7e8;
      iVar24 = *(int *)(lVar43 + 0x480);
      if (iVar24 != 0) {
        uVar63 = *(undefined4 *)(lVar43 + 0x464);
        uVar25 = *(undefined8 *)(param_6 + 0xb8);
        uVar45 = (**(code **)PTR_DAT_04bbd560)(lVar43 + 0x488);
        (**(code **)PTR_DAT_04bbd568)(uVar25,uVar63,*(undefined4 *)(lVar43 + 0x460),iVar24,uVar45);
      }
      local_188 = 5;
    }
    FUN_038e4d90(local_1ec,param_6);
    (**(code **)(*plVar31 + 0x38))(plVar31,param_6);
    lVar43 = *(long *)(lVar52 + (long)(int)uVar10 * 0x648 + 0x70);
  }
  else {
    local_110 = 0xff7fffffff7fffff;
    local_120 = PTR_DAT_04bd0f08 + 0x10;
    local_118 = (char *)0x7f7fffff7f7fffff;
    local_108 = *(uint *)PTR_DAT_04bd0ea8;
    local_104 = 0x3f80000000000000;
    if (local_108 < 6) {
      if ((1 << (ulong)(local_108 & 0x1f) & 0x39U) == 0) {
        fVar60 = *(float *)(lVar43 + 8);
        fVar56 = *(float *)(lVar43 + 0xc);
      }
      else {
        fVar56 = *(float *)(lVar43 + 8);
        fVar60 = *(float *)(lVar43 + 0xc);
      }
      fVar61 = fVar56;
      fVar57 = 0.0;
      if (fVar56 <= 0.0) {
        fVar61 = 0.0;
        fVar57 = fVar56;
      }
      fVar59 = fVar60;
      fVar56 = 0.0;
      if (fVar60 <= 0.0) {
        fVar59 = 0.0;
        fVar56 = fVar60;
      }
      local_118 = (char *)CONCAT44(fVar56,fVar57);
      local_110 = CONCAT44(fVar59,fVar61);
    }
    FUN_038e77e4(&local_120,param_6,*plVar48);
    (**(code **)(*(long *)*plVar48 + 0x38))((long *)*plVar48,param_6);
    lVar43 = *(long *)(*plVar48 + 0x60);
  }
  if (*(int *)(param_5 + 0x6e8) == 1) {
    fVar56 = 1.0;
    uVar27 = param_7;
    if (*(uint *)(param_5 + 0x1d0) <= param_7) {
      uVar27 = 0;
    }
    iVar24 = *(int *)(param_5 + 0x888);
    fVar60 = param_2;
    if ((param_11 & 1) == 0) {
      fVar60 = 1.0;
    }
    if (0xf < iVar24) {
      iVar24 = 0x10;
    }
    if (iVar24 < 2) {
      iVar24 = 1;
    }
    uVar42 = param_11 & 1 | iVar24 << 1;
    lVar35 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x3c0) + 8);
    if (uVar42 == 2) {
      lVar35 = *(long *)(lVar35 + 0x18);
    }
    else {
      uVar42 = uVar42 - 3;
      if (*(uint *)(lVar35 + 0x20) <= uVar42) {
        uVar42 = 0;
      }
      lVar35 = *(long *)(lVar35 + 0x28) + (ulong)uVar42 * 0x150;
    }
    lVar44 = *(long *)(param_5 + 0x1d8);
    fVar60 = fVar60 * param_3;
    FUN_03907810(lVar35,param_6);
    puVar1 = (uint *)(lVar35 + 0x14);
    do {
      uVar42 = *puVar1;
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = uVar42 | 0x80000000;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    if ((uVar42 & 0x7fffffff) != 0) {
      if ((int)uVar42 < 0) {
        if ((int)*puVar1 < 0) {
          lVar50 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar50 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar35);
      }
    }
    do {
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = 0;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    FUN_0390d290(lVar44 + (long)(int)uVar27 * 0x648 + 0x390,param_6,*(undefined8 *)(lVar35 + 0x68),
                 0xffffffff,0);
    if (lVar43 != 0) {
      if ((param_11 & 1) == 0) {
        fVar56 = *(float *)(param_5 + 0x708) - param_1;
        fVar57 = param_2 - param_1;
      }
      else {
        fVar56 = 1.0 - param_1 / *(float *)(param_5 + 0x708);
        fVar57 = 1.0 - param_1 / param_2;
      }
      fVar56 = fVar56 / fVar57;
      fVar57 = 1.0;
      if (fVar56 <= 1.0) {
        fVar57 = fVar56;
      }
      fVar61 = 0.0;
      if (0.0 <= fVar56) {
        fVar61 = fVar57;
      }
      fVar56 = fVar61 * 2.0 + -1.0;
    }
    local_120 = (undefined *)CONCAT44(param_2,param_1);
    local_118 = (char *)(ulong)(uint)(param_2 - param_1);
    do {
      uVar27 = *puVar1;
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = uVar27 | 0x80000000;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    if ((uVar27 & 0x7fffffff) != 0) {
      if ((int)uVar27 < 0) {
        if ((int)*puVar1 < 0) {
          lVar43 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar43 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar35);
      }
    }
    param_4 = fVar60 * param_4;
    do {
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = 0;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    if (**(int **)(lVar35 + 0x38) != -1) {
      (**(code **)PTR_DAT_04bcf2e0)
                (*(undefined8 *)(param_6 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                 *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)**(int **)(lVar35 + 0x38),
                 0x10,&local_120);
    }
    local_120 = (undefined *)CONCAT44(fVar60,param_4);
    local_118 = (char *)CONCAT44((param_2 - param_1) / param_2,param_1 / param_2);
    do {
      uVar27 = *puVar1;
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = uVar27 | 0x80000000;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    if ((uVar27 & 0x7fffffff) != 0) {
      if ((int)uVar27 < 0) {
        if ((int)*puVar1 < 0) {
          lVar43 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar43 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar35);
      }
    }
    do {
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = 0;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    iVar24 = *(int *)(*(long *)(lVar35 + 0x38) + (ulong)(1 < *(uint *)(lVar35 + 0x30)) * 0x18);
    if (iVar24 != -1) {
      (**(code **)PTR_DAT_04bcf2e0)
                (*(undefined8 *)(param_6 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                 *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar24,0x10,&local_120);
    }
    local_118 = (char *)0x0;
    local_120 = (undefined *)CONCAT44(fVar60 + fVar60,param_4 + param_4);
    do {
      uVar27 = *puVar1;
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = uVar27 | 0x80000000;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    if ((uVar27 & 0x7fffffff) != 0) {
      if ((int)uVar27 < 0) {
        if ((int)*puVar1 < 0) {
          lVar43 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar43 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar35);
      }
    }
    do {
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = 0;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    lVar43 = 0x30;
    if (*(uint *)(lVar35 + 0x30) < 3) {
      lVar43 = 0;
    }
    iVar24 = *(int *)(*(long *)(lVar35 + 0x38) + lVar43);
    if (iVar24 != -1) {
      (**(code **)PTR_DAT_04bcf2e0)
                (*(undefined8 *)(param_6 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                 *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar24,0x10,&local_120);
    }
    local_120 = (undefined *)CONCAT44((float)(int)param_9,(float)(int)param_8);
    local_118 = (char *)CONCAT44(1.0 / (float)(int)param_9,1.0 / (float)(int)param_8);
    do {
      uVar27 = *puVar1;
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = uVar27 | 0x80000000;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    if ((uVar27 & 0x7fffffff) != 0) {
      if ((int)uVar27 < 0) {
        if ((int)*puVar1 < 0) {
          lVar43 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar43 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar35);
      }
    }
    do {
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = 0;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    lVar43 = 0x48;
    if (*(uint *)(lVar35 + 0x30) < 4) {
      lVar43 = 0;
    }
    iVar24 = *(int *)(*(long *)(lVar35 + 0x38) + lVar43);
    if (iVar24 != -1) {
      (**(code **)PTR_DAT_04bcf2e0)
                (*(undefined8 *)(param_6 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                 *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar24,0x10,&local_120);
    }
    fVar60 = *(float *)(param_5 + 0x7e8);
    local_120 = (undefined *)CONCAT44(fVar60 * fVar60,fVar60);
    local_118 = (char *)CONCAT44(*(undefined4 *)(param_5 + 0x868),*(undefined4 *)(param_5 + 0x828));
    do {
      uVar27 = *puVar1;
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = uVar27 | 0x80000000;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    if ((uVar27 & 0x7fffffff) != 0) {
      if ((int)uVar27 < 0) {
        if ((int)*puVar1 < 0) {
          lVar43 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar43 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar35);
      }
    }
    do {
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = 0;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    lVar43 = 0x60;
    if (*(uint *)(lVar35 + 0x30) < 5) {
      lVar43 = 0;
    }
    iVar24 = *(int *)(*(long *)(lVar35 + 0x38) + lVar43);
    if (iVar24 != -1) {
      (**(code **)PTR_DAT_04bcf2e0)
                (*(undefined8 *)(param_6 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                 *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar24,0x10,&local_120);
    }
    local_120 = (undefined *)CONCAT44(fVar56,*(undefined4 *)(param_5 + 0x808));
    local_118 = (char *)(ulong)*(uint *)(param_5 + 0x848);
    do {
      uVar27 = *puVar1;
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = uVar27 | 0x80000000;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    if ((uVar27 & 0x7fffffff) != 0) {
      if ((int)uVar27 < 0) {
        if ((int)*puVar1 < 0) {
          lVar43 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar43 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar35);
      }
    }
    do {
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = 0;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    lVar43 = 0x78;
    if (*(uint *)(lVar35 + 0x30) < 6) {
      lVar43 = 0;
    }
    iVar24 = *(int *)(*(long *)(lVar35 + 0x38) + lVar43);
    if (iVar24 != -1) {
      (**(code **)PTR_DAT_04bcf2e0)
                (*(undefined8 *)(param_6 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                 *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar24,0x10,&local_120);
    }
  }
  else {
    if (*(int *)(param_5 + 0x6e8) != 0) goto LAB_03abaccc;
    uVar27 = param_7;
    if (*(uint *)(param_5 + 0x1d0) <= param_7) {
      uVar27 = 0;
    }
    uVar42 = *(int *)(param_5 + 0x7c8) << 2 | (uint)*(byte *)(param_5 + 0x4d8) << 1 | param_11 & 1;
    lVar35 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x3a0) + 8);
    if ((int)(uVar42 - 4) < 1) {
      lVar35 = *(long *)(lVar35 + 0x18);
    }
    else {
      uVar42 = uVar42 - 5;
      if (*(uint *)(lVar35 + 0x20) <= uVar42) {
        uVar42 = 0;
      }
      lVar35 = *(long *)(lVar35 + 0x28) + (ulong)uVar42 * 0x150;
    }
    lVar44 = *(long *)(param_5 + 0x1d8);
    FUN_03907810(lVar35,param_6);
    puVar1 = (uint *)(lVar35 + 0x14);
    do {
      uVar42 = *puVar1;
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = uVar42 | 0x80000000;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    if ((uVar42 & 0x7fffffff) != 0) {
      if ((int)uVar42 < 0) {
        if ((int)*puVar1 < 0) {
          lVar50 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar50 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar35);
      }
    }
    do {
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = 0;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    lVar50 = 0x30;
    if (*(uint *)(lVar35 + 0x60) < 3) {
      lVar50 = 0;
    }
    FUN_0390d290(lVar44 + (long)(int)uVar27 * 0x648 + 0x390,param_6,
                 *(long *)(lVar35 + 0x68) + lVar50,0xffffffff,0);
    do {
      uVar42 = *puVar1;
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = uVar42 | 0x80000000;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    lVar50 = lVar44 + (long)(int)uVar27 * 0x648;
    if ((uVar42 & 0x7fffffff) != 0) {
      if ((int)uVar42 < 0) {
        if ((int)*puVar1 < 0) {
          lVar40 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar40 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar35);
      }
    }
    do {
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = 0;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    FUN_0390d290(lVar50 + 0x160,param_6,*(undefined8 *)(lVar35 + 0x68),0xffffffff,0);
    do {
      uVar42 = *puVar1;
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = uVar42 | 0x80000000;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    if ((uVar42 & 0x7fffffff) != 0) {
      if ((int)uVar42 < 0) {
        if ((int)*puVar1 < 0) {
          lVar40 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar40 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar35);
      }
    }
    do {
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = 0;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    FUN_0390d290(param_5 + 0x580,param_6,
                 *(long *)(lVar35 + 0x68) + (ulong)(1 < *(uint *)(lVar35 + 0x60)) * 0x18,0xffffffff,
                 0);
    if (*(char *)(param_5 + 0x4d8) != '\0') {
      do {
        uVar42 = *puVar1;
        cVar20 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar21) {
          *puVar1 = uVar42 | 0x80000000;
          cVar20 = ExclusiveMonitorsStatus();
        }
      } while (cVar20 != '\0');
      if ((uVar42 & 0x7fffffff) != 0) {
        if ((int)uVar42 < 0) {
          if ((int)*puVar1 < 0) {
            lVar40 = *(long *)PTR_DAT_04bb29d0;
            do {
              nn::os::ConvertToTimeSpan(lVar40 / 1000000);
              nn::os::SleepThread();
            } while ((int)*puVar1 < 0);
          }
        }
        else {
          FUN_03907b80(lVar35);
        }
      }
      do {
        cVar20 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar21) {
          *puVar1 = 0;
          cVar20 = ExclusiveMonitorsStatus();
        }
      } while (cVar20 != '\0');
      lVar40 = 0x48;
      if (*(uint *)(lVar35 + 0x60) < 4) {
        lVar40 = 0;
      }
      FUN_0390d290(lVar44 + (long)(int)uVar27 * 0x648 + 0x478,param_6,
                   *(long *)(lVar35 + 0x68) + lVar40,0xffffffff,0);
    }
    uVar27 = *(uint *)(param_5 + 0x7c8);
    fVar56 = 1.0;
    lVar44 = 0;
    if (8 < (int)uVar27) {
      uVar27 = 9;
    }
    if ((int)uVar27 < 2) {
      uVar27 = 1;
    }
    do {
      pfVar22 = (float *)(param_5 + 0x274 + lVar44);
      lVar40 = lVar44 * 4;
      lVar44 = lVar44 + 4;
      *(float *)(param_5 + 0x274 + lVar40 + -0x88) = 1.0 / (*pfVar22 * 0.5);
    } while ((ulong)uVar27 * 4 != lVar44);
    if (lVar43 != 0) {
      if ((param_11 & 1) == 0) {
        fVar56 = *(float *)(param_5 + 0x708) - param_1;
        fVar60 = param_2 - param_1;
      }
      else {
        fVar56 = 1.0 - param_1 / *(float *)(param_5 + 0x708);
        fVar60 = 1.0 - param_1 / param_2;
      }
      fVar56 = fVar56 / fVar60;
      fVar60 = 1.0;
      if (fVar56 <= 1.0) {
        fVar60 = fVar56;
      }
      fVar57 = 0.0;
      if (0.0 <= fVar56) {
        fVar57 = fVar60;
      }
      fVar56 = fVar57 * 2.0 + -1.0;
    }
    local_120 = (undefined *)
                CONCAT44(*(undefined4 *)(param_5 + 0x788),*(undefined4 *)(param_5 + 0x728));
    local_118 = (char *)CONCAT44(*(float *)(param_5 + 0x1e0) * 0.5,
                                 (param_2 - param_1) / *(float *)(param_5 + 0x748));
    do {
      uVar42 = *puVar1;
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = uVar42 | 0x80000000;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    if ((uVar42 & 0x7fffffff) != 0) {
      if ((int)uVar42 < 0) {
        if ((int)*puVar1 < 0) {
          lVar43 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar43 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar35);
      }
    }
    fVar60 = (float)(int)param_9;
    do {
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = 0;
        cVar20 = ExclusiveMonitorsStatus();
      }
      puVar23 = PTR_DAT_04bd0fc8;
      puVar8 = PTR_DAT_04bcf2e0;
    } while (cVar20 != '\0');
    if (**(int **)(lVar35 + 0x38) != -1) {
      (**(code **)PTR_DAT_04bcf2e0)
                (*(undefined8 *)(param_6 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                 *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)**(int **)(lVar35 + 0x38),
                 0x10,&local_120);
    }
    local_120 = (undefined *)
                ((ulong)(uint)(*(float *)(param_5 + 0x768) + *(float *)(param_5 + 0x768)) << 0x20);
    local_118 = (char *)CONCAT44(1.0 / param_3,1.0 - *(float *)(param_5 + 0x7a8));
    do {
      uVar42 = *puVar1;
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = uVar42 | 0x80000000;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    if ((uVar42 & 0x7fffffff) != 0) {
      if ((int)uVar42 < 0) {
        if ((int)*puVar1 < 0) {
          lVar43 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar43 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar35);
      }
    }
    do {
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = 0;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    iVar24 = *(int *)(*(long *)(lVar35 + 0x38) + (ulong)(1 < *(uint *)(lVar35 + 0x30)) * 0x18);
    if (iVar24 != -1) {
      (**(code **)puVar8)(*(undefined8 *)(param_6 + 0xb8),*(undefined8 *)(*(long *)puVar23 + 0x70),
                          *(undefined8 *)(*(long *)puVar23 + 0x18),(long)iVar24,0x10,&local_120);
    }
    uVar16 = *(ushort *)(lVar50 + 0x192);
    local_118 = (char *)(ulong)(uint)fVar60;
    uVar15 = uVar16;
    if (*(short *)(lVar50 + 0x19a) != 3) {
      uVar15 = 1;
    }
    if (uVar15 <= uVar16) {
      uVar15 = uVar16;
    }
    local_120 = (undefined *)CONCAT44(1.0 / (float)uVar15,fVar56);
    do {
      uVar42 = *puVar1;
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = uVar42 | 0x80000000;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    if ((uVar42 & 0x7fffffff) != 0) {
      if ((int)uVar42 < 0) {
        if ((int)*puVar1 < 0) {
          lVar43 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar43 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar35);
      }
    }
    do {
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = 0;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    lVar43 = 0x30;
    if (*(uint *)(lVar35 + 0x30) < 3) {
      lVar43 = 0;
    }
    iVar24 = *(int *)(*(long *)(lVar35 + 0x38) + lVar43);
    if (iVar24 != -1) {
      (**(code **)puVar8)(*(undefined8 *)(param_6 + 0xb8),*(undefined8 *)(*(long *)puVar23 + 0x70),
                          *(undefined8 *)(*(long *)puVar23 + 0x18),(long)iVar24,0x10,&local_120);
    }
    local_120 = (undefined *)CONCAT44(param_2,param_1);
    local_118 = (char *)CONCAT44(param_2,param_2 - param_1);
    do {
      uVar42 = *puVar1;
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = uVar42 | 0x80000000;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    if ((uVar42 & 0x7fffffff) != 0) {
      if ((int)uVar42 < 0) {
        if ((int)*puVar1 < 0) {
          lVar43 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar43 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar35);
      }
    }
    do {
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = 0;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    lVar43 = 0x48;
    if (*(uint *)(lVar35 + 0x30) < 4) {
      lVar43 = 0;
    }
    iVar24 = *(int *)(*(long *)(lVar35 + 0x38) + lVar43);
    if (iVar24 != -1) {
      (**(code **)puVar8)(*(undefined8 *)(param_6 + 0xb8),*(undefined8 *)(*(long *)puVar23 + 0x70),
                          *(undefined8 *)(*(long *)puVar23 + 0x18),(long)iVar24,0x10,&local_120);
    }
    local_120 = (undefined *)CONCAT44(1.0 / fVar60,1.0 / (float)(int)param_8);
    local_118 = (char *)CONCAT44(0x3e800000,fVar60 / (float)(int)param_8);
    do {
      uVar42 = *puVar1;
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = uVar42 | 0x80000000;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    if ((uVar42 & 0x7fffffff) != 0) {
      if ((int)uVar42 < 0) {
        if ((int)*puVar1 < 0) {
          lVar43 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar43 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar35);
      }
    }
    do {
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = 0;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    lVar43 = 0x60;
    if (*(uint *)(lVar35 + 0x30) < 5) {
      lVar43 = 0;
    }
    iVar24 = *(int *)(*(long *)(lVar35 + 0x38) + lVar43);
    if (iVar24 != -1) {
      (**(code **)puVar8)(*(undefined8 *)(param_6 + 0xb8),*(undefined8 *)(*(long *)puVar23 + 0x70),
                          *(undefined8 *)(*(long *)puVar23 + 0x18),(long)iVar24,0x10,&local_120);
    }
    do {
      uVar42 = *puVar1;
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = uVar42 | 0x80000000;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    if ((uVar42 & 0x7fffffff) != 0) {
      if ((int)uVar42 < 0) {
        if ((int)*puVar1 < 0) {
          lVar43 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar43 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar35);
      }
    }
    do {
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = 0;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    lVar43 = 0x78;
    if (*(uint *)(lVar35 + 0x30) < 6) {
      lVar43 = 0;
    }
    iVar24 = *(int *)(*(long *)(lVar35 + 0x38) + lVar43);
    if (iVar24 != -1) {
      (**(code **)puVar8)(*(undefined8 *)(param_6 + 0xb8),*(undefined8 *)(*(long *)puVar23 + 0x70),
                          *(undefined8 *)(*(long *)puVar23 + 0x18),(long)iVar24,
                          (ulong)(uVar27 << 2) << 2,param_5 + 0x1e4);
    }
  }
  lVar43 = *(long *)PTR_DAT_04bbd7e8;
  iVar24 = *(int *)(lVar43 + 0x480);
  if (iVar24 != 0) {
    uVar63 = *(undefined4 *)(lVar43 + 0x464);
    uVar25 = *(undefined8 *)(param_6 + 0xb8);
    uVar45 = (**(code **)PTR_DAT_04bbd560)(lVar43 + 0x488);
    (**(code **)PTR_DAT_04bbd568)(uVar25,uVar63,*(undefined4 *)(lVar43 + 0x460),iVar24,uVar45);
  }
LAB_03abaccc:
  lVar43 = lVar52 + (long)(int)uVar10 * 0x648;
  *(undefined8 *)(lVar43 + 0x70) = 0;
  uVar45 = *(undefined8 *)PTR_DAT_04bbd510;
  if (*(long *)(lVar43 + 0x240) != 0) {
    FUN_039499cc(uVar45);
    *(undefined8 *)(lVar43 + 0x240) = 0;
  }
  if (*plVar48 == 0) {
    lVar43 = *(long *)(param_5 + 0x1d8);
    if (*(uint *)(param_5 + 0x1d0) <= param_7) {
      param_7 = 0;
    }
    lVar35 = lVar43 + (long)(int)param_7 * 0x648;
    *(undefined2 *)(lVar35 + 0x224) = 0x101;
    puVar1 = (uint *)(lVar35 + 0x234);
    *(undefined1 *)(lVar35 + 0x226) = 1;
    do {
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = *puVar1 & 0xfffffffb | 4;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    plVar31 = (long *)(lVar43 + (long)(int)param_7 * 0x648);
    plVar48 = plVar31 + 0x2c;
    if (*(uint *)(*(long *)PTR_DAT_04bbdd18 + 8) < 0x76) {
      local_228 = 0;
    }
    else {
      local_228 = *(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x3a8);
    }
    plVar2 = plVar31 + 0x36;
    plVar3 = (long *)(lVar52 + (long)(int)uVar10 * 0x648 + 8);
    puVar46 = *(undefined4 **)(lVar43 + (long)(int)param_7 * 0x648 + 8);
    *(undefined4 *)plVar48 = *puVar46;
    *(undefined4 *)((long)plVar31 + 0x164) = puVar46[1];
    plVar31[0x2d] = *(long *)(puVar46 + 2);
    plVar31[0x2e] = *(long *)(puVar46 + 4);
    *(undefined4 *)(plVar31 + 0x2f) = puVar46[6];
    *(undefined4 *)((long)plVar31 + 0x17c) = puVar46[7];
    plVar31[0x30] = *(long *)(puVar46 + 8);
    plVar31[0x31] = *(long *)(puVar46 + 10);
    lVar40 = *(long *)(puVar46 + 0xc);
    lVar44 = *(long *)(puVar46 + 0xe);
    lVar50 = *(long *)(puVar46 + 0x10);
    *(undefined8 *)((long)plVar31 + 0x1a7) = *(undefined8 *)((long)puVar46 + 0x47);
    plVar41 = plVar31 + 0x32;
    *plVar41 = lVar40;
    plVar31[0x33] = lVar44;
    plVar31[0x34] = lVar50;
    FUN_038fd1e0(plVar2);
    FUN_038fd2f0(plVar2,puVar46 + 0x14);
    uVar63 = puVar46[0x26];
    plVar36 = plVar31 + 0x3e;
    *plVar36 = *(long *)(puVar46 + 0x24);
    *(undefined4 *)(plVar31 + 0x3f) = uVar63;
    do {
      cVar20 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar21) {
        *puVar1 = *puVar1 | 1;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    lVar44 = lVar43 + (long)(int)param_7 * 0x648;
    puVar46 = *(undefined4 **)(lVar44 + 0x558);
    if (puVar46 != (undefined4 *)0x0) {
      lVar50 = lVar43 + (long)(int)param_7 * 0x648;
      *(undefined4 *)(lVar50 + 0x560) = *puVar46;
      *(undefined4 *)(lVar50 + 0x564) = puVar46[1];
      *(undefined8 *)(lVar50 + 0x568) = *(undefined8 *)(puVar46 + 2);
      *(undefined8 *)(lVar50 + 0x570) = *(undefined8 *)(puVar46 + 4);
      *(undefined4 *)(lVar50 + 0x578) = puVar46[6];
      *(undefined4 *)(lVar50 + 0x57c) = puVar46[7];
      *(undefined8 *)(lVar50 + 0x580) = *(undefined8 *)(puVar46 + 8);
      *(undefined8 *)(lVar50 + 0x588) = *(undefined8 *)(puVar46 + 10);
      uVar25 = *(undefined8 *)(puVar46 + 0xc);
      uVar28 = *(undefined8 *)(puVar46 + 0xe);
      uVar37 = *(undefined8 *)(puVar46 + 0x10);
      *(undefined8 *)(lVar50 + 0x5a7) = *(undefined8 *)((long)puVar46 + 0x47);
      *(undefined8 *)(lVar50 + 0x5a0) = uVar37;
      *(undefined8 *)(lVar50 + 0x598) = uVar28;
      *(undefined8 *)(lVar50 + 0x590) = uVar25;
      FUN_038fd1e0(lVar50 + 0x5b0);
      FUN_038fd2f0(lVar50 + 0x5b0,puVar46 + 0x14);
      uVar25 = *(undefined8 *)(puVar46 + 0x24);
      *(undefined4 *)(lVar50 + 0x5f8) = puVar46[0x26];
      *(undefined8 *)(lVar50 + 0x5f0) = uVar25;
      puVar4 = (uint *)(lVar50 + 0x634);
      do {
        cVar20 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar21) {
          *puVar4 = *puVar4 | 1;
          cVar20 = ExclusiveMonitorsStatus();
        }
      } while (cVar20 != '\0');
    }
    FUN_038e4cec(&local_120);
    local_120 = (undefined *)((ulong)local_120 & 0xfffffffeffff0000);
    local_104 = local_104 & 0xfffffffffffffff0 | 3;
    FUN_038e4d90(&local_120,param_6);
    if (*(int *)(param_5 + 0x8a8) + *(int *)(param_5 + 0x8c8) < 1) {
      lVar43 = lVar43 + (long)(int)param_7 * 0x648;
      FUN_01560750(lVar43 + 0x78,*plVar31,*(undefined1 *)(lVar43 + 0x136),
                   *(undefined2 *)(lVar43 + 0x134));
      local_168 = 0xff7fffffff7fffff;
      plVar7 = (long *)(lVar43 + 0x10);
      local_178 = PTR_DAT_04bd0f08 + 0x10;
      local_170 = (char *)0x7f7fffff7f7fffff;
      local_160 = *(uint *)PTR_DAT_04bd0ea8;
      local_15c = 0x3f80000000000000;
      if (local_160 < 6) {
        if ((1 << (ulong)(local_160 & 0x1f) & 0x39U) == 0) {
          fVar60 = *(float *)(lVar43 + 0x18);
          fVar56 = *(float *)(lVar43 + 0x1c);
        }
        else {
          fVar56 = *(float *)(lVar43 + 0x18);
          fVar60 = *(float *)(lVar43 + 0x1c);
        }
        fVar61 = fVar56;
        fVar57 = 0.0;
        if (fVar56 <= 0.0) {
          fVar61 = 0.0;
          fVar57 = fVar56;
        }
        fVar59 = fVar60;
        fVar56 = 0.0;
        if (fVar60 <= 0.0) {
          fVar59 = 0.0;
          fVar56 = fVar60;
        }
        local_170 = (char *)CONCAT44(fVar56,fVar57);
        local_168 = CONCAT44(fVar59,fVar61);
      }
      FUN_038e77e4(&local_178,param_6,plVar7);
      (**(code **)(*plVar7 + 0x38))(plVar7,param_6);
      uVar25 = *(undefined8 *)
                (*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x28) + 8) + 0x18
                );
      FUN_03907810(uVar25,param_6);
      FUN_03949e90(param_6,uVar25,plVar48,&local_178,PTR_DAT_04bbdc38,PTR_DAT_04bb2f48);
      puVar46 = (undefined4 *)*plVar31;
      *(undefined4 *)plVar48 = *puVar46;
      *(undefined4 *)((long)plVar31 + 0x164) = puVar46[1];
      plVar31[0x2d] = *(long *)(puVar46 + 2);
      plVar31[0x2e] = *(long *)(puVar46 + 4);
      *(undefined4 *)(plVar31 + 0x2f) = puVar46[6];
      *(undefined4 *)((long)plVar31 + 0x17c) = puVar46[7];
      plVar31[0x30] = *(long *)(puVar46 + 8);
      plVar31[0x31] = *(long *)(puVar46 + 10);
      lVar43 = *(long *)(puVar46 + 0xc);
      lVar35 = *(long *)(puVar46 + 0xe);
      lVar44 = *(long *)(puVar46 + 0x10);
      *(undefined8 *)((long)plVar31 + 0x1a7) = *(undefined8 *)((long)puVar46 + 0x47);
      plVar31[0x33] = lVar35;
      plVar31[0x34] = lVar44;
      *plVar41 = lVar43;
      FUN_038fd1e0(plVar2);
      FUN_038fd2f0(plVar2,puVar46 + 0x14);
      lVar43 = *(long *)(puVar46 + 0x24);
      *(undefined4 *)(plVar31 + 0x3f) = puVar46[0x26];
      *plVar36 = lVar43;
      do {
        cVar20 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar21) {
          *puVar1 = *puVar1 | 1;
          cVar20 = ExclusiveMonitorsStatus();
        }
      } while (cVar20 != '\0');
    }
    else {
      uVar63 = 1;
      if (*(int *)(param_5 + 0x8c8) != 0) {
        uVar63 = 2;
      }
      lVar40 = *(long *)PTR_DAT_04bbd510;
      local_178 = PTR_DAT_04bb2020 + 0x10;
      local_170 = "ssao_blur_temp";
      uVar17 = *(undefined2 *)(*plVar31 + 0x98);
      lVar50 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
      if (lVar50 == 0) {
        local_130 = nn::os::GetCurrentCoreNumber();
      }
      else {
        local_130 = (int)lVar50 + -1;
      }
      puVar26 = (undefined4 *)
                FUN_03948e10(lVar40,param_6,lVar40 + (long)local_130 * 0x290 + 0x10,&local_178,
                             uVar17,1,param_8,param_9,uVar63,0,1,0,1,0,0,0);
      local_140 = 0;
      uStack_138 = 0;
      local_150 = 1.0 / (float)(int)param_8;
      local_144 = 0x3f800000;
      lVar50 = lVar43 + (long)(int)param_7 * 0x648;
      local_130 = 0;
      local_124 = 0;
      local_12c = *(float *)(param_5 + 0x768) + *(float *)(param_5 + 0x768);
      fStack_128 = 1.0 - *(float *)(param_5 + 0x7a8);
      puVar46 = (undefined4 *)(lVar50 + 0x218);
      puVar5 = (undefined4 *)(lVar50 + 0x21c);
      puVar6 = (undefined4 *)(lVar50 + 0x220);
      uVar65 = *(undefined4 *)(lVar50 + 0x220);
      fStack_14c = 1.0 / (float)(int)param_9;
      local_148 = (float)(int)param_9 / (float)(int)param_8;
      uVar63 = *(undefined4 *)(lVar50 + 0x218);
      uVar64 = *(undefined4 *)(lVar50 + 0x21c);
      iVar29 = *(int *)(param_5 + 0x8c8);
      iVar24 = iVar29 + *(int *)(param_5 + 0x8a8);
      if (0 < iVar24) {
        lVar32 = lVar43 + (long)(int)param_7 * 0x648;
        lVar50 = lVar32 + 0x78;
        puVar4 = (uint *)(lVar32 + 0x130);
        plVar7 = (long *)(lVar32 + 0x10);
        puVar8 = PTR_DAT_04bd0f08 + 0x10;
        lVar53 = *(long *)PTR_DAT_04bb29d0 / 1000000;
        iVar29 = 0;
        do {
          if (iVar29 == *(int *)(param_5 + 0x8a8)) {
            uVar27 = *(uint *)(lVar32 + 0xd0);
            if (uVar27 != 0xffffffff) {
              lVar33 = *(long *)PTR_DAT_04bc1010;
              if ((*(uint *)(lVar33 + 0x5c8) >> 3 & 1) == 0) {
                uVar42 = uVar27 - *(ushort *)(lVar33 + 0x3da);
                if (*(uint *)(lVar33 + 0x368) <= uVar42) {
                  uVar42 = 0;
                }
                if ((*(uint *)(*(long *)(lVar33 + 0x370) + (long)(int)uVar42 * 0x20 + 4) >> 2 & 1)
                    != 0) goto LAB_03abb260;
                uVar49 = *(ulong *)(param_6 + 0x100) | 1L << ((ulong)uVar27 & 0x3f);
              }
              else {
LAB_03abb260:
                if ((*(uint *)(lVar33 + 0x5c8) >> 5 & 1) == 0) {
                  uVar30 = 0x112;
                  uVar34 = 0x12;
                }
                else {
                  uVar30 = 0x111;
                  uVar34 = 0x11;
                }
                if ((*(uint *)(lVar33 + 800) & 2) != 0) {
                  uVar34 = uVar30;
                }
                (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_6 + 0xb8),uVar34);
                uVar49 = 0;
              }
              *(ulong *)(param_6 + 0x100) = uVar49;
            }
            *puVar46 = 0;
            *puVar5 = 0;
            *puVar6 = 0;
            do {
              cVar20 = '\x01';
              bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar21) {
                *puVar1 = *puVar1 & 0xfffffff7 | 8;
                cVar20 = ExclusiveMonitorsStatus();
              }
            } while (cVar20 != '\0');
            FUN_01560750(lVar50,*plVar31,*(undefined1 *)(lVar32 + 0x136),
                         *(undefined2 *)(lVar32 + 0x134));
            if (*(char *)(lVar32 + 0x136) != '\x01') {
              do {
                cVar20 = '\x01';
                bVar21 = (bool)ExclusiveMonitorPass(puVar4,0x10);
                if (bVar21) {
                  *puVar4 = *puVar4 | 1;
                  cVar20 = ExclusiveMonitorsStatus();
                }
              } while (cVar20 != '\0');
              *(undefined1 *)(lVar32 + 0x136) = 1;
            }
            lVar33 = *plVar31;
            uVar15 = *(ushort *)(lVar33 + 0x30) >> 1;
            if (uVar15 < 2) {
              uVar15 = 1;
            }
            fVar56 = (float)uVar15;
            sVar18 = *(short *)(lVar33 + 0x3a);
            uVar16 = *(ushort *)(lVar33 + 0x32);
            *(undefined8 *)(lVar32 + 0x20) = 0;
            uVar15 = uVar16;
            if (sVar18 != 3) {
              uVar15 = 1;
            }
            uVar16 = uVar16 >> 1;
            if (uVar15 <= uVar16) {
              uVar15 = uVar16;
            }
            fVar60 = (float)uVar15;
            *(float *)(lVar32 + 0x28) = fVar56;
            *(float *)(lVar32 + 0x18) = fVar56;
            *(float *)(lVar32 + 0x2c) = fVar60;
            *(float *)(lVar32 + 0x1c) = fVar60;
            (**(code **)(*plVar7 + 0x38))(plVar7,param_6);
            local_168 = 0xff7fffffff7fffff;
            local_170 = (char *)0x7f7fffff7f7fffff;
            local_15c = 0x3f80000000000000;
            local_160 = *(uint *)PTR_DAT_04bd0ea8;
            if (local_160 < 6) {
              if ((1 << (ulong)(local_160 & 0x1f) & 0x39U) == 0) {
                fVar61 = *(float *)(lVar32 + 0x18);
                fVar57 = *(float *)(lVar32 + 0x1c);
              }
              else {
                fVar57 = *(float *)(lVar32 + 0x18);
                fVar61 = *(float *)(lVar32 + 0x1c);
              }
              fVar58 = fVar57;
              fVar59 = 0.0;
              if (fVar57 <= 0.0) {
                fVar58 = 0.0;
                fVar59 = fVar57;
              }
              fVar62 = fVar61;
              fVar57 = 0.0;
              if (fVar61 <= 0.0) {
                fVar62 = 0.0;
                fVar57 = fVar61;
              }
              local_170 = (char *)CONCAT44(fVar57,fVar59);
              local_168 = CONCAT44(fVar62,fVar58);
            }
            local_178 = puVar8;
            FUN_038e77e4(&local_178,param_6,plVar7);
            local_150 = 1.0 / fVar56;
            local_144 = 0x3f800000;
            fStack_14c = 1.0 / fVar60;
            local_148 = fVar60 / fVar56;
            uVar25 = *(undefined8 *)
                      (*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x28) + 8)
                      + 0x28);
            FUN_03907810(uVar25,param_6);
            FUN_0394a420(param_6,uVar25,plVar48);
            *puVar46 = 0x3f800000;
            *puVar5 = 0x3f800000;
            *puVar6 = 0;
            do {
              cVar20 = '\x01';
              bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar21) {
                *puVar1 = *puVar1 & 0xfffffff7 | 8;
                cVar20 = ExclusiveMonitorsStatus();
              }
            } while (cVar20 != '\0');
            uVar27 = *(uint *)(lVar32 + 0xd0);
            if (uVar27 != 0xffffffff) {
              lVar33 = *(long *)PTR_DAT_04bc1010;
              if ((*(uint *)(lVar33 + 0x5c8) >> 3 & 1) == 0) {
                uVar42 = uVar27 - *(ushort *)(lVar33 + 0x3da);
                if (*(uint *)(lVar33 + 0x368) <= uVar42) {
                  uVar42 = 0;
                }
                if ((*(uint *)(*(long *)(lVar33 + 0x370) + (long)(int)uVar42 * 0x20 + 4) >> 2 & 1)
                    != 0) goto LAB_03abb500;
                uVar49 = *(ulong *)(param_6 + 0x100) | 1L << ((ulong)uVar27 & 0x3f);
              }
              else {
LAB_03abb500:
                if ((*(uint *)(lVar33 + 0x5c8) >> 5 & 1) == 0) {
                  uVar30 = 0x112;
                  uVar34 = 0x12;
                }
                else {
                  uVar30 = 0x111;
                  uVar34 = 0x11;
                }
                if ((*(uint *)(lVar33 + 800) & 2) != 0) {
                  uVar34 = uVar30;
                }
                (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_6 + 0xb8),uVar34);
                uVar49 = 0;
              }
              *(ulong *)(param_6 + 0x100) = uVar49;
            }
            uVar25 = *(undefined8 *)(param_6 + 0xb8);
            lVar33 = *(long *)PTR_DAT_04bbd7e0;
            (**(code **)PTR_DAT_04bcf1a8)(uVar25,0x10,lVar33 + 0x1024);
            (**(code **)PTR_DAT_04bcf1b0)(uVar25,0x10,lVar33 + 0x1068);
            iVar13 = *(int *)(lVar33 + 0x1010);
            if (iVar13 != 0) {
              lVar33 = *(long *)(lVar33 + 0x1018);
              uVar49 = 0;
              uVar51 = 0;
              do {
                lVar54 = *(long *)(lVar33 + (-(uVar51 >> 0x1f) & 0xfffffff800000000 | uVar51 << 3));
                if (lVar54 != 0) {
                  uVar28 = (**(code **)PTR_DAT_04bbd560)(lVar54 + 8);
                  (**(code **)PTR_DAT_04bcf1e8)
                            (uVar25,uVar49 & 0xffffffff,uVar28,*(undefined4 *)(lVar54 + 0x118));
                }
                uVar49 = uVar51 + 1;
                uVar51 = uVar49 & 0xffffffff;
              } while (iVar13 != (int)uVar49);
            }
            if (*(int *)(param_5 + 0x8a8) == 0) {
              puVar47 = (undefined4 *)*plVar31;
              *(undefined4 *)plVar48 = *puVar47;
              *(undefined4 *)((long)plVar31 + 0x164) = puVar47[1];
              plVar31[0x2d] = *(long *)(puVar47 + 2);
              plVar31[0x2e] = *(long *)(puVar47 + 4);
              *(undefined4 *)(plVar31 + 0x2f) = puVar47[6];
              *(undefined4 *)((long)plVar31 + 0x17c) = puVar47[7];
              plVar31[0x30] = *(long *)(puVar47 + 8);
              plVar31[0x31] = *(long *)(puVar47 + 10);
              lVar33 = *(long *)(puVar47 + 0xc);
              lVar54 = *(long *)(puVar47 + 0xe);
              lVar38 = *(long *)(puVar47 + 0x10);
              *(undefined8 *)((long)plVar31 + 0x1a7) = *(undefined8 *)((long)puVar47 + 0x47);
              plVar31[0x33] = lVar54;
              plVar31[0x34] = lVar38;
              *plVar41 = lVar33;
              FUN_038fd1e0(plVar2);
              FUN_038fd2f0(plVar2,puVar47 + 0x14);
              lVar33 = *(long *)(puVar47 + 0x24);
              *(undefined4 *)(plVar31 + 0x3f) = puVar47[0x26];
              *plVar36 = lVar33;
              do {
                cVar20 = '\x01';
                bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar21) {
                  *puVar1 = *puVar1 | 1;
                  cVar20 = ExclusiveMonitorsStatus();
                }
              } while (cVar20 != '\0');
            }
          }
          lVar54 = *(long *)(lVar44 + 0x558);
          FUN_01560750(lVar50,puVar26,*(undefined1 *)(lVar32 + 0x136),
                       *(undefined2 *)(lVar32 + 0x134));
          (**(code **)(*plVar7 + 0x38))(plVar7,param_6);
          lVar33 = *(long *)(local_228 + 8);
          if ((lVar54 == 0) ||
             (uVar27 = (uint)*(ushort *)
                              (*(long *)(lVar33 + 0x38) +
                               (ulong)(1 < *(uint *)(lVar33 + 0x30)) * 0x38 + 0x30), uVar27 == 0)) {
            lVar33 = *(long *)(lVar33 + 0x18);
          }
          else {
            uVar27 = uVar27 - 1;
            if (*(uint *)(lVar33 + 0x20) <= uVar27) {
              uVar27 = 0;
            }
            lVar33 = *(long *)(lVar33 + 0x28) + (ulong)uVar27 * 0x150;
          }
          FUN_03907810(lVar33,param_6);
          puVar9 = (uint *)(lVar33 + 0x14);
          do {
            uVar27 = *puVar9;
            cVar20 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(puVar9,0x10);
            if (bVar21) {
              *puVar9 = uVar27 | 0x80000000;
              cVar20 = ExclusiveMonitorsStatus();
            }
          } while (cVar20 != '\0');
          if ((uVar27 & 0x7fffffff) != 0) {
            if ((int)uVar27 < 0) {
              while ((int)*puVar9 < 0) {
                nn::os::ConvertToTimeSpan(lVar53);
                nn::os::SleepThread();
              }
            }
            else {
              FUN_03907b80(lVar33);
            }
          }
          do {
            cVar20 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(puVar9,0x10);
            if (bVar21) {
              *puVar9 = 0;
              cVar20 = ExclusiveMonitorsStatus();
            }
          } while (cVar20 != '\0');
          iVar13 = *(int *)(*(long *)(lVar33 + 0x38) + (ulong)(1 < *(uint *)(lVar33 + 0x30)) * 0x18)
          ;
          if (iVar13 != -1) {
            (**(code **)PTR_DAT_04bcf2e0)
                      (*(undefined8 *)(param_6 + 0xb8),
                       *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                       *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar13,0x10,
                       &local_130);
          }
          do {
            uVar27 = *puVar9;
            cVar20 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(puVar9,0x10);
            if (bVar21) {
              *puVar9 = uVar27 | 0x80000000;
              cVar20 = ExclusiveMonitorsStatus();
            }
          } while (cVar20 != '\0');
          if ((uVar27 & 0x7fffffff) != 0) {
            if ((int)uVar27 < 0) {
              while ((int)*puVar9 < 0) {
                nn::os::ConvertToTimeSpan(lVar53);
                nn::os::SleepThread();
              }
            }
            else {
              FUN_03907b80(lVar33);
            }
          }
          do {
            cVar20 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(puVar9,0x10);
            if (bVar21) {
              *puVar9 = 0;
              cVar20 = ExclusiveMonitorsStatus();
            }
          } while (cVar20 != '\0');
          lVar38 = 0x30;
          if (*(uint *)(lVar33 + 0x30) < 3) {
            lVar38 = 0;
          }
          iVar13 = *(int *)(*(long *)(lVar33 + 0x38) + lVar38);
          if (iVar13 != -1) {
            (**(code **)PTR_DAT_04bcf2e0)
                      (*(undefined8 *)(param_6 + 0xb8),
                       *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                       *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar13,0x10,
                       &local_140);
          }
          do {
            uVar27 = *puVar9;
            cVar20 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(puVar9,0x10);
            if (bVar21) {
              *puVar9 = uVar27 | 0x80000000;
              cVar20 = ExclusiveMonitorsStatus();
            }
          } while (cVar20 != '\0');
          if ((uVar27 & 0x7fffffff) != 0) {
            if ((int)uVar27 < 0) {
              while ((int)*puVar9 < 0) {
                nn::os::ConvertToTimeSpan(lVar53);
                nn::os::SleepThread();
              }
            }
            else {
              FUN_03907b80(lVar33);
            }
          }
          do {
            cVar20 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(puVar9,0x10);
            if (bVar21) {
              *puVar9 = 0;
              cVar20 = ExclusiveMonitorsStatus();
            }
          } while (cVar20 != '\0');
          lVar38 = 0x60;
          if (*(uint *)(lVar33 + 0x30) < 5) {
            lVar38 = 0;
          }
          iVar13 = *(int *)(*(long *)(lVar33 + 0x38) + lVar38);
          if (iVar13 != -1) {
            (**(code **)PTR_DAT_04bcf2e0)
                      (*(undefined8 *)(param_6 + 0xb8),
                       *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                       *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar13,0x10,
                       &local_150);
          }
          do {
            uVar27 = *puVar9;
            cVar20 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(puVar9,0x10);
            if (bVar21) {
              *puVar9 = uVar27 | 0x80000000;
              cVar20 = ExclusiveMonitorsStatus();
            }
          } while (cVar20 != '\0');
          if ((uVar27 & 0x7fffffff) != 0) {
            if ((int)uVar27 < 0) {
              while ((int)*puVar9 < 0) {
                nn::os::ConvertToTimeSpan(lVar53);
                nn::os::SleepThread();
              }
            }
            else {
              FUN_03907b80(lVar33);
            }
          }
          do {
            cVar20 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(puVar9,0x10);
            if (bVar21) {
              *puVar9 = 0;
              cVar20 = ExclusiveMonitorsStatus();
            }
          } while (cVar20 != '\0');
          FUN_0390d290(plVar48,param_6,*(undefined8 *)(lVar33 + 0x68),0xffffffff,0);
          do {
            uVar27 = *puVar9;
            cVar20 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(puVar9,0x10);
            if (bVar21) {
              *puVar9 = uVar27 | 0x80000000;
              cVar20 = ExclusiveMonitorsStatus();
            }
          } while (cVar20 != '\0');
          if ((uVar27 & 0x7fffffff) != 0) {
            if ((int)uVar27 < 0) {
              while ((int)*puVar9 < 0) {
                nn::os::ConvertToTimeSpan(lVar53);
                nn::os::SleepThread();
              }
            }
            else {
              FUN_03907b80(lVar33);
            }
          }
          do {
            cVar20 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(puVar9,0x10);
            if (bVar21) {
              *puVar9 = 0;
              cVar20 = ExclusiveMonitorsStatus();
            }
          } while (cVar20 != '\0');
          lVar38 = 0x48;
          if (*(uint *)(lVar33 + 0x60) < 4) {
            lVar38 = 0;
          }
          FUN_0390d290(lVar32 + 0x560,param_6,*(long *)(lVar33 + 0x68) + lVar38,0xffffffff,0);
          lVar33 = *(long *)PTR_DAT_04bbd7e8;
          iVar13 = *(int *)(lVar33 + 0x480);
          if (iVar13 != 0) {
            uVar34 = *(undefined4 *)(lVar33 + 0x464);
            uVar28 = *(undefined8 *)(param_6 + 0xb8);
            uVar25 = (**(code **)PTR_DAT_04bbd560)(lVar33 + 0x488);
            (**(code **)PTR_DAT_04bbd568)
                      (uVar28,uVar34,*(undefined4 *)(lVar33 + 0x460),iVar13,uVar25);
          }
          uVar27 = *(uint *)(lVar32 + 0xd0);
          if (uVar27 != 0xffffffff) {
            lVar33 = *(long *)PTR_DAT_04bc1010;
            if ((*(uint *)(lVar33 + 0x5c8) >> 3 & 1) == 0) {
              uVar42 = uVar27 - *(ushort *)(lVar33 + 0x3da);
              if (*(uint *)(lVar33 + 0x368) <= uVar42) {
                uVar42 = 0;
              }
              if ((*(uint *)(*(long *)(lVar33 + 0x370) + (long)(int)uVar42 * 0x20 + 4) >> 2 & 1) !=
                  0) goto LAB_03abbad4;
              uVar49 = *(ulong *)(param_6 + 0x100) | 1L << ((ulong)uVar27 & 0x3f);
            }
            else {
LAB_03abbad4:
              if ((*(uint *)(lVar33 + 0x5c8) >> 5 & 1) == 0) {
                uVar30 = 0x112;
                uVar34 = 0x12;
              }
              else {
                uVar30 = 0x111;
                uVar34 = 0x11;
              }
              if ((*(uint *)(lVar33 + 800) & 2) != 0) {
                uVar34 = uVar30;
              }
              (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_6 + 0xb8),uVar34);
              uVar49 = 0;
            }
            *(ulong *)(param_6 + 0x100) = uVar49;
          }
          FUN_01560750(lVar50,*plVar31,*(undefined1 *)(lVar32 + 0x136),
                       *(undefined2 *)(lVar32 + 0x134));
          (**(code **)(*plVar7 + 0x38))(plVar7,param_6);
          lVar33 = *(long *)(local_228 + 8);
          uVar27 = 0;
          if (lVar54 != 0) {
            uVar27 = (uint)*(ushort *)
                            (*(long *)(lVar33 + 0x38) + (ulong)(1 < *(uint *)(lVar33 + 0x30)) * 0x38
                            + 0x30);
          }
          iVar13 = uVar27 + *(ushort *)(*(long *)(lVar33 + 0x38) + 0x30);
          if (iVar13 == 0) {
            lVar33 = *(long *)(lVar33 + 0x18);
          }
          else {
            uVar27 = iVar13 - 1;
            if (*(uint *)(lVar33 + 0x20) <= uVar27) {
              uVar27 = 0;
            }
            lVar33 = *(long *)(lVar33 + 0x28) + (ulong)uVar27 * 0x150;
          }
          FUN_03907810(lVar33,param_6);
          puVar9 = (uint *)(lVar33 + 0x14);
          do {
            uVar27 = *puVar9;
            cVar20 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(puVar9,0x10);
            if (bVar21) {
              *puVar9 = uVar27 | 0x80000000;
              cVar20 = ExclusiveMonitorsStatus();
            }
          } while (cVar20 != '\0');
          if ((uVar27 & 0x7fffffff) != 0) {
            if ((int)uVar27 < 0) {
              while ((int)*puVar9 < 0) {
                nn::os::ConvertToTimeSpan(lVar53);
                nn::os::SleepThread();
              }
            }
            else {
              FUN_03907b80(lVar33);
            }
          }
          do {
            cVar20 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(puVar9,0x10);
            if (bVar21) {
              *puVar9 = 0;
              cVar20 = ExclusiveMonitorsStatus();
            }
          } while (cVar20 != '\0');
          iVar13 = *(int *)(*(long *)(lVar33 + 0x38) + (ulong)(1 < *(uint *)(lVar33 + 0x30)) * 0x18)
          ;
          if (iVar13 != -1) {
            (**(code **)PTR_DAT_04bcf2e0)
                      (*(undefined8 *)(param_6 + 0xb8),
                       *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                       *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar13,0x10,
                       &local_130);
          }
          do {
            uVar27 = *puVar9;
            cVar20 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(puVar9,0x10);
            if (bVar21) {
              *puVar9 = uVar27 | 0x80000000;
              cVar20 = ExclusiveMonitorsStatus();
            }
          } while (cVar20 != '\0');
          if ((uVar27 & 0x7fffffff) != 0) {
            if ((int)uVar27 < 0) {
              while ((int)*puVar9 < 0) {
                nn::os::ConvertToTimeSpan(lVar53);
                nn::os::SleepThread();
              }
            }
            else {
              FUN_03907b80(lVar33);
            }
          }
          do {
            cVar20 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(puVar9,0x10);
            if (bVar21) {
              *puVar9 = 0;
              cVar20 = ExclusiveMonitorsStatus();
            }
          } while (cVar20 != '\0');
          lVar54 = 0x30;
          if (*(uint *)(lVar33 + 0x30) < 3) {
            lVar54 = 0;
          }
          iVar13 = *(int *)(*(long *)(lVar33 + 0x38) + lVar54);
          if (iVar13 != -1) {
            (**(code **)PTR_DAT_04bcf2e0)
                      (*(undefined8 *)(param_6 + 0xb8),
                       *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                       *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar13,0x10,
                       &local_140);
          }
          do {
            uVar27 = *puVar9;
            cVar20 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(puVar9,0x10);
            if (bVar21) {
              *puVar9 = uVar27 | 0x80000000;
              cVar20 = ExclusiveMonitorsStatus();
            }
          } while (cVar20 != '\0');
          if ((uVar27 & 0x7fffffff) != 0) {
            if ((int)uVar27 < 0) {
              while ((int)*puVar9 < 0) {
                nn::os::ConvertToTimeSpan(lVar53);
                nn::os::SleepThread();
              }
            }
            else {
              FUN_03907b80(lVar33);
            }
          }
          do {
            cVar20 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(puVar9,0x10);
            if (bVar21) {
              *puVar9 = 0;
              cVar20 = ExclusiveMonitorsStatus();
            }
          } while (cVar20 != '\0');
          lVar54 = 0x60;
          if (*(uint *)(lVar33 + 0x30) < 5) {
            lVar54 = 0;
          }
          iVar13 = *(int *)(*(long *)(lVar33 + 0x38) + lVar54);
          if (iVar13 != -1) {
            (**(code **)PTR_DAT_04bcf2e0)
                      (*(undefined8 *)(param_6 + 0xb8),
                       *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                       *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar13,0x10,
                       &local_150);
          }
          *(undefined4 *)plVar48 = *puVar26;
          *(undefined4 *)((long)plVar31 + 0x164) = puVar26[1];
          plVar31[0x2d] = *(long *)(puVar26 + 2);
          plVar31[0x2e] = *(long *)(puVar26 + 4);
          *(undefined4 *)(plVar31 + 0x2f) = puVar26[6];
          *(undefined4 *)((long)plVar31 + 0x17c) = puVar26[7];
          plVar31[0x30] = *(long *)(puVar26 + 8);
          plVar31[0x31] = *(long *)(puVar26 + 10);
          lVar54 = *(long *)(puVar26 + 0xc);
          lVar38 = *(long *)(puVar26 + 0xe);
          lVar39 = *(long *)(puVar26 + 0x10);
          *(undefined8 *)((long)plVar31 + 0x1a7) = *(undefined8 *)((long)puVar26 + 0x47);
          *plVar41 = lVar54;
          plVar31[0x33] = lVar38;
          plVar31[0x34] = lVar39;
          FUN_038fd1e0(plVar2);
          FUN_038fd2f0(plVar2,puVar26 + 0x14);
          lVar54 = *(long *)(puVar26 + 0x24);
          *(undefined4 *)(plVar31 + 0x3f) = puVar26[0x26];
          *plVar36 = lVar54;
          do {
            cVar20 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar21) {
              *puVar1 = *puVar1 | 1;
              cVar20 = ExclusiveMonitorsStatus();
            }
          } while (cVar20 != '\0');
          do {
            uVar27 = *puVar9;
            cVar20 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(puVar9,0x10);
            if (bVar21) {
              *puVar9 = uVar27 | 0x80000000;
              cVar20 = ExclusiveMonitorsStatus();
            }
          } while (cVar20 != '\0');
          if ((uVar27 & 0x7fffffff) != 0) {
            if ((int)uVar27 < 0) {
              while ((int)*puVar9 < 0) {
                nn::os::ConvertToTimeSpan(lVar53);
                nn::os::SleepThread();
              }
            }
            else {
              FUN_03907b80(lVar33);
            }
          }
          do {
            cVar20 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(puVar9,0x10);
            if (bVar21) {
              *puVar9 = 0;
              cVar20 = ExclusiveMonitorsStatus();
            }
          } while (cVar20 != '\0');
          FUN_0390d290(plVar48,param_6,*(undefined8 *)(lVar33 + 0x68),0xffffffff,0);
          do {
            uVar27 = *puVar9;
            cVar20 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(puVar9,0x10);
            if (bVar21) {
              *puVar9 = uVar27 | 0x80000000;
              cVar20 = ExclusiveMonitorsStatus();
            }
          } while (cVar20 != '\0');
          if ((uVar27 & 0x7fffffff) != 0) {
            if ((int)uVar27 < 0) {
              while ((int)*puVar9 < 0) {
                nn::os::ConvertToTimeSpan(lVar53);
                nn::os::SleepThread();
              }
            }
            else {
              FUN_03907b80(lVar33);
            }
          }
          do {
            cVar20 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(puVar9,0x10);
            if (bVar21) {
              *puVar9 = 0;
              cVar20 = ExclusiveMonitorsStatus();
            }
          } while (cVar20 != '\0');
          lVar54 = 0x48;
          if (*(uint *)(lVar33 + 0x60) < 4) {
            lVar54 = 0;
          }
          FUN_0390d290(lVar32 + 0x560,param_6,*(long *)(lVar33 + 0x68) + lVar54,0xffffffff,0);
          lVar33 = *(long *)PTR_DAT_04bbd7e8;
          iVar13 = *(int *)(lVar33 + 0x480);
          if (iVar13 != 0) {
            uVar34 = *(undefined4 *)(lVar33 + 0x464);
            uVar28 = *(undefined8 *)(param_6 + 0xb8);
            uVar25 = (**(code **)PTR_DAT_04bbd560)(lVar33 + 0x488);
            (**(code **)PTR_DAT_04bbd568)
                      (uVar28,uVar34,*(undefined4 *)(lVar33 + 0x460),iVar13,uVar25);
          }
          uVar27 = *(uint *)(lVar32 + 0xd0);
          if (uVar27 != 0xffffffff) {
            lVar33 = *(long *)PTR_DAT_04bc1010;
            if ((*(uint *)(lVar33 + 0x5c8) >> 3 & 1) == 0) {
              uVar42 = uVar27 - *(ushort *)(lVar33 + 0x3da);
              if (*(uint *)(lVar33 + 0x368) <= uVar42) {
                uVar42 = 0;
              }
              if ((*(uint *)(*(long *)(lVar33 + 0x370) + (long)(int)uVar42 * 0x20 + 4) >> 2 & 1) !=
                  0) goto LAB_03abbfd0;
              uVar49 = *(ulong *)(param_6 + 0x100) | 1L << ((ulong)uVar27 & 0x3f);
            }
            else {
LAB_03abbfd0:
              if ((*(uint *)(lVar33 + 0x5c8) >> 5 & 1) == 0) {
                uVar30 = 0x112;
                uVar34 = 0x12;
              }
              else {
                uVar30 = 0x111;
                uVar34 = 0x11;
              }
              if ((*(uint *)(lVar33 + 800) & 2) != 0) {
                uVar34 = uVar30;
              }
              (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_6 + 0xb8),uVar34);
              uVar49 = 0;
            }
            *(ulong *)(param_6 + 0x100) = uVar49;
          }
          puVar47 = (undefined4 *)*plVar31;
          *(undefined4 *)plVar48 = *puVar47;
          *(undefined4 *)((long)plVar31 + 0x164) = puVar47[1];
          plVar31[0x2d] = *(long *)(puVar47 + 2);
          plVar31[0x2e] = *(long *)(puVar47 + 4);
          *(undefined4 *)(plVar31 + 0x2f) = puVar47[6];
          *(undefined4 *)((long)plVar31 + 0x17c) = puVar47[7];
          plVar31[0x30] = *(long *)(puVar47 + 8);
          plVar31[0x31] = *(long *)(puVar47 + 10);
          lVar33 = *(long *)(puVar47 + 0xc);
          lVar54 = *(long *)(puVar47 + 0xe);
          lVar38 = *(long *)(puVar47 + 0x10);
          *(undefined8 *)((long)plVar31 + 0x1a7) = *(undefined8 *)((long)puVar47 + 0x47);
          plVar31[0x33] = lVar54;
          plVar31[0x34] = lVar38;
          *plVar41 = lVar33;
          FUN_038fd1e0(plVar2);
          FUN_038fd2f0(plVar2,puVar47 + 0x14);
          lVar33 = *(long *)(puVar47 + 0x24);
          *(undefined4 *)(plVar31 + 0x3f) = puVar47[0x26];
          *plVar36 = lVar33;
          do {
            cVar20 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar21) {
              *puVar1 = *puVar1 | 1;
              cVar20 = ExclusiveMonitorsStatus();
            }
          } while (cVar20 != '\0');
          iVar29 = iVar29 + 1;
        } while (iVar29 != iVar24);
        iVar29 = *(int *)(param_5 + 0x8c8);
      }
      if (iVar29 != 0) {
        lVar44 = lVar43 + (long)(int)param_7 * 0x648;
        if (*(char *)(lVar44 + 0x136) != '\0') {
          puVar4 = (uint *)(lVar44 + 0x130);
          do {
            cVar20 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(puVar4,0x10);
            if (bVar21) {
              *puVar4 = *puVar4 | 1;
              cVar20 = ExclusiveMonitorsStatus();
            }
          } while (cVar20 != '\0');
          *(undefined1 *)(lVar44 + 0x136) = 0;
        }
        lVar44 = *plVar31;
        lVar43 = lVar43 + (long)(int)param_7 * 0x648;
        uVar15 = *(ushort *)(lVar44 + 0x30);
        sVar18 = *(short *)(lVar44 + 0x3a);
        uVar16 = *(ushort *)(lVar44 + 0x32);
        *(undefined8 *)(lVar43 + 0x20) = 0;
        if (uVar15 < 2) {
          uVar15 = 1;
        }
        uVar12 = uVar16;
        if (sVar18 != 3) {
          uVar12 = 1;
        }
        if (uVar12 <= uVar16) {
          uVar12 = uVar16;
        }
        *puVar46 = uVar63;
        *puVar5 = uVar64;
        *(float *)(lVar43 + 0x28) = (float)uVar15;
        *(float *)(lVar43 + 0x2c) = (float)uVar12;
        *(float *)(lVar43 + 0x18) = (float)uVar15;
        *(float *)(lVar43 + 0x1c) = (float)uVar12;
        *puVar6 = uVar65;
        do {
          cVar20 = '\x01';
          bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar21) {
            *puVar1 = *puVar1 & 0xfffffff7 | 8;
            cVar20 = ExclusiveMonitorsStatus();
          }
        } while (cVar20 != '\0');
        *(undefined1 *)(lVar35 + 0x224) = 1;
        *(undefined1 *)(lVar35 + 0x225) = 1;
        *(undefined1 *)(lVar35 + 0x226) = 2;
        do {
          cVar20 = '\x01';
          bVar21 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar21) {
            *puVar1 = *puVar1 & 0xfffffffb | 4;
            cVar20 = ExclusiveMonitorsStatus();
          }
        } while (cVar20 != '\0');
      }
      FUN_039499cc(lVar40,puVar26);
    }
    lVar52 = lVar52 + (long)(int)uVar10 * 0x648;
    if (*(long *)(lVar52 + 0x470) != 0) {
      FUN_039499cc(uVar45);
      *(undefined8 *)(lVar52 + 0x470) = 0;
    }
    if (*plVar3 != 0) {
      FUN_039499cc(uVar45);
      *plVar3 = 0;
    }
  }
  return;
}


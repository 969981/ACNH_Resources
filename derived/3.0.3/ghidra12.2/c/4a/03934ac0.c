
void FUN_03934ac0(long param_1,long param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  short sVar4;
  long lVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  long *plVar17;
  char cVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  undefined4 uVar23;
  uint uVar24;
  undefined8 uVar25;
  long lVar26;
  char cVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  undefined8 uVar31;
  uint uVar32;
  long lVar33;
  undefined8 uVar34;
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined *local_228;
  char *local_220;
  long local_218;
  ulong local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  char *pcStack_190;
  undefined4 local_188;
  uint local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  uint local_130;
  undefined8 local_12c;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  uint local_108;
  uint uStack_104;
  float fStack_100;
  float fStack_fc;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  float local_a0;
  float fStack_9c;
  
  uVar21 = *param_3;
  uVar19 = *(uint *)(param_1 + 0x18) & uVar21;
  if (*(uint *)(param_1 + 0x5c8) <= uVar19) {
    uVar19 = 0;
  }
  lVar33 = *(long *)(*(long *)(param_1 + 0x5d0) + (long)(int)uVar19 * 8);
  cVar18 = *(char *)(lVar33 + 0x38);
  if (*(char *)(lVar33 + 0x18) == '\0' && cVar18 == '\0') {
LAB_03934b54:
    if (*(char *)(lVar33 + 0x98) == '\0') goto LAB_03937eec;
    fVar35 = *(float *)(lVar33 + 0x238);
  }
  else {
    fVar35 = *(float *)(lVar33 + 0x238);
    if (fVar35 <= 0.0) {
      if ((*(char *)(lVar33 + 0x118) == '\0' || *(long *)(lVar33 + 0x548) == 0) || cVar18 == '\0')
      goto LAB_03934b54;
      uVar19 = 0;
      if (fVar35 != (float)(int)fVar35) {
        uVar19 = (uint)(fVar35 < 0.0);
      }
      if (((int)fVar35 != uVar19 && *(char *)(lVar33 + 0x198) == '\0') &&
          *(char *)(lVar33 + 0x98) == '\0') goto LAB_03937eec;
    }
  }
  cVar27 = *(char *)(lVar33 + 0x118);
  if (fVar35 <= 0.0) {
    lVar26 = *(long *)(lVar33 + 0x548);
    if ((cVar27 == '\0' || lVar26 == 0) || cVar18 == '\0') goto LAB_03937eec;
    uVar19 = 0;
    if (fVar35 != (float)(int)fVar35) {
      uVar19 = (uint)(fVar35 < 0.0);
    }
    if (((int)fVar35 != uVar19) && (*(char *)(lVar33 + 0x198) == '\0')) goto LAB_03937eec;
    cVar27 = '\x01';
  }
  else {
    lVar26 = *(long *)(lVar33 + 0x548);
  }
  lVar28 = *(long *)(*(long *)(param_3 + 6) + 0x20);
  fVar38 = (float)(int)fVar35;
  uVar19 = (uint)*(ushort *)(lVar28 + 0x38);
  if (*(ushort *)(lVar28 + 0x38) < 2) {
    uVar19 = 1;
  }
  uVar7 = *(ushort *)(lVar28 + 0x3a);
  uVar24 = (uint)uVar7;
  if (*(short *)(lVar28 + 0x42) != 3) {
    uVar24 = 1;
  }
  if (uVar24 == uVar7 || uVar24 < uVar7) {
    uVar24 = (uint)uVar7;
  }
  if (*(uint *)(param_1 + 0x5b8) <= uVar21) {
    uVar21 = 0;
  }
  lVar29 = *(long *)(param_1 + 0x5c0) + (long)(int)uVar21 * 0x6a0;
  lVar30 = *(long *)PTR_DAT_04bbd510;
  uVar21 = (uint)fVar35;
  if (((cVar27 == '\0') || (lVar26 == 0)) || (cVar18 == '\0')) {
LAB_03934c78:
    uVar32 = 0;
    if (fVar35 != fVar38) {
      uVar32 = (uint)(0.0 <= fVar35);
    }
    iVar15 = uVar21 + uVar32;
    if (iVar15 < 2) {
      iVar15 = 1;
    }
    uVar21 = (uint)(*(float *)(lVar33 + 0x53c) * (float)uVar19 * *(float *)(lVar33 + 0x538));
    uVar32 = (uint)(*(float *)(lVar33 + 0x538) * *(float *)(lVar33 + 0x540) * (float)uVar24);
  }
  else {
    uVar32 = 0;
    if (fVar35 != fVar38) {
      uVar32 = (uint)(fVar35 < 0.0);
    }
    if ((uVar21 != uVar32) && (*(char *)(lVar33 + 0x198) == '\0')) goto LAB_03934c78;
    uVar32 = 0;
    if (fVar35 != fVar38) {
      uVar32 = (uint)(0.0 <= fVar35);
    }
    iVar15 = uVar21 + uVar32 + 1;
    uVar21 = uVar19;
    uVar32 = uVar24;
  }
  local_228 = PTR_DAT_04bb2020 + 0x10;
  sVar4 = 0x22;
  if (*(char *)(param_1 + 0x188) == '\0' || *(short *)(lVar28 + 0xa0) != 0x1a) {
    sVar4 = *(short *)(lVar28 + 0xa0);
  }
  local_220 = "dof_blur_mipmap";
  lVar26 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar26 == 0) {
    iVar14 = nn::os::GetCurrentCoreNumber();
  }
  else {
    iVar14 = (int)lVar26 + -1;
  }
  local_120 = (undefined *)CONCAT44(local_120._4_4_,iVar14);
  lVar26 = lVar30 + 0x10;
  puVar16 = (undefined4 *)
            FUN_03948e10(lVar30,param_2,lVar26 + (long)iVar14 * 0x290,&local_228,sVar4,1,uVar21,
                         uVar32,iVar15,0,1,0,1,0,0,0);
  *(undefined4 **)(lVar29 + 0x308) = puVar16;
  *(undefined4 *)(lVar29 + 0x310) = *puVar16;
  *(undefined4 *)(lVar29 + 0x314) = puVar16[1];
  *(undefined8 *)(lVar29 + 0x318) = *(undefined8 *)(puVar16 + 2);
  *(undefined8 *)(lVar29 + 800) = *(undefined8 *)(puVar16 + 4);
  *(undefined4 *)(lVar29 + 0x328) = puVar16[6];
  *(undefined4 *)(lVar29 + 0x32c) = puVar16[7];
  *(undefined8 *)(lVar29 + 0x330) = *(undefined8 *)(puVar16 + 8);
  *(undefined8 *)(lVar29 + 0x338) = *(undefined8 *)(puVar16 + 10);
  uVar31 = *(undefined8 *)(puVar16 + 0xc);
  uVar34 = *(undefined8 *)(puVar16 + 0xe);
  uVar25 = *(undefined8 *)(puVar16 + 0x10);
  *(undefined8 *)(lVar29 + 0x357) = *(undefined8 *)((long)puVar16 + 0x47);
  *(undefined8 *)(lVar29 + 0x350) = uVar25;
  *(undefined8 *)(lVar29 + 0x348) = uVar34;
  *(undefined8 *)(lVar29 + 0x340) = uVar31;
  FUN_038fd1e0(lVar29 + 0x360);
  FUN_038fd2f0(lVar29 + 0x360,puVar16 + 0x14);
  uVar36 = puVar16[0x26];
  *(undefined8 *)(lVar29 + 0x3a0) = *(undefined8 *)(puVar16 + 0x24);
  puVar1 = (uint *)(lVar29 + 0x3e4);
  *(undefined4 *)(lVar29 + 0x3a8) = uVar36;
  do {
    cVar18 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar13) {
      *puVar1 = *puVar1 | 1;
      cVar18 = ExclusiveMonitorsStatus();
    }
  } while (cVar18 != '\0');
  if (*(char *)(lVar33 + 0x580) != '\0') {
    if (((*(char *)(lVar33 + 0x118) != '\0') && (*(long *)(lVar33 + 0x548) != 0)) &&
       (*(char *)(lVar33 + 0x38) != '\0')) {
      fVar35 = *(float *)(lVar33 + 0x238);
      uVar22 = 0;
      if (fVar35 != (float)(int)fVar35) {
        uVar22 = (uint)(fVar35 < 0.0);
      }
      if (((int)fVar35 == uVar22) || (*(char *)(lVar33 + 0x198) != '\0')) goto LAB_03934fe0;
    }
    local_228 = PTR_DAT_04bb2020 + 0x10;
    local_220 = "dof_blur_mipmap_weight";
    lVar28 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
    if (lVar28 == 0) {
      iVar14 = nn::os::GetCurrentCoreNumber();
    }
    else {
      iVar14 = (int)lVar28 + -1;
    }
    local_120 = (undefined *)CONCAT44(local_120._4_4_,iVar14);
    puVar16 = (undefined4 *)
              FUN_03948e10(lVar30,param_2,lVar26 + (long)iVar14 * 0x290,&local_228,1,1,uVar21,uVar32
                           ,iVar15,0,1,0,1,0,0,0);
    *(undefined4 **)(lVar29 + 0x3f0) = puVar16;
    *(undefined4 *)(lVar29 + 0x3f8) = *puVar16;
    *(undefined4 *)(lVar29 + 0x3fc) = puVar16[1];
    *(undefined8 *)(lVar29 + 0x400) = *(undefined8 *)(puVar16 + 2);
    *(undefined8 *)(lVar29 + 0x408) = *(undefined8 *)(puVar16 + 4);
    *(undefined4 *)(lVar29 + 0x410) = puVar16[6];
    *(undefined4 *)(lVar29 + 0x414) = puVar16[7];
    *(undefined8 *)(lVar29 + 0x418) = *(undefined8 *)(puVar16 + 8);
    *(undefined8 *)(lVar29 + 0x420) = *(undefined8 *)(puVar16 + 10);
    uVar31 = *(undefined8 *)(puVar16 + 0xc);
    uVar34 = *(undefined8 *)(puVar16 + 0xe);
    uVar25 = *(undefined8 *)(puVar16 + 0x10);
    *(undefined8 *)(lVar29 + 0x43f) = *(undefined8 *)((long)puVar16 + 0x47);
    *(undefined8 *)(lVar29 + 0x438) = uVar25;
    *(undefined8 *)(lVar29 + 0x430) = uVar34;
    *(undefined8 *)(lVar29 + 0x428) = uVar31;
    FUN_038fd1e0(lVar29 + 0x448);
    FUN_038fd2f0(lVar29 + 0x448,puVar16 + 0x14);
    uVar36 = puVar16[0x26];
    *(undefined8 *)(lVar29 + 0x488) = *(undefined8 *)(puVar16 + 0x24);
    puVar1 = (uint *)(lVar29 + 0x4cc);
    *(undefined4 *)(lVar29 + 0x490) = uVar36;
    do {
      cVar18 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar13) {
        *puVar1 = *puVar1 | 1;
        cVar18 = ExclusiveMonitorsStatus();
      }
    } while (cVar18 != '\0');
  }
LAB_03934fe0:
  cVar18 = *(char *)(lVar33 + 0x58);
  cVar27 = '\0';
  if ((*(char *)(lVar33 + 0x18) != '\0') && (cVar27 = *(char *)(lVar33 + 0x18), cVar18 != '\0')) {
    fVar35 = *(float *)(lVar33 + 0x238);
    if (0.0 < fVar35) {
      fVar38 = *(float *)(lVar33 + 600);
      uVar21 = 0;
      if (fVar38 != (float)(int)fVar38) {
        uVar21 = (uint)(0.0 <= fVar38);
      }
      uVar32 = uVar21 + (int)fVar38 + 1;
      bVar13 = false;
      if (*(char *)(lVar33 + 0x580) != '\0') {
        bVar13 = true;
        if (((*(char *)(lVar33 + 0x118) != '\0') && (bVar13 = true, *(long *)(lVar33 + 0x548) != 0))
           && (*(char *)(lVar33 + 0x38) != '\0')) {
          uVar22 = 0;
          if (fVar35 != (float)(int)fVar35) {
            uVar22 = (uint)(fVar35 < 0.0);
          }
          if ((int)fVar35 == uVar22) {
            bVar13 = false;
          }
          else {
            bVar13 = *(char *)(lVar33 + 0x198) == '\0';
          }
        }
      }
      uVar21 = uVar21 + (int)fVar38 + 2;
      if (!(bool)(bVar13 & uVar32 < 3)) {
        uVar21 = uVar32;
      }
      local_228 = PTR_DAT_04bb2020 + 0x10;
      local_220 = "dof_depth_mipmap";
      lVar28 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
      if (lVar28 == 0) {
        iVar15 = nn::os::GetCurrentCoreNumber();
      }
      else {
        iVar15 = (int)lVar28 + -1;
      }
      local_120 = (undefined *)CONCAT44(local_120._4_4_,iVar15);
      puVar16 = (undefined4 *)
                FUN_03948e10(lVar30,param_2,lVar26 + (long)iVar15 * 0x290,&local_228,1,1,uVar19 >> 1
                             ,uVar24 >> 1,uVar21,0,1,0,1,0,0,0);
      *(undefined4 **)(lVar29 + 0x4d8) = puVar16;
      *(undefined4 *)(lVar29 + 0x4e0) = *puVar16;
      *(undefined4 *)(lVar29 + 0x4e4) = puVar16[1];
      *(undefined8 *)(lVar29 + 0x4e8) = *(undefined8 *)(puVar16 + 2);
      *(undefined8 *)(lVar29 + 0x4f0) = *(undefined8 *)(puVar16 + 4);
      *(undefined4 *)(lVar29 + 0x4f8) = puVar16[6];
      *(undefined4 *)(lVar29 + 0x4fc) = puVar16[7];
      *(undefined8 *)(lVar29 + 0x500) = *(undefined8 *)(puVar16 + 8);
      *(undefined8 *)(lVar29 + 0x508) = *(undefined8 *)(puVar16 + 10);
      uVar31 = *(undefined8 *)(puVar16 + 0xc);
      uVar34 = *(undefined8 *)(puVar16 + 0xe);
      uVar25 = *(undefined8 *)(puVar16 + 0x10);
      *(undefined8 *)(lVar29 + 0x527) = *(undefined8 *)((long)puVar16 + 0x47);
      *(undefined8 *)(lVar29 + 0x520) = uVar25;
      *(undefined8 *)(lVar29 + 0x518) = uVar34;
      *(undefined8 *)(lVar29 + 0x510) = uVar31;
      FUN_038fd1e0(lVar29 + 0x530);
      FUN_038fd2f0(lVar29 + 0x530,puVar16 + 0x14);
      uVar36 = puVar16[0x26];
      *(undefined8 *)(lVar29 + 0x570) = *(undefined8 *)(puVar16 + 0x24);
      puVar1 = (uint *)(lVar29 + 0x5b4);
      *(undefined4 *)(lVar29 + 0x578) = uVar36;
      do {
        cVar18 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar13) {
          *puVar1 = *puVar1 | 1;
          cVar18 = ExclusiveMonitorsStatus();
        }
      } while (cVar18 != '\0');
      cVar27 = *(char *)(lVar33 + 0x18);
      cVar18 = *(char *)(lVar33 + 0x58);
    }
    else {
      cVar18 = '\x01';
      cVar27 = '\x01';
    }
  }
  if (((cVar27 != '\0') && (cVar18 != '\0')) && (0.0 < *(float *)(lVar33 + 0x238))) {
    lVar26 = *(long *)(param_3 + 2);
    param_3[1] = 2;
    FUN_038e4cec(&local_228);
    local_228 = (undefined *)((ulong)local_228 & 0xfffffffeffff0000);
    local_210 = local_210 & 0xfffffff0ffffffff | 0x100000000;
    FUN_038e4d90(&local_228,param_2);
    *(undefined8 *)(lVar26 + 0x220) = 0;
    *(undefined8 *)(lVar26 + 0x218) = 0;
    *(undefined8 *)(lVar26 + 0x210) = 0;
    *(undefined8 *)(lVar26 + 0x208) = 0;
    *(long *)(lVar26 + 0x1e0) = lVar26 + 0x228;
    *(undefined8 *)(lVar26 + 0x1f8) = 0;
    *(undefined8 *)(lVar26 + 0x200) = 0;
    *(undefined8 *)(lVar26 + 0x1e8) = 0;
    *(undefined8 *)(lVar26 + 0x1f0) = 0;
    FUN_01560750(lVar26 + 0x228,lVar26 + 0x4e0,0,0);
    puVar1 = (uint *)(lVar26 + 0x5b4);
    *(undefined2 *)(lVar26 + 0x5a4) = 0x101;
    *(undefined1 *)(lVar26 + 0x5a6) = 1;
    do {
      cVar18 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar13) {
        *puVar1 = *puVar1 & 0xfffffffb | 4;
        cVar18 = ExclusiveMonitorsStatus();
      }
    } while (cVar18 != '\0');
    lVar28 = 0x18;
    if ((char)param_3[0xc] != '\0') {
      lVar28 = 0x28;
    }
    lVar28 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x218) + 8)
                      + lVar28);
    FUN_03907810(lVar28,param_2);
    fVar41 = (float)param_3[8];
    fVar39 = 1.0;
    fVar45 = *(float *)(*(long *)(param_3 + 4) + 0x218);
    fVar35 = *(float *)(*(long *)(param_3 + 4) + 0x1f8);
    fVar38 = fVar35;
    if (fVar35 == fVar45 || fVar45 > fVar35) {
      fVar38 = fVar45;
    }
    if (fVar45 <= fVar35) {
      fVar35 = fVar45;
    }
    fVar45 = fVar38 + 0.1;
    if (0.1 <= fVar38 - fVar35) {
      fVar45 = fVar38;
    }
    fVar38 = fVar45;
    if ((char)param_3[0xc] != '\0') {
      fVar39 = (float)param_3[9] - fVar41;
      fVar38 = (fVar45 - fVar41) / fVar39;
    }
    local_120 = (undefined *)CONCAT44((1.0 - fVar41 / (float)param_3[9]) / fVar41,1.0 / fVar41);
    puVar2 = (uint *)(lVar28 + 0x14);
    fVar39 = fVar39 / (fVar35 - fVar45);
    local_118 = CONCAT44(-(fVar38 * fVar39),fVar39);
    do {
      uVar19 = *puVar2;
      cVar18 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar13) {
        *puVar2 = uVar19 | 0x80000000;
        cVar18 = ExclusiveMonitorsStatus();
      }
    } while (cVar18 != '\0');
    if ((uVar19 & 0x7fffffff) != 0) {
      if ((int)uVar19 < 0) {
        if ((int)*puVar2 < 0) {
          lVar29 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar29 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar2 < 0);
        }
      }
      else {
        FUN_03907b80(lVar28);
      }
    }
    do {
      cVar18 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar13) {
        *puVar2 = 0;
        cVar18 = ExclusiveMonitorsStatus();
      }
    } while (cVar18 != '\0');
    lVar29 = 0x90;
    if (*(uint *)(lVar28 + 0x30) < 7) {
      lVar29 = 0;
    }
    iVar15 = *(int *)(*(long *)(lVar28 + 0x38) + lVar29);
    if (iVar15 != -1) {
      (**(code **)PTR_DAT_04bcf2e0)
                (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                 *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar15,0x10,&local_120);
    }
    lVar29 = *(long *)(param_3 + 2);
    do {
      uVar19 = *puVar2;
      cVar18 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar13) {
        *puVar2 = uVar19 | 0x80000000;
        cVar18 = ExclusiveMonitorsStatus();
      }
    } while (cVar18 != '\0');
    if ((uVar19 & 0x7fffffff) != 0) {
      if ((int)uVar19 < 0) {
        if ((int)*puVar2 < 0) {
          lVar30 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar30 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar2 < 0);
        }
      }
      else {
        FUN_03907b80(lVar28);
      }
    }
    do {
      cVar18 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar13) {
        *puVar2 = 0;
        cVar18 = ExclusiveMonitorsStatus();
      }
    } while (cVar18 != '\0');
    FUN_0390d290(lVar29 + 0xe0,param_2,
                 *(long *)(lVar28 + 0x68) + (ulong)(1 < *(uint *)(lVar28 + 0x60)) * 0x18,0xffffffff,
                 0);
    uVar7 = *(ushort *)(lVar26 + 0x510);
    fVar35 = *(float *)(param_1 + 0x8c4);
    if (uVar7 < 2) {
      uVar7 = 1;
    }
    uVar8 = *(ushort *)(lVar26 + 0x512);
    uVar9 = uVar8;
    if (*(short *)(lVar26 + 0x51a) != 3) {
      uVar9 = 1;
    }
    if (uVar9 <= uVar8) {
      uVar9 = uVar8;
    }
    local_120 = (undefined *)CONCAT44(fVar35 * (0.5 / (float)uVar9),(0.5 / (float)uVar7) * fVar35);
    local_118 = CONCAT44(fVar35 * 0.0,fVar35 * 0.0);
    do {
      uVar19 = *puVar2;
      cVar18 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar13) {
        *puVar2 = uVar19 | 0x80000000;
        cVar18 = ExclusiveMonitorsStatus();
      }
    } while (cVar18 != '\0');
    if ((uVar19 & 0x7fffffff) != 0) {
      if ((int)uVar19 < 0) {
        if ((int)*puVar2 < 0) {
          lVar29 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar29 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar2 < 0);
        }
      }
      else {
        FUN_03907b80(lVar28);
      }
    }
    do {
      cVar18 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar13) {
        *puVar2 = 0;
        cVar18 = ExclusiveMonitorsStatus();
      }
    } while (cVar18 != '\0');
    lVar29 = 0xa8;
    if (*(uint *)(lVar28 + 0x30) < 8) {
      lVar29 = 0;
    }
    iVar15 = *(int *)(*(long *)(lVar28 + 0x38) + lVar29);
    if (iVar15 != -1) {
      (**(code **)PTR_DAT_04bcf2e0)
                (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                 *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar15,0x10,&local_120);
    }
    FUN_039380b0(param_2,lVar26 + 0x1c0,0);
    FUN_039387c0(param_1,param_2,param_3);
    uVar19 = *(uint *)(*(long *)(*(long *)(param_3 + 2) + 0x1e0) + 0x58);
    if (uVar19 != 0xffffffff) {
      lVar28 = *(long *)PTR_DAT_04bc1010;
      if ((*(uint *)(lVar28 + 0x5c8) >> 3 & 1) == 0) {
        uVar21 = uVar19 - *(ushort *)(lVar28 + 0x3da);
        if (*(uint *)(lVar28 + 0x368) <= uVar21) {
          uVar21 = 0;
        }
        if ((*(uint *)(*(long *)(lVar28 + 0x370) + (long)(int)uVar21 * 0x20 + 4) >> 2 & 1) == 0) {
          *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar19 & 0x3f);
          goto LAB_039356b4;
        }
      }
      if ((*(uint *)(lVar28 + 0x5c8) >> 5 & 1) == 0) {
        uVar23 = 0x112;
        uVar36 = 0x12;
      }
      else {
        uVar23 = 0x111;
        uVar36 = 0x11;
      }
      if ((*(uint *)(lVar28 + 800) & 2) != 0) {
        uVar36 = uVar23;
      }
      (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar36);
      *(undefined8 *)(param_2 + 0x100) = 0;
    }
LAB_039356b4:
    lVar28 = *(long *)(*(long *)(param_3 + 4) + 0x4f0);
    FUN_03907810(lVar28,param_2);
    bVar6 = *(byte *)(lVar26 + 0x519);
    if (1 < bVar6) {
      puVar2 = (uint *)(lVar28 + 0x14);
      uVar19 = 1;
      lVar29 = *(long *)PTR_DAT_04bb29d0;
      do {
        *(undefined4 *)(lVar26 + 0x5a0) = 0;
        *(float *)(lVar26 + 0x598) = (float)(uVar19 - 1);
        *(float *)(lVar26 + 0x59c) = (float)(uVar19 - 1);
        do {
          cVar18 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar13) {
            *puVar1 = *puVar1 & 0xfffffff7 | 8;
            cVar18 = ExclusiveMonitorsStatus();
          }
        } while (cVar18 != '\0');
        do {
          uVar21 = *puVar2;
          cVar18 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar13) {
            *puVar2 = uVar21 | 0x80000000;
            cVar18 = ExclusiveMonitorsStatus();
          }
        } while (cVar18 != '\0');
        if ((uVar21 & 0x7fffffff) != 0) {
          if ((int)uVar21 < 0) {
            while ((int)*puVar2 < 0) {
              nn::os::ConvertToTimeSpan(lVar29 / 1000000);
              nn::os::SleepThread();
            }
          }
          else {
            FUN_03907b80(lVar28);
          }
        }
        do {
          cVar18 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar13) {
            *puVar2 = 0;
            cVar18 = ExclusiveMonitorsStatus();
          }
        } while (cVar18 != '\0');
        FUN_0390d290(lVar26 + 0x4e0,param_2,
                     *(long *)(lVar28 + 0x68) + (ulong)(1 < *(uint *)(lVar28 + 0x60)) * 0x18,
                     0xffffffff,0);
        uVar9 = *(ushort *)(lVar26 + 0x510) >> (ulong)(uVar19 & 0x1f);
        uVar7 = *(ushort *)(lVar26 + 0x512);
        if (uVar9 < 2) {
          uVar9 = 1;
        }
        uVar8 = uVar7 >> (ulong)(uVar19 & 0x1f);
        if (*(short *)(lVar26 + 0x51a) != 3) {
          uVar7 = 1;
        }
        if (uVar7 <= uVar8) {
          uVar7 = uVar8;
        }
        fVar35 = *(float *)(param_1 + 0x8c4);
        local_120 = (undefined *)
                    CONCAT44(fVar35 * (0.5 / (float)uVar7),fVar35 * (0.5 / (float)uVar9));
        local_118 = CONCAT44(fVar35 * 0.0,fVar35 * 0.0);
        do {
          uVar21 = *puVar2;
          cVar18 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar13) {
            *puVar2 = uVar21 | 0x80000000;
            cVar18 = ExclusiveMonitorsStatus();
          }
        } while (cVar18 != '\0');
        if ((uVar21 & 0x7fffffff) != 0) {
          if ((int)uVar21 < 0) {
            while ((int)*puVar2 < 0) {
              nn::os::ConvertToTimeSpan(lVar29 / 1000000);
              nn::os::SleepThread();
            }
          }
          else {
            FUN_03907b80(lVar28);
          }
        }
        do {
          cVar18 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar13) {
            *puVar2 = 0;
            cVar18 = ExclusiveMonitorsStatus();
          }
        } while (cVar18 != '\0');
        lVar30 = 0xa8;
        if (*(uint *)(lVar28 + 0x30) < 8) {
          lVar30 = 0;
        }
        iVar15 = *(int *)(*(long *)(lVar28 + 0x38) + lVar30);
        if (iVar15 != -1) {
          (**(code **)PTR_DAT_04bcf2e0)
                    (*(undefined8 *)(param_2 + 0xb8),
                     *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                     *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar15,0x10,&local_120)
          ;
        }
        FUN_039380b0(param_2,lVar26 + 0x1c0,uVar19);
        FUN_039387c0(param_1,param_2,param_3);
        uVar21 = *(uint *)(*(long *)(*(long *)(param_3 + 2) + 0x1e0) + 0x58);
        if (uVar21 != 0xffffffff) {
          lVar30 = *(long *)PTR_DAT_04bc1010;
          if ((*(uint *)(lVar30 + 0x5c8) >> 3 & 1) == 0) {
            uVar24 = uVar21 - *(ushort *)(lVar30 + 0x3da);
            if (*(uint *)(lVar30 + 0x368) <= uVar24) {
              uVar24 = 0;
            }
            if ((*(uint *)(*(long *)(lVar30 + 0x370) + (long)(int)uVar24 * 0x20 + 4) >> 2 & 1) != 0)
            goto LAB_03935950;
            uVar20 = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar21 & 0x3f);
          }
          else {
LAB_03935950:
            if ((*(uint *)(lVar30 + 0x5c8) >> 5 & 1) == 0) {
              uVar23 = 0x112;
              uVar36 = 0x12;
            }
            else {
              uVar23 = 0x111;
              uVar36 = 0x11;
            }
            if ((*(uint *)(lVar30 + 800) & 2) != 0) {
              uVar36 = uVar23;
            }
            (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar36);
            uVar20 = 0;
          }
          *(ulong *)(param_2 + 0x100) = uVar20;
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 != bVar6);
    }
    uVar36 = *(undefined4 *)(*(long *)(param_3 + 4) + 600);
    *(undefined4 *)(lVar26 + 0x5a0) = 0;
    *(undefined4 *)(lVar26 + 0x598) = uVar36;
    *(undefined4 *)(lVar26 + 0x59c) = uVar36;
    do {
      cVar18 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar13) {
        *puVar1 = *puVar1 & 0xfffffff7 | 8;
        cVar18 = ExclusiveMonitorsStatus();
      }
    } while (cVar18 != '\0');
    *(undefined2 *)(lVar26 + 0x5a4) = 0x101;
    *(undefined1 *)(lVar26 + 0x5a6) = 1;
    do {
      cVar18 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar13) {
        *puVar1 = *puVar1 & 0xfffffffb | 4;
        cVar18 = ExclusiveMonitorsStatus();
      }
    } while (cVar18 != '\0');
  }
  param_3[1] = 1;
  lVar26 = *(long *)(param_3 + 4);
  if ((*(char *)(lVar26 + 0x118) == '\0' || *(long *)(lVar26 + 0x548) == 0) ||
      *(char *)(lVar26 + 0x38) == '\0') {
    bVar13 = false;
  }
  else {
    fVar35 = *(float *)(lVar26 + 0x238);
    uVar19 = 0;
    if (fVar35 != (float)(int)fVar35) {
      uVar19 = (uint)(fVar35 < 0.0);
    }
    if ((int)fVar35 == uVar19) {
      bVar13 = true;
    }
    else {
      bVar13 = *(char *)(lVar26 + 0x198) != '\0';
    }
  }
  lVar26 = *(long *)(param_3 + 2);
  FUN_038e4cec(&local_120);
  local_120._2_6_ = (uint6)((ulong)local_120 >> 0x10) & 0xffff;
  local_120 = (undefined *)((ulong)local_120._2_6_ << 0x10);
  uVar19 = 7;
  if (*(char *)(param_1 + 0x188) != '\0') {
    uVar19 = 0xf;
  }
  uStack_104 = uVar19 | uStack_104 & 0xfffffff0;
  FUN_038e4d90(&local_120,param_2);
  *(undefined8 *)(lVar26 + 0x220) = 0;
  *(undefined8 *)(lVar26 + 0x218) = 0;
  *(undefined8 *)(lVar26 + 0x210) = 0;
  *(undefined8 *)(lVar26 + 0x208) = 0;
  *(long *)(lVar26 + 0x1e0) = lVar26 + 0x228;
  *(undefined8 *)(lVar26 + 0x1f8) = 0;
  *(undefined8 *)(lVar26 + 0x200) = 0;
  *(undefined8 *)(lVar26 + 0x1e8) = 0;
  *(undefined8 *)(lVar26 + 0x1f0) = 0;
  FUN_01560750(lVar26 + 0x228,lVar26 + 0x310,0,0);
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0xffffffff;
  local_198 = 0;
  pcStack_190 = "agl::TextureData";
  local_188 = 0x10000;
  local_1f0 = 0;
  local_1e8 = 0;
  local_200 = 0;
  local_1f8 = 0;
  local_210 = 0;
  local_208 = 0;
  local_220 = (char *)0x0;
  local_218 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_170 = 0xff;
  local_16c = 0;
  local_228 = PTR_DAT_04bd1198 + 0x10;
  local_168 = 0x80000000000;
  uStack_160 = 0;
  lVar28 = *(long *)(param_3 + 4);
  local_158 = 0;
  uStack_150 = 0;
  if (*(char *)(lVar28 + 0x580) != '\0') {
    if (((*(char *)(lVar28 + 0x118) != '\0') && (*(long *)(lVar28 + 0x548) != 0)) &&
       (*(char *)(lVar28 + 0x38) != '\0')) {
      fVar35 = *(float *)(lVar28 + 0x238);
      uVar19 = 0;
      if (fVar35 != (float)(int)fVar35) {
        uVar19 = (uint)(fVar35 < 0.0);
      }
      if (((int)fVar35 == uVar19) || (*(char *)(lVar28 + 0x198) != '\0')) goto LAB_03935bc0;
    }
    FUN_01560750(&local_228,*(undefined8 *)(*(long *)(param_3 + 2) + 0x3f0),0,0);
    *(undefined ***)(lVar26 + 0x1e8) = &local_228;
    lVar28 = *(long *)(param_3 + 4);
  }
LAB_03935bc0:
  lVar28 = *(long *)(lVar28 + 0x4d8);
  FUN_03907810(lVar28,param_2);
  puVar1 = (uint *)(lVar26 + 0x3e4);
  *(undefined2 *)(lVar26 + 0x3d4) = 0x101;
  *(undefined1 *)(lVar26 + 0x3d6) = 1;
  do {
    cVar18 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar12) {
      *puVar1 = *puVar1 & 0xfffffffb | 4;
      cVar18 = ExclusiveMonitorsStatus();
    }
  } while (cVar18 != '\0');
  lVar29 = *(long *)(param_3 + 2);
  *(undefined2 *)(lVar29 + 0x4bc) = 0x101;
  *(undefined1 *)(lVar29 + 0x4be) = 1;
  puVar2 = (uint *)(lVar29 + 0x4cc);
  do {
    cVar18 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar12) {
      *puVar2 = *puVar2 & 0xfffffffb | 4;
      cVar18 = ExclusiveMonitorsStatus();
    }
  } while (cVar18 != '\0');
  bVar6 = *(byte *)(lVar26 + 0x349);
  if (bVar6 != 0) {
    uVar19 = 0;
    lVar29 = *(long *)PTR_DAT_04bb29d0 / 1000000;
    do {
      if (uVar19 == 0) {
        if (!bVar13) {
          lVar30 = *(long *)(param_3 + 4);
          if (*(char *)(lVar30 + 0x580) == '\0') {
LAB_0393615c:
            lVar30 = *(long *)(param_3 + 2);
            puVar2 = (uint *)(lVar28 + 0x14);
            uVar7 = *(ushort *)(lVar30 + 0x30);
            if (uVar7 < 2) {
              uVar7 = 1;
            }
            uVar8 = *(ushort *)(lVar30 + 0x32);
            uVar9 = uVar8;
            if (*(short *)(lVar30 + 0x3a) != 3) {
              uVar9 = 1;
            }
            if (uVar9 <= uVar8) {
              uVar9 = uVar8;
            }
            fVar35 = *(float *)(param_1 + 0x8c4);
            local_148 = (undefined *)
                        CONCAT44(fVar35 * (1.0 / (float)uVar9),(1.0 / (float)uVar7) * fVar35);
            local_140 = CONCAT44(fVar35 * 0.0,fVar35 * 0.0);
            do {
              uVar21 = *puVar2;
              cVar18 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar12) {
                *puVar2 = uVar21 | 0x80000000;
                cVar18 = ExclusiveMonitorsStatus();
              }
            } while (cVar18 != '\0');
            if ((uVar21 & 0x7fffffff) != 0) {
              if ((int)uVar21 < 0) {
                while ((int)*puVar2 < 0) {
                  nn::os::ConvertToTimeSpan(lVar29);
                  nn::os::SleepThread();
                }
              }
              else {
                FUN_03907b80(lVar28);
              }
            }
            do {
              cVar18 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar12) {
                *puVar2 = 0;
                cVar18 = ExclusiveMonitorsStatus();
              }
            } while (cVar18 != '\0');
            lVar30 = 0xa8;
            if (*(uint *)(lVar28 + 0x30) < 8) {
              lVar30 = 0;
            }
            iVar15 = *(int *)(*(long *)(lVar28 + 0x38) + lVar30);
            if (iVar15 != -1) {
              (**(code **)PTR_DAT_04bcf2e0)
                        (*(undefined8 *)(param_2 + 0xb8),
                         *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                         *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar15,0x10,
                         &local_148);
            }
          }
          else {
            if (((*(char *)(lVar30 + 0x118) != '\0') && (*(long *)(lVar30 + 0x548) != 0)) &&
               (*(char *)(lVar30 + 0x38) != '\0')) {
              fVar35 = *(float *)(lVar30 + 0x238);
              uVar21 = 0;
              if (fVar35 != (float)(int)fVar35) {
                uVar21 = (uint)(fVar35 < 0.0);
              }
              if (((int)fVar35 == uVar21) || (*(char *)(lVar30 + 0x198) != '\0')) goto LAB_0393615c;
            }
            param_3[1] = 0;
            lVar28 = 8;
            if ((char)param_3[0xc] != '\0') {
              lVar28 = 0x10;
            }
            lVar28 = *(long *)(lVar30 + lVar28 + 0x4d8);
            FUN_03907810(lVar28,param_2);
            lVar30 = *(long *)(param_3 + 2);
            *(undefined2 *)(lVar30 + 0xc4) = 0;
            *(undefined1 *)(lVar30 + 0xc6) = 0;
            puVar2 = (uint *)(lVar30 + 0xd4);
            do {
              cVar18 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar12) {
                *puVar2 = *puVar2 & 0xfffffffb | 4;
                cVar18 = ExclusiveMonitorsStatus();
              }
            } while (cVar18 != '\0');
            lVar30 = *(long *)(param_3 + 2);
            *(undefined2 *)(lVar30 + 0x1a4) = 0;
            *(undefined1 *)(lVar30 + 0x1a6) = 0;
            puVar2 = (uint *)(lVar30 + 0x1b4);
            do {
              cVar18 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar12) {
                *puVar2 = *puVar2 & 0xfffffffb | 4;
                cVar18 = ExclusiveMonitorsStatus();
              }
            } while (cVar18 != '\0');
            lVar30 = *(long *)(param_3 + 2);
            puVar2 = (uint *)(lVar28 + 0x14);
            do {
              uVar21 = *puVar2;
              cVar18 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar12) {
                *puVar2 = uVar21 | 0x80000000;
                cVar18 = ExclusiveMonitorsStatus();
              }
            } while (cVar18 != '\0');
            if ((uVar21 & 0x7fffffff) != 0) {
              if ((int)uVar21 < 0) {
                while ((int)*puVar2 < 0) {
                  nn::os::ConvertToTimeSpan(lVar29);
                  nn::os::SleepThread();
                }
              }
              else {
                FUN_03907b80(lVar28);
              }
            }
            do {
              cVar18 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar12) {
                *puVar2 = 0;
                cVar18 = ExclusiveMonitorsStatus();
              }
            } while (cVar18 != '\0');
            FUN_0390d290(lVar30 + 0xe0,param_2,
                         *(long *)(lVar28 + 0x68) + (ulong)(1 < *(uint *)(lVar28 + 0x60)) * 0x18,
                         0xffffffff,0);
            lVar30 = *(long *)(param_3 + 4);
            if ((*(char *)(lVar30 + 0x18) != '\0' && *(char *)(lVar30 + 0x58) != '\0') &&
               (0.0 < *(float *)(lVar30 + 0x238))) {
              lVar30 = *(long *)(param_3 + 2);
              *(undefined4 *)(lVar30 + 0x5a0) = 0;
              fVar35 = (float)(*(byte *)(lVar30 + 0x519) - 1);
              *(float *)(lVar30 + 0x598) = fVar35;
              *(float *)(lVar30 + 0x59c) = fVar35;
              puVar3 = (uint *)(lVar30 + 0x5b4);
              do {
                cVar18 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                if (bVar12) {
                  *puVar3 = *puVar3 & 0xfffffff7 | 8;
                  cVar18 = ExclusiveMonitorsStatus();
                }
              } while (cVar18 != '\0');
              lVar30 = *(long *)(param_3 + 2);
              do {
                uVar21 = *puVar2;
                cVar18 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar12) {
                  *puVar2 = uVar21 | 0x80000000;
                  cVar18 = ExclusiveMonitorsStatus();
                }
              } while (cVar18 != '\0');
              if ((uVar21 & 0x7fffffff) != 0) {
                if ((int)uVar21 < 0) {
                  while ((int)*puVar2 < 0) {
                    nn::os::ConvertToTimeSpan(lVar29);
                    nn::os::SleepThread();
                  }
                }
                else {
                  FUN_03907b80(lVar28);
                }
              }
              do {
                cVar18 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar12) {
                  *puVar2 = 0;
                  cVar18 = ExclusiveMonitorsStatus();
                }
              } while (cVar18 != '\0');
              lVar5 = 0x48;
              if (*(uint *)(lVar28 + 0x60) < 4) {
                lVar5 = 0;
              }
              FUN_0390d290(lVar30 + 0x4e0,param_2,*(long *)(lVar28 + 0x68) + lVar5,0xffffffff,0);
              lVar30 = *(long *)(param_3 + 4);
            }
            fVar38 = (float)param_3[8];
            bVar12 = (char)param_3[0xc] != '\0';
            fVar35 = 1.0 / fVar38;
            if (bVar12) {
              fVar35 = (float)param_3[9] - fVar38;
            }
            fVar39 = (1.0 - fVar38 / (float)param_3[9]) / fVar38;
            if (bVar12) {
              fVar39 = fVar38;
            }
            local_148 = (undefined *)CONCAT44(fVar39,fVar35);
            fVar35 = *(float *)(lVar30 + 0x1b8);
            if (*(float *)(lVar30 + 0x1d8) <= *(float *)(lVar30 + 0x1b8)) {
              fVar35 = *(float *)(lVar30 + 0x1d8);
            }
            fVar38 = *(float *)(lVar30 + 0x1f8);
            if (*(float *)(lVar30 + 0x1f8) <= *(float *)(lVar30 + 0x218)) {
              fVar38 = *(float *)(lVar30 + 0x218);
            }
            local_140 = CONCAT44(fVar38,fVar35);
            do {
              uVar21 = *puVar2;
              cVar18 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar12) {
                *puVar2 = uVar21 | 0x80000000;
                cVar18 = ExclusiveMonitorsStatus();
              }
            } while (cVar18 != '\0');
            if ((uVar21 & 0x7fffffff) != 0) {
              if ((int)uVar21 < 0) {
                while ((int)*puVar2 < 0) {
                  nn::os::ConvertToTimeSpan(lVar29);
                  nn::os::SleepThread();
                }
              }
              else {
                FUN_03907b80(lVar28);
              }
            }
            do {
              cVar18 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar12) {
                *puVar2 = 0;
                cVar18 = ExclusiveMonitorsStatus();
              }
            } while (cVar18 != '\0');
            lVar30 = 0x90;
            if (*(uint *)(lVar28 + 0x30) < 7) {
              lVar30 = 0;
            }
            iVar15 = *(int *)(*(long *)(lVar28 + 0x38) + lVar30);
            if (iVar15 != -1) {
              (**(code **)PTR_DAT_04bcf2e0)
                        (*(undefined8 *)(param_2 + 0xb8),
                         *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                         *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar15,0x10,
                         &local_148);
            }
            lVar30 = *(long *)(param_3 + 2);
            uVar7 = *(ushort *)(lVar30 + 0x30);
            if (uVar7 < 2) {
              uVar7 = 1;
            }
            uVar8 = *(ushort *)(lVar30 + 0x32);
            uVar9 = uVar8;
            if (*(short *)(lVar30 + 0x3a) != 3) {
              uVar9 = 1;
            }
            if (uVar9 <= uVar8) {
              uVar9 = uVar8;
            }
            local_140 = CONCAT44((float)uVar9,(float)uVar7);
            local_148 = (undefined *)CONCAT44(1.0 / (float)uVar9,1.0 / (float)uVar7);
            do {
              uVar21 = *puVar2;
              cVar18 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar12) {
                *puVar2 = uVar21 | 0x80000000;
                cVar18 = ExclusiveMonitorsStatus();
              }
            } while (cVar18 != '\0');
            if ((uVar21 & 0x7fffffff) != 0) {
              if ((int)uVar21 < 0) {
                while ((int)*puVar2 < 0) {
                  nn::os::ConvertToTimeSpan(lVar29);
                  nn::os::SleepThread();
                }
              }
              else {
                FUN_03907b80(lVar28);
              }
            }
            do {
              cVar18 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar12) {
                *puVar2 = 0;
                cVar18 = ExclusiveMonitorsStatus();
              }
            } while (cVar18 != '\0');
            lVar30 = 0xa8;
            if (*(uint *)(lVar28 + 0x30) < 8) {
              lVar30 = 0;
            }
            iVar15 = *(int *)(*(long *)(lVar28 + 0x38) + lVar30);
            if (iVar15 != -1) {
              (**(code **)PTR_DAT_04bcf2e0)
                        (*(undefined8 *)(param_2 + 0xb8),
                         *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                         *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar15,0x10,
                         &local_148);
            }
            if (*(char *)(*(long *)(param_3 + 4) + 0x98) != '\0') {
              FUN_03938270(param_2,param_3,lVar28);
            }
          }
          uVar31 = *(undefined8 *)(param_3 + 2);
          puVar2 = (uint *)(lVar28 + 0x14);
          do {
            uVar21 = *puVar2;
            cVar18 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar12) {
              *puVar2 = uVar21 | 0x80000000;
              cVar18 = ExclusiveMonitorsStatus();
            }
          } while (cVar18 != '\0');
          if ((uVar21 & 0x7fffffff) != 0) {
            if ((int)uVar21 < 0) {
              while ((int)*puVar2 < 0) {
                nn::os::ConvertToTimeSpan(lVar29);
                nn::os::SleepThread();
              }
            }
            else {
              FUN_03907b80(lVar28);
            }
          }
          do {
            cVar18 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar12) {
              *puVar2 = 0;
              cVar18 = ExclusiveMonitorsStatus();
            }
          } while (cVar18 != '\0');
          FUN_0390d290(uVar31,param_2,*(undefined8 *)(lVar28 + 0x68),0xffffffff,0);
          goto LAB_039366dc;
        }
        FUN_039380b0(param_2,lVar26 + 0x1c0,0);
        lVar30 = *(long *)(param_3 + 2);
        *(undefined2 *)(lVar30 + 0xc4) = 0x101;
        *(undefined1 *)(lVar30 + 0xc6) = 0;
        puVar2 = (uint *)(lVar30 + 0xd4);
        do {
          cVar18 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar12) {
            *puVar2 = *puVar2 & 0xfffffffb | 4;
            cVar18 = ExclusiveMonitorsStatus();
          }
        } while (cVar18 != '\0');
        uVar31 = *(undefined8 *)(param_3 + 2);
        uVar34 = *(undefined8 *)
                  (*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x28) + 8) +
                  0x28);
        FUN_03907810(uVar34,param_2);
        FUN_0394a420(param_2,uVar34,uVar31);
        uVar21 = *(uint *)(*(long *)(*(long *)(param_3 + 2) + 0x1e0) + 0x58);
        if (uVar21 != 0xffffffff) {
          lVar30 = *(long *)PTR_DAT_04bc1010;
          if ((*(uint *)(lVar30 + 0x5c8) >> 3 & 1) == 0) {
            uVar24 = uVar21 - *(ushort *)(lVar30 + 0x3da);
            if (*(uint *)(lVar30 + 0x368) <= uVar24) {
              uVar24 = 0;
            }
            if ((*(uint *)(*(long *)(lVar30 + 0x370) + (long)(int)uVar24 * 0x20 + 4) >> 2 & 1) != 0)
            goto LAB_03936258;
            uVar20 = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar21 & 0x3f);
          }
          else {
LAB_03936258:
            if ((*(uint *)(lVar30 + 0x5c8) >> 5 & 1) == 0) {
              uVar23 = 0x112;
              uVar36 = 0x12;
            }
            else {
              uVar23 = 0x111;
              uVar36 = 0x11;
            }
            if ((*(uint *)(lVar30 + 800) & 2) != 0) {
              uVar36 = uVar23;
            }
            (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar36);
            uVar20 = 0;
          }
          *(ulong *)(param_2 + 0x100) = uVar20;
        }
        FUN_03907810(lVar28,param_2);
      }
      else {
        lVar30 = *(long *)(param_3 + 4);
        if (*(char *)(lVar30 + 0x580) != '\0') {
          if ((*(char *)(lVar30 + 0x118) == '\0' || *(long *)(lVar30 + 0x548) == 0) ||
              *(char *)(lVar30 + 0x38) == '\0') {
            bVar12 = true;
          }
          else {
            fVar35 = *(float *)(lVar30 + 0x238);
            uVar21 = 0;
            if (fVar35 != (float)(int)fVar35) {
              uVar21 = (uint)(fVar35 < 0.0);
            }
            if ((int)fVar35 == uVar21) goto LAB_03935e48;
            bVar12 = *(char *)(lVar30 + 0x198) == '\0';
          }
          if ((uVar19 == 1) && (bVar12)) {
            param_3[1] = 1;
            lVar28 = *(long *)(lVar30 + 0x4d8);
            FUN_03907810(lVar28,param_2);
            lVar30 = *(long *)(param_3 + 2);
            uVar36 = *(undefined4 *)(*(long *)(param_3 + 4) + 600);
            *(undefined4 *)(lVar30 + 0x5a0) = 0;
            *(undefined4 *)(lVar30 + 0x598) = uVar36;
            *(undefined4 *)(lVar30 + 0x59c) = uVar36;
            puVar2 = (uint *)(lVar30 + 0x5b4);
            do {
              cVar18 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar12) {
                *puVar2 = *puVar2 & 0xfffffff7 | 8;
                cVar18 = ExclusiveMonitorsStatus();
              }
            } while (cVar18 != '\0');
          }
        }
LAB_03935e48:
        uVar21 = uVar19 - 1;
        *(undefined4 *)(lVar26 + 0x3d0) = 0;
        fVar35 = (float)uVar21;
        *(float *)(lVar26 + 0x3c8) = fVar35;
        *(float *)(lVar26 + 0x3cc) = fVar35;
        do {
          cVar18 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar12) {
            *puVar1 = *puVar1 & 0xfffffff7 | 8;
            cVar18 = ExclusiveMonitorsStatus();
          }
        } while (cVar18 != '\0');
        puVar2 = (uint *)(lVar28 + 0x14);
        do {
          uVar24 = *puVar2;
          cVar18 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar12) {
            *puVar2 = uVar24 | 0x80000000;
            cVar18 = ExclusiveMonitorsStatus();
          }
        } while (cVar18 != '\0');
        if ((uVar24 & 0x7fffffff) != 0) {
          if ((int)uVar24 < 0) {
            while ((int)*puVar2 < 0) {
              nn::os::ConvertToTimeSpan(lVar29);
              nn::os::SleepThread();
            }
          }
          else {
            FUN_03907b80(lVar28);
          }
        }
        do {
          cVar18 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar12) {
            *puVar2 = 0;
            cVar18 = ExclusiveMonitorsStatus();
          }
        } while (cVar18 != '\0');
        FUN_0390d290(lVar26 + 0x310,param_2,*(undefined8 *)(lVar28 + 0x68),0xffffffff,0);
        lVar30 = *(long *)(param_3 + 4);
        if (*(char *)(lVar30 + 0x580) != '\0') {
          if (((*(char *)(lVar30 + 0x118) != '\0') && (*(long *)(lVar30 + 0x548) != 0)) &&
             (*(char *)(lVar30 + 0x38) != '\0')) {
            fVar38 = *(float *)(lVar30 + 0x238);
            uVar24 = 0;
            if (fVar38 != (float)(int)fVar38) {
              uVar24 = (uint)(fVar38 < 0.0);
            }
            if (((int)fVar38 == uVar24) || (*(char *)(lVar30 + 0x198) != '\0')) goto LAB_03936004;
          }
          lVar30 = *(long *)(param_3 + 2);
          *(float *)(lVar30 + 0x4b0) = fVar35;
          *(float *)(lVar30 + 0x4b4) = fVar35;
          *(undefined4 *)(lVar30 + 0x4b8) = 0;
          puVar3 = (uint *)(lVar30 + 0x4cc);
          do {
            cVar18 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar12) {
              *puVar3 = *puVar3 & 0xfffffff7 | 8;
              cVar18 = ExclusiveMonitorsStatus();
            }
          } while (cVar18 != '\0');
          lVar30 = *(long *)(param_3 + 2);
          do {
            uVar24 = *puVar2;
            cVar18 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar12) {
              *puVar2 = uVar24 | 0x80000000;
              cVar18 = ExclusiveMonitorsStatus();
            }
          } while (cVar18 != '\0');
          if ((uVar24 & 0x7fffffff) != 0) {
            if ((int)uVar24 < 0) {
              while ((int)*puVar2 < 0) {
                nn::os::ConvertToTimeSpan(lVar29);
                nn::os::SleepThread();
              }
            }
            else {
              FUN_03907b80(lVar28);
            }
          }
          do {
            cVar18 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar12) {
              *puVar2 = 0;
              cVar18 = ExclusiveMonitorsStatus();
            }
          } while (cVar18 != '\0');
          FUN_0390d290(lVar30 + 0x3f8,param_2,
                       *(long *)(lVar28 + 0x68) + (ulong)(1 < *(uint *)(lVar28 + 0x60)) * 0x18,
                       0xffffffff,0);
        }
LAB_03936004:
        uVar7 = *(ushort *)(lVar26 + 0x340) >> (ulong)(uVar21 & 0x1f);
        if (uVar7 < 2) {
          uVar7 = 1;
        }
        uVar9 = *(ushort *)(lVar26 + 0x342);
        uVar8 = uVar9 >> (ulong)(uVar21 & 0x1f);
        if (*(short *)(lVar26 + 0x34a) != 3) {
          uVar9 = 1;
        }
        fVar35 = *(float *)(param_1 + 0x8c4);
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        local_148 = (undefined *)
                    CONCAT44(fVar35 * (1.0 / (float)uVar9),fVar35 * (1.0 / (float)uVar7));
        local_140 = CONCAT44(fVar35 * 0.0,fVar35 * 0.0);
        do {
          uVar21 = *puVar2;
          cVar18 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar12) {
            *puVar2 = uVar21 | 0x80000000;
            cVar18 = ExclusiveMonitorsStatus();
          }
        } while (cVar18 != '\0');
        if ((uVar21 & 0x7fffffff) != 0) {
          if ((int)uVar21 < 0) {
            while ((int)*puVar2 < 0) {
              nn::os::ConvertToTimeSpan(lVar29);
              nn::os::SleepThread();
            }
          }
          else {
            FUN_03907b80(lVar28);
          }
        }
        do {
          cVar18 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar12) {
            *puVar2 = 0;
            cVar18 = ExclusiveMonitorsStatus();
          }
        } while (cVar18 != '\0');
        lVar30 = 0xa8;
        if (*(uint *)(lVar28 + 0x30) < 8) {
          lVar30 = 0;
        }
        iVar15 = *(int *)(*(long *)(lVar28 + 0x38) + lVar30);
        if (iVar15 != -1) {
          (**(code **)PTR_DAT_04bcf2e0)
                    (*(undefined8 *)(param_2 + 0xb8),
                     *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                     *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar15,0x10,&local_148)
          ;
        }
LAB_039366dc:
        lVar30 = *(long *)(param_3 + 4);
        if (*(char *)(lVar30 + 0x580) != '\0') {
          bVar12 = true;
          if (((*(char *)(lVar30 + 0x118) != '\0') && (*(long *)(lVar30 + 0x548) != 0)) &&
             (*(char *)(lVar30 + 0x38) != '\0')) {
            fVar35 = *(float *)(lVar30 + 0x238);
            uVar21 = 0;
            if (fVar35 != (float)(int)fVar35) {
              uVar21 = (uint)(fVar35 < 0.0);
            }
            if ((int)fVar35 == uVar21) goto LAB_03936764;
            bVar12 = *(char *)(lVar30 + 0x198) == '\0';
          }
          if ((bVar12) && (uVar19 != (local_16c >> 0x10 & 0xff))) {
            do {
              cVar18 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(&local_170,0x10);
              if (bVar12) {
                cVar18 = ExclusiveMonitorsStatus();
                local_170 = local_170 | 1;
              }
            } while (cVar18 != '\0');
            local_16c._0_3_ = CONCAT12((char)uVar19,(undefined2)local_16c);
          }
        }
LAB_03936764:
        FUN_039380b0(param_2,lVar26 + 0x1c0,uVar19);
        FUN_039387c0(param_1,param_2,param_3);
        uVar21 = *(uint *)(*(long *)(*(long *)(param_3 + 2) + 0x1e0) + 0x58);
        if (uVar21 != 0xffffffff) {
          lVar30 = *(long *)PTR_DAT_04bc1010;
          if ((*(uint *)(lVar30 + 0x5c8) >> 3 & 1) == 0) {
            uVar24 = uVar21 - *(ushort *)(lVar30 + 0x3da);
            if (*(uint *)(lVar30 + 0x368) <= uVar24) {
              uVar24 = 0;
            }
            if ((*(uint *)(*(long *)(lVar30 + 0x370) + (long)(int)uVar24 * 0x20 + 4) >> 2 & 1) == 0)
            {
              *(ulong *)(param_2 + 0x100) =
                   *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar21 & 0x3f);
              goto LAB_03935c7c;
            }
          }
          if ((*(uint *)(lVar30 + 0x5c8) >> 5 & 1) == 0) {
            uVar23 = 0x112;
            uVar36 = 0x12;
          }
          else {
            uVar23 = 0x111;
            uVar36 = 0x11;
          }
          if ((*(uint *)(lVar30 + 800) & 2) != 0) {
            uVar36 = uVar23;
          }
          (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar36);
          *(undefined8 *)(param_2 + 0x100) = 0;
        }
      }
LAB_03935c7c:
      uVar19 = uVar19 + 1;
    } while (uVar19 != bVar6);
  }
  *(undefined2 *)(lVar26 + 0x3d4) = 0x101;
  *(undefined1 *)(lVar26 + 0x3d6) = 2;
  do {
    cVar18 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar13) {
      *puVar1 = *puVar1 & 0xfffffffb | 4;
      cVar18 = ExclusiveMonitorsStatus();
    }
  } while (cVar18 != '\0');
  *(undefined4 *)(lVar26 + 0x3c8) = 0;
  *(undefined4 *)(lVar26 + 0x3d0) = 0;
  fVar35 = (float)NEON_ucvtf((uint)*(byte *)(lVar26 + 0x349));
  *(float *)(lVar26 + 0x3cc) = fVar35 + -1.0;
  do {
    cVar18 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar13) {
      *puVar1 = *puVar1 & 0xfffffff7 | 8;
      cVar18 = ExclusiveMonitorsStatus();
    }
  } while (cVar18 != '\0');
  local_228 = PTR_DAT_04bbd508 + 0x10;
  FUN_038fd0e0(&local_1d0);
  if (*(int *)(param_1 + 0x8c0) == 2) {
    plVar17 = *(long **)(param_3 + 6);
    local_110 = -0x80000000800001;
    local_120 = PTR_DAT_04bd0f08 + 0x10;
    local_118 = 0x7f7fffff7f7fffff;
    local_108 = *(uint *)PTR_DAT_04bd0ea8;
    uStack_104 = 0;
    fStack_100 = 1.0;
    if (local_108 < 6) {
      if ((1 << (ulong)(local_108 & 0x1f) & 0x39U) == 0) {
        fVar38 = *(float *)(plVar17 + 1);
        fVar35 = *(float *)((long)plVar17 + 0xc);
      }
      else {
        fVar35 = *(float *)(plVar17 + 1);
        fVar38 = *(float *)((long)plVar17 + 0xc);
      }
      fVar41 = fVar35;
      fVar39 = 0.0;
      if (fVar35 <= 0.0) {
        fVar41 = 0.0;
        fVar39 = fVar35;
      }
      fVar45 = fVar38;
      fVar35 = 0.0;
      if (fVar38 <= 0.0) {
        fVar45 = 0.0;
        fVar35 = fVar38;
      }
      local_118 = CONCAT44(fVar35,fVar39);
      local_110 = CONCAT44(fVar45,fVar41);
    }
    (**(code **)(*plVar17 + 0x38))(plVar17,param_2);
    FUN_038e77e4(&local_120,param_2,*(undefined8 *)(param_3 + 6));
    FUN_038e4cec(&local_228);
    local_210 = local_210 | 0xf00000000;
    local_228 = (undefined *)((ulong)local_228 & 0xfffffffeffff0000);
    FUN_038e4d90(&local_228,param_2);
    local_148 = (undefined *)0x4000000040000000;
    FUN_0394a740(*(float *)(*(long *)(param_3 + 4) + 0x238) + -1.0,param_2,
                 *(long *)(param_3 + 2) + 0x310,&local_120,&local_148,PTR_DAT_04bb2f48);
  }
  else {
    param_3[1] = 3;
    lVar26 = *(long *)(param_3 + 4);
    if (*(char *)(lVar26 + 0x38) == '\0') {
      if ((*(char *)(lVar26 + 0x18) == '\0') || (*(char *)(lVar26 + 0x58) != '\0'))
      goto LAB_03936974;
      cVar18 = *(char *)(lVar26 + 0x98);
      FUN_038e4cec(&local_228);
      if (cVar18 != '\0') goto LAB_0393697c;
      local_228 = (undefined *)CONCAT62(local_228._2_6_,1);
      local_1c8._0_5_ = CONCAT14(5,(undefined4)local_1c8);
    }
    else {
      if (*(char *)(lVar26 + 0x18) == '\0') {
        cVar18 = *(char *)(lVar26 + 0x98);
        FUN_038e4cec(&local_228);
        if (cVar18 == '\0') {
          local_228 = (undefined *)CONCAT62(local_228._2_6_,1);
          local_1c8._0_5_ = CONCAT14(2,(undefined4)local_1c8);
          goto LAB_03936980;
        }
      }
      else {
LAB_03936974:
        FUN_038e4cec(&local_228);
      }
LAB_0393697c:
      local_228 = (undefined *)((ulong)local_228 & 0xffffffffffff0000);
    }
LAB_03936980:
    local_210 = local_210 & 0xfffffff0ffffffff | 0x700000000;
    if (*(char *)(param_1 + 0x188) == '\0') {
      lVar26 = *(long *)(param_3 + 6);
      local_110 = -0x80000000800001;
      local_120 = PTR_DAT_04bd0f08 + 0x10;
      local_118 = 0x7f7fffff7f7fffff;
      local_108 = *(uint *)PTR_DAT_04bd0ea8;
      uStack_104 = 0;
      fStack_100 = 1.0;
      if (local_108 < 6) {
        if ((1 << (ulong)(local_108 & 0x1f) & 0x39U) == 0) {
          fVar38 = *(float *)(lVar26 + 8);
          fVar35 = *(float *)(lVar26 + 0xc);
        }
        else {
          fVar35 = *(float *)(lVar26 + 8);
          fVar38 = *(float *)(lVar26 + 0xc);
        }
        fVar41 = fVar35;
        fVar39 = 0.0;
        if (fVar35 <= 0.0) {
          fVar41 = 0.0;
          fVar39 = fVar35;
        }
        fVar45 = fVar38;
        fVar35 = 0.0;
        if (fVar38 <= 0.0) {
          fVar45 = 0.0;
          fVar35 = fVar38;
        }
        local_118 = CONCAT44(fVar35,fVar39);
        local_110 = CONCAT44(fVar45,fVar41);
      }
      FUN_038e77e4(&local_120,param_2);
      (**(code **)(**(long **)(param_3 + 6) + 0x38))(*(long **)(param_3 + 6),param_2);
      FUN_038e4d90(&local_228,param_2);
    }
    else {
      lVar26 = *(long *)(param_3 + 2);
      *(long *)(lVar26 + 0x1e0) = lVar26 + 0x228;
      FUN_01560750(*(long *)(param_3 + 2) + 0x228,*(long *)(param_3 + 2) + 0x310,0,0);
      bVar13 = false;
      uVar19 = (uint)*(ushort *)(lVar26 + 0x340);
      if (*(ushort *)(lVar26 + 0x340) < 2) {
        uVar19 = 1;
      }
      if (uVar19 == param_3[10]) {
        uVar7 = *(ushort *)(lVar26 + 0x342);
        uVar19 = (uint)uVar7;
        if (*(short *)(lVar26 + 0x34a) != 3) {
          uVar19 = 1;
        }
        if (uVar19 == uVar7 || uVar19 < uVar7) {
          uVar19 = (uint)uVar7;
        }
        bVar13 = uVar19 == param_3[0xb];
      }
      lVar28 = *(long *)(param_3 + 2);
      *(undefined4 *)(lVar28 + 0x5c0) = *(undefined4 *)(lVar26 + 0x310);
      *(undefined4 *)(lVar28 + 0x5c4) = *(undefined4 *)(lVar26 + 0x314);
      *(undefined8 *)(lVar28 + 0x5c8) = *(undefined8 *)(lVar26 + 0x318);
      *(undefined8 *)(lVar28 + 0x5d0) = *(undefined8 *)(lVar26 + 800);
      *(undefined4 *)(lVar28 + 0x5d8) = *(undefined4 *)(lVar26 + 0x328);
      *(undefined4 *)(lVar28 + 0x5dc) = *(undefined4 *)(lVar26 + 0x32c);
      *(undefined8 *)(lVar28 + 0x5e0) = *(undefined8 *)(lVar26 + 0x330);
      *(undefined8 *)(lVar28 + 0x5e8) = *(undefined8 *)(lVar26 + 0x338);
      uVar31 = *(undefined8 *)(lVar26 + 0x340);
      uVar34 = *(undefined8 *)(lVar26 + 0x348);
      uVar25 = *(undefined8 *)(lVar26 + 0x350);
      *(undefined8 *)(lVar28 + 0x607) = *(undefined8 *)(lVar26 + 0x357);
      *(undefined8 *)(lVar28 + 0x600) = uVar25;
      *(undefined8 *)(lVar28 + 0x5f8) = uVar34;
      *(undefined8 *)(lVar28 + 0x5f0) = uVar31;
      FUN_038fd1e0(lVar28 + 0x610);
      FUN_038fd2f0(lVar28 + 0x610,lVar26 + 0x360);
      uVar36 = *(undefined4 *)(lVar26 + 0x3a8);
      *(undefined8 *)(lVar28 + 0x650) = *(undefined8 *)(lVar26 + 0x3a0);
      puVar1 = (uint *)(lVar28 + 0x694);
      *(undefined4 *)(lVar28 + 0x658) = uVar36;
      do {
        cVar18 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar12) {
          *puVar1 = *puVar1 | 1;
          cVar18 = ExclusiveMonitorsStatus();
        }
      } while (cVar18 != '\0');
      lVar26 = *(long *)(param_3 + 2);
      *(undefined2 *)(lVar26 + 0x684) = 0x101;
      *(undefined1 *)(lVar26 + 0x686) = 1;
      puVar1 = (uint *)(lVar26 + 0x694);
      do {
        cVar18 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar12) {
          *puVar1 = *puVar1 & 0xfffffffb | 4;
          cVar18 = ExclusiveMonitorsStatus();
        }
      } while (cVar18 != '\0');
      lVar26 = *(long *)(param_3 + 2);
      *(undefined4 *)(lVar26 + 0x680) = 0;
      *(float *)(lVar26 + 0x678) = (float)bVar13;
      *(float *)(lVar26 + 0x67c) = (float)bVar13;
      puVar1 = (uint *)(lVar26 + 0x694);
      do {
        cVar18 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar12) {
          *puVar1 = *puVar1 & 0xfffffff7 | 8;
          cVar18 = ExclusiveMonitorsStatus();
        }
      } while (cVar18 != '\0');
      FUN_039380b0(param_2,*(long *)(param_3 + 2) + 0x1c0,bVar13);
      local_c0 = local_1c8;
      uStack_b8 = uStack_1c0;
      local_b0 = (undefined4)local_1b8;
      local_e0 = local_1e8;
      uStack_d8 = local_1e0;
      uStack_c8 = CONCAT44(uStack_1cc,local_1d0);
      local_d0 = local_1d8;
      fStack_100 = (float)local_208;
      fStack_fc = (float)((ulong)local_208 >> 0x20);
      uStack_f8 = local_200;
      local_f0 = local_1f8;
      uStack_e8 = local_1f0;
      local_118 = (long)local_220;
      local_110 = local_218;
      local_108 = (uint)local_210;
      uStack_104 = (uint)(local_210 >> 0x20);
      local_120 = (undefined *)((ulong)local_228 & 0xfffffffeffff0000);
      uStack_104 = uStack_104 | 0xf;
      FUN_038e4d90(&local_120,param_2);
    }
    if (*(int *)(param_1 + 0x8c0) == 1) {
      plVar17 = (long *)(*(long *)(param_3 + 4) + (ulong)(byte)param_3[0xc] * 8 + 0x4f8);
    }
    else {
      lVar26 = *(long *)(param_3 + 4) + (ulong)(byte)param_3[0xc] * 8;
      if (((*(char *)(param_1 + 0x148) == '\0') || (*(long *)(param_1 + 0x578) == 0)) ||
         (*(char *)(param_1 + 0x68) == '\0')) {
        plVar17 = (long *)(lVar26 + 0x508);
      }
      else {
        plVar17 = (long *)(lVar26 + 0x518);
      }
    }
    lVar26 = *plVar17;
    FUN_03907810(lVar26,param_2);
    fVar35 = 1.0;
    local_120 = (undefined *)0x0;
    local_118 = 0;
    local_148 = (undefined *)0x0;
    local_140 = 0;
    local_a0 = *(float *)(*(long *)(param_3 + 4) + 0x278);
    if ((char)param_3[0xc] != '\0') {
      local_a0 = (local_a0 - (float)param_3[8]) / ((float)param_3[9] - (float)param_3[8]);
    }
    fVar39 = *(float *)(*(long *)(param_3 + 4) + 0x238);
    fVar45 = 1.0 / (float)(int)param_3[0xb];
    fVar41 = 1.0 / (float)(int)param_3[10];
    fVar38 = exp2f(fVar39);
    local_a8 = CONCAT44(fVar38,fVar39);
    puVar1 = (uint *)(lVar26 + 0x14);
    fStack_9c = 1.0 - *(float *)(*(long *)(param_3 + 4) + 0x298);
    do {
      uVar19 = *puVar1;
      cVar18 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar13) {
        *puVar1 = uVar19 | 0x80000000;
        cVar18 = ExclusiveMonitorsStatus();
      }
    } while (cVar18 != '\0');
    if ((uVar19 & 0x7fffffff) != 0) {
      if ((int)uVar19 < 0) {
        if ((int)*puVar1 < 0) {
          lVar28 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar28 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar26);
      }
    }
    do {
      cVar18 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar13) {
        *puVar1 = 0;
        cVar18 = ExclusiveMonitorsStatus();
      }
    } while (cVar18 != '\0');
    if (**(int **)(lVar26 + 0x38) != -1) {
      (**(code **)PTR_DAT_04bcf2e0)
                (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                 *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)**(int **)(lVar26 + 0x38),
                 0x10,&local_a8);
    }
    fVar38 = cosf(*(float *)(param_1 + 0x8cc) * 0.017453292);
    fVar38 = fVar38 * *(float *)(param_1 + 0x8c8);
    fVar39 = sinf(*(float *)(param_1 + 0x8cc) * 0.017453292);
    fVar39 = fVar39 * *(float *)(param_1 + 0x8c8);
    local_a0 = -(fVar39 * fVar41);
    local_a8 = CONCAT44(fVar45 * fVar39,fVar41 * fVar38);
    fStack_9c = fVar45 * fVar38;
    do {
      uVar19 = *puVar1;
      cVar18 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar13) {
        *puVar1 = uVar19 | 0x80000000;
        cVar18 = ExclusiveMonitorsStatus();
      }
    } while (cVar18 != '\0');
    if ((uVar19 & 0x7fffffff) != 0) {
      if ((int)uVar19 < 0) {
        if ((int)*puVar1 < 0) {
          lVar28 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar28 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar26);
      }
    }
    do {
      cVar18 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar13) {
        *puVar1 = 0;
        cVar18 = ExclusiveMonitorsStatus();
      }
    } while (cVar18 != '\0');
    lVar28 = 0xa8;
    if (*(uint *)(lVar26 + 0x30) < 8) {
      lVar28 = 0;
    }
    iVar15 = *(int *)(*(long *)(lVar26 + 0x38) + lVar28);
    if (iVar15 != -1) {
      (**(code **)PTR_DAT_04bcf2e0)
                (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                 *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar15,0x10,&local_a8);
    }
    lVar28 = *(long *)(param_3 + 4);
    fVar37 = (float)param_3[8];
    fVar40 = (float)param_3[9];
    fVar39 = *(float *)(lVar28 + 0x1b8);
    fVar42 = *(float *)(lVar28 + 0x1d8);
    fVar38 = fVar39;
    if (fVar42 <= fVar39) {
      fVar38 = fVar42;
    }
    fVar44 = fVar38;
    if ((char)param_3[0xc] != '\0') {
      fVar35 = fVar40 - fVar37;
      fVar44 = (fVar38 - fVar37) / fVar35;
    }
    cVar18 = *(char *)(lVar28 + 0x18);
    if (fVar39 <= fVar42) {
      fVar39 = fVar42;
    }
    fVar42 = fVar39 + 0.1;
    if (0.1 <= fVar39 - fVar38) {
      fVar42 = fVar39;
    }
    fVar35 = fVar35 / (fVar42 - fVar38);
    if (cVar18 != '\0') {
      fVar42 = *(float *)(lVar28 + 0x1f8);
      fVar43 = *(float *)(lVar28 + 0x218);
      fVar39 = fVar42;
      if (fVar42 == fVar43 || fVar43 > fVar42) {
        fVar39 = fVar43;
      }
      if (fVar43 <= fVar42) {
        fVar42 = fVar43;
      }
      fVar43 = fVar39 + 0.1;
      if (0.1 <= fVar39 - fVar42) {
        fVar43 = fVar39;
      }
      if ((char)param_3[0xc] == '\0') {
        local_120._4_4_ = 1.0;
        fVar39 = fVar43;
      }
      else {
        local_120._4_4_ = fVar40 - fVar37;
        fVar39 = (fVar43 - fVar37) / local_120._4_4_;
      }
      local_120._4_4_ = local_120._4_4_ / (fVar42 - fVar43);
      local_148._4_4_ = -(fVar39 * local_120._4_4_);
    }
    local_120 = (undefined *)CONCAT44(local_120._4_4_,fVar35);
    local_148 = (undefined *)CONCAT44(local_148._4_4_,-(fVar44 * fVar35));
    fVar35 = 1.0;
    if (*(char *)((long)param_3 + 0x31) == '\0') {
      local_a0 = ((fVar38 - fVar37) / (fVar40 - fVar37)) * 2.0 + -1.0;
      if (cVar18 == '\0') goto LAB_039370e4;
      fVar38 = *(float *)(lVar28 + 0x1f8);
      if (*(float *)(lVar28 + 0x1f8) <= *(float *)(lVar28 + 0x218)) {
        fVar38 = *(float *)(lVar28 + 0x218);
      }
      fStack_9c = ((fVar38 - fVar37) / (fVar40 - fVar37)) * 2.0 + -1.0;
    }
    else {
      fVar39 = fVar40 * fVar37 * fVar37 * -2.0;
      local_a0 = (fVar39 + (fVar40 + fVar37) * fVar37 * fVar38) /
                 ((fVar40 - fVar37) * fVar37 * fVar38);
      if (cVar18 == '\0') {
LAB_039370e4:
        fStack_9c = 0.0;
      }
      else {
        fVar38 = *(float *)(lVar28 + 0x1f8);
        if (*(float *)(lVar28 + 0x1f8) <= *(float *)(lVar28 + 0x218)) {
          fVar38 = *(float *)(lVar28 + 0x218);
        }
        fStack_9c = (fVar39 + (fVar40 + fVar37) * fVar37 * fVar38) /
                    ((fVar40 - fVar37) * fVar37 * fVar38);
      }
    }
    local_a8 = CONCAT44((1.0 - fVar37 / fVar40) / fVar37,1.0 / fVar37);
    do {
      uVar19 = *puVar1;
      cVar18 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar13) {
        *puVar1 = uVar19 | 0x80000000;
        cVar18 = ExclusiveMonitorsStatus();
      }
    } while (cVar18 != '\0');
    if ((uVar19 & 0x7fffffff) != 0) {
      if ((int)uVar19 < 0) {
        if ((int)*puVar1 < 0) {
          lVar28 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar28 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar26);
      }
    }
    do {
      cVar18 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar13) {
        *puVar1 = 0;
        cVar18 = ExclusiveMonitorsStatus();
      }
    } while (cVar18 != '\0');
    lVar28 = 0x90;
    if (*(uint *)(lVar26 + 0x30) < 7) {
      lVar28 = 0;
    }
    iVar15 = *(int *)(*(long *)(lVar26 + 0x38) + lVar28);
    if (iVar15 != -1) {
      (**(code **)PTR_DAT_04bcf2e0)
                (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                 *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar15,0x10,&local_a8);
    }
    lVar28 = *(long *)(param_3 + 4);
    if (*(char *)(lVar28 + 0xd8) != '\0') {
      fVar39 = *(float *)(lVar28 + 0x2b8);
      fVar40 = 1.0;
      fVar42 = *(float *)(lVar28 + 700);
      fVar37 = (float)param_3[8];
      fVar38 = fVar39;
      if (fVar42 <= fVar39) {
        fVar38 = fVar42;
      }
      fVar44 = fVar38;
      if ((char)param_3[0xc] != '\0') {
        fVar40 = (float)param_3[9] - fVar37;
        fVar44 = (fVar38 - fVar37) / fVar40;
      }
      if (fVar39 <= fVar42) {
        fVar39 = fVar42;
      }
      fVar43 = *(float *)(lVar28 + 0x2c4);
      fVar42 = fVar39 + 0.1;
      if (0.1 <= fVar39 - fVar38) {
        fVar42 = fVar39;
      }
      fVar39 = *(float *)(lVar28 + 0x2c0);
      fVar40 = fVar40 / (fVar42 - fVar38);
      fVar38 = fVar39;
      if (fVar39 <= fVar43) {
        fVar38 = fVar43;
      }
      fVar42 = fVar38;
      if ((char)param_3[0xc] != '\0') {
        fVar35 = (float)param_3[9] - fVar37;
        fVar42 = (fVar38 - fVar37) / fVar35;
      }
      if (fVar43 <= fVar39) {
        fVar39 = fVar43;
      }
      fVar37 = fVar39 + 0.1;
      if (0.1 <= fVar39 - fVar38) {
        fVar37 = fVar39;
      }
      fVar35 = fVar35 / (fVar37 - fVar38);
      local_118 = CONCAT44(fVar35,fVar40);
      local_140 = CONCAT44(-(fVar42 * fVar35),-(fVar44 * fVar40));
      if (*(char *)(lVar28 + 0xf8) == '\0') {
        local_118 = CONCAT44(0x3f800000,fVar40);
        local_140 = CONCAT44(0x3f800000,-(fVar44 * fVar40));
      }
    }
    do {
      uVar19 = *puVar1;
      cVar18 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar13) {
        *puVar1 = uVar19 | 0x80000000;
        cVar18 = ExclusiveMonitorsStatus();
      }
    } while (cVar18 != '\0');
    if ((uVar19 & 0x7fffffff) != 0) {
      if ((int)uVar19 < 0) {
        if ((int)*puVar1 < 0) {
          lVar28 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar28 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar26);
      }
    }
    do {
      cVar18 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar13) {
        *puVar1 = 0;
        cVar18 = ExclusiveMonitorsStatus();
      }
    } while (cVar18 != '\0');
    lVar28 = 0x60;
    if (*(uint *)(lVar26 + 0x30) < 5) {
      lVar28 = 0;
    }
    iVar15 = *(int *)(*(long *)(lVar26 + 0x38) + lVar28);
    if (iVar15 != -1) {
      (**(code **)PTR_DAT_04bcf2e0)
                (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                 *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar15,0x10,&local_120);
    }
    do {
      uVar19 = *puVar1;
      cVar18 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar13) {
        *puVar1 = uVar19 | 0x80000000;
        cVar18 = ExclusiveMonitorsStatus();
      }
    } while (cVar18 != '\0');
    if ((uVar19 & 0x7fffffff) != 0) {
      if ((int)uVar19 < 0) {
        if ((int)*puVar1 < 0) {
          lVar28 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar28 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar26);
      }
    }
    do {
      cVar18 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar13) {
        *puVar1 = 0;
        cVar18 = ExclusiveMonitorsStatus();
      }
    } while (cVar18 != '\0');
    lVar28 = 0x78;
    if (*(uint *)(lVar26 + 0x30) < 6) {
      lVar28 = 0;
    }
    iVar15 = *(int *)(*(long *)(lVar26 + 0x38) + lVar28);
    if (iVar15 != -1) {
      (**(code **)PTR_DAT_04bcf2e0)
                (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                 *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar15,0x10,&local_148);
    }
    lVar28 = *(long *)(param_3 + 4);
    do {
      uVar19 = *puVar1;
      cVar18 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar13) {
        *puVar1 = uVar19 | 0x80000000;
        cVar18 = ExclusiveMonitorsStatus();
      }
    } while (cVar18 != '\0');
    if ((uVar19 & 0x7fffffff) != 0) {
      if ((int)uVar19 < 0) {
        if ((int)*puVar1 < 0) {
          lVar29 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar29 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar26);
      }
    }
    do {
      cVar18 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar13) {
        *puVar1 = 0;
        cVar18 = ExclusiveMonitorsStatus();
      }
    } while (cVar18 != '\0');
    lVar29 = 0x120;
    if (*(uint *)(lVar26 + 0x30) < 0xd) {
      lVar29 = 0;
    }
    iVar15 = *(int *)(*(long *)(lVar26 + 0x38) + lVar29);
    if (iVar15 != -1) {
      (**(code **)PTR_DAT_04bcf2e0)
                (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                 *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar15,0x10,lVar28 + 0x4c8)
      ;
    }
    lVar28 = *(long *)(param_3 + 2);
    do {
      uVar19 = *puVar1;
      cVar18 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar13) {
        *puVar1 = uVar19 | 0x80000000;
        cVar18 = ExclusiveMonitorsStatus();
      }
    } while (cVar18 != '\0');
    if ((uVar19 & 0x7fffffff) != 0) {
      if ((int)uVar19 < 0) {
        if ((int)*puVar1 < 0) {
          lVar29 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar29 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar26);
      }
    }
    do {
      cVar18 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar13) {
        *puVar1 = 0;
        cVar18 = ExclusiveMonitorsStatus();
      }
    } while (cVar18 != '\0');
    lVar29 = 0x30;
    if (*(uint *)(lVar26 + 0x60) < 3) {
      lVar29 = 0;
    }
    FUN_0390d290(lVar28 + 0x310,param_2,*(long *)(lVar26 + 0x68) + lVar29,0xffffffff,0);
    lVar28 = *(long *)(param_3 + 4);
    if ((*(char *)(lVar28 + 0x18) != '\0' && *(char *)(lVar28 + 0x58) != '\0') &&
       (0.0 < *(float *)(lVar28 + 0x238))) {
      lVar28 = *(long *)(param_3 + 2);
      do {
        uVar19 = *puVar1;
        cVar18 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar13) {
          *puVar1 = uVar19 | 0x80000000;
          cVar18 = ExclusiveMonitorsStatus();
        }
      } while (cVar18 != '\0');
      if ((uVar19 & 0x7fffffff) != 0) {
        if ((int)uVar19 < 0) {
          if ((int)*puVar1 < 0) {
            lVar29 = *(long *)PTR_DAT_04bb29d0;
            do {
              nn::os::ConvertToTimeSpan(lVar29 / 1000000);
              nn::os::SleepThread();
            } while ((int)*puVar1 < 0);
          }
        }
        else {
          FUN_03907b80(lVar26);
        }
      }
      do {
        cVar18 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar13) {
          *puVar1 = 0;
          cVar18 = ExclusiveMonitorsStatus();
        }
      } while (cVar18 != '\0');
      lVar29 = 0x48;
      if (*(uint *)(lVar26 + 0x60) < 4) {
        lVar29 = 0;
      }
      FUN_0390d290(lVar28 + 0x4e0,param_2,*(long *)(lVar26 + 0x68) + lVar29,0xffffffff,0);
    }
    lVar28 = *(long *)(param_3 + 2);
    do {
      uVar19 = *puVar1;
      cVar18 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar13) {
        *puVar1 = uVar19 | 0x80000000;
        cVar18 = ExclusiveMonitorsStatus();
      }
    } while (cVar18 != '\0');
    if ((uVar19 & 0x7fffffff) != 0) {
      if ((int)uVar19 < 0) {
        if ((int)*puVar1 < 0) {
          lVar29 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar29 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar26);
      }
    }
    do {
      cVar18 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar13) {
        *puVar1 = 0;
        cVar18 = ExclusiveMonitorsStatus();
      }
    } while (cVar18 != '\0');
    FUN_0390d290(lVar28 + 0xe0,param_2,
                 *(long *)(lVar26 + 0x68) + (ulong)(1 < *(uint *)(lVar26 + 0x60)) * 0x18,0xffffffff,
                 0);
    lVar28 = *(long *)(param_3 + 4);
    if ((*(char *)(lVar28 + 0x118) != '\0' && *(long *)(lVar28 + 0x548) != 0) &&
       (*(char *)(lVar28 + 0x38) != '\0')) {
      do {
        uVar19 = *puVar1;
        cVar18 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar13) {
          *puVar1 = uVar19 | 0x80000000;
          cVar18 = ExclusiveMonitorsStatus();
        }
      } while (cVar18 != '\0');
      if ((uVar19 & 0x7fffffff) != 0) {
        if ((int)uVar19 < 0) {
          if ((int)*puVar1 < 0) {
            lVar28 = *(long *)PTR_DAT_04bb29d0;
            do {
              nn::os::ConvertToTimeSpan(lVar28 / 1000000);
              nn::os::SleepThread();
            } while ((int)*puVar1 < 0);
          }
        }
        else {
          FUN_03907b80(lVar26);
        }
      }
      do {
        cVar18 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar13) {
          *puVar1 = 0;
          cVar18 = ExclusiveMonitorsStatus();
        }
      } while (cVar18 != '\0');
      lVar28 = 0x60;
      if (*(uint *)(lVar26 + 0x60) < 5) {
        lVar28 = 0;
      }
      FUN_0390d290(param_1 + 0x7e0,param_2,*(long *)(lVar26 + 0x68) + lVar28,0xffffffff,0);
      *(float *)(*(long *)(param_3 + 4) + 0x550) = fVar41;
      *(float *)(*(long *)(param_3 + 4) + 0x554) = fVar45;
      *(float *)(*(long *)(param_3 + 4) + 0x558) = 1.0 / (fVar41 * (float)(int)param_3[0xb]);
      *(undefined4 *)(*(long *)(param_3 + 4) + 0x55c) =
           *(undefined4 *)(*(long *)(param_3 + 4) + 0x340);
      lVar28 = *(long *)(param_3 + 4);
      do {
        uVar19 = *puVar1;
        cVar18 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar13) {
          *puVar1 = uVar19 | 0x80000000;
          cVar18 = ExclusiveMonitorsStatus();
        }
      } while (cVar18 != '\0');
      if ((uVar19 & 0x7fffffff) != 0) {
        if ((int)uVar19 < 0) {
          if ((int)*puVar1 < 0) {
            lVar29 = *(long *)PTR_DAT_04bb29d0;
            do {
              nn::os::ConvertToTimeSpan(lVar29 / 1000000);
              nn::os::SleepThread();
            } while ((int)*puVar1 < 0);
          }
        }
        else {
          FUN_03907b80(lVar26);
        }
      }
      do {
        cVar18 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar13) {
          *puVar1 = 0;
          cVar18 = ExclusiveMonitorsStatus();
        }
      } while (cVar18 != '\0');
      iVar15 = *(int *)(*(long *)(lVar26 + 0x38) + (ulong)(1 < *(uint *)(lVar26 + 0x30)) * 0x18);
      if (iVar15 != -1) {
        (**(code **)PTR_DAT_04bcf2e0)
                  (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70)
                   ,*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar15,0x10,
                   lVar28 + 0x550);
      }
      lVar28 = *(long *)(param_3 + 4);
      do {
        uVar19 = *puVar1;
        cVar18 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar13) {
          *puVar1 = uVar19 | 0x80000000;
          cVar18 = ExclusiveMonitorsStatus();
        }
      } while (cVar18 != '\0');
      if ((uVar19 & 0x7fffffff) != 0) {
        if ((int)uVar19 < 0) {
          if ((int)*puVar1 < 0) {
            lVar29 = *(long *)PTR_DAT_04bb29d0;
            do {
              nn::os::ConvertToTimeSpan(lVar29 / 1000000);
              nn::os::SleepThread();
            } while ((int)*puVar1 < 0);
          }
        }
        else {
          FUN_03907b80(lVar26);
        }
      }
      do {
        cVar18 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar13) {
          *puVar1 = 0;
          cVar18 = ExclusiveMonitorsStatus();
        }
      } while (cVar18 != '\0');
      lVar29 = 0x48;
      if (*(uint *)(lVar26 + 0x30) < 4) {
        lVar29 = 0;
      }
      iVar15 = *(int *)(*(long *)(lVar26 + 0x38) + lVar29);
      if (iVar15 != -1) {
        (**(code **)PTR_DAT_04bcf2e0)
                  (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70)
                   ,*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar15,0x10,
                   lVar28 + 0x570);
      }
    }
    lVar28 = *(long *)(param_3 + 4);
    if ((((*(char *)(lVar28 + 0x118) != '\0') && (*(long *)(lVar28 + 0x548) != 0)) &&
        (*(char *)(lVar28 + 0x38) != '\0')) || (*(int *)(param_1 + 0x5b4) == 1)) {
      local_a0 = *(float *)(lVar28 + 0x568);
      fStack_9c = *(float *)(param_1 + 0x8d0);
      local_a8 = *(undefined8 *)(lVar28 + 0x560);
      do {
        uVar19 = *puVar1;
        cVar18 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar13) {
          *puVar1 = uVar19 | 0x80000000;
          cVar18 = ExclusiveMonitorsStatus();
        }
      } while (cVar18 != '\0');
      if ((uVar19 & 0x7fffffff) != 0) {
        if ((int)uVar19 < 0) {
          if ((int)*puVar1 < 0) {
            lVar28 = *(long *)PTR_DAT_04bb29d0;
            do {
              nn::os::ConvertToTimeSpan(lVar28 / 1000000);
              nn::os::SleepThread();
            } while ((int)*puVar1 < 0);
          }
        }
        else {
          FUN_03907b80(lVar26);
        }
      }
      do {
        cVar18 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar13) {
          *puVar1 = 0;
          cVar18 = ExclusiveMonitorsStatus();
        }
      } while (cVar18 != '\0');
      lVar28 = 0x30;
      if (*(uint *)(lVar26 + 0x30) < 3) {
        lVar28 = 0;
      }
      iVar15 = *(int *)(*(long *)(lVar26 + 0x38) + lVar28);
      if (iVar15 != -1) {
        (**(code **)PTR_DAT_04bcf2e0)
                  (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70)
                   ,*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar15,0x10,&local_a8);
      }
      lVar28 = *(long *)(param_3 + 4);
    }
    if (*(char *)(lVar28 + 0x98) != '\0') {
      FUN_03938270(param_2,param_3,lVar26);
    }
    FUN_039387c0(param_1,param_2,param_3);
    if (*(char *)(param_1 + 0x188) != '\0') {
      uStack_f8 = *(undefined8 *)(param_3 + 10);
      fStack_100 = (float)*(undefined8 *)(param_3 + 8);
      fStack_fc = (float)((ulong)*(undefined8 *)(param_3 + 8) >> 0x20);
      local_f0 = *(undefined8 *)(param_3 + 0xc);
      local_118 = *(long *)(param_3 + 2);
      local_110 = *(long *)(param_3 + 4);
      local_108 = (uint)*(undefined8 *)(param_3 + 6);
      uStack_104 = (uint)((ulong)*(undefined8 *)(param_3 + 6) >> 0x20);
      local_120 = (undefined *)CONCAT44(5,(int)*(undefined8 *)param_3);
      FUN_038e5220(&local_228,param_2);
      FUN_038e54d0(&local_228,param_2);
      FUN_038e535c(&local_228,param_2);
      uVar19 = *(uint *)(*(long *)(*(long *)(param_3 + 2) + 0x1e0) + 0x58);
      if (uVar19 != 0xffffffff) {
        lVar26 = *(long *)PTR_DAT_04bc1010;
        if ((*(uint *)(lVar26 + 0x5c8) >> 3 & 1) == 0) {
          uVar21 = uVar19 - *(ushort *)(lVar26 + 0x3da);
          if (*(uint *)(lVar26 + 0x368) <= uVar21) {
            uVar21 = 0;
          }
          if ((*(uint *)(*(long *)(lVar26 + 0x370) + (long)(int)uVar21 * 0x20 + 4) >> 2 & 1) == 0) {
            *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar19 & 0x3f)
            ;
            goto LAB_03937bb4;
          }
        }
        if ((*(uint *)(lVar26 + 0x5c8) >> 5 & 1) == 0) {
          uVar23 = 0x112;
          uVar36 = 0x12;
        }
        else {
          uVar23 = 0x111;
          uVar36 = 0x11;
        }
        if ((*(uint *)(lVar26 + 800) & 2) != 0) {
          uVar36 = uVar23;
        }
        (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar36);
        *(undefined8 *)(param_2 + 0x100) = 0;
      }
LAB_03937bb4:
      lVar26 = local_118;
      local_138 = 0xff7fffffff7fffff;
      local_130 = *(uint *)PTR_DAT_04bd0ea8;
      plVar17 = (long *)CONCAT44(uStack_104,local_108);
      local_148 = PTR_DAT_04bd0f08 + 0x10;
      local_140 = 0x7f7fffff7f7fffff;
      local_12c = 0x3f80000000000000;
      if (local_130 < 6) {
        if ((1 << (ulong)(local_130 & 0x1f) & 0x39U) == 0) {
          fVar38 = *(float *)(plVar17 + 1);
          fVar35 = *(float *)((long)plVar17 + 0xc);
        }
        else {
          fVar35 = *(float *)(plVar17 + 1);
          fVar38 = *(float *)((long)plVar17 + 0xc);
        }
        fVar41 = fVar35;
        fVar39 = 0.0;
        if (fVar35 <= 0.0) {
          fVar41 = 0.0;
          fVar39 = fVar35;
        }
        fVar45 = fVar38;
        fVar35 = 0.0;
        if (fVar38 <= 0.0) {
          fVar45 = 0.0;
          fVar35 = fVar38;
        }
        local_140 = CONCAT44(fVar35,fVar39);
        local_138 = CONCAT44(fVar45,fVar41);
      }
      FUN_038e77e4(&local_148,param_2,plVar17);
      (**(code **)(*plVar17 + 0x38))(plVar17,param_2);
      lVar28 = local_110;
      lVar29 = *(long *)(local_110 + 0x530);
      FUN_03907810(lVar29,param_2);
      fVar35 = *(float *)(lVar28 + 0x1b8);
      if (*(float *)(lVar28 + 0x1d8) <= *(float *)(lVar28 + 0x1b8)) {
        fVar35 = *(float *)(lVar28 + 0x1d8);
      }
      fVar38 = fStack_fc - fStack_100;
      if (local_f0._1_1_ == '\0') {
        local_a0 = ((fVar35 - fStack_100) / fVar38) * 2.0 + -1.0;
        if (*(char *)(lVar28 + 0x18) == '\0') goto LAB_03937d1c;
        fVar35 = *(float *)(lVar28 + 0x1f8);
        if (*(float *)(lVar28 + 0x1f8) <= *(float *)(lVar28 + 0x218)) {
          fVar35 = *(float *)(lVar28 + 0x218);
        }
        fStack_9c = ((fVar35 - fStack_100) / fVar38) * 2.0 + -1.0;
      }
      else {
        fVar39 = fStack_fc * fStack_100 * fStack_100 * -2.0;
        local_a0 = (fVar39 + (fStack_fc + fStack_100) * fStack_100 * fVar35) /
                   (fVar38 * fStack_100 * fVar35);
        if (*(char *)(lVar28 + 0x18) == '\0') {
LAB_03937d1c:
          fStack_9c = 0.0;
        }
        else {
          fVar35 = *(float *)(lVar28 + 0x1f8);
          if (*(float *)(lVar28 + 0x1f8) <= *(float *)(lVar28 + 0x218)) {
            fVar35 = *(float *)(lVar28 + 0x218);
          }
          fStack_9c = (fVar39 + (fStack_fc + fStack_100) * fStack_100 * fVar35) /
                      (fVar38 * fStack_100 * fVar35);
        }
      }
      puVar1 = (uint *)(lVar29 + 0x14);
      local_a8 = 0;
      do {
        uVar19 = *puVar1;
        cVar18 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar13) {
          *puVar1 = uVar19 | 0x80000000;
          cVar18 = ExclusiveMonitorsStatus();
        }
      } while (cVar18 != '\0');
      if ((uVar19 & 0x7fffffff) != 0) {
        if ((int)uVar19 < 0) {
          if ((int)*puVar1 < 0) {
            lVar28 = *(long *)PTR_DAT_04bb29d0;
            do {
              nn::os::ConvertToTimeSpan(lVar28 / 1000000);
              nn::os::SleepThread();
            } while ((int)*puVar1 < 0);
          }
        }
        else {
          FUN_03907b80(lVar29);
        }
      }
      do {
        cVar18 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar13) {
          *puVar1 = 0;
          cVar18 = ExclusiveMonitorsStatus();
        }
      } while (cVar18 != '\0');
      lVar28 = 0x90;
      if (*(uint *)(lVar29 + 0x30) < 7) {
        lVar28 = 0;
      }
      iVar15 = *(int *)(*(long *)(lVar29 + 0x38) + lVar28);
      if (iVar15 != -1) {
        (**(code **)PTR_DAT_04bcf2e0)
                  (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70)
                   ,*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar15,0x10,&local_a8);
      }
      do {
        uVar19 = *puVar1;
        cVar18 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar13) {
          *puVar1 = uVar19 | 0x80000000;
          cVar18 = ExclusiveMonitorsStatus();
        }
      } while (cVar18 != '\0');
      if ((uVar19 & 0x7fffffff) != 0) {
        if ((int)uVar19 < 0) {
          if ((int)*puVar1 < 0) {
            lVar28 = *(long *)PTR_DAT_04bb29d0;
            do {
              nn::os::ConvertToTimeSpan(lVar28 / 1000000);
              nn::os::SleepThread();
            } while ((int)*puVar1 < 0);
          }
        }
        else {
          FUN_03907b80(lVar29);
        }
      }
      do {
        cVar18 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar13) {
          *puVar1 = 0;
          cVar18 = ExclusiveMonitorsStatus();
        }
      } while (cVar18 != '\0');
      FUN_0390d290(lVar26 + 0x5c0,param_2,*(undefined8 *)(lVar29 + 0x68),0xffffffff,0);
      FUN_039387c0(param_1,param_2,&local_120);
    }
  }
  uVar19 = *param_3;
  if (*(uint *)(param_1 + 0x5b8) <= uVar19) {
    uVar19 = 0;
  }
  lVar26 = *(long *)(param_1 + 0x5c0) + (long)(int)uVar19 * 0x6a0;
  uVar31 = *(undefined8 *)PTR_DAT_04bbd510;
  if (*(long *)(lVar26 + 0x308) != 0) {
    FUN_039499cc(uVar31);
    *(undefined8 *)(lVar26 + 0x308) = 0;
  }
  if (*(long *)(lVar26 + 0x3f0) != 0) {
    FUN_039499cc(uVar31);
    *(undefined8 *)(lVar26 + 0x3f0) = 0;
  }
  if (*(long *)(lVar26 + 0x4d8) != 0) {
    FUN_039499cc(uVar31);
    *(undefined8 *)(lVar26 + 0x4d8) = 0;
  }
LAB_03937eec:
  if ((*(char *)(lVar33 + 0x78) != '\0') &&
     (((*(char *)(lVar33 + 0x98) != '\0' && *(char *)(lVar33 + 0xb8) != '\0' ||
       (*(char *)(lVar33 + 0x98) == '\0' || *(int *)(lVar33 + 0x380) != 0)) ||
      (*(float *)(lVar33 + 0x238) <= 0.0)))) {
    param_3[1] = 4;
    FUN_038e4cec(&local_228);
    uVar31 = local_200;
    local_228 = (undefined *)((ulong)local_228 & 0xffffffffffff0000);
    local_210 = local_210 & 0xfffffff0ffffffff | 0x700000000;
    if (*(uint *)(*(long *)(param_3 + 4) + 0x380) < 4) {
      uVar19 = *(uint *)(*(long *)(param_3 + 4) + 0x380) << 3;
      uVar10 = (undefined1)(0xa010505 >> (ulong)(uVar19 & 0x1f));
      uVar11 = (undefined1)(0x2030206 >> (ulong)(uVar19 & 0x1f));
      local_200._6_2_ = SUB82(uVar31,6);
      local_200._0_6_ = CONCAT24(0x101,CONCAT13(uVar11,CONCAT12(uVar11,CONCAT11(uVar10,uVar10))));
    }
    FUN_038e4d90(&local_228,param_2);
    lVar33 = *(long *)(param_3 + 6);
    local_110 = 0xff7fffffff7fffff;
    local_120 = PTR_DAT_04bd0f08 + 0x10;
    local_118 = 0x7f7fffff7f7fffff;
    local_108 = *(uint *)PTR_DAT_04bd0ea8;
    uStack_104 = 0;
    fStack_100 = 1.0;
    if (local_108 < 6) {
      if ((1 << (ulong)(local_108 & 0x1f) & 0x39U) == 0) {
        fVar38 = *(float *)(lVar33 + 8);
        fVar35 = *(float *)(lVar33 + 0xc);
      }
      else {
        fVar35 = *(float *)(lVar33 + 8);
        fVar38 = *(float *)(lVar33 + 0xc);
      }
      fVar41 = fVar35;
      fVar39 = 0.0;
      if (fVar35 <= 0.0) {
        fVar41 = 0.0;
        fVar39 = fVar35;
      }
      fVar45 = fVar38;
      fVar35 = 0.0;
      if (fVar38 <= 0.0) {
        fVar45 = 0.0;
        fVar35 = fVar38;
      }
      local_118 = CONCAT44(fVar35,fVar39);
      local_110 = CONCAT44(fVar45,fVar41);
    }
    FUN_038e77e4(&local_120,param_2);
    (**(code **)(**(long **)(param_3 + 6) + 0x38))(*(long **)(param_3 + 6),param_2);
    FUN_03907810(*(undefined8 *)(*(long *)(param_3 + 4) + 0x528),param_2);
    FUN_03938270(param_2,param_3,*(undefined8 *)(*(long *)(param_3 + 4) + 0x528));
    FUN_039387c0(param_1,param_2,param_3);
  }
  return;
}


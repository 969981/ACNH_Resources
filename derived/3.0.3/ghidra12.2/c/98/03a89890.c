
void FUN_03a89890(undefined4 param_1,long param_2,long *param_3,long param_4,ulong param_5)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined2 uVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  uint uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  uint local_3f0;
  undefined8 local_3ec;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  uint local_3c8;
  undefined8 local_3c4;
  undefined *local_2f0;
  undefined1 *puStack_2e8;
  undefined8 local_2e0;
  undefined1 *puStack_2d8;
  long local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined *local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  char *local_1f0;
  undefined4 local_1e8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined1 auStack_100 [16];
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined7 uStack_a0;
  undefined1 local_99;
  undefined4 uStack_98;
  char cStack_94;
  undefined1 uStack_93;
  undefined1 uStack_92;
  int local_8c;
  
  puVar15 = PTR_DAT_04bd0f08;
  puVar14 = PTR_DAT_04bd0ea8;
  puVar13 = PTR_DAT_04bcf1a8;
  puVar12 = PTR_DAT_04bbdd18;
  uVar4 = *(ushort *)(param_4 + 0x30);
  uVar5 = *(ushort *)(param_4 + 0x32);
  if (uVar4 < 2) {
    uVar4 = 1;
  }
  uVar2 = uVar5;
  if (*(short *)(param_4 + 0x3a) != 3) {
    uVar2 = 1;
  }
  if (uVar2 <= uVar5) {
    uVar2 = uVar5;
  }
  if ((param_5 & 1) == 0) {
    (**(code **)(*param_3 + 0x38))(param_3,param_2);
    local_3c4 = 0x3f80000000000000;
    local_3d8 = 0x7f7fffff7f7fffff;
    local_3d0 = 0xff7fffffff7fffff;
    local_3e0 = (undefined **)(puVar15 + 0x10);
    local_3c8 = *(uint *)puVar14;
    if (local_3c8 < 6) {
      if ((1 << (ulong)(local_3c8 & 0x1f) & 0x39U) == 0) {
        fVar32 = *(float *)(param_3 + 1);
        fVar31 = *(float *)((long)param_3 + 0xc);
      }
      else {
        fVar31 = *(float *)(param_3 + 1);
        fVar32 = *(float *)((long)param_3 + 0xc);
      }
      fVar28 = fVar31;
      fVar26 = 0.0;
      if (fVar31 <= 0.0) {
        fVar28 = 0.0;
        fVar26 = fVar31;
      }
      fVar27 = fVar32;
      fVar31 = 0.0;
      if (fVar32 <= 0.0) {
        fVar27 = 0.0;
        fVar31 = fVar32;
      }
      local_3d8 = CONCAT44(fVar31,fVar26);
      local_3d0 = CONCAT44(fVar27,fVar28);
    }
    FUN_038e77e4(&local_3e0,param_2,param_3);
    lVar24 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)puVar12 + 0x10) + 0x470) + 8) + 0x18);
    FUN_03907810(lVar24,param_2);
    puVar1 = (uint *)(lVar24 + 0x14);
    local_3e0 = (undefined **)CONCAT44(1.0 / (float)uVar2,1.0 / (float)uVar4);
    do {
      uVar18 = *puVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar10) {
        *puVar1 = uVar18 | 0x80000000;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if ((uVar18 & 0x7fffffff) != 0) {
      if ((int)uVar18 < 0) {
        if ((int)*puVar1 < 0) {
          lVar25 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar25 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar24);
      }
    }
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar10) {
        *puVar1 = 0;
        cVar9 = ExclusiveMonitorsStatus();
      }
      puVar14 = PTR_DAT_04bd0fc8;
      puVar12 = PTR_DAT_04bcf2e0;
    } while (cVar9 != '\0');
    if (**(int **)(lVar24 + 0x38) != -1) {
      (**(code **)PTR_DAT_04bcf2e0)
                (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                 *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)**(int **)(lVar24 + 0x38),8
                 ,&local_3e0);
    }
    do {
      uVar18 = *puVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar10) {
        *puVar1 = uVar18 | 0x80000000;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if ((uVar18 & 0x7fffffff) != 0) {
      if ((int)uVar18 < 0) {
        if ((int)*puVar1 < 0) {
          lVar25 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar25 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar24);
      }
    }
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar10) {
        *puVar1 = 0;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    local_3e0 = (undefined **)CONCAT44(local_3e0._4_4_,param_1);
    iVar8 = *(int *)(*(long *)(lVar24 + 0x38) + (ulong)(1 < *(uint *)(lVar24 + 0x30)) * 0x18);
    if (iVar8 != -1) {
      (**(code **)puVar12)
                (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar14 + 0x70),
                 *(undefined8 *)(*(long *)puVar14 + 0x18),(long)iVar8,4,&local_3e0);
    }
    do {
      uVar18 = *puVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar10) {
        *puVar1 = uVar18 | 0x80000000;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if ((uVar18 & 0x7fffffff) != 0) {
      if ((int)uVar18 < 0) {
        if ((int)*puVar1 < 0) {
          lVar25 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar25 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar24);
      }
    }
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar10) {
        *puVar1 = 0;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    FUN_0390d290(param_4,param_2,*(undefined8 *)(lVar24 + 0x68),0xffffffff,0);
    uVar16 = *(undefined8 *)(param_2 + 0xb8);
    lVar24 = *(long *)PTR_DAT_04bbd7e0;
    (**(code **)puVar13)(uVar16,0x10,lVar24 + 0x1024);
    (**(code **)PTR_DAT_04bcf1b0)(uVar16,0x10,lVar24 + 0x1068);
    puVar13 = PTR_DAT_04bcf1e8;
    puVar12 = PTR_DAT_04bbd560;
    iVar8 = *(int *)(lVar24 + 0x1010);
    if (iVar8 != 0) {
      lVar24 = *(long *)(lVar24 + 0x1018);
      uVar22 = 0;
      uVar23 = 0;
      do {
        lVar25 = *(long *)(lVar24 + (-(uVar23 >> 0x1f) & 0xfffffff800000000 | uVar23 << 3));
        if (lVar25 != 0) {
          uVar17 = (**(code **)puVar12)(lVar25 + 8);
          (**(code **)puVar13)(uVar16,uVar22 & 0xffffffff,uVar17,*(undefined4 *)(lVar25 + 0x118));
        }
        uVar22 = uVar23 + 1;
        uVar23 = uVar22 & 0xffffffff;
      } while (iVar8 != (int)uVar22);
    }
    lVar24 = *(long *)PTR_DAT_04bbd7e8;
    iVar8 = *(int *)(lVar24 + 0x480);
    if (iVar8 != 0) {
      uVar20 = *(undefined4 *)(lVar24 + 0x464);
      uVar17 = *(undefined8 *)(param_2 + 0xb8);
      uVar16 = (**(code **)puVar12)(lVar24 + 0x488);
      (**(code **)PTR_DAT_04bbd568)(uVar17,uVar20,*(undefined4 *)(lVar24 + 0x460),iVar8,uVar16);
    }
    uVar18 = *(uint *)(param_3[4] + 0x58);
    if (uVar18 == 0xffffffff) {
      return;
    }
    lVar24 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar24 + 0x5c8) >> 3 & 1) == 0) {
      uVar11 = uVar18 - *(ushort *)(lVar24 + 0x3da);
      if (*(uint *)(lVar24 + 0x368) <= uVar11) {
        uVar11 = 0;
      }
      if ((*(uint *)(*(long *)(lVar24 + 0x370) + (long)(int)uVar11 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar18 & 0x3f);
        return;
      }
    }
    if ((*(uint *)(lVar24 + 0x5c8) >> 5 & 1) == 0) {
      uVar19 = 0x112;
      uVar20 = 0x12;
    }
    else {
      uVar19 = 0x111;
      uVar20 = 0x11;
    }
    if ((*(uint *)(lVar24 + 800) & 2) != 0) {
      uVar20 = uVar19;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar20);
    *(undefined8 *)(param_2 + 0x100) = 0;
    return;
  }
  lVar24 = param_3[4];
  local_3e0 = &PTR_FUN_04b70a10;
  local_3d8 = 0;
  FUN_0390cee0(&local_3d0);
  local_2d0 = 0;
  uStack_2c8 = 0;
  local_2e0 = 0;
  puStack_2d8 = &DAT_3f8000003f800000;
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_2f0 = PTR_DAT_04bd1178 + 0x10;
  local_290 = 0;
  local_260 = 0;
  local_258 = 0;
  local_250 = 0;
  local_248 = 0;
  local_240 = 0;
  local_238 = 0;
  local_230 = 0xffffffff;
  local_228 = 0;
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  local_208 = 0;
  local_200 = 0;
  local_1f8 = 0;
  puStack_2e8 = &DAT_3f8000003f800000;
  local_1f0 = "agl::TextureData";
  local_1e8 = 0x10000;
  local_2b0 = 0;
  uStack_2a8 = 0;
  local_2a0 = 0;
  uStack_298 = 0;
  local_280 = 0;
  uStack_278 = 0;
  local_270 = 0;
  uStack_268 = 0;
  local_1d0 = 0xff;
  local_288 = PTR_DAT_04bd1198 + 0x10;
  local_1cc = 0;
  local_1c8 = 0x80000000000;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_158 = 0;
  local_160 = 0;
  local_168 = 0;
  local_170 = 0;
  local_178 = 0;
  local_180 = 0;
  local_188 = 0;
  local_190 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_150 = 0xffffffff;
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  local_140 = 0;
  local_148 = 0;
  local_110 = "agl::TextureData";
  local_108 = 0x10000;
  local_f0 = 0xff;
  local_ec = 0;
  local_1a8 = PTR_DAT_04bd11a0 + 0x10;
  local_e8 = 0x80000000000;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  (**(code **)PTR_DAT_04bcf220)(auStack_100);
  local_b0 = *(undefined4 *)puVar14;
  local_c8 = puVar15 + 0x10;
  local_c0 = 0x7f7fffff7f7fffff;
  local_ac = 0x3f80000000000000;
  local_b8 = 0xff7fffffff7fffff;
  uStack_98 = 0;
  cStack_94 = 0;
  uStack_93 = 0;
  uStack_92 = 0;
  uStack_a0 = 0;
  local_99 = 0;
  uVar5 = *(ushort *)(lVar24 + 0x38);
  uVar6 = *(ushort *)(lVar24 + 0x3a);
  uVar7 = *(undefined2 *)(lVar24 + 0xa0);
  local_408 = PTR_DAT_04bb2020 + 0x10;
  local_400 = &DAT_0407ebb1;
  lVar25 = *(long *)PTR_DAT_04bbd510;
  if (uVar5 < 2) {
    uVar5 = 1;
  }
  uVar3 = uVar6;
  if (*(short *)(lVar24 + 0x42) != 3) {
    uVar3 = 1;
  }
  if (uVar3 <= uVar6) {
    uVar3 = uVar6;
  }
  lVar24 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  puVar12 = PTR_DAT_04bcf1b0;
  if (lVar24 == 0) {
    local_8c = nn::os::GetCurrentCoreNumber();
  }
  else {
    local_8c = (int)lVar24 + -1;
  }
  uVar16 = FUN_03948e10(lVar25,param_2,lVar25 + (long)local_8c * 0x290 + 0x10,&local_408,uVar7,1,
                        uVar5,uVar3,1,0,1,0,1,0,0,0);
  FUN_03a81620(&local_3e0,uVar16);
  cStack_94 = '\x01';
  uStack_93 = 0;
  (**(code **)(local_2f0 + 0x38))(&local_2f0,param_2);
  FUN_038e77e4(&local_c8,param_2,&local_2f0);
  puVar13 = PTR_DAT_04bcf1a8;
  lVar24 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x470) + 8);
  uVar18 = (uint)*(ushort *)
                  (*(long *)(lVar24 + 0x38) + (ulong)(1 < *(uint *)(lVar24 + 0x30)) * 0x38 + 0x30);
  if (uVar18 == 0) {
    lVar24 = *(long *)(lVar24 + 0x18);
  }
  else {
    uVar18 = uVar18 - 1;
    if (*(uint *)(lVar24 + 0x20) <= uVar18) {
      uVar18 = 0;
    }
    lVar24 = *(long *)(lVar24 + 0x28) + (ulong)uVar18 * 0x150;
  }
  FUN_03907810(lVar24,param_2);
  fVar31 = 1.0 / (float)uVar4;
  puVar1 = (uint *)(lVar24 + 0x14);
  fVar32 = 1.0 / (float)uVar2;
  local_408 = (undefined *)CONCAT44(fVar32,fVar31);
  do {
    uVar18 = *puVar1;
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar10) {
      *puVar1 = uVar18 | 0x80000000;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if ((uVar18 & 0x7fffffff) != 0) {
    if ((int)uVar18 < 0) {
      if ((int)*puVar1 < 0) {
        lVar25 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar25 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar24);
    }
  }
  do {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar10) {
      *puVar1 = 0;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if (**(int **)(lVar24 + 0x38) != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)**(int **)(lVar24 + 0x38),8,
               &local_408);
  }
  do {
    uVar18 = *puVar1;
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar10) {
      *puVar1 = uVar18 | 0x80000000;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if ((uVar18 & 0x7fffffff) != 0) {
    if ((int)uVar18 < 0) {
      if ((int)*puVar1 < 0) {
        lVar25 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar25 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar24);
    }
  }
  do {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar10) {
      *puVar1 = 0;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  local_408 = (undefined *)CONCAT44(local_408._4_4_,param_1);
  iVar8 = *(int *)(*(long *)(lVar24 + 0x38) + (ulong)(1 < *(uint *)(lVar24 + 0x30)) * 0x18);
  if (iVar8 != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar8,4,&local_408);
  }
  do {
    uVar18 = *puVar1;
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar10) {
      *puVar1 = uVar18 | 0x80000000;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if ((uVar18 & 0x7fffffff) != 0) {
    if ((int)uVar18 < 0) {
      if ((int)*puVar1 < 0) {
        lVar25 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar25 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar24);
    }
  }
  do {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar10) {
      *puVar1 = 0;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  FUN_0390d290(param_4,param_2,*(undefined8 *)(lVar24 + 0x68),0xffffffff,0);
  uVar16 = *(undefined8 *)(param_2 + 0xb8);
  lVar25 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)puVar13)(uVar16,0x10,lVar25 + 0x1024);
  (**(code **)puVar12)(uVar16,0x10,lVar25 + 0x1068);
  puVar13 = PTR_DAT_04bcf1e8;
  puVar12 = PTR_DAT_04bbd560;
  iVar8 = *(int *)(lVar25 + 0x1010);
  if (iVar8 != 0) {
    lVar25 = *(long *)(lVar25 + 0x1018);
    uVar22 = 0;
    uVar23 = 0;
    do {
      lVar21 = *(long *)(lVar25 + (-(uVar23 >> 0x1f) & 0xfffffff800000000 | uVar23 << 3));
      if (lVar21 != 0) {
        uVar17 = (**(code **)puVar12)(lVar21 + 8);
        (**(code **)puVar13)(uVar16,uVar22 & 0xffffffff,uVar17,*(undefined4 *)(lVar21 + 0x118));
      }
      uVar22 = uVar23 + 1;
      uVar23 = uVar22 & 0xffffffff;
    } while (iVar8 != (int)uVar22);
  }
  lVar25 = *(long *)PTR_DAT_04bbd7e8;
  iVar8 = *(int *)(lVar25 + 0x480);
  if (iVar8 != 0) {
    uVar20 = *(undefined4 *)(lVar25 + 0x464);
    uVar17 = *(undefined8 *)(param_2 + 0xb8);
    uVar16 = (**(code **)PTR_DAT_04bbd560)(lVar25 + 0x488);
    (**(code **)PTR_DAT_04bbd568)(uVar17,uVar20,*(undefined4 *)(lVar25 + 0x460),iVar8,uVar16);
  }
  puVar12 = PTR_DAT_04bd0ea8;
  uVar18 = *(uint *)(local_2d0 + 0x58);
  if (uVar18 != 0xffffffff) {
    lVar25 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar25 + 0x5c8) >> 3 & 1) == 0) {
      uVar11 = uVar18 - *(ushort *)(lVar25 + 0x3da);
      if (*(uint *)(lVar25 + 0x368) <= uVar11) {
        uVar11 = 0;
      }
      if ((*(uint *)(*(long *)(lVar25 + 0x370) + (long)(int)uVar11 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar18 & 0x3f);
        goto LAB_03a8a4c0;
      }
    }
    if ((*(uint *)(lVar25 + 0x5c8) >> 5 & 1) == 0) {
      uVar19 = 0x112;
      uVar20 = 0x12;
    }
    else {
      uVar19 = 0x111;
      uVar20 = 0x11;
    }
    if ((*(uint *)(lVar25 + 800) & 2) != 0) {
      uVar20 = uVar19;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar20);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_03a8a4c0:
  (**(code **)(*param_3 + 0x38))(param_3,param_2);
  puVar14 = PTR_DAT_04bcf1b0;
  puVar13 = PTR_DAT_04bcf1a8;
  local_3f8 = 0xff7fffffff7fffff;
  local_3ec = 0x3f80000000000000;
  local_408 = PTR_DAT_04bd0f08 + 0x10;
  local_400 = (undefined8 *)0x7f7fffff7f7fffff;
  local_3f0 = *(uint *)puVar12;
  if (local_3f0 < 6) {
    if ((1 << (ulong)(local_3f0 & 0x1f) & 0x39U) == 0) {
      fVar28 = *(float *)(param_3 + 1);
      fVar26 = *(float *)((long)param_3 + 0xc);
    }
    else {
      fVar26 = *(float *)(param_3 + 1);
      fVar28 = *(float *)((long)param_3 + 0xc);
    }
    fVar30 = fVar26;
    fVar27 = 0.0;
    if (fVar26 <= 0.0) {
      fVar30 = 0.0;
      fVar27 = fVar26;
    }
    fVar29 = fVar28;
    fVar26 = 0.0;
    if (fVar28 <= 0.0) {
      fVar29 = 0.0;
      fVar26 = fVar28;
    }
    local_400 = (undefined8 *)CONCAT44(fVar26,fVar27);
    local_3f8 = CONCAT44(fVar29,fVar30);
  }
  FUN_038e77e4(&local_408,param_2,param_3);
  lVar24 = *(long *)(lVar24 + 8);
  iVar8 = (uint)*(ushort *)
                 (*(long *)(lVar24 + 0x38) + (ulong)(1 < *(uint *)(lVar24 + 0x30)) * 0x38 + 0x30) +
          (uint)*(ushort *)(*(long *)(lVar24 + 0x38) + 0x30);
  if (iVar8 == 0) {
    lVar24 = *(long *)(lVar24 + 0x18);
  }
  else {
    uVar18 = iVar8 - 1;
    if (*(uint *)(lVar24 + 0x20) <= uVar18) {
      uVar18 = 0;
    }
    lVar24 = *(long *)(lVar24 + 0x28) + (ulong)uVar18 * 0x150;
  }
  FUN_03907810(lVar24,param_2);
  puVar1 = (uint *)(lVar24 + 0x14);
  local_408 = (undefined *)CONCAT44(fVar32,fVar31);
  do {
    uVar18 = *puVar1;
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar10) {
      *puVar1 = uVar18 | 0x80000000;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if ((uVar18 & 0x7fffffff) != 0) {
    if ((int)uVar18 < 0) {
      if ((int)*puVar1 < 0) {
        lVar25 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar25 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar24);
    }
  }
  do {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar10) {
      *puVar1 = 0;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if (**(int **)(lVar24 + 0x38) != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)**(int **)(lVar24 + 0x38),8,
               &local_408);
  }
  do {
    uVar18 = *puVar1;
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar10) {
      *puVar1 = uVar18 | 0x80000000;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if ((uVar18 & 0x7fffffff) != 0) {
    if ((int)uVar18 < 0) {
      if ((int)*puVar1 < 0) {
        lVar25 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar25 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar24);
    }
  }
  do {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar10) {
      *puVar1 = 0;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  local_408 = (undefined *)CONCAT44(local_408._4_4_,param_1);
  iVar8 = *(int *)(*(long *)(lVar24 + 0x38) + (ulong)(1 < *(uint *)(lVar24 + 0x30)) * 0x18);
  if (iVar8 != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar8,4,&local_408);
  }
  do {
    uVar18 = *puVar1;
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar10) {
      *puVar1 = uVar18 | 0x80000000;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if ((uVar18 & 0x7fffffff) != 0) {
    if ((int)uVar18 < 0) {
      if ((int)*puVar1 < 0) {
        lVar25 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar25 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar24);
    }
  }
  do {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar10) {
      *puVar1 = 0;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  FUN_0390d290(&local_3d0,param_2,*(undefined8 *)(lVar24 + 0x68),0xffffffff,0);
  uVar16 = *(undefined8 *)(param_2 + 0xb8);
  lVar24 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)puVar13)(uVar16,0x10,lVar24 + 0x1024);
  (**(code **)puVar14)(uVar16,0x10,lVar24 + 0x1068);
  puVar13 = PTR_DAT_04bcf1e8;
  puVar12 = PTR_DAT_04bbd560;
  iVar8 = *(int *)(lVar24 + 0x1010);
  if (iVar8 != 0) {
    lVar24 = *(long *)(lVar24 + 0x1018);
    uVar22 = 0;
    uVar23 = 0;
    do {
      lVar25 = *(long *)(lVar24 + (-(uVar23 >> 0x1f) & 0xfffffff800000000 | uVar23 << 3));
      if (lVar25 != 0) {
        uVar17 = (**(code **)puVar12)(lVar25 + 8);
        (**(code **)puVar13)(uVar16,uVar22 & 0xffffffff,uVar17,*(undefined4 *)(lVar25 + 0x118));
      }
      uVar22 = uVar23 + 1;
      uVar23 = uVar22 & 0xffffffff;
    } while (iVar8 != (int)uVar22);
  }
  lVar24 = *(long *)PTR_DAT_04bbd7e8;
  iVar8 = *(int *)(lVar24 + 0x480);
  if (iVar8 != 0) {
    uVar20 = *(undefined4 *)(lVar24 + 0x464);
    uVar17 = *(undefined8 *)(param_2 + 0xb8);
    uVar16 = (**(code **)PTR_DAT_04bbd560)(lVar24 + 0x488);
    (**(code **)PTR_DAT_04bbd568)(uVar17,uVar20,*(undefined4 *)(lVar24 + 0x460),iVar8,uVar16);
  }
  uVar18 = *(uint *)(param_3[4] + 0x58);
  if (uVar18 != 0xffffffff) {
    lVar24 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar24 + 0x5c8) >> 3 & 1) == 0) {
      uVar11 = uVar18 - *(ushort *)(lVar24 + 0x3da);
      if (*(uint *)(lVar24 + 0x368) <= uVar11) {
        uVar11 = 0;
      }
      if ((*(uint *)(*(long *)(lVar24 + 0x370) + (long)(int)uVar11 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar18 & 0x3f);
        goto LAB_03a8a9b8;
      }
    }
    if ((*(uint *)(lVar24 + 0x5c8) >> 5 & 1) == 0) {
      uVar19 = 0x112;
      uVar20 = 0x12;
    }
    else {
      uVar19 = 0x111;
      uVar20 = 0x11;
    }
    if ((*(uint *)(lVar24 + 800) & 2) != 0) {
      uVar20 = uVar19;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar20);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_03a8a9b8:
  if (cStack_94 != '\0') {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,local_3d8);
  }
  local_3d8 = 0;
  cStack_94 = 0;
  uStack_93 = 0;
  FUN_03a814b8(&local_3e0);
  return;
}


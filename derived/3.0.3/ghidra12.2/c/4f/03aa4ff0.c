
void FUN_03aa4ff0(long param_1,long param_2,uint param_3,long param_4,undefined8 param_5,
                 long param_6)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  uint *puVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  uint uVar25;
  int iVar26;
  long lVar27;
  long lVar28;
  long *plVar29;
  undefined8 uVar30;
  long lVar31;
  undefined8 *puVar32;
  long *plVar33;
  ulong uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  undefined *local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined4 local_240 [2];
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  char *pcStack_200;
  undefined4 local_1f8;
  undefined1 auStack_1f0 [16];
  undefined4 local_1e0;
  undefined2 local_1dc;
  undefined1 local_1da;
  undefined1 local_1d9;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_190;
  undefined2 local_18c;
  int local_9c;
  
  plVar33 = (long *)PTR_DAT_04bbdd18;
  plVar29 = (long *)PTR_DAT_04bbd510;
  if (*(char *)(param_1 + 0x3c0) == '\0') {
    return;
  }
  if (param_3 == 0xffffffff) {
    uVar25 = *(uint *)(param_1 + 8);
  }
  else {
    uVar25 = *(uint *)(param_1 + 8) >> (ulong)(param_3 & 0x1f) & 1;
  }
  if (uVar25 == 0) {
    return;
  }
  uVar25 = *(uint *)(param_1 + 0x18) & param_3;
  lVar20 = *(long *)(param_4 + 0x20);
  if (*(uint *)(param_1 + 0x1b8) <= uVar25) {
    uVar25 = 0;
  }
  lVar13 = *(long *)(param_4 + 0x60);
  uVar18 = param_3;
  if (*(uint *)(param_1 + 0x1a8) <= param_3) {
    uVar18 = 0;
  }
  lVar22 = *(long *)(param_1 + 0x1b0) + (long)(int)uVar18 * 0x1330;
  lVar21 = *(long *)(*(long *)(param_1 + 0x1c0) + (long)(int)uVar25 * 8);
  uVar5 = *(ushort *)(lVar20 + 0x38) >> (ulong)(*(byte *)(lVar20 + 0xbe) & 0x1f);
  uVar25 = (uint)uVar5;
  if (uVar5 < 2) {
    uVar25 = 1;
  }
  uVar18 = (uint)*(ushort *)(lVar20 + 0x3a);
  uVar15 = (uint)(*(ushort *)(lVar20 + 0x3a) >> (ulong)(*(byte *)(lVar20 + 0xbe) & 0x1f));
  if (*(short *)(lVar20 + 0x42) != 3) {
    uVar18 = 1;
  }
  if (uVar18 <= uVar15) {
    uVar18 = uVar15;
  }
  if (*(char *)(lVar21 + 0x40) != '\0') {
    uVar25 = uVar25 >> (ulong)(*(uint *)(lVar21 + 0xa0) & 0x1f);
    uVar18 = uVar18 >> (ulong)(*(uint *)(lVar21 + 0xa0) & 0x1f);
    if (param_6 == 0) {
LAB_03aa5134:
      FUN_03aa14d0(lVar22 + 0xfd0,param_2,lVar13 + 8);
      cVar4 = *(char *)(lVar21 + 0x80);
      *(char **)(lVar22 + 0xc58) = "reduce depth";
      lVar13 = *plVar29;
      uVar17 = 0x59;
      if (cVar4 == '\0') {
        uVar17 = 0x5a;
      }
      local_1b8 = PTR_DAT_04bb2020 + 0x10;
      local_1b0 = "reduce depth";
      lVar24 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
      if (lVar24 == 0) {
        iVar9 = nn::os::GetCurrentCoreNumber();
      }
      else {
        iVar9 = (int)lVar24 + -1;
      }
      local_298 = (undefined *)CONCAT44(local_298._4_4_,iVar9);
      auVar40 = FUN_03948e10(lVar13,param_2,lVar13 + (long)iVar9 * 0x290 + 0x10,&local_1b8,uVar17,1,
                             uVar25,uVar18,1,0,1,0,1,0,0,0);
      FUN_03aa14d0(lVar22 + 0x910,auVar40._8_8_,auVar40._0_8_);
      *(undefined1 *)(lVar22 + 0xc68) = 1;
      *(undefined1 *)(lVar22 + 0xc6a) = 0;
      FUN_038e4d90(param_1 + 0x3e4,param_2);
      (**(code **)(*(long *)(lVar22 + 0xa00) + 0x38))(lVar22 + 0xa00,param_2);
      FUN_038e77e4(lVar22 + 0xc28,param_2,lVar22 + 0xa00);
      lVar13 = 0;
      if (0x93 < *(uint *)(*plVar33 + 8)) {
        lVar13 = *(long *)(*(long *)(*plVar33 + 0x10) + 0x498);
      }
      FUN_03907810(lVar13,param_2);
      puVar14 = (uint *)(lVar13 + 0x14);
      do {
        uVar15 = *puVar14;
        cVar4 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(puVar14,0x10);
        if (bVar1) {
          *puVar14 = uVar15 | 0x80000000;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar15 & 0x7fffffff) != 0) {
        if ((int)uVar15 < 0) {
          if ((int)*puVar14 < 0) {
            lVar24 = *(long *)PTR_DAT_04bb29d0;
            do {
              nn::os::ConvertToTimeSpan(lVar24 / 1000000);
              nn::os::SleepThread();
            } while ((int)*puVar14 < 0);
          }
        }
        else {
          FUN_03907b80(lVar13);
        }
      }
      do {
        cVar4 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(puVar14,0x10);
        if (bVar1) {
          *puVar14 = 0;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      FUN_0390d290(lVar22 + 0xfe0,param_2,*(undefined8 *)(lVar13 + 0x68),0xffffffff,0);
      uVar10 = *(undefined8 *)(param_2 + 0xb8);
      lVar13 = *(long *)PTR_DAT_04bbd7e0;
      (**(code **)PTR_DAT_04bcf1a8)(uVar10,0x10,lVar13 + 0xe44);
      (**(code **)PTR_DAT_04bcf1b0)(uVar10,0x10,lVar13 + 0xe88);
      puVar8 = PTR_DAT_04bcf1e8;
      plVar29 = (long *)PTR_DAT_04bbd510;
      iVar9 = *(int *)(lVar13 + 0xe30);
      if (iVar9 != 0) {
        lVar13 = *(long *)(lVar13 + 0xe38);
        uVar34 = 0;
        uVar23 = 0;
        do {
          lVar24 = *(long *)(lVar13 + (-(uVar23 >> 0x1f) & 0xfffffff800000000 | uVar23 << 3));
          if (lVar24 != 0) {
            uVar30 = (**(code **)PTR_DAT_04bbd560)(lVar24 + 8);
            (**(code **)puVar8)(uVar10,uVar34 & 0xffffffff,uVar30,*(undefined4 *)(lVar24 + 0x118));
          }
          uVar34 = uVar23 + 1;
          uVar23 = uVar34 & 0xffffffff;
        } while (iVar9 != (int)uVar34);
      }
      lVar13 = *(long *)PTR_DAT_04bbd7e8;
      iVar9 = *(int *)(lVar13 + 0x1f8);
      if (iVar9 != 0) {
        uVar17 = *(undefined4 *)(lVar13 + 0x1dc);
        uVar30 = *(undefined8 *)(param_2 + 0xb8);
        uVar10 = (**(code **)PTR_DAT_04bbd560)(lVar13 + 0x200);
        plVar29 = (long *)PTR_DAT_04bbd510;
        (**(code **)PTR_DAT_04bbd568)(uVar30,uVar17,*(undefined4 *)(lVar13 + 0x1d8),iVar9,uVar10);
      }
      plVar33 = (long *)PTR_DAT_04bbdd18;
      if (*(int *)(*(long *)(lVar22 + 0xa60) + 0x58) == -1) {
        lVar13 = *(long *)PTR_DAT_04bc1010;
        if ((*(uint *)(lVar13 + 0x5c8) >> 3 & 1) == 0) {
          uVar15 = 0;
          if (~(uint)*(ushort *)(lVar13 + 0x3da) < *(uint *)(lVar13 + 0x368)) {
            uVar15 = ~(uint)*(ushort *)(lVar13 + 0x3da);
          }
          if ((*(uint *)(*(long *)(lVar13 + 0x370) + (long)(int)uVar15 * 0x20 + 4) >> 2 & 1) == 0) {
            *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 0x8000000000000000;
            goto LAB_03aa54cc;
          }
        }
        if ((*(uint *)(lVar13 + 0x5c8) >> 5 & 1) == 0) {
          uVar16 = 0x112;
          uVar17 = 0x12;
        }
        else {
          uVar16 = 0x111;
          uVar17 = 0x11;
        }
        if ((*(uint *)(lVar13 + 800) & 2) != 0) {
          uVar17 = uVar16;
        }
        (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar17);
        *(undefined8 *)(param_2 + 0x100) = 0;
      }
    }
    else {
      uVar15 = (uint)*(ushort *)(param_6 + 0x30);
      if (*(ushort *)(param_6 + 0x30) < 2) {
        uVar15 = 1;
      }
      if (uVar15 != uVar25) goto LAB_03aa5134;
      uVar5 = *(ushort *)(param_6 + 0x32);
      uVar15 = (uint)uVar5;
      if (*(short *)(param_6 + 0x3a) != 3) {
        uVar15 = 1;
      }
      if (uVar15 == uVar5 || uVar15 < uVar5) {
        uVar15 = (uint)uVar5;
      }
      if (uVar15 != uVar18) goto LAB_03aa5134;
      FUN_03aa14d0(lVar22 + 0x910,param_2,param_6);
    }
LAB_03aa54cc:
    lVar13 = lVar22 + 0xb48;
  }
  local_1da = *(undefined1 *)(lVar13 + 0xbe);
  local_1dc = *(undefined2 *)(lVar13 + 0xbc);
  local_240[0] = 0xffffffff;
  local_208 = 0;
  pcStack_200 = "agl::TextureData";
  local_1f8 = 0x10000;
  local_290 = 0;
  uStack_288 = 0;
  local_280 = 0;
  uStack_278 = 0;
  local_270 = 0;
  uStack_268 = 0;
  local_260 = 0;
  uStack_258 = 0;
  local_250 = 0;
  uStack_248 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_1e0 = 0xff;
  local_298 = PTR_DAT_04bd11a0 + 0x10;
  local_1d9 = 0;
  local_1d8 = 0x80000000000;
  uStack_1d0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  (**(code **)PTR_DAT_04bcf220)(auStack_1f0);
  FUN_0155a100(&local_298,lVar13 + 8,local_1da,local_1dc);
  lVar13 = lVar22 + 0x240;
  if (*(char *)(lVar21 + 0xe0) == '\0') {
    if (*(char *)(lVar22 + 0x598) != '\0') {
      FUN_039499cc(*plVar29,*(undefined8 *)(lVar22 + 0x248));
      *(undefined8 *)(lVar22 + 0x248) = 0;
      *(undefined1 *)(lVar22 + 0x598) = 0;
      *(undefined1 *)(lVar22 + 0x59a) = 0;
    }
    *(char **)(lVar22 + 0x588) = "glare seed buffer";
    lVar27 = *plVar29;
    local_1b8 = PTR_DAT_04bb2020 + 0x10;
    local_1b0 = "glare seed buffer";
    lVar24 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
    if (lVar24 == 0) {
      local_9c = nn::os::GetCurrentCoreNumber();
    }
    else {
      local_9c = (int)lVar24 + -1;
    }
    auVar40 = FUN_03948e10(lVar27,param_2,lVar27 + (long)local_9c * 0x290 + 0x10,&local_1b8,0x1a,1,
                           uVar25,uVar18,1,0,1,0,1,0,0,0);
    FUN_03aa14d0(lVar13,auVar40._8_8_,auVar40._0_8_);
    *(undefined1 *)(lVar22 + 0x598) = 1;
    *(undefined ***)(lVar22 + 0x390) = &local_298;
    *(undefined1 *)(lVar22 + 0x59a) = 0;
    (**(code **)(*(long *)(lVar22 + 0x330) + 0x38))(lVar22 + 0x330,param_2);
    local_1b8 = (undefined1 *)0x0;
    local_1b0 = (char *)0x3f80000000000000;
    FUN_03aa6ca0(param_1,param_2,lVar13,&local_1b8);
  }
  else {
    if (*(char *)(lVar22 + 0x598) == '\0') {
      *(char **)(lVar22 + 0x588) = "glare seed buffer";
      local_1b8 = PTR_DAT_04bb2020 + 0x10;
      local_1b0 = "glare seed buffer";
      auVar40 = FUN_03948e10(*plVar29,param_2,*plVar29 + 0x7c0,&local_1b8,0x1a,1,uVar25,uVar18,1,0,1
                             ,0,0,0,0,0);
      FUN_03aa14d0(lVar13,auVar40._8_8_,auVar40._0_8_);
      *(undefined1 *)(lVar22 + 0x598) = 1;
      *(undefined1 *)(lVar22 + 0x59a) = 1;
      (**(code **)(*(long *)(lVar22 + 0x330) + 0x38))(lVar22 + 0x330,param_2);
      local_1b8 = (undefined1 *)0x0;
      local_1b0 = (char *)0x3f80000000000000;
      FUN_03aa6ca0(param_1,param_2,lVar13,&local_1b8);
    }
    else {
      *(undefined ***)(lVar22 + 0x390) = &local_298;
      uVar10 = FUN_038e4d90(param_1 + 0x458,param_2);
      fVar35 = *(float *)(lVar21 + 0x100);
      local_1b8 = (undefined1 *)
                  CONCAT44(fVar35 * *(float *)(lVar21 + 0x124),fVar35 * *(float *)(lVar21 + 0x120));
      local_1b0 = (char *)CONCAT44(fVar35 * *(float *)(lVar21 + 300),
                                   fVar35 * *(float *)(lVar21 + 0x128));
      FUN_03aa6320(0x3f800000,uVar10,param_2,lVar13,lVar13,0,1,&local_1b8,0);
    }
    *(undefined ***)(lVar22 + 0x390) = &local_298;
    (**(code **)(*(long *)(lVar22 + 0x330) + 0x38))(lVar22 + 0x330,param_2);
  }
  (**(code **)(*(long *)(lVar22 + 0x330) + 0x38))(lVar22 + 0x330,param_2);
  FUN_038e77e4(lVar22 + 0x558,param_2,lVar22 + 0x330);
  FUN_038e4cec(&local_1b8);
  uVar10 = local_1b8;
  local_1b8 = (undefined1 *)CONCAT62(local_1b8._2_6_,1);
  uVar30 = local_1b8;
  local_1b8._4_4_ = SUB84(uVar10,4);
  local_18c = 0x101;
  local_190 = 0x2020202;
  local_1b8._0_4_ = (undefined4)uVar30;
  local_1b8 = (undefined1 *)(CONCAT44(local_1b8._4_4_,(undefined4)local_1b8) | 0x100000000);
  FUN_038e4d90(&local_1b8,param_2);
  uVar10 = *(undefined8 *)(*(long *)(*(long *)(*(long *)(*plVar33 + 0x10) + 0x488) + 8) + 0x28);
  FUN_03907810(uVar10,param_2);
  uVar30 = *(undefined8 *)(param_2 + 0xb8);
  lVar24 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar30,0x10,lVar24 + 0xe44);
  (**(code **)PTR_DAT_04bcf1b0)(uVar30,0x10,lVar24 + 0xe88);
  puVar8 = PTR_DAT_04bcf1e8;
  iVar9 = *(int *)(lVar24 + 0xe30);
  if (iVar9 != 0) {
    lVar24 = *(long *)(lVar24 + 0xe38);
    uVar34 = 0;
    uVar23 = 0;
    do {
      lVar27 = *(long *)(lVar24 + (-(uVar23 >> 0x1f) & 0xfffffff800000000 | uVar23 << 3));
      if (lVar27 != 0) {
        uVar11 = (**(code **)PTR_DAT_04bbd560)(lVar27 + 8);
        (**(code **)puVar8)(uVar30,uVar34 & 0xffffffff,uVar11,*(undefined4 *)(lVar27 + 0x118));
      }
      uVar34 = uVar23 + 1;
      uVar23 = uVar34 & 0xffffffff;
    } while (iVar9 != (int)uVar34);
  }
  iVar9 = *(int *)(param_1 + 0x3d0);
  if ((iVar9 != 0) && (0 < *(int *)(param_1 + 0x3e0))) {
    lVar24 = *(long *)(param_1 + 0x3d8);
    iVar26 = 0;
    do {
      if (*(int *)(lVar24 + (long)iVar26 * 0x50 + 0x30) == 0) {
        puVar14 = (uint *)(lVar24 + (long)iVar26 * 0x50);
        uVar15 = param_3;
        if (*puVar14 <= param_3) {
          uVar15 = 0;
        }
        FUN_01557430(uVar10,param_2,0,*(long *)(puVar14 + 2) + (long)(int)uVar15 * 0x78,0);
        lVar27 = *(long *)PTR_DAT_04bbd7e8;
        iVar3 = *(int *)(lVar27 + 0x1f8);
        if (iVar3 != 0) {
          uVar17 = *(undefined4 *)(lVar27 + 0x1dc);
          uVar11 = *(undefined8 *)(param_2 + 0xb8);
          uVar30 = (**(code **)PTR_DAT_04bbd560)(lVar27 + 0x200);
          (**(code **)PTR_DAT_04bbd568)(uVar11,uVar17,*(undefined4 *)(lVar27 + 0x1d8),iVar3,uVar30);
        }
      }
      iVar26 = iVar26 + 1;
    } while ((iVar9 != iVar26) && (iVar26 < *(int *)(param_1 + 0x3e0)));
  }
  uVar10 = *(undefined8 *)
            (*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x488) + 8) + 0x18);
  FUN_03907810(uVar10,param_2);
  uVar30 = *(undefined8 *)(param_2 + 0xb8);
  lVar24 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar30,0x10,lVar24 + 0xa84);
  (**(code **)PTR_DAT_04bcf1b0)(uVar30,0x10,lVar24 + 0xac8);
  puVar8 = PTR_DAT_04bcf1e8;
  iVar9 = *(int *)(lVar24 + 0xa70);
  if (iVar9 != 0) {
    lVar24 = *(long *)(lVar24 + 0xa78);
    uVar34 = 0;
    uVar23 = 0;
    do {
      lVar27 = *(long *)(lVar24 + (-(uVar23 >> 0x1f) & 0xfffffff800000000 | uVar23 << 3));
      if (lVar27 != 0) {
        uVar11 = (**(code **)PTR_DAT_04bbd560)(lVar27 + 8);
        (**(code **)puVar8)(uVar30,uVar34 & 0xffffffff,uVar11,*(undefined4 *)(lVar27 + 0x118));
      }
      uVar34 = uVar23 + 1;
      uVar23 = uVar34 & 0xffffffff;
    } while (iVar9 != (int)uVar34);
  }
  iVar9 = *(int *)(param_1 + 0x3d0);
  if ((iVar9 != 0) && (0 < *(int *)(param_1 + 0x3e0))) {
    lVar24 = *(long *)(param_1 + 0x3d8);
    iVar26 = 0;
    do {
      if (*(int *)(lVar24 + (long)iVar26 * 0x50 + 0x30) == 1) {
        puVar14 = (uint *)(lVar24 + (long)iVar26 * 0x50);
        uVar15 = param_3;
        if (*puVar14 <= param_3) {
          uVar15 = 0;
        }
        FUN_01557430(uVar10,param_2,0,*(long *)(puVar14 + 2) + (long)(int)uVar15 * 0x78,0);
        lVar27 = *(long *)PTR_DAT_04bbd7e8;
        iVar3 = *(int *)(lVar27 + 0x1570);
        if (iVar3 != 0) {
          uVar17 = *(undefined4 *)(lVar27 + 0x1554);
          uVar11 = *(undefined8 *)(param_2 + 0xb8);
          uVar30 = (**(code **)PTR_DAT_04bbd560)(lVar27 + 0x1578);
          (**(code **)PTR_DAT_04bbd568)(uVar11,uVar17,*(undefined4 *)(lVar27 + 0x1550),iVar3,uVar30)
          ;
        }
      }
      iVar26 = iVar26 + 1;
    } while ((iVar9 != iVar26) && (iVar26 < *(int *)(param_1 + 0x3e0)));
  }
  puVar8 = PTR_DAT_04bbd510;
  uVar15 = *(uint *)(*(long *)(lVar22 + 0x350) + 0x58);
  if (uVar15 != 0xffffffff) {
    lVar24 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar24 + 0x5c8) >> 3 & 1) == 0) {
      uVar19 = uVar15 - *(ushort *)(lVar24 + 0x3da);
      if (*(uint *)(lVar24 + 0x368) <= uVar19) {
        uVar19 = 0;
      }
      if ((*(uint *)(*(long *)(lVar24 + 0x370) + (long)(int)uVar19 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar15 & 0x3f);
        goto LAB_03aa5c78;
      }
    }
    if ((*(uint *)(lVar24 + 0x5c8) >> 5 & 1) == 0) {
      uVar16 = 0x112;
      uVar17 = 0x12;
    }
    else {
      uVar16 = 0x111;
      uVar17 = 0x11;
    }
    if ((*(uint *)(lVar24 + 800) & 2) != 0) {
      uVar17 = uVar16;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar17);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_03aa5c78:
  uVar5 = *(ushort *)(lVar20 + 0x38) >> (ulong)(*(byte *)(lVar20 + 0xbe) & 0x1f);
  uVar6 = (uint)uVar5;
  uVar19 = (uint)*(ushort *)(lVar20 + 0x3a);
  uVar7 = (uint)(*(ushort *)(lVar20 + 0x3a) >> (ulong)(*(byte *)(lVar20 + 0xbe) & 0x1f));
  uVar15 = *(uint *)(lVar21 + 0xc0);
  if (uVar5 < 2) {
    uVar6 = 1;
  }
  if (*(short *)(lVar20 + 0x42) != 3) {
    uVar19 = 1;
  }
  if (uVar19 <= uVar7) {
    uVar19 = uVar7;
  }
  uVar19 = uVar19 >> (ulong)(uVar15 & 0x1f);
  if ((*(char *)(lVar21 + 0x60) != '\0') && (*(int *)(lVar21 + 0x20) == 0)) {
    uVar15 = uVar15 + 1;
  }
  uVar6 = uVar6 >> (ulong)(uVar15 & 0x1f);
  if (uVar6 != 0 && uVar19 != 0) {
    uVar25 = uVar6;
  }
  lVar20 = lVar22 + 0x5a0;
  *(char **)(lVar22 + 0x8e8) = "merge buffer";
  if (uVar6 != 0 && uVar19 != 0) {
    uVar18 = uVar19;
  }
  lVar27 = *(long *)puVar8;
  local_1b8 = PTR_DAT_04bb2020 + 0x10;
  local_1b0 = "merge buffer";
  lVar24 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar24 == 0) {
    local_9c = nn::os::GetCurrentCoreNumber();
  }
  else {
    local_9c = (int)lVar24 + -1;
  }
  auVar40 = FUN_03948e10(lVar27,param_2,lVar27 + (long)local_9c * 0x290 + 0x10,&local_1b8,0x1a,1,
                         uVar25,uVar18,1,0,1,0,1,0,0,0);
  FUN_03aa14d0(lVar20,auVar40._8_8_,auVar40._0_8_);
  *(undefined1 *)(lVar22 + 0x8f8) = 1;
  *(undefined1 *)(lVar22 + 0x8fa) = 0;
  puVar32 = (undefined8 *)PTR_DAT_04bbd510;
  if (*(int *)(lVar21 + 0x20) == 0) {
    uVar25 = 0;
    param_3 = *(uint *)(param_1 + 0x18) & param_3;
    if (*(uint *)(param_1 + 0x1b8) <= param_3) {
      param_3 = 0;
    }
    lVar24 = *(long *)(*(long *)(param_1 + 0x1c0) + (long)(int)param_3 * 8);
    uVar18 = 1;
    uVar15 = *(uint *)(lVar24 + 0x148);
    if (*(uint *)(lVar22 + 0x580) < 2) {
      uVar19 = 0;
    }
    else {
      iVar9 = *(int *)(lVar22 + 0x584);
      uVar19 = 0;
      if (iVar9 != 0) {
        puVar2 = PTR_DAT_04bb2020 + 0x10;
        uVar19 = *(uint *)(lVar22 + 0x580);
        uVar18 = 0;
        do {
          uVar25 = uVar18;
          puVar8 = PTR_DAT_04bbd510;
          uVar18 = uVar25 + 1;
          if ((int)*(uint *)(lVar22 + 0x900) <= (int)uVar18) {
            if (1 < uVar18) goto LAB_03aa5ff0;
            uVar25 = 0;
            uVar19 = 0;
            uVar18 = 1;
            goto LAB_03aa5ff4;
          }
          lVar27 = *(long *)(lVar22 + 0x908);
          if (*(uint *)(lVar22 + 0x900) <= uVar18) {
            uVar18 = 0;
          }
          lVar28 = lVar27 + (ulong)uVar18 * 0x360;
          *(char **)(lVar28 + 0x348) = "reduce";
          lVar31 = *(long *)puVar8;
          local_1b0 = "reduce";
          local_1b8 = puVar2;
          lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
          if (lVar12 == 0) {
            local_9c = nn::os::GetCurrentCoreNumber();
          }
          else {
            local_9c = (int)lVar12 + -1;
          }
          auVar40 = FUN_03948e10(lVar31,param_2,lVar31 + (long)local_9c * 0x290 + 0x10,&local_1b8,
                                 0x1a,1,uVar19 >> 1,iVar9,1,0,1,0,1,0,0,0);
          FUN_03aa14d0(lVar28,auVar40._8_8_,auVar40._0_8_);
          lVar27 = lVar27 + (ulong)uVar18 * 0x360;
          *(undefined1 *)(lVar27 + 0x358) = 1;
          *(undefined1 *)(lVar27 + 0x35a) = 0;
          bVar1 = 3 < uVar19;
          uVar19 = uVar19 >> 1;
          uVar18 = uVar25 + 1;
        } while (bVar1);
        uVar18 = uVar25 + 2;
        uVar25 = uVar25 + 1;
LAB_03aa5ff0:
        uVar19 = 1;
      }
    }
LAB_03aa5ff4:
    puVar32 = (undefined8 *)PTR_DAT_04bbd510;
    if ((int)uVar18 <= (int)uVar15) {
      uVar15 = uVar25;
    }
    lVar27 = param_1 + 0x458;
    uVar10 = FUN_038e4d90(lVar27,param_2);
    if ((int)uVar15 < (int)uVar19) {
      FUN_038e4d90(lVar27,param_2);
    }
    else {
      lVar12 = lVar20;
      if (*(char *)(lVar24 + 0x60) == '\0') {
        uVar25 = uVar19;
        if (*(uint *)(lVar22 + 0x900) <= uVar19) {
          uVar25 = 0;
        }
        lVar12 = *(long *)(lVar22 + 0x908) + (ulong)uVar25 * 0x360;
      }
      local_1b8 = &DAT_3f8000003f800000;
      local_1b0 = &DAT_3f8000003f800000;
      FUN_03aa6320(0x3f800000,uVar10,param_2,lVar12,lVar13,0xffffffff,1,&local_1b8,0);
      uVar10 = FUN_006e9528(&local_1b8,"reduce_%d",uVar19);
      iVar9 = uVar15 - uVar19;
      if (iVar9 != 0) {
        iVar26 = 0;
        do {
          uVar18 = uVar19 + iVar26;
          uVar25 = uVar18 + 1;
          local_1b8 = &DAT_3f8000003f800000;
          local_1b0 = &DAT_3f8000003f800000;
          if (*(uint *)(lVar22 + 0x900) <= uVar18) {
            uVar18 = 0;
          }
          lVar13 = lVar20;
          if (*(char *)(lVar24 + 0x60) == '\0' || iVar26 != 0) {
            lVar13 = *(long *)(lVar22 + 0x908) + (long)(int)uVar18 * 0x360;
          }
          uVar18 = uVar25;
          if (*(uint *)(lVar22 + 0x900) <= uVar25) {
            uVar18 = 0;
          }
          FUN_03aa6320(0x3f800000,uVar10,param_2,
                       *(long *)(lVar22 + 0x908) + (long)(int)uVar18 * 0x360,lVar13,0xffffffff,1,
                       &local_1b8,0);
          uVar10 = FUN_006e9528(&local_1b8,"reduce_%d",uVar25);
          iVar26 = iVar26 + 1;
        } while (iVar9 != iVar26);
      }
      uVar10 = FUN_038e4d90(lVar27,param_2);
      puVar32 = (undefined8 *)PTR_DAT_04bbd510;
      iVar26 = 0;
      do {
        if (*(char *)(lVar24 + 0x60) == '\0' || iVar26 != 0) {
          uVar25 = uVar19 + iVar26;
          uVar30 = 2;
          if (*(uint *)(lVar22 + 0x900) <= uVar25) {
            uVar25 = 0;
          }
          lVar13 = *(long *)(lVar22 + 0x908) + (long)(int)uVar25 * 0x360;
        }
        else {
          uVar30 = 1;
          lVar13 = lVar20;
        }
        local_1b0 = &DAT_3f8000003f800000;
        local_1b8 = &DAT_3f8000003f800000;
        uVar10 = FUN_03aa6320(0x3f800000,uVar10,param_2,lVar13,lVar13,uVar30,1,&local_1b8,0);
        iVar26 = iVar26 + 1;
      } while (iVar9 + 1 != iVar26);
      do {
        if (*(char *)(lVar24 + 0x60) != '\0' && uVar19 == uVar15) break;
        lVar20 = lVar27;
        if (uVar19 != uVar15) {
          lVar20 = param_1 + 0x4cc;
        }
        FUN_038e4d90(lVar20,param_2);
        fVar36 = (float)(int)uVar15;
        fVar39 = *(float *)(lVar24 + 0x174);
        fVar37 = *(float *)(lVar24 + 0x16c);
        fVar38 = *(float *)(lVar24 + 0x170);
        fVar35 = powf(*(float *)(lVar24 + 0x168) * fVar39,fVar36);
        fVar37 = powf(fVar37 * fVar39,fVar36);
        fVar36 = powf(fVar38 * fVar39,fVar36);
        local_1b8 = (undefined1 *)CONCAT44(fVar37,fVar35);
        local_1b0 = (char *)CONCAT44(fVar39,fVar36);
        FUN_03aa6320(0x3f800000);
        bVar1 = (int)uVar19 < (int)uVar15;
        uVar15 = uVar15 - 1;
      } while (bVar1);
    }
    iVar9 = *(int *)(lVar22 + 0x900);
    if (iVar9 != 0) {
      iVar26 = 0;
      lVar20 = *(long *)(lVar22 + 0x908);
      do {
        lVar13 = lVar20 + (long)iVar26 * 0x360;
        if (*(char *)(lVar13 + 0x358) != '\0') {
          FUN_039499cc(*puVar32,*(undefined8 *)(lVar20 + (long)iVar26 * 0x360 + 8));
        }
        lVar24 = lVar20 + (long)iVar26 * 0x360;
        *(undefined1 *)(lVar13 + 0x358) = 0;
        *(undefined8 *)(lVar24 + 8) = 0;
        *(undefined1 *)(lVar24 + 0x35a) = 0;
        iVar26 = iVar26 + 1;
      } while (iVar9 != iVar26);
    }
  }
  if (*(char *)(lVar21 + 0xe0) == '\0') {
    if (*(char *)(lVar22 + 0x598) != '\0') {
      FUN_039499cc(*puVar32,*(undefined8 *)(lVar22 + 0x248));
    }
    *(undefined8 *)(lVar22 + 0x248) = 0;
    *(undefined1 *)(lVar22 + 0x598) = 0;
    *(undefined1 *)(lVar22 + 0x59a) = 0;
  }
  if (*(char *)(lVar22 + 0xc68) != '\0') {
    FUN_039499cc(*puVar32,*(undefined8 *)(lVar22 + 0x918));
  }
  *(undefined8 *)(lVar22 + 0x918) = 0;
  *(undefined1 *)(lVar22 + 0xc68) = 0;
  *(undefined1 *)(lVar22 + 0xc6a) = 0;
  if (*(char *)(lVar22 + 0x1328) != '\0') {
    FUN_039499cc(*puVar32,*(undefined8 *)(lVar22 + 0xfd8));
  }
  *(undefined8 *)(lVar22 + 0xfd8) = 0;
  *(undefined1 *)(lVar22 + 0x132a) = 0;
  puVar8 = PTR_DAT_04bbd500;
  *(char *)(lVar22 + 0x1328) = '\0';
  local_298 = puVar8 + 0x10;
  FUN_038fd0e0(local_240);
  return;
}


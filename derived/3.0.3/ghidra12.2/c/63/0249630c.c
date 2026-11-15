
uint FUN_0249630c(long param_1,float *param_2,ulong param_3)

{
  undefined *puVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  float *pfVar7;
  ulong uVar8;
  undefined8 *puVar9;
  byte bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined *local_2a8;
  undefined *puStack_2a0;
  undefined *local_290;
  byte local_27c [4];
  int local_278 [10];
  undefined8 local_250;
  float local_248;
  float local_244;
  undefined4 local_240;
  float local_23c;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_22c;
  undefined2 local_224;
  float local_220;
  float fStack_21c;
  undefined1 auStack_1f8 [88];
  undefined1 auStack_1a0 [88];
  undefined1 local_148;
  undefined1 local_118;
  undefined4 local_114;
  undefined4 local_108;
  float local_fc;
  float fStack_f8;
  float local_f4;
  ulong local_f0;
  float local_e8;
  float fStack_e4;
  float local_e0 [3];
  float local_d4;
  float local_d0;
  float local_cc;
  undefined *local_c8;
  char *pcStack_c0;
  float local_9c;
  float fStack_98;
  float local_94;
  
  lVar6 = FUN_0251e98c(1);
  pfVar7 = (float *)(**(code **)(*(long *)(lVar6 + 0x2d0) + 0xf0))(lVar6 + 0x2d0);
  puVar1 = PTR_DAT_04bb2d00;
  fVar17 = *pfVar7;
  local_238 = (ulong)local_238._4_4_ << 0x20;
  pfVar7 = (float *)(PTR_DAT_04bb2d00 + ((ulong)((uint)param_2[3] >> 0x14) & 0xff0));
  fVar12 = 10.0;
  if (*(char *)(param_2 + 4) != '\0') {
    fVar12 = 9.9;
  }
  local_240 = 0x3f800000;
  fVar11 = (float)((uint)param_2[3] & 0xffffff) * 5.9604645e-08;
  fVar13 = *pfVar7 + fVar11 * pfVar7[1];
  fVar11 = pfVar7[2] + fVar11 * pfVar7[3];
  fVar15 = fVar13 * 0.0;
  local_9c = *param_2 + fVar15 * 0.0 + fVar11 * 0.0 + fVar12 * (fVar13 + 0.0);
  local_248 = param_2[2] + (fVar11 * 0.0 * 0.0 - fVar13 * 0.0) + fVar12 * fVar11;
  fStack_98 = param_2[1] + (fVar15 * 0.0 + 1.0) * 0.0 + fVar11 * 0.0 * 0.0 + fVar12 * fVar15;
  local_250 = (undefined *)CONCAT44(fStack_98,local_9c);
  local_94 = local_248;
  lVar6 = FUN_0251e98c(1);
  pfVar7 = (float *)(**(code **)(*(long *)(lVar6 + 0x2a0) + 0xf0))(lVar6 + 0x2a0);
  local_23c = 1.45735e-43;
  if (*(char *)((long)param_2 + 0x11) != '\0') {
    local_23c = 1.34525e-43;
  }
  local_244 = *pfVar7 * 0.9;
  iVar3 = FUN_016ed290(&local_250,0,0,0);
  uVar5 = 0;
  if (iVar3 != 0) goto LAB_02496bcc;
  if ((*(char *)((long)param_2 + 0x11) == '\0') ||
     ((uVar8 = FUN_02496db0(param_2), (uVar8 & 1) == 0 &&
      (uVar8 = FUN_02496db0(&local_9c), (uVar8 & 1) == 0)))) {
    iVar3 = FUN_016f33f0(fVar17,param_2,&local_9c);
    if (*(char *)(param_2 + 4) == '\0') {
      iVar4 = -iVar3;
      if (-1 < iVar3) {
        iVar4 = iVar3;
      }
      if (iVar4 == 1) {
        uVar8 = FUN_016e9af4(fVar17,param_2,0,0);
        uVar5 = 0;
        if ((uVar8 & 1) == 0) goto LAB_02496bcc;
        uVar8 = FUN_016e9af4(fVar17,&local_9c,0,0);
        uVar5 = 0;
        if ((uVar8 & 1) == 0) goto LAB_02496bcc;
LAB_02496644:
        fVar11 = (float)FUN_016e026c(0,&local_9c,0,0);
        uVar5 = 0;
        fVar11 = fVar11 - *(float *)(*(long *)(param_1 + 0x68) + 0x27c);
        fVar12 = -fVar11;
        if (0.0 <= fVar11) {
          fVar12 = fVar11;
        }
        if (fVar12 < 10.0) goto LAB_02496bcc;
        lVar6 = FUN_0251e98c(1);
        pfVar7 = (float *)(**(code **)(*(long *)(lVar6 + 0x210) + 0xf0))(lVar6 + 0x210);
        pbVar2 = (byte *)(param_1 + 0x1ee8);
        local_250 = (undefined *)CONCAT44(fStack_98,local_9c);
        local_23c = *(float *)(param_1 + 0x230);
        local_22c = 0x1000000000000;
        local_230 = CONCAT13(local_230._3_1_,0x101);
        bVar10 = *pbVar2;
        local_244 = *pfVar7 * 0.8;
        if (7 < bVar10) {
          bVar10 = 0xff;
        }
        local_248 = local_94;
        local_240 = CONCAT31(local_240._1_3_,bVar10);
        local_238 = 0xbf8000000000001f;
        uVar8 = FUN_0251fad0(&local_250,0);
        uVar5 = 0;
        if ((uVar8 & 1) != 0) goto LAB_02496bcc;
        lVar6 = FUN_029156e0();
        if (*(int *)(lVar6 + 0x38) != -0x17df00c3) {
LAB_02496798:
          fVar15 = 0.0;
          local_e0[1] = 0.0;
          local_d0 = 0.0;
          fVar13 = (*param_2 + local_9c) * 0.5;
          pfVar7 = (float *)(puVar1 + (ulong)((int)param_2[3] + 0x40000000U >> 0x18) * 0x10);
          fVar11 = (param_2[2] + local_94) * 0.5;
          fVar12 = (float)((uint)param_2[3] & 0xffffff) * 5.9604645e-08;
          local_d4 = fVar13 + *pfVar7 + fVar12 * pfVar7[1];
          local_cc = fVar11 + pfVar7[2] + fVar12 * pfVar7[3];
          fVar12 = SQRT(local_d4 * local_d4 + 0.0 + local_cc * local_cc);
          if (0.0 < fVar12) {
            fVar12 = 1.0 / fVar12;
            local_d4 = local_d4 * fVar12;
            local_d0 = fVar12 * 0.0;
            local_cc = local_cc * fVar12;
          }
          fVar14 = local_cc;
          fVar12 = local_d4;
          local_e8 = *(float *)(*(long *)(param_1 + 0x68) + 0x280);
          fStack_e4 = 0.0;
          local_f0 = *(ulong *)(*(long *)(param_1 + 0x68) + 0x278) & 0xffffffff;
          local_e0[0] = fVar13;
          local_e0[2] = fVar11;
          FUN_038e7f00(&local_f0,local_e0,&fStack_e4);
          fVar13 = fVar13 + fStack_e4 * fVar12;
          fVar11 = fVar11 + fStack_e4 * fVar14;
          fVar14 = (float)local_f0 - fVar13;
          fVar12 = local_e8 - fVar11;
          fVar16 = SQRT(fVar14 * fVar14 + 0.0 + fVar12 * fVar12);
          if (0.0 < fVar16) {
            fVar16 = 1.0 / fVar16;
            fVar14 = fVar14 * fVar16;
            fVar12 = fVar12 * fVar16;
            fVar15 = fVar16 * 0.0 * 5.0 + 0.0;
          }
          local_f4 = fVar11 + fVar12 * 5.0;
          local_fc = fVar13 + fVar14 * 5.0;
          fStack_f8 = fVar15;
          fStack_f8 = (float)FUN_016e026c(0,&local_fc,0,0);
          lVar6 = FUN_0251e98c(1);
          pfVar7 = (float *)(**(code **)(*(long *)(lVar6 + 0x210) + 0xf0))(lVar6 + 0x210);
          fVar12 = *pfVar7;
          uVar8 = FUN_0252b6b0(fVar12 * 0.8,param_2,pbVar2,1,1,0,1);
          uVar5 = 0;
          if ((uVar8 & 1) != 0) goto LAB_02496bcc;
          uVar8 = FUN_01735670(fVar12 * 0.8,0xbf800000,param_2,*(undefined4 *)(param_1 + 0x230),
                               *(undefined4 *)PTR_DAT_04bb3238,1,1,0,1,0,0,1);
          uVar5 = 0;
          if ((uVar8 & 1) != 0) goto LAB_02496bcc;
          local_248 = param_2[2];
          local_240 = 0x3f800000;
          local_250 = *(undefined **)param_2;
          local_238 = local_238 & 0xffffffff00000000;
          lVar6 = FUN_0251e98c(1);
          pfVar7 = (float *)(**(code **)(*(long *)(lVar6 + 0x2a0) + 0xf0))(lVar6 + 0x2a0);
          local_23c = 1.66755e-43;
          local_244 = *pfVar7 * 0.9;
          iVar4 = FUN_016ed290(&local_250,0,0,0);
          uVar5 = 0;
          if (iVar4 != 0) goto LAB_02496bcc;
          fVar11 = (float)FUN_016e026c(0,param_2,0,0);
          fVar12 = (float)FUN_016e026c(0,&local_9c,0,0);
          fVar11 = fVar11 - fVar12;
          uVar5 = 0;
          fVar12 = -fVar11;
          if (0.0 <= fVar11) {
            fVar12 = fVar11;
          }
          fVar12 = fVar12 + -15.0;
          fVar11 = -fVar12;
          if (0.0 <= fVar12) {
            fVar11 = fVar12;
          }
          if (0.61 <= fVar11) goto LAB_02496bcc;
          if ((*(char *)(param_2 + 4) != '\0') && (*(char *)((long)param_2 + 0x11) != '\0')) {
            puVar9 = (undefined8 *)FUN_016e1014(param_2,0,0);
            local_c8 = (undefined *)*puVar9;
            uVar8 = FUN_016e4d80(&local_c8);
            if (((uVar8 & 1) != 0) || (uVar8 = FUN_016e4e3c(&local_c8), (uVar8 & 1) != 0)) {
              FUN_0124c030(&local_250,&local_c8);
              local_278[0] = FUN_0124fd04(&local_250);
              if ((local_278[0] - 1U & 0xfffffff9) == 0) goto LAB_02496bc8;
            }
          }
          fVar12 = (float)FUN_016e026c(0,&local_9c,0,0);
          uVar8 = FUN_016e0e30(0,&local_9c,0);
          if ((((uVar8 & 1) != 0) || (uVar8 = FUN_016ea82c(0,&local_9c), fVar12 <= 44.5)) ||
             ((uVar8 & 1) != 0)) {
            if ((param_3 & 1) == 0) {
              FUN_016e23f8(&local_c8,fVar17 * 0.99,&local_9c);
              FUN_016e23f8(local_278,fVar17 * 0.99,param_2);
              lVar6 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*pbVar2 * 0x740;
              if (7 < *pbVar2) {
                lVar6 = *(long *)PTR_DAT_04bb4f78 + 0x20;
              }
              *(undefined8 *)(lVar6 + 0x420) = 0x100000000;
              puVar1 = PTR_DAT_04bbc1a0;
              *(undefined4 *)(lVar6 + 0x4c0) = 0;
              local_27c[0] = *pbVar2;
              puStack_2a0 = PTR_DAT_04bb2010 + 0x10;
              if (7 < local_27c[0]) {
                local_27c[0] = 0xff;
              }
              local_2a8 = puVar1 + 0x10;
              local_290 = puStack_2a0;
              uVar5 = FUN_02300ec8(lVar6 + 0x4c8,local_27c,&local_2a8);
              if ((uVar5 & 1) != 0) {
                local_244 = *param_2;
                local_248 = local_f4;
                local_23c = param_2[2];
                local_250 = (undefined *)CONCAT44(fStack_f8,local_fc);
                local_2a8 = puVar1 + 0x10;
                local_240 = FUN_0231eef4(param_1,param_2,0);
                local_238 = CONCAT44(local_9c,param_2[3]);
                local_22c = CONCAT44(local_22c._4_4_,local_94);
                local_230 = FUN_0231eef4(param_1,&local_9c,0);
                local_224 = *(undefined2 *)(param_2 + 4);
                local_22c = CONCAT44(iVar3,(undefined4)local_22c);
                local_220 = param_2[5];
                fStack_21c = param_2[6];
                FUN_02496fb8(param_1,&local_250);
              }
            }
            else {
              uVar5 = 1;
            }
          }
          else {
            uVar5 = 1;
            if ((param_3 & 1) == 0) {
              FUN_0257a010(&local_250);
              puVar1 = PTR_DAT_04bb2020 + 0x10;
              pcStack_c0 = "Player_ToolActionError";
              local_c8 = puVar1;
              FUN_006e43a0(&local_250,&local_c8);
              pcStack_c0 = "DisableLadder";
              local_c8 = puVar1;
              FUN_006e43a0(auStack_1f8,&local_c8);
              FUN_006e43a0(auStack_1a0,PTR_PTR_04bb2238);
              local_148 = 0;
              local_114 = 6;
              local_118 = 1;
              local_108 = 0x3c;
              FUN_024480f0(param_1,&local_250);
              uVar5 = 1;
            }
          }
          goto LAB_02496bcc;
        }
        lVar6 = FUN_0251e98c(1);
        pfVar7 = (float *)(**(code **)(*(long *)(lVar6 + 0x210) + 0xf0))(lVar6 + 0x210);
        fVar12 = *pfVar7;
        FUN_012e1de8(fVar12 * 0.8,&local_250,&local_9c);
        uVar8 = FUN_03782a40(&local_250);
        if ((uVar8 & 1) != 0) {
          FUN_012e1de8(fVar12 * 0.8,&local_c8,param_2);
          uVar8 = FUN_03782a40(&local_c8);
          if ((uVar8 & 1) != 0) goto LAB_02496798;
        }
      }
    }
    else {
      local_250 = PTR_DAT_04bb2018 + 0x10;
      fVar12 = (local_9c + *param_2) * 0.5;
      fVar11 = (local_94 + param_2[2]) * 0.5;
      local_248 = (float)((int)((float)(int)fVar12 / 10.0) - (uint)(fVar12 < 0.0));
      local_244 = (float)((int)((float)(int)fVar11 / 10.0) - (uint)(fVar11 < 0.0));
      uVar8 = FUN_01317ff0(&local_250,3);
      if ((uVar8 & 1) != 0) {
        fVar11 = fStack_98 - param_2[1];
        fVar12 = -fVar11;
        if (0.0 <= fVar11) {
          fVar12 = fVar11;
        }
        if (fVar12 <= 30.0) {
          uVar8 = FUN_016e9c80(fVar17 * 0.9,param_2,0,0,0);
          uVar5 = 0;
          if ((uVar8 & 1) == 0) goto LAB_02496bcc;
          uVar8 = FUN_016e9c80(fVar17 * 0.9,&local_9c,0,0,0);
          uVar5 = 0;
          if ((uVar8 & 1) == 0) goto LAB_02496bcc;
          fVar12 = (float)FUN_016e026c(0,param_2,0,0);
          fVar11 = (float)FUN_016e026c(0,&local_9c,0,0);
          iVar3 = -1;
          if (fVar12 <= fVar11) {
            iVar3 = 1;
          }
          goto LAB_02496644;
        }
      }
    }
  }
LAB_02496bc8:
  uVar5 = 0;
LAB_02496bcc:
  return uVar5 & 1;
}


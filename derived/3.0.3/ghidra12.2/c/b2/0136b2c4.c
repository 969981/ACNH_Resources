
/* WARNING: Removing unreachable block (ram,0x0136b8d0) */
/* WARNING: Removing unreachable block (ram,0x0136b764) */
/* WARNING: Removing unreachable block (ram,0x0136b5fc) */
/* WARNING: Removing unreachable block (ram,0x0136b494) */
/* WARNING: Removing unreachable block (ram,0x0136b334) */
/* WARNING: Removing unreachable block (ram,0x0136b344) */
/* WARNING: Removing unreachable block (ram,0x0136b4a4) */
/* WARNING: Removing unreachable block (ram,0x0136b60c) */
/* WARNING: Removing unreachable block (ram,0x0136b774) */
/* WARNING: Removing unreachable block (ram,0x0136b8e0) */

undefined8 FUN_0136b2c4(byte *param_1,float *param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s8;
  float fVar9;
  float unaff_s10;
  undefined4 local_94;
  int iStack_90;
  byte local_8c;
  byte local_8b;
  undefined **local_88;
  float **ppfStack_80;
  float *local_68;
  undefined4 *puStack_60;
  float *local_58;
  float local_50;
  long local_48;
  
  bVar1 = *param_1;
  if ((bVar1 >> 1 & 1) == 0) {
    return 0;
  }
  iStack_90 = *(int *)(param_1 + 0xc);
  if (iStack_90 < 0) {
    fVar9 = NAN;
LAB_0136b450:
    iStack_90 = *(int *)(param_1 + 0x18);
    if (-1 < iStack_90) {
      local_94 = *(undefined4 *)(param_1 + 4);
      bVar1 = *param_1;
      local_8c = bVar1 >> 3 & 1;
      local_8b = bVar1 >> 2 & 1;
      if ((bVar1 >> 2 & 1) == 0) {
        local_48 = *(long *)(*(long *)(DAT_0519d040 + 0x1f8) + 0xc0);
        if (local_48 != 0) {
          local_50 = *(float *)(param_1 + 0x20);
          goto LAB_0136b4cc;
        }
LAB_0136b538:
        uVar4 = 0;
      }
      else {
        local_48 = 0;
        local_50 = -0.0;
LAB_0136b4cc:
        local_58 = (float *)(param_1 + 0x1c);
        local_50 = local_50 + *local_58;
        bVar2 = false;
        bVar3 = true;
        if (-1.1920929e-07 <= local_50) {
          bVar2 = false;
          bVar3 = true;
          if (!NAN(local_50)) {
            bVar2 = local_50 == 1.1920929e-07;
            bVar3 = 1.1920929e-07 <= local_50;
          }
        }
        if (!bVar3 || bVar2) goto LAB_0136b538;
        puStack_60 = &local_94;
        ppfStack_80 = &local_68;
        param_2[0] = 0.0;
        param_2[1] = 0.0;
        param_2[2] = 0.0;
        local_88 = &PTR_LAB_049938c0;
        local_68 = param_2;
        FUN_01377ef0(&local_88,&local_94);
        uVar4 = FUN_01378470(param_2 + 3,param_2 + 6,param_2);
      }
      fVar6 = *param_2;
      if (((fVar6 < -1.1920929e-07) || (1.1920929e-07 < fVar6)) ||
         ((fVar7 = param_2[1], fVar7 < -1.1920929e-07 || (1.1920929e-07 < fVar7)))) {
        if (NAN(fVar9)) {
          fVar7 = param_2[1];
          fVar8 = param_2[2];
          goto LAB_0136b59c;
        }
      }
      else {
        fVar8 = param_2[2];
        if ((NAN(fVar9)) && (1.1920929e-07 < fVar8 || fVar8 < -1.1920929e-07)) {
LAB_0136b59c:
          fVar9 = fVar6;
          unaff_s8 = fVar7;
          unaff_s10 = fVar8;
        }
      }
      if ((uVar4 & 1) != 0) goto LAB_0136b9f0;
    }
    iStack_90 = *(int *)(param_1 + 0x24);
    if (-1 < iStack_90) {
      local_94 = *(undefined4 *)(param_1 + 4);
      bVar1 = *param_1;
      local_8c = bVar1 >> 3 & 1;
      local_8b = bVar1 >> 2 & 1;
      if ((bVar1 >> 2 & 1) == 0) {
        local_48 = *(long *)(*(long *)(DAT_0519d040 + 0x1f8) + 0xc0);
        if (local_48 != 0) {
          local_50 = *(float *)(param_1 + 0x2c);
          goto LAB_0136b634;
        }
LAB_0136b6a0:
        uVar4 = 0;
      }
      else {
        local_48 = 0;
        local_50 = -0.0;
LAB_0136b634:
        local_58 = (float *)(param_1 + 0x28);
        local_50 = local_50 + *local_58;
        bVar2 = false;
        bVar3 = true;
        if (-1.1920929e-07 <= local_50) {
          bVar2 = false;
          bVar3 = true;
          if (!NAN(local_50)) {
            bVar2 = local_50 == 1.1920929e-07;
            bVar3 = 1.1920929e-07 <= local_50;
          }
        }
        if (!bVar3 || bVar2) goto LAB_0136b6a0;
        puStack_60 = &local_94;
        ppfStack_80 = &local_68;
        param_2[0] = 0.0;
        param_2[1] = 0.0;
        param_2[2] = 0.0;
        local_88 = &PTR_LAB_049938c0;
        local_68 = param_2;
        FUN_01377ef0(&local_88,&local_94);
        uVar4 = FUN_01378470(param_2 + 3,param_2 + 6,param_2);
      }
      fVar6 = *param_2;
      if ((((fVar6 < -1.1920929e-07) || (1.1920929e-07 < fVar6)) ||
          (fVar7 = param_2[1], fVar7 < -1.1920929e-07)) || (1.1920929e-07 < fVar7)) {
        if (NAN(fVar9)) {
          fVar7 = param_2[1];
          fVar8 = param_2[2];
          goto LAB_0136b704;
        }
      }
      else {
        fVar8 = param_2[2];
        if ((NAN(fVar9)) && (1.1920929e-07 < fVar8 || fVar8 < -1.1920929e-07)) {
LAB_0136b704:
          fVar9 = fVar6;
          unaff_s8 = fVar7;
          unaff_s10 = fVar8;
        }
      }
      if ((uVar4 & 1) != 0) goto LAB_0136b9f0;
    }
    iStack_90 = *(int *)(param_1 + 0x30);
    if (-1 < iStack_90) {
      local_94 = *(undefined4 *)(param_1 + 4);
      bVar1 = *param_1;
      local_8c = bVar1 >> 3 & 1;
      local_8b = bVar1 >> 2 & 1;
      if ((bVar1 >> 2 & 1) == 0) {
        local_48 = *(long *)(*(long *)(DAT_0519d040 + 0x1f8) + 0xc0);
        if (local_48 != 0) {
          local_50 = *(float *)(param_1 + 0x38);
          goto LAB_0136b79c;
        }
LAB_0136b7c0:
        uVar4 = 0;
      }
      else {
        local_48 = 0;
        local_50 = -0.0;
LAB_0136b79c:
        local_58 = (float *)(param_1 + 0x34);
        local_50 = local_50 + *local_58;
        if ((-1.1920929e-07 <= local_50) && (local_50 <= 1.1920929e-07)) goto LAB_0136b7c0;
        puStack_60 = &local_94;
        ppfStack_80 = &local_68;
        param_2[0] = 0.0;
        param_2[1] = 0.0;
        param_2[2] = 0.0;
        local_88 = &PTR_LAB_049938c0;
        local_68 = param_2;
        FUN_01377ef0(&local_88,&local_94);
        uVar4 = FUN_01378470(param_2 + 3,param_2 + 6,param_2);
      }
      fVar6 = *param_2;
      if ((((fVar6 < -1.1920929e-07) || (1.1920929e-07 < fVar6)) ||
          (fVar7 = param_2[1], fVar7 < -1.1920929e-07)) || (1.1920929e-07 < fVar7)) {
        if (NAN(fVar9)) {
          fVar7 = param_2[1];
          fVar8 = param_2[2];
          goto LAB_0136b870;
        }
      }
      else {
        fVar8 = param_2[2];
        if ((NAN(fVar9)) && (1.1920929e-07 < fVar8 || fVar8 < -1.1920929e-07)) {
LAB_0136b870:
          fVar9 = fVar6;
          unaff_s8 = fVar7;
          unaff_s10 = fVar8;
        }
      }
      if ((uVar4 & 1) != 0) goto LAB_0136b9f0;
    }
    iStack_90 = *(int *)(param_1 + 0x3c);
    if (-1 < iStack_90) {
      local_94 = *(undefined4 *)(param_1 + 4);
      bVar1 = *param_1;
      local_8c = bVar1 >> 3 & 1;
      local_8b = bVar1 >> 2 & 1;
      if ((bVar1 >> 2 & 1) == 0) {
        local_48 = *(long *)(*(long *)(DAT_0519d040 + 0x1f8) + 0xc0);
        if (local_48 != 0) {
          local_50 = *(float *)(param_1 + 0x44);
          goto LAB_0136b908;
        }
LAB_0136b92c:
        uVar4 = 0;
      }
      else {
        local_48 = 0;
        local_50 = -0.0;
LAB_0136b908:
        local_58 = (float *)(param_1 + 0x40);
        local_50 = local_50 + *local_58;
        if ((-1.1920929e-07 <= local_50) && (local_50 <= 1.1920929e-07)) goto LAB_0136b92c;
        puStack_60 = &local_94;
        ppfStack_80 = &local_68;
        param_2[0] = 0.0;
        param_2[1] = 0.0;
        param_2[2] = 0.0;
        local_88 = &PTR_LAB_049938c0;
        local_68 = param_2;
        FUN_01377ef0(&local_88,&local_94);
        uVar4 = FUN_01378470(param_2 + 3,param_2 + 6,param_2);
      }
      fVar6 = *param_2;
      if ((((fVar6 < -1.1920929e-07) || (1.1920929e-07 < fVar6)) ||
          (fVar7 = param_2[1], fVar7 < -1.1920929e-07)) || (1.1920929e-07 < fVar7)) {
        if (NAN(fVar9)) {
          fVar7 = param_2[1];
          fVar8 = param_2[2];
          goto LAB_0136b9d4;
        }
      }
      else {
        fVar8 = param_2[2];
        bVar2 = true;
        bVar3 = false;
        if (fVar8 <= 1.1920929e-07) {
          bVar2 = false;
          bVar3 = true;
          if (!NAN(fVar8)) {
            bVar2 = fVar8 < -1.1920929e-07;
            bVar3 = false;
          }
        }
        if ((bVar2 != bVar3) && (NAN(fVar9))) {
LAB_0136b9d4:
          fVar9 = fVar6;
          unaff_s8 = fVar7;
          unaff_s10 = fVar8;
        }
      }
      if ((uVar4 & 1) != 0) goto LAB_0136b9f0;
    }
    uVar5 = 0;
    if (!NAN(fVar9)) {
      *param_2 = fVar9;
      param_2[1] = unaff_s8;
      param_2[2] = unaff_s10;
      param_2[3] = 0.0;
      param_2[4] = 0.0;
      param_2[5] = 0.0;
      param_2[6] = 0.0;
      param_2[7] = 0.0;
      param_2[8] = 0.0;
    }
  }
  else {
    local_8c = bVar1 >> 3 & 1;
    local_94 = *(undefined4 *)(param_1 + 4);
    local_8b = bVar1 >> 2 & 1;
    if ((bVar1 >> 2 & 1) == 0) {
      local_48 = *(long *)(*(long *)(DAT_0519d040 + 0x1f8) + 0xc0);
      if (local_48 != 0) {
        local_50 = *(float *)(param_1 + 0x14);
        goto LAB_0136b378;
      }
LAB_0136b3e4:
      uVar4 = 0;
    }
    else {
      local_48 = 0;
      local_50 = -0.0;
LAB_0136b378:
      local_58 = (float *)(param_1 + 0x10);
      local_50 = local_50 + *local_58;
      bVar2 = false;
      bVar3 = true;
      if (-1.1920929e-07 <= local_50) {
        bVar2 = false;
        bVar3 = true;
        if (!NAN(local_50)) {
          bVar2 = local_50 == 1.1920929e-07;
          bVar3 = 1.1920929e-07 <= local_50;
        }
      }
      if (!bVar3 || bVar2) goto LAB_0136b3e4;
      puStack_60 = &local_94;
      ppfStack_80 = &local_68;
      param_2[0] = 0.0;
      param_2[1] = 0.0;
      param_2[2] = 0.0;
      local_88 = &PTR_LAB_049938c0;
      local_68 = param_2;
      FUN_01377ef0(&local_88,&local_94);
      uVar4 = FUN_01378470(param_2 + 3,param_2 + 6,param_2);
    }
    fVar9 = *param_2;
    unaff_s8 = param_2[1];
    if ((((fVar9 < -1.1920929e-07) || (1.1920929e-07 < fVar9)) || (unaff_s8 < -1.1920929e-07)) ||
       (1.1920929e-07 < unaff_s8)) {
      unaff_s10 = param_2[2];
    }
    else {
      unaff_s10 = param_2[2];
      if ((-1.1920929e-07 <= unaff_s10) && (unaff_s10 <= 1.1920929e-07)) {
        fVar9 = NAN;
      }
    }
    if ((uVar4 & 1) == 0) goto LAB_0136b450;
LAB_0136b9f0:
    uVar5 = 1;
  }
  return uVar5;
}


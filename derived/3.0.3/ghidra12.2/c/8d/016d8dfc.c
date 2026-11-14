
/* WARNING: Removing unreachable block (ram,0x016d9004) */
/* WARNING: Removing unreachable block (ram,0x016d8e90) */
/* WARNING: Removing unreachable block (ram,0x016d91a4) */

void FUN_016d8dfc(long *param_1,undefined8 param_2,float *param_3,float *param_4,undefined8 *param_5
                 )

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  int *piVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_198;
  float local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  long local_178;
  long *local_170;
  undefined *local_168;
  long lStack_160;
  undefined8 local_158;
  long *local_150;
  undefined1 local_55;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  puVar9 = (undefined8 *)param_1[0xc];
  local_178 = 0;
  local_170 = (long *)0x0;
  local_188 = 0;
  uStack_180 = 0;
  if (puVar9 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      puVar9 = &DAT_05240280;
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar9 = &DAT_05240280;
    }
  }
  if (puVar9[0x227] == 0) {
    local_198 = (ulong)(uint)local_198._4_4_ << 0x20;
  }
  else {
    local_198 = CONCAT44(local_198._4_4_,*(uint *)(puVar9 + 0x2d3) >> 1) & 0xffffffff00000001;
    local_168._0_4_ = 0x11;
    uVar4 = FUN_03850890(puVar9[0x227],0x11,&local_188,*(uint *)(puVar9 + 0x2d3) >> 1 & 1);
    if (((uVar4 & 1) != 0) && (local_170 != (long *)0x0)) {
      if (*local_170 == 0) {
        local_55 = 0;
        lStack_160 = (long)&local_158 + 4;
        local_158 = CONCAT35(local_158._5_3_,0x100);
        local_168 = PTR_DAT_04bb21f8 + 0x10;
        lVar7 = *(long *)(local_170[2] + 8);
        FUN_038d1270(&local_168,"%s.as",lVar7 + *(int *)(lVar7 + 0x24) + (long)*(int *)(lVar7 + 8));
      }
      else {
        iVar3 = *(int *)(*local_170 + 8);
        if (iVar3 < 0x60000000) {
          piVar8 = (int *)(*(long *)(local_170[2] + 8) + (long)iVar3);
          if (*piVar8 < 1) goto LAB_016d8fa4;
          piVar8 = (int *)(((ulong)(uint)piVar8[1] & 0xfffffff) + *(long *)(local_170[2] + 8) + 4);
        }
        else {
          uVar6 = iVar3 + 0xa0000000;
          if (*(uint *)(local_178 + 0x80) <= uVar6) {
            uVar6 = 0;
          }
          lVar7 = *(long *)(local_178 + 0x88) + (ulong)uVar6 * 0x32;
          piVar8 = (int *)(lVar7 + (ulong)*(byte *)(lVar7 + 0x20));
        }
        iVar3 = *piVar8;
        if ((iVar3 == 6) || (iVar3 == 4)) {
          local_168 = (undefined *)CONCAT44(local_168._4_4_,iVar3);
          FUN_01509afc(param_2,&local_168);
        }
      }
    }
  }
LAB_016d8fa4:
  puVar9 = (undefined8 *)param_1[0xc];
  local_158 = 0;
  local_150 = (long *)0x0;
  local_168 = (undefined *)0x0;
  lStack_160 = 0;
  if (puVar9 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      puVar9 = &DAT_05240280;
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar9 = &DAT_05240280;
    }
  }
  if (puVar9[0x227] != 0) {
    local_198 = CONCAT44(local_198._4_4_,9);
    uVar4 = FUN_03850a90(puVar9[0x227],9,&local_168,*(uint *)(puVar9 + 0x2d3) >> 1 & 1);
    if ((uVar4 & 1) != 0) {
      (**(code **)*param_5)(param_5,&local_168);
      (**(code **)(*param_1 + 0x298))(param_1,0);
      fVar10 = *param_4;
      fVar11 = param_4[1];
      plVar5 = (long *)param_1[0xd];
      local_190 = param_4[2];
      fVar12 = 1.0;
      if ((local_150 != (long *)0x0) && (lVar7 = *local_150, lVar7 != 0)) {
        fVar12 = *(float *)(lVar7 + 0x18);
        if (fVar12 < 0.0) {
          fVar12 = *(float *)(local_150[1] + 0xc);
        }
        uVar6 = (uint)(fVar12 - *(float *)(lVar7 + 0x14));
        if (uVar6 < 2) {
          uVar6 = 1;
        }
        fVar12 = (float)uVar6;
      }
      fVar12 = SQRT((fVar11 - param_3[1]) * (fVar11 - param_3[1]) +
                    (fVar10 - *param_3) * (fVar10 - *param_3) +
                    (local_190 - param_3[2]) * (local_190 - param_3[2])) / fVar12;
      local_198._0_4_ = (float)plVar5[0x4f];
      local_198._4_4_ = (float)((ulong)plVar5[0x4f] >> 0x20);
      fVar13 = fVar11 - local_198._4_4_;
      fVar14 = fVar10 - (float)local_198;
      fVar15 = local_190 - *(float *)(plVar5 + 0x50);
      fVar16 = SQRT(fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15);
      if (fVar12 <= fVar16) {
        fVar10 = 1.0 / fVar16;
        if (0.0 < fVar16) {
          fVar15 = fVar15 * fVar10;
          fVar13 = fVar13 * fVar10;
          fVar14 = fVar14 * fVar10;
        }
        fVar10 = (float)local_198 + fVar12 * fVar14;
        fVar11 = local_198._4_4_ + fVar12 * fVar13;
        local_190 = *(float *)(plVar5 + 0x50) + fVar12 * fVar15;
      }
      local_198 = CONCAT44(fVar11,fVar10);
      lVar7 = local_198;
      goto LAB_016d9144;
    }
  }
  puVar9 = (undefined8 *)param_1[0xc];
  if (puVar9 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      puVar9 = &DAT_05240280;
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar9 = &DAT_05240280;
    }
  }
  if (puVar9[0x227] == 0) {
    return;
  }
  local_198 = CONCAT44(local_198._4_4_,*(uint *)(puVar9 + 0x2d3) >> 1) & 0xffffffff00000001;
  fVar10 = (float)FUN_03850078(puVar9[0x227],*(uint *)(puVar9 + 0x2d3) >> 1 & 1);
  if (fVar10 <= 3.0) {
    return;
  }
  plVar5 = (long *)param_1[0xd];
  lVar7 = plVar5[0x4f];
  local_190 = *(float *)(plVar5 + 0x50);
  local_198._0_4_ = (float)lVar7;
  if (SQRT((local_190 - param_4[2]) * (local_190 - param_4[2]) +
           ((float)local_198 - *param_4) * ((float)local_198 - *param_4)) <= 0.1) {
    return;
  }
  local_198._4_4_ = (float)((ulong)lVar7 >> 0x20);
  fVar10 = param_3[2];
  if ((((float)local_198 == *param_3) && (local_198._4_4_ == param_3[1])) && (local_190 == fVar10))
  goto LAB_016d9144;
  fVar13 = (float)local_198 - *param_3;
  fVar12 = local_198._4_4_ - param_3[1];
  fVar11 = local_190 - fVar10;
  fVar14 = SQRT(fVar12 * fVar12 + fVar13 * fVar13 + fVar11 * fVar11);
  if (fVar14 < 0.19999999) {
LAB_016d92e4:
    local_198 = *(long *)param_3;
  }
  else {
    fVar14 = fVar14 * 0.25;
    bVar1 = false;
    bVar2 = true;
    if (-1.1920929e-07 <= fVar14) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar14)) {
        bVar1 = fVar14 == 1.1920929e-07;
        bVar2 = 1.1920929e-07 <= fVar14;
      }
    }
    if (!bVar2 || bVar1) goto LAB_016d92e4;
    fVar13 = fVar13 * 0.25;
    fVar12 = fVar12 * 0.25;
    fVar11 = fVar11 * 0.25;
    fVar10 = 10.0;
    if (10.0 < fVar14) {
LAB_016d92a4:
      fVar10 = fVar10 / fVar14;
      fVar13 = fVar13 * fVar10;
      fVar12 = fVar12 * fVar10;
      fVar11 = fVar11 * fVar10;
    }
    else if (fVar14 < 0.19999999) {
      fVar10 = 0.19999999;
      goto LAB_016d92a4;
    }
    local_198 = CONCAT44(local_198._4_4_ - fVar12,(float)local_198 - fVar13);
    fVar10 = local_190 - fVar11;
  }
  lVar7 = local_198;
  local_190 = fVar10;
LAB_016d9144:
  local_198 = lVar7;
  (**(code **)(*plVar5 + 0x100))(plVar5,&local_198);
  return;
}


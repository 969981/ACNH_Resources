
/* WARNING: Removing unreachable block (ram,0x016d8394) */
/* WARNING: Removing unreachable block (ram,0x016d8508) */

void FUN_016d82fc(long param_1,float *param_2,float *param_3,uint *param_4,int param_5,
                 undefined8 *param_6)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
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
  
  if (param_1 == 0) {
    return;
  }
  puVar11 = *(undefined8 **)(param_1 + 0x60);
  local_178 = 0;
  local_170 = (long *)0x0;
  local_188 = 0;
  uStack_180 = 0;
  if (puVar11 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar11 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar11 = &DAT_05240280;
    }
  }
  if (puVar11[0x227] == 0) {
    local_198 = (ulong)(uint)local_198._4_4_ << 0x20;
    goto LAB_016d84a8;
  }
  local_198 = CONCAT44(local_198._4_4_,*(uint *)(puVar11 + 0x2d3) >> 1) & 0xffffffff00000001;
  local_168 = (undefined *)CONCAT44(local_168._4_4_,0x11);
  uVar5 = FUN_03850890(puVar11[0x227],0x11,&local_188,*(uint *)(puVar11 + 0x2d3) >> 1 & 1);
  if (((uVar5 & 1) == 0) || (local_170 == (long *)0x0)) goto LAB_016d84a8;
  if (*local_170 == 0) {
    local_55 = 0;
    lStack_160 = (long)&local_158 + 4;
    local_158 = CONCAT35(local_158._5_3_,0x100);
    local_168 = PTR_DAT_04bb21f8 + 0x10;
    lVar9 = *(long *)(local_170[2] + 8);
    FUN_038d1270(&local_168,"%s.as",lVar9 + *(int *)(lVar9 + 0x24) + (long)*(int *)(lVar9 + 8));
  }
  else {
    iVar4 = *(int *)(*local_170 + 8);
    if (iVar4 < 0x60000000) {
      piVar1 = (int *)(*(long *)(local_170[2] + 8) + (long)iVar4);
      if (*piVar1 < 1) goto LAB_016d8494;
      iVar4 = *(int *)(((ulong)(uint)piVar1[1] & 0xfffffff) + *(long *)(local_170[2] + 8) + 4);
    }
    else {
      uVar7 = iVar4 + 0xa0000000;
      if (*(uint *)(local_178 + 0x80) <= uVar7) {
        uVar7 = 0;
      }
      lVar9 = *(long *)(local_178 + 0x88) + (ulong)uVar7 * 0x32;
      iVar4 = *(int *)(lVar9 + (ulong)*(byte *)(lVar9 + 0x20));
    }
    if (iVar4 != 0) goto LAB_016d84a8;
  }
LAB_016d8494:
  local_168 = (undefined *)((ulong)local_168 & 0xffffffff00000000);
  FUN_01509afc(*(long *)(param_1 + 0x68) + 0x278,&local_168);
LAB_016d84a8:
  puVar11 = *(undefined8 **)(param_1 + 0x60);
  local_158 = 0;
  local_150 = (long *)0x0;
  local_168 = (undefined *)0x0;
  lStack_160 = 0;
  if (puVar11 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar11 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar11 = &DAT_05240280;
    }
  }
  if (puVar11[0x227] != 0) {
    local_198 = CONCAT44(local_198._4_4_,9);
    uVar5 = FUN_03850a90(puVar11[0x227],9,&local_168,*(uint *)(puVar11 + 0x2d3) >> 1 & 1);
    if ((uVar5 & 1) != 0) {
      (**(code **)*param_6)(param_6,&local_168);
      fVar12 = *param_2;
      fVar13 = param_2[1];
      plVar6 = *(long **)(param_1 + 0x68);
      local_190 = param_2[2];
      fVar14 = 1.0;
      if ((local_150 != (long *)0x0) && (lVar9 = *local_150, lVar9 != 0)) {
        fVar14 = *(float *)(lVar9 + 0x18);
        if (fVar14 < 0.0) {
          fVar14 = *(float *)(local_150[1] + 0xc);
        }
        uVar7 = (uint)(fVar14 - *(float *)(lVar9 + 0x14));
        if (uVar7 < 2) {
          uVar7 = 1;
        }
        fVar14 = (float)uVar7;
      }
      fVar14 = SQRT((fVar13 - param_3[1]) * (fVar13 - param_3[1]) +
                    (fVar12 - *param_3) * (fVar12 - *param_3) +
                    (local_190 - param_3[2]) * (local_190 - param_3[2])) / fVar14;
      local_198._0_4_ = (float)plVar6[0x4f];
      local_198._4_4_ = (float)((ulong)plVar6[0x4f] >> 0x20);
      fVar15 = fVar13 - local_198._4_4_;
      fVar16 = fVar12 - (float)local_198;
      fVar17 = local_190 - *(float *)(plVar6 + 0x50);
      fVar18 = SQRT(fVar15 * fVar15 + fVar16 * fVar16 + fVar17 * fVar17);
      if (fVar14 <= fVar18) {
        fVar12 = 1.0 / fVar18;
        if (0.0 < fVar18) {
          fVar17 = fVar17 * fVar12;
          fVar15 = fVar15 * fVar12;
          fVar16 = fVar16 * fVar12;
        }
        fVar12 = (float)local_198 + fVar14 * fVar16;
        fVar13 = local_198._4_4_ + fVar14 * fVar15;
        local_190 = *(float *)(plVar6 + 0x50) + fVar14 * fVar17;
      }
      local_198 = CONCAT44(fVar13,fVar12);
      (**(code **)(*plVar6 + 0x100))(plVar6,&local_198);
    }
  }
  lVar9 = (**(code **)(**(long **)(param_1 + 0x68) + 0x148))();
  uVar7 = *param_4;
  if (param_5 == 0) {
    uVar3 = *(uint *)(lVar9 + 4);
    uVar5 = (ulong)~uVar3;
    if ((ulong)uVar3 <= (ulong)uVar7) {
      uVar5 = -(ulong)uVar3;
    }
    uVar7 = (uint)((float)(long)(uVar5 + uVar7) * 0.25);
    iVar4 = (uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU)) + uVar3;
  }
  else {
    iVar8 = (int)((float)(int)(uVar7 - *(int *)(lVar9 + 4)) * 0.25);
    iVar10 = 0x7fffffff;
    if (iVar8 < 1) {
      iVar10 = 0;
    }
    iVar4 = 0;
    if (iVar8 < 1) {
      iVar4 = -0x7fffffff;
    }
    iVar2 = iVar8;
    if (iVar10 <= iVar8) {
      iVar2 = iVar10;
    }
    if (iVar4 <= iVar8) {
      iVar4 = iVar2;
    }
    iVar4 = iVar4 + *(int *)(lVar9 + 4);
  }
  *(int *)(lVar9 + 4) = iVar4;
  plVar6 = *(long **)(param_1 + 0x60);
  if (plVar6 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      plVar6 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar6 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar6 + 0x4a8))(plVar6);
  return;
}


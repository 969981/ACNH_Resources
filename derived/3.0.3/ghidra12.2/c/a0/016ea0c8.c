
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_016ea0c8(float param_1,float *param_2)

{
  float *pfVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined *local_80;
  int local_78;
  int iStack_74;
  undefined *local_70;
  int local_68;
  int iStack_64;
  undefined8 local_60;
  undefined4 local_58;
  
  puVar3 = PTR_DAT_04bb27c8;
  puVar2 = PTR_DAT_04bb2010;
  local_78 = 0;
  local_80 = (undefined *)0x0;
  local_70 = PTR_DAT_04bb2010 + 0x10;
  local_68 = (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0);
  iStack_64 = (int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0);
  local_60 = CONCAT44(local_60._4_4_,8);
  local_80 = (undefined *)0x100;
  local_78 = 0;
  lVar7 = *(long *)PTR_DAT_04bb27c8;
  if (((lVar7 == 0) || (*(long *)(lVar7 + 0xa8) == 0)) ||
     (uVar6 = FUN_00949ac8(lVar7 + 0x28,&local_70,&local_80), (uVar6 & 1) == 0)) {
    fVar8 = -param_1;
    if (0.0 <= param_1) {
      fVar8 = param_1;
    }
    if (fVar8 <= 1.1920929e-07) {
      uVar5 = 0;
      goto LAB_016ea770;
    }
    local_58 = 0;
    local_80 = puVar2 + 0x10;
    fVar8 = *param_2;
    local_60 = 0;
    fVar10 = param_1 * 0.0 + fVar8;
    fVar9 = param_2[2];
    local_78 = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0);
    iStack_74 = (int)((float)(int)(fVar9 + param_1) / 5.0) - (uint)(fVar9 + param_1 < 0.0);
    local_60 = 0x100;
    local_58 = 0;
    lVar7 = *(long *)puVar3;
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0xa8) != 0)) {
      uVar6 = FUN_00949ac8(lVar7 + 0x28,&local_80,&local_60);
      if ((uVar6 & 1) != 0) goto LAB_016ea764;
      fVar8 = *param_2;
      fVar9 = param_2[2];
    }
    puVar4 = PTR_DAT_04bb2d00;
    local_58 = 0;
    local_60 = 0;
    pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(DAT_05240230 >> 0x14) & 0xff0));
    fVar10 = (float)(DAT_05240230 & 0xffffff) * 5.9604645e-08;
    local_80 = puVar2 + 0x10;
    fVar11 = (*pfVar1 + fVar10 * pfVar1[1]) * param_1 + fVar8;
    fVar10 = (pfVar1[2] + fVar10 * pfVar1[3]) * param_1 + fVar9;
    local_78 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
    iStack_74 = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0);
    local_60 = 0x100;
    local_58 = 0;
    lVar7 = *(long *)puVar3;
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0xa8) != 0)) {
      uVar6 = FUN_00949ac8(lVar7 + 0x28,&local_80,&local_60);
      if ((uVar6 & 1) != 0) goto LAB_016ea764;
      fVar8 = *param_2;
      fVar9 = param_2[2];
    }
    local_58 = 0;
    pfVar1 = (float *)(puVar4 + (ulong)(DAT_05240230 >> 0x17 & 0xff) * 0x10);
    local_60 = 0;
    fVar10 = (float)((DAT_05240230 & 0x7fffff) << 1) * 5.9604645e-08;
    local_80 = puVar2 + 0x10;
    fVar11 = fVar8 + (*pfVar1 + fVar10 * pfVar1[1]) * param_1;
    fVar10 = (pfVar1[2] + fVar10 * pfVar1[3]) * param_1 + fVar9;
    local_78 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
    iStack_74 = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0);
    local_60 = 0x100;
    local_58 = 0;
    lVar7 = *(long *)puVar3;
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0xa8) != 0)) {
      uVar6 = FUN_00949ac8(lVar7 + 0x28,&local_80,&local_60);
      if ((uVar6 & 1) != 0) goto LAB_016ea764;
      fVar8 = *param_2;
      fVar9 = param_2[2];
    }
    local_58 = 0;
    local_60 = 0;
    pfVar1 = (float *)(puVar4 + (ulong)(DAT_05240230 * 3 >> 0x18) * 0x10);
    fVar10 = (float)(DAT_05240230 * 3 & 0xffffff) * 5.9604645e-08;
    local_80 = puVar2 + 0x10;
    fVar11 = fVar8 + (*pfVar1 + fVar10 * pfVar1[1]) * param_1;
    fVar10 = (pfVar1[2] + fVar10 * pfVar1[3]) * param_1 + fVar9;
    local_78 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
    iStack_74 = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0);
    local_60 = 0x100;
    local_58 = 0;
    lVar7 = *(long *)puVar3;
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0xa8) != 0)) {
      uVar6 = FUN_00949ac8(lVar7 + 0x28,&local_80,&local_60);
      if ((uVar6 & 1) != 0) goto LAB_016ea764;
      fVar8 = *param_2;
      fVar9 = param_2[2];
    }
    pfVar1 = (float *)(puVar4 + (ulong)(DAT_05240230 >> 0x16 & 0xff) * 0x10);
    fVar10 = (float)((DAT_05240230 & 0x3fffff) << 2) * 5.9604645e-08;
    fVar8 = fVar8 + (*pfVar1 + fVar10 * pfVar1[1]) * param_1;
    fVar9 = (pfVar1[2] + fVar10 * pfVar1[3]) * param_1 + fVar9;
    local_78 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
    iStack_74 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
    local_80 = puVar2 + 0x10;
    uVar6 = FUN_00976320(&local_80);
    if ((uVar6 & 1) == 0) {
      pfVar1 = (float *)(puVar4 + (ulong)(DAT_05240230 * 5 >> 0x18) * 0x10);
      fVar8 = (float)(DAT_05240230 * 5 & 0xffffff) * 5.9604645e-08;
      fVar9 = *param_2 + (*pfVar1 + fVar8 * pfVar1[1]) * param_1;
      fVar8 = (pfVar1[2] + fVar8 * pfVar1[3]) * param_1 + param_2[2];
      local_78 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
      iStack_74 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
      local_80 = puVar2 + 0x10;
      uVar6 = FUN_00976320(&local_80);
      if ((uVar6 & 1) == 0) {
        pfVar1 = (float *)(puVar4 + (ulong)(DAT_05240230 * 3 >> 0x17 & 0xff) * 0x10);
        fVar8 = (float)(DAT_05240230 * 6 & 0xfffffe) * 5.9604645e-08;
        fVar9 = *param_2 + (*pfVar1 + fVar8 * pfVar1[1]) * param_1;
        fVar8 = (pfVar1[2] + fVar8 * pfVar1[3]) * param_1 + param_2[2];
        local_78 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
        iStack_74 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
        local_80 = puVar2 + 0x10;
        uVar6 = FUN_00976320(&local_80);
        if ((uVar6 & 1) == 0) {
          pfVar1 = (float *)(puVar4 + (ulong)(DAT_05240230 * 7 >> 0x18) * 0x10);
          fVar8 = (float)(DAT_05240230 * 7 & 0xffffff) * 5.9604645e-08;
          fVar9 = *param_2 + (*pfVar1 + fVar8 * pfVar1[1]) * param_1;
          fVar8 = (pfVar1[2] + fVar8 * pfVar1[3]) * param_1 + param_2[2];
          local_78 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
          iStack_74 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
          local_80 = puVar2 + 0x10;
          uVar5 = FUN_00976320(&local_80);
          goto LAB_016ea770;
        }
      }
    }
  }
LAB_016ea764:
  uVar5 = 1;
LAB_016ea770:
  return uVar5 & 1;
}


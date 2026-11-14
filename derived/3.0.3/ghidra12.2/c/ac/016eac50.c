
bool FUN_016eac50(float param_1,float *param_2)

{
  float *pfVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_124;
  float fStack_120;
  float local_11c;
  undefined **local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined5 local_c4;
  undefined3 uStack_bf;
  undefined5 uStack_bc;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  local_cc = 0;
  puVar2 = PTR_DAT_04bb2ca0 + 0x10;
  local_118 = &PTR_FUN_048fc2b8;
  local_110 = 0;
  local_d0 = 7;
  local_c4 = 0;
  uStack_bf = 0;
  uStack_bc = 0;
  local_e0 = 0;
  puVar3 = PTR_DAT_04bb2010 + 0x10;
  local_a0 = 0;
  uStack_a8 = 0;
  local_9c = 0;
  local_e8 = puVar2;
  local_b0 = puVar3;
  FUN_0093ab70(*(long *)PTR_DAT_04bb27c8 + 0x28,param_2,&local_118);
  fVar10 = local_e0._4_4_;
  fVar6 = (float)FUN_016e026c(0,param_2,0,0);
  puVar4 = PTR_DAT_04bb2d00;
  fVar7 = -param_1;
  if (0.0 <= param_1) {
    fVar7 = param_1;
  }
  fVar9 = fVar6;
  if (1.1920929e-07 < fVar7) {
    iVar5 = 0;
    do {
      local_f0 = 0;
      local_110 = 0;
      local_108 = 0;
      local_100 = 0;
      local_f8 = 0;
      local_118 = &PTR_FUN_048fc2b8;
      local_e0 = 0;
      local_d8 = 0;
      pfVar1 = (float *)(puVar4 + (ulong)((uint)(DAT_05240230 * iVar5) >> 0x18) * 0x10);
      local_a0 = 0;
      local_9c = 0;
      local_cc = 0;
      local_c4 = 0;
      fVar7 = (float)(DAT_05240230 * iVar5 & 0xffffff) * 5.9604645e-08;
      uStack_bf = 0;
      uStack_bc = 0;
      uStack_a8 = 0;
      local_d0 = 7;
      fStack_120 = param_1 * 0.0 + param_2[1];
      local_124 = (*pfVar1 + fVar7 * pfVar1[1]) * param_1 + *param_2;
      local_11c = (pfVar1[2] + fVar7 * pfVar1[3]) * param_1 + param_2[2];
      local_e8 = puVar2;
      local_b0 = puVar3;
      FUN_0093ab70(*(long *)PTR_DAT_04bb27c8 + 0x28,&local_124,&local_118);
      if (0.0 < local_e0._4_4_) {
        fVar8 = fVar10 - local_e0._4_4_;
        fVar7 = -fVar8;
        if (0.0 <= fVar8) {
          fVar7 = fVar8;
        }
        if (0.1 < fVar7) {
          return false;
        }
      }
      fVar7 = (float)FUN_016e026c(0,&local_124,0,0);
      iVar5 = iVar5 + 1;
      fVar8 = fVar7;
      if (fVar6 <= fVar7) {
        fVar8 = fVar6;
      }
      fVar6 = fVar8;
      if (fVar7 <= fVar9) {
        fVar7 = fVar9;
      }
      fVar9 = fVar7;
    } while (iVar5 != 8);
  }
  fVar9 = fVar9 - fVar6;
  fVar10 = -fVar9;
  if (0.0 <= fVar9) {
    fVar10 = fVar9;
  }
  return fVar10 < 3.75;
}


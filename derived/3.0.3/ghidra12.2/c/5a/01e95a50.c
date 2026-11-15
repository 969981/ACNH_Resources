
void FUN_01e95a50(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  int *piVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 local_250;
  float local_248;
  undefined8 local_240;
  undefined4 local_238;
  undefined *local_230;
  undefined *puStack_228;
  undefined8 local_220;
  undefined *local_218;
  undefined8 uStack_210;
  undefined8 local_204;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8 [2];
  long local_1e0;
  long local_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  float local_1b0;
  float fStack_1ac;
  float local_1a8;
  undefined1 local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  undefined1 local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined1 local_17e;
  int local_fc;
  undefined *local_d0;
  int local_c8;
  
  iVar5 = *(int *)(param_1 + 0xb01c);
  FUN_01e63f1c(local_1e8);
  local_1f0 = 0;
  local_1e8[0] = 1;
  local_1f8 = 0;
  local_1fc = 0;
  local_204 = 0xfffe;
  FUN_0277d4ac(&local_204);
  local_220 = 0;
  local_230 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_228 = PTR_DAT_04bb2010 + 0x10;
  uStack_210 = 0;
  local_218 = puStack_228;
  uVar6 = FUN_021e7360(&local_204,&local_230);
  if ((uVar6 & 1) != 0) {
    FUN_021fd6f0(&local_1f8,&local_1fc,&local_204,&local_230,0);
  }
  local_238 = 0;
  local_240 = 0;
  local_248 = 0.0;
  local_250 = 0;
  if (iVar5 == 0) {
    if (*(long *)(param_1 + 8) == 0) {
      uStack_1bc = 0;
      local_1c0 = 0;
    }
    else {
      uVar2 = *(uint *)(*(long *)(param_1 + 8) + 0x508);
      uStack_1bc = 0;
      local_1c0 = 0;
      if (uVar2 != 0xffffffff) {
        puVar8 = &DAT_053fe348 + (ulong)uVar2 * 0xba0;
        if (9 < uVar2) {
          puVar8 = &DAT_053fe348;
        }
        local_1c0 = *(undefined4 *)(puVar8 + 0x7cc);
        uStack_1bc = *(undefined4 *)(puVar8 + 2000);
        local_240 = *(undefined8 *)(puVar8 + 0x7cc);
        local_238 = *(undefined4 *)(puVar8 + 0x7d4);
      }
    }
  }
  else {
    FUN_02080828(param_1 + 0x132e0,&local_1f8,param_1 + 0xb010);
    FUN_021f9ff0(&local_240,&local_250,*(long *)(*(long *)(param_1 + 8) + 0x68) + 0x278,
                 param_1 + 0xafb8);
    local_17e = 1;
    uStack_1bc = local_240._4_4_;
    local_1c0 = (undefined4)local_240;
  }
  local_190 = 1;
  local_1a0 = 1;
  local_19c = local_1f8;
  local_194 = local_1f0;
  if (iVar5 == 0) {
    if ((*(long *)(param_1 + 8) != 0) &&
       (uVar2 = *(uint *)(*(long *)(param_1 + 8) + 0x508), uVar2 != 0xffffffff)) {
      puVar8 = &DAT_053fe348 + (ulong)uVar2 * 0xba0;
      if (9 < uVar2) {
        puVar8 = &DAT_053fe348;
      }
      local_248 = *(float *)(puVar8 + 0x7e0);
      local_250 = *(undefined8 *)(puVar8 + 0x7d8);
    }
    fStack_1ac = local_250._4_4_ + 0.0;
    local_1b0 = (float)local_250 + 0.0;
    local_248 = local_248 + 10.0;
    local_250 = CONCAT44(fStack_1ac,local_1b0);
  }
  else {
    local_1b0 = (float)local_250;
    fStack_1ac = local_250._4_4_;
  }
  lVar9 = *(long *)PTR_DAT_04bb3968;
  local_188 = 1;
  local_1b8 = local_238;
  local_1a8 = local_248;
  piVar7 = (int *)(**(code **)(*(long *)(lVar9 + 0x2898) + 0xf0))(lVar9 + 0x2898);
  iVar5 = *piVar7;
  piVar7 = (int *)(**(code **)(*(long *)(lVar9 + 0x28c8) + 0xf0))(lVar9 + 0x28c8);
  lVar9 = *(long *)(param_1 + 8);
  local_1e0 = param_1 + 0x125f0;
  iVar1 = *piVar7;
  local_1c8 = param_1 + 0x12650;
  uVar2 = *(uint *)(lVar9 + 0x288);
  uVar3 = *(uint *)(lVar9 + 0x294);
  *(undefined4 *)(lVar9 + 0x288) = *(undefined4 *)(lVar9 + 0x28c);
  uVar4 = *(undefined4 *)(lVar9 + 0x290);
  uVar2 = uVar2 ^ uVar2 << 0xb;
  *(uint *)(lVar9 + 0x290) = uVar3;
  *(undefined4 *)(lVar9 + 0x28c) = uVar4;
  puVar8 = PTR_s_EmotEnd_04bb4608;
  uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
  *(uint *)(lVar9 + 0x294) = uVar2;
  *(long *)(param_1 + 0x125f8) = param_1;
  *(long *)(param_1 + 0x12658) = param_1;
  *(undefined1 **)(param_1 + 0x12600) = &LAB_01e94f34;
  *(undefined8 *)(param_1 + 0x12608) = 0;
  *(undefined8 *)(param_1 + 0x12668) = 0;
  *(code **)(param_1 + 0x12660) = FUN_01e93be0;
  local_fc = iVar5 + (int)((ulong)uVar2 * (ulong)((iVar1 - iVar5) + 1) >> 0x20);
  if (local_d0 != puVar8 + 9) {
    iVar5 = 7;
    if (local_c8 < 8) {
      iVar5 = local_c8 + -1;
    }
    memcpy(local_d0,puVar8 + 9,(long)iVar5);
    local_d0[iVar5] = 0;
  }
  local_184 = 1;
  if (*(int *)(param_1 + 0xef10) < *(int *)(param_1 + 0xef14)) {
    FUN_021920b0((int *)(param_1 + 0xef10),local_1e8);
  }
  return;
}


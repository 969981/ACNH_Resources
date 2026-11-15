
void FUN_01e950d0(long param_1,ulong param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 local_258;
  float local_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined *local_238;
  undefined *puStack_230;
  undefined8 local_228;
  undefined *local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1f8 [2];
  long local_1f0;
  long local_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  float local_1c0;
  float fStack_1bc;
  float local_1b8;
  undefined1 local_1b0;
  undefined8 local_1ac;
  undefined4 local_1a4;
  undefined1 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined1 local_18e;
  int local_10c;
  undefined4 local_34;
  
  iVar6 = *(int *)(param_1 + 0xb01c);
  FUN_01e63f1c(local_1f8);
  local_200 = 0;
  local_1f8[0] = 1;
  local_34 = 0;
  local_210 = 0xfffe;
  local_208 = 0;
  FUN_0277d4ac(&local_210);
  local_228 = 0;
  local_238 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_230 = PTR_DAT_04bb2010 + 0x10;
  uStack_218 = 0;
  local_220 = puStack_230;
  uVar7 = FUN_021e7360(&local_210,&local_238);
  if ((uVar7 & 1) != 0) {
    FUN_021fd6f0(&local_208,&local_34,&local_210,&local_238,0);
  }
  local_240 = 0;
  local_248 = 0;
  local_250 = 0.0;
  local_258 = 0;
  if (iVar6 == 0) {
    if (*(long *)(param_1 + 8) == 0) {
      uStack_1cc = 0;
      local_1d0 = 0;
    }
    else {
      uVar3 = *(uint *)(*(long *)(param_1 + 8) + 0x508);
      uStack_1cc = 0;
      local_1d0 = 0;
      if (uVar3 != 0xffffffff) {
        puVar9 = &DAT_053fe348 + (ulong)uVar3 * 0xba0;
        if (9 < uVar3) {
          puVar9 = &DAT_053fe348;
        }
        local_1d0 = *(undefined4 *)(puVar9 + 0x7cc);
        uStack_1cc = *(undefined4 *)(puVar9 + 2000);
        local_248 = *(undefined8 *)(puVar9 + 0x7cc);
        local_240 = *(undefined4 *)(puVar9 + 0x7d4);
        local_19c = 0x1c2;
      }
    }
  }
  else {
    FUN_02080828(param_1 + 0x132e0,&local_208,param_1 + 0xb010);
    FUN_021f9ff0(&local_248,&local_258,*(long *)(*(long *)(param_1 + 8) + 0x68) + 0x278,
                 param_1 + 0xafb8);
    local_18e = 1;
    uStack_1cc = local_248._4_4_;
    local_1d0 = (undefined4)local_248;
  }
  local_1a0 = 1;
  local_1b0 = 1;
  local_1ac = local_208;
  local_1a4 = local_200;
  if (iVar6 == 0) {
    if ((*(long *)(param_1 + 8) != 0) &&
       (uVar3 = *(uint *)(*(long *)(param_1 + 8) + 0x508), uVar3 != 0xffffffff)) {
      puVar9 = &DAT_053fe348 + (ulong)uVar3 * 0xba0;
      if (9 < uVar3) {
        puVar9 = &DAT_053fe348;
      }
      local_250 = *(float *)(puVar9 + 0x7e0);
      local_258 = *(undefined8 *)(puVar9 + 0x7d8);
    }
    fStack_1bc = local_258._4_4_ + 0.0;
    local_1c0 = (float)local_258 + 0.0;
    local_250 = local_250 + 10.0;
    local_258 = CONCAT44(fStack_1bc,local_1c0);
  }
  else {
    local_1c0 = (float)local_258;
    fStack_1bc = local_258._4_4_;
  }
  lVar10 = *(long *)PTR_DAT_04bb3968;
  local_198 = 1;
  local_1c8 = local_240;
  local_1b8 = local_250;
  piVar8 = (int *)(**(code **)(*(long *)(lVar10 + 0x2898) + 0xf0))(lVar10 + 0x2898);
  iVar6 = *piVar8;
  piVar8 = (int *)(**(code **)(*(long *)(lVar10 + 0x28c8) + 0xf0))(lVar10 + 0x28c8);
  lVar10 = *(long *)(param_1 + 8);
  iVar2 = *piVar8;
  local_1d8 = param_1 + 0x12650;
  uVar3 = *(uint *)(lVar10 + 0x288);
  uVar4 = *(uint *)(lVar10 + 0x294);
  *(undefined4 *)(lVar10 + 0x288) = *(undefined4 *)(lVar10 + 0x28c);
  uVar5 = *(undefined4 *)(lVar10 + 0x290);
  uVar3 = uVar3 ^ uVar3 << 0xb;
  *(uint *)(lVar10 + 0x290) = uVar4;
  *(undefined4 *)(lVar10 + 0x28c) = uVar5;
  local_1f0 = param_1 + 0x125f0;
  uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
  *(uint *)(lVar10 + 0x294) = uVar3;
  *(long *)(param_1 + 0x125f8) = param_1;
  puVar9 = PTR_LAB_04bc1628;
  *(undefined1 **)(param_1 + 0x12600) = &LAB_01e94f34;
  *(undefined8 *)(param_1 + 0x12608) = 0;
  *(long *)(param_1 + 0x12658) = param_1;
  *(undefined8 *)(param_1 + 0x12668) = 0;
  local_194 = 1;
  local_10c = iVar6 + (int)((ulong)uVar3 * (ulong)((iVar2 - iVar6) + 1) >> 0x20);
  pcVar1 = FUN_01e93be0;
  if ((param_2 & 1) == 0) {
    pcVar1 = (code *)puVar9;
  }
  *(code **)(param_1 + 0x12660) = pcVar1;
  if (*(int *)(param_1 + 0xef10) < *(int *)(param_1 + 0xef14)) {
    FUN_021920b0((int *)(param_1 + 0xef10),local_1f8);
  }
  return;
}


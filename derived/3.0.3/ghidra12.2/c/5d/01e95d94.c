
void FUN_01e95d94(long param_1,ulong param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined *puVar8;
  long lVar9;
  undefined4 local_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_208;
  float local_200;
  undefined4 local_1f8 [2];
  long local_1f0;
  long local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  float local_1c0;
  float fStack_1bc;
  float local_1b8;
  undefined1 local_1b0;
  undefined8 local_1ac;
  undefined4 local_1a4;
  undefined1 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  int local_10c;
  char *local_e0;
  int local_d8;
  
  iVar6 = *(int *)(param_1 + 0xb01c);
  FUN_01e63f1c(local_1f8);
  local_200 = 0.0;
  local_208 = 0;
  local_1f8[0] = 1;
  if (iVar6 == 0) {
    fStack_1bc = 0.0;
    local_200 = 10.0;
    if (*(long *)(param_1 + 8) == 0) {
      local_1c0 = 0.0;
    }
    else {
      uVar3 = *(uint *)(*(long *)(param_1 + 8) + 0x508);
      local_1c0 = 0.0;
      if (uVar3 != 0xffffffff) {
        puVar8 = &DAT_053fe348 + (ulong)uVar3 * 0xba0;
        if (9 < uVar3) {
          puVar8 = &DAT_053fe348;
        }
        local_1c0 = *(float *)(puVar8 + 0x7d8) + 0.0;
        fStack_1bc = *(float *)(puVar8 + 0x7dc) + 0.0;
        local_200 = *(float *)(puVar8 + 0x7e0) + 10.0;
      }
    }
    local_208 = CONCAT44(fStack_1bc,local_1c0);
  }
  else {
    local_210 = 0;
    local_218 = 0;
    local_220 = 0;
    local_228 = 0;
    local_22c = 0;
    FUN_021fd6f0(&local_228,&local_22c,param_1 + 0xb010,param_1 + 0xafd8,0);
    FUN_02080828(param_1 + 0x132e0,&local_228,param_1 + 0xb010);
    FUN_021f9ff0(&local_218,&local_208,*(long *)(*(long *)(param_1 + 8) + 0x68) + 0x278,
                 param_1 + 0xafb8);
    local_1a0 = 1;
    local_1b0 = 1;
    local_1d0 = local_218;
    local_1ac = local_228;
    local_1c8 = local_210;
    local_1a4 = local_220;
    local_1c0 = (float)local_208;
    fStack_1bc = local_208._4_4_;
  }
  lVar9 = *(long *)PTR_DAT_04bb3968;
  local_198 = 1;
  local_1b8 = local_200;
  piVar7 = (int *)(**(code **)(*(long *)(lVar9 + 0x28f8) + 0xf0))(lVar9 + 0x28f8);
  iVar6 = *piVar7;
  piVar7 = (int *)(**(code **)(*(long *)(lVar9 + 0x2928) + 0xf0))(lVar9 + 0x2928);
  lVar9 = *(long *)(param_1 + 8);
  local_1d8 = param_1 + 0x12650;
  iVar2 = *piVar7;
  local_1f0 = param_1 + 0x125f0;
  uVar3 = *(uint *)(lVar9 + 0x288);
  uVar4 = *(uint *)(lVar9 + 0x294);
  *(undefined4 *)(lVar9 + 0x288) = *(undefined4 *)(lVar9 + 0x28c);
  uVar5 = *(undefined4 *)(lVar9 + 0x290);
  uVar3 = uVar3 ^ uVar3 << 0xb;
  *(uint *)(lVar9 + 0x290) = uVar4;
  *(undefined4 *)(lVar9 + 0x28c) = uVar5;
  uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
  *(uint *)(lVar9 + 0x294) = uVar3;
  *(long *)(param_1 + 0x125f8) = param_1;
  *(long *)(param_1 + 0x12658) = param_1;
  *(undefined8 *)(param_1 + 0x12608) = 0;
  *(undefined8 *)(param_1 + 0x12668) = 0;
  *(undefined1 **)(param_1 + 0x12600) = &LAB_01e94f34;
  puVar1 = &LAB_01e939ac;
  if ((param_2 & 1) == 0) {
    puVar1 = &LAB_01e64808;
  }
  *(undefined1 **)(param_1 + 0x12660) = puVar1;
  local_10c = iVar6 + (int)((ulong)uVar3 * (ulong)((iVar2 - iVar6) + 1) >> 0x20);
  if (local_e0 != s_Smiling_049137b9) {
    iVar6 = 7;
    if (local_d8 < 8) {
      iVar6 = local_d8 + -1;
    }
    memcpy(local_e0,s_Smiling_049137b9,(long)iVar6);
    local_e0[iVar6] = '\0';
  }
  local_194 = 1;
  if (*(int *)(param_1 + 0xef10) < *(int *)(param_1 + 0xef14)) {
    FUN_021920b0((int *)(param_1 + 0xef10),local_1f8);
  }
  return;
}


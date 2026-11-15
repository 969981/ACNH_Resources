
undefined8 FUN_0240b654(float *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  float *pfVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  ulong local_54;
  float local_4c;
  float local_48;
  undefined1 local_44;
  undefined2 local_43;
  undefined4 local_38;
  int local_34;
  
  puVar3 = PTR_DAT_04bb27c8;
  local_34 = 0;
  FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,param_1,&local_34);
  if ((((param_2 & 1) == 0) && (uVar4 = FUN_02b608a0(param_1), (uVar4 & 1) != 0)) && (local_34 == 6)
     ) {
    if (*(long *)puVar3 == 0) {
      return 1;
    }
    lVar6 = *(long *)(*(long *)puVar3 + 0xa8);
    if (lVar6 == 0) {
      return 1;
    }
    uVar1 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
    if ((int)uVar1 < 0) {
      return 1;
    }
    uVar2 = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0);
    if ((int)uVar2 < 0) {
      return 1;
    }
    if (*(uint *)(lVar6 + 0x38) <= uVar1 || *(uint *)(lVar6 + 0x3c) <= uVar2) {
      return 1;
    }
    uVar1 = uVar1 + *(uint *)(lVar6 + 0x38) * uVar2;
    if (*(uint *)(lVar6 + 0x68) <= uVar1 || *(long *)(lVar6 + 0x70) == 0) {
      return 1;
    }
    local_54 = CONCAT44(local_54._4_4_,3);
    if ((*(uint *)(*(long *)(lVar6 + 0x70) + (long)(int)uVar1 * 4) >> 3 & 1) == 0) {
      return 1;
    }
  }
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x10e0fba8) {
    local_54 = local_54 & 0xffffffff00000000;
    FUN_016e026c(0,param_1,&local_54,0);
    if ((int)local_54 == 0x16) {
      return 1;
    }
  }
  if ((param_2 & 1) == 0) {
    lVar6 = FUN_0251e98c(1);
    pfVar5 = (float *)(**(code **)(*(long *)(lVar6 + 0x2a0) + 0xf0))(lVar6 + 0x2a0);
    uVar4 = FUN_016e0e30(*pfVar5 * 0.9,param_1,0);
    if ((uVar4 & 1) != 0) {
      return 1;
    }
    local_38 = 0;
    fVar7 = (float)FUN_0093b024(*(long *)puVar3 + 0x28,param_1,&local_38);
    fVar8 = (float)FUN_0093a950(*(long *)puVar3 + 0x28,param_1,&local_34);
    fVar7 = fVar7 - fVar8;
    fVar8 = -fVar7;
    if (0.0 <= fVar7) {
      fVar8 = fVar7;
    }
    if (1.1920929e-07 < fVar8) {
      local_4c = param_1[2];
      local_43 = 0;
      local_54 = *(ulong *)param_1;
      lVar6 = FUN_0251e98c(1);
      pfVar5 = (float *)(**(code **)(*(long *)(lVar6 + 0x2a0) + 0xf0))(lVar6 + 0x2a0);
      local_44 = 1;
      local_48 = *pfVar5 * 0.8;
      uVar4 = FUN_016e9c80(&local_54,1,0,0);
      if ((uVar4 & 1) == 0) {
        return 1;
      }
    }
    uVar4 = FUN_016efacc(0x40a00000,param_1);
    if ((uVar4 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}


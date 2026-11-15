
undefined4 FUN_022af654(long param_1,ulong param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  
  local_78 = 0.0;
  local_7c = (float)*(int *)(param_1 + 8) * 5.0 + 5.0;
  local_74 = (float)*(int *)(param_1 + 0xc) * 5.0 + 5.0;
  fVar5 = (float)FUN_01317db0(&local_7c);
  puVar2 = PTR_DAT_04bb27c8;
  local_84 = NAN;
  local_74 = (float)*(int *)(param_1 + 0xc) * 5.0 + 2.5;
  local_7c = (float)*(int *)(param_1 + 8) * 5.0 + 2.5;
  local_88 = (local_7c + (float)*(int *)(param_1 + 8) * 5.0) * 0.5;
  local_80 = (local_74 + (float)*(int *)(param_1 + 0xc) * 5.0 + 5.0) * 0.5;
  local_84 = (float)FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,&local_88,0);
  local_90 = NAN;
  local_8c = ((float)*(int *)(param_1 + 0xc) * 5.0 + local_74) * 0.5;
  local_94 = ((float)*(int *)(param_1 + 8) * 5.0 + 5.0 + local_7c) * 0.5;
  local_90 = (float)FUN_0093a950(*(long *)puVar2 + 0x28,&local_94,0);
  fVar5 = fVar5 + -10.0;
  if (((fVar5 <= local_90) || (fVar5 <= local_78)) || (fVar5 <= local_84)) {
    iVar1 = *(int *)(param_1 + 0xc);
    fVar6 = (float)iVar1;
    local_84 = (local_78 + local_84) * 0.5;
    fVar7 = (float)(*(int *)(param_1 + 8) + 1);
    fVar9 = fVar6 * 5.0;
    local_74 = fVar6 * 5.0 + 2.5;
    fVar6 = fVar7 * 5.0;
    fVar8 = fVar7 * 5.0 + 2.5;
    local_80 = (local_74 + fVar9 + 5.0) * 0.5;
    fVar7 = (fVar8 + fVar6 + 5.0) * 0.5;
    local_88 = fVar7;
    local_7c = fVar8;
    local_84 = (float)FUN_0093a950(*(long *)puVar2 + 0x28,&local_88,0);
    local_94 = (fVar6 + local_7c) * 0.5;
    local_90 = (local_78 + local_90) * 0.5;
    local_8c = (fVar9 + local_74) * 0.5;
    local_90 = (float)FUN_0093a950(*(long *)puVar2 + 0x28,&local_94,0);
    if (((fVar5 <= local_90) || (fVar5 <= local_78)) || (fVar5 <= local_84)) {
      fVar9 = (float)(iVar1 + 1);
      local_74 = fVar9 * 5.0 + 2.5;
      fVar9 = fVar9 * 5.0;
      local_84 = (local_78 + local_84) * 0.5;
      local_80 = (local_74 + fVar9) * 0.5;
      local_88 = fVar7;
      local_7c = fVar8;
      local_84 = (float)FUN_0093a950(*(long *)puVar2 + 0x28,&local_88,0);
      local_94 = (fVar6 + local_7c) * 0.5;
      local_90 = (local_78 + local_90) * 0.5;
      local_8c = (fVar9 + 5.0 + local_74) * 0.5;
      fVar6 = (float)FUN_0093a950(*(long *)puVar2 + 0x28,&local_94,0);
      if (((fVar6 < fVar5) && (local_78 < fVar5)) && (local_84 < fVar5)) {
        uVar3 = 5;
        if ((param_2 & 1) != 0) {
          uVar3 = 1;
        }
        return uVar3;
      }
      uVar4 = 3;
      uVar3 = 7;
    }
    else {
      uVar4 = 7;
      uVar3 = 3;
    }
    if ((param_2 & 1) == 0) {
      uVar3 = uVar4;
    }
  }
  else {
    uVar3 = 5;
    if ((param_2 & 1) == 0) {
      uVar3 = 1;
    }
  }
  return uVar3;
}



uint FUN_0184da90(undefined4 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  undefined **local_60;
  undefined8 local_58;
  undefined *local_50;
  int local_48;
  int local_44;
  
  local_60 = &PTR_FUN_048f9730;
  fVar6 = (float)*(int *)(param_4 + 0x10) * 0.5;
  uVar3 = 0;
  if (fVar6 != (float)(int)fVar6) {
    uVar3 = (uint)(fVar6 < 0.0);
  }
  fVar7 = (float)*(int *)(param_4 + 0x14) * 0.5;
  uVar5 = 0;
  if (fVar7 != (float)(int)fVar7) {
    uVar5 = (uint)(fVar7 < 0.0);
  }
  local_58 = CONCAT44((int)fVar7 - uVar5,(int)fVar6 - uVar3);
  uVar4 = FUN_02b672b0(&local_60);
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_01a19b90(param_1,(undefined **)(param_4 + 8));
    if ((uVar4 & 1) == 0) {
      iVar2 = *(int *)(param_4 + 0x10);
      local_44 = *(int *)(param_4 + 0x14);
      local_58 = param_4 + 0x18;
      local_50 = PTR_DAT_04bb2010 + 0x10;
      iVar1 = *(int *)(param_4 + 0x24) + 1;
      if (iVar1 == local_44) {
        uVar3 = 1;
      }
      else {
        local_60 = (undefined **)(param_4 + 8);
        local_48 = iVar2;
        do {
          uVar3 = FUN_01a19d20(param_1,param_3,&local_50,param_5);
          if ((uVar3 & 1) == 0) break;
          if (local_48 < *(int *)(local_58 + 8)) {
            local_48 = local_48 + 1;
          }
          else {
            local_44 = local_44 + 1;
            local_48 = *(int *)(local_60 + 1);
          }
        } while (iVar2 != local_48 || iVar1 != local_44);
      }
      goto LAB_0184db4c;
    }
  }
  uVar3 = 0;
LAB_0184db4c:
  return uVar3 & 1;
}



bool FUN_03ffbc30(undefined8 *param_1,undefined4 param_2,int param_3,long *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  int local_50;
  undefined4 local_4c;
  uint local_48;
  uint local_44;
  
  iVar1 = (int)param_4[1];
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar3 = 0x50544348;
  }
  local_48 = uVar3;
  if (iVar1 == 2) {
    (**(code **)(*param_4 + 0x20))(param_4,&local_48,4);
    uVar3 = local_48;
  }
  else if (iVar1 == 1) {
    uVar2 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    local_44 = uVar2 >> 0x10 | uVar2 << 0x10;
    if ((int)param_4[2] != 0xff00) {
      local_44 = uVar3;
    }
    (**(code **)(*param_4 + 0x38))(param_4,&local_44);
  }
  else {
    local_44 = 0;
    (**(code **)(*param_4 + 0x20))(param_4,&local_44,4);
    uVar3 = (local_44 & 0xff00ff00) >> 8 | (local_44 & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    if ((int)param_4[2] != 0xff00) {
      uVar3 = local_44;
    }
  }
  if (uVar3 == 0x50544348) {
    uVar4 = FUN_04001f50(param_4,param_2,param_3,&local_4c,&local_50);
    if ((uVar4 & 1) == 0) {
      return false;
    }
    if (local_50 != param_3) {
      return false;
    }
    uVar4 = (**(code **)*param_1)(param_1,param_4,local_4c,param_3);
    if ((uVar4 & 1) != 0) {
      iVar1 = (int)param_4[1];
      uVar3 = 0;
      if (iVar1 != 0) {
        uVar3 = 0x48435450;
      }
      local_48 = uVar3;
      if (iVar1 == 2) {
        (**(code **)(*param_4 + 0x20))(param_4,&local_48,4);
      }
      else if (iVar1 == 1) {
        uVar2 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
        local_44 = uVar2 >> 0x10 | uVar2 << 0x10;
        if ((int)param_4[2] != 0xff00) {
          local_44 = uVar3;
        }
        (**(code **)(*param_4 + 0x38))(param_4,&local_44);
        local_48 = uVar3;
      }
      else {
        local_44 = 0;
        (**(code **)(*param_4 + 0x20))(param_4,&local_44,4);
        uVar3 = (local_44 & 0xff00ff00) >> 8 | (local_44 & 0xff00ff) << 8;
        local_48 = uVar3 >> 0x10 | uVar3 << 0x10;
        if ((int)param_4[2] != 0xff00) {
          local_48 = local_44;
        }
      }
      return local_48 == 0x48435450;
    }
  }
  return false;
}


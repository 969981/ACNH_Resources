
void FUN_0364ea9c(uint *param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint local_14;
  
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_14 = CONCAT31(local_14._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,param_1,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar2 = *param_1;
    uVar3 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    local_14 = uVar3 >> 0x10 | uVar3 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_14 = uVar2;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_14);
  }
  else {
    local_14 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,4);
    uVar2 = (local_14 & 0xff00ff00) >> 8 | (local_14 & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar2 = local_14;
    }
    *param_1 = uVar2;
  }
  puVar1 = param_1 + 3;
  FUN_03652360(param_2,param_1 + 1,puVar1);
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_14 = CONCAT31(local_14._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar2 = *puVar1;
    uVar3 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    local_14 = uVar3 >> 0x10 | uVar3 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_14 = uVar2;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_14);
  }
  else {
    local_14 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,4);
    uVar2 = (local_14 & 0xff00ff00) >> 8 | (local_14 & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar2 = local_14;
    }
    *puVar1 = uVar2;
  }
  local_14 = CONCAT31(local_14._1_3_,(char)param_1[4]);
  (**(code **)(*param_2 + 0x28))(param_2,&local_14);
  *(bool *)(param_1 + 4) = (char)local_14 != '\0';
  return;
}


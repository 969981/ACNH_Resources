
long * FUN_0365d0d0(long *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint local_14;
  
  if (*(char *)((long)param_1 + 0xc) != '\0') {
    local_14 = CONCAT31(local_14._1_3_,4);
    (**(code **)(*param_1 + 0x20))(param_1,&local_14,1);
  }
  if ((int)param_1[1] == 2) {
    (**(code **)(*param_1 + 0x20))(param_1,param_2,4);
  }
  else if ((int)param_1[1] == 1) {
    uVar2 = *param_2;
    uVar3 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    local_14 = uVar3 >> 0x10 | uVar3 << 0x10;
    if ((int)param_1[2] != 0xff00) {
      local_14 = uVar2;
    }
    (**(code **)(*param_1 + 0x38))(param_1,&local_14);
  }
  else {
    local_14 = 0;
    (**(code **)(*param_1 + 0x20))(param_1,&local_14,4);
    uVar2 = (local_14 & 0xff00ff00) >> 8 | (local_14 & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    if ((int)param_1[2] != 0xff00) {
      uVar2 = local_14;
    }
    *param_2 = uVar2;
  }
  local_14._0_1_ = *(char *)((long)param_2 + 9);
  (**(code **)(*param_1 + 0x28))(param_1,&local_14);
  *(bool *)((long)param_2 + 9) = (char)local_14 != '\0';
  local_14 = CONCAT31(local_14._1_3_,*(undefined1 *)((long)param_2 + 10));
  (**(code **)(*param_1 + 0x28))(param_1,&local_14);
  *(bool *)((long)param_2 + 10) = (char)local_14 != '\0';
  if (param_3 < 7) {
    *(undefined1 *)(param_2 + 2) = 0;
    param_2[1] = 0xffffffff;
  }
  else {
    if (*(char *)((long)param_1 + 0xc) != '\0') {
      local_14 = CONCAT31(local_14._1_3_,4);
      (**(code **)(*param_1 + 0x20))(param_1,&local_14,1);
    }
    puVar1 = param_2 + 1;
    if ((int)param_1[1] == 2) {
      (**(code **)(*param_1 + 0x20))(param_1,puVar1,4);
    }
    else if ((int)param_1[1] == 1) {
      uVar2 = *puVar1;
      uVar3 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      local_14 = uVar3 >> 0x10 | uVar3 << 0x10;
      if ((int)param_1[2] != 0xff00) {
        local_14 = uVar2;
      }
      (**(code **)(*param_1 + 0x38))(param_1,&local_14);
    }
    else {
      local_14 = 0;
      (**(code **)(*param_1 + 0x20))(param_1,&local_14,4);
      uVar2 = (local_14 & 0xff00ff00) >> 8 | (local_14 & 0xff00ff) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
      if ((int)param_1[2] != 0xff00) {
        uVar2 = local_14;
      }
      *puVar1 = uVar2;
    }
    (**(code **)(*param_1 + 0x28))(param_1,param_2 + 2);
  }
  return param_1;
}


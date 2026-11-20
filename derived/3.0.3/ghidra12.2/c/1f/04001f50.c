
undefined8 FUN_04001f50(long *param_1,uint param_2,uint param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint local_24;
  
  *param_4 = param_2;
  *param_5 = param_3;
  if (*(char *)((long)param_1 + 0xc) != '\0') {
    local_24 = CONCAT31(local_24._1_3_,4);
    (**(code **)(*param_1 + 0x20))(param_1,&local_24,1);
  }
  if ((int)param_1[1] == 2) {
    (**(code **)(*param_1 + 0x20))(param_1,param_4,4);
    iVar3 = (int)param_1[1];
  }
  else if ((int)param_1[1] == 1) {
    uVar1 = *param_4;
    uVar2 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
    local_24 = uVar2 >> 0x10 | uVar2 << 0x10;
    if ((int)param_1[2] != 0xff00) {
      local_24 = uVar1;
    }
    (**(code **)(*param_1 + 0x38))(param_1,&local_24);
    iVar3 = (int)param_1[1];
  }
  else {
    local_24 = 0;
    (**(code **)(*param_1 + 0x20))(param_1,&local_24,4);
    uVar1 = (local_24 & 0xff00ff00) >> 8 | (local_24 & 0xff00ff) << 8;
    uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
    if ((int)param_1[2] != 0xff00) {
      uVar1 = local_24;
    }
    *param_4 = uVar1;
    iVar3 = (int)param_1[1];
  }
  if ((iVar3 != 0) || (*param_4 == param_2)) {
    if (*(char *)((long)param_1 + 0xc) != '\0') {
      local_24._1_3_ = (undefined3)(local_24 >> 8);
      local_24 = CONCAT31(local_24._1_3_,4);
      (**(code **)(*param_1 + 0x20))(param_1,&local_24,1);
      iVar3 = (int)param_1[1];
    }
    if (iVar3 == 2) {
      (**(code **)(*param_1 + 0x20))(param_1,param_5,4);
      iVar3 = (int)param_1[1];
    }
    else if (iVar3 == 1) {
      uVar1 = *param_5;
      uVar2 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
      local_24 = uVar2 >> 0x10 | uVar2 << 0x10;
      if ((int)param_1[2] != 0xff00) {
        local_24 = uVar1;
      }
      (**(code **)(*param_1 + 0x38))(param_1,&local_24);
      iVar3 = (int)param_1[1];
    }
    else {
      local_24 = 0;
      (**(code **)(*param_1 + 0x20))(param_1,&local_24,4);
      uVar1 = (local_24 & 0xff00ff00) >> 8 | (local_24 & 0xff00ff) << 8;
      uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
      if ((int)param_1[2] != 0xff00) {
        uVar1 = local_24;
      }
      *param_5 = uVar1;
      iVar3 = (int)param_1[1];
    }
    if (((iVar3 != 0) || (*param_5 < param_3)) || (*param_5 <= param_3)) {
      return 1;
    }
  }
  return 0;
}


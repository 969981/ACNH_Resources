
undefined8 FUN_0363de34(undefined8 param_1,long *param_2)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  uint local_24;
  uint local_8;
  uint local_4;
  
  local_8 = 1;
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_4 = CONCAT31(local_4._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_4,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,&local_8,4);
  }
  else if ((int)param_2[1] == 1) {
    local_4 = 0x1000000;
    if ((int)param_2[2] != 0xff00) {
      local_4 = 1;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_4);
  }
  else {
    local_4 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_4,4);
    uVar2 = (local_4 & 0xff00ff00) >> 8 | (local_4 & 0xff00ff) << 8;
    local_8 = uVar2 >> 0x10 | uVar2 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_8 = local_4;
    }
  }
  local_24 = 0;
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_4 = CONCAT31(local_4._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_4,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,4);
    cVar1 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    local_4 = 0;
    (**(code **)(*param_2 + 0x38))(param_2,&local_4);
    cVar1 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_4 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_4,4);
    uVar2 = (local_4 & 0xff00ff00) >> 8 | (local_4 & 0xff00ff) << 8;
    local_24 = uVar2 >> 0x10 | uVar2 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_24 = local_4;
    }
    cVar1 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar1 != '\0') {
    local_4._1_3_ = (undefined3)(local_4 >> 8);
    local_4 = CONCAT31(local_4._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_4,1);
  }
  if ((int)param_2[1] == 2) {
    lVar4 = *param_2;
    puVar3 = &local_24;
  }
  else {
    if ((int)param_2[1] == 1) {
      uVar2 = (local_24 & 0xff00ff00) >> 8 | (local_24 & 0xff00ff) << 8;
      local_4 = uVar2 >> 0x10 | uVar2 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_4 = local_24;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_4);
      return 1;
    }
    lVar4 = *param_2;
    local_4 = 0;
    puVar3 = &local_4;
  }
  (**(code **)(lVar4 + 0x20))(param_2,puVar3,4);
  return 1;
}


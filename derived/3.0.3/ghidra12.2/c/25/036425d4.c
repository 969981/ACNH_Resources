
void FUN_036425d4(long *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint local_14;
  
  if (*(char *)((long)param_1 + 0xc) != '\0') {
    local_14 = CONCAT31(local_14._1_3_,4);
    (**(code **)(*param_1 + 0x20))(param_1,&local_14,1);
  }
  if ((int)param_1[1] == 2) {
    (**(code **)(*param_1 + 0x20))(param_1,param_2,4);
    cVar3 = *(char *)((long)param_1 + 0xc);
  }
  else if ((int)param_1[1] == 1) {
    uVar2 = *param_2;
    uVar4 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    local_14 = uVar4 >> 0x10 | uVar4 << 0x10;
    if ((int)param_1[2] != 0xff00) {
      local_14 = uVar2;
    }
    (**(code **)(*param_1 + 0x38))(param_1,&local_14);
    cVar3 = *(char *)((long)param_1 + 0xc);
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
    cVar3 = *(char *)((long)param_1 + 0xc);
  }
  if (cVar3 != '\0') {
    local_14._1_3_ = (undefined3)(local_14 >> 8);
    local_14 = CONCAT31(local_14._1_3_,4);
    (**(code **)(*param_1 + 0x20))(param_1,&local_14,1);
  }
  puVar1 = param_2 + 1;
  if ((int)param_1[1] == 2) {
    (**(code **)(*param_1 + 0x20))(param_1,puVar1,4);
    cVar3 = *(char *)((long)param_1 + 0xc);
  }
  else if ((int)param_1[1] == 1) {
    uVar2 = *puVar1;
    uVar4 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    local_14 = uVar4 >> 0x10 | uVar4 << 0x10;
    if ((int)param_1[2] != 0xff00) {
      local_14 = uVar2;
    }
    (**(code **)(*param_1 + 0x38))(param_1,&local_14);
    cVar3 = *(char *)((long)param_1 + 0xc);
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
    cVar3 = *(char *)((long)param_1 + 0xc);
  }
  if (cVar3 != '\0') {
    local_14._1_3_ = (undefined3)(local_14 >> 8);
    local_14 = CONCAT31(local_14._1_3_,4);
    (**(code **)(*param_1 + 0x20))(param_1,&local_14,1);
  }
  puVar1 = param_2 + 2;
  if ((int)param_1[1] == 2) {
    (**(code **)(*param_1 + 0x20))(param_1,puVar1,4);
    cVar3 = *(char *)((long)param_1 + 0xc);
  }
  else if ((int)param_1[1] == 1) {
    uVar2 = *puVar1;
    uVar4 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    local_14 = uVar4 >> 0x10 | uVar4 << 0x10;
    if ((int)param_1[2] != 0xff00) {
      local_14 = uVar2;
    }
    (**(code **)(*param_1 + 0x38))(param_1,&local_14);
    cVar3 = *(char *)((long)param_1 + 0xc);
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
    cVar3 = *(char *)((long)param_1 + 0xc);
  }
  if (cVar3 != '\0') {
    local_14._1_3_ = (undefined3)(local_14 >> 8);
    local_14 = CONCAT31(local_14._1_3_,4);
    (**(code **)(*param_1 + 0x20))(param_1,&local_14,1);
  }
  puVar1 = param_2 + 3;
  if ((int)param_1[1] == 2) {
    (**(code **)(*param_1 + 0x20))(param_1,puVar1,4);
    cVar3 = *(char *)((long)param_1 + 0xc);
  }
  else if ((int)param_1[1] == 1) {
    uVar2 = *puVar1;
    uVar4 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    local_14 = uVar4 >> 0x10 | uVar4 << 0x10;
    if ((int)param_1[2] != 0xff00) {
      local_14 = uVar2;
    }
    (**(code **)(*param_1 + 0x38))(param_1,&local_14);
    cVar3 = *(char *)((long)param_1 + 0xc);
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
    cVar3 = *(char *)((long)param_1 + 0xc);
  }
  if (cVar3 != '\0') {
    local_14._1_3_ = (undefined3)(local_14 >> 8);
    local_14 = CONCAT31(local_14._1_3_,4);
    (**(code **)(*param_1 + 0x20))(param_1,&local_14,1);
  }
  puVar1 = param_2 + 4;
  if ((int)param_1[1] == 2) {
    (**(code **)(*param_1 + 0x20))(param_1,puVar1,4);
    cVar3 = *(char *)((long)param_1 + 0xc);
  }
  else if ((int)param_1[1] == 1) {
    uVar2 = *puVar1;
    uVar4 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    local_14 = uVar4 >> 0x10 | uVar4 << 0x10;
    if ((int)param_1[2] != 0xff00) {
      local_14 = uVar2;
    }
    (**(code **)(*param_1 + 0x38))(param_1,&local_14);
    cVar3 = *(char *)((long)param_1 + 0xc);
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
    cVar3 = *(char *)((long)param_1 + 0xc);
  }
  if (cVar3 != '\0') {
    local_14._1_3_ = (undefined3)(local_14 >> 8);
    local_14 = CONCAT31(local_14._1_3_,4);
    (**(code **)(*param_1 + 0x20))(param_1,&local_14,1);
  }
  param_2 = param_2 + 5;
  if ((int)param_1[1] == 2) {
    (**(code **)(*param_1 + 0x20))(param_1,param_2,4);
  }
  else if ((int)param_1[1] == 1) {
    uVar2 = *param_2;
    uVar4 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    local_14 = uVar4 >> 0x10 | uVar4 << 0x10;
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
  return;
}



long * FUN_0365af60(long *param_1,long param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  uint local_34;
  
  uVar5 = FUN_0365d0d0();
  uVar5 = FUN_0365d310(uVar5,param_2 + 0xc);
  lVar6 = FUN_0365d710(uVar5,param_2 + 0x30,param_3);
  if (*(char *)(lVar6 + 0xc) != '\0') {
    local_34 = CONCAT31(local_34._1_3_,4);
    (**(code **)(*param_1 + 0x20))(param_1,&local_34,1);
  }
  puVar1 = (uint *)(param_2 + 0x20);
  if ((int)param_1[1] == 2) {
    (**(code **)(*param_1 + 0x20))(param_1,puVar1,4);
    cVar3 = *(char *)((long)param_1 + 0xc);
  }
  else if ((int)param_1[1] == 1) {
    uVar2 = *puVar1;
    uVar4 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    local_34 = uVar4 >> 0x10 | uVar4 << 0x10;
    if ((int)param_1[2] != 0xff00) {
      local_34 = uVar2;
    }
    (**(code **)(*param_1 + 0x38))(param_1,&local_34);
    cVar3 = *(char *)((long)param_1 + 0xc);
  }
  else {
    local_34 = 0;
    (**(code **)(*param_1 + 0x20))(param_1,&local_34,4);
    uVar2 = (local_34 & 0xff00ff00) >> 8 | (local_34 & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    if ((int)param_1[2] != 0xff00) {
      uVar2 = local_34;
    }
    *puVar1 = uVar2;
    cVar3 = *(char *)((long)param_1 + 0xc);
  }
  if (cVar3 != '\0') {
    local_34._1_3_ = (undefined3)(local_34 >> 8);
    local_34 = CONCAT31(local_34._1_3_,4);
    (**(code **)(*param_1 + 0x20))(param_1,&local_34,1);
  }
  puVar1 = (uint *)(param_2 + 0x24);
  if ((int)param_1[1] == 2) {
    (**(code **)(*param_1 + 0x20))(param_1,puVar1,4);
    cVar3 = *(char *)((long)param_1 + 0xc);
  }
  else if ((int)param_1[1] == 1) {
    uVar2 = *puVar1;
    uVar4 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    local_34 = uVar4 >> 0x10 | uVar4 << 0x10;
    if ((int)param_1[2] != 0xff00) {
      local_34 = uVar2;
    }
    (**(code **)(*param_1 + 0x38))(param_1,&local_34);
    cVar3 = *(char *)((long)param_1 + 0xc);
  }
  else {
    local_34 = 0;
    (**(code **)(*param_1 + 0x20))(param_1,&local_34,4);
    uVar2 = (local_34 & 0xff00ff00) >> 8 | (local_34 & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    if ((int)param_1[2] != 0xff00) {
      uVar2 = local_34;
    }
    *puVar1 = uVar2;
    cVar3 = *(char *)((long)param_1 + 0xc);
  }
  if (cVar3 != '\0') {
    local_34._1_3_ = (undefined3)(local_34 >> 8);
    local_34 = CONCAT31(local_34._1_3_,4);
    (**(code **)(*param_1 + 0x20))(param_1,&local_34,1);
  }
  puVar1 = (uint *)(param_2 + 0x28);
  if ((int)param_1[1] == 2) {
    (**(code **)(*param_1 + 0x20))(param_1,puVar1,4);
  }
  else if ((int)param_1[1] == 1) {
    uVar2 = *puVar1;
    uVar4 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    local_34 = uVar4 >> 0x10 | uVar4 << 0x10;
    if ((int)param_1[2] != 0xff00) {
      local_34 = uVar2;
    }
    (**(code **)(*param_1 + 0x38))(param_1,&local_34);
  }
  else {
    local_34 = 0;
    (**(code **)(*param_1 + 0x20))(param_1,&local_34,4);
    uVar2 = (local_34 & 0xff00ff00) >> 8 | (local_34 & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    if ((int)param_1[2] != 0xff00) {
      uVar2 = local_34;
    }
    *puVar1 = uVar2;
  }
  local_34._0_1_ = *(char *)(param_2 + 0x2c);
  (**(code **)(*param_1 + 0x28))(param_1,&local_34);
  *(bool *)(param_2 + 0x2c) = (char)local_34 != '\0';
  local_34._0_1_ = *(char *)(param_2 + 0x2d);
  (**(code **)(*param_1 + 0x28))(param_1,&local_34);
  *(bool *)(param_2 + 0x2d) = (char)local_34 != '\0';
  local_34 = CONCAT31(local_34._1_3_,*(undefined1 *)(param_2 + 0x2e));
  (**(code **)(*param_1 + 0x28))(param_1,&local_34);
  *(bool *)(param_2 + 0x2e) = (char)local_34 != '\0';
  if (*(char *)((long)param_1 + 0xc) != '\0') {
    local_34 = CONCAT31(local_34._1_3_,4);
    (**(code **)(*param_1 + 0x20))(param_1,&local_34,1);
  }
  puVar1 = (uint *)(param_2 + 0x3c);
  if ((int)param_1[1] == 2) {
    (**(code **)(*param_1 + 0x20))(param_1,puVar1,4);
    cVar3 = *(char *)((long)param_1 + 0xc);
  }
  else if ((int)param_1[1] == 1) {
    uVar2 = *puVar1;
    uVar4 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    local_34 = uVar4 >> 0x10 | uVar4 << 0x10;
    if ((int)param_1[2] != 0xff00) {
      local_34 = uVar2;
    }
    (**(code **)(*param_1 + 0x38))(param_1,&local_34);
    cVar3 = *(char *)((long)param_1 + 0xc);
  }
  else {
    local_34 = 0;
    (**(code **)(*param_1 + 0x20))(param_1,&local_34,4);
    uVar2 = (local_34 & 0xff00ff00) >> 8 | (local_34 & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    if ((int)param_1[2] != 0xff00) {
      uVar2 = local_34;
    }
    *puVar1 = uVar2;
    cVar3 = *(char *)((long)param_1 + 0xc);
  }
  if (cVar3 != '\0') {
    local_34._1_3_ = (undefined3)(local_34 >> 8);
    local_34 = CONCAT31(local_34._1_3_,4);
    (**(code **)(*param_1 + 0x20))(param_1,&local_34,1);
  }
  puVar1 = (uint *)(param_2 + 0x40);
  if ((int)param_1[1] == 2) {
    (**(code **)(*param_1 + 0x20))(param_1,puVar1,4);
  }
  else if ((int)param_1[1] == 1) {
    uVar2 = *puVar1;
    uVar4 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    local_34 = uVar4 >> 0x10 | uVar4 << 0x10;
    if ((int)param_1[2] != 0xff00) {
      local_34 = uVar2;
    }
    (**(code **)(*param_1 + 0x38))(param_1,&local_34);
  }
  else {
    local_34 = 0;
    (**(code **)(*param_1 + 0x20))(param_1,&local_34,4);
    uVar2 = (local_34 & 0xff00ff00) >> 8 | (local_34 & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    if ((int)param_1[2] != 0xff00) {
      uVar2 = local_34;
    }
    *puVar1 = uVar2;
  }
  if (0xb < param_3) {
    if (*(char *)((long)param_1 + 0xc) != '\0') {
      local_34._1_3_ = (undefined3)(local_34 >> 8);
      local_34 = CONCAT31(local_34._1_3_,4);
      (**(code **)(*param_1 + 0x20))(param_1,&local_34,1);
    }
    puVar1 = (uint *)(param_2 + 0x44);
    if ((int)param_1[1] == 2) {
      (**(code **)(*param_1 + 0x20))(param_1,puVar1,4);
      cVar3 = *(char *)((long)param_1 + 0xc);
    }
    else if ((int)param_1[1] == 1) {
      uVar2 = *puVar1;
      uVar4 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      local_34 = uVar4 >> 0x10 | uVar4 << 0x10;
      if ((int)param_1[2] != 0xff00) {
        local_34 = uVar2;
      }
      (**(code **)(*param_1 + 0x38))(param_1,&local_34);
      cVar3 = *(char *)((long)param_1 + 0xc);
    }
    else {
      local_34 = 0;
      (**(code **)(*param_1 + 0x20))(param_1,&local_34,4);
      uVar2 = (local_34 & 0xff00ff00) >> 8 | (local_34 & 0xff00ff) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
      if ((int)param_1[2] != 0xff00) {
        uVar2 = local_34;
      }
      *puVar1 = uVar2;
      cVar3 = *(char *)((long)param_1 + 0xc);
    }
    if (cVar3 != '\0') {
      local_34._1_3_ = (undefined3)(local_34 >> 8);
      local_34 = CONCAT31(local_34._1_3_,4);
      (**(code **)(*param_1 + 0x20))(param_1,&local_34,1);
    }
    puVar1 = (uint *)(param_2 + 0x48);
    if ((int)param_1[1] == 2) {
      (**(code **)(*param_1 + 0x20))(param_1,puVar1,4);
    }
    else if ((int)param_1[1] == 1) {
      uVar2 = *puVar1;
      uVar4 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      local_34 = uVar4 >> 0x10 | uVar4 << 0x10;
      if ((int)param_1[2] != 0xff00) {
        local_34 = uVar2;
      }
      (**(code **)(*param_1 + 0x38))(param_1,&local_34);
    }
    else {
      local_34 = 0;
      (**(code **)(*param_1 + 0x20))(param_1,&local_34,4);
      uVar2 = (local_34 & 0xff00ff00) >> 8 | (local_34 & 0xff00ff) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
      if ((int)param_1[2] != 0xff00) {
        uVar2 = local_34;
      }
      *puVar1 = uVar2;
    }
  }
  return param_1;
}


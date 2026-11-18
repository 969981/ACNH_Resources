
void FUN_03645464(long param_1,long *param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_18;
  uint local_14;
  
  if ((param_3 < 0xc) && (param_4 < 0x1c)) {
    local_18 = 0;
  }
  else {
    local_18 = 2;
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_14 = CONCAT31(local_14._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_14,1);
    }
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,&local_18,4);
    }
    else if ((int)param_2[1] == 1) {
      uVar2 = (local_18 & 0xff00ff00) >> 8 | (local_18 & 0xff00ff) << 8;
      local_14 = uVar2 >> 0x10 | uVar2 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_14 = local_18;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_14);
    }
    else {
      local_14 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_14,4);
      uVar2 = (local_14 & 0xff00ff00) >> 8 | (local_14 & 0xff00ff) << 8;
      local_18 = uVar2 >> 0x10 | uVar2 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_18 = local_14;
      }
    }
    if (1 < local_18) goto LAB_03645580;
  }
  if ((int)param_2[1] != 0) {
LAB_03645580:
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_14 = CONCAT31(local_14._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_14,1);
    }
    puVar1 = (uint *)(param_1 + 8);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
      cVar3 = *(char *)((long)param_2 + 0xc);
    }
    else if ((int)param_2[1] == 1) {
      uVar2 = *puVar1;
      uVar4 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      local_14 = uVar4 >> 0x10 | uVar4 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_14 = uVar2;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_14);
      cVar3 = *(char *)((long)param_2 + 0xc);
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
      cVar3 = *(char *)((long)param_2 + 0xc);
    }
    if (cVar3 != '\0') {
      local_14._1_3_ = (undefined3)(local_14 >> 8);
      local_14 = CONCAT31(local_14._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_14,1);
    }
    puVar1 = (uint *)(param_1 + 0xc);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
      cVar3 = *(char *)((long)param_2 + 0xc);
    }
    else if ((int)param_2[1] == 1) {
      uVar2 = *puVar1;
      uVar4 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      local_14 = uVar4 >> 0x10 | uVar4 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_14 = uVar2;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_14);
      cVar3 = *(char *)((long)param_2 + 0xc);
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
      cVar3 = *(char *)((long)param_2 + 0xc);
    }
    if (cVar3 != '\0') {
      local_14._1_3_ = (undefined3)(local_14 >> 8);
      local_14 = CONCAT31(local_14._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_14,1);
    }
    puVar1 = (uint *)(param_1 + 0x10);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
      cVar3 = *(char *)((long)param_2 + 0xc);
    }
    else if ((int)param_2[1] == 1) {
      uVar2 = *puVar1;
      uVar4 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      local_14 = uVar4 >> 0x10 | uVar4 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_14 = uVar2;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_14);
      cVar3 = *(char *)((long)param_2 + 0xc);
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
      cVar3 = *(char *)((long)param_2 + 0xc);
    }
    if (cVar3 != '\0') {
      local_14._1_3_ = (undefined3)(local_14 >> 8);
      local_14 = CONCAT31(local_14._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_14,1);
    }
    puVar1 = (uint *)(param_1 + 0x14);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
      cVar3 = *(char *)((long)param_2 + 0xc);
    }
    else if ((int)param_2[1] == 1) {
      uVar2 = *puVar1;
      uVar4 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      local_14 = uVar4 >> 0x10 | uVar4 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_14 = uVar2;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_14);
      cVar3 = *(char *)((long)param_2 + 0xc);
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
      cVar3 = *(char *)((long)param_2 + 0xc);
    }
    if (cVar3 != '\0') {
      local_14._1_3_ = (undefined3)(local_14 >> 8);
      local_14 = CONCAT31(local_14._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_14,1);
    }
    puVar1 = (uint *)(param_1 + 0x18);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
      cVar3 = *(char *)((long)param_2 + 0xc);
    }
    else if ((int)param_2[1] == 1) {
      uVar2 = *puVar1;
      uVar4 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      local_14 = uVar4 >> 0x10 | uVar4 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_14 = uVar2;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_14);
      cVar3 = *(char *)((long)param_2 + 0xc);
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
      cVar3 = *(char *)((long)param_2 + 0xc);
    }
    if (cVar3 != '\0') {
      local_14._1_3_ = (undefined3)(local_14 >> 8);
      local_14 = CONCAT31(local_14._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_14,1);
    }
    puVar1 = (uint *)(param_1 + 0x1c);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
      cVar3 = *(char *)((long)param_2 + 0xc);
    }
    else if ((int)param_2[1] == 1) {
      uVar2 = *puVar1;
      uVar4 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      local_14 = uVar4 >> 0x10 | uVar4 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_14 = uVar2;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_14);
      cVar3 = *(char *)((long)param_2 + 0xc);
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
      cVar3 = *(char *)((long)param_2 + 0xc);
    }
    if (cVar3 != '\0') {
      local_14._1_3_ = (undefined3)(local_14 >> 8);
      local_14 = CONCAT31(local_14._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_14,1);
    }
    puVar1 = (uint *)(param_1 + 0x20);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
    }
    else if ((int)param_2[1] == 1) {
      uVar2 = *puVar1;
      uVar4 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      local_14 = uVar4 >> 0x10 | uVar4 << 0x10;
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
    local_14 = CONCAT31(local_14._1_3_,*(undefined1 *)(param_1 + 0x24));
    (**(code **)(*param_2 + 0x28))(param_2,&local_14);
    *(bool *)(param_1 + 0x24) = (char)local_14 != '\0';
    return;
  }
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_14 = CONCAT31(local_14._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,1);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,&local_38,4);
      cVar3 = *(char *)((long)param_2 + 0xc);
      goto joined_r0x03645c3c;
    }
    if ((int)param_2[1] == 1) {
      uVar2 = (local_38 & 0xff00ff00) >> 8 | (local_38 & 0xff00ff) << 8;
      local_14 = uVar2 >> 0x10 | uVar2 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_14 = local_38;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_14);
      cVar3 = *(char *)((long)param_2 + 0xc);
      goto joined_r0x03645c3c;
    }
  }
  local_14 = 0;
  (**(code **)(*param_2 + 0x20))(param_2,&local_14,4);
  uVar2 = (local_14 & 0xff00ff00) >> 8 | (local_14 & 0xff00ff) << 8;
  local_38 = uVar2 >> 0x10 | uVar2 << 0x10;
  if ((int)param_2[2] != 0xff00) {
    local_38 = local_14;
  }
  cVar3 = *(char *)((long)param_2 + 0xc);
joined_r0x03645c3c:
  if (cVar3 != '\0') {
    local_14._1_3_ = (undefined3)(local_14 >> 8);
    local_14 = CONCAT31(local_14._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,&local_34,4);
    cVar3 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar2 = (local_34 & 0xff00ff00) >> 8 | (local_34 & 0xff00ff) << 8;
    local_14 = uVar2 >> 0x10 | uVar2 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_14 = local_34;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_14);
    cVar3 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_14 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,4);
    uVar2 = (local_14 & 0xff00ff00) >> 8 | (local_14 & 0xff00ff) << 8;
    local_34 = uVar2 >> 0x10 | uVar2 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_34 = local_14;
    }
    cVar3 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar3 != '\0') {
    local_14._1_3_ = (undefined3)(local_14 >> 8);
    local_14 = CONCAT31(local_14._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,&local_3c,4);
    cVar3 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    (**(code **)(*param_2 + 0x38))(param_2,&local_14);
    cVar3 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_14 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,4);
    uVar2 = (local_14 & 0xff00ff00) >> 8 | (local_14 & 0xff00ff) << 8;
    local_3c = uVar2 >> 0x10 | uVar2 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_3c = local_14;
    }
    cVar3 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar3 != '\0') {
    local_14._1_3_ = (undefined3)(local_14 >> 8);
    local_14 = CONCAT31(local_14._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,&local_44,4);
    cVar3 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    (**(code **)(*param_2 + 0x38))(param_2,&local_14);
    cVar3 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_14 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,4);
    uVar2 = (local_14 & 0xff00ff00) >> 8 | (local_14 & 0xff00ff) << 8;
    local_44 = uVar2 >> 0x10 | uVar2 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_44 = local_14;
    }
    cVar3 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar3 != '\0') {
    local_14._1_3_ = (undefined3)(local_14 >> 8);
    local_14 = CONCAT31(local_14._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,&local_40,4);
    cVar3 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    (**(code **)(*param_2 + 0x38))(param_2,&local_14);
    cVar3 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_14 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,4);
    uVar2 = (local_14 & 0xff00ff00) >> 8 | (local_14 & 0xff00ff) << 8;
    local_40 = uVar2 >> 0x10 | uVar2 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_40 = local_14;
    }
    cVar3 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar3 != '\0') {
    local_14._1_3_ = (undefined3)(local_14 >> 8);
    local_14 = CONCAT31(local_14._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,&local_48,4);
    cVar3 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    (**(code **)(*param_2 + 0x38))(param_2,&local_14);
    cVar3 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_14 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,4);
    uVar2 = (local_14 & 0xff00ff00) >> 8 | (local_14 & 0xff00ff) << 8;
    local_48 = uVar2 >> 0x10 | uVar2 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_48 = local_14;
    }
    cVar3 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar3 != '\0') {
    local_14._1_3_ = (undefined3)(local_14 >> 8);
    local_14 = CONCAT31(local_14._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,1);
  }
  puVar1 = (uint *)(param_1 + 0x20);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar2 = *puVar1;
    uVar4 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    local_14 = uVar4 >> 0x10 | uVar4 << 0x10;
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
  *(uint *)(param_1 + 8) = local_38 & 0xff | (local_38 >> 8 & 0xf) << 0x10;
  *(uint *)(param_1 + 0xc) = local_34;
  *(uint *)(param_1 + 0x10) = local_3c;
  *(uint *)(param_1 + 0x14) = local_44 & 0xff | (local_44 >> 8 & 0xf) << 0x10;
  *(uint *)(param_1 + 0x18) = local_40;
  *(uint *)(param_1 + 0x1c) = local_48;
  return;
}


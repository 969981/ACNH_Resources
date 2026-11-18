
void FUN_0364f294(long param_1,long *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  ushort *puVar4;
  ushort uVar5;
  uint uVar6;
  char cVar7;
  ushort uVar8;
  uint uVar9;
  undefined4 local_24;
  
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_24 = CONCAT31(local_24._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,1);
  }
  puVar1 = (uint *)(param_1 + 8);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
    cVar7 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar6 = *puVar1;
    uVar9 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    local_24 = uVar9 >> 0x10 | uVar9 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_24 = uVar6;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_24);
    cVar7 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_24 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,4);
    uVar6 = (local_24 & 0xff00ff00) >> 8 | (local_24 & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar6 = local_24;
    }
    *puVar1 = uVar6;
    cVar7 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar7 != '\0') {
    local_24._1_3_ = (undefined3)(local_24 >> 8);
    local_24 = CONCAT31(local_24._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,1);
  }
  puVar1 = (uint *)(param_1 + 0xc);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
    cVar7 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar6 = *puVar1;
    uVar9 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    local_24 = uVar9 >> 0x10 | uVar9 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_24 = uVar6;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_24);
    cVar7 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_24 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,4);
    uVar6 = (local_24 & 0xff00ff00) >> 8 | (local_24 & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar6 = local_24;
    }
    *puVar1 = uVar6;
    cVar7 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar7 != '\0') {
    local_24._1_3_ = (undefined3)(local_24 >> 8);
    local_24 = CONCAT31(local_24._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,1);
  }
  puVar1 = (uint *)(param_1 + 0x10);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar6 = *puVar1;
    uVar9 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    local_24 = uVar9 >> 0x10 | uVar9 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_24 = uVar6;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_24);
  }
  else {
    local_24 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,4);
    uVar6 = (local_24 & 0xff00ff00) >> 8 | (local_24 & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar6 = local_24;
    }
    *puVar1 = uVar6;
  }
  local_24 = CONCAT31(local_24._1_3_,*(undefined1 *)(param_1 + 0x14));
  (**(code **)(*param_2 + 0x28))(param_2,&local_24);
  *(bool *)(param_1 + 0x14) = (char)local_24 != '\0';
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_24 = CONCAT31(local_24._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,1);
  }
  puVar1 = (uint *)(param_1 + 0x18);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
    cVar7 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar6 = *puVar1;
    uVar9 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    local_24 = uVar9 >> 0x10 | uVar9 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_24 = uVar6;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_24);
    cVar7 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_24 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,4);
    uVar6 = (local_24 & 0xff00ff00) >> 8 | (local_24 & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar6 = local_24;
    }
    *puVar1 = uVar6;
    cVar7 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar7 != '\0') {
    local_24._1_3_ = (undefined3)(local_24 >> 8);
    local_24 = CONCAT31(local_24._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,1);
  }
  puVar1 = (uint *)(param_1 + 0x2c);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
    cVar7 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar6 = *puVar1;
    uVar9 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    local_24 = uVar9 >> 0x10 | uVar9 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_24 = uVar6;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_24);
    cVar7 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_24 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,4);
    uVar6 = (local_24 & 0xff00ff00) >> 8 | (local_24 & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar6 = local_24;
    }
    *puVar1 = uVar6;
    cVar7 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar7 != '\0') {
    local_24._1_3_ = (undefined3)(local_24 >> 8);
    local_24 = CONCAT31(local_24._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,1);
  }
  puVar2 = (uint *)(param_1 + 0x30);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar2,4);
    cVar7 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar6 = *puVar2;
    uVar9 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    local_24 = uVar9 >> 0x10 | uVar9 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_24 = uVar6;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_24);
    cVar7 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_24 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,4);
    uVar6 = (local_24 & 0xff00ff00) >> 8 | (local_24 & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar6 = local_24;
    }
    *puVar2 = uVar6;
    cVar7 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar7 != '\0') {
    local_24._1_3_ = (undefined3)(local_24 >> 8);
    local_24 = CONCAT31(local_24._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,1);
  }
  puVar2 = (uint *)(param_1 + 0x34);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar2,4);
    cVar7 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar6 = *puVar2;
    uVar9 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    local_24 = uVar9 >> 0x10 | uVar9 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_24 = uVar6;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_24);
    cVar7 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_24 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,4);
    uVar6 = (local_24 & 0xff00ff00) >> 8 | (local_24 & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar6 = local_24;
    }
    *puVar2 = uVar6;
    cVar7 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar7 != '\0') {
    local_24._1_3_ = (undefined3)(local_24 >> 8);
    local_24 = CONCAT31(local_24._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,1);
  }
  puVar2 = (uint *)(param_1 + 0x38);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar2,4);
    cVar7 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar6 = *puVar2;
    uVar9 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    local_24 = uVar9 >> 0x10 | uVar9 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_24 = uVar6;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_24);
    cVar7 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_24 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,4);
    uVar6 = (local_24 & 0xff00ff00) >> 8 | (local_24 & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar6 = local_24;
    }
    *puVar2 = uVar6;
    cVar7 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar7 != '\0') {
    local_24._1_3_ = (undefined3)(local_24 >> 8);
    local_24 = CONCAT31(local_24._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,1);
  }
  puVar2 = (uint *)(param_1 + 0x80);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar2,4);
    cVar7 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar6 = *puVar2;
    uVar9 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    local_24 = uVar9 >> 0x10 | uVar9 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_24 = uVar6;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_24);
    cVar7 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_24 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,4);
    uVar6 = (local_24 & 0xff00ff00) >> 8 | (local_24 & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar6 = local_24;
    }
    *puVar2 = uVar6;
    cVar7 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar7 != '\0') {
    local_24._1_3_ = (undefined3)(local_24 >> 8);
    local_24 = CONCAT31(local_24._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,1);
  }
  puVar3 = (uint *)(param_1 + 0x84);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar3,4);
    cVar7 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar6 = *puVar3;
    uVar9 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    local_24 = uVar9 >> 0x10 | uVar9 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_24 = uVar6;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_24);
    cVar7 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_24 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,4);
    uVar6 = (local_24 & 0xff00ff00) >> 8 | (local_24 & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar6 = local_24;
    }
    *puVar3 = uVar6;
    cVar7 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar7 != '\0') {
    local_24._1_3_ = (undefined3)(local_24 >> 8);
    local_24 = CONCAT31(local_24._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,1);
  }
  puVar3 = (uint *)(param_1 + 0x88);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar3,4);
    cVar7 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar6 = *puVar3;
    uVar9 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    local_24 = uVar9 >> 0x10 | uVar9 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_24 = uVar6;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_24);
    cVar7 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_24 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,4);
    uVar6 = (local_24 & 0xff00ff00) >> 8 | (local_24 & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar6 = local_24;
    }
    *puVar3 = uVar6;
    cVar7 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar7 != '\0') {
    local_24._1_3_ = (undefined3)(local_24 >> 8);
    local_24 = CONCAT31(local_24._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,1);
  }
  puVar3 = (uint *)(param_1 + 0x8c);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar3,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar6 = *puVar3;
    uVar9 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    local_24 = uVar9 >> 0x10 | uVar9 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_24 = uVar6;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_24);
  }
  else {
    local_24 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,4);
    uVar6 = (local_24 & 0xff00ff00) >> 8 | (local_24 & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar6 = local_24;
    }
    *puVar3 = uVar6;
  }
  local_24 = CONCAT31(local_24._1_3_,*(undefined1 *)(param_1 + 0x90));
  (**(code **)(*param_2 + 0x28))(param_2,&local_24);
  *(bool *)(param_1 + 0x90) = (char)local_24 != '\0';
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_24 = CONCAT31(local_24._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,1);
  }
  puVar3 = (uint *)(param_1 + 0x94);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar3,4);
    cVar7 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar6 = *puVar3;
    uVar9 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    local_24 = uVar9 >> 0x10 | uVar9 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_24 = uVar6;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_24);
    cVar7 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_24 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,4);
    uVar6 = (local_24 & 0xff00ff00) >> 8 | (local_24 & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar6 = local_24;
    }
    *puVar3 = uVar6;
    cVar7 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar7 != '\0') {
    local_24._1_3_ = (undefined3)(local_24 >> 8);
    local_24 = CONCAT31(local_24._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,1);
  }
  puVar3 = (uint *)(param_1 + 0x98);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar3,4);
    cVar7 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar6 = *puVar3;
    uVar9 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    local_24 = uVar9 >> 0x10 | uVar9 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_24 = uVar6;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_24);
    cVar7 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_24 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,4);
    uVar6 = (local_24 & 0xff00ff00) >> 8 | (local_24 & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar6 = local_24;
    }
    *puVar3 = uVar6;
    cVar7 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar7 != '\0') {
    local_24._1_3_ = (undefined3)(local_24 >> 8);
    local_24 = CONCAT31(local_24._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,1);
  }
  puVar3 = (uint *)(param_1 + 0x9c);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar3,4);
    cVar7 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar6 = *puVar3;
    uVar9 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    local_24 = uVar9 >> 0x10 | uVar9 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_24 = uVar6;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_24);
    cVar7 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_24 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,4);
    uVar6 = (local_24 & 0xff00ff00) >> 8 | (local_24 & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar6 = local_24;
    }
    *puVar3 = uVar6;
    cVar7 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar7 != '\0') {
    local_24._1_3_ = (undefined3)(local_24 >> 8);
    local_24 = CONCAT31(local_24._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,1);
  }
  puVar3 = (uint *)(param_1 + 0xa0);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar3,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar6 = *puVar3;
    uVar9 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    local_24 = uVar9 >> 0x10 | uVar9 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_24 = uVar6;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_24);
  }
  else {
    local_24 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,4);
    uVar6 = (local_24 & 0xff00ff00) >> 8 | (local_24 & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar6 = local_24;
    }
    *puVar3 = uVar6;
  }
  local_24._0_1_ = *(char *)(param_1 + 0xa4);
  (**(code **)(*param_2 + 0x28))(param_2,&local_24);
  *(bool *)(param_1 + 0xa4) = (char)local_24 != '\0';
  local_24._0_1_ = *(char *)(param_1 + 0xa5);
  (**(code **)(*param_2 + 0x28))(param_2,&local_24);
  *(bool *)(param_1 + 0xa5) = (char)local_24 != '\0';
  local_24 = CONCAT31(local_24._1_3_,*(undefined1 *)(param_1 + 0xa6));
  (**(code **)(*param_2 + 0x28))(param_2,&local_24);
  *(bool *)(param_1 + 0xa6) = (char)local_24 != '\0';
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0xa7);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0xa8);
  puVar4 = (ushort *)(param_1 + 0xaa);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar4,2);
  }
  else if ((int)param_2[1] == 1) {
    uVar8 = *puVar4;
    uVar5 = uVar8 >> 8 | uVar8 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar5 = uVar8;
    }
    local_24 = CONCAT22(local_24._2_2_,uVar5);
    (**(code **)(*param_2 + 0x30))(param_2,&local_24);
  }
  else {
    local_24 = (uint)local_24._2_2_ << 0x10;
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,2);
    uVar5 = (ushort)local_24 >> 8 | (ushort)local_24 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar5 = (ushort)local_24;
    }
    *puVar4 = uVar5;
  }
  local_24._0_1_ = *(char *)(param_1 + 0xac);
  (**(code **)(*param_2 + 0x28))(param_2,&local_24);
  *(bool *)(param_1 + 0xac) = (char)local_24 != '\0';
  FUN_03652360(param_2,param_1 + 0x1c,puVar1);
  FUN_03652360(param_2,param_1 + 0x3c,param_1 + 0x4c);
  local_24._0_1_ = *(char *)(param_1 + 0x4c);
  (**(code **)(*param_2 + 0x28))(param_2,&local_24);
  *(bool *)(param_1 + 0x4c) = (char)local_24 != '\0';
  local_24._0_1_ = *(char *)(param_1 + 0x4d);
  (**(code **)(*param_2 + 0x28))(param_2,&local_24);
  *(bool *)(param_1 + 0x4d) = (char)local_24 != '\0';
  local_24._0_1_ = *(char *)(param_1 + 0x4e);
  (**(code **)(*param_2 + 0x28))(param_2,&local_24);
  *(bool *)(param_1 + 0x4e) = (char)local_24 != '\0';
  local_24 = CONCAT31(local_24._1_3_,*(undefined1 *)(param_1 + 0x4f));
  (**(code **)(*param_2 + 0x28))(param_2,&local_24);
  *(bool *)(param_1 + 0x4f) = (char)local_24 != '\0';
  FUN_03652360(param_2,param_1 + 0x50,puVar2);
  FUN_0364f04c(param_1);
  if (*(char *)(param_1 + 0xac) == '\0') {
    FUN_03650e08(param_1);
    FUN_03650ad4(param_1);
  }
  else {
    FUN_03650ad4(param_1);
    FUN_03650e08(param_1);
  }
  FUN_03650710(param_1,0);
  FUN_03650710(param_1,1);
  FUN_03650710(param_1,2);
  FUN_03650710(param_1,3);
  return;
}


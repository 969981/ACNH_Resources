
uint FUN_03642b00(long param_1,long *param_2)

{
  uint *puVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  uint uVar5;
  char cVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  uint local_58;
  undefined4 local_54;
  
  uVar10 = FUN_04002180(param_2,4,2,&local_58);
  if ((uVar10 & 1) != 0) {
    lVar11 = param_2[1];
    FUN_036425d4(param_2,param_1);
    FUN_036425d4(param_2,param_1 + 0x18);
    local_54 = CONCAT31(local_54._1_3_,*(undefined1 *)(param_1 + 0x30));
    (**(code **)(*param_2 + 0x28))(param_2,&local_54);
    *(bool *)(param_1 + 0x30) = (char)local_54 != '\0';
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_54 = CONCAT31(local_54._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_54,1);
    }
    puVar1 = (uint *)(param_1 + 0x34);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
      cVar6 = *(char *)((long)param_2 + 0xc);
    }
    else if ((int)param_2[1] == 1) {
      uVar5 = *puVar1;
      uVar8 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      local_54 = uVar8 >> 0x10 | uVar8 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_54 = uVar5;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_54);
      cVar6 = *(char *)((long)param_2 + 0xc);
    }
    else {
      local_54 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_54,4);
      uVar5 = (local_54 & 0xff00ff00) >> 8 | (local_54 & 0xff00ff) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar5 = local_54;
      }
      *puVar1 = uVar5;
      cVar6 = *(char *)((long)param_2 + 0xc);
    }
    if (cVar6 != '\0') {
      local_54._1_3_ = (undefined3)(local_54 >> 8);
      local_54 = CONCAT31(local_54._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_54,1);
    }
    puVar1 = (uint *)(param_1 + 0x38);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
      cVar6 = *(char *)((long)param_2 + 0xc);
    }
    else if ((int)param_2[1] == 1) {
      uVar5 = *puVar1;
      uVar8 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      local_54 = uVar8 >> 0x10 | uVar8 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_54 = uVar5;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_54);
      cVar6 = *(char *)((long)param_2 + 0xc);
    }
    else {
      local_54 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_54,4);
      uVar5 = (local_54 & 0xff00ff00) >> 8 | (local_54 & 0xff00ff) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar5 = local_54;
      }
      *puVar1 = uVar5;
      cVar6 = *(char *)((long)param_2 + 0xc);
    }
    if (cVar6 != '\0') {
      local_54._1_3_ = (undefined3)(local_54 >> 8);
      local_54 = CONCAT31(local_54._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_54,1);
    }
    puVar1 = (uint *)(param_1 + 0x3c);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
      cVar6 = *(char *)((long)param_2 + 0xc);
    }
    else if ((int)param_2[1] == 1) {
      uVar5 = *puVar1;
      uVar8 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      local_54 = uVar8 >> 0x10 | uVar8 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_54 = uVar5;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_54);
      cVar6 = *(char *)((long)param_2 + 0xc);
    }
    else {
      local_54 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_54,4);
      uVar5 = (local_54 & 0xff00ff00) >> 8 | (local_54 & 0xff00ff) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar5 = local_54;
      }
      *puVar1 = uVar5;
      cVar6 = *(char *)((long)param_2 + 0xc);
    }
    if (cVar6 != '\0') {
      local_54._1_3_ = (undefined3)(local_54 >> 8);
      local_54 = CONCAT31(local_54._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_54,1);
    }
    puVar1 = (uint *)(param_1 + 0x40);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
    }
    else if ((int)param_2[1] == 1) {
      uVar5 = *puVar1;
      uVar8 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      local_54 = uVar8 >> 0x10 | uVar8 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_54 = uVar5;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_54);
    }
    else {
      local_54 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_54,4);
      uVar5 = (local_54 & 0xff00ff00) >> 8 | (local_54 & 0xff00ff) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar5 = local_54;
      }
      *puVar1 = uVar5;
    }
    local_54 = CONCAT31(local_54._1_3_,*(undefined1 *)(param_1 + 0x44));
    (**(code **)(*param_2 + 0x28))(param_2,&local_54);
    *(bool *)(param_1 + 0x44) = (char)local_54 != '\0';
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_54 = CONCAT31(local_54._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_54,1);
    }
    puVar1 = (uint *)(param_1 + 0x48);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
      cVar6 = *(char *)((long)param_2 + 0xc);
    }
    else if ((int)param_2[1] == 1) {
      uVar5 = *puVar1;
      uVar8 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      local_54 = uVar8 >> 0x10 | uVar8 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_54 = uVar5;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_54);
      cVar6 = *(char *)((long)param_2 + 0xc);
    }
    else {
      local_54 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_54,4);
      uVar5 = (local_54 & 0xff00ff00) >> 8 | (local_54 & 0xff00ff) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar5 = local_54;
      }
      *puVar1 = uVar5;
      cVar6 = *(char *)((long)param_2 + 0xc);
    }
    if (cVar6 != '\0') {
      local_54._1_3_ = (undefined3)(local_54 >> 8);
      local_54 = CONCAT31(local_54._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_54,1);
    }
    puVar1 = (uint *)(param_1 + 0x4c);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
      cVar6 = *(char *)((long)param_2 + 0xc);
    }
    else if ((int)param_2[1] == 1) {
      uVar5 = *puVar1;
      uVar8 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      local_54 = uVar8 >> 0x10 | uVar8 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_54 = uVar5;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_54);
      cVar6 = *(char *)((long)param_2 + 0xc);
    }
    else {
      local_54 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_54,4);
      uVar5 = (local_54 & 0xff00ff00) >> 8 | (local_54 & 0xff00ff) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar5 = local_54;
      }
      *puVar1 = uVar5;
      cVar6 = *(char *)((long)param_2 + 0xc);
    }
    if (cVar6 != '\0') {
      local_54._1_3_ = (undefined3)(local_54 >> 8);
      local_54 = CONCAT31(local_54._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_54,1);
    }
    puVar1 = (uint *)(param_1 + 0x50);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
      cVar6 = *(char *)((long)param_2 + 0xc);
    }
    else if ((int)param_2[1] == 1) {
      uVar5 = *puVar1;
      uVar8 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      local_54 = uVar8 >> 0x10 | uVar8 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_54 = uVar5;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_54);
      cVar6 = *(char *)((long)param_2 + 0xc);
    }
    else {
      local_54 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_54,4);
      uVar5 = (local_54 & 0xff00ff00) >> 8 | (local_54 & 0xff00ff) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar5 = local_54;
      }
      *puVar1 = uVar5;
      cVar6 = *(char *)((long)param_2 + 0xc);
    }
    if (cVar6 != '\0') {
      local_54._1_3_ = (undefined3)(local_54 >> 8);
      local_54 = CONCAT31(local_54._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_54,1);
    }
    puVar1 = (uint *)(param_1 + 0x54);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
      cVar6 = *(char *)((long)param_2 + 0xc);
    }
    else if ((int)param_2[1] == 1) {
      uVar5 = *puVar1;
      uVar8 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      local_54 = uVar8 >> 0x10 | uVar8 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_54 = uVar5;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_54);
      cVar6 = *(char *)((long)param_2 + 0xc);
    }
    else {
      local_54 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_54,4);
      uVar5 = (local_54 & 0xff00ff00) >> 8 | (local_54 & 0xff00ff) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar5 = local_54;
      }
      *puVar1 = uVar5;
      cVar6 = *(char *)((long)param_2 + 0xc);
    }
    if (cVar6 != '\0') {
      local_54._1_3_ = (undefined3)(local_54 >> 8);
      local_54 = CONCAT31(local_54._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_54,1);
    }
    puVar1 = (uint *)(param_1 + 0x58);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
    }
    else if ((int)param_2[1] == 1) {
      uVar5 = *puVar1;
      uVar8 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      local_54 = uVar8 >> 0x10 | uVar8 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_54 = uVar5;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_54);
    }
    else {
      local_54 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_54,4);
      uVar5 = (local_54 & 0xff00ff00) >> 8 | (local_54 & 0xff00ff) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar5 = local_54;
      }
      *puVar1 = uVar5;
    }
    local_54 = CONCAT31(local_54._1_3_,*(undefined1 *)(param_1 + 0x5c));
    (**(code **)(*param_2 + 0x28))(param_2,&local_54);
    *(bool *)(param_1 + 0x5c) = (char)local_54 != '\0';
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_54 = CONCAT31(local_54._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_54,1);
    }
    puVar1 = (uint *)(param_1 + 0x60);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
      cVar6 = *(char *)((long)param_2 + 0xc);
    }
    else if ((int)param_2[1] == 1) {
      uVar5 = *puVar1;
      uVar8 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      local_54 = uVar8 >> 0x10 | uVar8 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_54 = uVar5;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_54);
      cVar6 = *(char *)((long)param_2 + 0xc);
    }
    else {
      local_54 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_54,4);
      uVar5 = (local_54 & 0xff00ff00) >> 8 | (local_54 & 0xff00ff) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar5 = local_54;
      }
      *puVar1 = uVar5;
      cVar6 = *(char *)((long)param_2 + 0xc);
    }
    if (cVar6 != '\0') {
      local_54._1_3_ = (undefined3)(local_54 >> 8);
      local_54 = CONCAT31(local_54._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_54,1);
    }
    puVar1 = (uint *)(param_1 + 100);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
      cVar6 = *(char *)((long)param_2 + 0xc);
    }
    else if ((int)param_2[1] == 1) {
      uVar5 = *puVar1;
      uVar8 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      local_54 = uVar8 >> 0x10 | uVar8 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_54 = uVar5;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_54);
      cVar6 = *(char *)((long)param_2 + 0xc);
    }
    else {
      local_54 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_54,4);
      uVar5 = (local_54 & 0xff00ff00) >> 8 | (local_54 & 0xff00ff) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar5 = local_54;
      }
      *puVar1 = uVar5;
      cVar6 = *(char *)((long)param_2 + 0xc);
    }
    if (cVar6 != '\0') {
      local_54._1_3_ = (undefined3)(local_54 >> 8);
      local_54 = CONCAT31(local_54._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_54,1);
    }
    puVar1 = (uint *)(param_1 + 0x68);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
    }
    else if ((int)param_2[1] == 1) {
      uVar5 = *puVar1;
      uVar8 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      local_54 = uVar8 >> 0x10 | uVar8 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_54 = uVar5;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_54);
    }
    else {
      local_54 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_54,4);
      uVar5 = (local_54 & 0xff00ff00) >> 8 | (local_54 & 0xff00ff) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar5 = local_54;
      }
      *puVar1 = uVar5;
    }
    local_54 = CONCAT31(local_54._1_3_,*(undefined1 *)(param_1 + 0x6c));
    (**(code **)(*param_2 + 0x28))(param_2,&local_54);
    puVar2 = (ushort *)(param_1 + 0x6e);
    *(bool *)(param_1 + 0x6c) = (char)local_54 != '\0';
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar2,2);
      cVar6 = *(char *)((long)param_2 + 0xc);
    }
    else if ((int)param_2[1] == 1) {
      uVar7 = *puVar2;
      uVar4 = uVar7 >> 8 | uVar7 << 8;
      if ((int)param_2[2] != 0xff00) {
        uVar4 = uVar7;
      }
      local_54 = CONCAT22(local_54._2_2_,uVar4);
      (**(code **)(*param_2 + 0x30))(param_2,&local_54);
      cVar6 = *(char *)((long)param_2 + 0xc);
    }
    else {
      local_54 = (uint)local_54._2_2_ << 0x10;
      (**(code **)(*param_2 + 0x20))(param_2,&local_54,2);
      uVar4 = (ushort)local_54 >> 8 | (ushort)local_54 << 8;
      if ((int)param_2[2] != 0xff00) {
        uVar4 = (ushort)local_54;
      }
      *puVar2 = uVar4;
      cVar6 = *(char *)((long)param_2 + 0xc);
    }
    if (cVar6 != '\0') {
      local_54._1_3_ = (undefined3)(local_54 >> 8);
      local_54 = CONCAT31(local_54._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_54,1);
    }
    puVar1 = (uint *)(param_1 + 0x70);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
      cVar6 = *(char *)((long)param_2 + 0xc);
    }
    else if ((int)param_2[1] == 1) {
      uVar5 = *puVar1;
      uVar8 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      local_54 = uVar8 >> 0x10 | uVar8 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_54 = uVar5;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_54);
      cVar6 = *(char *)((long)param_2 + 0xc);
    }
    else {
      local_54 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_54,4);
      uVar5 = (local_54 & 0xff00ff00) >> 8 | (local_54 & 0xff00ff) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar5 = local_54;
      }
      *puVar1 = uVar5;
      cVar6 = *(char *)((long)param_2 + 0xc);
    }
    if (cVar6 != '\0') {
      local_54._1_3_ = (undefined3)(local_54 >> 8);
      local_54 = CONCAT31(local_54._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_54,1);
    }
    puVar3 = (uint *)(param_1 + 0x74);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar3,4);
      uVar5 = local_58;
    }
    else if ((int)param_2[1] == 1) {
      uVar5 = *puVar3;
      uVar8 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      local_54 = uVar8 >> 0x10 | uVar8 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_54 = uVar5;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_54);
      uVar5 = local_58;
    }
    else {
      local_54 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_54,4);
      uVar5 = (local_54 & 0xff00ff00) >> 8 | (local_54 & 0xff00ff) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar5 = local_54;
      }
      *puVar3 = uVar5;
      uVar5 = local_58;
    }
    if (((int)lVar11 == 0) && (uVar5 < 3)) {
      *puVar1 = 0;
      *puVar3 = 0;
    }
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_54._1_3_ = (undefined3)(local_54 >> 8);
      local_54 = CONCAT31(local_54._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_54,1);
    }
    puVar1 = (uint *)(param_1 + 0x78);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
    }
    else if ((int)param_2[1] == 1) {
      uVar8 = *puVar1;
      uVar9 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
      local_54 = uVar9 >> 0x10 | uVar9 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_54 = uVar8;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_54);
    }
    else {
      local_54 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_54,4);
      uVar8 = (local_54 & 0xff00ff00) >> 8 | (local_54 & 0xff00ff) << 8;
      uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar8 = local_54;
      }
      *puVar1 = uVar8;
    }
    (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x7c,0x40);
    (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0xbc,0x40);
    if (uVar5 < 4) {
      lVar11 = 0;
      do {
        puVar2 = (ushort *)(param_1 + 0xfc + lVar11);
        if ((int)param_2[1] == 2) {
          (**(code **)(*param_2 + 0x20))(param_2,puVar2,2);
        }
        else if ((int)param_2[1] == 1) {
          uVar7 = *puVar2;
          uVar4 = uVar7 >> 8 | uVar7 << 8;
          if ((int)param_2[2] != 0xff00) {
            uVar4 = uVar7;
          }
          local_54 = CONCAT22(local_54._2_2_,uVar4);
          (**(code **)(*param_2 + 0x30))(param_2,&local_54);
        }
        else {
          local_54 = (uint)local_54._2_2_ << 0x10;
          (**(code **)(*param_2 + 0x20))(param_2,&local_54,2);
          uVar4 = (ushort)local_54 >> 8 | (ushort)local_54 << 8;
          if ((int)param_2[2] != 0xff00) {
            uVar4 = (ushort)local_54;
          }
          *puVar2 = uVar4;
        }
        lVar11 = lVar11 + 2;
      } while (lVar11 != 0x2000);
      if (uVar5 < 3) {
        (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x4590,0x53);
        goto LAB_03643acc;
      }
    }
    else {
      FUN_03611b50(param_2,param_1 + 0xfc,param_1 + 0x20fc);
    }
    FUN_03611b50(param_2,param_1 + 0x20fc,param_1 + 0x40fc);
    FUN_03ffc310(param_1 + 0x4100,param_2);
    (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x4590,0x53);
    FUN_03ffb93c(param_1 + 0x46e0,param_2);
  }
LAB_03643acc:
  return uVar10 & 1;
}


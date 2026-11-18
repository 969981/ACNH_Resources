
void FUN_0364d8b8(long param_1,long *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  uint *puVar7;
  uint extraout_w8;
  uint uVar8;
  long lVar9;
  uint local_18;
  undefined4 local_14;
  
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_14 = CONCAT31(local_14._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,1);
  }
  puVar7 = (uint *)(param_1 + 8);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar7,4);
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar8 = *puVar7;
    uVar6 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
    local_14 = uVar6 >> 0x10 | uVar6 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_14 = uVar8;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_14);
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_14 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,4);
    uVar8 = (local_14 & 0xff00ff00) >> 8 | (local_14 & 0xff00ff) << 8;
    uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar8 = local_14;
    }
    *puVar7 = uVar8;
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar4 != '\0') {
    local_14._1_3_ = (undefined3)(local_14 >> 8);
    local_14 = CONCAT31(local_14._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,1);
  }
  puVar7 = (uint *)(param_1 + 0xc);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar7,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar8 = *puVar7;
    uVar6 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
    local_14 = uVar6 >> 0x10 | uVar6 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_14 = uVar8;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_14);
  }
  else {
    local_14 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,4);
    uVar8 = (local_14 & 0xff00ff00) >> 8 | (local_14 & 0xff00ff) << 8;
    uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar8 = local_14;
    }
    *puVar7 = uVar8;
  }
  puVar1 = (ushort *)(param_1 + 0x10);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,2);
  }
  else if ((int)param_2[1] == 1) {
    uVar5 = *puVar1;
    uVar2 = uVar5 >> 8 | uVar5 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar2 = uVar5;
    }
    local_14 = CONCAT22(local_14._2_2_,uVar2);
    (**(code **)(*param_2 + 0x30))(param_2,&local_14);
  }
  else {
    local_14 = (uint)local_14._2_2_ << 0x10;
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,2);
    uVar2 = (ushort)local_14 >> 8 | (ushort)local_14 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar2 = (ushort)local_14;
    }
    *puVar1 = uVar2;
  }
  puVar1 = (ushort *)(param_1 + 0x12);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,2);
  }
  else if ((int)param_2[1] == 1) {
    uVar5 = *puVar1;
    uVar2 = uVar5 >> 8 | uVar5 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar2 = uVar5;
    }
    local_14 = CONCAT22(local_14._2_2_,uVar2);
    (**(code **)(*param_2 + 0x30))(param_2,&local_14);
  }
  else {
    local_14 = (uint)local_14._2_2_ << 0x10;
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,2);
    uVar2 = (ushort)local_14 >> 8 | (ushort)local_14 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar2 = (ushort)local_14;
    }
    *puVar1 = uVar2;
  }
  local_14 = CONCAT31(local_14._1_3_,*(undefined1 *)(param_1 + 0x14));
  (**(code **)(*param_2 + 0x28))(param_2,&local_14);
  *(bool *)(param_1 + 0x14) = (char)local_14 != '\0';
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_14 = CONCAT31(local_14._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,1);
  }
  puVar7 = (uint *)(param_1 + 0x1c);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar7,4);
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar8 = *puVar7;
    uVar6 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
    local_14 = uVar6 >> 0x10 | uVar6 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_14 = uVar8;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_14);
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_14 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,4);
    uVar8 = (local_14 & 0xff00ff00) >> 8 | (local_14 & 0xff00ff) << 8;
    uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar8 = local_14;
    }
    *puVar7 = uVar8;
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar4 != '\0') {
    local_14._1_3_ = (undefined3)(local_14 >> 8);
    local_14 = CONCAT31(local_14._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,1);
  }
  puVar7 = (uint *)(param_1 + 0x20);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar7,4);
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar8 = *puVar7;
    uVar6 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
    local_14 = uVar6 >> 0x10 | uVar6 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_14 = uVar8;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_14);
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_14 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,4);
    uVar8 = (local_14 & 0xff00ff00) >> 8 | (local_14 & 0xff00ff) << 8;
    uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar8 = local_14;
    }
    *puVar7 = uVar8;
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar4 != '\0') {
    local_14._1_3_ = (undefined3)(local_14 >> 8);
    local_14 = CONCAT31(local_14._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,1);
  }
  puVar7 = (uint *)(param_1 + 0x24);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar7,4);
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar8 = *puVar7;
    uVar6 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
    local_14 = uVar6 >> 0x10 | uVar6 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_14 = uVar8;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_14);
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_14 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,4);
    uVar8 = (local_14 & 0xff00ff00) >> 8 | (local_14 & 0xff00ff) << 8;
    uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar8 = local_14;
    }
    *puVar7 = uVar8;
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar4 != '\0') {
    local_14._1_3_ = (undefined3)(local_14 >> 8);
    local_14 = CONCAT31(local_14._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,1);
  }
  puVar7 = (uint *)(param_1 + 0x28);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar7,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar8 = *puVar7;
    uVar6 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
    local_14 = uVar6 >> 0x10 | uVar6 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_14 = uVar8;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_14);
  }
  else {
    local_14 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,4);
    uVar8 = (local_14 & 0xff00ff00) >> 8 | (local_14 & 0xff00ff) << 8;
    uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar8 = local_14;
    }
    *puVar7 = uVar8;
  }
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x30);
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_14 = CONCAT31(local_14._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,1);
  }
  puVar7 = (uint *)(param_1 + 0x2c);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar7,4);
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar8 = *puVar7;
    uVar6 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
    local_14 = uVar6 >> 0x10 | uVar6 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_14 = uVar8;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_14);
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_14 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,4);
    uVar8 = (local_14 & 0xff00ff00) >> 8 | (local_14 & 0xff00ff) << 8;
    uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar8 = local_14;
    }
    *puVar7 = uVar8;
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar4 != '\0') {
    local_14._1_3_ = (undefined3)(local_14 >> 8);
    local_14 = CONCAT31(local_14._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,1);
  }
  puVar7 = (uint *)(param_1 + 0x3c);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar7,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar8 = *puVar7;
    uVar6 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
    local_14 = uVar6 >> 0x10 | uVar6 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_14 = uVar8;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_14);
  }
  else {
    local_14 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,4);
    uVar8 = (local_14 & 0xff00ff00) >> 8 | (local_14 & 0xff00ff) << 8;
    uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar8 = local_14;
    }
    *puVar7 = uVar8;
  }
  iVar3 = (int)param_2[1];
  if (iVar3 == 2) {
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_14 = CONCAT31(local_14._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_14,1);
      if ((int)param_2[1] != 2) {
        if ((int)param_2[1] != 1) {
LAB_0364e248:
          local_14 = 0;
          goto LAB_0364e24c;
        }
        goto LAB_0364e1f8;
      }
    }
LAB_0364e24c:
    lVar9 = *param_2;
    puVar7 = &local_14;
  }
  else {
    if (iVar3 != 1) {
      if (iVar3 != 0) goto LAB_0364e288;
      if (*(char *)((long)param_2 + 0xc) == '\0') {
LAB_0364e210:
        local_14 = 0;
        (**(code **)(*param_2 + 0x20))(param_2,&local_14,4);
        uVar8 = (local_14 & 0xff00ff00) >> 8 | (local_14 & 0xff00ff) << 8;
        uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
        if ((int)param_2[2] != 0xff00) {
          uVar8 = local_14;
        }
      }
      else {
        local_14 = CONCAT31(local_14._1_3_,4);
        (**(code **)(*param_2 + 0x20))(param_2,&local_14,1);
        if ((int)param_2[1] == 2) {
          (**(code **)(*param_2 + 0x20))(param_2,&local_18,4);
          uVar8 = local_18;
        }
        else {
          if ((int)param_2[1] != 1) goto LAB_0364e210;
          (**(code **)(*param_2 + 0x38))(param_2,&local_14);
          uVar8 = extraout_w8;
        }
      }
      *(uint *)(param_1 + 0x18) = uVar8;
      goto LAB_0364e288;
    }
    uVar8 = *(uint *)(param_1 + 0x18);
    local_18 = uVar8;
    if (*(char *)((long)param_2 + 0xc) == '\0') {
LAB_0364e1e0:
      uVar6 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
      local_14 = uVar6 >> 0x10 | uVar6 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_14 = uVar8;
      }
LAB_0364e1f8:
      (**(code **)(*param_2 + 0x38))(param_2,&local_14);
      goto LAB_0364e288;
    }
    local_14 = CONCAT31(local_14._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,1);
    if ((int)param_2[1] != 2) {
      if ((int)param_2[1] != 1) goto LAB_0364e248;
      goto LAB_0364e1e0;
    }
    lVar9 = *param_2;
    puVar7 = &local_18;
  }
  (**(code **)(lVar9 + 0x20))(param_2,puVar7,4);
LAB_0364e288:
  FUN_0364e2e0(param_2,param_1 + 0x34);
  FUN_0364e2e0(param_2,param_1 + 0x38);
  (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x40,0x100);
  return;
}


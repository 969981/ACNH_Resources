
uint FUN_035b3144(long param_1,long *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint extraout_w8;
  uint uVar6;
  long lVar7;
  undefined1 auStack_3c [4];
  uint local_38;
  uint local_34;
  
  uVar4 = FUN_04002180(param_2,3,3,auStack_3c);
  if ((uVar4 & 1) == 0) goto LAB_035b3620;
  local_34._0_1_ = *(char *)(param_1 + 0x28);
  (**(code **)(*param_2 + 0x28))(param_2,&local_34);
  *(bool *)(param_1 + 0x28) = (char)local_34 != '\0';
  local_34._0_1_ = *(char *)(param_1 + 0x29);
  (**(code **)(*param_2 + 0x28))(param_2,&local_34);
  *(bool *)(param_1 + 0x29) = (char)local_34 != '\0';
  local_34._0_1_ = *(char *)(param_1 + 0x2a);
  (**(code **)(*param_2 + 0x28))(param_2,&local_34);
  *(bool *)(param_1 + 0x2a) = (char)local_34 != '\0';
  local_34 = CONCAT31(local_34._1_3_,*(undefined1 *)(param_1 + 0x2b));
  (**(code **)(*param_2 + 0x28))(param_2,&local_34);
  *(bool *)(param_1 + 0x2b) = (char)local_34 != '\0';
  (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x2c,0x7f8);
  iVar1 = (int)param_2[1];
  if (iVar1 == 2) {
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_34 = CONCAT31(local_34._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_34,1);
      if ((int)param_2[1] != 2) {
        if ((int)param_2[1] != 1) {
LAB_035b33a4:
          local_34 = 0;
          goto LAB_035b33a8;
        }
        goto LAB_035b334c;
      }
    }
LAB_035b33a8:
    lVar7 = *param_2;
    puVar5 = &local_34;
LAB_035b33b0:
    (**(code **)(lVar7 + 0x20))(param_2,puVar5,4);
LAB_035b33c0:
    cVar2 = *(char *)((long)param_2 + 0xc);
  }
  else if (iVar1 == 1) {
    uVar6 = *(uint *)(param_1 + 0x830);
    local_38 = uVar6;
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_34 = CONCAT31(local_34._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_34,1);
      if ((int)param_2[1] != 2) {
        if ((int)param_2[1] != 1) goto LAB_035b33a4;
        goto LAB_035b3334;
      }
      lVar7 = *param_2;
      puVar5 = &local_38;
      goto LAB_035b33b0;
    }
LAB_035b3334:
    uVar3 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    local_34 = uVar3 >> 0x10 | uVar3 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_34 = uVar6;
    }
LAB_035b334c:
    (**(code **)(*param_2 + 0x38))(param_2,&local_34);
    cVar2 = *(char *)((long)param_2 + 0xc);
  }
  else {
    if (iVar1 != 0) goto LAB_035b33c0;
    if (*(char *)((long)param_2 + 0xc) == '\0') {
LAB_035b336c:
      local_34 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_34,4);
      uVar6 = (local_34 & 0xff00ff00) >> 8 | (local_34 & 0xff00ff) << 8;
      uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar6 = local_34;
      }
    }
    else {
      local_34 = CONCAT31(local_34._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_34,1);
      if ((int)param_2[1] == 2) {
        (**(code **)(*param_2 + 0x20))(param_2,&local_38,4);
        uVar6 = local_38;
      }
      else {
        if ((int)param_2[1] != 1) goto LAB_035b336c;
        (**(code **)(*param_2 + 0x38))(param_2,&local_34);
        uVar6 = extraout_w8;
      }
    }
    *(uint *)(param_1 + 0x830) = uVar6;
    cVar2 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar2 != '\0') {
    local_34._1_3_ = (undefined3)(local_34 >> 8);
    local_34 = CONCAT31(local_34._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_34,1);
  }
  puVar5 = (uint *)(param_1 + 0x834);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar5,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar6 = *puVar5;
    uVar3 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    local_34 = uVar3 >> 0x10 | uVar3 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_34 = uVar6;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_34);
  }
  else {
    local_34 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_34,4);
    uVar6 = (local_34 & 0xff00ff00) >> 8 | (local_34 & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar6 = local_34;
    }
    *puVar5 = uVar6;
  }
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x838);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x839);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x83a);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x83b);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x83c);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x83d);
  local_34._0_1_ = *(char *)(param_1 + 0x83e);
  (**(code **)(*param_2 + 0x28))(param_2,&local_34);
  *(bool *)(param_1 + 0x83e) = (char)local_34 != '\0';
  local_34._0_1_ = *(char *)(param_1 + 0x83f);
  (**(code **)(*param_2 + 0x28))(param_2,&local_34);
  *(bool *)(param_1 + 0x83f) = (char)local_34 != '\0';
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_34._0_1_ = '\x04';
    (**(code **)(*param_2 + 0x20))(param_2,&local_34,1);
  }
  puVar5 = (uint *)(param_1 + 0x840);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar5,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar6 = *puVar5;
    uVar3 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    local_34 = uVar3 >> 0x10 | uVar3 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_34 = uVar6;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_34);
  }
  else {
    local_34 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_34,4);
    uVar6 = (local_34 & 0xff00ff00) >> 8 | (local_34 & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar6 = local_34;
    }
    *puVar5 = uVar6;
  }
LAB_035b3620:
  return uVar4 & 1;
}



void FUN_0364bfc4(long param_1,long *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  uint extraout_w8;
  uint uVar5;
  long lVar6;
  uint local_18;
  uint local_14;
  
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_14 = CONCAT31(local_14._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,1);
  }
  puVar4 = (uint *)(param_1 + 8);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar4,4);
    cVar2 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar5 = *puVar4;
    uVar3 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    local_14 = uVar3 >> 0x10 | uVar3 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_14 = uVar5;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_14);
    cVar2 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_14 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,4);
    uVar5 = (local_14 & 0xff00ff00) >> 8 | (local_14 & 0xff00ff) << 8;
    uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar5 = local_14;
    }
    *puVar4 = uVar5;
    cVar2 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar2 != '\0') {
    local_14._1_3_ = (undefined3)(local_14 >> 8);
    local_14 = CONCAT31(local_14._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,1);
  }
  puVar4 = (uint *)(param_1 + 0xc);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar4,4);
    cVar2 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar5 = *puVar4;
    uVar3 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    local_14 = uVar3 >> 0x10 | uVar3 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_14 = uVar5;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_14);
    cVar2 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_14 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,4);
    uVar5 = (local_14 & 0xff00ff00) >> 8 | (local_14 & 0xff00ff) << 8;
    uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar5 = local_14;
    }
    *puVar4 = uVar5;
    cVar2 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar2 != '\0') {
    local_14._1_3_ = (undefined3)(local_14 >> 8);
    local_14 = CONCAT31(local_14._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,1);
  }
  puVar4 = (uint *)(param_1 + 0x10);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar4,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar5 = *puVar4;
    uVar3 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    local_14 = uVar3 >> 0x10 | uVar3 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_14 = uVar5;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_14);
  }
  else {
    local_14 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,4);
    uVar5 = (local_14 & 0xff00ff00) >> 8 | (local_14 & 0xff00ff) << 8;
    uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar5 = local_14;
    }
    *puVar4 = uVar5;
  }
  iVar1 = (int)param_2[1];
  if (iVar1 == 2) {
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_14 = CONCAT31(local_14._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_14,1);
      if ((int)param_2[1] != 2) {
        if ((int)param_2[1] != 1) {
LAB_0364c3ac:
          local_14 = 0;
          goto LAB_0364c3b0;
        }
        goto LAB_0364c35c;
      }
    }
LAB_0364c3b0:
    lVar6 = *param_2;
    puVar4 = &local_14;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 0) goto LAB_0364c3ec;
      if (*(char *)((long)param_2 + 0xc) == '\0') {
LAB_0364c374:
        local_14 = 0;
        (**(code **)(*param_2 + 0x20))(param_2,&local_14,4);
        uVar5 = (local_14 & 0xff00ff00) >> 8 | (local_14 & 0xff00ff) << 8;
        uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
        if ((int)param_2[2] != 0xff00) {
          uVar5 = local_14;
        }
      }
      else {
        local_14 = CONCAT31(local_14._1_3_,4);
        (**(code **)(*param_2 + 0x20))(param_2,&local_14,1);
        if ((int)param_2[1] == 2) {
          (**(code **)(*param_2 + 0x20))(param_2,&local_18,4);
          uVar5 = local_18;
        }
        else {
          if ((int)param_2[1] != 1) goto LAB_0364c374;
          (**(code **)(*param_2 + 0x38))(param_2,&local_14);
          uVar5 = extraout_w8;
        }
      }
      *(uint *)(param_1 + 0x14) = uVar5;
      goto LAB_0364c3ec;
    }
    uVar5 = *(uint *)(param_1 + 0x14);
    local_18 = uVar5;
    if (*(char *)((long)param_2 + 0xc) == '\0') {
LAB_0364c344:
      uVar3 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      local_14 = uVar3 >> 0x10 | uVar3 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_14 = uVar5;
      }
LAB_0364c35c:
      (**(code **)(*param_2 + 0x38))(param_2,&local_14);
      goto LAB_0364c3ec;
    }
    local_14 = CONCAT31(local_14._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,1);
    if ((int)param_2[1] != 2) {
      if ((int)param_2[1] != 1) goto LAB_0364c3ac;
      goto LAB_0364c344;
    }
    lVar6 = *param_2;
    puVar4 = &local_18;
  }
  (**(code **)(lVar6 + 0x20))(param_2,puVar4,4);
LAB_0364c3ec:
  puVar4 = (uint *)(param_1 + 0x2c);
  FUN_03652360(param_2,param_1 + 0x1c,puVar4);
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_14 = CONCAT31(local_14._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar4,4);
    cVar2 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar5 = *puVar4;
    uVar3 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    local_14 = uVar3 >> 0x10 | uVar3 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_14 = uVar5;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_14);
    cVar2 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_14 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,4);
    uVar5 = (local_14 & 0xff00ff00) >> 8 | (local_14 & 0xff00ff) << 8;
    uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar5 = local_14;
    }
    *puVar4 = uVar5;
    cVar2 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar2 != '\0') {
    local_14._1_3_ = (undefined3)(local_14 >> 8);
    local_14 = CONCAT31(local_14._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,1);
  }
  puVar4 = (uint *)(param_1 + 0x30);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar4,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar5 = *puVar4;
    uVar3 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    local_14 = uVar3 >> 0x10 | uVar3 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_14 = uVar5;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_14);
  }
  else {
    local_14 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_14,4);
    uVar5 = (local_14 & 0xff00ff00) >> 8 | (local_14 & 0xff00ff) << 8;
    uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar5 = local_14;
    }
    *puVar4 = uVar5;
  }
  return;
}


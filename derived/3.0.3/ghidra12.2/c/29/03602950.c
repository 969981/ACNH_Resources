
void FUN_03602950(long *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint extraout_w8;
  long lVar5;
  uint local_28;
  uint local_24;
  
  iVar1 = (int)param_1[1];
  if (iVar1 == 2) {
    if (*(char *)((long)param_1 + 0xc) != '\0') {
      local_24 = CONCAT31(local_24._1_3_,4);
      (**(code **)(*param_1 + 0x20))(param_1,&local_24,1);
      if ((int)param_1[1] != 2) {
        if ((int)param_1[1] == 1) goto LAB_03602a70;
switchD_035e0d0c_caseD_67:
        local_24 = 0;
      }
    }
    lVar5 = *param_1;
    puVar4 = &local_24;
LAB_03602acc:
    (**(code **)(lVar5 + 0x20))(param_1,puVar4,4);
    return;
  }
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return;
    }
    if (*(char *)((long)param_1 + 0xc) != '\0') {
      local_24 = CONCAT31(local_24._1_3_,4);
      (**(code **)(*param_1 + 0x20))(param_1,&local_24,1);
      if ((int)param_1[1] == 2) {
        (**(code **)(*param_1 + 0x20))(param_1,&local_28,4);
        goto LAB_03602afc;
      }
      if ((int)param_1[1] == 1) {
        (**(code **)(*param_1 + 0x38))(param_1,&local_24);
        local_28 = extraout_w8;
        goto LAB_03602afc;
      }
    }
    local_24 = 0;
    (**(code **)(*param_1 + 0x20))(param_1,&local_24,4);
    uVar3 = (local_24 & 0xff00ff00) >> 8 | (local_24 & 0xff00ff) << 8;
    local_28 = uVar3 >> 0x10 | uVar3 << 0x10;
    if ((int)param_1[2] != 0xff00) {
      local_28 = local_24;
    }
LAB_03602afc:
    *param_2 = local_28;
    return;
  }
  uVar3 = *param_2;
  local_28 = uVar3;
  if (*(char *)((long)param_1 + 0xc) != '\0') {
    local_24 = CONCAT31(local_24._1_3_,4);
    (**(code **)(*param_1 + 0x20))(param_1,&local_24,1);
    if ((int)param_1[1] == 2) {
      lVar5 = *param_1;
      puVar4 = &local_28;
      goto LAB_03602acc;
    }
    if ((int)param_1[1] != 1) goto switchD_035e0d0c_caseD_67;
  }
  uVar2 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  local_24 = uVar2 >> 0x10 | uVar2 << 0x10;
  if ((int)param_1[2] != 0xff00) {
    local_24 = uVar3;
  }
LAB_03602a70:
  (**(code **)(*param_1 + 0x38))(param_1,&local_24);
  return;
}


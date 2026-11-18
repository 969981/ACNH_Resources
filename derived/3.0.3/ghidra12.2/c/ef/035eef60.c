
void FUN_035eef60(long *param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint *puVar4;
  byte extraout_w8;
  long lVar5;
  uint local_28;
  uint local_24;
  
  iVar2 = (int)param_1[1];
  if (iVar2 == 2) {
    if (*(char *)((long)param_1 + 0xc) != '\0') {
      local_24 = CONCAT31(local_24._1_3_,4);
      (**(code **)(*param_1 + 0x20))(param_1,&local_24,1);
      if ((int)param_1[1] != 2) {
        if ((int)param_1[1] == 1) goto LAB_035ef080;
LAB_035ef0d0:
        local_24 = 0;
      }
    }
    lVar5 = *param_1;
    puVar4 = &local_24;
LAB_035ef0dc:
    (**(code **)(lVar5 + 0x20))(param_1,puVar4,4);
    return;
  }
  if (iVar2 != 1) {
    if (iVar2 != 0) {
      return;
    }
    if (*(char *)((long)param_1 + 0xc) != '\0') {
      local_24 = CONCAT31(local_24._1_3_,4);
      (**(code **)(*param_1 + 0x20))(param_1,&local_24,1);
      if ((int)param_1[1] == 2) {
        (**(code **)(*param_1 + 0x20))(param_1,&local_28,4);
        goto LAB_035ef10c;
      }
      if ((int)param_1[1] == 1) {
        (**(code **)(*param_1 + 0x38))(param_1,&local_24);
        local_28._0_1_ = extraout_w8;
        goto LAB_035ef10c;
      }
    }
    local_24 = 0;
    (**(code **)(*param_1 + 0x20))(param_1,&local_24,4);
    uVar1 = local_24 >> 0x18;
    if ((int)param_1[2] != 0xff00) {
      uVar1 = local_24;
    }
    local_28._0_1_ = (byte)uVar1;
LAB_035ef10c:
    *param_2 = (byte)local_28;
    return;
  }
  bVar3 = *param_2;
  local_28 = (uint)bVar3;
  if (*(char *)((long)param_1 + 0xc) != '\0') {
    local_24 = CONCAT31(local_24._1_3_,4);
    (**(code **)(*param_1 + 0x20))(param_1,&local_24,1);
    if ((int)param_1[1] == 2) {
      lVar5 = *param_1;
      puVar4 = &local_28;
      goto LAB_035ef0dc;
    }
    if ((int)param_1[1] != 1) goto LAB_035ef0d0;
  }
  local_24 = (uint)bVar3 << 0x18;
  if ((int)param_1[2] != 0xff00) {
    local_24 = (uint)bVar3;
  }
LAB_035ef080:
  (**(code **)(*param_1 + 0x38))(param_1,&local_24);
  return;
}



void FUN_035ef130(long *param_1,uint *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong *puVar3;
  uint extraout_w8;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_30;
  ulong local_28;
  
  puVar3 = &local_30;
  iVar1 = (int)param_1[1];
  if (iVar1 == 2) {
    if (*(char *)((long)param_1 + 0xc) != '\0') {
      local_28 = CONCAT71(local_28._1_7_,8);
      (**(code **)(*param_1 + 0x20))(param_1,&local_28,1);
      if ((int)param_1[1] != 2) {
        if ((int)param_1[1] == 1) goto LAB_035ef250;
LAB_035ef2a0:
        local_28 = 0;
      }
    }
    lVar5 = *param_1;
    puVar3 = &local_28;
LAB_035ef2ac:
    (**(code **)(lVar5 + 0x20))(param_1,puVar3,8);
    return;
  }
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return;
    }
    if (*(char *)((long)param_1 + 0xc) != '\0') {
      local_28 = CONCAT71(local_28._1_7_,8);
      (**(code **)(*param_1 + 0x20))(param_1,&local_28,1);
      if ((int)param_1[1] == 2) {
        (**(code **)(*param_1 + 0x20))(param_1,&local_28,8);
        uVar4 = (uint)local_28;
        goto LAB_035ef2dc;
      }
      if ((int)param_1[1] == 1) {
        (**(code **)(*param_1 + 0x40))(param_1,&local_28);
        uVar4 = extraout_w8;
        goto LAB_035ef2dc;
      }
    }
    local_28 = 0;
    (**(code **)(*param_1 + 0x20))(param_1,&local_28,8);
    uVar6 = (local_28 & 0xff00ff00ff00ff00) >> 8 | (local_28 & 0xff00ff00ff00ff) << 8;
    uVar6 = ((uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10) >> 0x20;
    if ((int)param_1[2] != 0xff00) {
      uVar6 = local_28;
    }
    uVar4 = (uint)uVar6;
LAB_035ef2dc:
    *param_2 = uVar4;
    return;
  }
  uVar6 = (ulong)*param_2;
  local_30 = uVar6;
  if (*(char *)((long)param_1 + 0xc) != '\0') {
    local_28 = CONCAT71(local_28._1_7_,8);
    (**(code **)(*param_1 + 0x20))(param_1,&local_28,1);
    if ((int)param_1[1] == 2) {
      lVar5 = *param_1;
      goto LAB_035ef2ac;
    }
    if ((int)param_1[1] != 1) goto LAB_035ef2a0;
  }
  uVar2 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
  local_28 = (uVar2 >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10) << 0x20;
  if ((int)param_1[2] != 0xff00) {
    local_28 = uVar6;
  }
LAB_035ef250:
  (**(code **)(*param_1 + 0x40))(param_1,&local_28);
  return;
}


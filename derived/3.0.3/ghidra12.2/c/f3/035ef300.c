
void FUN_035ef300(long *param_1,ushort *param_2)

{
  int iVar1;
  ulong *puVar2;
  ushort extraout_w8;
  ushort uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_30;
  ulong local_28;
  
  puVar2 = &local_30;
  iVar1 = (int)param_1[1];
  if (iVar1 == 2) {
    if (*(char *)((long)param_1 + 0xc) != '\0') {
      local_28 = CONCAT71(local_28._1_7_,8);
      (**(code **)(*param_1 + 0x20))(param_1,&local_28,1);
      if ((int)param_1[1] != 2) {
        if ((int)param_1[1] == 1) goto LAB_035ef420;
LAB_035ef470:
        local_28 = 0;
      }
    }
    lVar4 = *param_1;
    puVar2 = &local_28;
LAB_035ef47c:
    (**(code **)(lVar4 + 0x20))(param_1,puVar2,8);
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
        uVar3 = (ushort)local_28;
        goto LAB_035ef4ac;
      }
      if ((int)param_1[1] == 1) {
        (**(code **)(*param_1 + 0x40))(param_1,&local_28);
        uVar3 = extraout_w8;
        goto LAB_035ef4ac;
      }
    }
    local_28 = 0;
    (**(code **)(*param_1 + 0x20))(param_1,&local_28,8);
    uVar5 = ((local_28 & 0xff00ff00ff00ff00) >> 8 | (local_28 & 0xff00ff00ff00ff) << 8) >> 0x30;
    if ((int)param_1[2] != 0xff00) {
      uVar5 = local_28;
    }
    uVar3 = (ushort)uVar5;
LAB_035ef4ac:
    *param_2 = uVar3;
    return;
  }
  uVar3 = *param_2;
  uVar5 = (ulong)uVar3;
  local_30 = uVar5;
  if (*(char *)((long)param_1 + 0xc) != '\0') {
    local_28 = CONCAT71(local_28._1_7_,8);
    (**(code **)(*param_1 + 0x20))(param_1,&local_28,1);
    if ((int)param_1[1] == 2) {
      lVar4 = *param_1;
      goto LAB_035ef47c;
    }
    if ((int)param_1[1] != 1) goto LAB_035ef470;
  }
  local_28 = ((ulong)(uVar3 >> 8) | (uVar5 & 0xff00ff00ff00ff) << 8) << 0x30;
  if ((int)param_1[2] != 0xff00) {
    local_28 = uVar5;
  }
LAB_035ef420:
  (**(code **)(*param_1 + 0x40))(param_1,&local_28);
  return;
}


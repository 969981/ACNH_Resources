
void FUN_036034e0(long *param_1,ulong *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  ulong extraout_x8;
  ulong uVar5;
  long lVar6;
  uint local_28;
  uint local_24;
  
  iVar1 = (int)param_1[1];
  if (iVar1 == 2) {
    if (*(char *)((long)param_1 + 0xc) != '\0') {
      local_24 = CONCAT31(local_24._1_3_,4);
      (**(code **)(*param_1 + 0x20))(param_1,&local_24,1);
      if ((int)param_1[1] != 2) {
        if ((int)param_1[1] == 1) goto LAB_03603600;
LAB_03603650:
        local_24 = 0;
      }
    }
    lVar6 = *param_1;
    puVar4 = &local_24;
LAB_0360365c:
    (**(code **)(lVar6 + 0x20))(param_1,puVar4,4);
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
        (**(code **)(*param_1 + 0x20))(param_1,&local_24,4);
        uVar5 = (ulong)local_24;
        goto LAB_0360368c;
      }
      if ((int)param_1[1] == 1) {
        (**(code **)(*param_1 + 0x38))(param_1,&local_24);
        uVar5 = extraout_x8;
        goto LAB_0360368c;
      }
    }
    local_24 = 0;
    (**(code **)(*param_1 + 0x20))(param_1,&local_24,4);
    uVar3 = (local_24 & 0xff00ff00) >> 8 | (local_24 & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    if ((int)param_1[2] != 0xff00) {
      uVar3 = local_24;
    }
    uVar5 = (ulong)uVar3;
LAB_0360368c:
    *param_2 = uVar5 & 0xffffffff;
    return;
  }
  uVar3 = (uint)*param_2;
  local_28 = uVar3;
  if (*(char *)((long)param_1 + 0xc) != '\0') {
    local_24 = CONCAT31(local_24._1_3_,4);
    (**(code **)(*param_1 + 0x20))(param_1,&local_24,1);
    if ((int)param_1[1] == 2) {
      lVar6 = *param_1;
      puVar4 = &local_28;
      goto LAB_0360365c;
    }
    if ((int)param_1[1] != 1) goto LAB_03603650;
  }
  uVar2 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  local_24 = uVar2 >> 0x10 | uVar2 << 0x10;
  if ((int)param_1[2] != 0xff00) {
    local_24 = uVar3;
  }
LAB_03603600:
  (**(code **)(*param_1 + 0x38))(param_1,&local_24);
  return;
}


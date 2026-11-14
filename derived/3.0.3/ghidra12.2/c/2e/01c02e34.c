
void FUN_01c02e34(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_88;
  undefined ***pppuStack_80;
  undefined **local_78;
  undefined1 local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined4 local_5c;
  byte local_58;
  undefined8 local_4c;
  undefined4 local_44;
  
  (*(code *)(&PTR_LAB_04a3ed48)[(ulong)*(uint *)(param_1 + 1) * 2])();
  plVar3 = param_1 + 4;
  lVar4 = *(long *)(*param_1 + 0xc0);
  if (lVar4 == 0) {
    local_4c = 0;
    local_44 = 0;
    local_68 = (undefined8 *)0x0;
    local_58 = 1;
  }
  else {
    local_4c = 0;
    plVar5 = (long *)(lVar4 + 0x28);
    local_44 = 0;
    if (*(char *)(lVar4 + 0x1b8) != '\0') {
      plVar3 = (long *)(lVar4 + 0x188);
    }
    uVar1 = (**(code **)(*plVar5 + 0x10))(plVar5);
    if ((uVar1 & 1) != 0) {
      (**(code **)*plVar5)(plVar5,&local_4c);
    }
    plVar5 = (long *)(lVar4 + 0x48);
    uVar2 = (**(code **)(*plVar5 + 0x10))(plVar5);
    if ((uVar2 & 1) == 0) {
      local_68 = (undefined8 *)0x0;
      local_58 = 1;
      if ((uVar1 & 1) != 0) {
        local_68 = &local_4c;
      }
    }
    else {
      local_58 = (**(code **)*plVar5)(plVar5);
      local_58 = local_58 & 1;
      local_68 = (undefined8 *)0x0;
      if ((uVar1 & 1) != 0) {
        local_68 = &local_4c;
      }
    }
  }
  local_60 = 1;
  local_70 = 0;
  local_78 = &PTR_LAB_04a3edc8;
  local_5c = *(undefined4 *)((long)param_1 + 0x1c);
  local_5f = *(undefined1 *)(*(long *)(*param_1 + 0x28) + 0x21b7);
  pppuStack_80 = &local_78;
  local_88 = 0;
  FUN_03838950(plVar3,&local_88);
  if ((int)param_1[1] != 0) {
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
  }
  return;
}



void FUN_030e5e28(long *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  byte local_48;
  undefined1 local_47;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  
  if ((*(char *)(param_2 + 0x24) != '\0') && (param_1[0x44] != 0)) {
    local_58 = *(undefined **)(param_1[0x44] + 8);
    uVar1 = FUN_0277d7b4(&local_58,param_2 + 8);
    if ((uVar1 & 1) != 0) {
      return;
    }
  }
  local_50 = *(undefined4 *)(param_2 + 8);
  uStack_4c = *(undefined4 *)(param_2 + 0xc);
  local_47 = *(undefined1 *)(param_2 + 0x11);
  local_38 = 0;
  local_34 = 0;
  local_48 = *(byte *)(param_2 + 0x10);
  local_58 = PTR_DAT_04bc5ac8 + 0x10;
  local_40 = *(undefined8 *)(param_2 + 0x18);
  if (7 < local_48) {
    local_48 = 0xff;
  }
  FUN_02c82370(param_1 + 0x45,&local_58);
  param_1[0x44] = (long)(param_1 + 0x45);
  plVar2 = (long *)param_1[0x36];
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x20);
  if ((int)param_1[0x47] < 2) {
    if (((plVar2 != (long *)0x0) && (uVar1 = (**(code **)(*plVar2 + 0x50))(), (uVar1 & 1) == 0)) &&
       (plVar2 = (long *)param_1[0x36], plVar2 != (long *)0x0)) {
      (**(code **)(*plVar2 + 0x30))(plVar2,0);
    }
  }
  else {
    if (((plVar2 != (long *)0x0) && (uVar1 = (**(code **)(*plVar2 + 0x48))(), (uVar1 & 1) == 0)) &&
       (plVar2 = (long *)param_1[0x36], plVar2 != (long *)0x0)) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      (**(code **)(*param_1 + 0xa8))(param_1);
    }
    if (param_1[0x44] == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_1[0x44] + 0x10);
    }
    FUN_030e5370(param_1[0x43],uVar3,(int)param_1[0x88]);
  }
  return;
}


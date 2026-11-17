
void FUN_030c2108(long param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined *local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  uVar1 = *(uint *)(param_1 + 0x260);
  *(int *)(param_1 + 0x260) = param_2;
  if (param_2 < 6) {
    puVar2 = PTR_DAT_04bc4e68;
    if (-1 < param_2) goto joined_r0x030c2140;
    uVar3 = 5;
  }
  else {
    uVar3 = 0;
  }
  *(undefined4 *)(param_1 + 0x260) = uVar3;
  puVar2 = PTR_DAT_04bc4e68;
joined_r0x030c2140:
  if ((int)uVar1 < 1) {
    plVar4 = (long *)(param_1 + 0x218);
  }
  else if (uVar1 < 5) {
    plVar4 = (long *)(param_1 + (ulong)(uVar1 - 1) * 8 + 0x220);
  }
  else {
    plVar4 = (long *)(param_1 + 0x240);
  }
  plVar4 = (long *)**(undefined8 **)(*plVar4 + 0x2f0);
  local_48 = puVar2 + 0x10;
  local_40._0_4_ = 1;
  PTR_DAT_04bc4e68 = puVar2;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  (**(code **)(plVar4[3] + 400))(0xbf800000,plVar4[1]);
  uVar1 = *(uint *)(param_1 + 0x260);
  if ((int)uVar1 < 1) {
    plVar4 = (long *)(param_1 + 0x218);
  }
  else if (uVar1 < 5) {
    plVar4 = (long *)(param_1 + (ulong)(uVar1 - 1) * 8 + 0x220);
  }
  else {
    plVar4 = (long *)(param_1 + 0x240);
  }
  plVar4 = (long *)**(undefined8 **)(*plVar4 + 0x2f0);
  local_48 = puVar2 + 0x10;
  local_40 = CONCAT44(local_40._4_4_,1);
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  (**(code **)(plVar4[3] + 400))(0x3f800000,plVar4[1]);
  local_48 = *(undefined **)(param_1 + 0x248);
  local_38 = 0;
  uVar1 = *(uint *)(param_1 + 0x260);
  if ((int)uVar1 < 1) {
    local_40 = *(undefined8 *)(param_1 + 0x218);
  }
  else if (uVar1 < 5) {
    local_40 = *(undefined8 *)(param_1 + (ulong)(uVar1 - 1) * 8 + 0x220);
  }
  else if (uVar1 == 5) {
    local_40 = *(undefined8 *)(param_1 + 0x240);
  }
  else {
    local_40 = 0;
  }
  FUN_032017e0(&local_48);
  return;
}



void FUN_030c2e90(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  undefined *local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  uVar1 = *(uint *)(param_1 + 0x260);
  if (*(long *)(param_2 + 8) == *(long *)(param_1 + 0x250)) {
    iVar4 = -1;
LAB_030c2ee8:
    uVar5 = uVar1 + iVar4;
    *(uint *)(param_1 + 0x260) = uVar5;
    if (5 < (int)uVar5) goto LAB_030c2ed4;
LAB_030c2ef8:
    puVar2 = PTR_DAT_04bc4e68;
    if (-1 < (int)uVar5) goto joined_r0x030c2f00;
    uVar3 = 5;
  }
  else {
    if (*(long *)(param_2 + 8) == *(long *)(param_1 + 600)) {
      iVar4 = 1;
      goto LAB_030c2ee8;
    }
    uVar5 = uVar1;
    if ((int)uVar1 < 6) goto LAB_030c2ef8;
LAB_030c2ed4:
    uVar3 = 0;
  }
  *(undefined4 *)(param_1 + 0x260) = uVar3;
  puVar2 = PTR_DAT_04bc4e68;
joined_r0x030c2f00:
  if ((int)uVar1 < 1) {
    plVar6 = (long *)(param_1 + 0x218);
  }
  else if (uVar1 < 5) {
    plVar6 = (long *)(param_1 + (ulong)(uVar1 - 1) * 8 + 0x220);
  }
  else {
    plVar6 = (long *)(param_1 + 0x240);
  }
  plVar6 = (long *)**(undefined8 **)(*plVar6 + 0x2f0);
  local_48 = puVar2 + 0x10;
  local_40._0_4_ = 1;
  PTR_DAT_04bc4e68 = puVar2;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_48);
  (**(code **)(plVar6[3] + 400))(0xbf800000,plVar6[1]);
  uVar1 = *(uint *)(param_1 + 0x260);
  if ((int)uVar1 < 1) {
    plVar6 = (long *)(param_1 + 0x218);
  }
  else if (uVar1 < 5) {
    plVar6 = (long *)(param_1 + (ulong)(uVar1 - 1) * 8 + 0x220);
  }
  else {
    plVar6 = (long *)(param_1 + 0x240);
  }
  plVar6 = (long *)**(undefined8 **)(*plVar6 + 0x2f0);
  local_48 = puVar2 + 0x10;
  local_40 = CONCAT44(local_40._4_4_,1);
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_48);
  (**(code **)(plVar6[3] + 400))(0x3f800000,plVar6[1]);
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



void FUN_01dba514(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  byte local_4c [4];
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_4c[0] = *(byte *)(param_1 + 0x84f0);
  if (7 < local_4c[0]) {
    local_4c[0] = 0xff;
  }
  lVar3 = FUN_02583354(DAT_055021a0,local_4c,1);
  if (lVar3 == 0) goto LAB_01dba618;
  lVar6 = lVar3 + 0x194b0;
  if (*(long *)(lVar3 + 0x194b8) == 0) {
    lVar6 = *(long *)(DAT_05574040 + 0x20);
  }
  plVar1 = (long *)(lVar6 + 0x24888);
  lVar3 = *(long *)(lVar6 + 0x248a8);
  if (lVar3 == 0) {
    *(undefined1 *)(*(long *)(lVar6 + 0x24890) + *plVar1 + 0x67d) = 0;
    goto LAB_01dba618;
  }
  if (*(undefined8 **)(lVar3 + 0x10) == (undefined8 *)0x0) {
    uVar2 = 1;
    plVar4 = *(long **)(lVar3 + 0x20);
joined_r0x01dba638:
    if (plVar4 != (long *)0x0) {
      local_48 = *plVar1;
      local_40 = *(undefined8 *)(lVar6 + 0x24890);
      uStack_38 = 0x680;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
    }
  }
  else {
    uVar2 = (**(code **)**(undefined8 **)(lVar3 + 0x10))();
    uVar2 = uVar2 ^ 1;
    if (*(long *)(lVar6 + 0x248a8) != 0) {
      plVar4 = *(long **)(*(long *)(lVar6 + 0x248a8) + 0x20);
      goto joined_r0x01dba638;
    }
  }
  *(undefined1 *)(*(long *)(lVar6 + 0x24890) + *plVar1 + 0x67d) = 0;
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar6 + 0x248a8) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar6 + 0x248a8) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
LAB_01dba618:
  *(byte *)(param_1 + 0x84f0) = 0xff;
  return;
}


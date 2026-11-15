
/* WARNING: Removing unreachable block (ram,0x01df9bb8) */

void FUN_01df9b60(undefined8 param_1)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  char local_4c [4];
  long local_48;
  long local_40;
  undefined8 uStack_38;
  
  if (DAT_05ab8198 == (ushort *)0x0) {
    return;
  }
  if ((*DAT_05ab8198 & 1) == 0) {
    return;
  }
  if (DAT_05574040 == 0) {
    return;
  }
  local_48 = CONCAT44(local_48._4_4_,1);
  if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0) {
    return;
  }
  lVar3 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))();
  if (lVar3 == 0) {
    return;
  }
  local_4c[0] = '\0';
  plVar1 = (long *)(lVar3 + 0x5d94e0);
  if (DAT_0538adc8 == 0) {
    bVar2 = false;
    lVar7 = *(long *)(lVar3 + 0x5d9500);
  }
  else {
    local_48 = **(long **)(DAT_0538adc8 + 0x2a8);
    local_40 = (*(long **)(DAT_0538adc8 + 0x2a8))[1];
    FUN_01d78420(&local_48,local_4c);
    bVar2 = local_4c[0] != '\0';
    lVar7 = *(long *)(lVar3 + 0x5d9500);
  }
  if (lVar7 == 0) {
    FUN_028e35b0(*(long *)(lVar3 + 0x5d94e8) + *plVar1,param_1,bVar2);
    return;
  }
  if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
    lVar7 = *(long *)(lVar3 + 0x5d9500);
    uVar4 = uVar4 & 0xffffffff;
    if (lVar7 == 0) goto LAB_01df9ca4;
  }
  plVar5 = *(long **)(lVar7 + 0x20);
  if (plVar5 != (long *)0x0) {
    local_48 = *plVar1;
    local_40 = *(long *)(lVar3 + 0x5d94e8);
    uStack_38 = 0x640;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
  }
LAB_01df9ca4:
  FUN_028e35b0(*(long *)(lVar3 + 0x5d94e8) + *plVar1,param_1,bVar2);
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar3 + 0x5d9500) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar3 + 0x5d9500) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}


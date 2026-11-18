
/* WARNING: Removing unreachable block (ram,0x036eb500) */

void FUN_036eb4c0(undefined4 param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
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
  plVar1 = (long *)(lVar3 + 0x5d3cb8);
  lVar6 = *(long *)(lVar3 + 0x5d3cd8);
  if (lVar6 == 0) {
    *(undefined4 *)(*(long *)(lVar3 + 0x5d3cc0) + *plVar1 + 0x62a0) = param_1;
    return;
  }
  if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
    uVar2 = 1;
  }
  else {
    uVar2 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
    lVar6 = *(long *)(lVar3 + 0x5d3cd8);
    uVar2 = uVar2 ^ 1;
    if (lVar6 == 0) goto LAB_036eb5a4;
  }
  plVar4 = *(long **)(lVar6 + 0x20);
  if (plVar4 != (long *)0x0) {
    local_48 = *plVar1;
    local_40 = *(undefined8 *)(lVar3 + 0x5d3cc0);
    uStack_38 = 0x62a8;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
  }
LAB_036eb5a4:
  *(undefined4 *)(*(long *)(lVar3 + 0x5d3cc0) + *plVar1 + 0x62a0) = param_1;
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x5d3cd8) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar3 + 0x5d3cd8) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}


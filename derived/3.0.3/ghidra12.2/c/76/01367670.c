
void FUN_01367670(void)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (DAT_05574040 == 0) {
    return;
  }
  lVar3 = FUN_026f480c();
  if (lVar3 == 0) {
    return;
  }
  plVar1 = (long *)(lVar3 + 0xdc50);
  lVar7 = *(long *)(lVar3 + 0xdc70);
  if (lVar7 == 0) {
    pvVar2 = (void *)(*(long *)(lVar3 + 0xdc58) + *plVar1);
    memset(pvVar2,0,0x6c24);
    FUN_027f85cc(pvVar2);
    return;
  }
  if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
    uVar4 = 0;
    plVar5 = *(long **)(lVar7 + 0x20);
  }
  else {
    uVar4 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
    uVar4 = uVar4 & 0xffffffff;
    if (*(long *)(lVar3 + 0xdc70) == 0) goto LAB_013676f8;
    plVar5 = *(long **)(*(long *)(lVar3 + 0xdc70) + 0x20);
  }
  if (plVar5 != (long *)0x0) {
    local_48 = *plVar1;
    local_40 = *(undefined8 *)(lVar3 + 0xdc58);
    uStack_38 = 0x6c24;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
  }
LAB_013676f8:
  pvVar2 = (void *)(*(long *)(lVar3 + 0xdc58) + *plVar1);
  memset(pvVar2,0,0x6c24);
  FUN_027f85cc(pvVar2);
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar3 + 0xdc70) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar3 + 0xdc70) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}


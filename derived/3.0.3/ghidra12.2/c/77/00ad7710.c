
void FUN_00ad7710(undefined8 param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar5 = *(long *)PTR_DAT_04bb46b0;
  if (lVar5 == 0) {
LAB_00ad7780:
    lVar5 = 0;
  }
  else {
    puVar6 = *(undefined8 **)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x453) & 1) == 0) {
      lVar2 = (**(code **)(*(long *)*puVar6 + 0x38))();
      lVar5 = 0;
      if (lVar2 != 0) {
        lVar5 = lVar2 + 0x70;
      }
    }
    else {
      if (puVar6 == (undefined8 *)0x0) goto LAB_00ad7780;
      lVar5 = 0;
      if ((long *)puVar6[0x26] != (long *)0x0) {
        lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
      }
    }
  }
  plVar1 = (long *)(lVar5 + 0x205208);
  lVar2 = *(long *)(lVar5 + 0x205228);
  if (lVar2 == 0) {
    FUN_02744c40(*(long *)(lVar5 + 0x205210) + *plVar1,param_2);
    return;
  }
  if (*(undefined8 **)(lVar2 + 0x10) == (undefined8 *)0x0) {
    uVar3 = 0;
    plVar4 = *(long **)(lVar2 + 0x20);
  }
  else {
    uVar3 = (**(code **)**(undefined8 **)(lVar2 + 0x10))();
    uVar3 = uVar3 & 0xffffffff;
    if (*(long *)(lVar5 + 0x205228) == 0) goto LAB_00ad77e0;
    plVar4 = *(long **)(*(long *)(lVar5 + 0x205228) + 0x20);
  }
  if (plVar4 != (long *)0x0) {
    local_48 = *plVar1;
    local_40 = *(undefined8 *)(lVar5 + 0x205210);
    uStack_38 = 0x100;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
  }
LAB_00ad77e0:
  FUN_02744c40(*(long *)(lVar5 + 0x205210) + *plVar1,param_2);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar5 + 0x205228) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x205228) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}


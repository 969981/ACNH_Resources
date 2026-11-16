
void FUN_027401d4(uint param_1,uint param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar6 = *(long *)PTR_DAT_04bb46b0;
  if (lVar6 == 0) {
LAB_02740248:
    lVar6 = 0;
  }
  else {
    puVar7 = *(undefined8 **)(lVar6 + 0x10);
    if ((*(byte *)(lVar6 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar7 + 0x38))();
      lVar6 = 0;
      if (lVar3 != 0) {
        lVar6 = lVar3 + 0x70;
      }
    }
    else {
      if (puVar7 == (undefined8 *)0x0) goto LAB_02740248;
      lVar6 = 0;
      if ((long *)puVar7[0x26] != (long *)0x0) {
        lVar6 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
      }
    }
  }
  lVar3 = *(long *)(lVar6 + 0xe7610);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar3 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar3 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar3 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar6 + 0xe7610) == 0) goto LAB_027402c0;
      plVar5 = *(long **)(*(long *)(lVar6 + 0xe7610) + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      local_48 = *(long *)(lVar6 + 0xe75f0);
      local_40 = *(undefined8 *)(lVar6 + 0xe75f8);
      uStack_38 = 0x800;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
    }
  }
LAB_027402c0:
  puVar1 = (undefined2 *)(*(long *)(lVar6 + 0xe75f8) + *(long *)(lVar6 + 0xe75f0));
  if (0xfffe < param_2) {
    param_2 = 0xffff;
  }
  puVar2 = puVar1 + param_1;
  if (0x3ff < param_1) {
    puVar2 = puVar1;
  }
  *puVar2 = (short)param_2;
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar6 + 0xe7610) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0xe7610) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return;
}


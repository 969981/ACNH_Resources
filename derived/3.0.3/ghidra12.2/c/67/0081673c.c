
void FUN_0081673c(uint *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar5 = *(long *)(param_2 + 0x1c27f8);
  if (lVar5 == 0) {
    uVar1 = 0;
  }
  else {
    if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
      uVar1 = 0;
      plVar2 = *(long **)(lVar5 + 0x20);
    }
    else {
      uVar1 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
      uVar1 = uVar1 & 0xffffffff;
      if (*(long *)(param_2 + 0x1c27f8) == 0) goto LAB_008167c4;
      plVar2 = *(long **)(*(long *)(param_2 + 0x1c27f8) + 0x20);
    }
    if (plVar2 != (long *)0x0) {
      local_48 = *(long *)(param_2 + 0x1c27d8);
      uStack_40 = *(undefined8 *)(param_2 + 0x1c27e0);
      local_38 = 4;
      (**(code **)(*plVar2 + 0x20))(plVar2,&local_48);
    }
  }
LAB_008167c4:
  uVar6 = *param_1;
  if (0xf < uVar6) {
    uVar6 = 0;
  }
  *(uint *)(*(long *)(param_2 + 0x1c27e0) + *(long *)(param_2 + 0x1c27d8)) = uVar6;
  if ((*(long **)(param_2 + 0x1c2868) == (long *)0x0) ||
     (puVar3 = (undefined8 *)**(long **)(param_2 + 0x1c2868), puVar3 == (undefined8 *)0x0)) {
    uVar6 = *(uint *)(*(long *)(param_2 + 0x1c2850) + *(long *)(param_2 + 0x1c2848));
  }
  else {
    uVar4 = (**(code **)*puVar3)();
    uVar6 = *(uint *)(*(long *)(param_2 + 0x1c2850) + *(long *)(param_2 + 0x1c2848));
    if ((((uVar4 & 1) != 0) && (*(long *)(param_2 + 0x1c2868) != 0)) &&
       (puVar3 = *(undefined8 **)(*(long *)(param_2 + 0x1c2868) + 8), puVar3 != (undefined8 *)0x0))
    {
      (**(code **)*puVar3)();
    }
  }
  if ((((uVar1 & 1) != 0) && (*(long *)(param_2 + 0x1c27f8) != 0)) &&
     (puVar3 = *(undefined8 **)(*(long *)(param_2 + 0x1c27f8) + 0x18), puVar3 != (undefined8 *)0x0))
  {
    (**(code **)*puVar3)();
  }
  if (3 < uVar6) {
    uVar6 = 0;
  }
  param_1[2] = *param_1;
  param_1[3] = uVar6;
  return;
}


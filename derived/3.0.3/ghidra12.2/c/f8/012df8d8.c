
void FUN_012df8d8(long param_1,uint param_2)

{
  void *__dest;
  undefined2 uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*(uint *)(param_1 + 0x10) <= param_2) {
    return;
  }
  if (*(uint *)(param_1 + 0x10) <= param_2) {
    param_2 = 0;
  }
  if (DAT_05574040 == 0) {
    return;
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x18) + (long)(int)param_2 * 8);
  puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar2 = (**(code **)(*(long *)*puVar5 + 0x38))();
    if (lVar2 == 0) {
      return;
    }
    lVar2 = lVar2 + 0x70;
  }
  else {
    if (puVar5 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar5[0x26] == (long *)0x0) {
      return;
    }
    lVar2 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
    if (lVar2 == 0) {
      return;
    }
  }
  lVar6 = *(long *)(lVar2 + 0xe7648);
  if (lVar6 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      lVar6 = *(long *)(lVar2 + 0xe7648);
      uVar3 = uVar3 & 0xffffffff;
      if (lVar6 == 0) goto LAB_012df9e0;
    }
    plVar4 = *(long **)(lVar6 + 0x20);
    if (plVar4 != (long *)0x0) {
      local_48 = *(long *)(lVar2 + 0xe7628);
      local_40 = *(undefined8 *)(lVar2 + 0xe7630);
      uStack_38 = 0x10d6e0;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
    }
  }
LAB_012df9e0:
  *(undefined2 *)(*(long *)(lVar2 + 0xe7630) + *(long *)(lVar2 + 0xe7628) + 0x10063e) =
       *(undefined2 *)(lVar7 + 0xc);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar2 + 0xe7648) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar2 + 0xe7648) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  lVar6 = *(long *)(&LAB_00116d20 + lVar2);
  if (lVar6 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      lVar6 = *(long *)(&LAB_00116d20 + lVar2);
      uVar3 = uVar3 & 0xffffffff;
      if (lVar6 == 0) goto LAB_012dfa7c;
    }
    plVar4 = *(long **)(lVar6 + 0x20);
    if (plVar4 != (long *)0x0) {
      local_48 = *(long *)(lVar2 + 0x116d00);
      local_40 = *(undefined8 *)(lVar2 + 0x116d08);
      uStack_38 = 0x92;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
    }
  }
LAB_012dfa7c:
  uVar1 = *(undefined2 *)(lVar7 + 0xe);
  __dest = (void *)(*(long *)(lVar2 + 0x116d08) + *(long *)(lVar2 + 0x116d00));
  memcpy(__dest,(void *)(lVar7 + 0x10),0x90);
  *(undefined2 *)((long)__dest + 0x90) = uVar1;
  if ((((uVar3 & 1) != 0) && (*(long *)(&LAB_00116d20 + lVar2) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(&LAB_00116d20 + lVar2) + 0x18),
     puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}


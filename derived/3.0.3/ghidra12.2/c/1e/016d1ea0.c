
void FUN_016d1ea0(uint param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (DAT_05574040 == 0) {
    return;
  }
  puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar2 = (**(code **)(*(long *)*puVar6 + 0x38))();
    if (lVar2 == 0) {
      return;
    }
    lVar2 = lVar2 + 0x70;
  }
  else {
    if (puVar6 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar6[0x26] == (long *)0x0) {
      return;
    }
    lVar2 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
    if (lVar2 == 0) {
      return;
    }
  }
  lVar7 = *(long *)(lVar2 + 0x271c58);
  if (lVar7 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
      plVar4 = *(long **)(lVar7 + 0x20);
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      uVar3 = uVar3 & 0xffffffff;
      if (*(long *)(lVar2 + 0x271c58) == 0) goto LAB_016d1f8c;
      plVar4 = *(long **)(*(long *)(lVar2 + 0x271c58) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_58 = *(long *)(lVar2 + 0x271c38);
      local_50 = *(undefined8 *)(lVar2 + 0x271c40);
      uStack_48 = 8;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
    }
  }
LAB_016d1f8c:
  puVar1 = (undefined2 *)(*(long *)(lVar2 + 0x271c40) + *(long *)(lVar2 + 0x271c38));
  *puVar1 = *param_2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)puVar1 + 3) = *(undefined1 *)((long)param_2 + 3);
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 2);
  lVar7 = *(long *)(lVar2 + 0x271c90);
  if (lVar7 == 0) {
    uVar5 = 0;
  }
  else {
    if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
      uVar5 = 0;
      plVar4 = *(long **)(lVar7 + 0x20);
    }
    else {
      uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      uVar5 = uVar5 & 0xffffffff;
      if (*(long *)(lVar2 + 0x271c90) == 0) goto LAB_016d2020;
      plVar4 = *(long **)(*(long *)(lVar2 + 0x271c90) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_58 = *(long *)(FUN_00271c6c + lVar2 + 4);
      local_50 = *(undefined8 *)(lVar2 + 0x271c78);
      uStack_48 = 8;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
    }
  }
LAB_016d2020:
  puVar1 = (undefined2 *)(*(long *)(lVar2 + 0x271c78) + *(long *)(FUN_00271c6c + lVar2 + 4));
  *puVar1 = *param_3;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_3 + 1);
  *(undefined1 *)((long)puVar1 + 3) = *(undefined1 *)((long)param_3 + 3);
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_3 + 2);
  FUN_020f22c8(param_1 & 1,param_2,param_3);
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar2 + 0x271c90) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar2 + 0x271c90) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar2 + 0x271c58) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar2 + 0x271c58) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}


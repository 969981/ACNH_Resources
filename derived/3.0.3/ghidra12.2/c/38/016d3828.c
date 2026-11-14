
void FUN_016d3828(undefined4 param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar2 = FUN_016c91a4();
  if (lVar2 == 0) {
    return;
  }
  lVar7 = *(long *)(lVar2 + 0x28);
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
      if (*(long *)(lVar2 + 0x28) == 0) goto LAB_016d38b4;
      plVar4 = *(long **)(*(long *)(lVar2 + 0x28) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_48 = *(undefined8 *)(lVar2 + 8);
      uStack_40 = *(undefined8 *)(lVar2 + 0x10);
      local_38 = 0x1638;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
    }
  }
LAB_016d38b4:
  bVar1 = *(byte *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8) + 0x1634);
  uVar5 = FUN_016d34a4(param_1,bVar1 == 0);
  if (((uVar5 & 1) == 0) && (uVar5 = FUN_016d34a4(param_1,bVar1 != 0), (uVar5 & 1) != 0)) {
    if ((*(long *)(lVar2 + 0x28) != 0) &&
       (plVar4 = *(long **)(*(long *)(lVar2 + 0x28) + 0x20), plVar4 != (long *)0x0)) {
      local_48 = *(undefined8 *)(lVar2 + 8);
      uStack_40 = *(undefined8 *)(lVar2 + 0x10);
      local_38 = 0x1638;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
    }
    *(byte *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8) + 0x1634) = bVar1 ^ 1;
  }
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}


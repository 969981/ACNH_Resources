
void FUN_0299bfc0(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 == 0) {
    uVar1 = 0;
  }
  else {
    if (*(undefined8 **)(lVar4 + 0x10) == (undefined8 *)0x0) {
      uVar1 = 0;
      plVar2 = *(long **)(lVar4 + 0x20);
    }
    else {
      uVar1 = (**(code **)**(undefined8 **)(lVar4 + 0x10))();
      uVar1 = uVar1 & 0xffffffff;
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_0299c040;
      plVar2 = *(long **)(*(long *)(param_1 + 0x28) + 0x20);
    }
    if (plVar2 != (long *)0x0) {
      local_48 = *(undefined8 *)(param_1 + 8);
      uStack_40 = *(undefined8 *)(param_1 + 0x10);
      local_38 = 0x20;
      (**(code **)(*plVar2 + 0x20))(plVar2,&local_48);
    }
  }
LAB_0299c040:
  *(undefined1 *)(*(long *)(param_1 + 0x10) + *(long *)(param_1 + 8) + 2) = 0xff;
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (plVar2 = *(long **)(*(long *)(param_1 + 0x28) + 0x20), plVar2 != (long *)0x0)) {
    local_48 = *(undefined8 *)(param_1 + 8);
    uStack_40 = *(undefined8 *)(param_1 + 0x10);
    local_38 = 0x20;
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_48);
  }
  *(undefined2 *)(*(long *)(param_1 + 0x10) + *(long *)(param_1 + 8)) = 0;
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (plVar2 = *(long **)(*(long *)(param_1 + 0x28) + 0x20), plVar2 != (long *)0x0)) {
    local_48 = *(undefined8 *)(param_1 + 8);
    uStack_40 = *(undefined8 *)(param_1 + 0x10);
    local_38 = 0x20;
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_48);
  }
  lVar4 = *(long *)(param_1 + 0x10) + *(long *)(param_1 + 8);
  *(byte *)(lVar4 + 3) = *(byte *)(lVar4 + 3) & 0xfe;
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (plVar2 = *(long **)(*(long *)(param_1 + 0x28) + 0x20), plVar2 != (long *)0x0)) {
    local_48 = *(undefined8 *)(param_1 + 8);
    uStack_40 = *(undefined8 *)(param_1 + 0x10);
    local_38 = 0x20;
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_48);
  }
  *(undefined1 *)(*(long *)(param_1 + 0x10) + *(long *)(param_1 + 8) + 0x16) = 0xff;
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (plVar2 = *(long **)(*(long *)(param_1 + 0x28) + 0x20), plVar2 != (long *)0x0)) {
    local_48 = *(undefined8 *)(param_1 + 8);
    uStack_40 = *(undefined8 *)(param_1 + 0x10);
    local_38 = 0x20;
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_48);
  }
  *(undefined1 *)(*(long *)(param_1 + 0x10) + *(long *)(param_1 + 8) + 0x17) = 0xff;
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (plVar2 = *(long **)(*(long *)(param_1 + 0x28) + 0x20), plVar2 != (long *)0x0)) {
    local_48 = *(undefined8 *)(param_1 + 8);
    uStack_40 = *(undefined8 *)(param_1 + 0x10);
    local_38 = 0x20;
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_48);
  }
  *(undefined2 *)(*(long *)(param_1 + 0x10) + *(long *)(param_1 + 8) + 0x10) = 0xffff;
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (plVar2 = *(long **)(*(long *)(param_1 + 0x28) + 0x20), plVar2 != (long *)0x0)) {
    local_48 = *(undefined8 *)(param_1 + 8);
    uStack_40 = *(undefined8 *)(param_1 + 0x10);
    local_38 = 0x20;
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_48);
  }
  *(undefined2 *)(*(long *)(param_1 + 0x10) + *(long *)(param_1 + 8) + 0x12) = 0xffff;
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (plVar2 = *(long **)(*(long *)(param_1 + 0x28) + 0x20), plVar2 != (long *)0x0)) {
    local_48 = *(undefined8 *)(param_1 + 8);
    uStack_40 = *(undefined8 *)(param_1 + 0x10);
    local_38 = 0x20;
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_48);
  }
  *(undefined2 *)(*(long *)(param_1 + 0x10) + *(long *)(param_1 + 8) + 0x14) = 0xffff;
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (plVar2 = *(long **)(*(long *)(param_1 + 0x28) + 0x20), plVar2 != (long *)0x0)) {
    local_48 = *(undefined8 *)(param_1 + 8);
    uStack_40 = *(undefined8 *)(param_1 + 0x10);
    local_38 = 0x20;
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_48);
  }
  lVar4 = *(long *)(param_1 + 0x10) + *(long *)(param_1 + 8);
  *(undefined8 *)(lVar4 + 4) = 0;
  *(undefined4 *)(lVar4 + 0xc) = 0;
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (plVar2 = *(long **)(*(long *)(param_1 + 0x28) + 0x20), plVar2 != (long *)0x0)) {
    local_48 = *(undefined8 *)(param_1 + 8);
    uStack_40 = *(undefined8 *)(param_1 + 0x10);
    local_38 = 0x20;
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_48);
  }
  *(undefined4 *)(*(long *)(param_1 + 0x10) + *(long *)(param_1 + 8) + 0x18) = 0xbf800000;
  if ((((uVar1 & 1) != 0) && (*(long *)(param_1 + 0x28) != 0)) &&
     (puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x28) + 0x18), puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)();
  }
  return;
}


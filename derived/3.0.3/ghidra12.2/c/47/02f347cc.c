
void FUN_02f347cc(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined **local_50;
  undefined4 local_48;
  
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined1 *)(param_1 + 0x220) = 0;
  plVar1 = (long *)**(undefined8 **)(*(long *)(param_1 + 0x210) + 0x230);
  local_48 = 6;
  local_50 = &PTR_FUN_04aa77b8;
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_50);
  (**(code **)(plVar1[3] + 0x1b8))(plVar1[1]);
  plVar1 = *(long **)(*(long *)(*(long *)(param_1 + 0x210) + 0x230) +
                     (ulong)(1 < *(uint *)(*(long *)(param_1 + 0x210) + 0x228)) * 8);
  local_50 = &PTR_FUN_04aa77b8;
  local_48 = 6;
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_50);
  (**(code **)(plVar1[3] + 0x1b8))(plVar1[1]);
  lVar2 = *(long *)(param_1 + 0x210);
  plVar1 = *(long **)(*(long *)(lVar2 + 0x230) + (ulong)(2 < *(uint *)(lVar2 + 0x228)) * 0x10);
  if (plVar1 != (long *)0x0) {
    local_50 = &PTR_FUN_04aa77b8;
    local_48 = 6;
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_50);
    (**(code **)(plVar1[3] + 0x1b8))(plVar1[1]);
    lVar2 = *(long *)(param_1 + 0x210);
  }
  if (*(long **)(lVar2 + 0x1b0) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x1b0) + 0x50))();
    (**(code **)(**(long **)(lVar2 + 0x1b0) + 0x20))(*(long **)(lVar2 + 0x1b0),0);
  }
  return;
}


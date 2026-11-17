
void FUN_02ebbf48(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined *local_50;
  undefined4 local_48;
  
  *(undefined4 *)(param_1 + 0x21c) = 0;
  puVar2 = PTR_DAT_04bc4e68;
  plVar4 = *(long **)(*(long *)(*(long *)(param_1 + 0x210) + 0x230) +
                     (ulong)(2 < *(uint *)(*(long *)(param_1 + 0x210) + 0x228)) * 0x10);
  local_48 = 6;
  puVar1 = PTR_DAT_04bc4e68 + 0x10;
  local_50 = puVar1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
  (**(code **)(plVar4[3] + 0x1b8))(plVar4[1]);
  lVar5 = 0x18;
  if (*(uint *)(*(long *)(param_1 + 0x210) + 0x228) < 4) {
    lVar5 = 0;
  }
  plVar4 = *(long **)(*(long *)(*(long *)(param_1 + 0x210) + 0x230) + lVar5);
  local_48 = 6;
  local_50 = puVar1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
  (**(code **)(plVar4[3] + 0x1b8))(plVar4[1]);
  lVar5 = *(long *)(param_1 + 0x210);
  plVar4 = (long *)**(undefined8 **)(lVar5 + 0x230);
  if (plVar4 != (long *)0x0) {
    if (*(int *)(param_1 + 0x220) < 1) {
      local_50 = puVar2 + 0x10;
      local_48 = 7;
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
      puVar3 = (undefined8 *)(plVar4[3] + 0x1c0);
    }
    else {
      local_50 = puVar2 + 0x10;
      local_48 = 6;
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
      puVar3 = (undefined8 *)(plVar4[3] + 0x1b8);
    }
    (*(code *)*puVar3)(plVar4[1]);
    lVar5 = *(long *)(param_1 + 0x210);
  }
  if (*(long **)(lVar5 + 0x1b0) != (long *)0x0) {
    (**(code **)(**(long **)(lVar5 + 0x1b0) + 0x50))();
    (**(code **)(**(long **)(lVar5 + 0x1b0) + 0x20))(*(long **)(lVar5 + 0x1b0),0);
  }
  FUN_03ebb160(param_1 + 0x1a8,1);
  *(undefined8 *)(param_1 + 0x1f0) = 0xffffffffffffffff;
  return;
}


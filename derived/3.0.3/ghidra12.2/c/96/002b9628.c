
void FUN_002b9628(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  if (DAT_04c61180 != 0) {
    lVar1 = FUN_0022033c();
    if (lVar1 != 0) {
      FUN_0022033c();
      FUN_00220b30();
    }
    FUN_002aafe0(param_1 + 0x10,DAT_04c61178);
    DAT_04c61180 = 0;
  }
  DAT_04c61178 = 0;
  if (*(long *)(param_1 + 8) != 0) {
    if (*(long *)(param_1 + 0x78) != 0) {
      FUN_002bae28();
    }
    puVar3 = *(undefined8 **)(param_1 + 0x40);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      FUN_00285dc0(puVar3);
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    if (*(long **)(param_1 + 0x48) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x48) + 0x18))();
      (**(code **)(**(long **)(param_1 + 8) + 0x60))
                (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x48));
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    if (*(long **)(param_1 + 0x50) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x50) + 0x18))();
      (**(code **)(**(long **)(param_1 + 8) + 0x68))
                (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x50));
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
    puVar3 = *(undefined8 **)(param_1 + 0x80);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      FUN_00285dc0(puVar3);
      *(undefined8 *)(param_1 + 0x80) = 0;
    }
    lVar1 = *(long *)(param_1 + 0xa0);
    if (lVar1 != 0) {
      FUN_002a89e8(lVar1);
      FUN_00285dc0(lVar1);
      *(undefined8 *)(param_1 + 0xa0) = 0;
    }
    lVar1 = *(long *)(param_1 + 0x98);
    if (lVar1 != 0) {
      FUN_002a89e8(lVar1);
      FUN_00285dc0(lVar1);
      *(undefined8 *)(param_1 + 0x98) = 0;
    }
    lVar1 = *(long *)(param_1 + 0x90);
    if (lVar1 != 0) {
      FUN_002a89e8(lVar1);
      FUN_00285dc0(lVar1);
      *(undefined8 *)(param_1 + 0x90) = 0;
    }
    lVar1 = *(long *)(param_1 + 0x88);
    if (lVar1 != 0) {
      FUN_002a89e8(lVar1);
      FUN_00285dc0(lVar1);
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
    if (*(long **)(param_1 + 0x68) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x68) + 0x18))();
    }
    if (*(long **)(param_1 + 0x70) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x70) + 0x18))();
    }
    FUN_002aac80(param_1 + 0x10);
    plVar2 = *(long **)(param_1 + 0x60);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
      puVar3 = *(undefined8 **)(param_1 + 0x60);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        FUN_00285dc0(puVar3);
      }
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    if (*(long *)(param_1 + 0x68) != 0) {
      (**(code **)(**(long **)(param_1 + 8) + 0xa8))();
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    if (*(long *)(param_1 + 0x70) != 0) {
      (**(code **)(**(long **)(param_1 + 8) + 0xb0))();
      *(undefined8 *)(param_1 + 0x70) = 0;
    }
    if (*(long *)(param_1 + 0x78) != 0) {
      (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    (**(code **)(**(long **)(param_1 + 8) + 0xd0))();
    plVar2 = *(long **)(param_1 + 8);
    (**(code **)(*plVar2 + 0x48))(plVar2,plVar2);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}


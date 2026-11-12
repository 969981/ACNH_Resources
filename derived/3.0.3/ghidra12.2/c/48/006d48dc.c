
void FUN_006d48dc(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 200);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x200) != '\0')) {
    thunk_FUN_00691d40(lVar2 + 0x178);
    nn::os::WaitLightEvent((LightEventType *)(lVar2 + 0x1f0));
  }
  lVar2 = *(long *)(param_1 + 0xd0);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x200) != '\0')) {
    thunk_FUN_00691d40(lVar2 + 0x178);
    nn::os::WaitLightEvent((LightEventType *)(lVar2 + 0x1f0));
  }
  lVar2 = *(long *)(param_1 + 0xd8);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x200) != '\0')) {
    thunk_FUN_00691d40(lVar2 + 0x178);
    nn::os::WaitLightEvent((LightEventType *)(lVar2 + 0x1f0));
  }
  plVar1 = *(long **)(param_1 + 200);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,1);
    if (*(long **)(param_1 + 200) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 200) + 8))();
    }
    *(undefined8 *)(param_1 + 200) = 0;
  }
  plVar1 = *(long **)(param_1 + 0xd0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,1);
    if (*(long **)(param_1 + 0xd0) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0xd0) + 8))();
    }
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  plVar1 = *(long **)(param_1 + 0xd8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,1);
    if (*(long **)(param_1 + 0xd8) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0xd8) + 8))();
    }
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  (**(code **)(**(long **)(param_1 + 0xa0) + 0x38))
            (*(long **)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xb0));
  *(undefined8 *)(param_1 + 0xb0) = 0;
  (**(code **)(**(long **)(param_1 + 0xa0) + 0x38))
            (*(long **)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xb8));
  *(undefined8 *)(param_1 + 0xb8) = 0;
  (**(code **)(**(long **)(param_1 + 0xa0) + 0x38))
            (*(long **)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xc0));
  *(undefined8 *)(param_1 + 0xc0) = 0;
  return;
}


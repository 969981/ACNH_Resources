
undefined8 FUN_03f459a0(long param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    (**(code **)(*plVar2 + 0x28))(plVar2);
    if (*(long *)(param_1 + 0x10) != 0) {
      nn::os::WaitLightEvent((LightEventType *)(*(long *)(param_1 + 0x10) + 0x78));
    }
    plVar2 = *(long **)(param_1 + 0x18);
    (**(code **)(*plVar2 + 0x20))(plVar2);
    iVar1 = *(int *)(param_1 + 0xc) + -1;
    if (((*(int *)(param_1 + 0xc) < 1) || (*(int *)(param_1 + 0xc) = iVar1, iVar1 == 0)) &&
       (*(long *)(param_1 + 0x10) != 0)) {
      FUN_03f44508();
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  return 1;
}



void FUN_0025829c(long param_1)

{
  long lVar1;
  
  if (*(long **)(param_1 + 0x418) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x418) + 0x30))();
    (**(code **)(**(long **)(param_1 + 0x418) + 0x10))(*(long **)(param_1 + 0x418),0);
  }
  if (*(long *)(param_1 + 0x410) != 0) {
    FUN_0025f478();
    (**(code **)(**(long **)(param_1 + 0x410) + 0x10))(*(long **)(param_1 + 0x410),0);
  }
  if (*(long *)(param_1 + 0x538) != 0) {
    FUN_0025ec50();
    (**(code **)(**(long **)(param_1 + 0x538) + 0x10))(*(long **)(param_1 + 0x538),0);
  }
  lVar1 = *(long *)(param_1 + 0x408);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x48) = 1;
    FUN_00227860(lVar1,2);
    FUN_0024e454(*(undefined8 *)(param_1 + 0x408));
  }
  if (*(long *)(param_1 + 0x400) != 0) {
    FUN_0025e658();
    (**(code **)(**(long **)(param_1 + 0x400) + 0x10))(*(long **)(param_1 + 0x400),0);
  }
  if (*(long *)(param_1 + 0x3f8) != 0) {
    FUN_0025ddac();
    (**(code **)(**(long **)(param_1 + 0x3f8) + 0x10))(*(long **)(param_1 + 0x3f8),0);
  }
  if (*(long *)(param_1 + 0x3f0) != 0) {
    FUN_00250e84();
    (**(code **)(**(long **)(param_1 + 0x3f0) + 0x10))(*(long **)(param_1 + 0x3f0),0);
  }
  if (*(long *)(param_1 + 1000) != 0) {
    FUN_0025d9a4();
    (**(code **)(**(long **)(param_1 + 1000) + 0x10))(*(long **)(param_1 + 1000),0);
  }
  if (*(long *)(param_1 + 0x3e0) != 0) {
    FUN_0025d5e0();
    (**(code **)(**(long **)(param_1 + 0x3e0) + 0x10))(*(long **)(param_1 + 0x3e0),0);
  }
  if (*(long *)(param_1 + 0x3d8) != 0) {
    FUN_0025f7ec();
    (**(code **)(**(long **)(param_1 + 0x3d8) + 0x10))(*(long **)(param_1 + 0x3d8),0);
  }
  if (*(long *)(param_1 + 0x3d0) != 0) {
    FUN_0025cd00();
    (**(code **)(**(long **)(param_1 + 0x3d0) + 0x10))(*(long **)(param_1 + 0x3d0),0);
  }
  if (*(long *)(param_1 + 0x3c8) == 0) {
    return;
  }
  FUN_0024f34c();
                    /* WARNING: Could not recover jumptable at 0x0025842c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x3c8) + 0x10))(*(long **)(param_1 + 0x3c8),0);
  return;
}


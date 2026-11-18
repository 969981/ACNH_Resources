
void FUN_03305008(long param_1)

{
  long *plVar1;
  void *__ptr;
  
  FUN_032ae0c8(param_1 + 0x540);
  if (*(long **)(param_1 + 0x518) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x518) + 0x18))();
  }
  if (*(long **)(param_1 + 0x510) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x510) + 0x18))();
  }
  __ptr = *(void **)(param_1 + 0x508);
  if (__ptr != (void *)0x0) {
    FUN_0329a9f8(__ptr);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x500) = 0;
  *(undefined ***)(param_1 + 0x428) = &PTR_LAB_04b174e0;
  if (*(long **)(param_1 + 0x4a8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x4a8) + 8))();
  }
  if (*(long **)(param_1 + 0x478) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x478) + 8))();
  }
  if (*(long **)(param_1 + 0x448) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x448) + 8))();
  }
  *(undefined ***)(param_1 + 0x380) = &PTR_LAB_04b174e0;
  if (*(long **)(param_1 + 0x400) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x400) + 8))();
  }
  if (*(long **)(param_1 + 0x3d0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x3d0) + 8))();
  }
  if (*(long **)(param_1 + 0x3a0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x3a0) + 8))();
  }
  *(undefined ***)(param_1 + 0x2d8) = &PTR_LAB_04b174e0;
  if (*(long **)(param_1 + 0x358) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x358) + 8))();
  }
  if (*(long **)(param_1 + 0x328) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x328) + 8))();
  }
  if (*(long **)(param_1 + 0x2f8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x2f8) + 8))();
  }
  *(undefined ***)(param_1 + 0x230) = &PTR_LAB_04b174e0;
  if (*(long **)(param_1 + 0x2b0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x2b0) + 8))();
  }
  if (*(long **)(param_1 + 0x280) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x280) + 8))();
  }
  if (*(long **)(param_1 + 0x250) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x250) + 8))();
  }
  *(undefined ***)(param_1 + 0x188) = &PTR_LAB_04b174e0;
  if (*(long **)(param_1 + 0x208) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x208) + 8))();
  }
  if (*(long **)(param_1 + 0x1d8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1d8) + 8))();
  }
  if (*(long **)(param_1 + 0x1a8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1a8) + 8))();
  }
  *(undefined ***)(param_1 + 0xe0) = &PTR_LAB_04b174e0;
  if (*(long **)(param_1 + 0x160) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x160) + 8))();
  }
  if (*(long **)(param_1 + 0x130) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x130) + 8))();
  }
  if (*(long **)(param_1 + 0x100) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x100) + 8))();
  }
  *(undefined ***)(param_1 + 0x38) = &PTR_LAB_04b174e0;
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
  }
  if (*(long **)(param_1 + 0x88) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x88) + 8))();
  }
  if (*(long **)(param_1 + 0x58) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0330527c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x58) + 8))();
  return;
}


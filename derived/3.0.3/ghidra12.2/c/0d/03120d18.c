
void FUN_03120d18(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_04b01e20;
  if (((*(byte *)(param_1 + 0x11) >> 1 & 1) != 0) && (DAT_04cce818 != 0)) {
    plVar1 = *(long **)(*(long *)(DAT_04cce818 + 0x10) + (long)*(int *)(param_1 + 0x18) * 8);
    nn::os::LockMutex((MutexType *)(plVar1 + 0x4d));
    (**(code **)(*plVar1 + 0x38))(plVar1,param_1 + 0xe);
    nn::os::UnlockMutex((MutexType *)(plVar1 + 0x4d));
  }
  FUN_03ebae78(param_1 + 0x2d);
  FUN_03f2d448(param_1 + 0x10);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03120dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}


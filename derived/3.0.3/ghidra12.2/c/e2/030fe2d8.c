
void FUN_030fe2d8(void *param_1)

{
  long *plVar1;
  
  *(byte *)((long)param_1 + 0x460) = *(byte *)((long)param_1 + 0x460) & 0xfd;
  FUN_03f45838((long)param_1 + 0x470);
  if (*(long *)((long)param_1 + 0x468) != 0) {
    *(byte *)((long)param_1 + 0x460) = *(byte *)((long)param_1 + 0x460) & 0xfe;
    FUN_0383b748();
    FUN_03839fd0(*(undefined8 *)PTR_DAT_04bcb3d8,*(undefined8 *)((long)param_1 + 0x468),0);
    *(undefined8 *)((long)param_1 + 0x468) = 0;
  }
  FUN_03838610((long)param_1 + 0x460);
  FUN_030beff8(param_1);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x030fe374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}


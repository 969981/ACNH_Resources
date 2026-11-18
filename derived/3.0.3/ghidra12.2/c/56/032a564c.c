
void FUN_032a564c(long param_1)

{
  long *plVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined4 *)(param_1 + 0xa8) = 0;
  FUN_032a57fc();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_032c1bf0();
    pvVar3 = *(void **)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (pvVar3 != (void *)0x0) {
      FUN_032c1b04(pvVar3);
      if (DAT_05ae7600 == 0) {
        free(pvVar3);
        lVar2 = *(long *)(param_1 + 0x38);
        goto joined_r0x032a56b4;
      }
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar3);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,pvVar3);
      }
    }
  }
  lVar2 = *(long *)(param_1 + 0x38);
joined_r0x032a56b4:
  if (lVar2 != 0) {
    FUN_032ae1e0();
    pvVar3 = *(void **)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (pvVar3 != (void *)0x0) {
      FUN_032ae0c8(pvVar3);
      if (DAT_05ae7600 == 0) {
        free(pvVar3);
      }
      else {
        plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar3);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x38))(plVar1,pvVar3);
        }
      }
    }
  }
  FUN_032a5978(param_1);
  if (*(long *)(param_1 + 0x20) == 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    FUN_032d1384();
    pvVar3 = *(void **)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (pvVar3 != (void *)0x0) {
      FUN_032d0688(pvVar3);
      if (DAT_05ae7600 == 0) {
        free(pvVar3);
        return;
      }
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar3);
      if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032a5774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x38))(plVar1,pvVar3);
        return;
      }
    }
  }
  return;
}


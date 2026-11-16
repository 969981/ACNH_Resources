
void FUN_029ad23c(void *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04bb3350;
  if (*(char *)((long)param_1 + 0x18) != '\0') {
    lVar5 = *(long *)((long)param_1 + 0x20);
    if (lVar5 == 0) {
      lVar4 = 1;
    }
    else {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar4 = *(long *)(lVar2 + 0xa8);
      *(long *)(lVar2 + 0xa8) = lVar5;
    }
    if ((0 < *(int *)((long)param_1 + 0x28)) && (*(char *)((long)param_1 + 0x14cc) != '\0')) {
      *(char *)((long)param_1 + 0x14cc) = '\0';
    }
    if (lVar4 != 1) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
      *(long *)(lVar5 + 0xa8) = lVar4;
    }
    *(undefined8 *)((long)param_1 + 0x20) = 0;
    *(undefined1 *)((long)param_1 + 0x18) = 0;
  }
  if (*(char *)((long)param_1 + 0x14cc) != '\0') {
    *(char *)((long)param_1 + 0x14cc) = '\0';
  }
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar3 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x029ad30c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x38))(plVar3,param_1);
  return;
}


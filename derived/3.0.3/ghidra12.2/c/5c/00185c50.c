
void FUN_00185c50(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar5;
  long *plVar6;
  
  puVar4 = PTR_DAT_04bcbc68;
  *param_1 = (long)(PTR_DAT_04bcbc70 + 0x10);
  (**(code **)(*(long *)puVar4 + 0x10))(puVar4);
  puVar3 = PTR_DAT_04bcbc60;
  plVar5 = *(long **)(PTR_DAT_04bcbc60 + 8);
  plVar6 = *(long **)(PTR_DAT_04bcbc60 + 0x18);
  if (plVar5 != param_1 && plVar5 != plVar6) {
    do {
      plVar5 = (long *)plVar5[1];
    } while (plVar5 != plVar6 && plVar5 != param_1);
  }
  if (plVar5 != plVar6) {
    lVar1 = plVar5[1];
    lVar2 = plVar5[2];
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = lVar1;
    }
    plVar5[2] = 0;
    if (lVar1 != 0) {
      *(long *)(lVar1 + 0x10) = lVar2;
    }
    plVar5[1] = 0;
    if (*(long **)(puVar3 + 8) == plVar5) {
      *(long *)(puVar3 + 8) = lVar1;
      plVar6 = *(long **)(puVar3 + 0x10);
    }
    else {
      plVar6 = *(long **)(puVar3 + 0x10);
    }
    if (plVar6 == plVar5) {
      *(long *)(puVar3 + 0x10) = lVar2;
    }
    *(long *)(puVar3 + 0x20) = *(long *)(puVar3 + 0x20) + -1;
  }
  (**(code **)(*(long *)puVar4 + 0x20))(puVar4);
  plVar5 = (long *)param_1[6];
  param_1[3] = (long)(PTR_DAT_04bc0ec8 + 0x10);
  if ((plVar5 == (long *)0x0) || (plVar5 == param_1 + 4)) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)((long)plVar5 + -0x14);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    free((undefined8 *)((long)plVar5 + -0x14));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00185d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


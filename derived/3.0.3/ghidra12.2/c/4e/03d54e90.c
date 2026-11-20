
void FUN_03d54e90(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  int *piVar6;
  
  if (*(char *)(param_1 + 0x100) != '\0') {
    FUN_03c888f0();
  }
  puVar2 = PTR_DAT_04bb2698;
  piVar6 = (int *)(param_1 + 0xf0);
  iVar1 = *piVar6;
  while (0 < iVar1) {
    *(uint *)(param_1 + 0xf0) = iVar1 - 1U;
    pvVar5 = *(void **)(*(long *)(param_1 + 0xf8) + (ulong)(iVar1 - 1U) * 8);
    if (pvVar5 == (void *)0x0) break;
    lVar3 = *(long *)puVar2;
    if (lVar3 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(lVar3,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    iVar1 = *piVar6;
  }
  pvVar5 = *(void **)(param_1 + 0xf8);
  if (pvVar5 != (void *)0x0) {
    lVar3 = *(long *)puVar2;
    if (lVar3 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(lVar3,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    piVar6[0] = 0;
    piVar6[1] = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  FUN_03b0d5c0(param_1);
  return;
}


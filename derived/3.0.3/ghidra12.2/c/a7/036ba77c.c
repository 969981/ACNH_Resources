
void FUN_036ba77c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  void *pvVar4;
  
  pvVar4 = DAT_05ab2770;
  puVar1 = PTR_DAT_04bb2698;
  if (DAT_05ab2770 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(DAT_05ab2770);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,DAT_05ab2770);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    DAT_05ab2770 = (void *)0x0;
    DAT_05ab2768 = 0;
  }
  pvVar4 = DAT_05ab2780;
  if (DAT_05ab2780 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(DAT_05ab2780);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,DAT_05ab2780);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    DAT_05ab2780 = (void *)0x0;
    DAT_05ab2778 = 0;
  }
  pvVar4 = DAT_05ab2790;
  if (DAT_05ab2790 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(DAT_05ab2790);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,DAT_05ab2790);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    DAT_05ab2790 = (void *)0x0;
    DAT_05ab2788 = 0;
  }
  puVar2 = PTR_DAT_04bc3970;
  pvVar4 = *(void **)(PTR_DAT_04bc3970 + 8);
  if (pvVar4 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    *(undefined8 *)(puVar2 + 8) = 0;
    *(undefined4 *)puVar2 = 0;
  }
  pvVar4 = DAT_05ab27a0;
  if (DAT_05ab27a0 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(DAT_05ab27a0);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,DAT_05ab27a0);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    DAT_05ab27a0 = (void *)0x0;
    DAT_05ab2798 = 0;
  }
  return;
}


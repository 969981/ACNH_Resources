
void FUN_038b16a4(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if ((DAT_05ae7180 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_05ae7180);
    if (iVar2 != 0) {
      DAT_05ae7178 = 0;
      DAT_05ae7160 = &PTR_LAB_04b62cf8;
      DAT_05ae7168 = (long *)&DAT_05ae7168;
      DAT_05ae7170 = &DAT_05ae7168;
      FUN_001001d0(&LAB_038b18c0,&DAT_05ae7160,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_05ae7180);
    }
  }
  plVar3 = (long *)(param_1 + 0x20);
  lVar5 = *plVar3;
  plVar6 = *(long **)(param_1 + 0x28);
  if ((plVar6 != (long *)0x0 || lVar5 != 0) && (lVar4 = *(long *)(param_1 + 0x38), lVar4 != 0)) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (lVar5 != 0) {
      *(long **)(lVar5 + 8) = plVar6;
      plVar6 = *(long **)(param_1 + 0x28);
    }
    if (plVar6 != (long *)0x0) {
      *plVar6 = *plVar3;
    }
    *plVar3 = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  lVar5 = *(long *)(param_1 + 0x38);
  if (lVar5 != 0) {
    plVar6 = *(long **)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (*(long *)(param_1 + 0x20) != 0) {
      *(long **)(*(long *)(param_1 + 0x20) + 8) = plVar6;
      plVar6 = *(long **)(param_1 + 0x28);
    }
    if (plVar6 != (long *)0x0) {
      *plVar6 = *plVar3;
    }
    *plVar3 = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  puVar1 = DAT_05ae7168;
  *(long ***)(param_1 + 0x38) = &DAT_05ae7168;
  plVar6 = plVar3;
  *(long **)(param_1 + 0x20) = DAT_05ae7168;
  DAT_05ae7168 = plVar6;
  *(long ***)(param_1 + 0x28) = &DAT_05ae7168;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = plVar3;
  }
  DAT_05ae7178 = DAT_05ae7178 + 1;
  return;
}


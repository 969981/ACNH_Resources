
void FUN_038b17e4(long param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  if ((DAT_05ae7180 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_05ae7180);
    if (iVar2 != 0) {
      DAT_05ae7178 = 0;
      DAT_05ae7160 = &PTR_LAB_04b62cf8;
      DAT_05ae7168 = &DAT_05ae7168;
      DAT_05ae7170 = &DAT_05ae7168;
      FUN_001001d0(&LAB_038b18c0,&DAT_05ae7160,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_05ae7180);
    }
  }
  plVar3 = (long *)(param_1 + 0x20);
  lVar1 = *plVar3;
  plVar5 = *(long **)(param_1 + 0x28);
  if ((plVar5 != (long *)0x0 || lVar1 != 0) && (lVar4 = *(long *)(param_1 + 0x38), lVar4 != 0)) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (lVar1 != 0) {
      *(long **)(lVar1 + 8) = plVar5;
      plVar5 = *(long **)(param_1 + 0x28);
    }
    if (plVar5 != (long *)0x0) {
      *plVar5 = *plVar3;
    }
    *plVar3 = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  return;
}


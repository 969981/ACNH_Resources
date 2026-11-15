
undefined8 FUN_01fa3eb0(long param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  
  if ((((*(int *)(param_1 + 0x77f4) != 0x10) && (*(int *)(param_1 + 0x77b0) != 0x10)) &&
      (*(int *)(*(long *)(param_1 + 0x10) + 0x360) != 0x13)) &&
     (*(int *)(*(long *)(param_1 + 0x10) + 0x378) != 0x13)) {
    plVar4 = *(long **)(*(long *)(param_1 + 8) + 0x60);
    if (plVar4 == (long *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_052461c0), iVar3 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        plVar4 = &DAT_05240280;
      }
      else {
        plVar4 = &DAT_05240280;
      }
    }
    uVar5 = (**(code **)(*plVar4 + 0x100))();
    puVar2 = PTR_DAT_04bb3238;
    if (((uVar5 & 1) != 0) && (*(char *)(param_1 + 0xaf9c) == '\0')) {
      *(undefined4 *)(param_1 + 0xafa0) = 2;
      *(undefined1 *)(param_1 + 0xaf9c) = 1;
      *(undefined4 *)(param_1 + 0xafa4) = *(undefined4 *)puVar2;
      *(undefined2 *)(param_1 + 0xafa8) = *param_2;
      *(undefined1 *)(param_1 + 0xafaa) = *(undefined1 *)(param_2 + 1);
      *(undefined1 *)(param_1 + 0xafab) = *(undefined1 *)((long)param_2 + 3);
      uVar1 = *(undefined4 *)(param_2 + 2);
      *(undefined1 *)(param_1 + 0xaf90) = 0;
      *(undefined1 *)(param_1 + 0xaf98) = 0;
      *(undefined4 *)(param_1 + 0xafac) = uVar1;
      return 1;
    }
  }
  return 0;
}


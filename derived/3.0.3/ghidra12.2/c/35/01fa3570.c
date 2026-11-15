
undefined8 FUN_01fa3570(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  
  if ((((*(int *)(param_1 + 0x77f4) != 0x10) && (*(int *)(param_1 + 0x77b0) != 0x10)) &&
      (*(int *)(*(long *)(param_1 + 0x10) + 0x360) != 0x13)) &&
     (*(int *)(*(long *)(param_1 + 0x10) + 0x378) != 0x13)) {
    plVar5 = *(long **)(*(long *)(param_1 + 8) + 0x60);
    if (plVar5 == (long *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_052461c0), iVar4 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        plVar5 = &DAT_05240280;
      }
      else {
        plVar5 = &DAT_05240280;
      }
    }
    uVar6 = (**(code **)(*plVar5 + 0x100))();
    puVar2 = PTR_DAT_04bb3238;
    if (((uVar6 & 1) != 0) && (*(char *)(param_1 + 0xaf9c) == '\0')) {
      *(undefined4 *)(param_1 + 0xafa0) = 0xe;
      puVar3 = PTR_DAT_04bb37e0;
      *(undefined1 *)(param_1 + 0xaf9c) = 1;
      *(undefined4 *)(param_1 + 0xafa4) = *(undefined4 *)puVar2;
      *(undefined2 *)(param_1 + 0xafa8) = *(undefined2 *)puVar3;
      *(undefined *)(param_1 + 0xafaa) = puVar3[2];
      *(undefined *)(param_1 + 0xafab) = puVar3[3];
      uVar1 = *(undefined4 *)(puVar3 + 4);
      *(undefined1 *)(param_1 + 0xaf98) = 0;
      *(undefined4 *)(param_1 + 0xafac) = uVar1;
      *(undefined1 *)(param_1 + 0xaf90) = 0;
      return 1;
    }
  }
  return 0;
}


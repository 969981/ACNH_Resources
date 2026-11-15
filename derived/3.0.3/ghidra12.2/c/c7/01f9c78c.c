
undefined8 FUN_01f9c78c(long param_1,byte param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  
  if ((((*(int *)(param_1 + 0x77f4) != 0x10) && (*(int *)(param_1 + 0x77b0) != 0x10)) &&
      (*(int *)(*(long *)(param_1 + 0x10) + 0x360) != 0x13)) &&
     (*(int *)(*(long *)(param_1 + 0x10) + 0x378) != 0x13)) {
    plVar3 = *(long **)(*(long *)(param_1 + 8) + 0x60);
    if (plVar3 == (long *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        plVar3 = &DAT_05240280;
      }
      else {
        plVar3 = &DAT_05240280;
      }
    }
    uVar4 = (**(code **)(*plVar3 + 0x100))();
    if (((uVar4 & 1) != 0) && (*(char *)(param_1 + 0xaf90) == '\0')) {
      *(undefined4 *)(param_1 + 0xaf94) = 0;
      *(char *)(param_1 + 0xaf90) = '\x01';
      *(byte *)(param_1 + 0xaf98) = param_2 & 1;
      *(undefined1 *)(param_1 + 0xaf9c) = 0;
      puVar1 = PTR_DAT_04bb37e0;
      *(undefined4 *)(param_1 + 0xafa4) = 0;
      *(undefined2 *)(param_1 + 0xafa8) = *(undefined2 *)puVar1;
      *(undefined *)(param_1 + 0xafaa) = puVar1[2];
      *(undefined *)(param_1 + 0xafab) = puVar1[3];
      *(undefined4 *)(param_1 + 0xafac) = *(undefined4 *)(puVar1 + 4);
      return 1;
    }
  }
  return 0;
}


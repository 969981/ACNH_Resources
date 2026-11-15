
void FUN_01e3ce98(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 0x6a5) != '\0') {
    return;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  if (puVar2 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      puVar2 = &DAT_05240280;
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar2 = &DAT_05240280;
    }
  }
  if (*(int *)((long)puVar2 + 0x12d4) != 0 && *(char *)((long)puVar2 + 0x142c) != '\0') {
    puVar2 = *(undefined8 **)(param_1 + 0x60);
    if (puVar2 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_052461c0);
        puVar2 = &DAT_05240280;
        if (iVar1 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar2 = &DAT_05240280;
      }
    }
    if (*(char *)((long)puVar2 + 0x142c) != '\0') {
      *(undefined4 *)((long)puVar2 + 0x12d4) = 0;
      *(char *)((long)puVar2 + 0x142c) = '\0';
    }
  }
  return;
}


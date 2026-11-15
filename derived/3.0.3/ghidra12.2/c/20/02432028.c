
void FUN_02432028(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  if (puVar2 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052461c0), iVar1 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar2 = &DAT_05240280;
    }
    else {
      puVar2 = &DAT_05240280;
    }
  }
  FUN_01713640(0x3f800000,puVar2);
  *(undefined8 *)(param_1 + 0x1c78) = 0;
  *(undefined4 *)(param_1 + 0x1cb0) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1ca5) = 0;
  *(undefined2 *)(param_1 + 0x1c84) = 0x100;
  *(undefined4 *)(param_1 + 0x1c80) = 300;
  *(undefined4 *)(param_1 + 0x1c98) = *(undefined4 *)(param_1 + 0x1c9c);
  return;
}


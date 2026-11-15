
void FUN_01ef62a4(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x60);
  if (puVar3 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      puVar3 = &DAT_05240280;
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar3 = &DAT_05240280;
    }
  }
  lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  if (lVar2 != 0) {
    *(float *)(lVar2 + 0x300) = (1.0 - *(float *)(puVar3 + 0x2c1)) * 5.0;
  }
  return;
}


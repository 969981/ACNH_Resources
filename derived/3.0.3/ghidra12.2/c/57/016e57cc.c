
void FUN_016e57cc(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auStack_2c [8];
  float local_24;
  
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
  FUN_016ff8c0(puVar2,2,auStack_2c);
  local_24 = local_24 + -0.01;
  FUN_016e5890(auStack_2c);
  return;
}


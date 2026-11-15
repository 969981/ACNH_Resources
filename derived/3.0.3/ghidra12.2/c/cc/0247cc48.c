
void FUN_0247cc48(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  float local_2c;
  float fStack_28;
  float local_24;
  
  fStack_28 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
  local_2c = (float)*(int *)(param_1 + 0x1900) * 0.001;
  local_24 = (float)*(int *)(param_1 + 0x1906) * 0.001;
  FUN_016dec40(param_1,&local_2c,0,0,0,0,0);
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
  FUN_01707d90(puVar2,&DAT_054d08b8,6,0,0);
  return;
}


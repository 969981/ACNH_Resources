
void FUN_023cf090(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  float local_2c;
  float fStack_28;
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
  FUN_017081d0(puVar2,&DAT_054ad538,6,1,0);
  fStack_28 = (float)(int)*(short *)(param_1 + 0x1910) * 0.25;
  local_2c = (float)*(int *)(param_1 + 0x190c) * 0.001;
  local_24 = (float)*(int *)(param_1 + 0x1912) * 0.001;
  FUN_0231ece4(param_1,PTR_DAT_04bb2150,&local_2c);
  if ((*(long *)PTR_DAT_04bb7ff8 == 0) || (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) == 0)) {
    FUN_023340e8(param_1);
    return;
  }
  return;
}


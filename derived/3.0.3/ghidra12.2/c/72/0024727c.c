
void FUN_0024727c(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_04bcd570 + 0x10);
  puVar1 = PTR_DAT_04bc1510;
  lVar2 = FUN_002ba7a0(*(undefined8 *)PTR_DAT_04bc1510);
  if (lVar2 != 0) {
    lVar2 = FUN_002ba7a0(*(undefined8 *)puVar1);
    if (*(long *)(lVar2 + 0x10) != 0) {
      FUN_00256774();
    }
    lVar2 = FUN_002ba7a0(*(undefined8 *)puVar1);
    if (*(long *)(lVar2 + 8) != 0) {
      FUN_002522e8();
    }
  }
  puVar1 = PTR_DAT_04bcba10;
  FUN_0024fc78(*(undefined8 *)PTR_DAT_04bcba10);
  FUN_002504c0(*(undefined8 *)puVar1);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x1074));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x2ef));
  FUN_002576a0(param_1);
  return;
}


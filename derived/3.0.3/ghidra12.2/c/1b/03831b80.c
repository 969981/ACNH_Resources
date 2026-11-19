
void FUN_03831b80(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  
  FUN_03f45490();
  if (0 < *(int *)(param_1 + 0x128)) {
    lVar3 = *(long *)(param_1 + 0x100);
    if (*(int *)(param_1 + 0x108) < 1) {
      lVar3 = 0;
    }
    puVar1 = (undefined8 *)0x0;
    if (lVar3 != 0) {
      puVar1 = (undefined8 *)(lVar3 - *(int *)(param_1 + 0x10c));
    }
    if (((*PTR_DAT_04bcb2d8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bcb2d8), iVar2 != 0)) {
      *(undefined ***)PTR_DAT_04bcb2d0 = &PTR_LAB_04b5d338;
      __cxa_guard_release(PTR_DAT_04bcb2d8);
    }
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,PTR_DAT_04bcb2d0);
    }
  }
  return;
}


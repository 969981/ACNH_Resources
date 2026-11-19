
void FUN_03912ac8(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *__ptr;
  
  *param_1 = &PTR_FUN_04b65fc0;
  puVar1 = PTR_DAT_04bbd578;
  param_1[0x21] = &PTR_LAB_04b66028;
  puVar1 = puVar1 + 0x10;
  param_1[0x548] = puVar1;
  param_1[0x4bc] = puVar1;
  param_1[0x4b7] = puVar1;
  FUN_03929ec0(param_1 + 0x4f);
  param_1[0x4b] = puVar1;
  param_1[0x21] = &PTR_LAB_04b66628;
  param_1[0x2e] = &PTR_LAB_04b66680;
  param_1[0x47] = puVar1;
  param_1[0x42] = puVar1;
  param_1[0x34] = puVar1;
  *param_1 = &PTR_FUN_04b65f78;
  if ((*(char *)(param_1 + 0x17) != '\0') && (__ptr = (void *)param_1[2], __ptr != (void *)0x0)) {
    FUN_0391bcc8(__ptr);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
      }
    }
    param_1[2] = 0;
  }
  FUN_038fd0e0(param_1 + 0xd);
  return;
}


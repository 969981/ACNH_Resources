
void FUN_02e3d010(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar1 = PTR_DAT_04bc6c78;
  param_1[0x1a] = (long)(PTR_DAT_04bb2df8 + 0x10);
  *param_1 = (long)(puVar1 + 0x10);
  FUN_03ebae78(param_1 + 1);
  param_1 = param_1 + 0xb;
  puVar2 = (undefined8 *)*param_1;
  if ((puVar2 != (undefined8 *)0x0) &&
     ((long *)*puVar2 != (long *)0x0 && (long *)*puVar2 == param_1)) {
    *param_1 = 0;
    *puVar2 = 0;
  }
  return;
}


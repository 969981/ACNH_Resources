
void FUN_002ea334(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_04bce838;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_04bcb8b8;
  iVar2 = FUN_0029b330(*(undefined8 *)PTR_DAT_04bcb8b8);
  if (((iVar2 != 5) && (iVar2 = FUN_0029b330(*(undefined8 *)puVar1), iVar2 != 6)) &&
     (iVar2 = FUN_0029b330(*(undefined8 *)puVar1), iVar2 != 7)) {
    FUN_0029b330(*(undefined8 *)puVar1);
  }
  FUN_002ea3f0(param_1);
  param_1[0x326] = 0;
  FUN_002e8730(param_1 + 0x25d);
  FUN_002e8730(param_1 + 0x194);
  FUN_002e8730(param_1 + 0xcb);
  FUN_002e8730(param_1 + 2);
  return;
}


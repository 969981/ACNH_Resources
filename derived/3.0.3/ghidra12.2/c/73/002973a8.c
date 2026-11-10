
void FUN_002973a8(long param_1,undefined4 *param_2)

{
  undefined1 auStack_20 [16];
  
  *(undefined4 *)(param_1 + 0x23c) = *param_2;
  memcpy((void *)(param_1 + 0x240),param_2 + 1,0x10);
  FUN_002b9b10(auStack_20,*(undefined8 *)PTR_DAT_04bc1510,param_1 + 0x23c);
  return;
}


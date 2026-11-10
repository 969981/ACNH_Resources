
void FUN_001971bc(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = param_1 + 1;
  param_1[4] = 0x10;
  lVar1 = *(long *)(param_2 + 0x18);
  *param_1 = &PTR_LAB_04a426b8;
  FUN_0018b7a0(param_1,lVar1 << 1);
  FUN_0018c1a0(*(long *)(param_2 + 0x10) + *(long *)(param_2 + 0x28),param_1[3],
               *(undefined8 *)(param_2 + 0x18));
  return;
}


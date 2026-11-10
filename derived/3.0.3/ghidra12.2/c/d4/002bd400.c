
void _INIT_19(void)

{
  undefined *puVar1;
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  local_24 = 0x10c13;
  local_14 = 0;
  puVar1 = PTR_DAT_04bce1c8 + 4;
  *(undefined4 *)PTR_DAT_04bce1c8 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(puVar1,&local_24);
  return;
}


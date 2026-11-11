
void _INIT_192(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bd6a20;
  if ((*PTR_DAT_04bd6a20 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bd6a28,PTR_DAT_04bd6a30);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


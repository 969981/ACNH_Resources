
void _INIT_86(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bd4b08;
  if ((*PTR_DAT_04bd4b08 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bd4b18,PTR_DAT_04bd4b20);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}



void _INIT_620(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bdc710;
  if ((*PTR_DAT_04bdc710 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bddb30,PTR_DAT_04bddb38);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


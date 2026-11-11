
void _INIT_1003(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bda8c8;
  if ((*PTR_DAT_04bda8c8 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdae78,PTR_DAT_04bdae80);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


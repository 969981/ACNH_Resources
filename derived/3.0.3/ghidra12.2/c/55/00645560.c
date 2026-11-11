
void _INIT_840(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bdba60;
  if ((*PTR_DAT_04bdba60 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdbe30,PTR_DAT_04bdbe38);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


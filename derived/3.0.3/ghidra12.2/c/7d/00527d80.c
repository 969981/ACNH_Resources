
void _INIT_700(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bdc798;
  if ((*PTR_DAT_04bdc798 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bddc40,PTR_DAT_04bddc48);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


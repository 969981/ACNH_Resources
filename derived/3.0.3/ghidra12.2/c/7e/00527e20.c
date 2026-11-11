
void _INIT_702(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bdc750;
  if ((*PTR_DAT_04bdc750 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bddbb0,PTR_DAT_04bddbb8);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


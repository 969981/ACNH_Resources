
void _INIT_601(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bdc5b0;
  if ((*PTR_DAT_04bdc5b0 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdd7d0,PTR_DAT_04bdd7d8);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


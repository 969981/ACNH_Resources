
void _INIT_640(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bdc328;
  if ((*PTR_DAT_04bdc328 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdd2c0,PTR_DAT_04bdd2c8);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


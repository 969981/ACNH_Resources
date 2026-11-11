
void _INIT_741(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bdc500;
  if ((*PTR_DAT_04bdc500 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdd670,PTR_DAT_04bdd678);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}



void _INIT_575(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bdc238;
  if ((*PTR_DAT_04bdc238 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdd0e0,PTR_DAT_04bdd0e8);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}



void _INIT_710(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bdc450;
  if ((*PTR_DAT_04bdc450 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdd510,PTR_DAT_04bdd518);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}



void _INIT_711(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bdc280;
  if ((*PTR_DAT_04bdc280 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdd170,PTR_DAT_04bdd178);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}



void _INIT_750(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bdc570;
  if ((*PTR_DAT_04bdc570 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdd750,PTR_DAT_04bdd758);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


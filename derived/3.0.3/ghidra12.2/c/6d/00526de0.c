
void _INIT_650(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bdc5f8;
  if ((*PTR_DAT_04bdc5f8 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdd860,PTR_DAT_04bdd868);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


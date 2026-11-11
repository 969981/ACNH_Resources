
void _INIT_709(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bdc528;
  if ((*PTR_DAT_04bdc528 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdd6c0,PTR_DAT_04bdd6c8);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


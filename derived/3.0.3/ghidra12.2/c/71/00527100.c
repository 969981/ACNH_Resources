
void _INIT_660(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bdc380;
  if ((*PTR_DAT_04bdc380 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdd370,PTR_DAT_04bdd378);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}



void _INIT_720(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bdc3b8;
  if ((*PTR_DAT_04bdc3b8 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdd3e0,PTR_DAT_04bdd3e8);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


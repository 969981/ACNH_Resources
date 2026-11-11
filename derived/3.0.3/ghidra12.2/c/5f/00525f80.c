
void _INIT_604(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bdc070;
  if ((*PTR_DAT_04bdc070 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdc0b0,PTR_DAT_04bdc0b8);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


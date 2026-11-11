
void _INIT_770(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bdc210;
  if ((*PTR_DAT_04bdc210 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdd090,PTR_DAT_04bdd098);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


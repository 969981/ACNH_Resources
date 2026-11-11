
void _INIT_580(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bdc620;
  if ((*PTR_DAT_04bdc620 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdd950,PTR_DAT_04bdd958);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


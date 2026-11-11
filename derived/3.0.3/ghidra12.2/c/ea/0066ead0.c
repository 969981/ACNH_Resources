
void _INIT_940(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bde978;
  if ((*PTR_DAT_04bde978 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdec68,PTR_DAT_04bdec70);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


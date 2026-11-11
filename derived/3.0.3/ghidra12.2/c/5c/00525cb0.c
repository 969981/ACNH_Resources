
void _INIT_595(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bdc228;
  if ((*PTR_DAT_04bdc228 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdd0c0,PTR_DAT_04bdd0c8);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


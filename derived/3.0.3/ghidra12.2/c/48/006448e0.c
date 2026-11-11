
void _INIT_800(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bdbaa8;
  if ((*PTR_DAT_04bdbaa8 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdbec0,PTR_DAT_04bdbec8);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}



void _INIT_1006(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bda970;
  if ((*PTR_DAT_04bda970 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdafc8,PTR_DAT_04bdafd0);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


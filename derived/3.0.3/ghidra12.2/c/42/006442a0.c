
void _INIT_780(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bdb920;
  if ((*PTR_DAT_04bdb920 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdbb90,PTR_DAT_04bdbb98);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


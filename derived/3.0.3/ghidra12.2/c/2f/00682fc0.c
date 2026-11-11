
void _INIT_980(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bda920;
  if ((*PTR_DAT_04bda920 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdaf28,PTR_DAT_04bdaf30);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


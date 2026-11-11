
void _INIT_602(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bdc060;
  if ((*PTR_DAT_04bdc060 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdc090,PTR_DAT_04bdc098);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


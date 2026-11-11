
void _INIT_1010(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bdaa90;
  if ((*PTR_DAT_04bdaa90 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdb208,PTR_DAT_04bdb210);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


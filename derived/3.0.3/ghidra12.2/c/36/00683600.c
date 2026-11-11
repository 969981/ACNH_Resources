
void _INIT_1000(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bdaa50;
  if ((*PTR_DAT_04bdaa50 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdb188,PTR_DAT_04bdb190);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}



void _INIT_802(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bdb950;
  if ((*PTR_DAT_04bdb950 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdbc10,PTR_DAT_04bdbc18);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


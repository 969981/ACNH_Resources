
void _INIT_850(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bd9d90;
  if ((*PTR_DAT_04bd9d90 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bda170,PTR_DAT_04bda178);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


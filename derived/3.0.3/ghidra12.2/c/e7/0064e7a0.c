
void _INIT_880(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bd9d70;
  if ((*PTR_DAT_04bd9d70 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bda130,PTR_DAT_04bda138);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


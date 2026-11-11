
void _INIT_860(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bd9d40;
  if ((*PTR_DAT_04bd9d40 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bda0d0,PTR_DAT_04bda0d8);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


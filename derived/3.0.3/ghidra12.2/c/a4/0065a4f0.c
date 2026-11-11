
void _INIT_900(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bd9c98;
  if ((*PTR_DAT_04bd9c98 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bd9ca0,PTR_DAT_04bd9ca8);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


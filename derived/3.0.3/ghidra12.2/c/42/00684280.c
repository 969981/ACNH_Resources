
void _INIT_1040(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bda9c8;
  if ((*PTR_DAT_04bda9c8 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdb078,PTR_DAT_04bdb080);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


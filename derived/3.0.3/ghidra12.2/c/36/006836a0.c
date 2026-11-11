
void _INIT_1002(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bda910;
  if ((*PTR_DAT_04bda910 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdaf08,PTR_DAT_04bdaf10);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


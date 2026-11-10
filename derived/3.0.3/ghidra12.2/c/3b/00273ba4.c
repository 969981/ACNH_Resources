
void FUN_00273ba4(long param_1)

{
  long *plVar1;
  
  FUN_002b3cec();
  plVar1 = (long *)FUN_002ba640(DAT_04c61168);
  if (*(long *)(param_1 + 0xa0) != 0) {
    (**(code **)(*plVar1 + 0x180))(plVar1);
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    (**(code **)(*plVar1 + 0x178))(plVar1);
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  return;
}


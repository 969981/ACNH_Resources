
undefined8 * FUN_0049e430(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long local_28;
  
  FUN_0043b000(&local_28,DAT_04c6f0e0,param_1,1);
  lVar1 = local_28;
  local_28 = 0;
  if (lVar1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)FUN_00438810(0x28);
    *puVar2 = &PTR_LAB_04866c48;
    puVar2[1] = lVar1;
    FUN_004435a0(lVar1);
    puVar2[2] = 0;
    puVar2[3] = 0x8000000000000000;
    puVar2[4] = 0xffffffffffffffff;
    FUN_004435c0(lVar1);
  }
  return puVar2;
}


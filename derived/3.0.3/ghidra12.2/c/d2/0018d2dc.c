
void FUN_0018d2dc(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  param_1[2] = 0;
  *param_1 = &PTR_FUN_04838c68;
  param_1[1] = 0;
  lVar1 = DAT_04c58a60;
  if (DAT_04c58a00 == '\0') {
    return;
  }
  plVar2 = (long *)(DAT_04c58a60 + 0x30);
  (**(code **)(*plVar2 + 0x10))(plVar2);
  if (*(long *)(lVar1 + 0x10) == *(long *)(lVar1 + 0x20)) {
    *(undefined8 **)(lVar1 + 0x10) = param_1;
  }
  else {
    *(undefined8 **)(*(long *)(lVar1 + 0x18) + 8) = param_1;
    param_1[2] = *(undefined8 *)(lVar1 + 0x18);
  }
  *(undefined8 **)(lVar1 + 0x18) = param_1;
  *(long *)(lVar1 + 0x28) = *(long *)(lVar1 + 0x28) + 1;
                    /* WARNING: Could not recover jumptable at 0x0018d374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x30) + 0x20))(plVar2);
  return;
}



void FUN_006cd610(undefined8 *param_1)

{
  ulong uVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  *param_1 = &DAT_048fa060;
  if ((((plVar2 != (long *)0x0) && ((char)plVar2[0xf] != '\0')) &&
      (uVar1 = (**(code **)(*plVar2 + 0x48))(plVar2,param_1), (uVar1 & 1) != 0)) &&
     (uVar1 = (**(code **)(*plVar2 + 0xd8))(plVar2,param_1), (uVar1 & 1) != 0)) {
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


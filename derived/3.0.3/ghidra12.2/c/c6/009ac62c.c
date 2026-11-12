
void FUN_009ac62c(undefined8 *param_1)

{
  ulong uVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0492c6c0;
  if ((((plVar2 != (long *)0x0) && ((char)plVar2[0xf] != '\0')) &&
      (uVar1 = (**(code **)(*plVar2 + 0x48))(plVar2,param_1), (uVar1 & 1) != 0)) &&
     (uVar1 = (**(code **)(*plVar2 + 0x70))(plVar2,param_1), (uVar1 & 1) != 0)) {
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


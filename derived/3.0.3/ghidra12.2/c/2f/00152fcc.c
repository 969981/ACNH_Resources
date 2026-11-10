
bool FUN_00152fcc(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = FUN_00153008(param_1,*param_2);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    param_2[1] = param_1;
  }
  return bVar1;
}


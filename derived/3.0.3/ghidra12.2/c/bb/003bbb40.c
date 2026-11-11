
void FUN_003bbb40(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  param_1[4] = *param_1;
  param_1[5] = param_1[1];
  if (param_2 != 0) {
    for (puVar2 = (undefined8 *)param_1[3]; puVar2 != param_1 + 2; puVar2 = (undefined8 *)puVar2[1])
    {
      uVar1 = FUN_003bbcb0(puVar2,param_2);
      if ((uVar1 & 1) != 0) {
        param_1[4] = puVar2[3];
        param_1[5] = puVar2[4];
        return;
      }
    }
  }
  return;
}


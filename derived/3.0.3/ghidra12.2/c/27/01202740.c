
void FUN_01202740(undefined2 *param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = FUN_00a8c4b4(DAT_04da7238);
  if (iVar2 - 1U < 6) {
    puVar3 = (undefined4 *)(&PTR_DAT_04987220)[(int)(iVar2 - 1U)];
  }
  else {
    puVar3 = &DAT_04c47ee0;
  }
  uVar1 = puVar3[param_2 & 0xff];
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = (short)uVar1;
  FUN_0277d4ac(param_1);
  return;
}


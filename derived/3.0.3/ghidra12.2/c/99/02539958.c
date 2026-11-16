
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02539958(undefined4 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  
  uVar2 = DAT_0558600c;
  iVar1 = *(int *)(*(long *)*param_2 + 0xed0);
  if (iVar1 == 0xd) {
    uVar3 = 0xc03;
  }
  else if (iVar1 == 0x10) {
    uVar3 = 0x9ef;
  }
  else {
    if (iVar1 != 0x19) {
      *param_1 = _DAT_05586008;
      param_1[1] = uVar2;
      return;
    }
    uVar3 = 0xcaf;
  }
  *(undefined2 *)param_1 = uVar3;
  *(undefined2 *)((long)param_1 + 2) = 0;
  param_1[1] = 0;
  FUN_0277d4ac();
  return;
}


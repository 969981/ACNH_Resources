
long FUN_003dc500(long param_1,undefined8 param_2,long param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_34 [4];
  
  FUN_003dd544();
  *(undefined8 *)(param_1 + 0x18) = 0xffffffff;
  iVar1 = nn::fs::WriteFile(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x20),param_2,
                            param_3,auStack_34);
  if (iVar1 == 0) {
    uVar2 = 0;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + param_3;
  }
  else {
    uVar2 = 0x81000000;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uVar2;
  }
  return param_3;
}


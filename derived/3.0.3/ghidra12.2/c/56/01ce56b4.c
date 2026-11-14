
void FUN_01ce56b4(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  if (*(char *)(param_2 + 0x47) == '\0') {
    *param_1 = 0xfffe;
    FUN_0277d4ac(param_1);
    return;
  }
  uVar2 = *(undefined2 *)(param_2 + 0x6c);
  *(undefined2 *)((long)param_1 + 2) = 0;
  uVar3 = *(undefined2 *)(param_2 + 0x6e);
  *(undefined4 *)((long)param_1 + 4) = 0;
  *(undefined2 *)param_1 = uVar2;
  uVar1 = *(undefined4 *)(param_2 + 0x70);
  FUN_0277d4ac(param_1);
  *(undefined2 *)((long)param_1 + 2) = uVar3;
  *(undefined4 *)((long)param_1 + 4) = uVar1;
  return;
}


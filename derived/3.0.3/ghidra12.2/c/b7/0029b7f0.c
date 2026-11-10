
void FUN_0029b7f0(int *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  if (*(int *)(param_2 + 0x110) != 1) {
    if (*(int *)(param_2 + 0x140) != 0) {
      FUN_00220f24(param_2 + 0x110);
      *(undefined4 *)(param_2 + 0x140) = 0;
    }
    if ((((((*(long *)(param_2 + 0x70) != 0) && (*(long *)(param_2 + 0xf0) != 0)) &&
          (*(long *)(param_2 + 0xf0) == *(long *)(param_2 + 0xf8))) &&
         ((plVar1 = *(long **)(param_2 + (ulong)*(byte *)(param_2 + 0x162) * 8 + 0x168),
          plVar1 != (long *)0x0 && (uVar2 = (**(code **)(*plVar1 + 0xe0))(), (uVar2 & 1) != 0)))) &&
        ((*(long *)(param_2 + 0xf0) == *(long *)(param_2 + 0x100) &&
         ((plVar1 = *(long **)(param_2 + (ulong)(*(char *)(param_2 + 0x162) == '\0') * 8 + 0x168),
          plVar1 != (long *)0x0 && (uVar2 = (**(code **)(*plVar1 + 0xe0))(), (uVar2 & 1) != 0))))))
       && ((*(int *)(*(long *)(param_2 + 0x70) + 0x90) == 0 &&
           ((*(int *)(param_2 + 0xd4) == 4 &&
            (*(int *)(param_2 + (ulong)*(byte *)(param_2 + 0x162) * 4 + 0x180) != 0)))))) {
      FUN_0029582c(param_1,*(long *)(param_2 + 0x70),param_2 + 0x110);
      if (*param_1 == 0) {
        FUN_002211bc(*(undefined8 *)(param_2 + 0x70),0);
        *(undefined4 *)(param_2 + 0x140) = 0xe;
        return;
      }
      return;
    }
  }
  local_24 = 0;
  local_34 = 0x10c08;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
  FUN_002296c4(param_1,&local_34);
  return;
}


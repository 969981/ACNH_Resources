
void FUN_0029b574(int *param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  if (*(int *)(param_2 + 0x110) != 1) {
    if (*(int *)(param_2 + 0x140) != 0) {
      FUN_00220f24(param_2 + 0x110);
      *(undefined4 *)(param_2 + 0x140) = 0;
    }
    if ((((*(long *)(param_2 + 0x70) != 0) && (*(int *)(*(long *)(param_2 + 0x70) + 0x90) == 0)) &&
        (*(int *)(param_2 + 0xd4) == 2)) &&
       (((*(int *)(param_2 + (ulong)(*(char *)(param_2 + 0x162) == '\0') * 4 + 0x180) == 0 &&
         (DAT_04c603c8 != 0)) && (uVar1 = FUN_0026c070(), (uVar1 & 1) != 0)))) {
      FUN_002956c0(param_1,*(undefined8 *)(param_2 + 0x70),param_2 + 0x110,param_3);
      if (*param_1 == 0) {
        FUN_002211bc(*(undefined8 *)(param_2 + 0x70),0);
        *(undefined4 *)(param_2 + 0x214) = 0;
        *(undefined1 *)(param_2 + 0x218) = 0;
        *(undefined4 *)(param_2 + 0x140) = 0xd;
        return;
      }
      return;
    }
  }
  local_24 = 0;
  local_40 = 0x10c08;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
  FUN_002296c4(param_1,&local_40);
  return;
}


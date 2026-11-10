
void FUN_002b7440(undefined8 param_1,long param_2,long param_3,uint param_4,uint param_5)

{
  long lVar1;
  ulong uVar2;
  int *piVar3;
  long lVar4;
  int local_54;
  ErrorResultVariant aEStack_50 [12];
  int local_44 [4];
  undefined4 local_34;
  
  FUN_002b7558(local_44);
  if (local_44[0] == 0) {
    if ((((param_3 == 0) || (param_4 == 0)) || (*(uint *)(param_2 + 0xb4) < param_4)) ||
       ((((param_5 ^ 0xffffffff) & 0xff) == 0 ||
        (uVar2 = FUN_002b5888(param_2,param_5), (uVar2 & 1) == 0)))) {
      local_54 = 0x10c07;
    }
    else {
      lVar4 = 0;
      do {
        lVar1 = param_2 + lVar4;
        if ((*(byte *)(lVar1 + 0x94) != 0xff) && ((uint)*(byte *)(lVar1 + 0x94) != (param_5 & 0xff))
           ) {
          *(undefined1 *)(lVar1 + 0xd3) = 1;
          *(undefined1 *)(lVar1 + 0x94) = 0xff;
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0x20);
      *(long *)(param_2 + 0x80) = param_3;
      *(uint *)(param_2 + 0x90) = param_4;
      *(undefined4 *)(param_2 + 0x78) = 1;
      *(char *)(param_2 + 0xb8) = (char)param_5;
      *(undefined4 *)(param_2 + 0xbc) = 0;
      *(undefined2 *)(param_2 + 0xd0) = 0;
      *(undefined1 *)(param_2 + 0xd2) = 0;
      local_54 = 0;
    }
    local_34 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_34);
    piVar3 = &local_54;
  }
  else {
    piVar3 = local_44;
  }
  FUN_002296c4(param_1,piVar3);
  return;
}


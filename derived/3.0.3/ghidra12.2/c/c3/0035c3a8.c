
void FUN_0035c3a8(long *param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  
  if ((char)param_1[8] == '\0') {
    lVar1 = param_1[3] + (ulong)*(uint *)(param_1[4] + 0xc);
    uVar4 = (**(code **)(*param_1 + 0x120))();
    lVar3 = 0;
    if (*(uint *)(lVar1 + 0x14) != 0) {
      lVar3 = param_1[3] + (ulong)*(uint *)(lVar1 + 0x14);
    }
    FUN_00352d04(param_1 + 5,lVar3,*(undefined2 *)(lVar1 + 10),*(undefined2 *)(lVar1 + 0x10),
                 *(undefined2 *)(lVar1 + 0x12),uVar4,1);
    uVar2 = *(ushort *)((long)param_1 + 0x3c) & 0x3fff;
    if ((uVar2 < 0x14) &&
       ((7 < uVar2 || ((1 << (ulong)(*(ushort *)((long)param_1 + 0x3c) & 0x1f) & 0xc2U) == 0)))) {
      FUN_0035c52c(param_1 + 5,param_2,param_1[0xd],(param_1[6] - param_1[2]) + param_1[0xe],
                   param_1[0xf]);
      return;
    }
  }
  return;
}


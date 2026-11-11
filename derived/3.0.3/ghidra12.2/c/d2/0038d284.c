
int FUN_0038d284(long param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int local_150 [64];
  
  uVar1 = param_4[2];
  if ((0x8000000 < uVar1) && (uVar2 = *param_4, uVar2 != 0x58504346)) {
    nn::util::SNPrintf((char *)local_150,0x100,
                       "Signature check failed (\'%c%c%c%c\' must be \'%c%c%c%c\').",
                       (ulong)(uVar2 >> 0x18),(ulong)(uVar2 >> 0x10 & 0xff),
                       (ulong)(uVar2 >> 8 & 0xff),(ulong)(uVar2 & 0xff),0x58,0x50,0x43,0x46);
  }
  local_150[0] = *(int *)(param_1 + 0x16818);
  iVar3 = local_150[0];
  if (local_150[0] == 1) {
    if ((*(int *)(param_1 + 0x1681c) == 0) ||
       ((*(int *)(param_1 + 0x1681c) == 1 && (*(long *)(param_1 + 0x18) == 0)))) {
      iVar3 = 0;
      local_150[0] = 0;
    }
    else {
      iVar3 = 1;
    }
  }
  if (uVar1 < 0x8000001) {
    FUN_0038d3c0();
  }
  else {
    FUN_0038d710((long)(param_4 + 5) + (ulong)param_4[5],local_150,param_1,param_2,param_3,
                 param_4[2]);
  }
  *(int *)(param_1 + 0x16818) = local_150[0];
  return iVar3;
}



bool FUN_003b3070(long *param_1,long *param_2,long param_3,ulong param_4)

{
  bool bVar1;
  long lVar2;
  undefined2 uVar3;
  bool bVar4;
  long lVar5;
  
  bVar1 = param_2[3] != 0 && (ulong)param_2[2] <= param_4;
  if (bVar1) {
    lVar5 = *param_2;
    bVar4 = param_3 != 0;
    *param_1 = lVar5;
    *(short *)(param_1 + 1) = (short)*(undefined4 *)(lVar5 + 4);
    *(char *)((long)param_1 + 10) = (char)param_2[1];
    param_1[2] = *(long *)(lVar5 + 0x10);
    lVar2 = 0;
    if (param_2[8] != 0 && bVar4) {
      lVar2 = param_3 + param_2[0xb];
    }
    param_1[3] = lVar2;
    param_1[0xc] = lVar2;
    lVar2 = 0;
    if (param_2[4] != 0 && bVar4) {
      lVar2 = param_3 + param_2[7];
    }
    param_1[4] = lVar2;
    param_1[0xd] = lVar2;
    lVar2 = 0;
    if (param_2[0xc] != 0 && bVar4) {
      lVar2 = param_3 + param_2[0xf];
    }
    param_1[5] = lVar2;
    lVar2 = 0;
    if (param_2[0x10] != 0 && bVar4) {
      lVar2 = param_3 + param_2[0x13];
    }
    param_1[8] = lVar2;
    uVar3 = *(undefined2 *)(lVar5 + 0x38);
    *(undefined2 *)((long)param_1 + 0x52) = 0xffff;
    param_1[0xb] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = param_3;
    param_1[9] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *(undefined2 *)(param_1 + 10) = uVar3;
    FUN_003b3180();
  }
  return bVar1;
}


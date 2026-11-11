
void FUN_0046f940(long *param_1,uint *param_2)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar3 = param_2[1];
  uVar6 = (long)(int)param_1[1] - 1;
  if (uVar3 != (uint)uVar6) {
    lVar4 = FUN_0046e5d0(param_1,*param_1 + uVar6 * 8);
    *(uint *)(lVar4 + 4) = uVar3;
    uVar6 = (ulong)((int)param_1[1] - 1);
  }
  uVar5 = (uint)uVar6;
  *(uint *)(param_1 + 1) = uVar5;
  if (uVar5 != uVar3) {
    *(undefined8 *)(*param_1 + (long)(int)uVar3 * 8) =
         *(undefined8 *)(*param_1 + (long)(int)uVar5 * 8);
  }
  lVar4 = param_1[2];
  uVar6 = (ulong)(int)param_1[3];
  puVar1 = (uint *)(lVar4 + (((long)param_2 - lVar4 >> 3) + 1U & uVar6) * 8);
  uVar3 = puVar1[1];
  while (-1 < (int)uVar3) {
    lVar2 = lVar4 + (uVar6 & *puVar1) * 8;
    if ((ulong)((long)(int)uVar6 & (long)param_2 - lVar2 >> 3) <
        (ulong)((long)(int)uVar6 & (long)puVar1 - lVar2 >> 3)) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar1;
      lVar4 = param_1[2];
      uVar6 = (ulong)*(uint *)(param_1 + 3);
      param_2 = puVar1;
    }
    puVar1 = (uint *)(lVar4 + (((ulong)((long)puVar1 - lVar4) >> 3) + 1 & (long)(int)uVar6) * 8);
    uVar3 = puVar1[1];
  }
  param_2[1] = 0xffffffff;
  return;
}



ulong FUN_001610c8(long *param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  
  if (*(code **)(param_1[0x88] + 0x58) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001610dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(param_1[0x88] + 0x58))(param_1);
    return uVar3;
  }
  if (param_3 < 2) {
    return 0;
  }
  lVar5 = *param_1;
  uVar4 = *(uint *)(lVar5 + 0x1c0);
  uVar1 = uVar4 & 0x15;
  bVar2 = uVar1 == 1;
  if (bVar2) {
    *param_2 = (int)param_1[0x8e];
    uVar4 = *(uint *)(lVar5 + 0x1c0);
  }
  uVar3 = (ulong)bVar2;
  if ((uVar4 & 0x2a) == 2) {
    if ((uVar1 == 1) && ((int)param_1[0x8e] == *(int *)((long)param_1 + 0x474))) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)(uVar1 == 1);
      param_2[uVar3] = *(int *)((long)param_1 + 0x474);
    }
    uVar3 = (ulong)(0x10000 << uVar3 | (uint)bVar2);
  }
  return uVar3;
}



ulong FUN_0047ca40(long *param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  
  puVar7 = (uint *)(param_1 + 1);
  if ((int)param_1[3] * 2 < (int)((*puVar7 + 1) * 3)) {
    FUN_0043d3c0(param_1 + 2);
  }
  uVar3 = FUN_00446840(*param_2,param_2[1] - *param_2);
  uVar6 = *(uint *)(param_1 + 3);
  lVar5 = param_1[2];
  puVar1 = (uint *)(lVar5 + (ulong)(uVar6 & uVar3) * 8);
  puVar8 = puVar1 + 1;
  uVar2 = *puVar8;
  while (-1 < (int)uVar2) {
    if (*puVar1 == uVar3) {
      uVar4 = FUN_0043a700(*param_2,param_2[1] - *param_2,
                           *(ulong *)(*param_1 + (long)(int)uVar2 * 0x18) & 0xfffffffffffffffe);
      if ((uVar4 & 1) != 0) goto LAB_0047cb24;
      lVar5 = param_1[2];
      uVar6 = *(uint *)(param_1 + 3);
    }
    puVar1 = (uint *)(lVar5 + (((ulong)((long)puVar1 - lVar5) >> 3) + 1 & (long)(int)uVar6) * 8);
    puVar8 = puVar1 + 1;
    uVar2 = *puVar8;
  }
  uVar6 = *puVar7;
  *puVar1 = uVar3;
  *puVar8 = uVar6;
  puVar8 = puVar7;
LAB_0047cb24:
  return (ulong)*puVar8 | ((long)puVar1 - param_1[2]) * 0x20000000;
}


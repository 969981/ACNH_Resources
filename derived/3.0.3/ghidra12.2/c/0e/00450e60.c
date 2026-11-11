
ulong FUN_00450e60(long *param_1,int *param_2)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint *puVar7;
  
  uVar6 = *(uint *)(param_1 + 3);
  if ((int)(uVar6 * 2) < ((int)param_1[1] + 1) * 3) {
    FUN_0043d3c0(param_1 + 2);
    uVar6 = *(uint *)(param_1 + 3);
  }
  uVar4 = *param_2 * -0x61c8864f;
  lVar3 = param_1[2];
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  uVar1 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar5 = (ulong)(uVar6 & uVar1);
  puVar2 = (uint *)(lVar3 + uVar5 * 8);
  puVar7 = puVar2 + 1;
  uVar4 = *puVar7;
  if (-1 < (int)uVar4) {
    do {
      if ((*puVar2 == uVar1) && (*(int *)(*param_1 + (long)(int)uVar4 * 0x18) == *param_2))
      goto LAB_00450f24;
      uVar5 = ((long)(uVar5 << 3) >> 3) + 1U & (long)(int)uVar6;
      puVar2 = (uint *)(lVar3 + uVar5 * 8);
      puVar7 = puVar2 + 1;
      uVar4 = *puVar7;
    } while (-1 < (int)uVar4);
  }
  uVar6 = *(uint *)(param_1 + 1);
  *puVar2 = uVar1;
  *puVar7 = uVar6;
  uVar4 = *(uint *)(param_1 + 1);
  lVar3 = param_1[2];
LAB_00450f24:
  return (ulong)uVar4 | ((long)puVar2 - lVar3) * 0x20000000;
}


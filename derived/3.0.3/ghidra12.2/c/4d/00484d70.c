
ulong FUN_00484d70(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint *puVar10;
  
  uVar9 = *(uint *)(param_1 + 3);
  if ((int)(uVar9 * 2) < ((int)param_1[1] + 1) * 3) {
    FUN_0043d3c0(param_1 + 2);
    uVar9 = *(uint *)(param_1 + 3);
  }
  lVar6 = *param_2;
  uVar1 = (int)lVar6 * -0x61c8864f;
  uVar2 = (int)((ulong)lVar6 >> 0x20) * -0x61c8864f;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  uVar3 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  lVar5 = param_1[2];
  uVar1 = uVar3 + (uVar3 >> 2) + uVar1 * 0x40 + 0x9e3779b9 ^ uVar1;
  uVar8 = (ulong)(uVar1 & uVar9);
  puVar4 = (uint *)(lVar5 + uVar8 * 8);
  puVar10 = puVar4 + 1;
  uVar2 = *puVar10;
  if (-1 < (int)uVar2) {
    do {
      uVar7 = (ulong)uVar2;
      if ((*puVar4 == uVar1) &&
         (*(long *)(*param_1 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4)) == lVar6
         )) goto LAB_00484e50;
      uVar8 = ((long)(uVar8 << 3) >> 3) + 1U & (long)(int)uVar9;
      puVar4 = (uint *)(lVar5 + uVar8 * 8);
      puVar10 = puVar4 + 1;
      uVar2 = *puVar10;
    } while (-1 < (int)uVar2);
  }
  uVar9 = *(uint *)(param_1 + 1);
  *puVar4 = uVar1;
  *puVar10 = uVar9;
  uVar7 = (ulong)*(uint *)(param_1 + 1);
  lVar5 = param_1[2];
LAB_00484e50:
  return uVar7 | ((long)puVar4 - lVar5) * 0x20000000;
}


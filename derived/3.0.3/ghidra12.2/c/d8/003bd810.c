
ulong FUN_003bd810(long *param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  long *plVar10;
  
  plVar7 = (long *)(param_5 + -1 + param_2 & -param_5);
  uVar6 = param_5 + -1 + param_4 & -param_5;
  uVar4 = 0;
  if (uVar6 != 0) {
    uVar4 = (ulong)((param_2 + param_3) - (long)plVar7) / uVar6;
  }
  uVar5 = (uint)uVar4;
  if (0 < (int)uVar5) {
    plVar10 = (long *)*param_1;
    uVar9 = uVar5 & 3;
    if (3 < uVar5) {
      uVar5 = uVar5 & 0xfffffffc;
      do {
        *plVar7 = (long)plVar10;
        puVar1 = (undefined8 *)((long)plVar7 + uVar6);
        puVar2 = (undefined8 *)((long)plVar7 + uVar6 * 2);
        *param_1 = (long)plVar7;
        puVar3 = (undefined8 *)((long)plVar7 + uVar6 * 3);
        uVar5 = uVar5 - 4;
        *puVar1 = plVar7;
        *param_1 = (long)puVar1;
        *puVar2 = puVar1;
        plVar10 = (long *)((long)puVar1 + uVar6 * 2);
        plVar7 = (long *)((long)plVar10 + uVar6);
        *param_1 = (long)puVar2;
        *puVar3 = puVar2;
        *param_1 = (long)puVar3;
      } while (uVar5 != 0);
      plVar10 = (long *)((long)plVar7 - uVar6);
    }
    if ((uVar4 & 3) != 0) {
      do {
        plVar8 = plVar7;
        *plVar8 = (long)plVar10;
        uVar9 = uVar9 - 1;
        *param_1 = (long)plVar8;
        plVar7 = (long *)((long)plVar8 + uVar6);
        plVar10 = plVar8;
      } while (uVar9 != 0);
    }
  }
  param_1[1] = param_2;
  param_1[2] = param_3;
  return uVar4 & 0xffffffff;
}


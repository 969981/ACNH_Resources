
ulong FUN_003e18c0(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  lVar4 = FUN_003c0150(param_4);
  uVar6 = 0x9b0;
  if (lVar4 != 0) {
    uVar6 = lVar4 * 2 + 0x9e0;
  }
  uVar3 = 0;
  if (uVar6 != 0) {
    uVar3 = param_3 / uVar6;
  }
  if (0 < (int)uVar3) {
    plVar5 = (long *)(param_2 + 0x210);
    uVar6 = uVar3 & 0xffffffff;
    puVar8 = (undefined8 *)(param_2 + (long)(int)uVar3 * 0x9b0);
    do {
      FUN_003e2004(plVar5 + -0x42,param_1);
      lVar4 = *plVar5;
      *plVar5 = param_1[5];
      *(long **)(lVar4 + 8) = param_1 + 5;
      *(long **)(param_1[5] + 8) = plVar5;
      param_1[5] = lVar4;
      lVar4 = FUN_003c0150(param_4);
      puVar7 = puVar8;
      if (lVar4 != 0) {
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        FUN_003c01b0(puVar8,puVar8 + 3,lVar4,param_4);
        puVar1 = (undefined8 *)((long)(puVar8 + 3) + lVar4);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        FUN_003c01b0(puVar1,puVar1 + 3,lVar4,param_4);
        puVar7 = (undefined8 *)((long)(puVar1 + 3) + lVar4);
        FUN_003cfbb0(plVar5 + -0x42,0,puVar8,puVar1);
      }
      plVar5 = plVar5 + 0x136;
      uVar2 = (int)uVar6 - 1;
      uVar6 = (ulong)uVar2;
      puVar8 = puVar7;
    } while (uVar2 != 0);
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = *param_4;
  return uVar3;
}


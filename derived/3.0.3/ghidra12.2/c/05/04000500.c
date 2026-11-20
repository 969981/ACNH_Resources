
undefined8 FUN_04000500(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  
  uVar3 = param_1[3];
  uVar10 = param_1[4];
  if (uVar3 == uVar10) {
    uVar10 = uVar3 + 1;
    if (uVar3 == 0xffffffffffffffff) {
      uVar10 = 0xffffffffffffffff;
      uVar3 = 0xffffffffffffffff;
    }
    else {
      if (0xaaaaaaaaaaaaaa9 < uVar10) {
        return 0x80000007;
      }
      uVar3 = uVar3 + (uVar3 >> 1);
      if (uVar3 <= uVar10) {
        uVar3 = uVar10;
      }
      if (0xaaaaaaaaaaaaaa8 < uVar3) {
        uVar3 = 0xaaaaaaaaaaaaaa9;
      }
      puVar4 = (undefined8 *)
               (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,uVar3 * 0x18 + 0x18,0);
      if (puVar4 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)
                 (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,uVar10 * 0x18 + 0x18,0);
        if (puVar4 == (undefined8 *)0x0) {
          return 0x80000007;
        }
      }
      else {
        uVar10 = uVar3;
      }
      uVar3 = param_1[2];
      uVar5 = param_1[4];
      uVar2 = 0;
      if (uVar5 < param_1[3] + uVar3) {
        uVar2 = ~uVar5;
      }
      uVar2 = uVar2 + param_1[3] + uVar3;
      if (uVar3 != uVar2) {
        puVar9 = puVar4;
        do {
          puVar6 = (undefined8 *)(param_1[1] + uVar3 * 0x18);
          uVar8 = *puVar6;
          uVar7 = puVar6[2];
          puVar9[1] = puVar6[1];
          puVar9[2] = uVar7;
          *puVar9 = uVar8;
          uVar5 = param_1[4];
          uVar1 = 0;
          if (uVar5 < uVar3 + 1) {
            uVar1 = ~uVar5;
          }
          uVar3 = uVar1 + uVar3 + 1;
          puVar9 = puVar9 + 3;
        } while (uVar3 != uVar2);
        uVar3 = param_1[2];
      }
      if (uVar2 < uVar3) {
        uVar3 = uVar3 - 1;
        do {
          uVar3 = uVar3 + 1;
        } while (uVar3 <= uVar5);
      }
      (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1[1]);
      uVar3 = param_1[3];
      param_1[1] = puVar4;
      param_1[2] = 0;
      param_1[4] = uVar10;
    }
  }
  param_1[3] = uVar3 + 1;
  uVar8 = param_2[2];
  uVar2 = 0;
  if (uVar10 < param_1[2] + uVar3) {
    uVar2 = ~uVar10;
  }
  puVar4 = (undefined8 *)(param_1[1] + (uVar2 + param_1[2] + uVar3) * 0x18);
  uVar7 = param_2[1];
  *puVar4 = *param_2;
  puVar4[1] = uVar7;
  puVar4[2] = uVar8;
  return 0;
}


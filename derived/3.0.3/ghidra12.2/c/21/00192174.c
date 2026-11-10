
long FUN_00192174(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar6 = param_2 + 7U & 0xfffffffffffffff8;
  puVar3 = (ulong *)*param_1;
  if ((puVar3 == (ulong *)0x0) || (uVar4 = puVar3[1], *puVar3 < uVar4 + uVar6)) {
    uVar1 = param_1[1];
    if ((ulong)param_1[1] <= uVar6) {
      uVar1 = uVar6;
    }
    if (param_1[3] == 0) {
      if (DAT_04c57ea0 == (code *)0x0) {
        puVar2 = malloc(0x18);
      }
      else {
        puVar2 = (undefined8 *)(*DAT_04c57ea0)(0x18);
      }
      *puVar2 = DAT_04c57ea8;
      param_1[3] = puVar2 + 2;
      param_1[4] = puVar2 + 2;
    }
    if (uVar1 == 0xffffffffffffffe8) {
      return 0;
    }
    if (DAT_04c57ea0 == (code *)0x0) {
      puVar2 = malloc((uVar1 + 0x1f & 0xfffffffffffffff8) + 0x10);
    }
    else {
      puVar2 = (undefined8 *)(*DAT_04c57ea0)();
    }
    uVar4 = 0;
    *puVar2 = *(undefined8 *)PTR_DAT_04bcba28;
    uVar5 = *param_1;
    puVar2[3] = 0;
    puVar2[4] = uVar5;
    puVar3 = puVar2 + 2;
    *puVar3 = uVar1;
    *param_1 = puVar3;
  }
  puVar3[1] = uVar4 + uVar6;
  return (long)puVar3 + uVar4 + 0x18;
}


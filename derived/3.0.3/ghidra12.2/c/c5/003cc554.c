
undefined8 * FUN_003cc554(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  
  puVar1 = (undefined8 *)FUN_003bd940();
  if (puVar1 != (undefined8 *)0x0) {
    FUN_003bed18(puVar1);
    if (*(long *)(param_1 + 0x30) != 0) {
      puVar2 = (undefined8 *)FUN_003bd940();
      if (puVar2 == (undefined8 *)0x0) {
        FUN_003bee70(puVar1);
LAB_003cc620:
        FUN_003bd958(param_1,puVar1);
        return (undefined8 *)0x0;
      }
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = 0;
      lVar3 = FUN_003bd940(*(undefined8 *)(param_1 + 0x38));
      if (lVar3 == 0) {
        FUN_003bee70(puVar1);
        FUN_003bd958(param_1,puVar1);
        param_1 = *(long *)(param_1 + 0x30);
        puVar1 = puVar2;
        goto LAB_003cc620;
      }
      FUN_003c01b0(puVar2,lVar3,*(undefined8 *)(param_1 + 0x40),param_1 + 0x48);
      puVar1[0x26] = puVar2;
    }
    plVar4 = (long *)(param_1 + 0x18);
    lVar3 = puVar1[0x7b];
    puVar1[0x7b] = *plVar4;
    *(long **)(lVar3 + 8) = plVar4;
    *(undefined8 **)(*plVar4 + 8) = puVar1 + 0x7b;
    *plVar4 = lVar3;
  }
  return puVar1;
}


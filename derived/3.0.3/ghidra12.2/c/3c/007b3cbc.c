
uint FUN_007b3cbc(undefined8 param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  
  uVar4 = FUN_026414a0();
  lVar1 = DAT_04ca9180;
  if (((((uVar4 & 1) == 0) && (DAT_04ca9180 != 0)) && (DAT_05574040 != 0)) &&
     (lVar5 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x38))(), lVar5 != 0))
  {
    if ((*(long **)(lVar5 + 0xe71b0) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar5 + 0xe71b0), puVar6 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar6)();
      uVar2 = uVar2 ^ 1;
    }
    plVar7 = &DAT_0417bad0;
    if (param_2 < 8) {
      plVar8 = (long *)(*(long *)(lVar5 + 0xe7198) + *(long *)(lVar5 + 0xe7190) +
                       (ulong)param_2 * 0x48);
      plVar7 = &DAT_0417bad0;
      if (*plVar8 != 0 || plVar8[1] != 0) {
        plVar7 = plVar8;
      }
    }
    if (*plVar7 == 0 && plVar7[1] == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_007b3b6c(lVar1,param_1);
    }
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar5 + 0xe71b0) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0xe71b0) + 8), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}


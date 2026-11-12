
uint FUN_007b39a4(undefined8 param_1,byte *param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  lVar5 = DAT_05574040;
  lVar2 = DAT_04ca9180;
  if (((*param_2 < 8) && (DAT_04ca9180 != 0)) && (DAT_05574040 != 0)) {
    uVar3 = FUN_02582d8c(param_2,1);
    puVar1 = PTR_DAT_04bb4fb8;
    if (((uVar3 < 8) &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0')) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d6) != '\0')) {
      FUN_02582a24(param_2);
      uVar3 = FUN_02582d8c(param_2,1);
      if (((uVar3 < 8) &&
          (lVar7 = *(long *)puVar1, *(char *)(lVar7 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0')) &&
         (*(int *)(lVar7 + (ulong)uVar3 * 0x13f0 + 0x13d0) == 0)) {
        uVar3 = (uint)*(byte *)(lVar7 + (ulong)uVar3 * 0x13f0 + 0x13d5);
      }
      else {
        uVar3 = 0xffffffff;
      }
      lVar5 = (**(code **)(*(long *)**(undefined8 **)(lVar5 + 0x10) + 0x38))();
      if (lVar5 != 0) {
        if ((*(long **)(lVar5 + 0xe71b0) == (long *)0x0) ||
           (puVar6 = (undefined8 *)**(long **)(lVar5 + 0xe71b0), puVar6 == (undefined8 *)0x0)) {
          uVar4 = 1;
        }
        else {
          uVar4 = (**(code **)*puVar6)();
          uVar4 = uVar4 ^ 1;
        }
        plVar8 = &DAT_0417bad0;
        if (uVar3 < 8) {
          plVar9 = (long *)(*(long *)(lVar5 + 0xe7198) + *(long *)(lVar5 + 0xe7190) +
                           (ulong)uVar3 * 0x48);
          plVar8 = &DAT_0417bad0;
          if (*plVar9 != 0 || plVar9[1] != 0) {
            plVar8 = plVar9;
          }
        }
        if (*plVar8 == 0 && plVar8[1] == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_007b3b6c(lVar2,param_1);
        }
        if ((((uVar4 & 1) == 0) && (*(long *)(lVar5 + 0xe71b0) != 0)) &&
           (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0xe71b0) + 8), puVar6 != (undefined8 *)0x0))
        {
          (**(code **)*puVar6)();
        }
        goto LAB_007b3ac4;
      }
    }
  }
  uVar3 = 0;
LAB_007b3ac4:
  return uVar3 & 1;
}


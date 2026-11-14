
void FUN_01d97670(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  undefined *local_70;
  char *pcStack_68;
  
  puVar2 = PTR_DAT_04bb2020;
  uVar10 = 0;
  puVar12 = (undefined1 *)(param_1 + 0x4f);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  do {
    lVar5 = FUN_0265c2a0(uVar10 & 0xffffffff);
    if (lVar5 != 0) {
      if ((*(long **)(lVar5 + 0x28) == (long *)0x0) ||
         (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x28), puVar6 == (undefined8 *)0x0)) {
        uVar7 = 0;
      }
      else {
        uVar7 = (**(code **)*puVar6)();
        uVar7 = uVar7 & 0xffffffff;
      }
      pcStack_68 = "MoveInCompletion";
      local_70 = puVar1;
      iVar4 = FUN_02749340(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8) + 0x1267c,&local_70);
      if (iVar4 != 0) {
        local_70 = puVar2 + 0x10;
        pcStack_68 = "AbandonedHouse";
        iVar4 = FUN_02749340(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8) + 0x1267c,&local_70);
        if (iVar4 != 2) {
          lVar8 = FUN_0265c2a0(uVar10 & 0xffffffff);
          if (lVar8 == 0) {
            puVar11 = &DAT_053e6f44;
          }
          else if ((*(long **)(lVar8 + 0x28) == (long *)0x0) ||
                  (puVar6 = (undefined8 *)**(long **)(lVar8 + 0x28), puVar6 == (undefined8 *)0x0)) {
            puVar11 = (undefined4 *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8));
          }
          else {
            uVar9 = (**(code **)*puVar6)();
            puVar11 = (undefined4 *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8));
            if ((((uVar9 & 1) != 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
               (puVar6 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 8), puVar6 != (undefined8 *)0x0)
               ) {
              (**(code **)*puVar6)();
            }
          }
          puVar12[-2] = *(undefined1 *)puVar11;
          puVar12[-1] = *(undefined1 *)((long)puVar11 + 1);
          uVar3 = FUN_020fd7d8(puVar11);
          *puVar12 = uVar3;
        }
      }
      if ((((uVar7 & 1) != 0) && (*(long *)(lVar5 + 0x28) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x28) + 8), puVar6 != (undefined8 *)0x0)) {
        (**(code **)*puVar6)();
      }
    }
    uVar10 = uVar10 + 1;
    puVar12 = puVar12 + 3;
  } while (uVar10 != 10);
  return;
}


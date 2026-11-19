
void FUN_03ba44e0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  long *plVar10;
  long *plVar11;
  
  if ((*(char *)(param_1 + 8) != '\0') && (1 < *(int *)(param_1 + 0x30))) {
    puVar1 = (undefined8 *)(param_1 + 0x20);
    puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x28) + 8);
    if (puVar2 != puVar1) {
      lVar4 = -(long)*(int *)(param_1 + 0x34);
      do {
        puVar3 = (undefined8 *)puVar2[1];
        if ((long)puVar2 + lVar4 != 0) {
          puVar5 = (undefined8 *)*puVar2;
          if ((long)puVar5 + lVar4 != 0) {
            plVar10 = (long *)((long)puVar5 + lVar4 + 0x58);
            uVar6 = 0xffffffff;
            do {
              plVar10 = (long *)*plVar10;
              uVar6 = uVar6 + 1;
            } while (plVar10 != (long *)0x0);
            plVar10 = (long *)((long)puVar2 + lVar4 + 0x58);
            uVar9 = 0xffffffff;
            plVar11 = plVar10;
            do {
              plVar11 = (long *)*plVar11;
              uVar9 = uVar9 + 1;
            } while (plVar11 != (long *)0x0);
            if (uVar9 < uVar6) {
              puVar7 = puVar5;
              do {
                puVar7 = (undefined8 *)*puVar7;
                puVar8 = puVar3;
                if (puVar7 == puVar1) {
                  puVar7 = puVar1;
                  if (puVar5 == (undefined8 *)0x0) goto LAB_03ba45e8;
                  goto LAB_03ba45e0;
                }
                if ((long)puVar7 + lVar4 == 0) break;
                plVar11 = (long *)((long)puVar7 + lVar4 + 0x58);
                uVar6 = 0xffffffff;
                do {
                  plVar11 = (long *)*plVar11;
                  uVar6 = uVar6 + 1;
                } while (plVar11 != (long *)0x0);
                uVar9 = 0xffffffff;
                plVar11 = plVar10;
                do {
                  plVar11 = (long *)*plVar11;
                  uVar9 = uVar9 + 1;
                } while (plVar11 != (long *)0x0);
              } while (uVar9 < uVar6);
              if (puVar5 != (undefined8 *)0x0) {
LAB_03ba45e0:
                puVar5[1] = puVar3;
                puVar8 = (undefined8 *)puVar2[1];
              }
LAB_03ba45e8:
              if (puVar8 != (undefined8 *)0x0) {
                *puVar8 = *puVar2;
              }
              *puVar2 = 0;
              puVar2[1] = 0;
              puVar5 = (undefined8 *)puVar7[1];
              puVar7[1] = puVar2;
              *puVar2 = puVar7;
              puVar2[1] = puVar5;
              if (puVar5 != (undefined8 *)0x0) {
                *puVar5 = puVar2;
              }
            }
          }
        }
        puVar2 = puVar3;
      } while (puVar3 != puVar1);
    }
  }
  return;
}


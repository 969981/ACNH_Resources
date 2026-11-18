
void FUN_032d1fc0(long param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  uVar6 = *(ulong *)(param_3 + 0x30);
  plVar9 = (long *)(param_1 + 8);
  lVar7 = *plVar9;
  if (lVar7 == 0) {
    if (*(int *)(param_1 + 0x24) <= *(int *)(param_1 + 0x20)) {
      return;
    }
  }
  else {
    lVar8 = lVar7;
    do {
      while (*(ulong *)(lVar8 + 0x20) <= uVar6) {
        if (uVar6 <= *(ulong *)(lVar8 + 0x20)) {
          return;
        }
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar8 == 0) goto LAB_032d2010;
      }
      lVar8 = *(long *)(lVar8 + 8);
    } while (lVar8 != 0);
LAB_032d2010:
    if (*(int *)(param_1 + 0x24) <= *(int *)(param_1 + 0x20)) {
      do {
        if (uVar6 < *(ulong *)(lVar7 + 0x20)) {
          plVar9 = (long *)(lVar7 + 8);
        }
        else {
          if (uVar6 <= *(ulong *)(lVar7 + 0x20)) {
            uVar1 = *param_4;
            uVar2 = param_4[1];
            uVar3 = param_4[3];
            *(undefined8 *)(lVar7 + 0x38) = param_4[2];
            *(undefined8 *)(lVar7 + 0x40) = uVar3;
            *(undefined8 *)(lVar7 + 0x28) = uVar1;
            *(undefined8 *)(lVar7 + 0x30) = uVar2;
            uVar1 = param_4[4];
            uVar2 = param_4[5];
            uVar3 = param_4[7];
            *(undefined8 *)(lVar7 + 0x58) = param_4[6];
            *(undefined8 *)(lVar7 + 0x60) = uVar3;
            *(undefined8 *)(lVar7 + 0x48) = uVar1;
            *(undefined8 *)(lVar7 + 0x50) = uVar2;
            return;
          }
          plVar9 = (long *)(lVar7 + 0x10);
        }
        lVar7 = *plVar9;
      } while (lVar7 != 0);
      return;
    }
  }
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = *puVar5;
  }
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04b1b5e0;
  puVar5[1] = 0;
  uVar1 = *param_4;
  uVar2 = param_4[1];
  uVar3 = param_4[3];
  puVar5[7] = param_4[2];
  puVar5[8] = uVar3;
  puVar5[5] = uVar1;
  puVar5[6] = uVar2;
  uVar1 = param_4[4];
  uVar3 = param_4[5];
  uVar2 = param_4[6];
  uVar4 = param_4[7];
  puVar5[0xd] = plVar9;
  puVar5[4] = uVar6;
  puVar5[0xb] = uVar2;
  puVar5[0xc] = uVar4;
  puVar5[9] = uVar1;
  puVar5[10] = uVar3;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  lVar7 = FUN_032d2178(*plVar9);
  *plVar9 = lVar7;
  *(undefined8 *)(lVar7 + 0x18) = 1;
  return;
}


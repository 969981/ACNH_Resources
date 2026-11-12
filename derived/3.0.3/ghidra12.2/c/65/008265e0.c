
void FUN_008265e0(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  uint *puVar7;
  undefined8 *puVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  uint local_74 [8];
  undefined4 local_54;
  
  if (0 < *(int *)(param_1 + 0x58)) {
    lVar4 = 0;
    puVar5 = *(undefined8 **)(param_1 + 0x68);
    do {
      puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x60) + lVar4 * 8);
      lVar4 = lVar4 + 1;
      *puVar8 = puVar5;
      *(undefined8 **)(param_1 + 0x68) = puVar8;
      puVar5 = puVar8;
    } while (lVar4 < *(int *)(param_1 + 0x58));
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar4 = (**(code **)(*(long *)*puVar5 + 0x38))();
    if (lVar4 == 0) {
      return;
    }
    lVar4 = lVar4 + 0x70;
  }
  else {
    if (puVar5 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar5[0x26] == (long *)0x0) {
      return;
    }
    lVar4 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
    if (lVar4 == 0) {
      return;
    }
  }
  if ((*(long **)(lVar4 + 0x28) == (long *)0x0) ||
     (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x28), puVar5 == (undefined8 *)0x0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = (**(code **)*puVar5)();
    uVar3 = uVar3 ^ 1;
  }
  lVar1 = *(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8) + 0x1e33b0;
  FUN_0266b370(local_74);
  uVar11 = 0;
  do {
    uVar2 = *(uint *)((long)local_74 + (-(uVar11 >> 0x1f) & 0xfffffffc00000000 | uVar11 << 2));
    iVar10 = (int)uVar11;
    if (((uVar2 < 8) &&
        (plVar6 = (long *)(lVar1 + (ulong)uVar2 * 0x48), *plVar6 != 0 || plVar6[1] != 0)) &&
       (uVar11 = FUN_02818650(lVar1), (uVar11 & 1) == 0)) {
      if ((local_74[iVar10] != 0xffffffff) && (*(int *)(param_1 + 0xf8) != 0)) {
        puVar5 = *(undefined8 **)(param_1 + 0x100);
        lVar9 = (long)*(int *)(param_1 + 0xf8) << 3;
        do {
          local_54 = 0;
          if (((((uint *)*puVar5)[1] & 1) == 0) && (*(uint *)*puVar5 == local_74[iVar10]))
          goto LAB_00826700;
          puVar5 = puVar5 + 1;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
      }
      if (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0x5c)) {
        puVar7 = *(uint **)(param_1 + 0x68);
        if (puVar7 != (uint *)0x0) {
          *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)puVar7;
        }
        puVar7[0] = 0xffffffff;
        puVar7[1] = 0;
        if (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0x5c)) {
          *(uint **)(*(long *)(param_1 + 0x60) + (long)*(int *)(param_1 + 0x58) * 8) = puVar7;
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
        }
        *puVar7 = local_74[iVar10];
        local_54 = 0;
        puVar7[1] = puVar7[1] & 0xfffffffe;
      }
    }
LAB_00826700:
    uVar11 = (ulong)(iVar10 + 1U);
    if (iVar10 + 1U == 8) {
      if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
      return;
    }
  } while( true );
}


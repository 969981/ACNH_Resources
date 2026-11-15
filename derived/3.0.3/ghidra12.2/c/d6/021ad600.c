
undefined8 FUN_021ad600(long param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined4 local_24;
  
  puVar1 = (uint *)(param_1 + 0x55c28);
  if ((*puVar1 != 0xffffffff) && (lVar4 = FUN_0265c3e0(), lVar4 != 0)) {
    if ((*(long **)(lVar4 + 0x28) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x28), puVar5 == (undefined8 *)0x0)) {
      iVar3 = *(int *)(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8) + 0x10764);
    }
    else {
      uVar6 = (**(code **)*puVar5)();
      iVar3 = *(int *)(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8) + 0x10764);
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
    }
    if (iVar3 != 7) {
      uVar9 = 0;
      goto LAB_021ad7cc;
    }
    uVar2 = *puVar1;
    lVar4 = param_1 + (ulong)uVar2 * 0xba0;
    if (9 < uVar2) {
      lVar4 = param_1;
    }
    plVar7 = *(long **)(lVar4 + 0x928);
    if (plVar7 != (long *)(lVar4 + 0x920)) {
      plVar8 = plVar7 + -2;
      do {
        if (*(int *)((long)plVar8 + 4) == 5) {
          if (*(long **)(lVar4 + 0xaa0) == plVar8) {
            FUN_0214eb90(lVar4 + 0x8b0,(ulong)uVar2,1);
          }
          else {
            if (*plVar7 != 0) {
              *(long *)(*plVar7 + 8) = plVar7[1];
            }
            if ((long *)plVar7[1] != (long *)0x0) {
              *(long *)plVar7[1] = *plVar7;
            }
            *plVar7 = 0;
            plVar7[1] = 0;
            *(int *)(lVar4 + 0x930) = *(int *)(lVar4 + 0x930) + -1;
            *plVar8 = *(long *)(lVar4 + 0x938);
            *(long **)(lVar4 + 0x938) = plVar8;
          }
          break;
        }
        plVar7 = (long *)plVar7[1];
        plVar8 = plVar7 + -2;
      } while (plVar8 != (long *)(lVar4 + 0x910));
    }
    local_24 = 1;
    uVar2 = *puVar1;
    if ((uVar2 < 10) && ((&DAT_053fee41)[(ulong)uVar2 * 0xba0] != '\0')) {
      FUN_01e2caf8(DAT_053e0208 + 0xda0,&DAT_053fe850 + (ulong)uVar2 * 0xba0,1,&local_24,0,0);
    }
    *puVar1 = 0xffffffff;
  }
  uVar9 = 1;
LAB_021ad7cc:
  if ((*(int *)(param_1 + 0x55c2c) != -1) && (lVar4 = FUN_0265c3e0(), lVar4 != 0)) {
    if ((*(long **)(lVar4 + 0x28) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x28), puVar5 == (undefined8 *)0x0)) {
      iVar3 = *(int *)(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8) + 0x10764);
    }
    else {
      uVar6 = (**(code **)*puVar5)();
      iVar3 = *(int *)(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8) + 0x10764);
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
    }
    if (iVar3 == 7) {
      uVar2 = *(uint *)(param_1 + 0x55c2c);
      lVar4 = param_1 + (ulong)uVar2 * 0xba0;
      if (9 < uVar2) {
        lVar4 = param_1;
      }
      plVar7 = *(long **)(lVar4 + 0x928);
      if (plVar7 != (long *)(lVar4 + 0x920)) {
        plVar8 = plVar7 + -2;
        do {
          if (*(int *)((long)plVar8 + 4) == 5) {
            if (*(long **)(lVar4 + 0xaa0) == plVar8) {
              FUN_0214eb90(lVar4 + 0x8b0,(ulong)uVar2,1);
            }
            else {
              if (*plVar7 != 0) {
                *(long *)(*plVar7 + 8) = plVar7[1];
              }
              if ((long *)plVar7[1] != (long *)0x0) {
                *(long *)plVar7[1] = *plVar7;
              }
              *plVar7 = 0;
              plVar7[1] = 0;
              *(int *)(lVar4 + 0x930) = *(int *)(lVar4 + 0x930) + -1;
              *plVar8 = *(long *)(lVar4 + 0x938);
              *(long **)(lVar4 + 0x938) = plVar8;
            }
            break;
          }
          plVar7 = (long *)plVar7[1];
          plVar8 = plVar7 + -2;
        } while (plVar8 != (long *)(lVar4 + 0x910));
      }
      local_24 = 1;
      uVar2 = *(uint *)(param_1 + 0x55c2c);
      if ((uVar2 < 10) && ((&DAT_053fee41)[(ulong)uVar2 * 0xba0] != '\0')) {
        FUN_01e2caf8(DAT_053e0208 + 0xda0,&DAT_053fe850 + (ulong)uVar2 * 0xba0,1,&local_24,0,0);
      }
      *(undefined4 *)(param_1 + 0x55c2c) = 0xffffffff;
    }
    else {
      uVar9 = 0;
    }
  }
  return uVar9;
}


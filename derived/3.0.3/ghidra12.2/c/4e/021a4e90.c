
void FUN_021a4e90(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  int local_28;
  int local_24;
  
  if ((param_2 & 1) == 0) {
    puVar6 = (uint *)(param_1 + 0x55c30);
    if ((*puVar6 != 0xffffffff) && (lVar1 = FUN_0265c2a0(), lVar1 != 0)) {
      if ((*(long **)(lVar1 + 0x28) == (long *)0x0) ||
         (puVar2 = (undefined8 *)**(long **)(lVar1 + 0x28), puVar2 == (undefined8 *)0x0)) {
        local_24 = *(int *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x10764);
      }
      else {
        uVar3 = (**(code **)*puVar2)();
        local_24 = *(int *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x10764);
        if ((((uVar3 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
           (puVar2 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 8), puVar2 != (undefined8 *)0x0)) {
          (**(code **)*puVar2)();
        }
      }
      uVar3 = FUN_021a57c0(param_1,puVar6);
      if ((uVar3 & 1) != 0) {
        local_28 = 4;
        switch(local_24) {
        case 2:
          local_28 = 3;
          break;
        case 4:
          local_28 = 0;
          break;
        case 5:
          local_28 = 1;
          break;
        case 6:
          local_28 = 2;
        }
        if (local_28 != 4) {
          lVar1 = param_1 + (ulong)*puVar6 * 0xba0;
          if (9 < *puVar6) {
            lVar1 = param_1;
          }
          lVar4 = *(long *)(lVar1 + 0x928);
          if (lVar4 != lVar1 + 0x920) {
            lVar5 = lVar4 + -0x10;
            if (local_24 == 2) {
              do {
                if (*(int *)(lVar5 + 4) == 5) {
                  *(undefined4 *)(lVar5 + 4) = 6;
                  *(undefined1 *)(lVar5 + 9) = 1;
                }
                lVar4 = *(long *)(lVar4 + 8);
                lVar5 = lVar4 + -0x10;
              } while (lVar5 != lVar1 + 0x910);
            }
            else {
              do {
                if (*(int *)(lVar5 + 4) == 5) {
                  *(undefined1 *)(lVar5 + 9) = 1;
                }
                lVar4 = *(long *)(lVar4 + 8);
                lVar5 = lVar4 + -0x10;
              } while (lVar5 != lVar1 + 0x910);
            }
          }
          FUN_0214e990(lVar1 + 0x8b0);
          FUN_0214fac0(lVar1 + 0x8b0,*puVar6,*(undefined8 *)(lVar1 + 0xaa0));
        }
      }
      FUN_021dafb0(puVar6,&local_24,0,0,0,1);
    }
    puVar6 = (uint *)(param_1 + 0x55c34);
    if (*puVar6 == 0xffffffff) {
      return;
    }
    lVar1 = FUN_0265c2a0();
    if (lVar1 == 0) {
      return;
    }
    if ((*(long **)(lVar1 + 0x28) == (long *)0x0) ||
       (puVar2 = (undefined8 *)**(long **)(lVar1 + 0x28), puVar2 == (undefined8 *)0x0)) {
      local_24 = *(int *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x10764);
    }
    else {
      uVar3 = (**(code **)*puVar2)();
      local_24 = *(int *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x10764);
      if ((((uVar3 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
         (puVar2 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 8), puVar2 != (undefined8 *)0x0)) {
        (**(code **)*puVar2)();
      }
    }
    uVar3 = FUN_021a57c0(param_1,puVar6);
    if ((uVar3 & 1) != 0) {
      local_28 = 4;
      switch(local_24) {
      case 2:
        local_28 = 3;
        break;
      case 4:
        local_28 = 0;
        break;
      case 5:
        local_28 = 1;
        break;
      case 6:
        local_28 = 2;
      }
      if (local_28 != 4) {
        lVar1 = param_1 + (ulong)*puVar6 * 0xba0;
        if (9 < *puVar6) {
          lVar1 = param_1;
        }
        lVar4 = *(long *)(lVar1 + 0x928);
        if (lVar4 != lVar1 + 0x920) {
          lVar5 = lVar4 + -0x10;
          if (local_24 == 2) {
            do {
              if (*(int *)(lVar5 + 4) == 5) {
                *(undefined4 *)(lVar5 + 4) = 6;
                *(undefined1 *)(lVar5 + 9) = 1;
              }
              lVar4 = *(long *)(lVar4 + 8);
              lVar5 = lVar4 + -0x10;
            } while (lVar5 != lVar1 + 0x910);
          }
          else {
            do {
              if (*(int *)(lVar5 + 4) == 5) {
                *(undefined1 *)(lVar5 + 9) = 1;
              }
              lVar4 = *(long *)(lVar4 + 8);
              lVar5 = lVar4 + -0x10;
            } while (lVar5 != lVar1 + 0x910);
          }
        }
        FUN_0214e990(lVar1 + 0x8b0);
        FUN_0214fac0(lVar1 + 0x8b0,*puVar6,*(undefined8 *)(lVar1 + 0xaa0));
      }
    }
  }
  else {
    if ((*(int *)(param_1 + 0x55c28) != -1) && (lVar1 = FUN_0265c2a0(), lVar1 != 0)) {
      if ((*(long **)(lVar1 + 0x28) == (long *)0x0) ||
         (puVar2 = (undefined8 *)**(long **)(lVar1 + 0x28), puVar2 == (undefined8 *)0x0)) {
        local_24 = *(int *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x10764);
      }
      else {
        uVar3 = (**(code **)*puVar2)();
        local_24 = *(int *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x10764);
        if ((((uVar3 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
           (puVar2 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 8), puVar2 != (undefined8 *)0x0)) {
          (**(code **)*puVar2)();
        }
      }
      FUN_021dafb0((int *)(param_1 + 0x55c28),&local_24,0,0,0,1);
    }
    puVar6 = (uint *)(param_1 + 0x55c2c);
    if (*puVar6 == 0xffffffff) {
      return;
    }
    lVar1 = FUN_0265c2a0();
    if (lVar1 == 0) {
      return;
    }
    if ((*(long **)(lVar1 + 0x28) == (long *)0x0) ||
       (puVar2 = (undefined8 *)**(long **)(lVar1 + 0x28), puVar2 == (undefined8 *)0x0)) {
      local_24 = *(int *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x10764);
    }
    else {
      uVar3 = (**(code **)*puVar2)();
      local_24 = *(int *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x10764);
      if ((((uVar3 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
         (puVar2 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 8), puVar2 != (undefined8 *)0x0)) {
        (**(code **)*puVar2)();
      }
    }
  }
  FUN_021dafb0(puVar6,&local_24,0,0,0,1);
  return;
}


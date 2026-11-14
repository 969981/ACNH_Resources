
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016d1c5c(undefined2 *param_1)

{
  undefined2 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 local_38;
  undefined4 uStack_34;
  
  if ((param_1 != (undefined2 *)0x0) && (DAT_05574040 != 0)) {
    puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar5 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if (lVar5 == 0) {
        return;
      }
      lVar5 = lVar5 + 0x70;
    }
    else {
      if (puVar6 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar6[0x26] == (long *)0x0) {
        return;
      }
      lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
      if (lVar5 == 0) {
        return;
      }
    }
    if ((*(long **)(lVar5 + 0x2181c8) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x2181c8), puVar6 == (undefined8 *)0x0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)*puVar6)();
      uVar4 = uVar4 ^ 1;
    }
    bVar2 = *(byte *)(*(long *)(lVar5 + 0x2181b0) + *(long *)(lVar5 + 0x2181a8) + 0x179d0);
    if ((((uVar4 & 1) == 0) && (*(long *)(lVar5 + 0x2181c8) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x2181c8) + 8), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
    if ((bVar2 < 8) && (DAT_05574040 != 0)) {
      puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar5 = (**(code **)(*(long *)*puVar6 + 0x38))();
        if (lVar5 == 0) {
          return;
        }
        lVar5 = lVar5 + 0x70;
      }
      else {
        if (puVar6 == (undefined8 *)0x0) {
          return;
        }
        if ((long *)puVar6[0x26] == (long *)0x0) {
          return;
        }
        lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
        if (lVar5 == 0) {
          return;
        }
      }
      if ((*(long **)(lVar5 + 0x271c58) == (long *)0x0) ||
         (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x271c58), puVar6 == (undefined8 *)0x0)) {
        uVar4 = 1;
      }
      else {
        uVar4 = (**(code **)*puVar6)();
        uVar4 = uVar4 ^ 1;
      }
      puVar1 = (undefined2 *)(*(long *)(lVar5 + 0x271c40) + *(long *)(lVar5 + 0x271c38));
      *param_1 = *puVar1;
      *(undefined1 *)(param_1 + 1) = *(undefined1 *)(puVar1 + 1);
      *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar1 + 3);
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar1 + 2);
      if ((((uVar4 & 1) == 0) && (*(long *)(lVar5 + 0x271c58) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x271c58) + 8), puVar6 != (undefined8 *)0x0))
      {
        (**(code **)*puVar6)();
      }
      if ((*(long **)(lVar5 + 0x271c90) == (long *)0x0) ||
         (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x271c90), puVar6 == (undefined8 *)0x0)) {
        uVar4 = 1;
      }
      else {
        uVar4 = (**(code **)*puVar6)();
        uVar4 = uVar4 ^ 1;
      }
      puVar1 = (undefined2 *)(*(long *)(lVar5 + 0x271c78) + *(long *)(FUN_00271c6c + lVar5 + 4));
      param_1[8] = *puVar1;
      *(undefined1 *)(param_1 + 9) = *(undefined1 *)(puVar1 + 1);
      *(undefined1 *)((long)param_1 + 0x13) = *(undefined1 *)((long)puVar1 + 3);
      *(undefined4 *)(param_1 + 10) = *(undefined4 *)(puVar1 + 2);
      if ((((uVar4 & 1) == 0) && (*(long *)(lVar5 + 0x271c90) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x271c90) + 8), puVar6 != (undefined8 *)0x0))
      {
        (**(code **)*puVar6)();
      }
      uVar3 = DAT_0558600c;
      *(undefined4 *)(param_1 + 0xc) = _DAT_05586008;
      *(undefined4 *)(param_1 + 0xe) = uVar3;
      FUN_021e9420(&local_38);
      *(undefined4 *)(param_1 + 0x14) = local_38;
      *(undefined4 *)(param_1 + 0x16) = uStack_34;
    }
  }
  return;
}


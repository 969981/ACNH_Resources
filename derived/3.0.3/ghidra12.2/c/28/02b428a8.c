
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02b428a8(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_34;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == -1) {
    uVar10 = 0;
  }
  else {
    *(int *)(param_2 + 8) = iVar2;
    if (iVar2 == 0x26) {
      lVar7 = FUN_02642ea0();
      if (lVar7 == 0) {
        uVar5 = 0;
      }
      else if ((*(long **)(lVar7 + 0x28) == (long *)0x0) ||
              (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x28), puVar8 == (undefined8 *)0x0)) {
        uVar5 = *(undefined2 *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8) + 4);
      }
      else {
        uVar9 = (**(code **)*puVar8)();
        uVar5 = *(undefined2 *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8) + 4);
        if ((((uVar9 & 1) != 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
           (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 8), puVar8 != (undefined8 *)0x0)) {
          (**(code **)*puVar8)();
        }
      }
      *(undefined2 *)(param_2 + 0x10) = uVar5;
      lVar7 = FUN_02642ea0();
      if (lVar7 == 0) {
        uVar5 = 0;
      }
      else if ((*(long **)(lVar7 + 0x28) == (long *)0x0) ||
              (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x28), puVar8 == (undefined8 *)0x0)) {
        uVar5 = *(undefined2 *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8) + 6);
      }
      else {
        uVar9 = (**(code **)*puVar8)();
        uVar5 = *(undefined2 *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8) + 6);
        if ((((uVar9 & 1) != 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
           (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 8), puVar8 != (undefined8 *)0x0)) {
          (**(code **)*puVar8)();
        }
      }
      *(undefined2 *)(param_2 + 0x12) = uVar5;
      lVar7 = FUN_02642ea0();
      if (lVar7 == 0) {
        uVar5 = 0;
      }
      else if ((*(long **)(lVar7 + 0x28) == (long *)0x0) ||
              (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x28), puVar8 == (undefined8 *)0x0)) {
        uVar5 = *(undefined2 *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8) + 8);
      }
      else {
        uVar9 = (**(code **)*puVar8)();
        uVar5 = *(undefined2 *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8) + 8);
        if ((((uVar9 & 1) != 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
           (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 8), puVar8 != (undefined8 *)0x0)) {
          (**(code **)*puVar8)();
        }
      }
      *(undefined2 *)(param_2 + 0x14) = uVar5;
      lVar7 = FUN_02642ea0();
      if (lVar7 == 0) {
        uVar5 = DAT_05586008;
        uVar12 = DAT_0558600a;
        uVar11 = DAT_0558600b;
        uVar13 = DAT_0558600c;
      }
      else {
        if ((*(long **)(lVar7 + 0x28) == (long *)0x0) ||
           (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x28), puVar8 == (undefined8 *)0x0)) {
          uVar6 = 1;
        }
        else {
          uVar6 = (**(code **)*puVar8)();
          uVar6 = uVar6 ^ 1;
        }
        lVar1 = *(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8);
        uVar5 = *(undefined2 *)(lVar1 + 0xc);
        uVar12 = *(undefined1 *)(lVar1 + 0xe);
        uVar11 = *(undefined1 *)(lVar1 + 0xf);
        uVar13 = *(undefined4 *)(lVar1 + 0x10);
        if ((((uVar6 & 1) == 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
           (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 8), puVar8 != (undefined8 *)0x0)) {
          (**(code **)*puVar8)();
        }
      }
      uVar4 = DAT_0558600c;
      uVar3 = _DAT_05586008;
      *(undefined2 *)(param_2 + 0x18) = uVar5;
      *(undefined1 *)(param_2 + 0x1a) = uVar12;
      uVar10 = 1;
      *(undefined1 *)(param_2 + 0x1b) = uVar11;
      *(undefined1 *)(param_2 + 0x30) = 0;
      *(undefined4 *)(param_2 + 0x34) = 0;
      *(undefined4 *)(param_2 + 0x1c) = uVar13;
      *(undefined4 *)(param_2 + 0x20) = uVar3;
      *(undefined4 *)(param_2 + 0x24) = uVar4;
      *(undefined8 *)(param_2 + 0x28) = 0xffffffffffffffff;
    }
    else {
      local_34 = 0;
      FUN_02b673a0(&local_34);
      uVar5 = FUN_02b59470(local_34);
      *(undefined2 *)(param_2 + 0x10) = uVar5;
      uVar5 = FUN_02b59af0(local_34);
      *(undefined2 *)(param_2 + 0x12) = uVar5;
      uVar5 = FUN_02b59d10(local_34);
      *(undefined2 *)(param_2 + 0x14) = uVar5;
      FUN_02b5a1f0(&local_58,local_34);
      *(undefined4 *)(param_2 + 0x18) = local_58;
      *(undefined4 *)(param_2 + 0x1c) = uStack_54;
      FUN_02b5c660(&local_58,local_34);
      uVar10 = 1;
      *(undefined1 *)(param_2 + 0x30) = 0;
      *(undefined8 *)(param_2 + 0x28) = 0xffffffffffffffff;
      *(undefined4 *)(param_2 + 0x34) = 0;
      *(undefined4 *)(param_2 + 0x20) = local_58;
      *(undefined4 *)(param_2 + 0x24) = uStack_54;
    }
  }
  return uVar10;
}


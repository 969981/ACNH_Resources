
void FUN_01e2ef20(long param_1,uint *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  uint *puVar6;
  uint uVar7;
  
  lVar2 = FUN_0265c2a0(*param_2);
  uVar7 = *param_2;
  if (((uVar7 < 10) && (lVar2 != 0)) && ((&DAT_053fee41)[(ulong)uVar7 * 0xba0] != '\0')) {
    puVar1 = &DAT_053fe850 + (ulong)uVar7 * 0xba0;
    if ((*(long **)(lVar2 + 0x28) == (long *)0x0) ||
       (puVar3 = (undefined8 *)**(long **)(lVar2 + 0x28), puVar3 == (undefined8 *)0x0)) {
      FUN_01e373e8(puVar1,*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8),param_2);
    }
    else {
      uVar4 = (**(code **)*puVar3)();
      FUN_01e373e8(puVar1,*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8),param_2);
      if ((((uVar4 & 1) != 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
         (puVar3 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 8), puVar3 != (undefined8 *)0x0)) {
        (**(code **)*puVar3)();
      }
    }
    FUN_01e2b514(param_1,puVar1,0,0,0);
    FUN_01e2b514(param_1,puVar1,0,0,0);
    FUN_01e2b514(param_1,puVar1,0,0,0);
    FUN_01e2b514(param_1,puVar1,0,0,0);
    FUN_01e2b514(param_1,puVar1,0,0,0);
    FUN_01e2b514(param_1,puVar1,0,0,0);
    FUN_01e2b514(param_1,puVar1,0,0,0);
    FUN_01e2b514(param_1,puVar1,0,0,0);
    FUN_01e2b514(param_1,puVar1,0,0,0);
    FUN_01e2b514(param_1,puVar1,1,0,0);
    FUN_01e2bfe0(param_1,puVar1);
    FUN_01e37c08(puVar1,0);
    uVar7 = *param_2;
    if (*(uint *)(param_1 + 0x434) == uVar7) {
      *(undefined4 *)(param_1 + 0x434) = 0xffffffff;
      uVar7 = *param_2;
    }
    plVar5 = (long *)(param_1 + 0x438);
    do {
      plVar5 = (long *)plVar5[1];
      if (plVar5 == (long *)(param_1 + 0x438)) {
        return;
      }
      puVar6 = (uint *)(plVar5 + -1);
    } while (*puVar6 != uVar7);
    if ((plVar5 != (long *)0x0) && (puVar6 != (uint *)0x0)) {
      if (*plVar5 != 0) {
        *(long *)(*plVar5 + 8) = plVar5[1];
      }
      if ((long *)plVar5[1] != (long *)0x0) {
        *(long *)plVar5[1] = *plVar5;
      }
      *plVar5 = 0;
      plVar5[1] = 0;
      *(int *)(param_1 + 0x448) = *(int *)(param_1 + 0x448) + -1;
      plVar5[-1] = *(long *)(param_1 + 0x450);
      *(uint **)(param_1 + 0x450) = puVar6;
    }
  }
  return;
}


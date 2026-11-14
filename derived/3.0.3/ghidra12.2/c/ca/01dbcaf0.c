
void FUN_01dbcaf0(long *param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  if (*(long *)PTR_DAT_04bb27a8 != 0) {
    FUN_0136328c();
  }
  if (*param_1 != 0) {
    FUN_01d3ebd0();
  }
  if (param_1[1] != 0) {
    FUN_03ebb268(param_1[1] + 8);
  }
  if (param_1[2] != 0) {
    FUN_01d4be14();
  }
  if (param_1[3] != 0) {
    FUN_01db91c0();
  }
  lVar3 = param_1[4];
  if ((lVar3 == 0) || (*(char *)(lVar3 + 0x40) == '\0')) goto LAB_01dbcbd8;
  if (*(long *)(lVar3 + 8) == 0) {
LAB_01dbcbbc:
    if (*(char *)(lVar3 + 0x40) != '\0') goto LAB_01dbcbd8;
  }
  else {
    pcVar1 = *(code **)(lVar3 + 0x10);
    uVar2 = *(ulong *)(lVar3 + 0x18) & 1;
    if (uVar2 == 0 && pcVar1 == (code *)0x0) goto LAB_01dbcbbc;
    if (uVar2 != 0) {
      pcVar1 = *(code **)(pcVar1 + *(long *)(*(long *)(lVar3 + 8) +
                                            ((long)*(ulong *)(lVar3 + 0x18) >> 1)));
    }
    uVar2 = (*pcVar1)();
    if ((uVar2 & 1) == 0) goto LAB_01dbcbbc;
    *(undefined1 *)(lVar3 + 0x40) = 0;
    if (*(long *)(lVar3 + 0x28) != 0) {
      pcVar1 = *(code **)(lVar3 + 0x30);
      uVar2 = *(ulong *)(lVar3 + 0x38) & 1;
      if (uVar2 != 0 || pcVar1 != (code *)0x0) {
        if (uVar2 != 0) {
          pcVar1 = *(code **)(pcVar1 + *(long *)(*(long *)(lVar3 + 0x28) +
                                                ((long)*(ulong *)(lVar3 + 0x38) >> 1)));
        }
        (*pcVar1)();
      }
      goto LAB_01dbcbbc;
    }
  }
  if (*(undefined8 **)(lVar3 + 0x48) != (undefined8 *)0x0) {
    **(undefined8 **)(lVar3 + 0x48) = 0;
    *(undefined8 *)(lVar3 + 0x48) = 0;
  }
  *(undefined1 *)(lVar3 + 0x60) = 0;
LAB_01dbcbd8:
  if (*(long *)(DAT_05370ac0 + 8) != DAT_05370ac0) {
    lVar3 = (long)*(int *)(DAT_05370ac0 + 0x14);
    plVar4 = (long *)(*(long *)(DAT_05370ac0 + 8) - lVar3);
    plVar5 = (long *)(DAT_05370ac0 - lVar3);
    do {
      (**(code **)(*plVar4 + 0x40))(plVar4);
      plVar4 = (long *)(*(long *)((long)plVar4 + lVar3 + 8) - lVar3);
    } while (plVar4 != plVar5);
  }
  return;
}


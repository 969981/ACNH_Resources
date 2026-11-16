
void FUN_029c3420(long param_1,long *param_2)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  uint *puVar5;
  long *plVar6;
  undefined4 uVar7;
  
  plVar6 = (long *)param_2[1];
  if ((((plVar6 != (long *)0x0) && (lVar4 = *plVar6, lVar4 != 0)) &&
      ((int)plVar6[1] == *(int *)(lVar4 + 0x10))) &&
     ((param_2[4] != 0 && (puVar5 = *(uint **)(param_2[4] + 0x30), puVar5 != (uint *)0x0)))) {
    uVar3 = *(ulong *)PTR_DAT_04bb38c8 | (ulong)*puVar5;
    uVar1 = uVar3 + 0x100000000;
    if (*(ulong *)PTR_DAT_04bb38c0 <= (ulong)*puVar5) {
      uVar1 = uVar3;
    }
    if (*param_2 == 0) {
      uVar7 = 0x3f000000;
    }
    else {
      uVar7 = FUN_03bdc344(*(long *)(*(long *)(*param_2 + 0x30) + 0x18) + 0x28,puVar5);
    }
    uVar3 = 0;
    *(undefined4 *)(param_1 + 0x2dd8) = uVar7;
    bVar2 = true;
    while (*(char *)(uVar1 + uVar3) == "BGM_Event_Easter_Pyontaro"[uVar3]) {
      if (*(char *)(uVar1 + uVar3) == '\0') {
        if (!bVar2) {
          return;
        }
        if (*param_2 == 0) {
          uVar7 = 0x3f000000;
        }
        else {
          uVar7 = FUN_03bdc344(*(long *)(*(long *)(*param_2 + 0x30) + 0x18) + 0x28,puVar5);
        }
        *(undefined4 *)(param_1 + 0x2dd8) = uVar7;
        if ((*(int *)(lVar4 + 0xc) < 3) && (*(long *)(lVar4 + 0x118) == 0)) {
          if (*(int *)(lVar4 + 0xc) < 3) {
            *(long *)(lVar4 + 0x118) = param_1 + 0x10;
            FUN_03b46430(lVar4);
          }
          *(undefined1 *)(lVar4 + 0x1a4) = 1;
          *(long *)(param_1 + 8) = param_2[4];
        }
        lVar4 = *plVar6;
        *(int *)(param_1 + 0x2d70) = (int)plVar6[1];
        *(long *)(param_1 + 0x2d68) = lVar4;
        return;
      }
      bVar2 = uVar3 < 0x80000;
      uVar3 = uVar3 + 1;
      if (uVar3 == 0x80001) {
        return;
      }
    }
  }
  return;
}


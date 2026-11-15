
undefined4 FUN_021eaaa0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  if (*(byte *)(*DAT_0537d558 + 0x476) < 2) {
    lVar3 = FUN_021c9770(*param_1,1);
    if (lVar3 != 0) {
      if (*(char *)(lVar3 + 0x6c) == '\0') {
        if (*(int *)(lVar3 + 0x40) < 1) {
          puVar6 = &DAT_053da288;
        }
        else {
          iVar2 = *(int *)(lVar3 + 0x40) + *(int *)(lVar3 + 0x3c) + -1;
          iVar1 = 0;
          if (*(int *)(lVar3 + 0x38) <= iVar2) {
            iVar1 = *(int *)(lVar3 + 0x38);
          }
          puVar6 = (undefined4 *)(*(long *)(lVar3 + 0x30) + (long)(iVar2 - iVar1) * 0x10 + 4);
        }
      }
      else {
        puVar6 = (undefined4 *)(lVar3 + 0x68);
      }
      return *puVar6;
    }
  }
  else {
    lVar3 = FUN_016c91a4();
    if (lVar3 != 0) {
      if ((*(long **)(lVar3 + 0x28) == (long *)0x0) ||
         (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x28), puVar4 == (undefined8 *)0x0)) {
        uVar7 = *(uint *)(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8) + 0x1630);
      }
      else {
        uVar5 = (**(code **)*puVar4)();
        uVar7 = *(uint *)(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8) + 0x1630);
        if ((((uVar5 & 1) != 0) && (*(long *)(lVar3 + 0x28) != 0)) &&
           (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x28) + 8), puVar4 != (undefined8 *)0x0)) {
          (**(code **)*puVar4)();
        }
      }
      if (uVar7 < 9) {
        return *(undefined4 *)(&DAT_04179d98 + (long)(int)uVar7 * 4);
      }
    }
  }
  return 3;
}


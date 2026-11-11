
void FUN_003fdbd8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  undefined2 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  cVar3 = *(char *)(param_1 + 0x69);
  *(undefined1 *)(param_2 + 8) = 0;
  if (cVar3 == '\0') {
    lVar6 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar6 + 0x18) == *(long *)(param_1 + 0x18)) {
      *(undefined1 *)(param_1 + 8) = 1;
      *(undefined1 *)(param_2 + 8) = 0;
      cVar4 = *(char *)(param_1 + 8);
    }
    else {
      *(undefined1 *)(param_2 + 8) =
           *(undefined1 *)
            (*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 0x28) + *(long *)(param_1 + 0x18));
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
      cVar4 = *(char *)(param_1 + 8);
    }
    if (cVar4 != '\0') {
      return;
    }
    lVar6 = *(long *)(param_1 + 0x10);
    lVar1 = *(long *)(param_1 + 0x18);
    if ((ulong)(*(long *)(lVar6 + 0x18) - lVar1) < 4) goto LAB_003fddb8;
    lVar2 = lVar1 + 4;
    uVar10 = (ulong)*(uint *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 0x28) + lVar1);
    *(long *)(param_1 + 0x18) = lVar2;
    lVar6 = *(long *)(param_1 + 0x10);
    uVar7 = *(long *)(lVar6 + 0x18) - lVar2;
  }
  else {
    if (*(char *)(param_1 + 8) != '\0') {
      return;
    }
    lVar6 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(param_1 + 0x18);
    uVar10 = 0;
    uVar7 = *(long *)(lVar6 + 0x18) - lVar2;
  }
  if (uVar7 < 8) {
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined1 *)(param_1 + 8) = 1;
    return;
  }
  lVar8 = *(long *)(lVar6 + 0x10);
  cVar4 = *(char *)(param_1 + 8);
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(lVar8 + *(long *)(lVar6 + 0x28) + lVar2);
  lVar9 = *(long *)(param_1 + 0x18);
  lVar1 = lVar9 + 8;
  *(long *)(param_1 + 0x18) = lVar1;
  if (cVar4 == '\0') {
    if ((ulong)(*(long *)(lVar6 + 0x18) - lVar1) < 2) {
      uVar5 = 0;
      *(undefined1 *)(param_1 + 8) = 1;
    }
    else {
      uVar5 = *(undefined2 *)(lVar8 + *(long *)(lVar6 + 0x28) + lVar1);
      *(long *)(param_1 + 0x18) = lVar9 + 10;
    }
    *(undefined2 *)(param_2 + 0x18) = uVar5;
    if (*(char *)(param_1 + 8) == '\0') {
      lVar6 = *(long *)(param_1 + 0x10);
      lVar1 = *(long *)(param_1 + 0x18);
      if ((ulong)(*(long *)(lVar6 + 0x18) - lVar1) < 2) {
        uVar5 = 0;
        *(undefined1 *)(param_1 + 8) = 1;
      }
      else {
        uVar5 = *(undefined2 *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 0x28) + lVar1);
        *(long *)(param_1 + 0x18) = lVar1 + 2;
      }
      *(undefined2 *)(param_2 + 0x1a) = uVar5;
      if ((*(char *)(param_1 + 8) == '\0') &&
         (FUN_001f77fc(param_1,param_2 + 0x20), *(char *)(param_1 + 8) == '\0' && cVar3 == '\0')) {
        uVar10 = lVar2 + uVar10;
        if ((*(ulong *)(param_1 + 0x18) <= uVar10) &&
           (uVar10 <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x18))) {
          *(ulong *)(param_1 + 0x18) = uVar10;
          return;
        }
LAB_003fddb8:
        *(undefined1 *)(param_1 + 8) = 1;
        return;
      }
    }
  }
  return;
}


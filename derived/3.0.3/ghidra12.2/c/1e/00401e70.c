
void FUN_00401e70(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  ulong uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  cVar3 = *(char *)(param_1 + 0x69);
  *(undefined1 *)(param_2 + 8) = 0;
  if (cVar3 == '\0') {
    lVar2 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar2 + 0x18) == *(long *)(param_1 + 0x18)) {
      *(undefined1 *)(param_1 + 8) = 1;
      *(undefined1 *)(param_2 + 8) = 0;
      cVar4 = *(char *)(param_1 + 8);
    }
    else {
      *(undefined1 *)(param_2 + 8) =
           *(undefined1 *)
            (*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 0x28) + *(long *)(param_1 + 0x18));
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
      cVar4 = *(char *)(param_1 + 8);
    }
    if (cVar4 != '\0') {
      return;
    }
    lVar8 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(param_1 + 0x18);
    if ((ulong)(*(long *)(lVar8 + 0x18) - lVar2) < 4) goto LAB_00402098;
    uVar5 = (ulong)*(uint *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 0x28) + lVar2);
    lVar2 = lVar2 + 4;
    *(long *)(param_1 + 0x18) = lVar2;
    lVar8 = *(long *)(param_1 + 0x10);
    uVar9 = *(long *)(lVar8 + 0x18) - lVar2;
  }
  else {
    if (*(char *)(param_1 + 8) != '\0') {
      return;
    }
    lVar8 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(param_1 + 0x18);
    uVar5 = 0;
    uVar9 = *(long *)(lVar8 + 0x18) - lVar2;
  }
  if (uVar9 < 8) {
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined1 *)(param_1 + 8) = 1;
    return;
  }
  lVar10 = *(long *)(lVar8 + 0x10);
  cVar4 = *(char *)(param_1 + 8);
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(lVar10 + *(long *)(lVar8 + 0x28) + lVar2);
  lVar1 = *(long *)(param_1 + 0x18) + 8;
  *(long *)(param_1 + 0x18) = lVar1;
  if (cVar4 == '\0') {
    if ((ulong)(*(long *)(lVar8 + 0x18) - lVar1) < 8) {
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined1 *)(param_1 + 8) = 1;
      return;
    }
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(lVar10 + *(long *)(lVar8 + 0x28) + lVar1);
    lVar11 = *(long *)(param_1 + 0x18);
    lVar12 = *(long *)(lVar8 + 0x18);
    lVar1 = lVar11 + 8;
    *(long *)(param_1 + 0x18) = lVar1;
    if ((ulong)(lVar12 - lVar1) < 4) {
      uVar7 = 0;
      *(undefined1 *)(param_1 + 8) = 1;
    }
    else {
      uVar7 = *(undefined4 *)(lVar10 + *(long *)(lVar8 + 0x28) + lVar1);
      *(long *)(param_1 + 0x18) = lVar11 + 0xc;
    }
    *(undefined4 *)(param_2 + 0x20) = uVar7;
    if (*(char *)(param_1 + 8) == '\0') {
      lVar8 = *(long *)(param_1 + 0x10);
      lVar1 = *(long *)(param_1 + 0x18);
      if ((ulong)(*(long *)(lVar8 + 0x18) - lVar1) < 2) {
        uVar6 = 0;
        *(undefined1 *)(param_1 + 8) = 1;
      }
      else {
        uVar6 = *(undefined2 *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 0x28) + lVar1);
        *(long *)(param_1 + 0x18) = lVar1 + 2;
      }
      *(undefined2 *)(param_2 + 0x24) = uVar6;
      if (*(char *)(param_1 + 8) == '\0') {
        lVar8 = *(long *)(param_1 + 0x10);
        lVar1 = *(long *)(param_1 + 0x18);
        if ((ulong)(*(long *)(lVar8 + 0x18) - lVar1) < 4) {
          uVar7 = 0;
          *(undefined1 *)(param_1 + 8) = 1;
        }
        else {
          uVar7 = *(undefined4 *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 0x28) + lVar1);
          *(long *)(param_1 + 0x18) = lVar1 + 4;
        }
        *(undefined4 *)(param_2 + 0x28) = uVar7;
        if (*(char *)(param_1 + 8) == '\0' && cVar3 == '\0') {
          uVar5 = lVar2 + uVar5;
          if ((*(ulong *)(param_1 + 0x18) <= uVar5) &&
             (uVar5 <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x18))) {
            *(ulong *)(param_1 + 0x18) = uVar5;
            return;
          }
LAB_00402098:
          *(undefined1 *)(param_1 + 8) = 1;
          return;
        }
      }
    }
  }
  return;
}


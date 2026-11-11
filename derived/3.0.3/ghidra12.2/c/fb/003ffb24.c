
void FUN_003ffb24(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  char cVar5;
  ulong uVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  cVar4 = *(char *)(param_1 + 0x69);
  *(undefined1 *)(param_2 + 8) = 0;
  if (cVar4 == '\0') {
    lVar3 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar3 + 0x18) == *(long *)(param_1 + 0x18)) {
      *(undefined1 *)(param_1 + 8) = 1;
      *(undefined1 *)(param_2 + 8) = 0;
      cVar5 = *(char *)(param_1 + 8);
    }
    else {
      *(undefined1 *)(param_2 + 8) =
           *(undefined1 *)
            (*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 0x28) + *(long *)(param_1 + 0x18));
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
      cVar5 = *(char *)(param_1 + 8);
    }
    if (cVar5 != '\0') {
      return;
    }
    lVar8 = *(long *)(param_1 + 0x10);
    lVar3 = *(long *)(param_1 + 0x18);
    if ((ulong)(*(long *)(lVar8 + 0x18) - lVar3) < 4) goto LAB_003ffcc8;
    uVar6 = (ulong)*(uint *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 0x28) + lVar3);
    lVar3 = lVar3 + 4;
    *(long *)(param_1 + 0x18) = lVar3;
    lVar8 = *(long *)(param_1 + 0x10);
    uVar9 = *(long *)(lVar8 + 0x18) - lVar3;
  }
  else {
    if (*(char *)(param_1 + 8) != '\0') {
      return;
    }
    lVar8 = *(long *)(param_1 + 0x10);
    lVar3 = *(long *)(param_1 + 0x18);
    uVar6 = 0;
    uVar9 = *(long *)(lVar8 + 0x18) - lVar3;
  }
  if (uVar9 < 8) {
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined1 *)(param_1 + 8) = 1;
    return;
  }
  lVar10 = *(long *)(lVar8 + 0x10);
  cVar5 = *(char *)(param_1 + 8);
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(lVar10 + *(long *)(lVar8 + 0x28) + lVar3);
  lVar11 = *(long *)(param_1 + 0x18);
  lVar2 = lVar11 + 8;
  *(long *)(param_1 + 0x18) = lVar2;
  if (cVar5 == '\0') {
    if ((ulong)(*(long *)(lVar8 + 0x18) - lVar2) < 4) {
      uVar7 = 0;
      *(undefined1 *)(param_1 + 8) = 1;
    }
    else {
      uVar7 = *(undefined4 *)(lVar10 + *(long *)(lVar8 + 0x28) + lVar2);
      *(long *)(param_1 + 0x18) = lVar11 + 0xc;
    }
    *(undefined4 *)(param_2 + 0x18) = uVar7;
    if (*(char *)(param_1 + 8) == '\0') {
      lVar8 = *(long *)(param_1 + 0x10);
      bVar1 = (ulong)(*(long *)(lVar8 + 0x18) - *(long *)(param_1 + 0x18)) < 8;
      if (bVar1) {
        *(undefined8 *)(param_2 + 0x20) = 0;
        *(undefined1 *)(param_1 + 8) = 1;
      }
      else {
        *(undefined8 *)(param_2 + 0x20) =
             *(undefined8 *)
              (*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 0x28) + *(long *)(param_1 + 0x18));
        *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 8;
      }
      if (!bVar1 && cVar4 == '\0') {
        uVar6 = lVar3 + uVar6;
        if ((*(ulong *)(param_1 + 0x18) <= uVar6) && (uVar6 <= *(ulong *)(lVar8 + 0x18))) {
          *(ulong *)(param_1 + 0x18) = uVar6;
          return;
        }
LAB_003ffcc8:
        *(undefined1 *)(param_1 + 8) = 1;
        return;
      }
    }
  }
  return;
}


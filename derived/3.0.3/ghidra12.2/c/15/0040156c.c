
void FUN_0040156c(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  char cVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
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
    lVar7 = *(long *)(param_1 + 0x10);
    lVar3 = *(long *)(param_1 + 0x18);
    if ((ulong)(*(long *)(lVar7 + 0x18) - lVar3) < 4) goto LAB_004016c8;
    uVar6 = (ulong)*(uint *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 0x28) + lVar3);
    lVar3 = lVar3 + 4;
    *(long *)(param_1 + 0x18) = lVar3;
    lVar7 = *(long *)(param_1 + 0x10);
    uVar8 = *(long *)(lVar7 + 0x18) - lVar3;
  }
  else {
    if (*(char *)(param_1 + 8) != '\0') {
      return;
    }
    lVar7 = *(long *)(param_1 + 0x10);
    lVar3 = *(long *)(param_1 + 0x18);
    uVar6 = 0;
    uVar8 = *(long *)(lVar7 + 0x18) - lVar3;
  }
  if (uVar8 < 8) {
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined1 *)(param_1 + 8) = 1;
    return;
  }
  lVar9 = *(long *)(lVar7 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(lVar9 + *(long *)(lVar7 + 0x28) + lVar3);
  lVar2 = *(long *)(param_1 + 0x18) + 8;
  *(long *)(param_1 + 0x18) = lVar2;
  if (*(char *)(param_1 + 8) == '\0') {
    bVar1 = (ulong)(*(long *)(lVar7 + 0x18) - lVar2) < 8;
    if (bVar1) {
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined1 *)(param_1 + 8) = 1;
    }
    else {
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(lVar9 + *(long *)(lVar7 + 0x28) + lVar2);
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 8;
    }
    if (!bVar1 && cVar4 == '\0') {
      uVar6 = lVar3 + uVar6;
      if ((*(ulong *)(param_1 + 0x18) <= uVar6) && (uVar6 <= *(ulong *)(lVar7 + 0x18))) {
        *(ulong *)(param_1 + 0x18) = uVar6;
        return;
      }
LAB_004016c8:
      *(undefined1 *)(param_1 + 8) = 1;
      return;
    }
  }
  return;
}


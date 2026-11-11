
void FUN_004013fc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  ulong uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
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
    lVar7 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(param_1 + 0x18);
    if ((ulong)(*(long *)(lVar7 + 0x18) - lVar2) < 4) goto LAB_00401558;
    uVar5 = (ulong)*(uint *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 0x28) + lVar2);
    lVar2 = lVar2 + 4;
    *(long *)(param_1 + 0x18) = lVar2;
    lVar7 = *(long *)(param_1 + 0x10);
    uVar8 = *(long *)(lVar7 + 0x18) - lVar2;
  }
  else {
    if (*(char *)(param_1 + 8) != '\0') {
      return;
    }
    lVar7 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(param_1 + 0x18);
    uVar5 = 0;
    uVar8 = *(long *)(lVar7 + 0x18) - lVar2;
  }
  if (uVar8 < 8) {
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined1 *)(param_1 + 8) = 1;
    return;
  }
  lVar9 = *(long *)(lVar7 + 0x10);
  cVar4 = *(char *)(param_1 + 8);
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(lVar9 + *(long *)(lVar7 + 0x28) + lVar2);
  lVar10 = *(long *)(param_1 + 0x18);
  lVar1 = lVar10 + 8;
  *(long *)(param_1 + 0x18) = lVar1;
  if (cVar4 == '\0') {
    if ((ulong)(*(long *)(lVar7 + 0x18) - lVar1) < 4) {
      uVar6 = 0;
      *(undefined1 *)(param_1 + 8) = 1;
    }
    else {
      uVar6 = *(undefined4 *)(lVar9 + *(long *)(lVar7 + 0x28) + lVar1);
      *(long *)(param_1 + 0x18) = lVar10 + 0xc;
    }
    *(undefined4 *)(param_2 + 0x18) = uVar6;
    if (*(char *)(param_1 + 8) == '\0' && cVar3 == '\0') {
      uVar5 = lVar2 + uVar5;
      if ((*(ulong *)(param_1 + 0x18) <= uVar5) &&
         (uVar5 <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x18))) {
        *(ulong *)(param_1 + 0x18) = uVar5;
        return;
      }
LAB_00401558:
      *(undefined1 *)(param_1 + 8) = 1;
      return;
    }
  }
  return;
}



void FUN_001fd914(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  cVar2 = *(char *)(param_1 + 0x69);
  *(undefined1 *)(param_2 + 8) = 0;
  if (cVar2 == '\0') {
    lVar5 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar5 + 0x18) == *(long *)(param_1 + 0x18)) {
      *(undefined1 *)(param_1 + 8) = 1;
      *(undefined1 *)(param_2 + 8) = 0;
      cVar3 = *(char *)(param_1 + 8);
    }
    else {
      *(undefined1 *)(param_2 + 8) =
           *(undefined1 *)
            (*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 0x28) + *(long *)(param_1 + 0x18));
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
      cVar3 = *(char *)(param_1 + 8);
    }
    if (cVar3 != '\0') {
      return;
    }
    lVar7 = *(long *)(param_1 + 0x10);
    lVar5 = *(long *)(param_1 + 0x18);
    if ((ulong)(*(long *)(lVar7 + 0x18) - lVar5) < 4) goto LAB_001fdabc;
    uVar4 = (ulong)*(uint *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 0x28) + lVar5);
    lVar5 = lVar5 + 4;
    *(long *)(param_1 + 0x18) = lVar5;
    lVar7 = *(long *)(param_1 + 0x10);
    if (3 < (ulong)(*(long *)(lVar7 + 0x18) - lVar5)) goto LAB_001fd96c;
LAB_001fd9fc:
    *(undefined1 *)(param_1 + 8) = 1;
    *(undefined4 *)(param_2 + 0xc) = 0;
    cVar3 = *(char *)(param_1 + 8);
  }
  else {
    if (*(char *)(param_1 + 8) != '\0') {
      return;
    }
    lVar7 = *(long *)(param_1 + 0x10);
    lVar5 = *(long *)(param_1 + 0x18);
    uVar4 = 0;
    if ((ulong)(*(long *)(lVar7 + 0x18) - lVar5) < 4) goto LAB_001fd9fc;
LAB_001fd96c:
    uVar6 = *(undefined4 *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 0x28) + lVar5);
    *(long *)(param_1 + 0x18) = lVar5 + 4;
    *(undefined4 *)(param_2 + 0xc) = uVar6;
    cVar3 = *(char *)(param_1 + 8);
  }
  if (cVar3 == '\0') {
    lVar7 = *(long *)(param_1 + 0x10);
    if ((ulong)(*(long *)(lVar7 + 0x18) - *(long *)(param_1 + 0x18)) < 8) {
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined1 *)(param_1 + 8) = 1;
      return;
    }
    lVar8 = *(long *)(lVar7 + 0x10);
    *(undefined8 *)(param_2 + 0x10) =
         *(undefined8 *)(lVar8 + *(long *)(lVar7 + 0x28) + *(long *)(param_1 + 0x18));
    lVar9 = *(long *)(param_1 + 0x18);
    lVar10 = *(long *)(lVar7 + 0x18);
    lVar1 = lVar9 + 8;
    *(long *)(param_1 + 0x18) = lVar1;
    if ((ulong)(lVar10 - lVar1) < 4) {
      uVar6 = 0;
      *(undefined1 *)(param_1 + 8) = 1;
    }
    else {
      uVar6 = *(undefined4 *)(lVar8 + *(long *)(lVar7 + 0x28) + lVar1);
      *(long *)(param_1 + 0x18) = lVar9 + 0xc;
    }
    *(undefined4 *)(param_2 + 0x18) = uVar6;
    if (*(char *)(param_1 + 8) == '\0' && cVar2 == '\0') {
      uVar4 = lVar5 + uVar4;
      if ((*(ulong *)(param_1 + 0x18) <= uVar4) &&
         (uVar4 <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x18))) {
        *(ulong *)(param_1 + 0x18) = uVar4;
        return;
      }
LAB_001fdabc:
      *(undefined1 *)(param_1 + 8) = 1;
      return;
    }
  }
  return;
}


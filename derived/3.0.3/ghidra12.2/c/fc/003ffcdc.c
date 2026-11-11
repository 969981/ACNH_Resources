
void FUN_003ffcdc(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  cVar2 = *(char *)(param_1 + 0x69);
  *(undefined1 *)(param_2 + 8) = 0;
  if (cVar2 == '\0') {
    lVar4 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar4 + 0x18) == *(long *)(param_1 + 0x18)) {
      *(undefined1 *)(param_1 + 8) = 1;
      *(undefined1 *)(param_2 + 8) = 0;
      cVar3 = *(char *)(param_1 + 8);
    }
    else {
      *(undefined1 *)(param_2 + 8) =
           *(undefined1 *)
            (*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 0x28) + *(long *)(param_1 + 0x18));
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
      cVar3 = *(char *)(param_1 + 8);
    }
    if (cVar3 != '\0') {
      return;
    }
    lVar4 = *(long *)(param_1 + 0x10);
    lVar1 = *(long *)(param_1 + 0x18);
    if ((ulong)(*(long *)(lVar4 + 0x18) - lVar1) < 4) goto LAB_003ffe28;
    lVar6 = lVar1 + 4;
    uVar5 = (ulong)*(uint *)(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 0x28) + lVar1);
    *(long *)(param_1 + 0x18) = lVar6;
    lVar4 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar4 + 0x18) == lVar6) goto LAB_003ffd4c;
LAB_003ffdc8:
    *(undefined1 *)(param_2 + 9) =
         *(undefined1 *)(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 0x28) + lVar6);
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
    cVar3 = *(char *)(param_1 + 8);
  }
  else {
    if (*(char *)(param_1 + 8) != '\0') {
      return;
    }
    lVar4 = *(long *)(param_1 + 0x10);
    lVar6 = *(long *)(param_1 + 0x18);
    uVar5 = 0;
    if (*(long *)(lVar4 + 0x18) != lVar6) goto LAB_003ffdc8;
LAB_003ffd4c:
    *(undefined1 *)(param_1 + 8) = 1;
    *(undefined1 *)(param_2 + 9) = 0;
    cVar3 = *(char *)(param_1 + 8);
  }
  if ((cVar3 != '\0') ||
     (FUN_003ffb24(param_1,param_2 + 0x10), *(char *)(param_1 + 8) != '\0' || cVar2 != '\0')) {
    return;
  }
  uVar5 = lVar6 + uVar5;
  if ((*(ulong *)(param_1 + 0x18) <= uVar5) &&
     (uVar5 <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x18))) {
    *(ulong *)(param_1 + 0x18) = uVar5;
    return;
  }
LAB_003ffe28:
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}


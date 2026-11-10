
void FUN_003150a8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  
  cVar3 = *(char *)(param_1 + 0x69);
  *(undefined1 *)(param_2 + 8) = 0;
  if (cVar3 == '\0') {
    lVar1 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar1 + 0x18) == *(long *)(param_1 + 0x18)) {
      *(undefined1 *)(param_1 + 8) = 1;
      *(undefined1 *)(param_2 + 8) = 0;
      cVar3 = *(char *)(param_1 + 8);
    }
    else {
      *(undefined1 *)(param_2 + 8) =
           *(undefined1 *)
            (*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 0x28) + *(long *)(param_1 + 0x18));
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
      cVar3 = *(char *)(param_1 + 8);
    }
    if (cVar3 != '\0') {
      return;
    }
    lVar1 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(param_1 + 0x18);
    if ((ulong)(*(long *)(lVar1 + 0x18) - lVar2) < 4) goto LAB_003151b4;
    lVar5 = lVar2 + 4;
    uVar4 = (ulong)*(uint *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 0x28) + lVar2);
    *(long *)(param_1 + 0x18) = lVar5;
    FUN_001fddb0(param_1,param_2 + 0x10);
    if (*(char *)(param_1 + 8) != '\0') {
      return;
    }
  }
  else {
    if (*(char *)(param_1 + 8) != '\0') {
      return;
    }
    lVar5 = *(long *)(param_1 + 0x18);
    uVar4 = 0;
    FUN_001fddb0(param_1,param_2 + 0x10);
    if (*(char *)(param_1 + 8) != '\0' || cVar3 != '\0') {
      return;
    }
  }
  uVar4 = lVar5 + uVar4;
  if ((*(ulong *)(param_1 + 0x18) <= uVar4) &&
     (uVar4 <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x18))) {
    *(ulong *)(param_1 + 0x18) = uVar4;
    return;
  }
LAB_003151b4:
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}


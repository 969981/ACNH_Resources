
void FUN_001fff5c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  char cVar4;
  char cVar5;
  ulong uVar6;
  long lVar7;
  
  cVar4 = *(char *)(param_1 + 0x69);
  *(undefined1 *)(param_2 + 8) = 0;
  if (cVar4 == '\0') {
    lVar1 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar1 + 0x18) == *(long *)(param_1 + 0x18)) {
      *(undefined1 *)(param_1 + 8) = 1;
      *(undefined1 *)(param_2 + 8) = 0;
      cVar5 = *(char *)(param_1 + 8);
    }
    else {
      *(undefined1 *)(param_2 + 8) =
           *(undefined1 *)
            (*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 0x28) + *(long *)(param_1 + 0x18));
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
      cVar5 = *(char *)(param_1 + 8);
    }
    if (cVar5 != '\0') {
      return;
    }
    lVar1 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(param_1 + 0x18);
    if ((ulong)(*(long *)(lVar1 + 0x18) - lVar2) < 4) goto LAB_002000c0;
    lVar7 = lVar2 + 4;
    uVar6 = (ulong)*(uint *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 0x28) + lVar2);
    *(long *)(param_1 + 0x18) = lVar7;
    FUN_001f7734(param_1,param_2 + 0x10);
    cVar5 = *(char *)(param_1 + 8);
  }
  else {
    if (*(char *)(param_1 + 8) != '\0') {
      return;
    }
    lVar7 = *(long *)(param_1 + 0x18);
    uVar6 = 0;
    FUN_001f7734(param_1,param_2 + 0x10);
    cVar5 = *(char *)(param_1 + 8);
  }
  if (cVar5 != '\0') {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  if ((ulong)(*(long *)(lVar1 + 0x18) - lVar2) < 4) {
    *(undefined1 *)(param_1 + 8) = 1;
    *(undefined4 *)(param_2 + 0x80) = 0;
    if (*(char *)(param_1 + 8) != '\0' || cVar4 != '\0') {
      return;
    }
  }
  else {
    uVar3 = *(undefined4 *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 0x28) + lVar2);
    *(long *)(param_1 + 0x18) = lVar2 + 4;
    *(undefined4 *)(param_2 + 0x80) = uVar3;
    if (*(char *)(param_1 + 8) != '\0' || cVar4 != '\0') {
      return;
    }
  }
  uVar6 = lVar7 + uVar6;
  if ((*(ulong *)(param_1 + 0x18) <= uVar6) &&
     (uVar6 <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x18))) {
    *(ulong *)(param_1 + 0x18) = uVar6;
    return;
  }
LAB_002000c0:
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}


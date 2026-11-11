
void FUN_003fd300(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  
  cVar3 = *(char *)(param_1 + 0x69);
  *(undefined1 *)(param_2 + 8) = 0;
  if (cVar3 == '\0') {
    lVar1 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar1 + 0x18) == *(long *)(param_1 + 0x18)) {
      *(undefined1 *)(param_1 + 8) = 1;
      *(undefined1 *)(param_2 + 8) = 0;
      cVar4 = *(char *)(param_1 + 8);
    }
    else {
      *(undefined1 *)(param_2 + 8) =
           *(undefined1 *)
            (*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 0x28) + *(long *)(param_1 + 0x18));
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
      cVar4 = *(char *)(param_1 + 8);
    }
    if (cVar4 != '\0') {
      return;
    }
    lVar1 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(param_1 + 0x18);
    if ((ulong)(*(long *)(lVar1 + 0x18) - lVar2) < 4) goto LAB_003fd420;
    lVar6 = lVar2 + 4;
    uVar5 = (ulong)*(uint *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 0x28) + lVar2);
    *(long *)(param_1 + 0x18) = lVar6;
    FUN_001f719c(param_1,param_2 + 0x10);
    cVar4 = *(char *)(param_1 + 8);
  }
  else {
    if (*(char *)(param_1 + 8) != '\0') {
      return;
    }
    lVar6 = *(long *)(param_1 + 0x18);
    uVar5 = 0;
    FUN_001f719c(param_1,param_2 + 0x10);
    cVar4 = *(char *)(param_1 + 8);
  }
  if ((cVar4 != '\0') ||
     (FUN_001f719c(param_1,param_2 + 0x38), *(char *)(param_1 + 8) != '\0' || cVar3 != '\0')) {
    return;
  }
  uVar5 = lVar6 + uVar5;
  if ((*(ulong *)(param_1 + 0x18) <= uVar5) &&
     (uVar5 <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x18))) {
    *(ulong *)(param_1 + 0x18) = uVar5;
    return;
  }
LAB_003fd420:
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}


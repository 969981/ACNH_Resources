
void FUN_00316fcc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  cVar3 = *(char *)(param_1 + 0x69);
  *(undefined1 *)(param_2 + 8) = 0;
  if (cVar3 == '\0') {
    lVar5 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar5 + 0x18) == *(long *)(param_1 + 0x18)) {
      *(undefined1 *)(param_1 + 8) = 1;
      *(undefined1 *)(param_2 + 8) = 0;
      cVar4 = *(char *)(param_1 + 8);
    }
    else {
      *(undefined1 *)(param_2 + 8) =
           *(undefined1 *)
            (*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 0x28) + *(long *)(param_1 + 0x18));
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
      cVar4 = *(char *)(param_1 + 8);
    }
    if (cVar4 != '\0') {
      return;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(param_1 + 0x18);
    if ((ulong)(*(long *)(lVar5 + 0x18) - lVar2) < 4) goto LAB_00317138;
    lVar1 = lVar2 + 4;
    uVar7 = (ulong)*(uint *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 0x28) + lVar2);
    *(long *)(param_1 + 0x18) = lVar1;
    lVar5 = *(long *)(param_1 + 0x10);
    uVar6 = *(long *)(lVar5 + 0x18) - lVar1;
  }
  else {
    if (*(char *)(param_1 + 8) != '\0') {
      return;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    lVar1 = *(long *)(param_1 + 0x18);
    uVar7 = 0;
    uVar6 = *(long *)(lVar5 + 0x18) - lVar1;
  }
  if (uVar6 < 8) {
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined1 *)(param_1 + 8) = 1;
    return;
  }
  *(undefined8 *)(param_2 + 0x10) =
       *(undefined8 *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 0x28) + lVar1);
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 8;
  if ((*(char *)(param_1 + 8) != '\0') ||
     (FUN_00314890(param_1,param_2 + 0x18), *(char *)(param_1 + 8) != '\0' || cVar3 != '\0')) {
    return;
  }
  uVar7 = lVar1 + uVar7;
  if ((*(ulong *)(param_1 + 0x18) <= uVar7) &&
     (uVar7 <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x18))) {
    *(ulong *)(param_1 + 0x18) = uVar7;
    return;
  }
LAB_00317138:
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}


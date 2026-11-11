
void FUN_00400cdc(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
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
    lVar1 = *(long *)(param_1 + 0x18);
    if ((ulong)(*(long *)(lVar5 + 0x18) - lVar1) < 4) goto LAB_00400e7c;
    lVar7 = lVar1 + 4;
    uVar6 = (ulong)*(uint *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 0x28) + lVar1);
    *(long *)(param_1 + 0x18) = lVar7;
    lVar5 = *(long *)(param_1 + 0x10);
    if (3 < (ulong)(*(long *)(lVar5 + 0x18) - lVar7)) goto LAB_00400d54;
LAB_00400de4:
    *(undefined1 *)(param_1 + 8) = 1;
    *(undefined4 *)(param_2 + 0xc) = 0;
    cVar4 = *(char *)(param_1 + 8);
  }
  else {
    if (*(char *)(param_1 + 8) != '\0') {
      return;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    lVar7 = *(long *)(param_1 + 0x18);
    uVar6 = 0;
    if ((ulong)(*(long *)(lVar5 + 0x18) - lVar7) < 4) goto LAB_00400de4;
LAB_00400d54:
    uVar2 = *(undefined4 *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 0x28) + lVar7);
    *(long *)(param_1 + 0x18) = lVar7 + 4;
    *(undefined4 *)(param_2 + 0xc) = uVar2;
    cVar4 = *(char *)(param_1 + 8);
  }
  if ((cVar4 == '\0') && (FUN_00400eb0(param_1,param_2 + 0x10), *(char *)(param_1 + 8) == '\0')) {
    lVar5 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar5 + 0x18) == *(long *)(param_1 + 0x18)) {
      *(undefined1 *)(param_1 + 8) = 1;
      *(undefined1 *)(param_2 + 0x28) = 0;
    }
    else {
      *(undefined1 *)(param_2 + 0x28) =
           *(undefined1 *)
            (*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 0x28) + *(long *)(param_1 + 0x18));
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
    }
    if (*(char *)(param_1 + 8) == '\0' && cVar3 == '\0') {
      uVar6 = lVar7 + uVar6;
      if ((*(ulong *)(param_1 + 0x18) <= uVar6) &&
         (uVar6 <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x18))) {
        *(ulong *)(param_1 + 0x18) = uVar6;
        return;
      }
LAB_00400e7c:
      *(undefined1 *)(param_1 + 8) = 1;
      return;
    }
  }
  return;
}


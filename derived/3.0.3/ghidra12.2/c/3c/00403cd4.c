
void FUN_00403cd4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 local_38;
  
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
    lVar2 = *(long *)(param_1 + 0x10);
    lVar1 = *(long *)(param_1 + 0x18);
    if ((ulong)(*(long *)(lVar2 + 0x18) - lVar1) < 4) goto LAB_00403ed0;
    lVar10 = lVar1 + 4;
    uVar9 = (ulong)*(uint *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 0x28) + lVar1);
    *(long *)(param_1 + 0x18) = lVar10;
    FUN_0019761c(param_1,param_2 + 9);
    cVar4 = *(char *)(param_1 + 8);
  }
  else {
    if (*(char *)(param_1 + 8) != '\0') {
      return;
    }
    lVar10 = *(long *)(param_1 + 0x18);
    uVar9 = 0;
    FUN_0019761c(param_1,param_2 + 9);
    cVar4 = *(char *)(param_1 + 8);
  }
  if (cVar4 == '\0') {
    lVar2 = *(long *)(param_1 + 0x10);
    if ((ulong)(*(long *)(lVar2 + 0x18) - *(long *)(param_1 + 0x18)) < 8) {
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined1 *)(param_1 + 8) = 1;
      return;
    }
    lVar6 = *(long *)(lVar2 + 0x10);
    *(undefined8 *)(param_2 + 0x10) =
         *(undefined8 *)(lVar6 + *(long *)(lVar2 + 0x28) + *(long *)(param_1 + 0x18));
    lVar7 = *(long *)(param_1 + 0x18);
    lVar8 = *(long *)(lVar2 + 0x18);
    lVar1 = lVar7 + 8;
    *(long *)(param_1 + 0x18) = lVar1;
    if ((ulong)(lVar8 - lVar1) < 4) {
      uVar5 = 0;
      *(undefined1 *)(param_1 + 8) = 1;
    }
    else {
      uVar5 = *(undefined4 *)(lVar6 + *(long *)(lVar2 + 0x28) + lVar1);
      *(long *)(param_1 + 0x18) = lVar7 + 0xc;
    }
    *(undefined4 *)(param_2 + 0x18) = uVar5;
    if (*(char *)(param_1 + 8) == '\0') {
      lVar2 = *(long *)(param_1 + 0x10);
      lVar1 = *(long *)(param_1 + 0x18);
      if ((ulong)(*(long *)(lVar2 + 0x18) - lVar1) < 8) {
        local_38 = 0;
        *(undefined1 *)(param_1 + 8) = 1;
      }
      else {
        local_38 = *(undefined8 *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 0x28) + lVar1);
        *(long *)(param_1 + 0x18) = lVar1 + 8;
      }
      FUN_001865b0(param_2 + 0x20,&local_38);
      if (*(char *)(param_1 + 8) == '\0' && cVar3 == '\0') {
        uVar9 = lVar10 + uVar9;
        if ((*(ulong *)(param_1 + 0x18) <= uVar9) &&
           (uVar9 <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x18))) {
          *(ulong *)(param_1 + 0x18) = uVar9;
          return;
        }
LAB_00403ed0:
        *(undefined1 *)(param_1 + 8) = 1;
        return;
      }
    }
  }
  return;
}


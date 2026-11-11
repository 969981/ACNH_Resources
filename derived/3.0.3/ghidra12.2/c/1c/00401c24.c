
void FUN_00401c24(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
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
    lVar8 = *(long *)(param_1 + 0x10);
    lVar5 = *(long *)(param_1 + 0x18);
    if ((ulong)(*(long *)(lVar8 + 0x18) - lVar5) < 4) goto LAB_00401e5c;
    uVar4 = (ulong)*(uint *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 0x28) + lVar5);
    lVar5 = lVar5 + 4;
    *(long *)(param_1 + 0x18) = lVar5;
    lVar8 = *(long *)(param_1 + 0x10);
    if (3 < (ulong)(*(long *)(lVar8 + 0x18) - lVar5)) goto LAB_00401c7c;
LAB_00401d0c:
    *(undefined1 *)(param_1 + 8) = 1;
    *(undefined4 *)(param_2 + 0xc) = 0;
    cVar3 = *(char *)(param_1 + 8);
  }
  else {
    if (*(char *)(param_1 + 8) != '\0') {
      return;
    }
    lVar8 = *(long *)(param_1 + 0x10);
    lVar5 = *(long *)(param_1 + 0x18);
    uVar4 = 0;
    if ((ulong)(*(long *)(lVar8 + 0x18) - lVar5) < 4) goto LAB_00401d0c;
LAB_00401c7c:
    uVar7 = *(undefined4 *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 0x28) + lVar5);
    *(long *)(param_1 + 0x18) = lVar5 + 4;
    *(undefined4 *)(param_2 + 0xc) = uVar7;
    cVar3 = *(char *)(param_1 + 8);
  }
  if (cVar3 == '\0') {
    lVar8 = *(long *)(param_1 + 0x10);
    if ((ulong)(*(long *)(lVar8 + 0x18) - *(long *)(param_1 + 0x18)) < 8) {
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined1 *)(param_1 + 8) = 1;
      return;
    }
    lVar9 = *(long *)(lVar8 + 0x10);
    *(undefined8 *)(param_2 + 0x10) =
         *(undefined8 *)(lVar9 + *(long *)(lVar8 + 0x28) + *(long *)(param_1 + 0x18));
    lVar10 = *(long *)(param_1 + 0x18);
    lVar11 = *(long *)(lVar8 + 0x18);
    lVar1 = lVar10 + 8;
    *(long *)(param_1 + 0x18) = lVar1;
    if ((ulong)(lVar11 - lVar1) < 4) {
      uVar7 = 0;
      *(undefined1 *)(param_1 + 8) = 1;
    }
    else {
      uVar7 = *(undefined4 *)(lVar9 + *(long *)(lVar8 + 0x28) + lVar1);
      *(long *)(param_1 + 0x18) = lVar10 + 0xc;
    }
    *(undefined4 *)(param_2 + 0x18) = uVar7;
    if (*(char *)(param_1 + 8) == '\0') {
      lVar8 = *(long *)(param_1 + 0x10);
      lVar1 = *(long *)(param_1 + 0x18);
      if ((ulong)(*(long *)(lVar8 + 0x18) - lVar1) < 2) {
        uVar6 = 0;
        *(undefined1 *)(param_1 + 8) = 1;
      }
      else {
        uVar6 = *(undefined2 *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 0x28) + lVar1);
        *(long *)(param_1 + 0x18) = lVar1 + 2;
      }
      *(undefined2 *)(param_2 + 0x1c) = uVar6;
      if (*(char *)(param_1 + 8) == '\0') {
        lVar8 = *(long *)(param_1 + 0x10);
        lVar1 = *(long *)(param_1 + 0x18);
        if ((ulong)(*(long *)(lVar8 + 0x18) - lVar1) < 2) {
          uVar6 = 0;
          *(undefined1 *)(param_1 + 8) = 1;
        }
        else {
          uVar6 = *(undefined2 *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 0x28) + lVar1);
          *(long *)(param_1 + 0x18) = lVar1 + 2;
        }
        *(undefined2 *)(param_2 + 0x1e) = uVar6;
        if (*(char *)(param_1 + 8) == '\0' && cVar2 == '\0') {
          uVar4 = lVar5 + uVar4;
          if ((*(ulong *)(param_1 + 0x18) <= uVar4) &&
             (uVar4 <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x18))) {
            *(ulong *)(param_1 + 0x18) = uVar4;
            return;
          }
LAB_00401e5c:
          *(undefined1 *)(param_1 + 8) = 1;
          return;
        }
      }
    }
  }
  return;
}


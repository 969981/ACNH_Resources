
void FUN_003fd44c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  
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
    if ((ulong)(*(long *)(lVar1 + 0x18) - lVar2) < 4) goto LAB_003fd634;
    lVar10 = lVar2 + 4;
    uVar9 = (ulong)*(uint *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 0x28) + lVar2);
    *(long *)(param_1 + 0x18) = lVar10;
    FUN_001f719c(param_1,param_2 + 0x10);
    cVar5 = *(char *)(param_1 + 8);
  }
  else {
    if (*(char *)(param_1 + 8) != '\0') {
      return;
    }
    lVar10 = *(long *)(param_1 + 0x18);
    uVar9 = 0;
    FUN_001f719c(param_1,param_2 + 0x10);
    cVar5 = *(char *)(param_1 + 8);
  }
  if ((cVar5 == '\0') && (FUN_003fd670(param_1,param_2 + 0x38), *(char *)(param_1 + 8) == '\0')) {
    lVar1 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(param_1 + 0x18);
    if ((ulong)(*(long *)(lVar1 + 0x18) - lVar2) < 4) {
      uVar7 = 0;
      *(undefined1 *)(param_1 + 8) = 1;
    }
    else {
      uVar7 = *(undefined4 *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 0x28) + lVar2);
      *(long *)(param_1 + 0x18) = lVar2 + 4;
    }
    *(undefined4 *)(param_2 + 0x50) = uVar7;
    if (*(char *)(param_1 + 8) == '\0') {
      puVar8 = (undefined8 *)(param_2 + 0x58);
      *(undefined8 *)(param_2 + 0x60) = *puVar8;
      lVar1 = *(long *)(param_1 + 0x10);
      lVar2 = *(long *)(param_1 + 0x18);
      if ((ulong)(*(long *)(lVar1 + 0x18) - lVar2) < 4) {
        *(undefined1 *)(param_1 + 8) = 1;
      }
      else {
        iVar3 = *(int *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 0x28) + lVar2);
        *(long *)(param_1 + 0x18) = lVar2 + 4;
        if (iVar3 != 0) {
          FUN_001a3250(puVar8,iVar3);
          uVar6 = FUN_00197494(param_1,*puVar8,iVar3);
          if ((uVar6 & 1) == 0) {
            *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_2 + 0x58);
          }
        }
      }
      if (*(char *)(param_1 + 8) == '\0' && cVar4 == '\0') {
        uVar9 = lVar10 + uVar9;
        if ((*(ulong *)(param_1 + 0x18) <= uVar9) &&
           (uVar9 <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x18))) {
          *(ulong *)(param_1 + 0x18) = uVar9;
          return;
        }
LAB_003fd634:
        *(undefined1 *)(param_1 + 8) = 1;
        return;
      }
    }
  }
  return;
}


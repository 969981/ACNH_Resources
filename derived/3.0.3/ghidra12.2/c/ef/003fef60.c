
void FUN_003fef60(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
  cVar4 = *(char *)(param_1 + 0x69);
  *(undefined1 *)(param_2 + 8) = 0;
  if (cVar4 == '\0') {
    lVar6 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar6 + 0x18) == *(long *)(param_1 + 0x18)) {
      *(undefined1 *)(param_1 + 8) = 1;
      *(undefined1 *)(param_2 + 8) = 0;
      cVar5 = *(char *)(param_1 + 8);
    }
    else {
      *(undefined1 *)(param_2 + 8) =
           *(undefined1 *)
            (*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 0x28) + *(long *)(param_1 + 0x18));
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
      cVar5 = *(char *)(param_1 + 8);
    }
    if (cVar5 != '\0') {
      return;
    }
    lVar6 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(param_1 + 0x18);
    if ((ulong)(*(long *)(lVar6 + 0x18) - lVar2) < 4) goto LAB_003ff168;
    lVar1 = lVar2 + 4;
    uVar9 = (ulong)*(uint *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 0x28) + lVar2);
    *(long *)(param_1 + 0x18) = lVar1;
    lVar6 = *(long *)(param_1 + 0x10);
    uVar7 = *(long *)(lVar6 + 0x18) - lVar1;
  }
  else {
    if (*(char *)(param_1 + 8) != '\0') {
      return;
    }
    lVar6 = *(long *)(param_1 + 0x10);
    lVar1 = *(long *)(param_1 + 0x18);
    uVar9 = 0;
    uVar7 = *(long *)(lVar6 + 0x18) - lVar1;
  }
  if (uVar7 < 8) {
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined1 *)(param_1 + 8) = 1;
    return;
  }
  *(undefined8 *)(param_2 + 0x10) =
       *(undefined8 *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 0x28) + lVar1);
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 8;
  if ((((*(char *)(param_1 + 8) == '\0') &&
       (FUN_001f719c(param_1,param_2 + 0x18), *(char *)(param_1 + 8) == '\0')) &&
      (FUN_003fd670(param_1,param_2 + 0x40), *(char *)(param_1 + 8) == '\0')) &&
     (FUN_003fd670(param_1,param_2 + 0x58), *(char *)(param_1 + 8) == '\0')) {
    puVar8 = (undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_2 + 0x78) = *puVar8;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(param_1 + 0x18);
    if ((ulong)(*(long *)(lVar6 + 0x18) - lVar2) < 4) {
      *(undefined1 *)(param_1 + 8) = 1;
    }
    else {
      iVar3 = *(int *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 0x28) + lVar2);
      *(long *)(param_1 + 0x18) = lVar2 + 4;
      if (iVar3 != 0) {
        FUN_001a3250(puVar8,iVar3);
        uVar7 = FUN_00197494(param_1,*puVar8,iVar3);
        if ((uVar7 & 1) == 0) {
          *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_2 + 0x70);
        }
      }
    }
    if (*(char *)(param_1 + 8) == '\0' && cVar4 == '\0') {
      uVar9 = lVar1 + uVar9;
      if ((*(ulong *)(param_1 + 0x18) <= uVar9) &&
         (uVar9 <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x18))) {
        *(ulong *)(param_1 + 0x18) = uVar9;
        return;
      }
LAB_003ff168:
      *(undefined1 *)(param_1 + 8) = 1;
      return;
    }
  }
  return;
}


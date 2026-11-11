
void FUN_003fd980(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  
  cVar5 = *(char *)(param_1 + 0x69);
  *(undefined1 *)(param_2 + 8) = 0;
  if (cVar5 == '\0') {
    lVar2 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar2 + 0x18) == *(long *)(param_1 + 0x18)) {
      *(undefined1 *)(param_1 + 8) = 1;
      *(undefined1 *)(param_2 + 8) = 0;
      cVar6 = *(char *)(param_1 + 8);
    }
    else {
      *(undefined1 *)(param_2 + 8) =
           *(undefined1 *)
            (*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 0x28) + *(long *)(param_1 + 0x18));
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
      cVar6 = *(char *)(param_1 + 8);
    }
    if (cVar6 != '\0') {
      return;
    }
    lVar2 = *(long *)(param_1 + 0x10);
    lVar3 = *(long *)(param_1 + 0x18);
    if ((ulong)(*(long *)(lVar2 + 0x18) - lVar3) < 4) goto LAB_003fdba4;
    lVar11 = lVar3 + 4;
    uVar10 = (ulong)*(uint *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 0x28) + lVar3);
    *(long *)(param_1 + 0x18) = lVar11;
    FUN_001f719c(param_1,param_2 + 0x10);
    cVar6 = *(char *)(param_1 + 8);
  }
  else {
    if (*(char *)(param_1 + 8) != '\0') {
      return;
    }
    lVar11 = *(long *)(param_1 + 0x18);
    uVar10 = 0;
    FUN_001f719c(param_1,param_2 + 0x10);
    cVar6 = *(char *)(param_1 + 8);
  }
  if ((cVar6 == '\0') && (FUN_003fd670(param_1,param_2 + 0x38), *(char *)(param_1 + 8) == '\0')) {
    lVar2 = *(long *)(param_1 + 0x10);
    lVar3 = *(long *)(param_1 + 0x18);
    if ((ulong)(*(long *)(lVar2 + 0x18) - lVar3) < 4) {
      uVar8 = 0;
      *(undefined1 *)(param_1 + 8) = 1;
    }
    else {
      uVar8 = *(undefined4 *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 0x28) + lVar3);
      *(long *)(param_1 + 0x18) = lVar3 + 4;
    }
    *(undefined4 *)(param_2 + 0x50) = uVar8;
    if (*(char *)(param_1 + 8) == '\0') {
      puVar9 = (undefined8 *)(param_2 + 0x58);
      *(undefined8 *)(param_2 + 0x60) = *puVar9;
      lVar2 = *(long *)(param_1 + 0x10);
      lVar3 = *(long *)(param_1 + 0x18);
      if ((ulong)(*(long *)(lVar2 + 0x18) - lVar3) < 4) {
LAB_003fdba4:
        *(undefined1 *)(param_1 + 8) = 1;
        return;
      }
      iVar4 = *(int *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 0x28) + lVar3);
      *(long *)(param_1 + 0x18) = lVar3 + 4;
      if (iVar4 != 0) {
        FUN_001a3250(puVar9,iVar4);
        uVar7 = FUN_00197494(param_1,*puVar9,iVar4);
        if ((uVar7 & 1) == 0) {
          *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_2 + 0x58);
        }
      }
      if (*(char *)(param_1 + 8) == '\0') {
        lVar2 = *(long *)(param_1 + 0x10);
        bVar1 = (ulong)(*(long *)(lVar2 + 0x18) - *(long *)(param_1 + 0x18)) < 8;
        if (bVar1) {
          *(undefined8 *)(param_2 + 0x70) = 0;
          *(undefined1 *)(param_1 + 8) = 1;
        }
        else {
          *(undefined8 *)(param_2 + 0x70) =
               *(undefined8 *)
                (*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 0x28) + *(long *)(param_1 + 0x18));
          *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 8;
        }
        if (!bVar1 && cVar5 == '\0') {
          uVar10 = lVar11 + uVar10;
          if ((*(ulong *)(param_1 + 0x18) <= uVar10) && (uVar10 <= *(ulong *)(lVar2 + 0x18))) {
            *(ulong *)(param_1 + 0x18) = uVar10;
            return;
          }
          goto LAB_003fdba4;
        }
      }
    }
  }
  return;
}


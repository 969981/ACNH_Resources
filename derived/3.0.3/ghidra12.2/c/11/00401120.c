
void FUN_00401120(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  
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
    if ((ulong)(*(long *)(lVar1 + 0x18) - lVar2) < 4) goto LAB_004012d4;
    lVar9 = lVar2 + 4;
    uVar8 = (ulong)*(uint *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 0x28) + lVar2);
    *(long *)(param_1 + 0x18) = lVar9;
    FUN_001f719c(param_1,param_2 + 0x10);
    cVar5 = *(char *)(param_1 + 8);
  }
  else {
    if (*(char *)(param_1 + 8) != '\0') {
      return;
    }
    lVar9 = *(long *)(param_1 + 0x18);
    uVar8 = 0;
    FUN_001f719c(param_1,param_2 + 0x10);
    cVar5 = *(char *)(param_1 + 8);
  }
  if (((cVar5 == '\0') && (FUN_001f719c(param_1,param_2 + 0x38), *(char *)(param_1 + 8) == '\0')) &&
     (FUN_001f719c(param_1,param_2 + 0x60), *(char *)(param_1 + 8) == '\0')) {
    puVar7 = (undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(param_2 + 0x90) = *puVar7;
    lVar1 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(param_1 + 0x18);
    if ((ulong)(*(long *)(lVar1 + 0x18) - lVar2) < 4) {
      *(undefined1 *)(param_1 + 8) = 1;
    }
    else {
      iVar3 = *(int *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 0x28) + lVar2);
      *(long *)(param_1 + 0x18) = lVar2 + 4;
      if (iVar3 != 0) {
        FUN_001a3250(puVar7,iVar3);
        uVar6 = FUN_00197494(param_1,*puVar7,iVar3);
        if ((uVar6 & 1) == 0) {
          *(undefined8 *)(param_2 + 0x90) = *(undefined8 *)(param_2 + 0x88);
        }
      }
    }
    if (*(char *)(param_1 + 8) == '\0' && cVar4 == '\0') {
      uVar8 = lVar9 + uVar8;
      if ((*(ulong *)(param_1 + 0x18) <= uVar8) &&
         (uVar8 <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x18))) {
        *(ulong *)(param_1 + 0x18) = uVar8;
        return;
      }
LAB_004012d4:
      *(undefined1 *)(param_1 + 8) = 1;
      return;
    }
  }
  return;
}


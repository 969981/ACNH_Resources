
void FUN_003fed2c(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  
  cVar4 = *(char *)(param_1 + 0x69);
  *(undefined1 *)(param_2 + 8) = 0;
  if (cVar4 == '\0') {
    lVar7 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar7 + 0x18) == *(long *)(param_1 + 0x18)) {
      *(undefined1 *)(param_1 + 8) = 1;
      *(undefined1 *)(param_2 + 8) = 0;
      cVar5 = *(char *)(param_1 + 8);
    }
    else {
      *(undefined1 *)(param_2 + 8) =
           *(undefined1 *)
            (*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 0x28) + *(long *)(param_1 + 0x18));
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
      cVar5 = *(char *)(param_1 + 8);
    }
    if (cVar5 != '\0') {
      return;
    }
    lVar7 = *(long *)(param_1 + 0x10);
    lVar1 = *(long *)(param_1 + 0x18);
    if ((ulong)(*(long *)(lVar7 + 0x18) - lVar1) < 4) goto LAB_003fef2c;
    lVar10 = lVar1 + 4;
    uVar9 = (ulong)*(uint *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 0x28) + lVar1);
    *(long *)(param_1 + 0x18) = lVar10;
    lVar7 = *(long *)(param_1 + 0x10);
    if (3 < (ulong)(*(long *)(lVar7 + 0x18) - lVar10)) goto LAB_003fedac;
LAB_003fee3c:
    *(undefined1 *)(param_1 + 8) = 1;
    *(undefined4 *)(param_2 + 0xc) = 0;
    cVar5 = *(char *)(param_1 + 8);
  }
  else {
    if (*(char *)(param_1 + 8) != '\0') {
      return;
    }
    lVar7 = *(long *)(param_1 + 0x10);
    lVar10 = *(long *)(param_1 + 0x18);
    uVar9 = 0;
    if ((ulong)(*(long *)(lVar7 + 0x18) - lVar10) < 4) goto LAB_003fee3c;
LAB_003fedac:
    uVar2 = *(undefined4 *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 0x28) + lVar10);
    *(long *)(param_1 + 0x18) = lVar10 + 4;
    *(undefined4 *)(param_2 + 0xc) = uVar2;
    cVar5 = *(char *)(param_1 + 8);
  }
  if ((((cVar5 == '\0') && (FUN_001f719c(param_1,param_2 + 0x10), *(char *)(param_1 + 8) == '\0'))
      && (FUN_003fd670(param_1,param_2 + 0x38), *(char *)(param_1 + 8) == '\0')) &&
     (FUN_003fd670(param_1,param_2 + 0x50), *(char *)(param_1 + 8) == '\0')) {
    puVar8 = (undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_2 + 0x70) = *puVar8;
    lVar7 = *(long *)(param_1 + 0x10);
    lVar1 = *(long *)(param_1 + 0x18);
    if ((ulong)(*(long *)(lVar7 + 0x18) - lVar1) < 4) {
      *(undefined1 *)(param_1 + 8) = 1;
    }
    else {
      iVar3 = *(int *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 0x28) + lVar1);
      *(long *)(param_1 + 0x18) = lVar1 + 4;
      if (iVar3 != 0) {
        FUN_001a3250(puVar8,iVar3);
        uVar6 = FUN_00197494(param_1,*puVar8,iVar3);
        if ((uVar6 & 1) == 0) {
          *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_2 + 0x68);
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
LAB_003fef2c:
      *(undefined1 *)(param_1 + 8) = 1;
      return;
    }
  }
  return;
}


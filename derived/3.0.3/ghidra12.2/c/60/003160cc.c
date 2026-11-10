
void FUN_003160cc(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  FUN_0031a6a0();
  if (*(char *)(param_1 + 8) != '\0') {
    return;
  }
  cVar2 = *(char *)(param_1 + 0x69);
  *(undefined1 *)(param_2 + 0x60) = 0;
  if (cVar2 == '\0') {
    lVar5 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar5 + 0x18) == *(long *)(param_1 + 0x18)) {
      *(undefined1 *)(param_1 + 8) = 1;
      *(undefined1 *)(param_2 + 0x60) = 0;
      cVar3 = *(char *)(param_1 + 8);
    }
    else {
      *(undefined1 *)(param_2 + 0x60) =
           *(undefined1 *)
            (*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 0x28) + *(long *)(param_1 + 0x18));
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
      cVar3 = *(char *)(param_1 + 8);
    }
    if (cVar3 != '\0') {
      return;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    lVar1 = *(long *)(param_1 + 0x18);
    lVar6 = *(long *)(lVar5 + 0x18);
    if ((ulong)(lVar6 - lVar1) < 4) goto LAB_00316300;
    lVar8 = lVar1 + 4;
    uVar7 = (ulong)*(uint *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 0x28) + lVar1);
    *(long *)(param_1 + 0x18) = lVar8;
    if (3 < (ulong)(lVar6 - lVar8)) goto LAB_00316120;
LAB_003161d0:
    *(undefined1 *)(param_1 + 8) = 1;
    *(undefined4 *)(param_2 + 100) = 0;
    cVar3 = *(char *)(param_1 + 8);
  }
  else {
    lVar5 = *(long *)(param_1 + 0x10);
    lVar8 = *(long *)(param_1 + 0x18);
    uVar7 = 0;
    if ((ulong)(*(long *)(lVar5 + 0x18) - lVar8) < 4) goto LAB_003161d0;
LAB_00316120:
    uVar4 = *(undefined4 *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 0x28) + lVar8);
    *(long *)(param_1 + 0x18) = lVar8 + 4;
    *(undefined4 *)(param_2 + 100) = uVar4;
    cVar3 = *(char *)(param_1 + 8);
  }
  if (((((cVar3 == '\0') && (FUN_001f719c(param_1,param_2 + 0x68), *(char *)(param_1 + 8) == '\0'))
       && (FUN_00314c30(param_1,param_2 + 0x90), *(char *)(param_1 + 8) == '\0')) &&
      ((FUN_00201ac8(param_1,param_2 + 0xa8), *(char *)(param_1 + 8) == '\0' &&
       (FUN_001feb30(param_1,param_2 + 0xc0), *(char *)(param_1 + 8) == '\0')))) &&
     (FUN_001feb30(param_1,param_2 + 200), *(char *)(param_1 + 8) == '\0')) {
    lVar5 = *(long *)(param_1 + 0x10);
    lVar1 = *(long *)(param_1 + 0x18);
    if ((ulong)(*(long *)(lVar5 + 0x18) - lVar1) < 4) {
      uVar4 = 0;
      *(undefined1 *)(param_1 + 8) = 1;
    }
    else {
      uVar4 = *(undefined4 *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 0x28) + lVar1);
      *(long *)(param_1 + 0x18) = lVar1 + 4;
    }
    *(undefined4 *)(param_2 + 0xd0) = uVar4;
    if (*(char *)(param_1 + 8) == '\0') {
      lVar5 = *(long *)(param_1 + 0x10);
      lVar1 = *(long *)(param_1 + 0x18);
      if ((ulong)(*(long *)(lVar5 + 0x18) - lVar1) < 4) {
        uVar4 = 0;
        *(undefined1 *)(param_1 + 8) = 1;
      }
      else {
        uVar4 = *(undefined4 *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 0x28) + lVar1);
        *(long *)(param_1 + 0x18) = lVar1 + 4;
      }
      *(undefined4 *)(param_2 + 0xd4) = uVar4;
      if (*(char *)(param_1 + 8) == '\0' && cVar2 == '\0') {
        uVar7 = lVar8 + uVar7;
        if ((*(ulong *)(param_1 + 0x18) <= uVar7) &&
           (uVar7 <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x18))) {
          *(ulong *)(param_1 + 0x18) = uVar7;
          return;
        }
LAB_00316300:
        *(undefined1 *)(param_1 + 8) = 1;
        return;
      }
    }
  }
  return;
}


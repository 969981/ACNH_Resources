
void FUN_001fe7cc(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  cVar2 = *(char *)(param_1 + 0x69);
  *(undefined1 *)(param_2 + 8) = 0;
  if (cVar2 == '\0') {
    lVar5 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar5 + 0x18) == *(long *)(param_1 + 0x18)) {
      *(undefined1 *)(param_1 + 8) = 1;
      *(undefined1 *)(param_2 + 8) = 0;
      cVar2 = *(char *)(param_1 + 8);
    }
    else {
      *(undefined1 *)(param_2 + 8) =
           *(undefined1 *)
            (*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 0x28) + *(long *)(param_1 + 0x18));
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
      cVar2 = *(char *)(param_1 + 8);
    }
    if (cVar2 != '\0') {
      return;
    }
    if ((ulong)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) - *(long *)(param_1 + 0x18)) < 4)
    goto LAB_001feb04;
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 4;
  }
  else if (*(char *)(param_1 + 8) != '\0') {
    return;
  }
  cVar2 = *(char *)(param_1 + 0x69);
  *(undefined1 *)(param_2 + 9) = 0;
  if (cVar2 == '\0') {
    lVar5 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar5 + 0x18) == *(long *)(param_1 + 0x18)) {
      *(undefined1 *)(param_1 + 8) = 1;
      *(undefined1 *)(param_2 + 9) = 0;
      cVar3 = *(char *)(param_1 + 8);
    }
    else {
      *(undefined1 *)(param_2 + 9) =
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
    if ((ulong)(lVar6 - lVar1) < 4) goto LAB_001feb04;
    lVar8 = lVar1 + 4;
    uVar7 = (ulong)*(uint *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 0x28) + lVar1);
    *(long *)(param_1 + 0x18) = lVar8;
    if (3 < (ulong)(lVar6 - lVar8)) goto LAB_001fe894;
LAB_001fe944:
    *(undefined1 *)(param_1 + 8) = 1;
    *(undefined4 *)(param_2 + 0xc) = 0;
    cVar3 = *(char *)(param_1 + 8);
  }
  else {
    lVar5 = *(long *)(param_1 + 0x10);
    lVar8 = *(long *)(param_1 + 0x18);
    uVar7 = 0;
    if ((ulong)(*(long *)(lVar5 + 0x18) - lVar8) < 4) goto LAB_001fe944;
LAB_001fe894:
    uVar4 = *(undefined4 *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 0x28) + lVar8);
    *(long *)(param_1 + 0x18) = lVar8 + 4;
    *(undefined4 *)(param_2 + 0xc) = uVar4;
    cVar3 = *(char *)(param_1 + 8);
  }
  if (cVar3 == '\0') {
    lVar5 = *(long *)(param_1 + 0x10);
    lVar1 = *(long *)(param_1 + 0x18);
    if ((ulong)(*(long *)(lVar5 + 0x18) - lVar1) < 4) {
      *(undefined1 *)(param_1 + 8) = 1;
      *(undefined4 *)(param_2 + 0x10) = 0;
      cVar3 = *(char *)(param_1 + 8);
    }
    else {
      uVar4 = *(undefined4 *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 0x28) + lVar1);
      *(long *)(param_1 + 0x18) = lVar1 + 4;
      *(undefined4 *)(param_2 + 0x10) = uVar4;
      cVar3 = *(char *)(param_1 + 8);
    }
    if (cVar3 == '\0') {
      lVar5 = *(long *)(param_1 + 0x10);
      if ((ulong)(*(long *)(lVar5 + 0x18) - *(long *)(param_1 + 0x18)) < 8) {
        *(undefined8 *)(param_2 + 0x18) = 0;
        *(undefined1 *)(param_1 + 8) = 1;
        return;
      }
      *(undefined8 *)(param_2 + 0x18) =
           *(undefined8 *)
            (*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 0x28) + *(long *)(param_1 + 0x18));
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 8;
      FUN_001feb30(param_1,param_2 + 0x20);
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
        *(undefined4 *)(param_2 + 0x28) = uVar4;
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
          *(undefined4 *)(param_2 + 0x2c) = uVar4;
          if ((((*(char *)(param_1 + 8) == '\0') &&
               (FUN_001f719c(param_1,param_2 + 0x30), *(char *)(param_1 + 8) == '\0')) &&
              (FUN_001f719c(param_1,param_2 + 0x58), *(char *)(param_1 + 8) == '\0')) &&
             (FUN_001fd914(param_1,param_2 + 0x80), *(char *)(param_1 + 8) == '\0' && cVar2 == '\0')
             ) {
            uVar7 = lVar8 + uVar7;
            if ((*(ulong *)(param_1 + 0x18) <= uVar7) &&
               (uVar7 <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x18))) {
              *(ulong *)(param_1 + 0x18) = uVar7;
              return;
            }
LAB_001feb04:
            *(undefined1 *)(param_1 + 8) = 1;
            return;
          }
        }
      }
    }
  }
  return;
}


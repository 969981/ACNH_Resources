
void FUN_00314890(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  
  FUN_0031a6a0();
  if (*(char *)(param_1 + 8) != '\0') {
    return;
  }
  cVar3 = *(char *)(param_1 + 0x69);
  *(undefined1 *)(param_2 + 0x60) = 0;
  if (cVar3 == '\0') {
    lVar6 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar6 + 0x18) == *(long *)(param_1 + 0x18)) {
      *(undefined1 *)(param_1 + 8) = 1;
      *(undefined1 *)(param_2 + 0x60) = 0;
      cVar4 = *(char *)(param_1 + 8);
    }
    else {
      *(undefined1 *)(param_2 + 0x60) =
           *(undefined1 *)
            (*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 0x28) + *(long *)(param_1 + 0x18));
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
      cVar4 = *(char *)(param_1 + 8);
    }
    if (cVar4 != '\0') {
      return;
    }
    lVar6 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(param_1 + 0x18);
    lVar7 = *(long *)(lVar6 + 0x18);
    if ((ulong)(lVar7 - lVar2) < 4) goto LAB_00314c00;
    lVar9 = lVar2 + 4;
    uVar8 = *(uint *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 0x28) + lVar2);
    *(long *)(param_1 + 0x18) = lVar9;
    if (3 < (ulong)(lVar7 - lVar9)) goto LAB_003148e4;
LAB_00314994:
    *(undefined1 *)(param_1 + 8) = 1;
    *(undefined4 *)(param_2 + 100) = 0;
    cVar4 = *(char *)(param_1 + 8);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
    lVar9 = *(long *)(param_1 + 0x18);
    uVar8 = 0;
    if ((ulong)(*(long *)(lVar6 + 0x18) - lVar9) < 4) goto LAB_00314994;
LAB_003148e4:
    uVar5 = *(undefined4 *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 0x28) + lVar9);
    *(long *)(param_1 + 0x18) = lVar9 + 4;
    *(undefined4 *)(param_2 + 100) = uVar5;
    cVar4 = *(char *)(param_1 + 8);
  }
  if (((cVar4 == '\0') && (FUN_00314c30(param_1,param_2 + 0x68), *(char *)(param_1 + 8) == '\0')) &&
     (FUN_0019761c(param_1,param_2 + 0x80), *(char *)(param_1 + 8) == '\0')) {
    lVar6 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(param_1 + 0x18);
    if ((ulong)(*(long *)(lVar6 + 0x18) - lVar2) < 4) {
      uVar5 = 0;
      *(undefined1 *)(param_1 + 8) = 1;
    }
    else {
      uVar5 = *(undefined4 *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 0x28) + lVar2);
      *(long *)(param_1 + 0x18) = lVar2 + 4;
    }
    *(undefined4 *)(param_2 + 0x84) = uVar5;
    if ((*(char *)(param_1 + 8) == '\0') &&
       (FUN_00201ac8(param_1,param_2 + 0x88), *(char *)(param_1 + 8) == '\0')) {
      lVar6 = *(long *)(param_1 + 0x10);
      lVar2 = *(long *)(param_1 + 0x18);
      if ((ulong)(*(long *)(lVar6 + 0x18) - lVar2) < 4) {
        uVar5 = 0;
        *(undefined1 *)(param_1 + 8) = 1;
      }
      else {
        uVar5 = *(undefined4 *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 0x28) + lVar2);
        *(long *)(param_1 + 0x18) = lVar2 + 4;
      }
      *(undefined4 *)(param_2 + 0xa0) = uVar5;
      if (*(char *)(param_1 + 8) == '\0') {
        lVar6 = *(long *)(param_1 + 0x10);
        if (*(long *)(lVar6 + 0x18) == *(long *)(param_1 + 0x18)) {
          *(undefined1 *)(param_1 + 8) = 1;
          *(undefined1 *)(param_2 + 0xa4) = 0;
        }
        else {
          *(undefined1 *)(param_2 + 0xa4) =
               *(undefined1 *)
                (*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 0x28) + *(long *)(param_1 + 0x18));
          *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
        }
        if ((*(char *)(param_1 + 8) == '\0') &&
           (FUN_00201ac8(param_1,param_2 + 0xa8), *(char *)(param_1 + 8) == '\0')) {
          lVar6 = *(long *)(param_1 + 0x10);
          lVar2 = *(long *)(param_1 + 0x18);
          if ((ulong)(*(long *)(lVar6 + 0x18) - lVar2) < 4) {
            uVar5 = 0;
            *(undefined1 *)(param_1 + 8) = 1;
          }
          else {
            uVar5 = *(undefined4 *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 0x28) + lVar2);
            *(long *)(param_1 + 0x18) = lVar2 + 4;
          }
          *(undefined4 *)(param_2 + 0xc0) = uVar5;
          if ((((*(char *)(param_1 + 8) == '\0') &&
               (FUN_003150a8(param_1,param_2 + 200), *(char *)(param_1 + 8) == '\0')) &&
              (FUN_001feb30(param_1,param_2 + 0xf0), *(char *)(param_1 + 8) == '\0')) &&
             (FUN_001f719c(param_1,param_2 + 0xf8), *(char *)(param_1 + 8) == '\0')) {
            lVar6 = *(long *)(param_1 + 0x10);
            lVar2 = *(long *)(param_1 + 0x18);
            if ((ulong)(*(long *)(lVar6 + 0x18) - lVar2) < 4) {
              uVar5 = 0;
              *(undefined1 *)(param_1 + 8) = 1;
            }
            else {
              uVar5 = *(undefined4 *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 0x28) + lVar2);
              *(long *)(param_1 + 0x18) = lVar2 + 4;
            }
            *(undefined4 *)(param_2 + 0x120) = uVar5;
            if (((*(char *)(param_1 + 8) == '\0') &&
                (FUN_0019761c(param_1,param_2 + 0x124), *(char *)(param_1 + 8) == '\0')) &&
               ((FUN_0019761c(param_1,param_2 + 0x125), *(char *)(param_1 + 8) == '\0' &&
                (FUN_001f719c(param_1,param_2 + 0x128),
                *(char *)(param_1 + 8) == '\0' && cVar3 == '\0')))) {
              uVar1 = lVar9 + (ulong)uVar8;
              if ((*(ulong *)(param_1 + 0x18) <= uVar1) &&
                 (uVar1 <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x18))) {
                *(ulong *)(param_1 + 0x18) = uVar1;
                return;
              }
LAB_00314c00:
              *(undefined1 *)(param_1 + 8) = 1;
              return;
            }
          }
        }
      }
    }
  }
  return;
}


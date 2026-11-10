
void FUN_001ff044(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 local_48;
  
  cVar3 = *(char *)(param_1 + 0x69);
  *(undefined1 *)(param_2 + 8) = 0;
  if (cVar3 == '\0') {
    lVar5 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar5 + 0x18) == *(long *)(param_1 + 0x18)) {
      *(undefined1 *)(param_1 + 8) = 1;
      *(undefined1 *)(param_2 + 8) = 0;
      cVar4 = *(char *)(param_1 + 8);
    }
    else {
      *(undefined1 *)(param_2 + 8) =
           *(undefined1 *)
            (*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 0x28) + *(long *)(param_1 + 0x18));
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
      cVar4 = *(char *)(param_1 + 8);
    }
    if (cVar4 != '\0') {
      return;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    lVar1 = *(long *)(param_1 + 0x18);
    if ((ulong)(*(long *)(lVar5 + 0x18) - lVar1) < 4) goto LAB_001ff2a0;
    lVar2 = lVar1 + 4;
    uVar10 = (ulong)*(uint *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 0x28) + lVar1);
    *(long *)(param_1 + 0x18) = lVar2;
    lVar5 = *(long *)(param_1 + 0x10);
    uVar6 = *(long *)(lVar5 + 0x18) - lVar2;
  }
  else {
    if (*(char *)(param_1 + 8) != '\0') {
      return;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(param_1 + 0x18);
    uVar10 = 0;
    uVar6 = *(long *)(lVar5 + 0x18) - lVar2;
  }
  if (uVar6 < 8) {
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  else {
    lVar7 = *(long *)(lVar5 + 0x10);
    cVar4 = *(char *)(param_1 + 8);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(lVar7 + *(long *)(lVar5 + 0x28) + lVar2);
    lVar8 = *(long *)(param_1 + 0x18);
    lVar1 = lVar8 + 8;
    *(long *)(param_1 + 0x18) = lVar1;
    if (cVar4 != '\0') {
      return;
    }
    lVar9 = *(long *)(lVar5 + 0x18);
    if (3 < (ulong)(lVar9 - lVar1)) {
      uVar6 = (ulong)*(uint *)(lVar7 + *(long *)(lVar5 + 0x28) + lVar1);
      lVar8 = lVar8 + 0xc;
      *(long *)(param_1 + 0x18) = lVar8;
      if (uVar6 <= (ulong)(lVar9 - lVar8)) {
        lVar5 = FUN_001abe40(param_1);
        FUN_00193030(param_2 + 0x18,
                     *(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 0x28) + *(long *)(param_1 + 0x18),
                     uVar6,0xffffffffffffffff);
        uVar6 = *(long *)(param_1 + 0x18) + uVar6;
        if (uVar6 <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x18)) {
          *(ulong *)(param_1 + 0x18) = uVar6;
        }
        if ((*(char *)(param_1 + 8) == '\0') &&
           (FUN_001f7734(param_1,param_2 + 0x50), *(char *)(param_1 + 8) == '\0')) {
          lVar5 = *(long *)(param_1 + 0x10);
          lVar1 = *(long *)(param_1 + 0x18);
          if ((ulong)(*(long *)(lVar5 + 0x18) - lVar1) < 8) {
            local_48 = 0;
            *(undefined1 *)(param_1 + 8) = 1;
          }
          else {
            local_48 = *(undefined8 *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 0x28) + lVar1);
            *(long *)(param_1 + 0x18) = lVar1 + 8;
          }
          FUN_001865b0(param_2 + 0xc0,&local_48);
          if (((*(char *)(param_1 + 8) == '\0') &&
              (FUN_001f719c(param_1,param_2 + 200), *(char *)(param_1 + 8) == '\0')) &&
             (FUN_001f719c(param_1,param_2 + 0xf0), *(char *)(param_1 + 8) == '\0' && cVar3 == '\0')
             ) {
            uVar10 = lVar2 + uVar10;
            if ((*(ulong *)(param_1 + 0x18) <= uVar10) &&
               (uVar10 <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x18))) {
              *(ulong *)(param_1 + 0x18) = uVar10;
              return;
            }
            goto LAB_001ff2a0;
          }
        }
        return;
      }
    }
  }
LAB_001ff2a0:
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}


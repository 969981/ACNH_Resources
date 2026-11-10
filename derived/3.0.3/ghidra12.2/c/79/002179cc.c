
void FUN_002179cc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  
  FUN_001fe110();
  if (*(char *)(param_1 + 8) == '\0') {
    cVar3 = *(char *)(param_1 + 0x69);
    *(undefined1 *)(param_2 + 9) = 0;
    if (cVar3 == '\0') {
      lVar1 = *(long *)(param_1 + 0x10);
      if (*(long *)(lVar1 + 0x18) == *(long *)(param_1 + 0x18)) {
        *(undefined1 *)(param_1 + 8) = 1;
        *(undefined1 *)(param_2 + 9) = 0;
        cVar4 = *(char *)(param_1 + 8);
      }
      else {
        *(undefined1 *)(param_2 + 9) =
             *(undefined1 *)
              (*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 0x28) + *(long *)(param_1 + 0x18));
        *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
        cVar4 = *(char *)(param_1 + 8);
      }
      if (cVar4 != '\0') {
        return;
      }
      lVar1 = *(long *)(param_1 + 0x10);
      lVar2 = *(long *)(param_1 + 0x18);
      if ((ulong)(*(long *)(lVar1 + 0x18) - lVar2) < 4) goto LAB_00217bc0;
      lVar7 = lVar2 + 4;
      uVar6 = (ulong)*(uint *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 0x28) + lVar2);
      *(long *)(param_1 + 0x18) = lVar7;
      FUN_001f719c(param_1,param_2 + 0x10);
      cVar4 = *(char *)(param_1 + 8);
    }
    else {
      lVar7 = *(long *)(param_1 + 0x18);
      uVar6 = 0;
      FUN_001f719c(param_1,param_2 + 0x10);
      cVar4 = *(char *)(param_1 + 8);
    }
    if (cVar4 == '\0') {
      lVar1 = *(long *)(param_1 + 0x10);
      lVar2 = *(long *)(param_1 + 0x18);
      if ((ulong)(*(long *)(lVar1 + 0x18) - lVar2) < 4) {
        *(undefined1 *)(param_1 + 8) = 1;
        *(undefined4 *)(param_2 + 0x38) = 0;
        cVar4 = *(char *)(param_1 + 8);
      }
      else {
        uVar5 = *(undefined4 *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 0x28) + lVar2);
        *(long *)(param_1 + 0x18) = lVar2 + 4;
        *(undefined4 *)(param_2 + 0x38) = uVar5;
        cVar4 = *(char *)(param_1 + 8);
      }
      if (cVar4 == '\0') {
        lVar1 = *(long *)(param_1 + 0x10);
        if (*(long *)(lVar1 + 0x18) == *(long *)(param_1 + 0x18)) {
          *(undefined1 *)(param_1 + 8) = 1;
          *(undefined1 *)(param_2 + 0x3c) = 0;
        }
        else {
          *(undefined1 *)(param_2 + 0x3c) =
               *(undefined1 *)
                (*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 0x28) + *(long *)(param_1 + 0x18));
          *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
        }
        if (*(char *)(param_1 + 8) == '\0') {
          lVar1 = *(long *)(param_1 + 0x10);
          lVar2 = *(long *)(param_1 + 0x18);
          if ((ulong)(*(long *)(lVar1 + 0x18) - lVar2) < 4) {
            uVar5 = 0;
            *(undefined1 *)(param_1 + 8) = 1;
          }
          else {
            uVar5 = *(undefined4 *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 0x28) + lVar2);
            *(long *)(param_1 + 0x18) = lVar2 + 4;
          }
          *(undefined4 *)(param_2 + 0x40) = uVar5;
          if (*(char *)(param_1 + 8) == '\0' && cVar3 == '\0') {
            uVar6 = lVar7 + uVar6;
            if ((*(ulong *)(param_1 + 0x18) <= uVar6) &&
               (uVar6 <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x18))) {
              *(ulong *)(param_1 + 0x18) = uVar6;
              return;
            }
LAB_00217bc0:
            *(undefined1 *)(param_1 + 8) = 1;
            return;
          }
        }
      }
    }
  }
  return;
}



void FUN_0031a6a0(long param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  cVar4 = *(char *)(param_1 + 0x69);
  *(undefined1 *)(param_2 + 8) = 0;
  if (cVar4 == '\0') {
    lVar8 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar8 + 0x18) == *(long *)(param_1 + 0x18)) {
      *(undefined1 *)(param_1 + 8) = 1;
      *(undefined1 *)(param_2 + 8) = 0;
      cVar5 = *(char *)(param_1 + 8);
    }
    else {
      *(undefined1 *)(param_2 + 8) =
           *(undefined1 *)
            (*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 0x28) + *(long *)(param_1 + 0x18));
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
      cVar5 = *(char *)(param_1 + 8);
    }
    if (cVar5 != '\0') {
      return;
    }
    lVar8 = *(long *)(param_1 + 0x10);
    lVar10 = *(long *)(param_1 + 0x18);
    if ((ulong)(*(long *)(lVar8 + 0x18) - lVar10) < 4) {
      *(undefined1 *)(param_1 + 8) = 1;
      return;
    }
    lVar2 = lVar10 + 4;
    uVar3 = *(uint *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 0x28) + lVar10);
    *(long *)(param_1 + 0x18) = lVar2;
    lVar8 = *(long *)(param_1 + 0x10);
    uVar9 = *(long *)(lVar8 + 0x18) - lVar2;
  }
  else {
    if (*(char *)(param_1 + 8) != '\0') {
      return;
    }
    lVar8 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(param_1 + 0x18);
    uVar9 = *(long *)(lVar8 + 0x18) - lVar2;
    uVar3 = 0;
  }
  if (uVar9 < 4) {
    *(undefined1 *)(param_1 + 8) = 1;
    *(undefined4 *)(param_2 + 0xc) = 0;
    cVar5 = *(char *)(param_1 + 8);
  }
  else {
    uVar7 = *(undefined4 *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 0x28) + lVar2);
    *(long *)(param_1 + 0x18) = lVar2 + 4;
    *(undefined4 *)(param_2 + 0xc) = uVar7;
    cVar5 = *(char *)(param_1 + 8);
  }
  if (cVar5 == '\0') {
    lVar8 = *(long *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x18);
    if (*(long *)(lVar8 + 0x18) - *puVar1 < 8) {
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined1 *)(param_1 + 8) = 1;
      return;
    }
    lVar10 = *(long *)(lVar8 + 0x10);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(lVar10 + *(long *)(lVar8 + 0x28) + *puVar1);
    lVar12 = *(long *)(lVar8 + 0x18);
    uVar9 = *puVar1 + 8;
    *puVar1 = uVar9;
    if (lVar12 - uVar9 < 8) {
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined1 *)(param_1 + 8) = 1;
      return;
    }
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(lVar10 + *(long *)(lVar8 + 0x28) + uVar9);
    uVar11 = *puVar1;
    lVar12 = *(long *)(lVar8 + 0x18);
    uVar9 = uVar11 + 8;
    *puVar1 = uVar9;
    if (lVar12 - uVar9 < 2) {
      uVar6 = 0;
      *(undefined1 *)(param_1 + 8) = 1;
    }
    else {
      uVar6 = *(undefined2 *)(lVar10 + *(long *)(lVar8 + 0x28) + uVar9);
      *puVar1 = uVar11 + 10;
    }
    *(undefined2 *)(param_2 + 0x20) = uVar6;
    if (*(char *)(param_1 + 8) == '\0') {
      lVar8 = *(long *)(param_1 + 0x10);
      lVar10 = *(long *)(param_1 + 0x18);
      if ((ulong)(*(long *)(lVar8 + 0x18) - lVar10) < 2) {
        uVar6 = 0;
        *(undefined1 *)(param_1 + 8) = 1;
      }
      else {
        uVar6 = *(undefined2 *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 0x28) + lVar10);
        *puVar1 = lVar10 + 2;
      }
      *(undefined2 *)(param_2 + 0x22) = uVar6;
      if (*(char *)(param_1 + 8) == '\0') {
        lVar8 = *(long *)(param_1 + 0x10);
        lVar10 = *(long *)(param_1 + 0x18);
        if ((ulong)(*(long *)(lVar8 + 0x18) - lVar10) < 4) {
          uVar7 = 0;
          *(undefined1 *)(param_1 + 8) = 1;
        }
        else {
          uVar7 = *(undefined4 *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 0x28) + lVar10);
          *puVar1 = lVar10 + 4;
        }
        *(undefined4 *)(param_2 + 0x24) = uVar7;
        if (*(char *)(param_1 + 8) == '\0') {
          lVar8 = *(long *)(param_1 + 0x10);
          lVar10 = *(long *)(param_1 + 0x18);
          if ((ulong)(*(long *)(lVar8 + 0x18) - lVar10) < 4) {
            uVar7 = 0;
            *(undefined1 *)(param_1 + 8) = 1;
          }
          else {
            uVar7 = *(undefined4 *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 0x28) + lVar10);
            *puVar1 = lVar10 + 4;
          }
          *(undefined4 *)(param_2 + 0x28) = uVar7;
          if (*(char *)(param_1 + 8) == '\0') {
            lVar8 = *(long *)(param_1 + 0x10);
            lVar10 = *(long *)(param_1 + 0x18);
            if ((ulong)(*(long *)(lVar8 + 0x18) - lVar10) < 4) {
              uVar7 = 0;
              *(undefined1 *)(param_1 + 8) = 1;
            }
            else {
              uVar7 = *(undefined4 *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 0x28) + lVar10);
              *puVar1 = lVar10 + 4;
            }
            *(undefined4 *)(param_2 + 0x2c) = uVar7;
            if (*(char *)(param_1 + 8) == '\0') {
              lVar8 = *(long *)(param_1 + 0x10);
              lVar10 = *(long *)(param_1 + 0x18);
              if ((ulong)(*(long *)(lVar8 + 0x18) - lVar10) < 4) {
                uVar7 = 0;
                *(undefined1 *)(param_1 + 8) = 1;
              }
              else {
                uVar7 = *(undefined4 *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 0x28) + lVar10);
                *puVar1 = lVar10 + 4;
              }
              *(undefined4 *)(param_2 + 0x30) = uVar7;
              if ((*(char *)(param_1 + 8) == '\0') &&
                 (FUN_001f719c(param_1,param_2 + 0x38),
                 *(char *)(param_1 + 8) == '\0' && cVar4 == '\0')) {
                uVar9 = lVar2 + (ulong)uVar3;
                if ((uVar9 < *puVar1) || (*(ulong *)(*(long *)(param_1 + 0x10) + 0x18) < uVar9)) {
                  *(undefined1 *)(param_1 + 8) = 1;
                  return;
                }
                *puVar1 = uVar9;
                return;
              }
            }
          }
        }
      }
    }
  }
  return;
}


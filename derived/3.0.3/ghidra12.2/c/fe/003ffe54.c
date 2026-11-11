
void FUN_003ffe54(long param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  
  cVar3 = *(char *)(param_1 + 0x69);
  *(undefined1 *)(param_2 + 8) = 0;
  if (cVar3 == '\0') {
    lVar7 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar7 + 0x18) == *(long *)(param_1 + 0x18)) {
      *(undefined1 *)(param_1 + 8) = 1;
      *(undefined1 *)(param_2 + 8) = 0;
      cVar4 = *(char *)(param_1 + 8);
    }
    else {
      *(undefined1 *)(param_2 + 8) =
           *(undefined1 *)
            (*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 0x28) + *(long *)(param_1 + 0x18));
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
      cVar4 = *(char *)(param_1 + 8);
    }
    if (cVar4 != '\0') {
      return;
    }
    lVar7 = *(long *)(param_1 + 0x10);
    lVar11 = *(long *)(param_1 + 0x18);
    if ((ulong)(*(long *)(lVar7 + 0x18) - lVar11) < 4) goto LAB_004002b4;
    lVar2 = lVar11 + 4;
    uVar12 = *(uint *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 0x28) + lVar11);
    *(long *)(param_1 + 0x18) = lVar2;
    lVar7 = *(long *)(param_1 + 0x10);
    uVar8 = *(long *)(lVar7 + 0x18) - lVar2;
  }
  else {
    if (*(char *)(param_1 + 8) != '\0') {
      return;
    }
    lVar7 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(param_1 + 0x18);
    uVar12 = 0;
    uVar8 = *(long *)(lVar7 + 0x18) - lVar2;
  }
  if (uVar8 < 8) {
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined1 *)(param_1 + 8) = 1;
    return;
  }
  lVar9 = *(long *)(lVar7 + 0x10);
  cVar4 = *(char *)(param_1 + 8);
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(lVar9 + *(long *)(lVar7 + 0x28) + lVar2);
  puVar1 = (ulong *)(param_1 + 0x18);
  lVar11 = *puVar1 + 8;
  *(long *)(param_1 + 0x18) = lVar11;
  if (cVar4 == '\0') {
    if ((ulong)(*(long *)(lVar7 + 0x18) - lVar11) < 8) {
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined1 *)(param_1 + 8) = 1;
      return;
    }
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(lVar9 + *(long *)(lVar7 + 0x28) + lVar11);
    uVar10 = *puVar1;
    lVar11 = *(long *)(lVar7 + 0x18);
    uVar8 = uVar10 + 8;
    *puVar1 = uVar8;
    if (lVar11 - uVar8 < 4) {
      uVar6 = 0;
      *(undefined1 *)(param_1 + 8) = 1;
    }
    else {
      uVar6 = *(undefined4 *)(lVar9 + *(long *)(lVar7 + 0x28) + uVar8);
      *puVar1 = uVar10 + 0xc;
    }
    *(undefined4 *)(param_2 + 0x20) = uVar6;
    if ((*(char *)(param_1 + 8) == '\0') &&
       (FUN_001f719c(param_1,param_2 + 0x28), *(char *)(param_1 + 8) == '\0')) {
      lVar7 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(param_1 + 0x18);
      if ((ulong)(*(long *)(lVar7 + 0x18) - lVar11) < 2) {
        uVar5 = 0;
        *(undefined1 *)(param_1 + 8) = 1;
      }
      else {
        uVar5 = *(undefined2 *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 0x28) + lVar11);
        *puVar1 = lVar11 + 2;
      }
      *(undefined2 *)(param_2 + 0x50) = uVar5;
      if (((((*(char *)(param_1 + 8) == '\0') &&
            (FUN_001f77fc(param_1,param_2 + 0x58), *(char *)(param_1 + 8) == '\0')) &&
           (FUN_003fdf54(param_1,param_2 + 0x90), *(char *)(param_1 + 8) == '\0')) &&
          ((FUN_003fdf54(param_1,param_2 + 0xb8), *(char *)(param_1 + 8) == '\0' &&
           (FUN_001feb30(param_1,param_2 + 0xe0), *(char *)(param_1 + 8) == '\0')))) &&
         (FUN_001feb30(param_1,param_2 + 0xe8), *(char *)(param_1 + 8) == '\0')) {
        lVar7 = *(long *)(param_1 + 0x10);
        lVar11 = *(long *)(param_1 + 0x18);
        if ((ulong)(*(long *)(lVar7 + 0x18) - lVar11) < 2) {
          uVar5 = 0;
          *(undefined1 *)(param_1 + 8) = 1;
        }
        else {
          uVar5 = *(undefined2 *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 0x28) + lVar11);
          *puVar1 = lVar11 + 2;
        }
        *(undefined2 *)(param_2 + 0xf0) = uVar5;
        if (*(char *)(param_1 + 8) == '\0') {
          lVar7 = *(long *)(param_1 + 0x10);
          if (*(long *)(lVar7 + 0x18) == *(long *)(param_1 + 0x18)) {
            *(undefined1 *)(param_1 + 8) = 1;
            *(undefined1 *)(param_2 + 0xf2) = 0;
          }
          else {
            *(undefined1 *)(param_2 + 0xf2) =
                 *(undefined1 *)
                  (*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 0x28) + *(long *)(param_1 + 0x18));
            *puVar1 = *puVar1 + 1;
          }
          if (*(char *)(param_1 + 8) == '\0') {
            lVar7 = *(long *)(param_1 + 0x10);
            lVar11 = *(long *)(param_1 + 0x18);
            if ((ulong)(*(long *)(lVar7 + 0x18) - lVar11) < 4) {
              uVar6 = 0;
              *(undefined1 *)(param_1 + 8) = 1;
            }
            else {
              uVar6 = *(undefined4 *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 0x28) + lVar11);
              *puVar1 = lVar11 + 4;
            }
            *(undefined4 *)(param_2 + 0xf4) = uVar6;
            if (*(char *)(param_1 + 8) == '\0') {
              lVar7 = *(long *)(param_1 + 0x10);
              lVar11 = *(long *)(param_1 + 0x18);
              if ((ulong)(*(long *)(lVar7 + 0x18) - lVar11) < 4) {
                uVar6 = 0;
                *(undefined1 *)(param_1 + 8) = 1;
              }
              else {
                uVar6 = *(undefined4 *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 0x28) + lVar11);
                *puVar1 = lVar11 + 4;
              }
              *(undefined4 *)(param_2 + 0xf8) = uVar6;
              if (*(char *)(param_1 + 8) == '\0') {
                lVar7 = *(long *)(param_1 + 0x10);
                lVar11 = *(long *)(param_1 + 0x18);
                if ((ulong)(*(long *)(lVar7 + 0x18) - lVar11) < 4) {
                  uVar6 = 0;
                  *(undefined1 *)(param_1 + 8) = 1;
                }
                else {
                  uVar6 = *(undefined4 *)
                           (*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 0x28) + lVar11);
                  *puVar1 = lVar11 + 4;
                }
                *(undefined4 *)(param_2 + 0xfc) = uVar6;
                if (((*(char *)(param_1 + 8) == '\0') &&
                    (FUN_001feb30(param_1,param_2 + 0x100), *(char *)(param_1 + 8) == '\0')) &&
                   ((FUN_001feb30(param_1,param_2 + 0x108), *(char *)(param_1 + 8) == '\0' &&
                    ((FUN_003154d0(param_1,param_2 + 0x110), *(char *)(param_1 + 8) == '\0' &&
                     (FUN_004002f0(param_1,param_2 + 0x128),
                     *(char *)(param_1 + 8) == '\0' && cVar3 == '\0')))))) {
                  uVar8 = lVar2 + (ulong)uVar12;
                  if ((*puVar1 <= uVar8) && (uVar8 <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x18)))
                  {
                    *puVar1 = uVar8;
                    return;
                  }
LAB_004002b4:
                  *(undefined1 *)(param_1 + 8) = 1;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}


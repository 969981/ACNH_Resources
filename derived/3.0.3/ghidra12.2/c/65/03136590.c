
void FUN_03136590(long param_1,uint *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar4 = *param_2;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(uint *)(param_1 + 0x2c) = uVar4;
  if (*(long *)(param_1 + 0x98) != 0) {
    if (0 < *(int *)(param_1 + 0x90)) {
      lVar10 = 0;
      do {
        plVar9 = *(long **)(*(long *)(param_1 + 0x98) + lVar10 * 8);
        (**(code **)(*plVar9 + 0x10))(plVar9);
        lVar10 = lVar10 + 1;
        *plVar9 = *(long *)(param_1 + 0xa0);
        *(long **)(param_1 + 0xa0) = plVar9;
      } while (lVar10 < *(int *)(param_1 + 0x90));
      uVar4 = *(uint *)(param_1 + 0x2c);
    }
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      uVar8 = uVar5;
      if (*param_2 <= uVar5) {
        uVar8 = 0;
      }
      if (*(char *)(*(long *)(param_2 + 2) + (ulong)uVar8 * 0x10 + 0xc) != '\0') {
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
        *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 1 << (ulong)(uVar5 & 0x1f);
      }
      uVar5 = uVar5 + 1;
    } while (uVar4 != uVar5);
    if (((*(byte *)(param_1 + 0x38) >> 1 & 1) != 0) &&
       (*(uint *)(param_1 + 0x18) < *(uint *)(param_1 + 0x28))) {
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x18);
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_030e5370(*(long *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28),0);
      uVar4 = *(uint *)(param_1 + 0x2c);
    }
    if (uVar4 != 0) {
      uVar8 = 0;
      uVar5 = 0;
      bVar3 = *(long *)(param_1 + 0x98) != 0;
      puVar1 = PTR_DAT_04bc4ee8 + 0x10;
      puVar2 = PTR_DAT_04bb2bc0 + 0x10;
      do {
        if ((*(uint *)(param_1 + 0x3c) >> (ulong)(uVar8 & 0x1f) & 1) != 0) {
          uVar4 = uVar8;
          if (*param_2 <= uVar8) {
            uVar4 = 0;
          }
          if ((-1 < (int)uVar5) && ((int)uVar5 < (int)*(uint *)(param_1 + 0x18))) {
            if (uVar5 < *(uint *)(param_1 + 0x18)) {
              lVar10 = param_1 + 8;
              if (6 < uVar5) {
                uVar7 = uVar5 + 1 & 0xfffffff8;
                do {
                  uVar7 = uVar7 - 8;
                  lVar10 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(
                                                  long *)(lVar10 + 8) + 8) + 8) + 8) + 8) + 8) + 8)
                                    + 8);
                } while (uVar7 != 0);
              }
              for (uVar7 = uVar5 + 1 & 7; uVar7 != 0; uVar7 = uVar7 - 1) {
                lVar10 = *(long *)(lVar10 + 8);
              }
            }
            else {
              lVar10 = 0;
            }
            if ((lVar10 != 0) && (lVar10 = lVar10 - *(int *)(param_1 + 0x1c), lVar10 != 0)) {
              FUN_03133694(lVar10,*(undefined4 *)(*(long *)(param_2 + 2) + (ulong)uVar4 * 0x10 + 8))
              ;
            }
          }
          if ((bVar3) && (*(int *)(param_1 + 0x90) < *(int *)(param_1 + 0x94))) {
            plVar9 = *(long **)(param_1 + 0xa0);
            if (plVar9 != (long *)0x0) {
              *(long *)(param_1 + 0xa0) = *plVar9;
            }
            *plVar9 = (long)puVar1;
            puVar6 = (undefined1 *)((long)plVar9 + 0x24);
            *puVar6 = 0;
            *(undefined4 *)(plVar9 + 1) = 0xffffffff;
            *(undefined4 *)(plVar9 + 4) = 0x40;
            *(undefined1 *)((long)plVar9 + 99) = 0;
            *(undefined1 *)(plVar9 + 0xd) = 1;
            plVar9[2] = (long)puVar2;
            plVar9[3] = (long)puVar6;
            if (*(int *)(param_1 + 0x90) < *(int *)(param_1 + 0x94)) {
              *(long **)(*(long *)(param_1 + 0x98) + (long)*(int *)(param_1 + 0x90) * 8) = plVar9;
              *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
              puVar6 = (undefined1 *)plVar9[3];
            }
            bVar3 = true;
            uVar4 = uVar8;
            if (*param_2 <= uVar8) {
              uVar4 = 0;
            }
            *(undefined4 *)(plVar9 + 1) =
                 *(undefined4 *)(*(long *)(param_2 + 2) + (ulong)uVar4 * 0x10 + 8);
            *puVar6 = 0;
          }
          else {
            bVar3 = false;
          }
          uVar4 = *(uint *)(param_1 + 0x2c);
          uVar5 = uVar5 + 1;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar4);
    }
  }
  return;
}


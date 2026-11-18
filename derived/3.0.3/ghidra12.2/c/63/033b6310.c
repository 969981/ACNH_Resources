
void FUN_033b6310(long param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long local_68;
  
  lVar3 = *param_2;
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x58) != lVar3 + 0x50) {
      lVar7 = (long)*(int *)(lVar3 + 100);
      lVar9 = *(long *)(lVar3 + 0x58) - lVar7;
      do {
        lVar4 = *(long *)(lVar9 + 0xa0);
        if (lVar4 != 0) {
          if (*(long *)(lVar4 + 0x80) != lVar4 + 0x78) {
            lVar10 = (long)*(int *)(lVar4 + 0x8c);
            lVar6 = *(long *)(lVar4 + 0x80) - lVar10;
            do {
              if (*(int *)(lVar6 + 0x48) - 3U < 5) {
                iVar1 = *(int *)(lVar6 + 0x48);
                if (iVar1 == 6) {
                  uVar5 = 5;
                }
                else {
                  uVar5 = 5;
                  if (iVar1 != 4) {
                    if (iVar1 != 3) goto LAB_033b6398;
                    lVar8 = *(long *)(lVar6 + 0x58);
                    FUN_038e2f80(lVar8 + 0x110);
                    plVar2 = (long *)(*(int *)(lVar8 + 0x74) + lVar6);
                    if (*plVar2 != 0) {
                      *(long *)(*plVar2 + 8) = plVar2[1];
                    }
                    if ((long *)plVar2[1] != (long *)0x0) {
                      *(long *)plVar2[1] = *plVar2;
                    }
                    *plVar2 = 0;
                    plVar2[1] = 0;
                    *(int *)(lVar8 + 0x70) = *(int *)(lVar8 + 0x70) + -1;
                    FUN_038e3040(lVar8 + 0x110);
                    uVar5 = 2;
                    *(undefined8 *)(lVar6 + 0x58) = 0;
                  }
                }
                *(undefined4 *)(lVar6 + 0x48) = uVar5;
              }
LAB_033b6398:
              lVar6 = *(long *)(lVar6 + lVar10 + 8) - lVar10;
            } while (lVar6 != (lVar4 + 0x78) - lVar10);
          }
        }
        plVar2 = *(long **)(*(long *)(param_1 + 8) + 0x20);
        local_68 = lVar9;
        if (plVar2 == (long *)0x0) {
          FUN_032d2700();
          return;
        }
        (**(code **)(*plVar2 + 0x30))(plVar2,&local_68);
        lVar9 = *(long *)(lVar9 + lVar7 + 8) - lVar7;
      } while (lVar9 != (lVar3 + 0x50) - lVar7);
    }
  }
  return;
}


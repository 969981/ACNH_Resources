
void FUN_01664990(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  int iVar13;
  ulong uVar14;
  
  if ((param_2 != 0) && (uVar5 = *(uint *)(param_2 + 0x30), 0 < (int)uVar5)) {
    uVar10 = 0;
    do {
      plVar12 = (long *)**(undefined8 **)(*(long *)(param_2 + 0x38) + uVar10 * 8);
      if (((plVar12 != (long *)0x0) &&
          (uVar7 = (**(code **)(*plVar12 + 0xb8))(plVar12), 0 < (int)uVar7)) &&
         (lVar9 = plVar12[0x24], lVar9 != 0)) {
        uVar14 = 0;
        while( true ) {
          if (lVar9 != 0) {
            plVar2 = (long *)(lVar9 + uVar14 * 0x80);
            bVar6 = *(byte *)(*plVar2 + 0x9d);
            if ((ulong)bVar6 != 0) {
              iVar13 = 0;
              lVar9 = 0;
              plVar1 = plVar2 + 0xb;
              do {
                if (((*(long *)(param_3 + 8) != 0) &&
                    (lVar8 = *(long *)(*(long *)(param_3 + 8) + 0x20), lVar8 != 0)) &&
                   (lVar8 = FUN_038fe510(lVar8,*(long *)(*(long *)(*plVar2 + 0x30) + lVar9) + 2),
                   lVar8 != 0)) {
                  lVar3 = *(long *)(lVar8 + 0x88);
                  uVar4 = *(undefined8 *)(lVar8 + 0x90);
                  lVar8 = *plVar1;
                  lVar11 = *(long *)(plVar2[10] + lVar9);
                  *(long *)(plVar2[10] + lVar9) = lVar3;
                  *(undefined8 *)(*plVar1 + lVar9) = uVar4;
                  if (((code *)plVar2[0xf] != (code *)0x0) &&
                     ((lVar11 != lVar3 || (*(long *)(lVar8 + lVar9) != *(long *)(*plVar1 + lVar9))))
                     ) {
                    (*(code *)plVar2[0xf])(plVar2,iVar13);
                  }
                }
                lVar9 = lVar9 + 8;
                iVar13 = iVar13 + 1;
              } while ((ulong)bVar6 * 8 != lVar9);
            }
          }
          uVar14 = uVar14 + 1;
          if (uVar14 == uVar7) break;
          lVar9 = plVar12[0x24];
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar5);
  }
  return;
}


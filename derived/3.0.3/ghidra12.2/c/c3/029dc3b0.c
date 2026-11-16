
void FUN_029dc3b0(long param_1,undefined4 *param_2,uint *param_3,int *param_4,char param_5,
                 long param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  
  iVar4 = *param_4;
  if (param_5 == '\x01') {
    lVar5 = *(long *)(param_6 + 0x20);
    while (lVar5 != 0) {
      if (iVar4 < *(int *)(lVar5 + 0x20)) {
        plVar6 = (long *)(lVar5 + 8);
      }
      else {
        if (iVar4 <= *(int *)(lVar5 + 0x20)) {
LAB_029dc42c:
          iVar4 = *(int *)(lVar5 + 0x28);
          if (iVar4 == 0) {
            return;
          }
          lVar5 = *(long *)(lVar5 + 0x30);
          iVar7 = 0;
          do {
            iVar9 = *(int *)(param_1 + 0x20);
            if (iVar9 != 0) {
              iVar10 = *(int *)(param_1 + 0x1c);
              do {
                iVar2 = 0;
                if (*(int *)(param_1 + 0x18) <= iVar10) {
                  iVar2 = *(int *)(param_1 + 0x18);
                }
                if (*(int *)(lVar5 + (long)iVar7 * 0xc) ==
                    *(int *)(*(long *)(param_1 + 0x10) + (long)(iVar10 - iVar2) * 4))
                goto LAB_029dc478;
                iVar10 = iVar10 + 1;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
            puVar8 = (undefined4 *)(lVar5 + (long)iVar7 * 0xc);
            uVar1 = *param_3 + 1;
            *param_3 = uVar1;
            puVar3 = param_2 + (ulong)uVar1 * 3;
            if (0x77 < uVar1) {
              puVar3 = param_2;
            }
            *puVar3 = *puVar8;
            puVar3[1] = puVar8[1];
            puVar3[2] = puVar8[2];
LAB_029dc478:
            iVar7 = iVar7 + 1;
            if (iVar4 == iVar7) {
              return;
            }
          } while( true );
        }
        plVar6 = (long *)(lVar5 + 0x10);
      }
      lVar5 = *plVar6;
    }
  }
  else {
    lVar5 = *(long *)(param_6 + 0x50);
    while (lVar5 != 0) {
      if (iVar4 < *(int *)(lVar5 + 0x20)) {
        plVar6 = (long *)(lVar5 + 8);
      }
      else {
        if (iVar4 <= *(int *)(lVar5 + 0x20)) goto LAB_029dc42c;
        plVar6 = (long *)(lVar5 + 0x10);
      }
      lVar5 = *plVar6;
    }
  }
  return;
}


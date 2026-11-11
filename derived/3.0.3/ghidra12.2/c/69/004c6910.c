
void FUN_004c6910(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined1 auStack_50 [16];
  
LAB_004c6940:
  if (*(int *)(param_1 + 0xd0) != 0) goto code_r0x004c6948;
  if (*(int *)(param_1 + 0xe0) == 0) {
    iVar1 = *(int *)(param_1 + 0x120);
    uVar5 = (ulong)*(uint *)(param_1 + 0x60);
    if (iVar1 < (int)*(uint *)(param_1 + 0x60)) {
      lVar8 = (long)iVar1;
      do {
        lVar2 = *(long *)(*(long *)(param_1 + 0x58) + lVar8 * 8);
        if ((lVar2 != 0) && (iVar1 = FUN_004c6bf0(lVar2,param_1,param_2 & 1), iVar1 < 0)) {
          FUN_004c7290(*(undefined8 *)(*(long *)(param_1 + 0x58) + lVar8 * 8));
          *(undefined8 *)(*(long *)(param_1 + 0x58) + lVar8 * 8) = 0;
        }
LAB_004c6a14:
        if (*(int *)(param_1 + 0xd0) != 0) goto code_r0x004c6a1c;
        if (*(int *)(param_1 + 0xe0) != 0) {
          *(undefined4 *)(param_1 + 0xd0) = 0;
          goto LAB_004c6a08;
        }
        uVar5 = (ulong)*(int *)(param_1 + 0x60);
        lVar8 = lVar8 + 1;
      } while (lVar8 < (long)uVar5);
      iVar1 = *(int *)(param_1 + 0x120);
    }
    iVar4 = (int)uVar5;
    if (iVar1 < iVar4) {
      lVar8 = (long)iVar1;
      if ((param_2 & 1) == 0) {
        do {
          plVar9 = *(long **)(*(long *)(param_1 + 0x58) + lVar8 * 8);
          if (plVar9 != (long *)0x0) {
            lVar2 = *plVar9;
            uVar5 = FUN_00428440(lVar2);
            if ((uVar5 & 0x1f) != 7) {
              lVar2 = 0;
            }
            if ((int)plVar9[7] != 0) {
              *(undefined8 *)(lVar2 + 8) =
                   **(undefined8 **)(plVar9[6] + (long)*(int *)((long)plVar9 + 0x14) * 8);
            }
            FUN_00454f90(auStack_50);
            lVar3 = FUN_00454fb0(auStack_50);
            *(undefined4 *)(lVar3 + 0xc) = 8;
            FUN_00454890(lVar2,lVar3);
            uVar5 = (ulong)*(uint *)(param_1 + 0x60);
          }
          lVar8 = lVar8 + 1;
          iVar4 = (int)uVar5;
        } while (lVar8 < iVar4);
      }
      else {
        do {
          puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x58) + lVar8 * 8);
          if (puVar6 != (undefined8 *)0x0) {
            uVar7 = *puVar6;
            uVar5 = FUN_00428440(uVar7);
            if ((uVar5 & 0x1f) != 7) {
              uVar7 = 0;
            }
            FUN_00454f90(auStack_50);
            lVar2 = FUN_00454fb0(auStack_50);
            *(undefined4 *)(lVar2 + 0xc) = 8;
            FUN_00454890(uVar7,lVar2);
            uVar5 = (ulong)*(uint *)(param_1 + 0x60);
          }
          lVar8 = lVar8 + 1;
          iVar4 = (int)uVar5;
        } while (lVar8 < iVar4);
      }
    }
    *(int *)(param_1 + 0x120) = iVar4 + -1;
    if (0 < *(int *)(param_1 + 0xf0)) {
      lVar8 = 0;
      do {
        uVar7 = *(undefined8 *)(*(long *)(param_1 + 0xe8) + lVar8 * 8);
        FUN_00454f90(auStack_50);
        lVar2 = FUN_00454fb0(auStack_50);
        *(undefined4 *)(lVar2 + 0xc) = 8;
        FUN_00454890(uVar7,lVar2);
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(param_1 + 0xf0));
    }
    *(undefined4 *)(param_1 + 0xf0) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0xd0) = 0;
  goto LAB_004c6934;
code_r0x004c6948:
  if (0 < *(int *)(param_1 + 0xd0)) {
    iVar1 = 0;
    do {
      FUN_004c4f20(param_1,iVar1);
      iVar4 = *(int *)(param_1 + 0xd0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar4);
    if (0 < iVar4) {
      lVar8 = *(long *)(param_1 + 200) + (long)iVar4 * 0x20;
      do {
        lVar8 = lVar8 + -0x20;
        FUN_0043be10(lVar8);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(int *)(param_1 + 0xe0) != 0) {
LAB_004c6934:
    FUN_004c5f30(param_1,0);
  }
  goto LAB_004c6940;
code_r0x004c6a1c:
  if (0 < *(int *)(param_1 + 0xd0)) {
    iVar1 = 0;
    do {
      FUN_004c4f20(param_1,iVar1);
      iVar4 = *(int *)(param_1 + 0xd0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar4);
    if (0 < iVar4) {
      lVar2 = *(long *)(param_1 + 200) + (long)iVar4 * 0x20;
      do {
        lVar2 = lVar2 + -0x20;
        FUN_0043be10(lVar2);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(int *)(param_1 + 0xe0) != 0) {
LAB_004c6a08:
    FUN_004c5f30(param_1,0);
  }
  goto LAB_004c6a14;
}


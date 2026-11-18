
void FUN_0347afd0(long param_1,uint param_2,long *param_3)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  
  puVar6 = (uint *)(**(code **)(*param_3 + 0x80))(param_3);
  piVar7 = (int *)(**(code **)(*param_3 + 0x10))(param_3);
  iVar3 = *piVar7;
  if (iVar3 == 0) {
    return;
  }
  lVar14 = *(long *)(piVar7 + 2);
  uVar13 = 0;
LAB_0347b060:
  lVar9 = *(long *)(puVar6 + 2);
  uVar1 = param_2;
  if (*puVar6 <= param_2) {
    uVar1 = 0;
  }
  uVar4 = *(uint *)(lVar9 + (long)(int)uVar1 * 0x38 + 0x20);
  if (0 < (int)uVar4) {
    uVar10 = 0;
    do {
      if (*(int *)(*(long *)(lVar9 + (long)(int)uVar1 * 0x38 + 0x28) + uVar10 * 4) ==
          *(int *)(lVar14 + (-(uVar13 >> 0x1f) & 0xfffffffc00000000 | uVar13 << 2))) {
        lVar9 = lVar9 + (long)(int)uVar1 * 0x38;
        if (*(uint *)(lVar9 + 0x10) <= (uint)uVar10) {
          uVar10 = 0;
        }
        uVar1 = *(uint *)(*(long *)(lVar9 + 0x18) + uVar10 * 0x30 + 0x28);
        if (uVar1 != 0xffffffff) {
          if (uVar1 < 0x40) {
            lVar9 = param_1 + 0x1c2e8 + (ulong)uVar1 * 0x30;
            *(undefined1 *)(lVar9 + 0x24) = 0;
            *(undefined4 *)(lVar9 + 0x28) = 0;
            if ((*(byte *)(lVar9 + 4) & 1) != 0) {
              FUN_015d8190(*(undefined8 *)(DAT_05231900 + 0x140));
            }
            piVar7 = (int *)(param_1 + 0x1c2e8 + (ulong)uVar1 * 0x30 + 0x20);
            if (*piVar7 != -1) {
              *piVar7 = -1;
            }
          }
          uVar4 = *(uint *)(lVar14 + (long)(int)uVar13 * 4);
          puVar8 = (uint *)(**(code **)(*param_3 + 0x80))(param_3);
          lVar9 = *(long *)(puVar8 + 2);
          uVar1 = param_2;
          if (*puVar8 <= param_2) {
            uVar1 = 0;
          }
          uVar5 = *(uint *)(lVar9 + (long)(int)uVar1 * 0x38 + 0x20);
          if (0 < (int)uVar5) {
            uVar10 = 0;
            goto LAB_0347b180;
          }
        }
        break;
      }
      uVar10 = uVar10 + 1;
    } while (uVar4 != uVar10);
  }
  goto LAB_0347b050;
  while (uVar10 = uVar10 + 1, uVar5 != uVar10) {
LAB_0347b180:
    if (*(uint *)(*(long *)(lVar9 + (long)(int)uVar1 * 0x38 + 0x28) + uVar10 * 4) == uVar4) {
      lVar12 = *(long *)(lVar9 + (long)(int)uVar1 * 0x38 + 8);
      if (*(uint *)(lVar12 + 0x2c8) <= uVar4) {
        uVar4 = 0;
      }
      if (*(long *)(*(long *)(lVar12 + 0x2d0) + (long)(int)uVar4 * 8) != 0) {
        lVar9 = lVar9 + (long)(int)uVar1 * 0x38;
        puVar8 = (uint *)(lVar9 + 0x10);
        plVar11 = (long *)(lVar9 + 0x18);
        uVar2 = uVar10;
        if (*puVar8 <= (uint)uVar10) {
          uVar2 = 0;
        }
        piVar7 = (int *)(*plVar11 + uVar2 * 0x30 + 0x28);
        if (*piVar7 != -1) {
          *piVar7 = -1;
          if (*puVar8 <= (uint)uVar10) {
            uVar10 = 0;
          }
          *(undefined4 *)(*plVar11 + uVar10 * 0x30 + 0x2c) = 2;
        }
      }
      break;
    }
  }
LAB_0347b050:
  uVar10 = uVar13 + 1;
  uVar13 = uVar10 & 0xffffffff;
  if (iVar3 == (int)uVar10) {
    return;
  }
  goto LAB_0347b060;
}


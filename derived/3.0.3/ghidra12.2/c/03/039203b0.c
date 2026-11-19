
void FUN_039203b0(long param_1)

{
  ulong uVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  
  lVar15 = param_1 + 0x38;
  FUN_0394e490(lVar15);
  iVar4 = *(int *)(param_1 + 0x458);
  if (iVar4 == 0) {
    FUN_0394f1f0(lVar15,*(uint *)(param_1 + 0x260) >> 8 & 1);
    return;
  }
  if (iVar4 == 2) {
    FUN_0394f380(lVar15,*(uint *)(param_1 + 0x260) >> 8 & 1);
    return;
  }
  if ((iVar4 == 1) && (uVar5 = *(uint *)(param_1 + 0x460), uVar5 != 0)) {
    uVar13 = 0;
    do {
      lVar12 = (long)(int)uVar13;
      lVar15 = lVar12;
      if (*(uint *)(param_1 + 0x18) <= uVar13) {
        lVar15 = 0;
      }
      if (*(short *)(*(long *)(param_1 + 0x20) + lVar15 * 4 + 2) != 0) {
        FUN_03922200(param_1 + 0x2d0,uVar13);
        uVar6 = *(uint *)(param_1 + 0x2f8);
        if (*(uint *)(param_1 + 0x2e8) <= uVar13) {
          lVar12 = 0;
        }
        puVar3 = (ushort *)(*(long *)(param_1 + 0x2f0) + lVar12 * 4);
        uVar7 = *puVar3;
        uVar2 = (uint)puVar3[1] + (uint)uVar7;
        uVar9 = uVar6;
        if (uVar7 <= uVar6) {
          uVar9 = (uint)uVar7;
        }
        uVar14 = (ulong)uVar9;
        if (uVar2 <= uVar6) {
          uVar6 = uVar2;
        }
        if (uVar6 != uVar9) {
          lVar15 = *(long *)(param_1 + 0x300);
          do {
            lVar12 = *(long *)(lVar15 + (-(uVar14 >> 0x1f) & 0xfffffff800000000 | uVar14 << 3));
            if ((lVar12 != 0) && (uVar2 = *(uint *)(param_1 + 0x88), uVar2 != 0xffffffff)) {
              lVar10 = *(long *)(param_1 + 0x58);
              if (*(uint *)(param_1 + 0x50) <= uVar2) {
                uVar2 = 0;
              }
              plVar8 = (long *)(**(code **)(*(long *)(lVar12 + 0x30) + 0x18))();
              plVar11 = (long *)(lVar10 + (long)(int)uVar2 * 0x168 + 0x18);
              (**(code **)(*plVar11 + 0x18))(plVar11);
              (**(code **)(*plVar11 + 0x18))(plVar11);
              (**(code **)(*plVar8 + 0x18))(plVar8);
            }
            uVar1 = uVar14 + 1;
            uVar14 = uVar1 & 0xffffffff;
          } while (uVar6 != (uint)uVar1);
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar5 != uVar13);
  }
  return;
}


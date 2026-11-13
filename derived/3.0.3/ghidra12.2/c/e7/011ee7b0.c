
void FUN_011ee7b0(long param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  
  if ((DAT_0537d558 != 0) && (*(int *)(DAT_0537d558 + 0x80) == 3)) {
    lVar9 = *(long *)PTR_DAT_04bb2720;
    if (lVar9 == 0) {
      puVar12 = &DAT_055c04a0;
    }
    else {
      puVar12 = &DAT_055c04a0;
      if (*(long *)(lVar9 + 0x330) != 0) {
        puVar12 = (undefined8 *)
                  (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar9 + 0x338));
        iVar7 = FUN_006bd550(*puVar12,0);
        puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar7 != 0x758f7eaf) {
          puVar12 = &DAT_055c04a0;
        }
      }
    }
    puVar6 = PTR_DAT_04bb37e0;
    uVar10 = 0;
    do {
      uVar8 = (uint)uVar10;
      piVar1 = (int *)((long)(PTR_DAT_04bbbf90 + 8) + uVar10 * 4);
      if (0x38 < uVar8) {
        piVar1 = (int *)(PTR_DAT_04bbbf90 + 8);
      }
      if (*piVar1 == *(int *)(puVar12 + 7)) {
        if (uVar8 == 0x32) {
          uVar8 = 0;
          do {
            piVar1 = (int *)(param_1 + 8 + ((long)((ulong)uVar8 << 0x20) >> 0x1a));
            iVar7 = *piVar1;
            if (iVar7 - 1U < 2) {
              FUN_011ee9a0();
            }
            else if (iVar7 == 3) {
              *piVar1 = 0;
              lVar9 = param_1 + 8 + (long)(int)uVar8 * 0x40;
              *(undefined2 *)(lVar9 + 4) = *(undefined2 *)puVar6;
              *(undefined *)(lVar9 + 6) = puVar6[2];
              *(undefined *)(lVar9 + 7) = puVar6[3];
              uVar2 = *(undefined4 *)(puVar6 + 4);
              *(undefined8 *)(lVar9 + 0xc) = 0;
              *(undefined8 *)(lVar9 + 0x14) = 0;
              *(undefined4 *)(lVar9 + 8) = uVar2;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 != 0x2d);
          return;
        }
        break;
      }
      uVar11 = 0x39;
      if ((int)uVar8 < 0x39) {
        uVar11 = uVar8 + 1;
      }
      uVar10 = (ulong)uVar11;
    } while (uVar11 != 0x39);
    uVar8 = 0;
    uVar5 = *(undefined2 *)PTR_DAT_04bb37e0;
    uVar3 = PTR_DAT_04bb37e0[2];
    uVar4 = PTR_DAT_04bb37e0[3];
    uVar2 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    do {
      piVar1 = (int *)(param_1 + 8 + ((long)((ulong)uVar8 << 0x20) >> 0x1a));
      if (*piVar1 - 1U < 3) {
        *piVar1 = 0;
        lVar9 = param_1 + 8 + (long)(int)uVar8 * 0x40;
        *(undefined2 *)(lVar9 + 4) = uVar5;
        *(undefined1 *)(lVar9 + 6) = uVar3;
        *(undefined1 *)(lVar9 + 7) = uVar4;
        *(undefined4 *)(lVar9 + 8) = uVar2;
        *(undefined8 *)(lVar9 + 0xc) = 0;
        *(undefined8 *)(lVar9 + 0x14) = 0;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != 0x2d);
  }
  return;
}



void FUN_0381fcc0(long param_1,char *param_2)

{
  undefined *puVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  char cVar10;
  undefined4 *puVar11;
  bool bVar12;
  long lVar13;
  char *pcVar14;
  undefined4 *puVar15;
  long lVar16;
  ulong uVar17;
  undefined **local_1748;
  undefined4 *puStack_1740;
  uint *local_1738;
  uint local_1724;
  undefined4 local_1720;
  int local_171c;
  int local_1718 [1438];
  undefined **local_a0;
  undefined ***pppuStack_98;
  undefined4 local_80;
  undefined4 local_7c;
  undefined *local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  
  if (*param_2 != '\0' && param_2[1] != '\0') {
    lVar16 = *(long *)PTR_DAT_04bb5c90;
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar16 + 0x28);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(lVar16 + 0x2c);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar16 + 0x38);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(lVar16 + 0x3c);
    memset(&local_1720,0,0x1680);
    local_1748 = &PTR_LAB_04b5ca68;
    uVar7 = *(uint *)(lVar16 + 0x50);
    local_1724 = 0xffffffff;
    local_1738 = &local_1724;
    pppuStack_98 = &local_1748;
    local_a0 = &PTR_FUN_04983c08;
    if (0 < (int)uVar7) {
      uVar17 = 0;
      puVar1 = PTR_DAT_04bbc1a0 + 0x10;
      puStack_1740 = &local_1720;
      do {
        lVar13 = *(long *)(lVar16 + 0x58);
        if (**(int **)(lVar13 + uVar17 * 8) != 0x7e3d1e46) {
          puStack_70 = &DAT_048f9750;
          local_80 = (undefined4)uVar17;
          local_60 = &DAT_048f9750;
          local_7c = **(undefined4 **)(lVar13 + uVar17 * 8);
          lVar13 = *(long *)(lVar13 + uVar17 * 8);
          local_68 = *(undefined8 *)(lVar13 + 0x18);
          local_58 = *(undefined8 *)(lVar13 + 0x28);
          local_78 = puVar1;
          (*(code *)*local_a0)(&local_a0,&local_80);
        }
        uVar17 = uVar17 + 1;
      } while (uVar7 != uVar17);
    }
    if (-1 < *(int *)(param_1 + 0x7b0)) {
      uVar17 = 0xffffffffffffffff;
      pcVar14 = (char *)(param_1 + 0x3f0);
      do {
        uVar17 = uVar17 + 1;
        pcVar4 = pcVar14;
        if (0x1df < uVar17) {
          pcVar4 = (char *)(param_1 + 0x3f0);
        }
        pcVar14 = pcVar14 + 2;
        puVar5 = (undefined2 *)(param_1 + 0x30) + (ulong)(uint)(int)*pcVar4 * 0x14;
        if (0x17 < (uint)(int)*pcVar4) {
          puVar5 = (undefined2 *)(param_1 + 0x30);
        }
        puVar6 = puVar5 + (uint)(int)pcVar4[1];
        if (0x13 < (uint)(int)pcVar4[1]) {
          puVar6 = puVar5;
        }
        *puVar6 = 0xffff;
      } while ((long)uVar17 < (long)*(int *)(param_1 + 0x7b0));
    }
    if (-1 < (int)local_1724) {
      uVar17 = 0;
      puVar15 = &local_1720;
      pcVar14 = (char *)(param_1 + 0x3f0);
      do {
        bVar12 = 0x1df < uVar17;
        piVar2 = puVar15 + 1;
        if (bVar12) {
          piVar2 = &local_171c;
        }
        piVar3 = puVar15 + 2;
        if (bVar12) {
          piVar3 = local_1718;
        }
        pcVar4 = pcVar14;
        puVar11 = puVar15;
        if (bVar12) {
          pcVar4 = (char *)(param_1 + 0x3f0);
          puVar11 = &local_1720;
        }
        uVar17 = uVar17 + 1;
        pcVar14 = pcVar14 + 2;
        puVar15 = puVar15 + 3;
        uVar7 = *piVar2 - *(int *)(param_1 + 0x18);
        uVar8 = *piVar3 - *(int *)(param_1 + 0x1c);
        cVar9 = (char)uVar7;
        cVar10 = (char)uVar8;
        puVar5 = (undefined2 *)(param_1 + 0x30) + (ulong)(uint)(int)cVar9 * 0x14;
        if (2 < (uVar7 >> 3 & 0x1f)) {
          puVar5 = (undefined2 *)(param_1 + 0x30);
        }
        puVar6 = puVar5 + (uint)(int)cVar10;
        if (4 < (uVar8 >> 2 & 0x3f)) {
          puVar6 = puVar5;
        }
        *puVar6 = (short)*puVar11;
        *pcVar4 = cVar9;
        pcVar4[1] = cVar10;
      } while ((ulong)local_1724 + 1 != uVar17);
    }
    *(uint *)(param_1 + 0x7b0) = local_1724;
  }
  return;
}


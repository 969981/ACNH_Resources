
undefined2 * FUN_01952450(long param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  uint *puVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined2 uVar12;
  uint uVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *local_40;
  undefined2 local_38;
  
  if (DAT_04c487d4 != -1) {
    puVar5 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar5 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar5 >> 0x1a & 1) != 0) && ((*puVar5 >> 1 & 1) != 0)) {
      local_40 = PTR_DAT_04bb7648 + 0x10;
      local_38 = *DAT_05ab5ea8;
      lVar14 = FUN_03775a30(&local_40);
      puVar1 = (undefined2 *)(param_1 + 0xdf0);
      if (lVar14 == 0) {
        return puVar1;
      }
      uVar12 = *(undefined2 *)PTR_DAT_04bb37e0;
      uVar10 = PTR_DAT_04bb37e0[2];
      uVar11 = PTR_DAT_04bb37e0[3];
      uVar7 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      *(undefined2 *)(param_1 + 0xdf0) = uVar12;
      *(undefined1 *)(param_1 + 0xdf2) = uVar10;
      *(undefined1 *)(param_1 + 0xdf3) = uVar11;
      *(undefined4 *)(param_1 + 0xdf4) = uVar7;
      *(undefined2 *)(param_1 + 0xdf8) = uVar12;
      *(undefined1 *)(param_1 + 0xdfa) = uVar10;
      *(undefined1 *)(param_1 + 0xdfb) = uVar11;
      *(undefined4 *)(param_1 + 0xdfc) = uVar7;
      *(undefined2 *)(param_1 + 0xe00) = uVar12;
      *(undefined1 *)(param_1 + 0xe02) = uVar10;
      *(undefined1 *)(param_1 + 0xe03) = uVar11;
      *(undefined4 *)(param_1 + 0xe04) = uVar7;
      *(undefined2 *)(param_1 + 0xe08) = uVar12;
      *(undefined1 *)(param_1 + 0xe0a) = uVar10;
      *(undefined1 *)(param_1 + 0xe0b) = uVar11;
      *(undefined4 *)(param_1 + 0xe0c) = uVar7;
      *(undefined2 *)(param_1 + 0xe10) = uVar12;
      *(undefined1 *)(param_1 + 0xe12) = uVar10;
      *(undefined1 *)(param_1 + 0xe13) = uVar11;
      *(undefined4 *)(param_1 + 0xe14) = uVar7;
      *(undefined2 *)(param_1 + 0xe18) = uVar12;
      *(undefined1 *)(param_1 + 0xe1a) = uVar10;
      *(undefined1 *)(param_1 + 0xe1b) = uVar11;
      *(undefined4 *)(param_1 + 0xe1c) = uVar7;
      *(undefined2 *)(param_1 + 0xe20) = uVar12;
      *(undefined1 *)(param_1 + 0xe22) = uVar10;
      *(undefined1 *)(param_1 + 0xe23) = uVar11;
      *(undefined4 *)(param_1 + 0xe24) = uVar7;
      *(undefined2 *)(param_1 + 0xe28) = uVar12;
      *(undefined1 *)(param_1 + 0xe2a) = uVar10;
      *(undefined1 *)(param_1 + 0xe2b) = uVar11;
      *(undefined4 *)(param_1 + 0xe2c) = uVar7;
      *(undefined2 *)(param_1 + 0xe30) = uVar12;
      *(undefined1 *)(param_1 + 0xe32) = uVar10;
      *(undefined1 *)(param_1 + 0xe33) = uVar11;
      *(undefined4 *)(param_1 + 0xe34) = uVar7;
      *(undefined2 *)(param_1 + 0xe38) = uVar12;
      *(undefined1 *)(param_1 + 0xe3a) = uVar10;
      *(undefined1 *)(param_1 + 0xe3b) = uVar11;
      *(undefined4 *)(param_1 + 0xe3c) = uVar7;
      *(undefined2 *)(param_1 + 0xe40) = uVar12;
      *(undefined1 *)(param_1 + 0xe42) = uVar10;
      *(undefined1 *)(param_1 + 0xe43) = uVar11;
      *(undefined4 *)(param_1 + 0xe44) = uVar7;
      *(undefined2 *)(param_1 + 0xe48) = uVar12;
      *(undefined1 *)(param_1 + 0xe4a) = uVar10;
      *(undefined1 *)(param_1 + 0xe4b) = uVar11;
      *(undefined4 *)(param_1 + 0xe4c) = uVar7;
      if ((*(long **)(lVar14 + 0x108) == (long *)0x0) ||
         (puVar15 = (undefined8 *)**(long **)(lVar14 + 0x108), puVar15 == (undefined8 *)0x0)) {
        uVar13 = 1;
      }
      else {
        uVar13 = (**(code **)*puVar15)();
        uVar13 = uVar13 ^ 1;
      }
      iVar8 = *(int *)(param_1 + 0xe60);
      if (iVar8 != 0) {
        uVar17 = 0;
        uVar16 = 0;
        do {
          iVar2 = *(int *)(param_1 + 0xe5c) + (uint)uVar17;
          iVar4 = 0;
          if (*(int *)(param_1 + 0xe58) <= iVar2) {
            iVar4 = *(int *)(param_1 + 0xe58);
          }
          uVar9 = *(uint *)(*(long *)(param_1 + 0xe50) + (long)(iVar2 - iVar4) * 4);
          if (uVar9 != 0xffffffff) {
            puVar3 = (undefined2 *)(*(long *)(lVar14 + 0xf0) + *(long *)(lVar14 + 0xe8) + 0x4848);
            puVar6 = puVar3 + (ulong)uVar9 * 4;
            if (0xb < uVar9) {
              puVar6 = puVar3;
            }
            puVar3 = puVar1 + uVar16 * 4;
            if (0xb < (uint)uVar17) {
              puVar3 = puVar1;
            }
            *puVar3 = *puVar6;
            *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar6 + 1);
            *(undefined1 *)((long)puVar3 + 3) = *(undefined1 *)((long)puVar6 + 3);
            *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(puVar6 + 2);
          }
          uVar17 = uVar16 + 1;
          uVar16 = uVar17 & 0xffffffff;
        } while (iVar8 != (int)uVar17);
      }
      if ((uVar13 & 1) != 0) {
        return puVar1;
      }
      if (*(long *)(lVar14 + 0x108) == 0) {
        return puVar1;
      }
      puVar15 = *(undefined8 **)(*(long *)(lVar14 + 0x108) + 8);
      if (puVar15 == (undefined8 *)0x0) {
        return puVar1;
      }
      (**(code **)*puVar15)();
      return puVar1;
    }
  }
  return &DAT_052cb9b8;
}


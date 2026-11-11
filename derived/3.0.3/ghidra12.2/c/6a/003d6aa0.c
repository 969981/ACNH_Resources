
undefined8 FUN_003d6aa0(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  long local_148;
  undefined4 local_138 [2];
  long local_130;
  long local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_110;
  undefined1 auStack_10a [94];
  undefined4 local_ac;
  char local_a8;
  uint local_a4;
  undefined8 local_a0;
  undefined2 local_94;
  undefined4 local_92;
  undefined8 local_8e;
  undefined8 local_86;
  undefined8 local_7e;
  undefined8 local_76;
  undefined2 local_6e;
  undefined4 local_6c;
  
  if (0 < *(int *)(param_1 + 0x108)) {
    uVar6 = *(ulong *)(param_1 + 0x170);
    uVar13 = 0;
    lVar14 = 0;
    uVar11 = 0;
    if (uVar6 != 0) {
      uVar11 = *(ulong *)(param_1 + 0x148) / uVar6;
    }
    uVar8 = (uint)uVar11;
    uVar4 = 0;
    if (uVar6 != 0) {
      uVar4 = (uint)((*(long *)(param_1 + 0x150) - 1U) / uVar6);
    }
    uVar1 = (uVar4 - uVar8) + 1;
    lVar7 = *(ulong *)(param_1 + 0x148) - uVar11 * uVar6;
    do {
      iVar5 = 0;
      uVar2 = uVar13 - uVar4;
      local_138[0] = 0;
      local_120 = 0;
      uStack_118 = 0;
      local_110 = 0;
      local_ac = 0;
      local_a8 = '\0';
      if (uVar4 <= uVar13 && uVar2 != 0) {
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = uVar2 / uVar1;
        }
        iVar5 = uVar2 - uVar3 * uVar1;
      }
      local_128 = lVar14;
      if (((uVar4 == 0) || (uVar13 == uVar4)) || (uVar4 < uVar13 && iVar5 == 0)) {
        local_a0 = *(undefined8 *)(param_1 + 0x180);
        local_148 = *(long *)(param_1 + 0x188);
        local_130 = local_148;
        local_a4 = uVar4;
        if (*(char *)(param_1 + 0x140) == '\0') {
          local_a8 = '\x01';
          *(undefined8 *)(param_1 + 0x458) = 0;
        }
        else {
          local_148 = *(long *)(param_1 + 0x148);
          local_ac = 1;
LAB_003d6d88:
          *(long *)(param_1 + 0x458) = local_148;
          local_148 = local_130;
        }
      }
      else if ((uVar4 < uVar13) && (*(char *)(param_1 + 0x140) != '\0')) {
        local_148 = *(long *)(param_1 + 0x170);
        local_a0 = *(undefined8 *)(param_1 + 0x178);
        local_130 = local_148;
        if (iVar5 != 1) {
          local_148 = *(long *)(param_1 + 0x458) + local_148;
          local_a4 = (uVar8 - 1) + iVar5;
          goto LAB_003d6d88;
        }
        *(ulong *)(param_1 + 0x458) = local_148 * (ulong)(uVar8 + 1);
        local_128 = lVar7;
        local_a4 = uVar8;
        if (*(int *)(param_1 + 0x138) == 2) {
          if (0 < *(int *)(param_1 + 0x198)) {
            uVar11 = 0;
            puVar9 = (undefined8 *)(param_1 + 0x488);
            puVar10 = auStack_10a;
            puVar12 = (undefined8 *)(param_1 + 0x248);
            do {
              uVar6 = FUN_003dd8c4(param_2,&local_8e,&local_94,uVar11 & 0xffffffff);
              if ((uVar6 & 1) == 0) {
                return 0;
              }
              *puVar12 = local_8e;
              puVar12[1] = local_86;
              puVar12[2] = local_7e;
              puVar12[3] = local_76;
              FUN_003c2cec(*puVar9,0,puVar12);
              uVar11 = uVar11 + 1;
              puVar12 = puVar12 + 4;
              *(undefined2 *)(puVar10 + -4) = local_94;
              iVar5 = *(int *)(param_1 + 0x198);
              *(undefined4 *)(puVar10 + -2) = local_92;
              puVar10 = puVar10 + 6;
              puVar9 = puVar9 + 0x210;
            } while ((long)uVar11 < (long)iVar5);
          }
          lVar14 = 0;
          goto LAB_003d6d50;
        }
        lVar14 = 0;
      }
      else {
        local_148 = *(long *)(param_1 + 0x170);
        local_a0 = *(undefined8 *)(param_1 + 0x178);
        *(long *)(param_1 + 0x458) = *(long *)(param_1 + 0x458) + local_148;
        local_130 = local_148;
        local_a4 = uVar13;
        if ((uVar13 == 0) && (*(int *)(param_1 + 0x138) == 2)) {
          if (0 < *(int *)(param_1 + 0x198)) {
            uVar11 = 0;
            puVar9 = (undefined8 *)(param_1 + 0x488);
            puVar10 = auStack_10a;
            puVar12 = (undefined8 *)(param_1 + 0x248);
            do {
              uVar6 = FUN_003dd8c4(param_2,&local_8e,&local_94,uVar11 & 0xffffffff);
              if ((uVar6 & 1) == 0) {
                return 0;
              }
              *puVar12 = local_8e;
              puVar12[1] = local_86;
              puVar12[2] = local_7e;
              puVar12[3] = local_76;
              FUN_003c2cec(*puVar9,0,puVar12);
              uVar11 = uVar11 + 1;
              puVar12 = puVar12 + 4;
              *(undefined2 *)(puVar10 + -4) = local_6e;
              iVar5 = *(int *)(param_1 + 0x198);
              *(undefined4 *)(puVar10 + -2) = local_6c;
              puVar10 = puVar10 + 6;
              puVar9 = puVar9 + 0x210;
            } while ((long)uVar11 < (long)iVar5);
          }
LAB_003d6d50:
          local_110 = 1;
        }
      }
      local_138[0] = *(undefined4 *)(param_1 + 0x10c);
      local_120 = 0;
      FUN_003d7590(param_1,1,local_138,*(undefined2 *)(param_1 + 300),1,local_a4,local_a0);
      iVar5 = 0;
      if (*(int *)(param_1 + 0x10c) + 1U < *(uint *)(param_1 + 0x108)) {
        iVar5 = *(int *)(param_1 + 0x10c) + 1;
      }
      *(int *)(param_1 + 0x10c) = iVar5;
      if (local_a8 != '\0') {
        return 1;
      }
      uVar13 = uVar13 + 1;
      lVar14 = local_148 + lVar14;
    } while ((int)uVar13 < (int)*(uint *)(param_1 + 0x108));
  }
  return 1;
}


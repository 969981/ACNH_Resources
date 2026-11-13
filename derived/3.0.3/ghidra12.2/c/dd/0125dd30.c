
void FUN_0125dd30(long param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 local_150;
  float local_148;
  undefined4 local_144;
  float local_140;
  undefined8 local_13c;
  uint local_134;
  undefined4 local_130;
  uint uStack_12c;
  uint local_128;
  undefined *local_120;
  undefined1 *puStack_118;
  undefined4 local_110;
  undefined1 local_10c [127];
  undefined1 local_8d;
  int local_88;
  undefined2 local_84;
  undefined8 local_80;
  
  puVar5 = PTR_DAT_04bbbd58;
  iVar10 = 0;
  lVar12 = 0;
  param_1 = param_1 + 8;
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  lVar13 = param_2 + 0x10;
  do {
    uVar11 = (uint)lVar12;
    lVar15 = 0;
    lVar14 = lVar13;
    do {
      uStack_12c = (uint)lVar15;
      if (uStack_12c <= *(uint *)(param_2 + 8) && uVar11 <= *(uint *)(param_2 + 0xc)) {
        lVar7 = lVar14;
        if (0x47 < iVar10 + uStack_12c) {
          lVar7 = param_2 + 0x10;
        }
        uVar3 = *(ushort *)(lVar7 + 8);
        if (uVar3 != 0) {
          lVar7 = *(long *)PTR_DAT_04bb27a8;
          uVar4 = (uint)uVar3 - (uint)*(ushort *)(lVar7 + 0xb90);
          if (uVar4 < *(uint *)(lVar7 + 0xb70)) {
            puVar8 = *(uint **)(*(long *)(lVar7 + 0xb78) + (long)(int)uVar4 * 8);
          }
          else {
            puVar8 = (uint *)0x0;
          }
          local_150 = 0x1200000000;
          local_134 = (uint)uVar3;
          local_13c = 0x3f800000;
          local_8d = 0;
          local_10c[0] = 0;
          local_110 = 0x80;
          local_148 = (float)(int)uStack_12c * 160.0 + 80.0;
          local_80 = 0;
          local_84 = 0;
          local_144 = 0;
          if (puVar8 == (uint *)0x0) {
LAB_0125ddd0:
            local_88 = 4;
          }
          else {
            uVar4 = *puVar8;
            local_88 = 4;
            if ((uVar4 != 0) && (puVar8 != (uint *)(ulong)uVar4)) {
              puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
              if (*puVar9 != 0) {
                uVar4 = puVar9[1];
                if ((uVar4 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
                  lVar7 = 0xc;
                  if (*(char *)((long)puVar9 + 10) != '\0') {
                    lVar7 = 0x1c;
                  }
                  lVar7 = (long)puVar9 + lVar7 + (ulong)(ushort)puVar9[2] * 8;
                  if (lVar7 != 0) {
                    uVar2 = 0;
                    if ((ulong)uVar4 != 0) {
                      uVar2 = (uint)((ulong)((long)puVar8 - lVar7) / (ulong)uVar4);
                    }
                    if (*puVar9 <= uVar2) {
                      uVar2 = 0xffffffff;
                    }
                    if ((uVar2 < *(uint *)puVar5) &&
                       (*(short *)(*(long *)(puVar5 + 8) + (long)(int)uVar2 * 2) == 0x18)) {
                      local_88 = 0;
                      goto LAB_0125ddd4;
                    }
                  }
                }
                if (((*puVar9 != 0) && (uVar4 = puVar9[1], uVar4 != 0)) &&
                   ((ulong)(ushort)puVar9[2] != 0)) {
                  lVar7 = 0xc;
                  if (*(char *)((long)puVar9 + 10) != '\0') {
                    lVar7 = 0x1c;
                  }
                  lVar7 = (long)puVar9 + lVar7 + (ulong)(ushort)puVar9[2] * 8;
                  if (lVar7 != 0) {
                    uVar2 = 0;
                    if ((ulong)uVar4 != 0) {
                      uVar2 = (uint)((ulong)((long)puVar8 - lVar7) / (ulong)uVar4);
                    }
                    if (*puVar9 <= uVar2) {
                      uVar2 = 0xffffffff;
                    }
                    if (uVar2 < *(uint *)puVar5) {
                      local_88 = (uint)(*(short *)(*(long *)(puVar5 + 8) + (long)(int)uVar2 * 2) !=
                                       0x1c) << 2;
                      goto LAB_0125ddd4;
                    }
                  }
                }
              }
              goto LAB_0125ddd0;
            }
          }
LAB_0125ddd4:
          local_140 = (float)(int)uVar11 * 160.0 + 80.0;
          local_130 = param_3;
          local_128 = uVar11;
          local_120 = puVar1;
          puStack_118 = local_10c;
          uVar6 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_150,0,0);
          *(undefined4 *)(param_1 + lVar15 * 4) = uVar6;
        }
      }
      lVar15 = lVar15 + 1;
      lVar14 = lVar14 + 0x18;
    } while (lVar15 != 9);
    lVar12 = lVar12 + 1;
    param_1 = param_1 + 0x24;
    iVar10 = iVar10 + 9;
    lVar13 = lVar13 + 0xd8;
    if (lVar12 == 8) {
      return;
    }
  } while( true );
}


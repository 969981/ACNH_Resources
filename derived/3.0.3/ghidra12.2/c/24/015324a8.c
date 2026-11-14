
/* WARNING: Removing unreachable block (ram,0x01532734) */

undefined1  [16] FUN_015324a8(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  ushort uVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 uVar13;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 uVar14;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined1 auVar12 [16];
  undefined **local_58;
  undefined2 local_50;
  undefined2 local_4e;
  undefined4 local_4c;
  uint *local_48;
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar1 = param_1 + 0x129c;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(lVar1);
  lVar9 = *(long *)puVar3;
  uVar11 = 0x3f800000;
  uVar13 = 0;
  uVar14 = 0;
  if (lVar9 == 0) goto LAB_015327dc;
  lVar10 = *(long *)(lVar10 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if ((*(uint *)(lVar10 + 0x1d8) <= uVar4) ||
     (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_015327dc;
  local_50 = *(undefined2 *)(param_1 + 0x129c);
  local_48 = (uint *)0x0;
  local_4e = *(undefined2 *)(param_1 + 0x129e);
  local_4c = *(undefined4 *)(param_1 + 0x12a0);
  local_58 = &PTR_FUN_04a36b50;
  uVar4 = FUN_0277d6c4(0x3f800000,&local_50);
  if (*(long *)puVar3 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(lVar1);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
         (puVar6 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar6 != (uint *)0x0)) {
        uVar7 = 0;
        uVar4 = *puVar6;
        if ((uVar4 != 0) && (puVar6 != (uint *)(ulong)uVar4)) {
          puVar8 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
          uVar7 = 0;
          if (*puVar8 != 0) {
            uVar4 = puVar8[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
              lVar9 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
              if (lVar9 != 0) {
                uVar2 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar6 - lVar9) / (ulong)uVar4);
                }
                if (*puVar8 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < DAT_05326af0) &&
                   (uVar7 = *(ushort *)(DAT_05326af8 + (long)(int)uVar2 * 2), uVar7 < 0xa2))
                goto LAB_0153265c;
              }
            }
            uVar7 = 0;
          }
        }
LAB_0153265c:
        local_48 = puVar6;
        if (uVar7 != 0x21) {
          uVar7 = 0;
          uVar4 = *puVar6;
          if ((uVar4 != 0) && (puVar6 != (uint *)(ulong)uVar4)) {
            puVar8 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
            uVar7 = 0;
            if (*puVar8 != 0) {
              uVar4 = puVar8[1];
              if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                lVar1 = 0xc;
                if (*(char *)((long)puVar8 + 10) != '\0') {
                  lVar1 = 0x1c;
                }
                lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
                if (lVar1 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar4 != 0) {
                    uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar4);
                  }
                  if (*puVar8 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < DAT_05326ec0) &&
                     (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
                  goto LAB_01532740;
                }
              }
              uVar7 = 0;
            }
          }
LAB_01532740:
          if (uVar7 == 0x56) {
            uVar11 = 0x3f800000;
            uVar13 = 0;
            uVar14 = 0;
          }
          else {
            iVar5 = FUN_01afb8e8(&local_58);
            if (iVar5 == 1) {
              FUN_01adfeb0();
              uVar11 = extraout_s0;
              uVar13 = extraout_var;
              uVar14 = extraout_var_01;
            }
            else {
              FUN_01adfc60(&local_58);
              uVar11 = extraout_s0_00;
              uVar13 = extraout_var_00;
              uVar14 = extraout_var_02;
            }
          }
          goto LAB_015327dc;
        }
      }
    }
  }
  iVar5 = FUN_0277d6c4(lVar1);
  if (iVar5 == 0x33df) {
    uVar11 = 0x3f400000;
    uVar13 = 0;
    uVar14 = 0;
  }
  else {
    iVar5 = FUN_0277d6c4(lVar1);
    if (iVar5 == 0x33dd) {
      uVar11 = 0x3f8f5c29;
      uVar13 = 0;
      uVar14 = 0;
    }
    else {
      iVar5 = FUN_0277d6c4(lVar1);
      uVar11 = 0x3f8f5c29;
      if (iVar5 != 0x33de) {
        uVar11 = 0x3f800000;
      }
      uVar14 = 0;
      uVar13 = 0;
    }
  }
LAB_015327dc:
  auVar12._4_4_ = uVar13;
  auVar12._0_4_ = uVar11;
  auVar12._8_8_ = uVar14;
  return auVar12;
}


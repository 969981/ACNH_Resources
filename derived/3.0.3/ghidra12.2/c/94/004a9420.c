
undefined8 FUN_004a9420(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long local_60;
  undefined8 local_58;
  
  puVar5 = PTR_DAT_048607c0;
  local_60 = 0;
  local_58 = -0x8000000000000000;
  iVar7 = *(int *)(param_1 + 0x160);
  if (0 < iVar7) {
    lVar15 = *(long *)(param_1 + 0x78);
    iVar8 = *(int *)(param_1 + 0x80);
    uVar6 = 0;
    do {
      if (*(int *)(*(long *)(param_1 + 0x158) + uVar6 * 4) != -1) break;
      uVar6 = uVar6 + 1;
    } while ((long)uVar6 < (long)iVar7);
    if ((int)uVar6 < iVar7) {
      uVar13 = 0;
      uVar6 = uVar6 & 0xffffffff;
      do {
        lVar16 = (long)(int)uVar6;
        iVar3 = *(int *)(*(long *)(param_1 + 0x158) +
                        (-(uVar6 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar6 & 0xffffffff) << 2));
        if (iVar3 < iVar8) {
          if (*(long *)(lVar15 + (long)iVar3 * 8) != 0) {
            FUN_00454fe0();
            uVar13 = (uint)local_58;
          }
          if (uVar13 == (local_58._4_4_ & 0x3fffffff)) {
            FUN_00426990(puVar5,&local_60,4);
            uVar13 = (uint)local_58;
          }
          *(int *)(local_60 + (long)(int)uVar13 * 4) = iVar3;
          uVar13 = uVar13 + 1;
          local_58 = CONCAT44(local_58._4_4_,uVar13);
          iVar7 = *(int *)(param_1 + 0x160);
        }
        lVar10 = uVar6 << 0x20;
        do {
          lVar10 = lVar10 + 0x100000000;
          if (iVar7 + -1 <= lVar16) break;
          lVar1 = lVar16 * 4;
          lVar16 = lVar16 + 1;
        } while (*(int *)(*(long *)(param_1 + 0x158) + lVar1 + 4) == -1);
        uVar6 = lVar10 >> 0x20;
      } while ((int)((ulong)lVar10 >> 0x20) < iVar7);
      if (0 < (int)uVar13) {
        lVar15 = 0;
        uVar6 = (long)iVar7 - 1;
        iVar8 = (int)uVar6;
        do {
          if (0 < iVar8) {
            iVar8 = *(int *)(local_60 + lVar15 * 4);
            uVar13 = iVar8 * -0x61c8864f;
            uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
            uVar9 = (uint)uVar6;
            uVar13 = uVar9 & (uVar13 >> 0x10 | uVar13 << 0x10);
            iVar3 = *(int *)(*(long *)(param_1 + 0x158) + (long)(int)uVar13 * 4);
            while (iVar3 != -1) {
              if (iVar3 == iVar8) {
                uVar12 = (ulong)uVar13;
                if ((int)uVar13 < iVar7) {
                  *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + -1;
                  *(undefined4 *)
                   (*(long *)(param_1 + 0x158) +
                   (-(ulong)(uVar13 >> 0x1f) & 0xfffffffc00000000 | uVar12 << 2)) = 0xffffffff;
                  lVar16 = *(long *)(param_1 + 0x158);
                  uVar2 = uVar13;
                  do {
                    uVar2 = uVar9 + uVar2 & uVar9;
                  } while (*(int *)(lVar16 + (long)(int)uVar2 * 4) != -1);
                  uVar13 = uVar13 + 1 & uVar9;
                  iVar7 = *(int *)(lVar16 + (long)(int)uVar13 * 4);
                  if (iVar7 != -1) {
                    uVar2 = uVar2 + 1 & uVar9;
                    uVar14 = (ulong)(int)uVar13;
                    do {
                      uVar4 = (iVar7 * -0x61c8864f & 0xff00ff00U) >> 8 |
                              (iVar7 * -0x61c8864f & 0xff00ffU) << 8;
                      uVar4 = (uVar4 >> 0x10 | uVar4 << 0x10) & uVar9;
                      uVar11 = (uint)uVar12;
                      if ((((uVar13 < uVar2) || (uVar4 <= uVar11)) &&
                          ((uVar11 <= uVar13 || ((uVar4 <= uVar11 && (uVar13 < uVar4)))))) &&
                         ((uVar4 <= uVar11 || (uVar2 <= uVar4)))) {
                        *(int *)(lVar16 + (long)(int)uVar11 * 4) = iVar7;
                        *(undefined4 *)(*(long *)(param_1 + 0x158) + uVar14 * 4) = 0xffffffff;
                        lVar16 = *(long *)(param_1 + 0x158);
                        uVar12 = (ulong)uVar13;
                      }
                      uVar14 = (long)(int)(uVar13 + 1) & uVar6;
                      iVar7 = *(int *)(lVar16 + uVar14 * 4);
                      uVar13 = (uint)uVar14;
                    } while (iVar7 != -1);
                  }
                }
                break;
              }
              uVar13 = uVar13 + 1 & uVar9;
              iVar3 = *(int *)(*(long *)(param_1 + 0x158) + (long)(int)uVar13 * 4);
            }
          }
          lVar15 = lVar15 + 1;
          if ((int)local_58 <= lVar15) break;
          iVar7 = *(int *)(param_1 + 0x160);
          uVar6 = (long)iVar7 - 1;
          iVar8 = (int)uVar6;
        } while( true );
      }
    }
  }
  lVar15 = local_58;
  uVar13 = local_58._4_4_;
  local_58 = (ulong)local_58._4_4_ << 0x20;
  if ((-1 < lVar15) && (local_60 != 0)) {
    FUN_00421f90(PTR_DAT_048607c0,local_60,4,uVar13 & 0x3fffffff);
  }
  return 0;
}


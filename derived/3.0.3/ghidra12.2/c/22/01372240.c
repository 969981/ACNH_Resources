
void FUN_01372240(uint *param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  short *psVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  undefined **local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  puVar4 = PTR_DAT_04bb43c0;
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(param_2);
  lVar9 = *(long *)puVar4;
  if (lVar9 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      local_68 = 0;
      local_70 = *param_2;
      uStack_6c = param_2[1];
      local_78 = &PTR_FUN_04a36b50;
      uVar5 = FUN_0277d6c4(&local_70);
      if (*(long *)puVar4 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          lVar9 = *(long *)PTR_DAT_04bc0428;
          uVar5 = FUN_0277d6c4(param_2);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
             (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8), lVar9 != 0)) {
            local_68 = lVar9;
          }
        }
      }
      uVar8 = FUN_01af0020(&local_78);
      if ((uVar8 & 1) != 0) {
        iVar6 = FUN_01af02d0(&local_78);
        uVar5 = *param_1;
        if (uVar5 != 0) {
          lVar9 = *(long *)(param_1 + 2);
          uVar13 = 0;
          uVar10 = 0;
          uVar12 = 0xffffffff;
          do {
            psVar2 = (short *)(lVar9 + ((long)((ulong)uVar13 << 0x20) >> 0x1c));
            if (*psVar2 == -2) {
              uVar3 = uVar10;
              if (uVar12 != 0xffffffff) {
                uVar3 = uVar12;
              }
              uVar12 = uVar3;
            }
            else {
              uVar8 = FUN_0277d7b4(param_2,psVar2);
              if (((uVar8 & 1) != 0) && (uVar8 = FUN_01af28ac(&local_78,psVar2), (uVar8 & 1) != 0))
              {
                lVar9 = *(long *)(param_1 + 2);
                if (*param_1 <= uVar10) {
                  uVar10 = 0;
                }
                lVar11 = lVar9 + (ulong)uVar10 * 0x10;
                *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + iVar6;
                iVar7 = FUN_01af2610(&local_78);
                if (iVar6 == iVar7) {
                  return;
                }
                lVar9 = lVar9 + (ulong)uVar10 * 0x10;
                goto LAB_01372458;
              }
            }
            uVar13 = uVar13 + 1;
            uVar10 = uVar10 + 1;
          } while (uVar5 != uVar13);
          if (-1 < (int)uVar12) {
            lVar9 = *(long *)(param_1 + 2);
            if (*param_1 <= uVar12) {
              uVar12 = 0;
            }
            puVar1 = (undefined2 *)(lVar9 + (ulong)uVar12 * 0x10);
            *puVar1 = *(undefined2 *)param_2;
            *(undefined1 *)(puVar1 + 1) = *(undefined1 *)((long)param_2 + 2);
            *(undefined1 *)((long)puVar1 + 3) = *(undefined1 *)((long)param_2 + 3);
            *(undefined4 *)(puVar1 + 2) = param_2[1];
            *(int *)(puVar1 + 4) = iVar6;
            iVar7 = FUN_01af2610(&local_78);
            if (iVar6 != iVar7) {
              lVar9 = lVar9 + (ulong)uVar12 * 0x10;
LAB_01372458:
              *(int *)(lVar9 + 0xc) = *(int *)(lVar9 + 0xc) + 1;
            }
          }
        }
      }
    }
  }
  return;
}


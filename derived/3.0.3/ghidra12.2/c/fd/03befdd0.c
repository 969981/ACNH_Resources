
void FUN_03befdd0(long param_1)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  ushort *puVar14;
  
  puVar5 = PTR_DAT_04bb38c0;
  lVar7 = *(long *)(param_1 + 0x30);
  if (lVar7 != 0) {
    iVar13 = *(int *)(lVar7 + 4);
    lVar9 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0x30) + 0x18);
    plVar6 = (long *)(lVar9 + 0x18);
    uVar4 = *(uint *)(lVar9 + 0x10);
    plVar3 = plVar6 + uVar4;
    if (1 < uVar4) {
      plVar3 = plVar6;
    }
    if (iVar13 <= *(int *)(lVar7 + 8)) {
      lVar7 = (long)iVar13 << 0x20;
      puVar14 = (ushort *)(*(long *)(*plVar3 + 0x48) + (long)iVar13 * 0x18 + 0x10);
      uVar11 = (long)iVar13;
      do {
        iVar13 = (int)((ulong)lVar7 >> 0x20);
        lVar9 = *(long *)(*(uint **)(param_1 + 0x10) + 2) + (long)iVar13 * 0x28;
        if (**(uint **)(param_1 + 0x10) <= (uint)uVar11) {
          lVar9 = 0;
        }
        lVar12 = *(long *)(lVar9 + 0x10);
        if ((lVar12 != 0) && (*(int *)(lVar12 + 0x20) == *(int *)(lVar9 + 0x18))) {
          *(uint *)(lVar12 + 8) = *(uint *)(lVar12 + 8) | 0x10;
          if ((*(long *)(lVar12 + 0x28) != 0) && (*(long *)(lVar12 + 0x58) != 0)) {
            plVar6 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar12 + 0x28) + 0x30) +
                                                     0x18) + 0x20))();
            plVar6 = (long *)(**(code **)(*plVar6 + 0x38))();
            (**(code **)(*plVar6 + 0x10))();
            (**(code **)(**(long **)(lVar12 + 0x58) + 0x30))();
            (**(code **)(*plVar6 + 0x18))(plVar6);
          }
          *(undefined8 *)(lVar9 + 0x10) = 0;
          *(undefined4 *)(lVar9 + 0x18) = 0;
        }
        if ((*(int *)(puVar14 + -4) == -1) || ((*puVar14 & 0xc) == 8)) {
          lVar9 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0x30) + 0x18);
          DataMemoryBarrier(2,1);
          DataMemoryBarrier(2,1);
          plVar6 = (long *)(lVar9 + 0x18);
          uVar4 = *(uint *)(lVar9 + 0x10);
          plVar3 = plVar6 + uVar4;
          if (1 < uVar4) {
            plVar3 = plVar6;
          }
          if (((*(ushort *)(*(long *)(*plVar3 + 0x48) + (uVar11 & 0xffffffff) * 0x18 + 0x10) & 1) ==
               0) || (*(char *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (long)iVar13 * 0x28 +
                               0x22) == '\0')) {
            lVar9 = *(long *)(*plVar3 + 0x48) + (uVar11 & 0xffffffff) * 0x18;
            uVar8 = (ulong)*(uint *)(lVar9 + 4);
            uVar10 = *(ulong *)PTR_DAT_04bb38c8 | uVar8;
            uVar2 = uVar10 + 0x100000000;
            if (*(ulong *)puVar5 <= uVar8) {
              uVar2 = uVar10;
            }
            FUN_03bf0af0(param_1,0,uVar11 & 0xffffffff,*(undefined4 *)(lVar9 + 0x14),uVar2);
            *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (long)iVar13 * 0x28 + 0x22) =
                 1;
          }
        }
        lVar7 = lVar7 + 0x100000000;
        puVar14 = puVar14 + 0xc;
        bVar1 = (long)uVar11 < (long)*(int *)(*(long *)(param_1 + 0x30) + 8);
        uVar11 = uVar11 + 1;
      } while (bVar1);
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}


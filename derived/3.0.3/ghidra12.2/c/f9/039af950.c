
void FUN_039af950(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  short *psVar7;
  long lVar8;
  ushort *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  
  if ((0 < *(int *)(param_1 + 0xb0)) && (iVar2 = *(int *)(param_1 + 0x58), iVar2 != 0)) {
    lVar12 = *(long *)(param_1 + 0x60);
    iVar13 = 0;
    puVar1 = PTR_DAT_04bb3498 + 0x10;
    do {
      psVar7 = (short *)(lVar12 + (long)iVar13 * 0x98);
      sVar3 = psVar7[1];
      if (*psVar7 != -1 && sVar3 != -1) {
        uVar4 = (uint)sVar3;
        if (*(uint *)(param_1 + 0xb0) <= uVar4) {
          uVar4 = 0;
        }
        lVar11 = *(long *)(param_1 + 0xb8) + (long)(int)uVar4 * 0x20;
        if (0 < *(int *)(lVar11 + 8)) {
          plVar10 = (long *)**(undefined8 **)
                              (*(long *)(param_2 + 0x38) + (long)**(short **)(lVar11 + 0x10) * 8);
          if (((*PTR_DAT_04bb3490 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3490), iVar5 != 0)) {
            *(undefined **)PTR_DAT_04bb3488 = puVar1;
            __cxa_guard_release(PTR_DAT_04bb3490);
          }
          if ((plVar10 != (long *)0x0) &&
             (uVar6 = (**(code **)*plVar10)(plVar10,PTR_DAT_04bb3488), (uVar6 & 1) == 0)) {
            plVar10 = (long *)0x0;
          }
          puVar9 = (ushort *)(lVar12 + (long)iVar13 * 0x98 + 0x94);
          if ((*puVar9 & 1) != 0) {
            FUN_003a9f04(lVar12 + (long)iVar13 * 0x98 + 8,plVar10 + 0x1b);
            *puVar9 = *puVar9 & 0xfffe;
            FUN_003ad630(plVar10 + 0x1b);
            iVar5 = (**(code **)(*plVar10 + 0x1e0))(plVar10);
            if (0 < iVar5) {
              lVar11 = 0;
              do {
                lVar8 = *(long *)(plVar10[0x2d] + lVar11 * 8);
                lVar11 = lVar11 + 1;
                *(byte *)(lVar8 + 0x25a) = *(byte *)(lVar8 + 0x25a) | 0x10;
                iVar5 = (**(code **)(*plVar10 + 0x1e0))(plVar10);
              } while (lVar11 < iVar5);
            }
          }
          lVar11 = lVar12 + (long)iVar13 * 0x98 + 8;
          FUN_003aa120(lVar11);
          FUN_003aa260(lVar11,plVar10 + 0x1b);
        }
      }
      iVar13 = iVar13 + 1;
    } while (iVar2 != iVar13);
  }
  return;
}


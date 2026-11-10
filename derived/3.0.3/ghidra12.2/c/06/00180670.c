
void FUN_00180670(long *param_1)

{
  void *__dest;
  ulong uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  short sVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  size_t __n;
  uint uVar11;
  ushort *puVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  long *plVar16;
  
  uVar3 = *(uint *)(param_1 + 10);
  uVar11 = *(uint *)((long)param_1 + 0xb4);
  while( true ) {
    uVar15 = (int)param_1[0xd] - (uVar11 + *(uint *)((long)param_1 + 0xac));
    if ((uVar3 - 0x106) + (int)param_1[10] <= *(uint *)((long)param_1 + 0xac)) {
      memcpy((void *)param_1[0xc],(void *)(param_1[0xc] + (ulong)uVar3),(ulong)(uVar3 - uVar15));
      uVar11 = *(int *)((long)param_1 + 0xac) - uVar3;
      *(uint *)((long)param_1 + 0xac) = uVar11;
      *(uint *)(param_1 + 0x16) = (int)param_1[0x16] - uVar3;
      param_1[0x13] = param_1[0x13] - (ulong)uVar3;
      if (uVar11 < *(uint *)((long)param_1 + 0x172c)) {
        *(uint *)((long)param_1 + 0x172c) = uVar11;
      }
      uVar4 = *(uint *)((long)param_1 + 0x84);
      uVar14 = uVar4 & 3;
      uVar5 = *(uint *)(param_1 + 10);
      uVar9 = (ulong)uVar5;
      puVar12 = (ushort *)(param_1[0xf] + (ulong)uVar4 * 2);
      sVar7 = (short)uVar5;
      uVar11 = uVar4;
      if ((uVar4 & 3) != 0) {
        uVar11 = uVar4 & 0xfffffffc;
        do {
          puVar12 = puVar12 + -1;
          uVar2 = 0;
          if (uVar5 <= *puVar12) {
            uVar2 = *puVar12 - sVar7;
          }
          uVar14 = uVar14 - 1;
          *puVar12 = uVar2;
        } while (uVar14 != 0);
      }
      if (2 < uVar4 - 1) {
        puVar12 = puVar12 + -2;
        do {
          uVar11 = uVar11 - 4;
          uVar2 = 0;
          if (uVar5 <= puVar12[1]) {
            uVar2 = puVar12[1] - sVar7;
          }
          puVar12[1] = uVar2;
          uVar2 = 0;
          if (uVar5 <= *puVar12) {
            uVar2 = *puVar12 - sVar7;
          }
          *puVar12 = uVar2;
          uVar2 = 0;
          if (uVar5 <= puVar12[-1]) {
            uVar2 = puVar12[-1] - sVar7;
          }
          puVar12[-1] = uVar2;
          uVar2 = 0;
          if (uVar5 <= puVar12[-2]) {
            uVar2 = puVar12[-2] - sVar7;
          }
          puVar12[-2] = uVar2;
          puVar12 = puVar12 + -4;
        } while (uVar11 != 0);
      }
      uVar11 = uVar5 & 3;
      puVar12 = (ushort *)(param_1[0xe] + uVar9 * 2);
      if ((uVar5 & 3) != 0) {
        uVar9 = (ulong)(uVar5 & 0xfffffffc);
        do {
          puVar12 = puVar12 + -1;
          uVar2 = 0;
          if (uVar5 <= *puVar12) {
            uVar2 = *puVar12 - sVar7;
          }
          uVar11 = uVar11 - 1;
          *puVar12 = uVar2;
        } while (uVar11 != 0);
      }
      if (2 < uVar5 - 1) {
        puVar12 = puVar12 + -2;
        do {
          uVar11 = (int)uVar9 - 4;
          uVar9 = (ulong)uVar11;
          uVar2 = 0;
          if (uVar5 <= puVar12[1]) {
            uVar2 = puVar12[1] - sVar7;
          }
          puVar12[1] = uVar2;
          uVar2 = 0;
          if (uVar5 <= *puVar12) {
            uVar2 = *puVar12 - sVar7;
          }
          *puVar12 = uVar2;
          uVar2 = 0;
          if (uVar5 <= puVar12[-1]) {
            uVar2 = puVar12[-1] - sVar7;
          }
          puVar12[-1] = uVar2;
          uVar2 = 0;
          if (uVar5 <= puVar12[-2]) {
            uVar2 = puVar12[-2] - sVar7;
          }
          puVar12[-2] = uVar2;
          puVar12 = puVar12 + -4;
        } while (uVar11 != 0);
      }
      uVar15 = uVar3 + uVar15;
    }
    plVar16 = (long *)*param_1;
    uVar14 = *(uint *)(plVar16 + 1);
    if (uVar14 == 0) break;
    uVar11 = *(uint *)((long)param_1 + 0xb4);
    uVar4 = uVar14;
    if (uVar15 <= uVar14) {
      uVar4 = uVar15;
    }
    uVar9 = (ulong)uVar4;
    if (uVar4 != 0) {
      __dest = (void *)(param_1[0xc] + (ulong)*(uint *)((long)param_1 + 0xac) + (ulong)uVar11);
      *(uint *)(plVar16 + 1) = uVar14 - uVar4;
      memcpy(__dest,(void *)*plVar16,uVar9);
      if (*(int *)(plVar16[7] + 0x30) == 2) {
        lVar8 = FUN_0017ef30(plVar16[0xc],__dest,uVar9);
LAB_001808c0:
        plVar16[0xc] = lVar8;
      }
      else if (*(int *)(plVar16[7] + 0x30) == 1) {
        lVar8 = FUN_0017f300(plVar16[0xc],__dest,uVar9);
        goto LAB_001808c0;
      }
      *plVar16 = *plVar16 + uVar9;
      plVar16[2] = plVar16[2] + uVar9;
      uVar11 = *(uint *)((long)param_1 + 0xb4);
    }
    iVar6 = *(int *)((long)param_1 + 0x172c);
    uVar11 = uVar11 + uVar4;
    *(uint *)((long)param_1 + 0xb4) = uVar11;
    if (2 < iVar6 + uVar11) {
      uVar15 = *(int *)((long)param_1 + 0xac) - iVar6;
      uVar14 = (uint)*(byte *)(param_1[0xc] + (ulong)uVar15);
      *(uint *)(param_1 + 0x10) = uVar14;
      *(uint *)(param_1 + 0x10) =
           (uVar14 << (ulong)(*(uint *)(param_1 + 0x12) & 0x1f) ^
           (uint)*(byte *)(param_1[0xc] + (ulong)(uVar15 + 1))) & *(uint *)((long)param_1 + 0x8c);
      while (iVar6 != 0) {
        uVar11 = ((int)param_1[0x10] << (ulong)(*(uint *)(param_1 + 0x12) & 0x1f) ^
                 (uint)*(byte *)(param_1[0xc] + (ulong)(uVar15 + 2))) &
                 *(uint *)((long)param_1 + 0x8c);
        *(uint *)(param_1 + 0x10) = uVar11;
        *(undefined2 *)(param_1[0xe] + (ulong)(*(uint *)(param_1 + 0xb) & uVar15) * 2) =
             *(undefined2 *)(param_1[0xf] + (ulong)uVar11 * 2);
        *(short *)(param_1[0xf] + (ulong)*(uint *)(param_1 + 0x10) * 2) = (short)uVar15;
        iVar6 = *(int *)((long)param_1 + 0x172c) + -1;
        uVar11 = *(uint *)((long)param_1 + 0xb4);
        *(int *)((long)param_1 + 0x172c) = iVar6;
        if (uVar11 + iVar6 < 3) break;
        uVar15 = uVar15 + 1;
      }
    }
    if ((0x105 < uVar11) || (*(int *)(*param_1 + 8) == 0)) break;
  }
  uVar10 = param_1[0x2e7];
  uVar13 = param_1[0xd];
  uVar9 = uVar13 - uVar10;
  if (uVar10 <= uVar13 && uVar9 != 0) {
    uVar1 = (ulong)*(uint *)((long)param_1 + 0xb4) + (ulong)*(uint *)((long)param_1 + 0xac);
    if (uVar10 < uVar1) {
      __n = uVar13 - uVar1;
      if (0x101 < __n) {
        __n = 0x102;
      }
      memset((void *)(param_1[0xc] + uVar1),0,__n);
      lVar8 = __n + uVar1;
    }
    else {
      uVar13 = (uVar1 + 0x102) - uVar10;
      if (uVar1 + 0x102 < uVar10 || uVar13 == 0) {
        return;
      }
      if (uVar9 <= uVar13) {
        uVar13 = uVar9;
      }
      memset((void *)(param_1[0xc] + uVar10),0,uVar13 & 0xffffffff);
      lVar8 = param_1[0x2e7] + uVar13;
    }
    param_1[0x2e7] = lVar8;
  }
  return;
}


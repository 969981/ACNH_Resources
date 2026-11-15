
void FUN_021956e0(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  int *piVar5;
  undefined8 *puVar6;
  long lVar7;
  uint *puVar8;
  int iVar9;
  char cVar10;
  uint uVar11;
  ulong uVar12;
  undefined *local_40;
  long local_38;
  undefined1 local_30;
  byte local_2f;
  uint local_24;
  
  puVar3 = PTR_DAT_04bc25f0;
  puVar2 = PTR_DAT_04bc25e8;
  lVar7 = *(long *)PTR_DAT_04bb3968;
  if (*(long *)(param_1 + 0xaa0) != 0 && lVar7 != 0) {
    local_24 = *(uint *)(*(long *)(param_1 + 0xaa0) + 4);
    if ((int)*(uint *)(lVar7 + 0x168f0) < 1) {
      if ((((*(long *)(lVar7 + 0x167e0) == 0) ||
           (puVar8 = *(uint **)(*(long *)(lVar7 + 0x167e0) + 8), puVar8 == (uint *)0x0)) ||
          ((local_24 < *(uint *)(lVar7 + 0x167f8) &&
           (*(char *)(*(long *)(lVar7 + 0x16800) + (long)(int)local_24) == '\0')))) ||
         (((*puVar8 <= local_24 || (puVar8[1] == 0)) || ((ushort)puVar8[2] == 0))))
      goto LAB_02195888;
      iVar9 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        iVar9 = 0x1c;
      }
      puVar8 = (uint *)((ulong)(puVar8[1] * local_24 + (uint)(ushort)puVar8[2] * 8 + iVar9) +
                       (long)puVar8);
    }
    else {
      if (*(uint *)(lVar7 + 0x168f0) <= local_24) goto LAB_02195888;
      uVar11 = local_24;
      if (*(uint *)(lVar7 + 0x168e0) <= local_24) {
        uVar11 = 0;
      }
      puVar8 = *(uint **)(*(long *)(lVar7 + 0x168e8) + (ulong)uVar11 * 8);
    }
    if (puVar8 != (uint *)0x0) {
      if (*puVar8 == 0) {
LAB_021958b8:
        uVar11 = 0;
      }
      else {
        cVar10 = *PTR_DAT_04bc25e8;
        do {
          if (cVar10 == '\0') {
            cVar10 = '\x01';
            *(undefined8 *)puVar3 = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
            *puVar2 = 1;
          }
          else {
            uVar11 = *(uint *)(puVar3 + 8);
            if (-1 < (int)uVar11) {
              if (((byte *)((ulong)uVar11 + (long)puVar8) == (byte *)0x0) ||
                 (bVar1 = *(byte *)((ulong)uVar11 + (long)puVar8), uVar11 = (uint)bVar1, 4 < bVar1))
              goto LAB_021958b8;
              goto LAB_021958bc;
            }
            if (uVar11 != 0xffffffff) goto LAB_021958b8;
          }
          puVar4 = (uint *)(ulong)*puVar8;
          uVar11 = 0;
          if ((*puVar8 == 0) || (puVar8 == puVar4)) goto LAB_021958bc;
          lVar7 = 0xc;
          if (*(char *)((long)puVar8 + (10 - (long)puVar4)) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar8 + (lVar7 - (long)puVar4);
          if (lVar7 == 0) goto LAB_021958b8;
          uVar12 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar4));
          *(undefined4 *)(puVar3 + 8) = 0xfffffffe;
          uVar11 = 0;
          if (uVar12 == 0) goto LAB_021958bc;
          piVar5 = (int *)(lVar7 + 4);
          while (piVar5[-1] != 0x378b2f14) {
            piVar5 = piVar5 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              uVar11 = 0;
              goto LAB_021958bc;
            }
          }
          iVar9 = 0;
          if (*piVar5 != -1) {
            iVar9 = *piVar5;
          }
          *(int *)(puVar3 + 8) = iVar9;
        } while (*puVar8 != 0);
        uVar11 = 0;
      }
LAB_021958bc:
      local_40 = (undefined *)CONCAT44(local_40._4_4_,uVar11);
      if (uVar11 == 4) {
        *(undefined4 *)(param_1 + 0x6e0) = 0;
        return;
      }
      if (((uVar11 != 0) || (local_24 - 5 < 2)) || (local_24 == 0xe)) {
LAB_0219597c:
        *(undefined4 *)(param_1 + 0x6e0) = 1;
        return;
      }
      if ((local_24 == 1) && (lVar7 = FUN_0265c2a0((long)*(char *)(param_1 + 0xaf8)), lVar7 != 0)) {
        local_30 = 1;
        local_38 = lVar7;
        if (*(long **)(lVar7 + 0x28) == (long *)0x0) {
          local_2f = 0;
        }
        else {
          puVar6 = (undefined8 *)**(long **)(lVar7 + 0x28);
          local_2f = 0;
          if (puVar6 != (undefined8 *)0x0) {
            local_2f = (**(code **)*puVar6)();
          }
        }
        local_2f = local_2f & 1;
        local_40 = PTR_DAT_04bb67a0 + 0x10;
        iVar9 = *(int *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8) + 0x10764);
        FUN_02640184(&local_40);
        if (iVar9 == 1) goto LAB_0219597c;
      }
      *(undefined4 *)(param_1 + 0x6e0) = 2;
      return;
    }
  }
LAB_02195888:
  *(undefined4 *)(param_1 + 0x6e0) = 2;
  return;
}


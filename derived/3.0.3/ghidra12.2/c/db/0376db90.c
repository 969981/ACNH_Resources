
void FUN_0376db90(long *param_1,ushort param_2)

{
  undefined1 *__src;
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  long lVar8;
  char cVar9;
  undefined1 *puVar10;
  uint *puVar11;
  int *piVar12;
  undefined *local_50;
  undefined1 *puStack_48;
  undefined4 local_40;
  undefined1 local_3c [7];
  undefined1 local_35;
  uint local_18;
  uint local_14;
  
  puVar3 = PTR_DAT_04bc0678;
  puVar2 = PTR_DAT_04bc0670;
  local_35 = 0;
  local_3c[0] = 0;
  local_40 = 8;
  local_50 = PTR_DAT_04bb3768 + 0x10;
  if ((param_2 < 500) && (lVar8 = *(long *)PTR_DAT_04bb4958, lVar8 != 0)) {
    uVar1 = *(ushort *)(lVar8 + (ulong)param_2 * 2 + 0x620);
    if ((int)*(uint *)(lVar8 + 0x1c0) < 1) {
      if (*(long *)(lVar8 + 0xb0) == 0) {
        return;
      }
      puVar7 = *(uint **)(*(long *)(lVar8 + 0xb0) + 8);
      if (puVar7 == (uint *)0x0) {
        return;
      }
      uVar5 = (uint)uVar1;
      if ((uVar5 < *(uint *)(lVar8 + 200)) &&
         (*(char *)(*(long *)(lVar8 + 0xd0) + (ulong)uVar5) == '\0')) {
        return;
      }
      if (*puVar7 <= uVar5) {
        return;
      }
      if (puVar7[1] == 0) {
        return;
      }
      if ((ushort)puVar7[2] == 0) {
        return;
      }
      iVar6 = 0xc;
      if (*(char *)((long)puVar7 + 10) != '\0') {
        iVar6 = 0x1c;
      }
      puVar7 = (uint *)((ulong)(puVar7[1] * uVar5 + (uint)(ushort)puVar7[2] * 8 + iVar6) +
                       (long)puVar7);
    }
    else {
      if (*(uint *)(lVar8 + 0x1c0) <= (uint)uVar1) {
        return;
      }
      uVar5 = (uint)uVar1;
      if (*(uint *)(lVar8 + 0x1b0) <= uVar5) {
        uVar5 = 0;
      }
      puVar7 = *(uint **)(*(long *)(lVar8 + 0x1b8) + (ulong)uVar5 * 8);
    }
    if (puVar7 != (uint *)0x0) {
      if (*puVar7 != 0) {
        cVar9 = *PTR_DAT_04bc0670;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            *(undefined8 *)puVar3 = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
            *puVar2 = 1;
            *(undefined4 *)(puVar3 + 0x50) = 0xffffffff;
            *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
          }
          else {
            uVar5 = *(uint *)(puVar3 + 0x48);
            if (-1 < (int)uVar5) {
              puVar10 = (undefined1 *)((ulong)uVar5 + (long)puVar7);
              goto LAB_0376dd08;
            }
            if (uVar5 != 0xffffffff) break;
          }
          puVar11 = (uint *)(ulong)*puVar7;
          puVar10 = (undefined1 *)0x0;
          if ((*puVar7 == 0) || (puVar7 == puVar11)) goto LAB_0376dd08;
          lVar8 = 0xc;
          if (*(char *)((long)puVar7 + (10 - (long)puVar11)) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar7 + (lVar8 - (long)puVar11);
          if (lVar8 == 0) break;
          uVar4 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
          *(undefined4 *)(puVar3 + 0x48) = 0xfffffffe;
          puVar10 = (undefined1 *)0x0;
          if (uVar4 == 0) goto LAB_0376dd08;
          piVar12 = (int *)(lVar8 + 4);
          while (piVar12[-1] != 0x34c8eed5) {
            piVar12 = piVar12 + 2;
            uVar4 = uVar4 - 1;
            if (uVar4 == 0) {
              puVar10 = (undefined1 *)0x0;
              goto LAB_0376dd08;
            }
          }
          iVar6 = 0;
          if (*piVar12 != -1) {
            iVar6 = *piVar12;
          }
          *(int *)(puVar3 + 0x48) = iVar6;
        } while (*puVar7 != 0);
      }
      puVar10 = (undefined1 *)0x0;
LAB_0376dd08:
      __src = *(undefined1 **)PTR_PTR_04bc0668;
      if (puVar10 != (undefined1 *)0x0) {
        __src = puVar10;
      }
      puStack_48 = local_3c;
      if (local_3c != __src) {
        lVar8 = 0;
        do {
          if (__src[lVar8] == '\0') {
LAB_0376dddc:
            iVar6 = (int)lVar8;
            if (7 < iVar6) {
              iVar6 = 7;
            }
            goto LAB_0376dde8;
          }
          if (__src[lVar8 + 1] == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_0376dddc;
          }
          if (__src[lVar8 + 2] == '\0') {
            lVar8 = lVar8 + 2;
            goto LAB_0376dddc;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        iVar6 = 0;
LAB_0376dde8:
        memcpy(local_3c,__src,(long)iVar6);
        local_3c[iVar6] = 0;
      }
      local_14 = 0;
      uVar4 = FUN_020fc100(&local_14,&local_18,&local_50);
      if ((uVar4 & 1) != 0) {
        uVar4 = (ulong)local_14;
        if (local_18 < 0x20) {
          if (0x22 < local_14) {
            uVar4 = 0;
          }
          *(uint *)(*param_1 + uVar4 * 4) =
               *(uint *)(*param_1 + uVar4 * 4) & (1 << (ulong)(local_18 & 0x1f) ^ 0xffffffffU);
          uVar4 = (ulong)local_14;
          if (local_18 < 0x20) {
            if (0x22 < local_14) {
              uVar4 = 0;
            }
            *(uint *)(param_1[1] + uVar4 * 4) =
                 *(uint *)(param_1[1] + uVar4 * 4) & (1 << (ulong)(local_18 & 0x1f) ^ 0xffffffffU);
          }
        }
      }
    }
  }
  return;
}


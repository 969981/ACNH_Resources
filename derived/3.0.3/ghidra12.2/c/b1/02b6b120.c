
void FUN_02b6b120(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  char cVar12;
  int *piVar13;
  undefined *local_38;
  long local_30;
  undefined4 local_24;
  
  if (**(char **)(param_1 + 8) != '\0') {
    return;
  }
  puVar8 = *(uint **)(param_2 + 0x10);
  uVar6 = 0;
  if (puVar8 != (uint *)0x0) {
    uVar6 = *puVar8;
    if (uVar6 != 0 && puVar8 != (uint *)(ulong)uVar6) {
      puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar6);
      if (((*puVar10 != 0) && (uVar6 = puVar10[1], uVar6 != 0)) && ((ulong)(ushort)puVar10[2] != 0))
      {
        lVar9 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar10 + lVar9 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar9 != 0) {
          uVar2 = 0;
          if ((ulong)uVar6 != 0) {
            uVar2 = (uint)((ulong)((long)puVar8 - lVar9) / (ulong)uVar6);
          }
          if (*puVar10 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < *(uint *)PTR_DAT_04bc46b8) &&
             (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc46b8 + 8) + (long)(int)uVar2 * 2),
             uVar6 = (uint)uVar3, uVar3 < 4)) goto LAB_02b6b1d4;
        }
      }
    }
    uVar6 = 0;
  }
LAB_02b6b1d4:
  local_38 = (undefined *)CONCAT44(local_38._4_4_,uVar6);
  if (uVar6 != 1) {
    return;
  }
  local_24 = 0;
  uVar7 = FUN_02b677c0(&local_24,*(undefined4 *)(param_2 + 8));
  puVar5 = PTR_DAT_04bc4698;
  puVar4 = PTR_DAT_04bc4690;
  if ((uVar7 & 1) == 0) {
    return;
  }
  puVar8 = *(uint **)(param_2 + 0x10);
  if (puVar8 != (uint *)0x0) {
    puVar10 = (uint *)(ulong)*puVar8;
    if ((*puVar8 == 0) || (puVar8 == puVar10)) {
      if (puVar10 == (uint *)0x0) goto LAB_02b6b3f4;
    }
    else {
      puVar11 = (uint *)((long)puVar8 - (long)puVar10);
      if (((*puVar11 != 0) && (uVar6 = puVar11[1], uVar6 != 0)) && ((ulong)(ushort)puVar11[2] != 0))
      {
        lVar9 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar11 + lVar9 + (ulong)(ushort)puVar11[2] * 8;
        if (lVar9 != 0) {
          uVar2 = 0;
          if ((ulong)uVar6 != 0) {
            uVar2 = (uint)((ulong)((long)puVar8 - lVar9) / (ulong)uVar6);
          }
          if (*puVar11 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if (((uVar2 < *(uint *)PTR_DAT_04bc46a8) &&
              (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc46a8 + 8) + (long)(int)uVar2 * 2),
              uVar3 < 5)) && (uVar3 != 0)) {
            if (uVar3 == 1) {
              uVar6 = FUN_02b5afe0(local_24);
              local_38 = PTR_DAT_04bc4760 + 0x10;
              lVar9 = *(long *)PTR_DAT_04bb5008;
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x5f0);
              if (*(uint *)(lVar9 + 0x5d0) <= uVar6) {
                return;
              }
              local_30 = *(long *)(*(long *)(lVar9 + 0x5d8) + (long)(int)uVar6 * 8);
              if (local_30 == 0) {
                return;
              }
              uVar7 = FUN_02ad1870(&local_38,**(undefined4 **)(param_1 + 0x18));
            }
            else {
              if (uVar3 != 4) {
                return;
              }
              FUN_02b72930(&local_38,*(undefined4 *)(param_2 + 8));
              if (local_30 == 0) {
                return;
              }
              uVar7 = FUN_02b73410(&local_38,**(undefined4 **)(param_1 + 0x18));
            }
            goto joined_r0x02b6b4a0;
          }
        }
      }
    }
    cVar12 = *PTR_DAT_04bc4690;
    while( true ) {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined4 *)(puVar5 + 0x18) = 0xffffffff;
        puVar10 = (uint *)(ulong)*puVar8;
      }
      else {
        uVar6 = *(uint *)(puVar5 + 0x14);
        if (-1 < (int)uVar6) {
          if ((ushort *)((ulong)uVar6 + (long)puVar8) != (ushort *)0x0) {
            local_38 = PTR_DAT_04bc4730 + 0x10;
            local_30 = 0;
            uVar6 = (uint)*(ushort *)((ulong)uVar6 + (long)puVar8);
            if (uVar6 != 0) {
              lVar9 = *(long *)PTR_DAT_04bb5008;
              if ((*(long *)(lVar9 + 0x2a8) != 0) && (*(long *)(*(long *)(lVar9 + 0x2a8) + 8) != 0))
              {
                uVar6 = uVar6 - *(ushort *)(lVar9 + 0x3f0);
                if (uVar6 < *(uint *)(lVar9 + 0x3d0)) {
                  local_30 = *(undefined8 *)(*(long *)(lVar9 + 0x3d8) + (long)(int)uVar6 * 8);
                }
                else {
                  local_30 = 0;
                }
              }
            }
            goto LAB_02b6b404;
          }
          break;
        }
        if (uVar6 != 0xffffffff) break;
      }
      if ((puVar10 == (uint *)0x0) || (puVar8 == puVar10)) break;
      lVar9 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar10)) != '\0') {
        lVar9 = 0x1c;
      }
      lVar9 = (long)puVar8 + (lVar9 - (long)puVar10);
      if (lVar9 == 0) break;
      uVar7 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar10));
      *(undefined4 *)(puVar5 + 0x14) = 0xfffffffe;
      if (uVar7 == 0) break;
      piVar13 = (int *)(lVar9 + 4);
      while (piVar13[-1] != 0xd664b5c) {
        piVar13 = piVar13 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_02b6b3f4;
      }
      iVar1 = 0;
      if (*piVar13 != -1) {
        iVar1 = *piVar13;
      }
      *(int *)(puVar5 + 0x14) = iVar1;
      puVar10 = (uint *)(ulong)*puVar8;
      if (*puVar8 == 0) break;
    }
  }
LAB_02b6b3f4:
  local_38 = PTR_DAT_04bc4730 + 0x10;
  local_30 = 0;
LAB_02b6b404:
  uVar7 = FUN_02acce10(&local_38,**(undefined4 **)(param_1 + 0x18));
joined_r0x02b6b4a0:
  if ((uVar7 & 1) != 0) {
    **(undefined1 **)(param_1 + 8) = 1;
    *(undefined4 *)**(undefined8 **)(param_1 + 0x10) = local_24;
  }
  return;
}


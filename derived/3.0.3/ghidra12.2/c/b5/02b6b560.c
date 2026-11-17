
void FUN_02b6b560(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  uint *puVar8;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  uint *puVar12;
  char cVar13;
  int *piVar14;
  undefined4 local_34;
  undefined *local_30;
  long local_28;
  
  puVar6 = PTR_DAT_04bc4698;
  puVar5 = PTR_DAT_04bc4690;
  if (**(char **)(param_1 + 8) != '\0') {
    return;
  }
  puVar8 = *(uint **)(param_2 + 0x10);
  if (puVar8 == (uint *)0x0) {
    return;
  }
  puVar10 = (uint *)(ulong)*puVar8;
  uVar3 = *(undefined4 *)(param_2 + 8);
  if (*puVar8 == 0 || puVar8 == puVar10) {
    if (puVar10 == (uint *)0x0) {
      return;
    }
LAB_02b6b62c:
    cVar13 = *PTR_DAT_04bc4690;
    do {
      if (cVar13 == '\0') {
        cVar13 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined4 *)(puVar6 + 0x18) = 0xffffffff;
        puVar10 = (uint *)(ulong)*puVar8;
      }
      else {
        uVar7 = *(uint *)(puVar6 + 0x14);
        if (-1 < (int)uVar7) {
          if ((ushort *)((ulong)uVar7 + (long)puVar8) == (ushort *)0x0) {
            return;
          }
          local_30 = PTR_DAT_04bc4730 + 0x10;
          uVar7 = (uint)*(ushort *)((ulong)uVar7 + (long)puVar8);
          if (uVar7 == 0) {
            return;
          }
          lVar9 = *(long *)PTR_DAT_04bb5008;
          if (*(long *)(lVar9 + 0x2a8) == 0) {
            return;
          }
          if (*(long *)(*(long *)(lVar9 + 0x2a8) + 8) == 0) {
            return;
          }
          uVar7 = uVar7 - *(ushort *)(lVar9 + 0x3f0);
          if (*(uint *)(lVar9 + 0x3d0) <= uVar7) {
            return;
          }
          local_28 = *(long *)(*(long *)(lVar9 + 0x3d8) + (long)(int)uVar7 * 8);
          if (local_28 == 0) {
            return;
          }
          goto LAB_02b6b97c;
        }
        if (uVar7 != 0xffffffff) {
          return;
        }
      }
      if (puVar10 == (uint *)0x0) {
        return;
      }
      if (puVar8 == puVar10) {
        return;
      }
      lVar9 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar10)) != '\0') {
        lVar9 = 0x1c;
      }
      lVar9 = (long)puVar8 + (lVar9 - (long)puVar10);
      if (lVar9 == 0) {
        return;
      }
      uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar10));
      *(undefined4 *)(puVar6 + 0x14) = 0xfffffffe;
      if (uVar11 == 0) {
        return;
      }
      piVar14 = (int *)(lVar9 + 4);
      while (piVar14[-1] != 0xd664b5c) {
        piVar14 = piVar14 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) {
          return;
        }
      }
      iVar1 = 0;
      if (*piVar14 != -1) {
        iVar1 = *piVar14;
      }
      *(int *)(puVar6 + 0x14) = iVar1;
      puVar10 = (uint *)(ulong)*puVar8;
      if (*puVar8 == 0) {
        return;
      }
    } while( true );
  }
  puVar12 = (uint *)((long)puVar8 - (long)puVar10);
  if (((*puVar12 == 0) || (uVar7 = puVar12[1], uVar7 == 0)) || ((ulong)(ushort)puVar12[2] == 0))
  goto LAB_02b6b62c;
  lVar9 = 0xc;
  if (*(char *)((long)puVar12 + 10) != '\0') {
    lVar9 = 0x1c;
  }
  lVar9 = (long)puVar12 + lVar9 + (ulong)(ushort)puVar12[2] * 8;
  if (lVar9 == 0) goto LAB_02b6b62c;
  uVar2 = 0;
  if ((ulong)uVar7 != 0) {
    uVar2 = (uint)((ulong)((long)puVar8 - lVar9) / (ulong)uVar7);
  }
  if (*puVar12 <= uVar2) {
    uVar2 = 0xffffffff;
  }
  if ((*(uint *)PTR_DAT_04bc46b8 <= uVar2) ||
     (uVar4 = *(ushort *)(*(long *)(PTR_DAT_04bc46b8 + 8) + (long)(int)uVar2 * 2),
     3 < uVar4 || uVar4 == 0)) goto LAB_02b6b62c;
  if (uVar4 != 1) {
    return;
  }
  if (uVar2 < *(uint *)PTR_DAT_04bc46a8) {
    uVar4 = *(ushort *)(*(long *)(PTR_DAT_04bc46a8 + 8) + (long)(int)uVar2 * 2);
    if (uVar4 < 5) {
      if (uVar4 == 4) {
        FUN_02b72930(&local_30,uVar3);
        if (local_28 == 0) {
          return;
        }
        uVar11 = FUN_02b73410(&local_30,**(undefined4 **)(param_1 + 0x18));
        goto joined_r0x02b6b88c;
      }
      if (uVar4 == 1) {
        local_34 = 0;
        uVar11 = FUN_02b677c0(&local_34,uVar3);
        if ((uVar11 & 1) == 0) {
          return;
        }
        uVar7 = FUN_02b5afe0(local_34);
        local_30 = PTR_DAT_04bc4760 + 0x10;
        lVar9 = *(long *)PTR_DAT_04bb5008;
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x5f0);
        if (*(uint *)(lVar9 + 0x5d0) <= uVar7) {
          return;
        }
        local_28 = *(long *)(*(long *)(lVar9 + 0x5d8) + (long)(int)uVar7 * 8);
        if (local_28 == 0) {
          return;
        }
        uVar11 = FUN_02ad1870(&local_30,**(undefined4 **)(param_1 + 0x18));
        goto joined_r0x02b6b88c;
      }
      if (uVar4 != 0) {
        return;
      }
    }
  }
  cVar13 = *PTR_DAT_04bc4690;
  while( true ) {
    if (cVar13 == '\0') {
      cVar13 = '\x01';
      *(undefined8 *)puVar6 = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
      *puVar5 = 1;
      *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
      *(undefined4 *)(puVar6 + 0x18) = 0xffffffff;
      puVar10 = (uint *)(ulong)*puVar8;
    }
    else {
      uVar7 = *(uint *)(puVar6 + 0x14);
      if (-1 < (int)uVar7) {
        if ((ushort *)((ulong)uVar7 + (long)puVar8) != (ushort *)0x0) {
          local_30 = PTR_DAT_04bc4730 + 0x10;
          local_28 = 0;
          uVar7 = (uint)*(ushort *)((ulong)uVar7 + (long)puVar8);
          if (uVar7 != 0) {
            lVar9 = *(long *)PTR_DAT_04bb5008;
            if ((*(long *)(lVar9 + 0x2a8) != 0) && (*(long *)(*(long *)(lVar9 + 0x2a8) + 8) != 0)) {
              uVar7 = uVar7 - *(ushort *)(lVar9 + 0x3f0);
              if (uVar7 < *(uint *)(lVar9 + 0x3d0)) {
                local_28 = *(long *)(*(long *)(lVar9 + 0x3d8) + (long)(int)uVar7 * 8);
              }
              else {
                local_28 = 0;
              }
            }
          }
          goto LAB_02b6b97c;
        }
        break;
      }
      if (uVar7 != 0xffffffff) break;
    }
    if ((puVar10 == (uint *)0x0) || (puVar8 == puVar10)) break;
    lVar9 = 0xc;
    if (*(char *)((long)puVar8 + (10 - (long)puVar10)) != '\0') {
      lVar9 = 0x1c;
    }
    lVar9 = (long)puVar8 + (lVar9 - (long)puVar10);
    if (lVar9 == 0) break;
    uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar10));
    *(undefined4 *)(puVar6 + 0x14) = 0xfffffffe;
    if (uVar11 == 0) break;
    piVar14 = (int *)(lVar9 + 4);
    while (piVar14[-1] != 0xd664b5c) {
      piVar14 = piVar14 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) goto LAB_02b6b96c;
    }
    iVar1 = 0;
    if (*piVar14 != -1) {
      iVar1 = *piVar14;
    }
    *(int *)(puVar6 + 0x14) = iVar1;
    puVar10 = (uint *)(ulong)*puVar8;
    if (*puVar8 == 0) break;
  }
LAB_02b6b96c:
  local_30 = PTR_DAT_04bc4730 + 0x10;
  local_28 = 0;
LAB_02b6b97c:
  uVar11 = FUN_02acce10(&local_30,**(undefined4 **)(param_1 + 0x18));
joined_r0x02b6b88c:
  if ((uVar11 & 1) != 0) {
    **(undefined1 **)(param_1 + 8) = 1;
    *(undefined4 *)**(undefined8 **)(param_1 + 0x10) = uVar3;
  }
  return;
}



uint * FUN_017f2a10(long param_1)

{
  int iVar1;
  short sVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  uint *puVar8;
  char cVar9;
  uint *puVar10;
  ulong uVar11;
  uint *puVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  long local_48;
  undefined8 local_28;
  
  puVar5 = PTR_DAT_04bbe4c0;
  puVar3 = PTR_DAT_04bbe4b8;
  puVar4 = PTR_DAT_04bb46d0;
  lVar14 = *(long *)PTR_DAT_04bb46d0;
  if (((*(char *)(param_1 + 0x1c0) != '\0') &&
      (uVar6 = (uint)*(ushort *)(param_1 + 0x1ce) - (uint)*(ushort *)(lVar14 + 0xe00),
      uVar6 < *(uint *)(lVar14 + 0xde0))) &&
     (puVar8 = *(uint **)(*(long *)(lVar14 + 0xde8) + (long)(int)uVar6 * 8), puVar8 != (uint *)0x0))
  {
    if (*puVar8 != 0) {
      cVar9 = *PTR_DAT_04bbe4b8;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        }
        else {
          uVar6 = *(uint *)(puVar5 + 0x14);
          if (-1 < (int)uVar6) {
            puVar10 = (uint *)((ulong)uVar6 + (long)puVar8);
            goto LAB_017f2b38;
          }
          if (uVar6 != 0xffffffff) break;
        }
        puVar12 = (uint *)(ulong)*puVar8;
        puVar10 = (uint *)0x0;
        if ((*puVar8 == 0) || (puVar8 == puVar12)) goto LAB_017f2b38;
        lVar15 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar12)) != '\0') {
          lVar15 = 0x1c;
        }
        lVar15 = (long)puVar8 + (lVar15 - (long)puVar12);
        if (lVar15 == 0) break;
        uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar12));
        *(undefined4 *)(puVar5 + 0x14) = 0xfffffffe;
        puVar10 = (uint *)0x0;
        if (uVar11 == 0) goto LAB_017f2b38;
        piVar13 = (int *)(lVar15 + 4);
        while (piVar13[-1] != 0x4b9c4229) {
          piVar13 = piVar13 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) {
            puVar10 = (uint *)0x0;
            goto LAB_017f2b38;
          }
        }
        iVar1 = 0;
        if (*piVar13 != -1) {
          iVar1 = *piVar13;
        }
        *(int *)(puVar5 + 0x14) = iVar1;
      } while (*puVar8 != 0);
    }
    puVar10 = (uint *)0x0;
LAB_017f2b38:
    puVar8 = *(uint **)PTR_PTR_04bbe4d8;
    if (puVar10 != (uint *)0x0) {
      puVar8 = puVar10;
    }
    if (puVar8 != (uint *)0x0) {
      return puVar8;
    }
  }
  puVar3 = PTR_DAT_04bb43c0;
  if (*(short *)(param_1 + 0xbc) != *(short *)PTR_DAT_04bb3170 || *(int *)(param_1 + 0x208) != -1) {
    uVar7 = 0xea;
    goto LAB_017f2d00;
  }
  sVar2 = *(short *)(param_1 + 0xb4);
  if (sVar2 == -2) {
    local_28 = 0x139b;
    FUN_0277d4ac(&local_28);
    puVar3 = PTR_DAT_04bb43c0;
    local_48 = 0;
    local_58 = PTR_DAT_04bc0510 + 0x10;
    local_50 = (undefined4)local_28;
    local_4c = local_28._4_4_;
    lVar15 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(&local_50);
    if (*(long *)puVar3 != 0) {
      lVar15 = *(long *)(lVar15 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar15 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        lVar15 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(&local_28);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if (uVar6 < *(uint *)(lVar15 + 0x1d8)) {
          lVar15 = *(long *)(lVar15 + 0x1e0);
          goto LAB_017f2ce8;
        }
      }
    }
  }
  else {
    local_48 = 0;
    local_50 = CONCAT22(*(undefined2 *)(param_1 + 0xb6),sVar2);
    local_4c = *(undefined4 *)(param_1 + 0xb8);
    local_58 = PTR_DAT_04bc0510 + 0x10;
    lVar15 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(&local_50);
    if (*(long *)puVar3 != 0) {
      lVar15 = *(long *)(lVar15 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar15 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        lVar15 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4((short *)(param_1 + 0xb4));
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if (uVar6 < *(uint *)(lVar15 + 0x1d8)) {
          lVar15 = *(long *)(lVar15 + 0x1e0);
LAB_017f2ce8:
          lVar15 = *(long *)(lVar15 + (long)(int)uVar6 * 8);
          if (lVar15 != 0) {
            local_48 = lVar15;
          }
        }
      }
    }
  }
  uVar7 = FUN_01b020f0(&local_58);
LAB_017f2d00:
  puVar8 = (uint *)FUN_017bfc80(lVar14,uVar7);
  puVar5 = PTR_DAT_04bbe4c0;
  puVar3 = PTR_DAT_04bbe4b8;
  if (puVar8 == (uint *)0x0) {
    lVar14 = *(long *)puVar4;
    if ((-(uint)*(ushort *)(lVar14 + 0xe00) < *(uint *)(lVar14 + 0xde0)) &&
       (puVar8 = *(uint **)(*(long *)(lVar14 + 0xde8) + (ulong)*(ushort *)(lVar14 + 0xe00) * -8),
       puVar8 != (uint *)0x0)) {
      if (*puVar8 != 0) {
        cVar9 = *PTR_DAT_04bbe4b8;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          }
          else {
            uVar6 = *(uint *)(puVar5 + 0x14);
            if (-1 < (int)uVar6) {
              puVar10 = (uint *)((ulong)uVar6 + (long)puVar8);
              goto LAB_017f2e08;
            }
            if (uVar6 != 0xffffffff) break;
          }
          puVar12 = (uint *)(ulong)*puVar8;
          puVar10 = (uint *)0x0;
          if ((*puVar8 == 0) || (puVar8 == puVar12)) goto LAB_017f2e08;
          lVar14 = 0xc;
          if (*(char *)((long)puVar8 + (10 - (long)puVar12)) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar8 + (lVar14 - (long)puVar12);
          if (lVar14 == 0) break;
          uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar12));
          *(undefined4 *)(puVar5 + 0x14) = 0xfffffffe;
          puVar10 = (uint *)0x0;
          if (uVar11 == 0) goto LAB_017f2e08;
          piVar13 = (int *)(lVar14 + 4);
          while (piVar13[-1] != 0x4b9c4229) {
            piVar13 = piVar13 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) {
              puVar10 = (uint *)0x0;
              goto LAB_017f2e08;
            }
          }
          iVar1 = 0;
          if (*piVar13 != -1) {
            iVar1 = *piVar13;
          }
          *(int *)(puVar5 + 0x14) = iVar1;
        } while (*puVar8 != 0);
      }
      puVar10 = (uint *)0x0;
LAB_017f2e08:
      puVar8 = *(uint **)PTR_PTR_04bbe4d8;
      if (puVar10 != (uint *)0x0) {
        puVar8 = puVar10;
      }
    }
  }
  return puVar8;
}


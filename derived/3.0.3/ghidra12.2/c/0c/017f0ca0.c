
long FUN_017f0ca0(long param_1)

{
  int iVar1;
  short sVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint *puVar6;
  char cVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  int *piVar11;
  long lVar12;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  long local_40;
  undefined8 local_38;
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar12 = *(long *)PTR_DAT_04bb46d0;
  if (*(short *)(param_1 + 0xbc) != *(short *)PTR_DAT_04bb3170 || *(int *)(param_1 + 0x208) != -1) {
    uVar5 = 0xea;
    goto LAB_017f0e6c;
  }
  sVar2 = *(short *)(param_1 + 0xb4);
  if (sVar2 == -2) {
    local_38 = 0x139b;
    FUN_0277d4ac(&local_38);
    puVar3 = PTR_DAT_04bb43c0;
    local_40 = 0;
    local_50 = PTR_DAT_04bc0510 + 0x10;
    local_48 = (undefined4)local_38;
    local_44 = local_38._4_4_;
    lVar9 = *(long *)PTR_DAT_04bb43c0;
    uVar5 = FUN_0277d6c4(&local_48);
    if (*(long *)puVar3 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        lVar9 = *(long *)PTR_DAT_04bc0428;
        uVar5 = FUN_0277d6c4(&local_38);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if (uVar5 < *(uint *)(lVar9 + 0x1d8)) {
          lVar9 = *(long *)(lVar9 + 0x1e0);
          goto LAB_017f0e58;
        }
      }
    }
  }
  else {
    local_40 = 0;
    local_48 = CONCAT22(*(undefined2 *)(param_1 + 0xb6),sVar2);
    local_44 = *(undefined4 *)(param_1 + 0xb8);
    local_50 = PTR_DAT_04bc0510 + 0x10;
    lVar9 = *(long *)PTR_DAT_04bb43c0;
    uVar5 = FUN_0277d6c4(&local_48);
    if (*(long *)puVar3 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        lVar9 = *(long *)PTR_DAT_04bc0428;
        uVar5 = FUN_0277d6c4((short *)(param_1 + 0xb4));
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if (uVar5 < *(uint *)(lVar9 + 0x1d8)) {
          lVar9 = *(long *)(lVar9 + 0x1e0);
LAB_017f0e58:
          lVar9 = *(long *)(lVar9 + (long)(int)uVar5 * 8);
          if (lVar9 != 0) {
            local_40 = lVar9;
          }
        }
      }
    }
  }
  uVar5 = FUN_01b020f0(&local_50);
LAB_017f0e6c:
  puVar4 = PTR_DAT_04bb5c60;
  puVar3 = PTR_DAT_04bb5c58;
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x200);
  if ((uVar5 < *(uint *)(lVar12 + 0x1e0)) &&
     (puVar6 = *(uint **)(*(long *)(lVar12 + 0x1e8) + (long)(int)uVar5 * 8), puVar6 != (uint *)0x0))
  {
    if (*puVar6 != 0) {
      cVar7 = *PTR_DAT_04bb5c58;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar5 = *(uint *)(puVar4 + 0x2c);
          if (-1 < (int)uVar5) {
            lVar9 = (ulong)uVar5 + (long)puVar6;
            goto LAB_017f0f68;
          }
          if (uVar5 != 0xffffffff) break;
        }
        puVar10 = (uint *)(ulong)*puVar6;
        lVar9 = 0;
        if ((*puVar6 == 0) || (puVar6 == puVar10)) goto LAB_017f0f68;
        lVar12 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar10)) != '\0') {
          lVar12 = 0x1c;
        }
        lVar12 = (long)puVar6 + (lVar12 - (long)puVar10);
        if (lVar12 == 0) break;
        uVar8 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar10));
        *(undefined4 *)(puVar4 + 0x2c) = 0xfffffffe;
        lVar9 = 0;
        if (uVar8 == 0) goto LAB_017f0f68;
        piVar11 = (int *)(lVar12 + 4);
        while (piVar11[-1] != 0x4b9c4229) {
          piVar11 = piVar11 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) {
            lVar9 = 0;
            goto LAB_017f0f68;
          }
        }
        iVar1 = 0;
        if (*piVar11 != -1) {
          iVar1 = *piVar11;
        }
        *(int *)(puVar4 + 0x2c) = iVar1;
      } while (*puVar6 != 0);
    }
    lVar9 = 0;
LAB_017f0f68:
    lVar12 = *(long *)PTR_PTR_04bb5c50;
    if (lVar9 != 0) {
      lVar12 = lVar9;
    }
  }
  else {
    lVar12 = 0;
  }
  return lVar12;
}


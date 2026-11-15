
bool FUN_01fb29b0(long param_1,undefined4 *param_2)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  char cVar10;
  uint uVar11;
  ulong uVar12;
  uint *puVar13;
  int *piVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  long local_40;
  undefined4 local_34;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_40 = 0;
  local_50 = PTR_DAT_04bc0510 + 0x10;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  lVar16 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_48);
  if (*(long *)puVar3 != 0) {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar16 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      lVar16 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(param_2);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if (uVar6 < *(uint *)(lVar16 + 0x1d8)) {
        lVar16 = *(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8);
        if (lVar16 != 0) {
          local_40 = lVar16;
        }
      }
    }
  }
  uVar6 = FUN_01ae3210(&local_50);
  uVar7 = FUN_01ae3bc0(&local_50);
  lVar16 = *(long *)(param_1 + 8);
  uVar15 = *(undefined8 *)PTR_DAT_04bb4138;
  (**(code **)(*(long *)(lVar16 + 0x3e0) + 0x18))(lVar16 + 0x3e0);
  local_34 = FUN_006bd550(*(undefined8 *)(lVar16 + 1000),0);
  puVar8 = (uint *)FUN_0079e770(uVar15,&local_34);
  puVar4 = PTR_DAT_04bb40b8;
  puVar3 = PTR_DAT_04bb40b0;
  bVar5 = false;
  if (puVar8 != (uint *)0x0) {
    if (*puVar8 == 0) {
LAB_01fb2be4:
      uVar9 = 0;
    }
    else {
      cVar10 = *PTR_DAT_04bb40b0;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined4 *)(puVar4 + 0xa0) = 0xffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x98) = 0xffffffffffffffff;
        }
        else {
          uVar9 = *(uint *)(puVar4 + 0x68);
          if (-1 < (int)uVar9) {
            if (((byte *)((ulong)uVar9 + (long)puVar8) == (byte *)0x0) ||
               (bVar2 = *(byte *)((ulong)uVar9 + (long)puVar8), uVar9 = (uint)bVar2, 0xe < bVar2))
            goto LAB_01fb2be4;
            goto LAB_01fb2be8;
          }
          if (uVar9 != 0xffffffff) goto LAB_01fb2be4;
        }
        puVar13 = (uint *)(ulong)*puVar8;
        uVar9 = 0;
        if ((*puVar8 == 0) || (puVar8 == puVar13)) goto LAB_01fb2be8;
        lVar16 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar13)) != '\0') {
          lVar16 = 0x1c;
        }
        lVar16 = (long)puVar8 + (lVar16 - (long)puVar13);
        if (lVar16 == 0) goto LAB_01fb2be4;
        uVar12 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar13));
        *(undefined4 *)(puVar4 + 0x68) = 0xfffffffe;
        uVar9 = 0;
        if (uVar12 == 0) goto LAB_01fb2be8;
        piVar14 = (int *)(lVar16 + 4);
        while (piVar14[-1] != 0x34eb5dc3) {
          piVar14 = piVar14 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) {
            uVar9 = 0;
            goto LAB_01fb2be8;
          }
        }
        iVar1 = 0;
        if (*piVar14 != -1) {
          iVar1 = *piVar14;
        }
        *(int *)(puVar4 + 0x68) = iVar1;
      } while (*puVar8 != 0);
      uVar9 = 0;
    }
LAB_01fb2be8:
    if (*puVar8 == 0) {
LAB_01fb2ce4:
      uVar11 = 0;
    }
    else {
      cVar10 = *puVar3;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined4 *)(puVar4 + 0xa0) = 0xffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x98) = 0xffffffffffffffff;
        }
        else {
          uVar11 = *(uint *)(puVar4 + 0x6c);
          if (-1 < (int)uVar11) {
            if (((byte *)((ulong)uVar11 + (long)puVar8) == (byte *)0x0) ||
               (bVar2 = *(byte *)((ulong)uVar11 + (long)puVar8), uVar11 = (uint)bVar2, 0xe < bVar2))
            goto LAB_01fb2ce4;
            goto LAB_01fb2ce8;
          }
          if (uVar11 != 0xffffffff) goto LAB_01fb2ce4;
        }
        puVar13 = (uint *)(ulong)*puVar8;
        uVar11 = 0;
        if ((*puVar8 == 0) || (puVar8 == puVar13)) goto LAB_01fb2ce8;
        lVar16 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar13)) != '\0') {
          lVar16 = 0x1c;
        }
        lVar16 = (long)puVar8 + (lVar16 - (long)puVar13);
        if (lVar16 == 0) goto LAB_01fb2ce4;
        uVar12 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar13));
        *(undefined4 *)(puVar4 + 0x6c) = 0xfffffffe;
        uVar11 = 0;
        if (uVar12 == 0) goto LAB_01fb2ce8;
        piVar14 = (int *)(lVar16 + 4);
        while (piVar14[-1] != 0x265ef22d) {
          piVar14 = piVar14 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) {
            uVar11 = 0;
            goto LAB_01fb2ce8;
          }
        }
        iVar1 = 0;
        if (*piVar14 != -1) {
          iVar1 = *piVar14;
        }
        *(int *)(puVar4 + 0x6c) = iVar1;
      } while (*puVar8 != 0);
      uVar11 = 0;
    }
LAB_01fb2ce8:
    if (uVar6 == uVar9) {
      uVar9 = uVar11;
    }
    else if (uVar6 != uVar11) {
      return false;
    }
    bVar5 = uVar7 == uVar9;
  }
  return bVar5;
}


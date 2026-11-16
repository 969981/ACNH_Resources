
void FUN_02743b80(ushort *param_1,long *param_2,uint param_3,ulong param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  long lVar14;
  ushort *puVar15;
  char cVar16;
  uint *puVar17;
  ulong uVar18;
  int *piVar19;
  undefined8 local_60;
  long local_58;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  puVar7 = PTR_DAT_04bb2208;
  lVar14 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_2 + 0x18))(param_2);
  local_60._0_4_ = FUN_006bd550(param_2[1],0);
  puVar11 = (uint *)FUN_027457e0(lVar14 + 0xca0,&local_60);
  puVar9 = PTR_DAT_04bb63a8;
  puVar8 = PTR_DAT_04bb63a0;
  if (puVar11 == (uint *)0x0) {
    return;
  }
  if (*puVar11 == 0) {
LAB_02743ce4:
    local_60._0_4_ = 0;
  }
  else {
    cVar16 = *PTR_DAT_04bb63a0;
    do {
      if (cVar16 == '\0') {
        cVar16 = '\x01';
        *(undefined8 *)puVar9 = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
        *puVar8 = 1;
        *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
      }
      else {
        uVar13 = *(uint *)(puVar9 + 0x1c);
        if (-1 < (int)uVar13) {
          if (((byte *)((ulong)uVar13 + (long)puVar11) == (byte *)0x0) ||
             (bVar4 = *(byte *)((ulong)uVar13 + (long)puVar11), local_60._0_4_ = (uint)bVar4,
             6 < bVar4)) goto LAB_02743ce4;
          goto LAB_02743ce8;
        }
        if (uVar13 != 0xffffffff) goto LAB_02743ce4;
      }
      puVar12 = (uint *)(ulong)*puVar11;
      local_60._0_4_ = 0;
      if ((*puVar11 == 0) || (puVar11 == puVar12)) goto LAB_02743ce8;
      lVar14 = 0xc;
      if (*(char *)((long)puVar11 + (10 - (long)puVar12)) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)puVar11 + (lVar14 - (long)puVar12);
      if (lVar14 == 0) goto LAB_02743ce4;
      uVar18 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar12));
      *(undefined4 *)(puVar9 + 0x1c) = 0xfffffffe;
      local_60._0_4_ = 0;
      if (uVar18 == 0) goto LAB_02743ce8;
      piVar19 = (int *)(lVar14 + 4);
      while (piVar19[-1] != 0x4f7333fd) {
        piVar19 = piVar19 + 2;
        uVar18 = uVar18 - 1;
        if (uVar18 == 0) {
          local_60._0_4_ = 0;
          goto LAB_02743ce8;
        }
      }
      iVar3 = 0;
      if (*piVar19 != -1) {
        iVar3 = *piVar19;
      }
      *(int *)(puVar9 + 0x1c) = iVar3;
    } while (*puVar11 != 0);
    local_60._0_4_ = 0;
  }
LAB_02743ce8:
  if ((uint)local_60 != 3) {
    return;
  }
  lVar14 = *(long *)puVar7;
  (**(code **)(*param_2 + 0x18))(param_2);
  local_60._0_4_ = FUN_006bd550(param_2[1],0);
  puVar12 = (uint *)FUN_027457e0(lVar14 + 0xca0,&local_60);
  puVar9 = PTR_DAT_04bb63a8;
  puVar8 = PTR_DAT_04bb63a0;
  if ((puVar12 != (uint *)0x0) && (*puVar12 != 0)) {
    cVar16 = *PTR_DAT_04bb63a0;
    do {
      if (cVar16 == '\0') {
        cVar16 = '\x01';
        *(undefined8 *)puVar9 = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
        *puVar8 = 1;
        *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
        uVar13 = *puVar12;
      }
      else {
        if (*(int *)(puVar9 + 8) != -1) break;
        uVar13 = *puVar12;
      }
      if ((uVar13 == 0) || (puVar17 = (uint *)(ulong)uVar13, puVar12 == puVar17)) break;
      lVar14 = 0xc;
      if (*(char *)((long)puVar12 + (10 - (long)puVar17)) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)puVar12 + (lVar14 - (long)puVar17);
      if (lVar14 == 0) break;
      uVar18 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar17));
      *(undefined4 *)(puVar9 + 8) = 0xfffffffe;
      if (uVar18 == 0) break;
      piVar19 = (int *)(lVar14 + 4);
      while (piVar19[-1] != 0x54706054) {
        piVar19 = piVar19 + 2;
        uVar18 = uVar18 - 1;
        if (uVar18 == 0) goto LAB_02743e04;
      }
      iVar3 = 0;
      if (*piVar19 != -1) {
        iVar3 = *piVar19;
      }
      *(int *)(puVar9 + 8) = iVar3;
      if (*puVar12 == 0) break;
    } while( true );
  }
LAB_02743e04:
  lVar14 = *(long *)puVar7;
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar10 = FUN_006bd550(param_2[1],0);
  local_60 = (undefined *)CONCAT44(local_60._4_4_,uVar10);
  puVar12 = (uint *)FUN_027457e0(lVar14 + 0xca0,&local_60);
  puVar8 = PTR_DAT_04bb63a8;
  puVar7 = PTR_DAT_04bb63a0;
  if (puVar12 == (uint *)0x0) {
    uVar13 = 0;
  }
  else {
    puVar15 = param_1;
    if (*puVar12 != 0) {
      cVar16 = *PTR_DAT_04bb63a0;
      do {
        if (cVar16 == '\0') {
          cVar16 = '\x01';
          *(undefined8 *)puVar8 = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
          *puVar7 = 1;
          *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
          uVar13 = *puVar12;
        }
        else {
          uVar13 = *(uint *)(puVar8 + 8);
          if (-1 < (int)uVar13) {
            if (((ushort *)((ulong)uVar13 + (long)puVar12) != (ushort *)0x0) &&
               (uVar5 = *(ushort *)((ulong)uVar13 + (long)puVar12), uVar5 < 0x80)) {
              puVar15 = param_1 + uVar5;
            }
            break;
          }
          if (uVar13 != 0xffffffff) break;
          uVar13 = *puVar12;
        }
        if ((uVar13 == 0) || (puVar17 = (uint *)(ulong)uVar13, puVar12 == puVar17)) break;
        lVar14 = 0xc;
        if (*(char *)((long)puVar12 + (10 - (long)puVar17)) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar12 + (lVar14 - (long)puVar17);
        if (lVar14 == 0) break;
        uVar18 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar17));
        *(undefined4 *)(puVar8 + 8) = 0xfffffffe;
        if (uVar18 == 0) break;
        piVar19 = (int *)(lVar14 + 4);
        while (piVar19[-1] != 0x54706054) {
          piVar19 = piVar19 + 2;
          uVar18 = uVar18 - 1;
          if (uVar18 == 0) goto LAB_02743f18;
        }
        iVar3 = 0;
        if (*piVar19 != -1) {
          iVar3 = *piVar19;
        }
        *(int *)(puVar8 + 8) = iVar3;
        if (*puVar12 == 0) break;
      } while( true );
    }
LAB_02743f18:
    uVar13 = (uint)*puVar15;
  }
  puVar8 = PTR_DAT_04bb63a8;
  puVar7 = PTR_DAT_04bb63a0;
  uVar6 = 1 << (ulong)(param_3 & 0x1f);
  uVar2 = uVar13 | uVar6;
  if ((param_4 & 1) == 0) {
    uVar2 = uVar13 & (uVar6 ^ 0xffffffff);
  }
  if (*puVar11 != 0) {
    cVar16 = *PTR_DAT_04bb63a0;
    do {
      if (cVar16 == '\0') {
        cVar16 = '\x01';
        *(undefined8 *)puVar8 = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
        *puVar7 = 1;
        *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
      }
      else {
        uVar13 = *(uint *)(puVar8 + 0x20);
        if (-1 < (int)uVar13) {
          lVar14 = (ulong)uVar13 + (long)puVar11;
          goto LAB_02744018;
        }
        if (uVar13 != 0xffffffff) break;
      }
      puVar12 = (uint *)(ulong)*puVar11;
      lVar14 = 0;
      if ((*puVar11 == 0) || (puVar11 == puVar12)) goto LAB_02744018;
      lVar14 = 0xc;
      if (*(char *)((long)puVar11 + (10 - (long)puVar12)) != '\0') {
        lVar14 = 0x1c;
      }
      lVar1 = (long)puVar11 + (lVar14 - (long)puVar12);
      if (lVar1 == 0) break;
      uVar18 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar12));
      *(undefined4 *)(puVar8 + 0x20) = 0xfffffffe;
      lVar14 = 0;
      if (uVar18 == 0) goto LAB_02744018;
      piVar19 = (int *)(lVar1 + 4);
      while (piVar19[-1] != 0x45f320f2) {
        piVar19 = piVar19 + 2;
        uVar18 = uVar18 - 1;
        if (uVar18 == 0) {
          lVar14 = 0;
          goto LAB_02744018;
        }
      }
      iVar3 = 0;
      if (*piVar19 != -1) {
        iVar3 = *piVar19;
      }
      *(int *)(puVar8 + 0x20) = iVar3;
    } while (*puVar11 != 0);
  }
  lVar14 = 0;
LAB_02744018:
  local_58 = *(long *)PTR_PTR_04bb6398;
  if (lVar14 != 0) {
    local_58 = lVar14;
  }
  local_60 = PTR_DAT_04bb2020 + 0x10;
  FUN_02742300(param_1,&local_60,uVar2);
  uVar13 = param_3 | 0x10000;
  if ((param_4 & 1) == 0) {
    uVar13 = param_3;
  }
  local_60._4_4_ = uVar13;
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar10 = FUN_006bd550(param_2[1],0);
  local_60 = (undefined *)CONCAT44(local_60._4_4_,uVar10);
  local_38 = 0;
  local_58 = CONCAT62(local_58._2_6_,9);
  local_32 = 0;
  local_34 = 0xff00;
  if (-1 < *(int *)(PTR_DAT_04bb6328 + 8)) {
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,*(int *)(PTR_DAT_04bb6328 + 8),&local_38,
                 &local_60,0xc,0);
  }
  return;
}


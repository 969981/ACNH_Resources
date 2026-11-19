
void FUN_039af390(long param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  undefined2 uVar7;
  short sVar8;
  undefined8 *puVar9;
  long *plVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  undefined4 *puVar15;
  uint uVar16;
  long lVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  uint local_1a74;
  char acStack_1a68 [512];
  uint local_1868 [512];
  uint local_1068 [512];
  uint auStack_868 [514];
  
  lVar21 = *(long *)(param_3 + 0x110);
  *(long *)(param_1 + 0xd8) = param_3;
  uVar13 = param_2;
  if (*(uint *)(param_1 + 8) <= param_2) {
    uVar13 = 0;
  }
  puVar18 = (uint *)(*(long *)(param_1 + 0x10) + (long)(int)uVar13 * 0x18);
  if ((short)puVar18[4] == 1) {
    FUN_039af7d0(param_1,param_2,**(undefined2 **)(puVar18 + 2),param_3);
    uVar13 = (uint)**(ushort **)(puVar18 + 2);
    if (*(uint *)(param_1 + 0x38) <= (uint)**(ushort **)(puVar18 + 2)) {
      uVar13 = 0;
    }
    puVar15 = (undefined4 *)(*(long *)(param_1 + 0x40) + (ulong)uVar13 * 0xb8);
    sVar8 = *(short *)((long)puVar15 + 2);
    iVar12 = (int)sVar8;
    if (*(uint *)(param_1 + 0x80) <= (uint)(int)sVar8) {
      iVar12 = 0;
    }
    if ((*(byte *)(*(long *)(param_1 + 0x88) + (long)iVar12 * 0x28 + 0x20) >> 2 & 1) != 0) {
      uVar3 = *puVar15;
      lVar1 = *(long *)(param_1 + 0x40) + (ulong)uVar13 * 0xb8 + 0x18;
      FUN_003a5454(lVar1);
      puVar9 = *(undefined8 **)(param_1 + 0xc0);
      if (puVar9 != (undefined8 *)0x0) {
        (**(code **)*puVar9)(puVar9,param_1,param_3,uVar3,lVar1);
      }
      FUN_003a54e0(lVar1,lVar21);
      return;
    }
  }
  else {
    lVar1 = param_1 + 0x18;
    *(undefined2 *)(param_1 + 0x22) = *(undefined2 *)(lVar21 + 0x50);
    FUN_003a8484(lVar1);
    uVar11 = (uint)(ushort)puVar18[4];
    uVar13 = *puVar18;
    if (uVar11 <= *puVar18) {
      uVar13 = uVar11;
    }
    if (uVar13 == 0) {
      uVar19 = 0;
      uVar11 = 0;
      local_1a74 = 0;
    }
    else {
      lVar23 = *(long *)(puVar18 + 2);
      uVar14 = 0;
      do {
        acStack_1a68[*(ushort *)(lVar23 + (-(uVar14 >> 0x1f) & 0xfffffffe00000000 | uVar14 << 1))] =
             '\x01';
        uVar22 = uVar14 + 1;
        uVar14 = uVar22 & 0xffffffff;
      } while (uVar13 != (uint)uVar22);
      uVar14 = 0;
      uVar11 = 0;
      local_1a74 = 0;
      uVar19 = 0;
      uVar22 = 0;
      do {
        uVar7 = *(undefined2 *)(lVar23 + (-(uVar22 >> 0x1f) & 0xfffffffe00000000 | uVar22 << 1));
        *(undefined2 *)(param_1 + 0xea) = uVar7;
        FUN_039af7d0(param_1,param_2,uVar7,param_3);
        uVar4 = *(uint *)(param_1 + 0x38);
        lVar17 = *(long *)(param_1 + 0x40);
        uVar16 = (uint)*(ushort *)(param_1 + 0xea);
        uVar2 = uVar16;
        if (uVar4 <= *(ushort *)(param_1 + 0xea)) {
          uVar2 = 0;
        }
        sVar8 = *(short *)(lVar17 + (ulong)uVar2 * 0xb8 + 2);
        iVar12 = (int)sVar8;
        if (*(uint *)(param_1 + 0x80) <= (uint)(int)sVar8) {
          iVar12 = 0;
        }
        if ((*(byte *)(*(long *)(param_1 + 0x88) + (long)iVar12 * 0x28 + 0x20) >> 2 & 1) != 0) {
          uVar5 = *(uint *)(lVar17 + (ulong)uVar2 * 0xb8 + 0xa8);
          if ((uVar5 >> 3 & 1) == 0) {
            local_1068[(int)uVar11] = uVar16;
            uVar11 = uVar11 + 1;
            uVar20 = uVar19;
          }
          else {
            uVar20 = uVar19 + 1;
            local_1868[(int)uVar19] = uVar16;
            uVar6 = *(ushort *)(lVar17 + (ulong)uVar2 * 0xb8 + 0xb0);
            if ((int)(uint)uVar6 < (int)uVar4) {
              acStack_1a68[uVar6] = '\0';
            }
          }
          uVar19 = uVar20;
          if ((uVar5 & 1) != 0) {
            auStack_868[(int)local_1a74] = (uint)uVar14;
            local_1a74 = local_1a74 + 1;
          }
        }
        uVar14 = uVar22 + 1;
        uVar22 = uVar14 & 0xffffffff;
      } while (uVar13 != (uint)uVar14);
    }
    uVar13 = (*(byte *)(param_1 + 0xec) & 1) << 1;
    if ((*(byte *)(param_1 + 0x24) & 2) != 0) {
      uVar13 = 2;
    }
    if (0 < (int)uVar11) {
      FUN_003a8a80(lVar1,uVar13);
      uVar14 = (ulong)uVar11;
      puVar18 = local_1068;
      do {
        uVar22 = (ulong)*puVar18 & 0xffff;
        *(short *)(param_1 + 0xea) = (short)*puVar18;
        if (acStack_1a68[uVar22] != '\0') {
          uVar11 = (uint)uVar22;
          if (*(uint *)(param_1 + 0x38) <= uVar11) {
            uVar11 = 0;
          }
          lVar23 = *(long *)(param_1 + 0x40) + (ulong)uVar11 * 0xb8;
          FUN_003a84a8(*(undefined4 *)(lVar23 + 0x10),lVar1,lVar23 + 0x18);
        }
        uVar14 = uVar14 - 1;
        puVar18 = puVar18 + 1;
      } while (uVar14 != 0);
      FUN_003a8ae0(lVar1);
    }
    if (0 < (int)uVar19) {
      FUN_003a8a80(lVar1,uVar13 | 1);
      uVar14 = (ulong)uVar19;
      puVar18 = local_1868;
      do {
        uVar22 = (ulong)*puVar18 & 0xffff;
        *(short *)(param_1 + 0xea) = (short)*puVar18;
        if (acStack_1a68[uVar22] != '\0') {
          uVar13 = (uint)uVar22;
          if (*(uint *)(param_1 + 0x38) <= uVar13) {
            uVar13 = 0;
          }
          lVar23 = *(long *)(param_1 + 0x40) + (ulong)uVar13 * 0xb8;
          uVar13 = (uint)*(ushort *)(lVar23 + 0xb0);
          if (*(uint *)(param_1 + 0x38) <= (uint)*(ushort *)(lVar23 + 0xb0)) {
            uVar13 = 0;
          }
          FUN_003a855c(*(undefined4 *)(lVar23 + 0x10),lVar1,lVar23 + 0x18,
                       *(long *)(param_1 + 0x40) + (ulong)uVar13 * 0xb8 + 0x18);
        }
        uVar14 = uVar14 - 1;
        puVar18 = puVar18 + 1;
      } while (uVar14 != 0);
      FUN_003a8ae0(lVar1);
    }
    plVar10 = *(long **)(param_1 + 0xc0);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))(plVar10,param_1,param_3,lVar1);
    }
    FUN_003a8a34(lVar1,lVar21);
    if (0 < (int)local_1a74) {
      uVar14 = (ulong)local_1a74;
      puVar18 = auStack_868;
      do {
        uVar13 = *puVar18;
        if (*(uint *)(param_1 + 0x38) <= uVar13) {
          uVar13 = 0;
        }
        lVar1 = *(long *)(param_1 + 0x40) + (long)(int)uVar13 * 0xb8 + 0x18;
        FUN_003a5454(lVar1);
        FUN_003a54e0(lVar1,lVar21);
        uVar14 = uVar14 - 1;
        puVar18 = puVar18 + 1;
      } while (uVar14 != 0);
    }
  }
  return;
}


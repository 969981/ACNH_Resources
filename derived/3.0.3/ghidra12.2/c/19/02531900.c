
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_02531900(byte *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  short *psVar8;
  uint *puVar9;
  uint *puVar10;
  int *piVar11;
  char cVar12;
  ulong uVar13;
  byte bVar14;
  byte bVar15;
  long lVar16;
  long lVar17;
  undefined4 local_64;
  undefined4 local_60;
  undefined2 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  int local_24;
  
  bVar1 = *param_1;
  bVar14 = *PTR_DAT_04bb32e0;
  bVar15 = bVar1;
  if (7 < bVar1) {
    bVar15 = 0xff;
  }
  if (7 < bVar14) {
    bVar14 = 0xff;
  }
  if (bVar15 == bVar14) {
    FUN_02507c6c(&local_58,1,1,1,0);
    local_60 = local_58._4_4_;
    bVar15 = (byte)local_58;
    if (7 < (byte)local_58) {
      bVar15 = 0xff;
    }
    local_64 = CONCAT31(local_64._1_3_,bVar15);
    local_5c = (undefined2)local_50;
    if (7 < (byte)local_58) {
      return false;
    }
    local_24 = CONCAT31(local_24._1_3_,(byte)local_58);
    uVar13 = FUN_02531900(&local_24);
    puVar2 = PTR_DAT_04bb5038;
    bVar15 = (byte)local_58;
    while( true ) {
      if ((uVar13 & 1) != 0) {
        return true;
      }
      uVar13 = (ulong)bVar15;
      do {
        if (uVar13 == 7) {
          return false;
        }
        uVar13 = uVar13 + 1;
        uVar7 = FUN_02507924(&local_64,puVar2 + uVar13);
      } while ((uVar7 & 1) == 0);
      bVar15 = puVar2[uVar13];
      if (7 < bVar15) break;
      local_64 = CONCAT31(local_64._1_3_,bVar15);
      local_24 = CONCAT31(local_24._1_3_,bVar15);
      uVar13 = FUN_02531900(&local_24);
    }
    return false;
  }
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_054f0960);
      puVar9 = (uint *)&DAT_054f0958;
      if (iVar6 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar9 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar9 = (uint *)(DAT_054f5738 + 0x204);
    if (bVar1 < 8) {
      puVar9 = (uint *)(DAT_054f5738 + 0x204) + (ulong)bVar1 * 2;
    }
  }
  local_58 = (undefined *)CONCAT44(local_58._4_4_,0x19);
  if ((*puVar9 >> 0x19 & 1) != 0) {
    return true;
  }
  local_24 = FUN_00a74b78(param_1);
  if ((local_24 != 9) && (local_24 != 0x13)) {
    return true;
  }
  if ((DAT_054f5738 == 0) || (uVar13 = (ulong)*param_1, 7 < uVar13)) {
    if ((DAT_054f0c70 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_054f0c70);
      psVar8 = &DAT_054f0c08;
      if (iVar6 != 0) {
        DAT_054f0c6c = 0;
        _DAT_054f0c44 = 0;
        DAT_054f0c1c._0_4_ = 0;
        DAT_054f0c1c._4_4_ = 0;
        DAT_054f0c24._0_4_ = 0;
        DAT_054f0c24._4_4_ = 0;
        DAT_054f0c2c._0_4_ = 0;
        DAT_054f0c2c._4_4_ = 0;
        DAT_054f0c34._0_4_ = 0;
        DAT_054f0c34._4_4_ = 0;
        DAT_054f0c3c._0_4_ = 0;
        DAT_054f0c3c._4_4_ = 0;
        _DAT_054f0c08 = 0;
        _DAT_054f0c10 = 1;
        DAT_054f0c14._0_4_ = 0;
        DAT_054f0c14._4_4_ = 0;
        DAT_054f0c68 = 1;
        DAT_054f0c48 = 0;
        DAT_054f0c50 = 0;
        DAT_054f0c58 = 0;
        DAT_054f0c60 = 0;
        __cxa_guard_release(&DAT_054f0c70);
        psVar8 = &DAT_054f0c08;
      }
    }
    else {
      psVar8 = &DAT_054f0c08;
    }
  }
  else {
    psVar8 = (short *)(DAT_054f5738 + uVar13 * 0xd0 +
                       (ulong)(*(uint *)(DAT_054f5738 + uVar13 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
  }
  if ((char)psVar8[0x32] == '\0') {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    if (((*psVar8 == *(short *)PTR_DAT_04bb6298) && (uVar4 = *(uint *)(psVar8 + 2), uVar4 < 0x149))
       && ((uVar5 = uVar4, uVar4 == 0x13b || (uVar4 == 0x122)))) {
      FUN_0252d8f0(&local_64,param_1);
      puVar2 = PTR_DAT_04bb43c0;
      lVar17 = *(long *)PTR_DAT_04bb43c0;
      uVar4 = FUN_0277d6c4(&local_64);
      if (*(long *)puVar2 != 0) {
        lVar17 = *(long *)(lVar17 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar17 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          FUN_01ad5d04(&local_58,&local_64);
          uVar13 = FUN_01ae5784(&local_58);
          if ((uVar13 & 1) != 0) {
            return false;
          }
        }
      }
    }
  }
  if (((DAT_054f0b68 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_054f0b68), iVar6 != 0)) {
    DAT_054f0b60 = 0;
    __cxa_guard_release(&DAT_054f0b68);
  }
  puVar3 = PTR_DAT_04bc2fe8;
  puVar2 = PTR_DAT_04bc2fe0;
  if (DAT_054f5738 == 0) {
    puVar9 = &DAT_054f0b60;
    goto LAB_02531ca8;
  }
  if ((int)*(uint *)(DAT_054f5738 + 0x1e0) < 1) {
    lVar17 = *(long *)(DAT_054f5738 + 0xd0);
    if (lVar17 == 0) {
LAB_02531c9c:
      puVar10 = (uint *)0x0;
    }
    else {
      puVar9 = *(uint **)(lVar17 + 8);
      if ((puVar9 != (uint *)0x0) &&
         ((((*(uint *)(DAT_054f5738 + 0xe8) <= uVar5 ||
            (*(char *)(*(long *)(DAT_054f5738 + 0xf0) + (ulong)uVar5) != '\0')) && (uVar5 < *puVar9)
           ) && ((puVar9[1] != 0 && ((ushort)puVar9[2] != 0)))))) {
        iVar6 = 0xc;
        if (*(char *)((long)puVar9 + 10) != '\0') {
          iVar6 = 0x1c;
        }
        puVar9 = (uint *)((ulong)(puVar9[1] * uVar5 + (uint)(ushort)puVar9[2] * 8 + iVar6) +
                         (long)puVar9);
        if (puVar9 != (uint *)0x0) goto LAB_02531ca8;
      }
      piVar11 = *(int **)(lVar17 + 8);
      puVar10 = (uint *)0x0;
      if (piVar11 != (int *)0x0) {
        if (((*(int *)(DAT_054f5738 + 0xe8) != 0) && (**(char **)(DAT_054f5738 + 0xf0) == '\0')) ||
           ((*piVar11 == 0 || ((piVar11[1] == 0 || ((ulong)*(ushort *)(piVar11 + 2) == 0))))))
        goto LAB_02531c9c;
        lVar17 = 0xc;
        if (*(char *)((long)piVar11 + 10) != '\0') {
          lVar17 = 0x1c;
        }
        puVar10 = (uint *)((long)piVar11 + lVar17 + (ulong)*(ushort *)(piVar11 + 2) * 8);
      }
    }
  }
  else if (uVar5 < *(uint *)(DAT_054f5738 + 0x1e0)) {
    uVar4 = uVar5;
    if (*(uint *)(DAT_054f5738 + 0x1d0) <= uVar5) {
      uVar4 = 0;
    }
    puVar9 = (uint *)(*(undefined8 **)(DAT_054f5738 + 0x1d8))[uVar4];
    if (puVar9 != (uint *)0x0) goto LAB_02531ca8;
    puVar10 = (uint *)**(undefined8 **)(DAT_054f5738 + 0x1d8);
  }
  else {
    puVar10 = (uint *)**(undefined8 **)(DAT_054f5738 + 0x1d8);
  }
  puVar9 = &DAT_054f0b60;
  if (puVar10 != (uint *)0x0) {
    puVar9 = puVar10;
  }
LAB_02531ca8:
  if (*puVar9 == 0) {
LAB_02531da8:
    if (2 < uVar5 - 0x2c) {
      return false;
    }
    FUN_0252d8f0(&local_64,param_1);
    puVar2 = PTR_DAT_04bb43c0;
    lVar16 = *(long *)PTR_DAT_04bb43c0;
    uVar5 = FUN_0277d6c4(&local_64);
    lVar17 = *(long *)puVar2;
    if (lVar17 != 0) {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar16 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        local_48 = 0;
        local_58 = PTR_DAT_04bc0510 + 0x10;
        local_50 = local_64;
        uStack_4c = local_60;
        uVar5 = FUN_0277d6c4(&local_50);
        if (*(long *)puVar2 != 0) {
          lVar17 = *(long *)(lVar17 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar17 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
            lVar17 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4(&local_64);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
            if (uVar5 < *(uint *)(lVar17 + 0x1d8)) {
              lVar17 = *(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar5 * 8);
              if (lVar17 != 0) {
                local_48 = lVar17;
              }
            }
          }
        }
        iVar6 = FUN_01ad78cc(&local_58);
        return iVar6 - 10U < 0xfffffffe;
      }
    }
    return true;
  }
  cVar12 = *PTR_DAT_04bc2fe0;
  do {
    if (cVar12 == '\0') {
      cVar12 = '\x01';
      *(undefined8 *)puVar3 = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
      *puVar2 = 1;
      *(undefined8 *)(puVar3 + 0xa0) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x60) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x68) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x70) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x78) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x80) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x88) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x90) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x98) = 0xffffffffffffffff;
    }
    else {
      uVar4 = *(uint *)(puVar3 + 0x5c);
      if (-1 < (int)uVar4) {
        if (((char *)((ulong)uVar4 + (long)puVar9) != (char *)0x0) &&
           (*(char *)((ulong)uVar4 + (long)puVar9) != '\0')) {
          return true;
        }
        goto LAB_02531da8;
      }
      if (uVar4 != 0xffffffff) goto LAB_02531da8;
    }
    lVar17 = (long)puVar9 - (ulong)*puVar9;
    if ((*puVar9 == 0) || (lVar17 == 0)) goto LAB_02531da8;
    lVar16 = 0xc;
    if (*(char *)(lVar17 + 10) != '\0') {
      lVar16 = 0x1c;
    }
    if (lVar16 + lVar17 == 0) goto LAB_02531da8;
    uVar13 = (ulong)*(ushort *)(lVar17 + 8);
    *(undefined4 *)(puVar3 + 0x5c) = 0xfffffffe;
    if (uVar13 == 0) goto LAB_02531da8;
    piVar11 = (int *)(lVar16 + lVar17 + 4);
    while (piVar11[-1] != -0x1aaf5421) {
      piVar11 = piVar11 + 2;
      uVar13 = uVar13 - 1;
      if (uVar13 == 0) goto LAB_02531da8;
    }
    iVar6 = 0;
    if (*piVar11 != -1) {
      iVar6 = *piVar11;
    }
    *(int *)(puVar3 + 0x5c) = iVar6;
    if (*puVar9 == 0) goto LAB_02531da8;
  } while( true );
}


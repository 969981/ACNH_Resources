
/* WARNING: Removing unreachable block (ram,0x02530350) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0252ffe8(byte *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  short *psVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint *puVar12;
  
  iVar5 = FUN_00a74b78();
  if (iVar5 == 4) {
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_054f0960);
        puVar12 = (uint *)&DAT_054f0958;
        if (iVar5 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
          puVar12 = (uint *)&DAT_054f0958;
        }
      }
      else {
        puVar12 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar12 = (uint *)(DAT_054f5738 + 0x204);
      if ((ulong)*param_1 < 8) {
        puVar12 = (uint *)(DAT_054f5738 + 0x204) + (ulong)*param_1 * 2;
      }
    }
    if ((*puVar12 >> 0x1e & 1) != 0) {
      return 1;
    }
    if ((DAT_054f5738 == 0) || (uVar7 = (ulong)*param_1, 7 < uVar7)) {
      if ((DAT_054f0c70 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_054f0c70);
        psVar8 = &DAT_054f0c08;
        if (iVar5 != 0) {
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
      psVar8 = (short *)(DAT_054f5738 + uVar7 * 0xd0 +
                         (ulong)(*(uint *)(DAT_054f5738 + uVar7 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
    }
    if (((((char)psVar8[0x32] != '\0') && (*psVar8 == DAT_04c487d4)) &&
        (*(uint *)(psVar8 + 2) < 0x149)) && (*(uint *)(psVar8 + 2) == 1)) {
      return 1;
    }
  }
  if ((DAT_054f5738 == 0) || (uVar7 = (ulong)*param_1, 7 < uVar7)) {
    if ((DAT_054f0c70 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_054f0c70);
      psVar8 = &DAT_054f0c08;
      if (iVar5 != 0) {
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
    psVar8 = (short *)(DAT_054f5738 + uVar7 * 0xd0 +
                       (ulong)(*(uint *)(DAT_054f5738 + uVar7 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
  }
  if ((((char)psVar8[0x32] != '\0') && (*psVar8 == DAT_04c487d4)) &&
     ((*(uint *)(psVar8 + 2) < 0x149 && (*(uint *)(psVar8 + 2) == 0x19)))) {
    return 1;
  }
  iVar5 = FUN_00a74b78(param_1);
  lVar6 = DAT_054f5738;
  if (iVar5 == 4) {
    if ((DAT_054f5738 == 0) || (uVar7 = (ulong)*param_1, 7 < uVar7)) {
      if ((DAT_054f0c70 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_054f0c70);
        psVar8 = &DAT_054f0c08;
        if (iVar5 != 0) {
          DAT_054f0c1c._0_4_ = 0;
          DAT_054f0c1c._4_4_ = 0;
          DAT_054f0c24._0_4_ = 0;
          DAT_054f0c24._4_4_ = 0;
          DAT_054f0c2c._0_4_ = 0;
          DAT_054f0c2c._4_4_ = 0;
          DAT_054f0c68 = 1;
          DAT_054f0c6c = 0;
          _DAT_054f0c44 = 0;
          DAT_054f0c34._0_4_ = 0;
          DAT_054f0c34._4_4_ = 0;
          DAT_054f0c3c._0_4_ = 0;
          DAT_054f0c3c._4_4_ = 0;
          _DAT_054f0c08 = 0;
          _DAT_054f0c10 = 1;
          DAT_054f0c14._0_4_ = 0;
          DAT_054f0c14._4_4_ = 0;
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
      psVar8 = (short *)(DAT_054f5738 + uVar7 * 0xd0 +
                         (ulong)(*(uint *)(DAT_054f5738 + uVar7 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
    }
    lVar6 = DAT_054f5738;
    if (((((char)psVar8[0x32] != '\0') && (*psVar8 == *(short *)PTR_DAT_04bb6298)) &&
        (*(uint *)(psVar8 + 2) < 0x149)) && (*(uint *)(psVar8 + 2) == 0x1a)) {
      uVar7 = (ulong)*param_1;
      puVar9 = (undefined8 *)(DAT_054f5738 + 0x2e8);
      if (uVar7 < 8) {
        puVar9 = puVar9 + uVar7 * 0x10;
        uVar2 = *(undefined8 *)(PTR_DAT_04bc31b0 + uVar7 * 0x30 + 8);
        uVar10 = *(undefined8 *)(PTR_DAT_04bc31b0 + uVar7 * 0x30 + 0x10);
        uVar11 = *(undefined8 *)(PTR_DAT_04bc31b0 + uVar7 * 0x30 + 0x18);
        *(undefined4 *)((long)puVar9 + 0x17) =
             *(undefined4 *)(PTR_DAT_04bc31b0 + uVar7 * 0x30 + 0x1f);
        *puVar9 = uVar2;
        puVar9[1] = uVar10;
        puVar9[2] = uVar11;
        bVar3 = *param_1;
        bVar4 = 7 < bVar3;
        if (bVar4) {
          bVar3 = 0xff;
        }
        puVar1 = PTR_DAT_04bc31b8 + (ulong)(uint)(int)(char)bVar3 * 0x70;
        if (bVar4) {
          puVar1 = PTR_DAT_04bc31b8;
        }
        uVar10 = *(undefined8 *)(puVar1 + 0x18);
        uVar2 = *(undefined8 *)(puVar1 + 0x10);
        puVar9[4] = *(undefined8 *)(puVar1 + 8);
        puVar9[5] = uVar2;
        puVar9[6] = uVar10;
        uVar2 = *(undefined8 *)(puVar1 + 0x20);
        uVar10 = *(undefined8 *)(puVar1 + 0x28);
        uVar11 = *(undefined8 *)(puVar1 + 0x38);
        puVar9[9] = *(undefined8 *)(puVar1 + 0x30);
        puVar9[10] = uVar11;
        puVar9[7] = uVar2;
        puVar9[8] = uVar10;
        uVar11 = *(undefined8 *)(puVar1 + 0x50);
        uVar2 = *(undefined8 *)(puVar1 + 0x40);
        uVar10 = *(undefined8 *)(puVar1 + 0x48);
        *(undefined8 *)((long)puVar9 + 0x6e) = *(undefined8 *)(puVar1 + 0x56);
        puVar9[0xc] = uVar10;
        puVar9[0xd] = uVar11;
        puVar9[0xb] = uVar2;
      }
      if (*(short *)((long)puVar9 + 3) == 0x1a) {
        bVar3 = *(byte *)((long)puVar9 + 0x22);
        if (9 < bVar3) {
          bVar3 = 0;
        }
        if (bVar3 == 6) {
          return 1;
        }
        if (bVar3 == 8) {
          return 1;
        }
      }
    }
  }
  if (lVar6 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_054f0960);
      puVar12 = (uint *)&DAT_054f0958;
      if (iVar5 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar12 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar12 = (uint *)(lVar6 + 0x204);
    if ((ulong)*param_1 < 8) {
      puVar12 = puVar12 + (ulong)*param_1 * 2;
    }
  }
  return *puVar12 >> 4 & 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_02530518(byte *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  short *psVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((DAT_054f5738 == 0) || (uVar8 = (ulong)*param_1, 7 < uVar8)) {
    if ((DAT_054f0c70 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_054f0c70);
      if (iVar5 != 0) {
        DAT_054f0c1c._0_4_ = 0;
        DAT_054f0c1c._4_4_ = 0;
        DAT_054f0c24._0_4_ = 0;
        DAT_054f0c24._4_4_ = 0;
        DAT_054f0c2c._0_4_ = 0;
        DAT_054f0c2c._4_4_ = 0;
        DAT_054f0c68 = 1;
        DAT_054f0c6c = '\0';
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
      }
      psVar9 = &DAT_054f0c08;
      if (DAT_054f0c6c == '\0') {
        return 0;
      }
    }
    else {
      psVar9 = &DAT_054f0c08;
      if (DAT_054f0c6c == '\0') {
        return 0;
      }
    }
  }
  else {
    lVar6 = DAT_054f5738 + uVar8 * 0xd0 +
            (ulong)(*(uint *)(DAT_054f5738 + uVar8 * 4 + 0xd68) & 1) * 0x68;
    psVar9 = (short *)(lVar6 + 0x6e8);
    if (*(char *)(lVar6 + 0x74c) == '\0') {
      return 0;
    }
  }
  if (((*psVar9 == *(short *)PTR_DAT_04bb6298) && (*(uint *)(psVar9 + 2) < 0x149)) &&
     (*(uint *)(psVar9 + 2) == 0x1a)) {
    uVar8 = (ulong)*param_1;
    puVar7 = (undefined8 *)(DAT_054f5738 + 0x2e8);
    if (uVar8 < 8) {
      puVar7 = puVar7 + uVar8 * 0x10;
      uVar10 = *(undefined8 *)(PTR_DAT_04bc31b0 + uVar8 * 0x30 + 0x18);
      uVar2 = *(undefined8 *)(PTR_DAT_04bc31b0 + uVar8 * 0x30 + 8);
      uVar11 = *(undefined8 *)(PTR_DAT_04bc31b0 + uVar8 * 0x30 + 0x10);
      *(undefined4 *)((long)puVar7 + 0x17) = *(undefined4 *)(PTR_DAT_04bc31b0 + uVar8 * 0x30 + 0x1f)
      ;
      puVar7[1] = uVar11;
      puVar7[2] = uVar10;
      *puVar7 = uVar2;
      bVar3 = *param_1;
      bVar4 = 7 < bVar3;
      if (bVar4) {
        bVar3 = 0xff;
      }
      puVar1 = PTR_DAT_04bc31b8 + (ulong)(uint)(int)(char)bVar3 * 0x70;
      if (bVar4) {
        puVar1 = PTR_DAT_04bc31b8;
      }
      uVar11 = *(undefined8 *)(puVar1 + 0x18);
      uVar2 = *(undefined8 *)(puVar1 + 0x10);
      puVar7[4] = *(undefined8 *)(puVar1 + 8);
      puVar7[5] = uVar2;
      puVar7[6] = uVar11;
      uVar2 = *(undefined8 *)(puVar1 + 0x20);
      uVar11 = *(undefined8 *)(puVar1 + 0x28);
      uVar10 = *(undefined8 *)(puVar1 + 0x38);
      puVar7[9] = *(undefined8 *)(puVar1 + 0x30);
      puVar7[10] = uVar10;
      puVar7[7] = uVar2;
      puVar7[8] = uVar11;
      uVar10 = *(undefined8 *)(puVar1 + 0x50);
      uVar2 = *(undefined8 *)(puVar1 + 0x40);
      uVar11 = *(undefined8 *)(puVar1 + 0x48);
      *(undefined8 *)((long)puVar7 + 0x6e) = *(undefined8 *)(puVar1 + 0x56);
      puVar7[0xc] = uVar11;
      puVar7[0xd] = uVar10;
      puVar7[0xb] = uVar2;
    }
    if (*(short *)((long)puVar7 + 3) == 0x1a) {
      bVar3 = *(byte *)((long)puVar7 + 0x22);
      if (9 < bVar3) {
        bVar3 = 0;
      }
      if (bVar3 == 1) {
        return 1;
      }
    }
  }
  return 0;
}


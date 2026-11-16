
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0252e560(byte *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  short *psVar11;
  
  if (*param_1 < 8) {
    uVar5 = FUN_02582d8c(param_1,1);
    if (((uVar5 < 8) &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d4) != '\0')) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d6) != '\0')) {
      if ((DAT_054f5738 == 0) || (uVar8 = (ulong)*param_1, 7 < uVar8)) {
        if ((DAT_054f0c70 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(&DAT_054f0c70);
          psVar11 = &DAT_054f0c08;
          if (iVar6 != 0) {
            DAT_054f0c1c._0_4_ = 0;
            DAT_054f0c1c._4_4_ = 0;
            DAT_054f0c68 = 1;
            DAT_054f0c6c = 0;
            DAT_054f0c24._0_4_ = 0;
            DAT_054f0c24._4_4_ = 0;
            DAT_054f0c2c._0_4_ = 0;
            DAT_054f0c2c._4_4_ = 0;
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
        }
        else {
          psVar11 = &DAT_054f0c08;
        }
      }
      else {
        psVar11 = (short *)(DAT_054f5738 + uVar8 * 0xd0 +
                            (ulong)(*(uint *)(DAT_054f5738 + uVar8 * 4 + 0xd68) & 1) * 0x68 + 0x6e8)
        ;
      }
      if ((char)psVar11[0x32] == '\0') {
        return 0;
      }
      if (*psVar11 != DAT_04c487d4) {
        return 0;
      }
      if (0x148 < *(uint *)(psVar11 + 2)) {
        return 0;
      }
      if (*(uint *)(psVar11 + 2) == 0xf7) {
        return 1;
      }
      return 0;
    }
    uVar8 = (ulong)*param_1;
    puVar7 = (undefined8 *)(DAT_054f5738 + 0x2e8);
    if (uVar8 < 8) {
      puVar7 = puVar7 + uVar8 * 0x10;
      uVar9 = *(undefined8 *)(PTR_DAT_04bc31b0 + uVar8 * 0x30 + 0x18);
      uVar2 = *(undefined8 *)(PTR_DAT_04bc31b0 + uVar8 * 0x30 + 8);
      uVar10 = *(undefined8 *)(PTR_DAT_04bc31b0 + uVar8 * 0x30 + 0x10);
      *(undefined4 *)((long)puVar7 + 0x17) = *(undefined4 *)(PTR_DAT_04bc31b0 + uVar8 * 0x30 + 0x1f)
      ;
      puVar7[1] = uVar10;
      puVar7[2] = uVar9;
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
      uVar10 = *(undefined8 *)(puVar1 + 0x18);
      uVar2 = *(undefined8 *)(puVar1 + 0x10);
      puVar7[4] = *(undefined8 *)(puVar1 + 8);
      puVar7[5] = uVar2;
      puVar7[6] = uVar10;
      uVar2 = *(undefined8 *)(puVar1 + 0x20);
      uVar10 = *(undefined8 *)(puVar1 + 0x28);
      uVar9 = *(undefined8 *)(puVar1 + 0x38);
      puVar7[9] = *(undefined8 *)(puVar1 + 0x30);
      puVar7[10] = uVar9;
      puVar7[7] = uVar2;
      puVar7[8] = uVar10;
      uVar9 = *(undefined8 *)(puVar1 + 0x50);
      uVar2 = *(undefined8 *)(puVar1 + 0x40);
      uVar10 = *(undefined8 *)(puVar1 + 0x48);
      *(undefined8 *)((long)puVar7 + 0x6e) = *(undefined8 *)(puVar1 + 0x56);
      puVar7[0xc] = uVar10;
      puVar7[0xd] = uVar9;
      puVar7[0xb] = uVar2;
    }
  }
  else {
    puVar7 = (undefined8 *)(DAT_054f5738 + 0x2e8);
  }
  if (*(short *)((long)puVar7 + 3) == 0xf7) {
    return 1;
  }
  return 0;
}


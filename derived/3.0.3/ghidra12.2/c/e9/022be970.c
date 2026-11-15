
undefined8 FUN_022be970(long param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  short sVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  short *psVar13;
  undefined4 local_60;
  undefined4 uStack_5c;
  short local_58;
  undefined2 local_56;
  undefined4 local_54;
  
  bVar5 = *(byte *)(param_1 + 0x10);
  bVar10 = 7 < bVar5;
  if (bVar10) {
    bVar5 = 0xff;
  }
  puVar1 = (undefined4 *)(PTR_DAT_04bc2ea0 + ((long)(char)bVar5 & 0xffffffffU) * 8);
  if (bVar10) {
    puVar1 = (undefined4 *)PTR_DAT_04bc2ea0;
  }
  local_60 = *puVar1;
  uStack_5c = puVar1[1];
  local_58 = FUN_0123cac0(&local_60);
  local_56 = 0;
  local_54 = 0;
  FUN_0277d4ac(&local_58);
  uVar9 = local_54;
  sVar6 = local_58;
  bVar5 = *(byte *)(param_1 + 0x10);
  uVar11 = 0;
  iVar12 = 0;
  bVar10 = 7 < bVar5;
  if (bVar10) {
    bVar5 = 0xff;
  }
  uVar7 = (undefined1)local_56;
  uVar8 = local_56._1_1_;
  puVar2 = &DAT_0547bb10 + ((long)(char)bVar5 & 0xffffffffU) * 2;
  if (bVar10) {
    puVar2 = &DAT_0547bb10;
  }
  uVar3 = *(undefined4 *)(puVar2 + 1);
  uVar4 = *(undefined4 *)((long)puVar2 + 0xc);
  psVar13 = (short *)&DAT_05152a90;
  do {
    if (0x23 < *(int *)((long)&DAT_05152ac8 + (long)iVar12 * 0x48 + 4)) {
      if (local_58 == -2) {
        return 1;
      }
      if (0x27 < uVar11) {
        psVar13 = (short *)&DAT_05152a90;
      }
      *(undefined2 *)((long)psVar13 + 0x45) = 0xff00;
      psVar13[0] = -2;
      psVar13[1] = 0;
      psVar13[2] = 0;
      psVar13[3] = 0;
      FUN_0277d4ac(psVar13);
      psVar13[4] = 0;
      psVar13[5] = 0;
      psVar13[6] = 0;
      psVar13[7] = 0;
      psVar13[8] = 0;
      psVar13[9] = 0;
      psVar13[0x10] = 0;
      psVar13[0x11] = 0;
      psVar13[0x12] = 0;
      psVar13[0x13] = 0;
      *psVar13 = sVar6;
      *(undefined1 *)(psVar13 + 1) = uVar7;
      *(undefined1 *)((long)psVar13 + 3) = uVar8;
      *(undefined4 *)(psVar13 + 2) = uVar9;
      *(undefined4 *)(psVar13 + 0x18) = uVar3;
      *(undefined4 *)(psVar13 + 0x1a) = uVar4;
      psVar13[0x1c] = 0;
      psVar13[0x1d] = 0;
      psVar13[0x1e] = 0x15;
      psVar13[0x1f] = 0;
      *(byte *)(psVar13 + 0x23) = bVar5;
      psVar13[0x20] = 0;
      psVar13[0x21] = 0;
      *(byte *)(psVar13 + 0x22) = bVar5;
      *(undefined1 *)((long)psVar13 + 0x47) = 0;
      return 1;
    }
    uVar11 = uVar11 + 1;
    iVar12 = iVar12 + 1;
    psVar13 = psVar13 + 0x24;
  } while (uVar11 != 0x28);
  return 1;
}


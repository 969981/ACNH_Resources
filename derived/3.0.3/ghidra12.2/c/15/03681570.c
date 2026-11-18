
void FUN_03681570(long param_1,undefined4 *param_2,undefined4 param_3,short param_4)

{
  short *psVar1;
  short sVar2;
  undefined *puVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ushort *puVar8;
  uint uVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  long lVar13;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  float local_28;
  char local_24 [4];
  
  uVar5 = FUN_03680df8(local_24,&local_28,param_2,param_3,0);
  uVar6 = 0;
  do {
    if ((uVar5 >> (ulong)(uVar6 & 0x1f) & 1) != 0) {
      uVar10 = (ulong)uVar6;
      if (0x14 < uVar6) {
        uVar10 = 0;
      }
      *(short *)(param_1 + uVar10 * 2) = *(short *)(param_1 + uVar10 * 2) + param_4;
    }
    uVar9 = 0x15;
    if ((int)uVar6 < 0x15) {
      uVar9 = uVar6 + 1;
    }
    uVar6 = uVar9;
  } while (uVar9 != 0x15);
  *(float *)(param_1 + 0x30) = local_28 + *(float *)(param_1 + 0x30);
  puVar3 = PTR_DAT_04bb43c0;
  if (-1 < local_24[0]) {
    local_48 = 0;
    local_58 = PTR_DAT_04bc0510 + 0x10;
    local_50 = *param_2;
    uStack_4c = param_2[1];
    lVar13 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(&local_50);
    if (*(long *)puVar3 != 0) {
      lVar13 = *(long *)(lVar13 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar13 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        lVar13 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(param_2);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if (uVar6 < *(uint *)(lVar13 + 0x1d8)) {
          lVar13 = *(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8);
          if (lVar13 != 0) {
            local_48 = lVar13;
          }
        }
      }
    }
    iVar7 = FUN_01ad7260(&local_58);
    if ((iVar7 == 0) || (puVar8 = (ushort *)FUN_01afd600(&local_58), puVar8 == (ushort *)0x0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = *puVar8 & 7;
      uVar5 = FUN_01ad7260(&local_58);
      if (uVar5 <= uVar6) {
        uVar6 = 0;
      }
    }
    uVar5 = (int)local_24[0] << 4;
    sVar4 = FUN_0277d6c4(param_2);
    uVar10 = 0;
    lVar13 = param_1 + 0x34;
    do {
      uVar12 = -(uVar10 >> 0x1f) & 0xfffffffc00000000 | uVar10 << 2;
      iVar7 = (int)uVar10;
      sVar2 = *(short *)(lVar13 + uVar12);
      pbVar11 = (byte *)(lVar13 + uVar12 + 2);
      if ((sVar2 == sVar4) && ((uint)*pbVar11 == (uVar6 | uVar5 & 0xff))) {
        lVar13 = lVar13 + (long)iVar7 * 4;
        *(char *)(lVar13 + 3) = *(char *)(lVar13 + 3) + '\x01';
        return;
      }
      if (sVar2 == -2) {
        psVar1 = (short *)(lVar13 + (long)iVar7 * 4);
        *pbVar11 = (byte)uVar6 | (byte)uVar5;
        *psVar1 = sVar4;
        *(undefined1 *)((long)psVar1 + 3) = 0;
        *(int *)(param_1 + 0x234) = *(int *)(param_1 + 0x234) + 1;
        return;
      }
      uVar10 = (ulong)(iVar7 + 1U);
    } while (iVar7 + 1U != 0x80);
  }
  return;
}


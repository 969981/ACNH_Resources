
bool FUN_02198b30(short *param_1,uint param_2,long param_3)

{
  short *psVar1;
  short *psVar2;
  undefined4 uVar3;
  byte bVar4;
  short sVar5;
  undefined1 uVar6;
  undefined *puVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  long lVar11;
  undefined8 local_60;
  short local_58;
  short local_56;
  undefined4 local_54;
  long local_50;
  
  local_60 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_60);
  *(undefined4 *)param_1 = (undefined4)local_60;
  *(undefined4 *)(param_1 + 2) = local_60._4_4_;
  param_1[4] = -1;
  puVar7 = PTR_DAT_04bb43c0;
  param_1[5] = 0;
  if ((*(byte *)(param_3 + 0x1d4) & 1) == 0) {
    if (param_2 < 0x24) {
      param_3 = param_3 + (ulong)param_2 * 0xc;
      uVar9 = *(undefined1 *)(param_3 + 0x1e);
      sVar5 = *(short *)(param_3 + 0x1c);
      uVar6 = *(undefined1 *)(param_3 + 0x1f);
      *param_1 = *(short *)(param_3 + 0x14);
      *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_3 + 0x16);
      *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)(param_3 + 0x17);
      uVar3 = *(undefined4 *)(param_3 + 0x18);
      param_1[4] = sVar5;
      *(undefined4 *)(param_1 + 2) = uVar3;
      *(undefined1 *)(param_1 + 5) = uVar9;
      *(undefined1 *)((long)param_1 + 0xb) = uVar6;
    }
    bVar8 = param_2 + 1 < 0x24;
  }
  else {
    psVar1 = (short *)(param_3 + 0x1d8);
    psVar2 = psVar1 + (ulong)param_2 * 6;
    if (0xeb < param_2) {
      psVar2 = psVar1;
    }
    if (((int)param_2 < 0xec) && (local_58 = *psVar2, local_58 != -2)) {
      local_56 = psVar2[1];
      local_50 = 0;
      local_54 = *(undefined4 *)(psVar2 + 2);
      local_60 = PTR_DAT_04bc0510 + 0x10;
      lVar11 = *(long *)PTR_DAT_04bb43c0;
      uVar10 = FUN_0277d6c4(&local_58);
      if (*(long *)puVar7 != 0) {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar10 < *(uint *)(lVar11 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
          lVar11 = *(long *)PTR_DAT_04bc0428;
          uVar10 = FUN_0277d6c4(psVar2);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar10 < *(uint *)(lVar11 + 0x1d8)) &&
             (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar10 * 8), lVar11 != 0)) {
            local_50 = lVar11;
          }
        }
      }
      sVar5 = psVar2[4];
      uVar9 = FUN_01ae98d0(&local_60);
      bVar8 = false;
      bVar4 = *(byte *)(psVar2 + 5);
      if (7 < bVar4) {
        bVar4 = 0;
      }
      *param_1 = *psVar2;
      *(char *)(param_1 + 1) = (char)psVar2[1];
      *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)psVar2 + 3);
      uVar3 = *(undefined4 *)(psVar2 + 2);
      param_1[4] = sVar5;
      *(undefined4 *)(param_1 + 2) = uVar3;
      *(undefined1 *)(param_1 + 5) = uVar9;
      *(byte *)((long)param_1 + 0xb) = bVar4;
      if ((int)param_2 < 0xeb) {
        psVar2 = psVar1 + (ulong)(param_2 + 1) * 6;
        if (0xeb < param_2 + 1) {
          psVar2 = psVar1;
        }
        bVar8 = *psVar2 != -2;
      }
    }
    else {
      bVar8 = false;
    }
  }
  return bVar8;
}


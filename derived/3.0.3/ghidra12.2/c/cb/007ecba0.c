
void FUN_007ecba0(int *param_1,short *param_2,byte *param_3)

{
  byte *pbVar1;
  short *psVar2;
  byte bVar3;
  short sVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  ulong *puVar8;
  ulong uVar9;
  uint uVar10;
  undefined1 auStack_4c [4];
  undefined7 local_48;
  undefined4 uStack_41;
  byte local_3d;
  undefined4 local_3c;
  undefined8 local_38;
  
  puVar5 = PTR_DAT_04bb27d0;
  puVar8 = *(ulong **)PTR_DAT_04bb27d0;
  if ((puVar8 != (ulong *)0x0) && ((int)puVar8[0x10] == 3)) {
    bVar3 = *param_3;
    bVar6 = 7 < bVar3;
    if (bVar6) {
      bVar3 = 0xff;
    }
    psVar2 = param_2 + (ulong)(uint)(int)(char)bVar3 * 0xc;
    if (bVar6) {
      psVar2 = param_2;
    }
    sVar4 = *(short *)PTR_DAT_04bb3170;
    uVar10 = (uint)(*psVar2 != sVar4);
    if (psVar2[4] != sVar4) {
      uVar10 = uVar10 + 1;
    }
    if (uVar10 != -(uint)(psVar2[8] != sVar4)) {
      uVar9 = *puVar8;
      bVar3 = *(byte *)(uVar9 + 0x473);
      if ((long)(char)bVar3 != 0xffffffffffffffff) {
        pbVar1 = (byte *)(uVar9 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
        if (7 < bVar3) {
          pbVar1 = (byte *)(uVar9 + 0x48);
        }
        if ((*pbVar1 >> 3 & 1) != 0) {
          uVar9 = (ulong)*(byte *)(uVar9 + 0x472);
        }
      }
      FUN_007ef010(uVar9,auStack_4c,PTR_DAT_04bb3170);
      bVar3 = *param_3;
      local_48 = 0xffffffff;
      local_38 = (ulong)local_38._7_1_ << 0x38;
      uStack_41 = 0;
      local_3c = 3;
      local_3d = bVar3;
      if (7 < bVar3) {
        local_3d = 0xff;
      }
      local_38 = CONCAT26(local_38._6_2_,0xff0000000000);
      if (-1 < DAT_04cb5488) {
        FUN_01db1df0(**(long **)puVar5 + 0x480,DAT_04cb5488,&local_38,auStack_4c,0x14,0);
        bVar3 = *param_3;
      }
      puVar5 = PTR_DAT_04bb3170;
      bVar6 = 7 < bVar3;
      local_38 = 0;
      if (bVar6) {
        bVar3 = 0xff;
      }
      psVar2 = param_2 + (ulong)(uint)(int)(char)bVar3 * 0xc;
      if (bVar6) {
        psVar2 = param_2;
      }
      FUN_007ef010(&local_38,PTR_DAT_04bb3170);
      sVar4 = (short)local_38;
      psVar2[2] = 0;
      psVar2[3] = 0;
      local_38 = 0;
      *psVar2 = sVar4;
      FUN_007ef010(&local_38,puVar5);
      sVar4 = (short)local_38;
      psVar2[6] = 0;
      psVar2[7] = 0;
      local_38 = 0;
      psVar2[4] = sVar4;
      FUN_007ef010(&local_38,puVar5);
      psVar2[10] = 0;
      psVar2[0xb] = 0;
      psVar2[8] = (short)local_38;
      iVar7 = *(int *)(param_2 + 0x68);
      if (iVar7 == *(int *)(param_2 + 0x60)) {
        *(undefined1 *)(param_2 + 100) = 0;
        param_2[0x62] = 1;
        param_2[99] = 0;
      }
      goto LAB_007ecc4c;
    }
  }
  iVar7 = *(int *)(param_2 + 0x68);
  if (iVar7 == *(int *)(param_2 + 0x60)) {
    *(undefined1 *)(param_2 + 100) = 0;
    param_2[0x62] = 0;
    param_2[99] = 0;
  }
LAB_007ecc4c:
  *param_1 = iVar7;
  return;
}


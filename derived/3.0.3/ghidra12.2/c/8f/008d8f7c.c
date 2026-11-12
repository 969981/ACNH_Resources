
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008d8f7c(long *param_1)

{
  float *pfVar1;
  uint *puVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  byte *pbVar8;
  long lVar9;
  short *psVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_90;
  float local_88;
  undefined *local_80;
  int local_78;
  int iStack_74;
  undefined *local_70;
  int local_68;
  int iStack_64;
  undefined8 local_60;
  float local_58;
  
  iVar5 = FUN_008d8280();
  if (iVar5 == 0) {
    return 0;
  }
  if ((int)param_1[0x82] != 0x1d) {
    return 0;
  }
  lVar9 = *(long *)PTR_DAT_04bb39b0;
  pbVar8 = PTR_DAT_04bb32e0;
  if (lVar9 == 0) {
LAB_008d9014:
    if (*pbVar8 < 8) goto LAB_008d9080;
LAB_008d9020:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_008d9078:
      pbVar8 = PTR_DAT_04bb5038;
      goto LAB_008d9080;
    }
    lVar9 = **(long **)PTR_DAT_04bb27d0;
    bVar4 = *(byte *)(lVar9 + 0x473);
    pbVar8 = PTR_DAT_04bb5038;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar2 = (uint *)(lVar9 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar8 = (byte *)(lVar9 + 0x471);
      }
    }
    uVar7 = (uint)*pbVar8;
    if (7 < *pbVar8) goto LAB_008d9078;
  }
  else {
    if (*(int *)(lVar9 + 0x15c) != 0) {
      pbVar8 = (byte *)(lVar9 + 0x158);
    }
    if (7 < *pbVar8) {
      if ((*(int *)(lVar9 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar8 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_008d9014;
      }
      goto LAB_008d9020;
    }
LAB_008d9080:
    uVar7 = (uint)*pbVar8;
    if (7 < uVar7) {
      uVar7 = 0xff;
    }
  }
  lVar9 = *(long *)PTR_DAT_04bb4718;
  if ((lVar9 == 0) || (7 < uVar7)) {
    if ((DAT_054f0c70 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_054f0c70);
      psVar10 = &DAT_054f0c08;
      if (iVar5 != 0) {
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
      psVar10 = &DAT_054f0c08;
    }
  }
  else {
    psVar10 = (short *)(lVar9 + (ulong)uVar7 * 0xd0 +
                        (ulong)(*(uint *)(lVar9 + (ulong)uVar7 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
  }
  if (((char)psVar10[0x32] == '\0') || (*psVar10 != *(short *)PTR_DAT_04bb6298)) {
    iVar5 = 1;
  }
  else {
    iVar5 = *(int *)(psVar10 + 0x30);
  }
  local_70 = (undefined *)CONCAT44(local_70._4_4_,iVar5);
  uVar6 = 1;
  if (iVar5 - 5U < 2) {
    uVar6 = 2;
  }
  *(undefined4 *)(param_1 + 0x6300) = uVar6;
  uVar6 = FUN_008d8280();
  *(undefined4 *)((long)param_1 + 0x31804) = uVar6;
  *(uint *)PTR_DAT_04bb3450 =
       *(uint *)PTR_DAT_04bb3450 & 0xfffffffe | (uint)*(byte *)((long)param_1 + 0x37fbf);
  local_90 = param_1[0x55];
  local_88 = *(float *)(param_1 + 0x56);
  fVar15 = *(float *)((long)param_1 + 0x317c4);
  fVar16 = *(float *)(param_1 + 0x62f9);
  (**(code **)(*param_1 + 0x100))(&local_70,param_1);
  pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)((uint)local_70 >> 0x14) & 0xff0));
  fVar11 = (float)((uint)local_70 & 0xffffff) * 5.9604645e-08;
  fVar13 = pfVar1[2] + fVar11 * pfVar1[3];
  fVar11 = *pfVar1 + fVar11 * pfVar1[1];
  fVar14 = fVar11 * 0.0;
  fVar17 = local_88 - ((fVar16 * fVar13 * 0.0 - fVar15 * fVar11) + fVar13 * 0.0);
  fVar11 = (float)local_90 - (fVar16 * fVar14 + fVar15 * fVar13 + (fVar11 + 0.0) * 0.0);
  local_90._4_4_ =
       local_90._4_4_ - (fVar16 * (fVar14 * 0.0 + 1.0) + fVar15 * fVar13 * 0.0 + fVar14 * 0.0);
  *(float *)(param_1 + 0x62f6) = fVar11;
  *(float *)((long)param_1 + 0x317b4) = local_90._4_4_;
  *(float *)(param_1 + 0x62f7) = fVar17;
  puVar3 = PTR_DAT_04bb27c8;
  local_90 = CONCAT44(local_90._4_4_,fVar11);
  local_58 = fVar17 + 5.0;
  local_60 = local_90;
  lVar9 = *(long *)PTR_DAT_04bb27c8;
  local_88 = fVar17;
  if (lVar9 == 0) {
    *(undefined4 *)(param_1 + 0x62fc) = 0xc3fa0000;
  }
  else {
    if ((*(long *)(lVar9 + 0xa8) == 0) || (*(char *)(lVar9 + 0x11c8) != '\0')) {
      *(undefined4 *)(param_1 + 0x62fc) = 0xc3fa0000;
    }
    else {
      uVar12 = FUN_0093a950(lVar9 + 0x28,&local_60,0);
      lVar9 = *(long *)puVar3;
      *(undefined4 *)(param_1 + 0x62fc) = uVar12;
      if (lVar9 == 0) goto LAB_008d9290;
    }
    if ((*(long *)(lVar9 + 0xa8) != 0) && (*(char *)(lVar9 + 0x11c8) == '\0')) {
      uVar12 = FUN_0093a950(lVar9 + 0x28,&local_90,0);
      fVar11 = (float)local_90;
      fVar17 = local_88;
      goto LAB_008d9294;
    }
  }
LAB_008d9290:
  uVar12 = 0xc3fa0000;
LAB_008d9294:
  *(undefined4 *)((long)param_1 + 0x317e4) = uVar12;
  local_80 = PTR_DAT_04bb2010 + 0x10;
  local_68 = (int)((float)(int)(float)local_60 / 5.0) - (uint)((float)local_60 < 0.0);
  iStack_64 = (int)((float)(int)local_58 / 5.0) - (uint)(local_58 < 0.0);
  local_78 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
  iStack_74 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
  local_70 = local_80;
  bVar4 = FUN_0097abd0(&local_70,0);
  *(byte *)(param_1 + 0x62fd) = bVar4 & 1;
  bVar4 = FUN_0097abd0(&local_80,0);
  *(byte *)((long)param_1 + 0x317e9) = bVar4 & 1;
  return uVar6;
}


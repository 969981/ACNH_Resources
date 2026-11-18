
/* WARNING: Type propagation algorithm not settling */

int FUN_034246e0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                long *param_5,int *param_6,int *param_7,int *param_8)

{
  int *piVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *******pppppppuVar12;
  ulong uVar13;
  short *psVar14;
  undefined *local_edc0;
  undefined *puStack_edb8;
  undefined8 local_edb0;
  undefined8 local_eda8;
  undefined8 local_eda0;
  undefined8 local_ed98;
  undefined8 local_ed90;
  undefined8 local_ed88;
  undefined8 local_ed80;
  undefined8 local_ed78;
  undefined8 local_ed70;
  undefined8 local_ed68;
  undefined2 local_ed60;
  undefined1 uStack_ed5e;
  undefined1 uStack_ed5d;
  undefined4 uStack_ed5c;
  undefined2 local_ed58;
  undefined1 local_ed56;
  undefined1 local_ed55;
  undefined4 local_ed54;
  undefined2 uStack_ed50;
  undefined1 uStack_ed4e;
  undefined1 uStack_ed4d;
  undefined4 uStack_ed4c;
  undefined2 uStack_ed48;
  undefined1 uStack_ed46;
  undefined1 uStack_ed45;
  undefined4 local_ed44;
  undefined8 local_ed40;
  undefined8 local_ed38;
  undefined8 local_ed30;
  undefined8 local_ed28;
  undefined8 local_ed20;
  undefined8 local_ed18;
  uint local_ed10;
  undefined8 local_ed0c;
  undefined8 local_ed04;
  ulong local_ecfc;
  ulong local_ecf0;
  undefined1 *local_ece8;
  undefined8 *******local_ece0;
  undefined8 *******pppppppuStack_ecd8;
  undefined8 *******local_ecd0 [2];
  undefined8 *******local_ecc0 [2];
  undefined8 *******local_ecb0 [2];
  undefined8 *******local_eca0 [2];
  undefined8 *******local_ec90 [2];
  undefined8 *******local_ec80 [2];
  undefined8 *******local_ec70 [2];
  undefined8 *******local_ec60 [2];
  undefined8 *******local_ec50 [2];
  undefined8 *******local_ec40 [2];
  undefined8 *******local_ec30 [2];
  undefined8 *******local_ec20 [2];
  undefined8 *******local_ec10 [2];
  undefined8 ******local_ec00 [2];
  undefined8 *****local_ebf0 [2];
  undefined8 ****local_ebe0 [2];
  undefined8 ***local_ebd0 [2];
  undefined8 **local_ebc0 [2];
  undefined8 *local_ebb0 [2];
  undefined8 local_eba0 [2];
  undefined1 local_eb90 [160];
  undefined2 local_eaf0 [20];
  int local_eac8 [15002];
  
  psVar14 = (short *)&local_edb0;
  local_edb0 = 0;
  local_eda8 = 0;
  local_eda0 = 0;
  local_ed98 = 0;
  local_edc0 = PTR_DAT_04bc35a0 + 0x10;
  puStack_edb8 = PTR_DAT_04bc35a0 + 0x68;
  local_ed90 = 0;
  local_ed88 = 0;
  local_ed80 = 0;
  local_ed78 = 0;
  local_ed70 = 0;
  local_ed68 = 0;
  local_ed60 = 0;
  uStack_ed5e = 0;
  uStack_ed5d = 0;
  uStack_ed5c = 0;
  local_ed58 = 0;
  local_ed56 = 0;
  local_ed55 = 0;
  local_ed54 = 0;
  uStack_ed50 = 0;
  uStack_ed4e = 0;
  uStack_ed4d = 0;
  uStack_ed4c = 0;
  uStack_ed48 = 0;
  uStack_ed46 = 0;
  uStack_ed45 = 0;
  local_ed44 = 0;
  local_ed40 = 0;
  local_ed38 = 0;
  local_ed30 = 0;
  local_ed28 = 0;
  local_ed20 = 0;
  local_ed18 = 0;
  FUN_012ca808(psVar14);
  puVar3 = PTR_DAT_04bb37e0;
  local_ecf0 = 0;
  local_ece8 = (undefined1 *)0x0;
  local_eba0[0] = 0;
  uStack_ed5c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  uStack_ed5e = PTR_DAT_04bb37e0[2];
  local_ed60 = *(undefined2 *)PTR_DAT_04bb37e0;
  uStack_ed5d = PTR_DAT_04bb37e0[3];
  local_ed18 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_ed20 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_ed28 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_ed30 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_ed38 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_ed40 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_ed68 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_ed70 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_ed78 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_ed80 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_ed88 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_ed90 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_ed98 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_eda0 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_eda8 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_edb0 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_ed10 = 0x14;
  local_ecd0[0] = local_ecc0;
  local_ecb0[0] = local_eca0;
  local_ecc0[0] = local_ecb0;
  local_ec90[0] = local_ec80;
  local_eca0[0] = local_ec90;
  local_ec70[0] = local_ec60;
  local_ec80[0] = local_ec70;
  local_ec50[0] = local_ec40;
  local_ec60[0] = local_ec50;
  local_ec30[0] = local_ec20;
  local_ec40[0] = local_ec30;
  local_ec10[0] = local_ec00;
  local_ec20[0] = local_ec10;
  local_ebf0[0] = local_ebe0;
  local_ed04 = 0xffffffffffffffff;
  local_ed0c = 0xffffffffffffffff;
  local_ec00[0] = local_ebf0;
  local_ebd0[0] = local_ebc0;
  local_ecfc = 0xffffffff;
  local_ece0 = local_ecd0;
  local_ebe0[0] = local_ebd0;
  local_ebb0[0] = local_eba0;
  local_ebc0[0] = local_ebb0;
  if (local_eb90 != (undefined1 *)0x0) {
    local_ecf0 = 0x1400000000;
    local_ece8 = local_eb90;
  }
  local_ed58 = local_ed60;
  local_ed56 = uStack_ed5e;
  local_ed55 = uStack_ed5d;
  local_ed54 = uStack_ed5c;
  uStack_ed50 = local_ed60;
  uStack_ed4e = uStack_ed5e;
  uStack_ed4d = uStack_ed5d;
  uStack_ed4c = uStack_ed5c;
  uStack_ed48 = local_ed60;
  uStack_ed46 = uStack_ed5e;
  uStack_ed45 = uStack_ed5d;
  local_ed44 = uStack_ed5c;
  pppppppuStack_ecd8 = local_ece0;
  memset(local_eaf0,0,0xea88);
  local_edb0 = *param_1;
  local_eda8 = param_1[1];
  local_eda0 = param_1[2];
  local_ed98 = param_1[3];
  local_ed90 = param_1[4];
  local_ed88 = param_1[5];
  local_ed80 = param_1[6];
  local_ed78 = param_1[7];
  local_ed70 = param_1[8];
  local_ed68 = param_1[9];
  uVar2 = *(undefined4 *)(param_1 + 10);
  local_ed60 = (undefined2)uVar2;
  uStack_ed5e = (undefined1)((uint)uVar2 >> 0x10);
  uStack_ed5d = (undefined1)((uint)uVar2 >> 0x18);
  uVar10 = *(undefined8 *)((long)param_1 + 0x54);
  uStack_ed5c = (undefined4)uVar10;
  local_ed58 = (undefined2)((ulong)uVar10 >> 0x20);
  local_ed56 = (undefined1)((ulong)uVar10 >> 0x30);
  local_ed55 = (undefined1)((ulong)uVar10 >> 0x38);
  uVar10 = *(undefined8 *)((long)param_1 + 0x5c);
  local_ed54 = (undefined4)uVar10;
  uStack_ed50 = (undefined2)((ulong)uVar10 >> 0x20);
  uStack_ed4e = (undefined1)((ulong)uVar10 >> 0x30);
  uStack_ed4d = (undefined1)((ulong)uVar10 >> 0x38);
  uVar10 = *(undefined8 *)((long)param_1 + 100);
  uStack_ed4c = (undefined4)uVar10;
  uStack_ed48 = (undefined2)((ulong)uVar10 >> 0x20);
  uStack_ed46 = (undefined1)((ulong)uVar10 >> 0x30);
  uStack_ed45 = (undefined1)((ulong)uVar10 >> 0x38);
  local_ed44 = *(undefined4 *)((long)param_1 + 0x6c);
  local_ed40 = param_1[0xe];
  local_ed38 = param_1[0xf];
  local_ed30 = param_1[0x10];
  local_ed28 = param_1[0x11];
  local_ed20 = param_1[0x12];
  local_ed18 = param_1[0x13];
  local_ed10 = *(uint *)(param_1 + 0x14);
  local_ed04 = *(undefined8 *)((long)param_1 + 0xac);
  local_ecfc = (ulong)*(uint *)((long)param_1 + 0xb4);
  local_ed0c = *(undefined8 *)((long)param_1 + 0xa4);
  if (0 < (int)local_ecf0) {
    lVar11 = 0;
    pppppppuVar12 = local_ece0;
    do {
      local_ece0 = *(undefined8 ********)(local_ece8 + lVar11 * 8);
      lVar11 = lVar11 + 1;
      *local_ece0 = pppppppuVar12;
      pppppppuVar12 = local_ece0;
    } while (lVar11 < (int)local_ecf0);
  }
  local_ecf0 = local_ecf0 & 0xffffffff00000000;
  memset(local_eac8,0,60000);
  puVar4 = PTR_DAT_04bb43c0;
  uVar13 = 0;
  do {
    uVar6 = local_ed10;
    if (0x13 < local_ed10) {
      uVar6 = 0x14;
    }
    if (uVar13 < uVar6) {
      psVar9 = psVar14;
      if (*psVar14 != -2) {
        lVar11 = *(long *)puVar4;
        uVar6 = FUN_0277d6c4(psVar14);
        psVar9 = (short *)puVar3;
        if (*(long *)puVar4 != 0) {
          lVar11 = *(long *)(lVar11 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if (uVar6 < *(uint *)(lVar11 + 0x1d8)) {
            if (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0) {
              psVar9 = psVar14;
            }
          }
        }
      }
      uVar5 = FUN_0277d6c4(psVar9);
      local_eaf0[uVar13] = uVar5;
    }
    uVar13 = uVar13 + 1;
    psVar14 = psVar14 + 4;
  } while (uVar13 != 0x14);
  (**(code **)(local_edc0 + 0x40))(&local_edc0);
  lVar11 = *(long *)puVar4;
  uVar6 = FUN_0277d6c4(param_4);
  if (*(long *)puVar4 == 0) {
LAB_03424ca8:
    iVar7 = 0;
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if (((*(uint *)(lVar11 + 0x1d8) <= uVar6) ||
        (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) ||
       (iVar7 = FUN_0277d6c4(param_4), 14999 < iVar7)) goto LAB_03424ca8;
    uVar13 = FUN_0277d6c4(param_4);
    piVar1 = local_eac8 + (uVar13 & 0xffffffff);
    if (0x752 < ((uint)(uVar13 >> 3) & 0x1fffffff)) {
      piVar1 = local_eac8;
    }
    iVar7 = *piVar1;
  }
  if (param_6 != (int *)0x0) {
    *param_6 = iVar7;
  }
  psVar14 = (short *)&local_edb0;
  local_edb0 = 0;
  local_eda8 = 0;
  local_eda0 = 0;
  local_ed98 = 0;
  local_edc0 = PTR_DAT_04bc35a8 + 0x10;
  puStack_edb8 = PTR_DAT_04bc35a8 + 0x68;
  local_ed90 = 0;
  local_ed88 = 0;
  local_ed80 = 0;
  local_ed78 = 0;
  local_ed70 = 0;
  local_ed68 = 0;
  local_ed60 = 0;
  uStack_ed5e = 0;
  uStack_ed5d = 0;
  uStack_ed5c = 0;
  local_ed58 = 0;
  local_ed56 = 0;
  local_ed55 = 0;
  local_ed54 = 0;
  uStack_ed50 = 0;
  uStack_ed4e = 0;
  uStack_ed4d = 0;
  uStack_ed4c = 0;
  uStack_ed48 = 0;
  uStack_ed46 = 0;
  uStack_ed45 = 0;
  local_ed44 = 0;
  local_ed40 = 0;
  local_ed38 = 0;
  local_ed30 = 0;
  local_ed28 = 0;
  local_ed20 = 0;
  local_ed18 = 0;
  FUN_012ca808(psVar14);
  uStack_ed5c = *(undefined4 *)(puVar3 + 4);
  local_ed04 = 0xffffffffffffffff;
  uStack_ed5e = puVar3[2];
  local_ed0c = 0xffffffffffffffff;
  local_eba0[0] = 0;
  local_ed60 = *(undefined2 *)puVar3;
  uStack_ed5d = puVar3[3];
  local_ed18 = *(undefined8 *)puVar3;
  local_ed20 = *(undefined8 *)puVar3;
  local_ed28 = *(undefined8 *)puVar3;
  local_ed30 = *(undefined8 *)puVar3;
  local_ed38 = *(undefined8 *)puVar3;
  local_ed40 = *(undefined8 *)puVar3;
  local_ed68 = *(undefined8 *)puVar3;
  local_ed70 = *(undefined8 *)puVar3;
  local_ed78 = *(undefined8 *)puVar3;
  local_ed80 = *(undefined8 *)puVar3;
  local_ed88 = *(undefined8 *)puVar3;
  local_ed90 = *(undefined8 *)puVar3;
  local_ed98 = *(undefined8 *)puVar3;
  local_eda0 = *(undefined8 *)puVar3;
  local_eda8 = *(undefined8 *)puVar3;
  local_edb0 = *(undefined8 *)puVar3;
  local_ed10 = 0;
  local_ecd0[0] = local_ecc0;
  local_ecb0[0] = local_eca0;
  local_ecc0[0] = local_ecb0;
  local_ec90[0] = local_ec80;
  local_eca0[0] = local_ec90;
  local_ec70[0] = local_ec60;
  local_ec80[0] = local_ec70;
  local_ec50[0] = local_ec40;
  local_ec60[0] = local_ec50;
  local_ec30[0] = local_ec20;
  local_ec40[0] = local_ec30;
  local_ec10[0] = local_ec00;
  local_ec20[0] = local_ec10;
  local_ebf0[0] = local_ebe0;
  local_ec00[0] = local_ebf0;
  local_ebd0[0] = local_ebc0;
  local_ebe0[0] = local_ebd0;
  local_ebb0[0] = local_eba0;
  local_ecfc = 0xffffffff;
  local_ece0 = local_ecd0;
  local_ebc0[0] = local_ebb0;
  local_ecf0 = 0;
  local_ece8 = (undefined1 *)0x0;
  if (local_eb90 != (undefined1 *)0x0) {
    local_ecf0 = 0x1400000000;
    local_ece8 = local_eb90;
  }
  local_ed58 = local_ed60;
  local_ed56 = uStack_ed5e;
  local_ed55 = uStack_ed5d;
  local_ed54 = uStack_ed5c;
  uStack_ed50 = local_ed60;
  uStack_ed4e = uStack_ed5e;
  uStack_ed4d = uStack_ed5d;
  uStack_ed4c = uStack_ed5c;
  uStack_ed48 = local_ed60;
  uStack_ed46 = uStack_ed5e;
  uStack_ed45 = uStack_ed5d;
  local_ed44 = uStack_ed5c;
  pppppppuStack_ecd8 = local_ece0;
  memset(local_eaf0,0,0xea88);
  local_edb0 = *param_2;
  local_eda8 = param_2[1];
  local_eda0 = param_2[2];
  local_ed98 = param_2[3];
  local_ed90 = param_2[4];
  local_ed88 = param_2[5];
  local_ed80 = param_2[6];
  local_ed78 = param_2[7];
  local_ed70 = param_2[8];
  local_ed68 = param_2[9];
  uVar2 = *(undefined4 *)(param_2 + 10);
  local_ed60 = (undefined2)uVar2;
  uStack_ed5e = (undefined1)((uint)uVar2 >> 0x10);
  uStack_ed5d = (undefined1)((uint)uVar2 >> 0x18);
  uVar10 = *(undefined8 *)((long)param_2 + 0x54);
  uStack_ed5c = (undefined4)uVar10;
  local_ed58 = (undefined2)((ulong)uVar10 >> 0x20);
  local_ed56 = (undefined1)((ulong)uVar10 >> 0x30);
  local_ed55 = (undefined1)((ulong)uVar10 >> 0x38);
  uVar10 = *(undefined8 *)((long)param_2 + 0x5c);
  local_ed54 = (undefined4)uVar10;
  uStack_ed50 = (undefined2)((ulong)uVar10 >> 0x20);
  uStack_ed4e = (undefined1)((ulong)uVar10 >> 0x30);
  uStack_ed4d = (undefined1)((ulong)uVar10 >> 0x38);
  uVar10 = *(undefined8 *)((long)param_2 + 100);
  uStack_ed4c = (undefined4)uVar10;
  uStack_ed48 = (undefined2)((ulong)uVar10 >> 0x20);
  uStack_ed46 = (undefined1)((ulong)uVar10 >> 0x30);
  uStack_ed45 = (undefined1)((ulong)uVar10 >> 0x38);
  local_ed44 = *(undefined4 *)((long)param_2 + 0x6c);
  local_ed40 = param_2[0xe];
  local_ed38 = param_2[0xf];
  local_ed30 = param_2[0x10];
  local_ed28 = param_2[0x11];
  local_ed20 = param_2[0x12];
  local_ed18 = param_2[0x13];
  local_ed10 = *(uint *)(param_2 + 0x14);
  local_ed04 = *(undefined8 *)((long)param_2 + 0xac);
  local_ecfc = (ulong)*(uint *)((long)param_2 + 0xb4);
  local_ed0c = *(undefined8 *)((long)param_2 + 0xa4);
  if (0 < (int)local_ecf0) {
    lVar11 = 0;
    pppppppuVar12 = local_ece0;
    do {
      local_ece0 = *(undefined8 ********)(local_ece8 + lVar11 * 8);
      lVar11 = lVar11 + 1;
      *local_ece0 = pppppppuVar12;
      pppppppuVar12 = local_ece0;
    } while (lVar11 < (int)local_ecf0);
  }
  local_ecf0 = local_ecf0 & 0xffffffff00000000;
  memset(local_eac8,0,60000);
  uVar13 = 0;
  do {
    uVar6 = local_ed10;
    if (0x13 < local_ed10) {
      uVar6 = 0x14;
    }
    if (uVar13 < uVar6) {
      psVar9 = psVar14;
      if (*psVar14 != -2) {
        lVar11 = *(long *)puVar4;
        uVar6 = FUN_0277d6c4(psVar14);
        psVar9 = (short *)puVar3;
        if (*(long *)puVar4 != 0) {
          lVar11 = *(long *)(lVar11 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if (uVar6 < *(uint *)(lVar11 + 0x1d8)) {
            if (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0) {
              psVar9 = psVar14;
            }
          }
        }
      }
      uVar5 = FUN_0277d6c4(psVar9);
      local_eaf0[uVar13] = uVar5;
    }
    uVar13 = uVar13 + 1;
    psVar14 = psVar14 + 4;
  } while (uVar13 != 0x14);
  (**(code **)(local_edc0 + 0x40))(&local_edc0);
  lVar11 = *(long *)puVar4;
  uVar6 = FUN_0277d6c4(param_4);
  if (*(long *)puVar4 == 0) {
LAB_03425224:
    iVar8 = 0;
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if (uVar6 < *(uint *)(lVar11 + 0x1d8)) {
      if (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) == 0) goto LAB_03425224;
      iVar8 = FUN_0277d6c4(param_4);
      if (iVar8 < 15000) {
        uVar13 = FUN_0277d6c4(param_4);
        piVar1 = local_eac8 + (uVar13 & 0xffffffff);
        if (0x752 < ((uint)(uVar13 >> 3) & 0x1fffffff)) {
          piVar1 = local_eac8;
        }
        iVar8 = *piVar1;
        goto joined_r0x034252a0;
      }
    }
    iVar8 = 0;
  }
joined_r0x034252a0:
  if (param_7 != (int *)0x0) {
    *param_7 = iVar8;
  }
  iVar8 = iVar8 + iVar7;
  if (param_5 != (long *)0x0) {
    FUN_0262a3f0(param_5,param_3);
    iVar7 = (**(code **)(*param_5 + 0x28))(param_5,param_4);
    iVar8 = iVar7 + iVar8;
    if (param_8 != (int *)0x0) {
      *param_8 = iVar7;
    }
  }
  return iVar8;
}


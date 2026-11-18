
/* WARNING: Removing unreachable block (ram,0x03450f7c) */

void FUN_03450910(long *param_1,long param_2,long *param_3,undefined8 param_4,short *param_5,
                 byte *param_6,undefined8 *param_7)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  char *pcVar5;
  undefined1 *puVar6;
  byte bVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 uVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined1 auStack_1a02 [2];
  undefined **local_1a00;
  undefined8 *local_19f8;
  undefined **local_19e0;
  undefined1 *puStack_19d8;
  undefined **local_19d0;
  char *pcStack_19c8;
  undefined **local_19c0;
  char *local_19b8;
  undefined8 local_19b0;
  undefined8 local_19a8;
  undefined8 uStack_19a0;
  undefined1 local_1998;
  undefined4 local_1994;
  undefined1 local_196d;
  undefined8 local_1968;
  undefined8 local_1960;
  undefined8 *puStack_1958;
  undefined8 local_1950;
  undefined8 local_1948;
  undefined8 uStack_1940;
  undefined4 local_1938;
  undefined4 local_1934;
  undefined **local_1930;
  undefined1 *puStack_1928;
  undefined4 local_1920;
  undefined1 local_191c [15];
  undefined1 local_190d;
  undefined8 local_1908;
  undefined1 local_18dd;
  undefined **local_18d8;
  undefined1 *puStack_18d0;
  undefined4 local_18c8;
  undefined1 local_18c4 [63];
  undefined1 local_1885;
  undefined8 local_1880;
  undefined6 uStack_1878;
  undefined2 local_1872;
  undefined6 uStack_1870;
  undefined1 auStack_186a [2];
  undefined **local_1868;
  undefined **ppuStack_1860;
  undefined *local_1848;
  undefined8 local_1840;
  undefined8 local_1838;
  undefined8 local_1830;
  undefined8 uStack_1828;
  undefined4 local_1820;
  undefined **local_1818;
  undefined1 *puStack_1810;
  undefined4 local_1808;
  undefined1 local_1804 [63];
  undefined1 local_17c5;
  undefined **local_17c0;
  undefined1 *puStack_17b8;
  undefined4 local_17b0;
  undefined1 local_17ac [63];
  undefined1 local_176d;
  char local_1768 [24];
  uint local_1750;
  undefined1 auStack_1744 [4];
  undefined1 auStack_1740 [20];
  byte local_172c;
  undefined1 auStack_1724 [20];
  int local_1710;
  undefined1 auStack_170a [2];
  uint local_1708 [2];
  long local_1700;
  long lStack_16f8;
  
  lVar9 = *param_1;
  if (lVar9 == 0) goto switchD_0345097c_default;
  switch((int)param_1[2]) {
  case 0:
    lVar13 = param_1[3];
    if (lVar13 == 0) {
LAB_03450aa8:
      lVar13 = 0;
    }
    else {
      *(short *)(lVar13 + 10) = *param_5;
      FUN_007ef010(&local_1848,param_5);
      FUN_007e4920(local_1708,&local_1848);
      if (((short)local_1708[0] != *(short *)PTR_DAT_04bb3170) &&
         (lStack_16f8 != 0 || local_1700 != 0)) {
        bVar7 = FUN_007e4bb0(local_1708);
        *(byte *)(lVar13 + 0xc) = (bVar7 ^ 0xff) & 1;
      }
      lVar9 = *param_1;
      lVar13 = param_1[3];
    }
    break;
  case 1:
    plVar15 = (long *)param_1[4];
    if (plVar15 == (long *)0x0) goto LAB_03450aa8;
    (**(code **)(*plVar15 + 0x50))(plVar15,param_5);
    lVar9 = *param_1;
    lVar13 = param_1[4];
    break;
  case 2:
    lVar13 = param_1[5];
    if (lVar13 == 0) goto LAB_03450aa8;
    *(short *)(lVar13 + 10) = *param_5;
    FUN_007ef010(&local_1848,param_5);
    FUN_007e4920(local_1708,&local_1848);
    if (((short)local_1708[0] != *(short *)PTR_DAT_04bb3170) &&
       (lStack_16f8 != 0 || local_1700 != 0)) {
      bVar7 = FUN_007e4bb0(local_1708);
      *(byte *)(lVar13 + 0xc) = (bVar7 ^ 0xff) & 1;
    }
    lVar9 = *param_1;
    lVar13 = param_1[5];
    break;
  case 3:
    plVar15 = (long *)param_1[6];
    if (plVar15 == (long *)0x0) goto LAB_03450aa8;
    (**(code **)(*plVar15 + 0x50))(plVar15,param_5);
    lVar9 = *param_1;
    lVar13 = param_1[6];
    break;
  default:
    goto switchD_0345097c_default;
  }
  FUN_0305a77c(lVar9,lVar13);
switchD_0345097c_default:
  if ((param_2 != 0) && (param_3 != (long *)0x0)) {
    if (*param_5 != *(short *)PTR_DAT_04bb3170) {
      puVar16 = *(undefined8 **)param_3[0x7f];
      if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar8 != 0)) {
        *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e60);
      }
      if ((puVar16 != (undefined8 *)0x0) &&
         (uVar10 = (**(code **)*puVar16)(puVar16,PTR_DAT_04bc4e58), (uVar10 & 1) != 0)) {
        FUN_007ef010(auStack_170a,param_5);
        FUN_007e4920(local_1708,auStack_170a);
        FUN_007e6230(auStack_1744,local_1708);
        local_1838 = CONCAT35(local_1838._5_3_,0xb);
        ppuStack_1860 = &local_1848;
        local_1830 = 0xffffffff;
        uStack_1828 = 0xffffffff00000000;
        local_1840 = local_1768;
        local_1820 = 0xffffffff;
        puStack_1810 = local_1804;
        local_1808 = 0x40;
        local_17c5 = 0;
        local_1804[0] = 0;
        ppuVar1 = (undefined **)(PTR_DAT_04bb2bc0 + 0x10);
        local_17b0 = 0x40;
        local_176d = 0;
        local_17ac[0] = 0;
        puStack_17b8 = local_17ac;
        puVar2 = PTR_DAT_04bb5128 + 0x10;
        local_1768[0x10] = '\0';
        local_1768[0x11] = '\0';
        local_1768[0x12] = '\0';
        local_1768[0x13] = '\0';
        local_1768[0x14] = '\0';
        local_1768[0x15] = '\0';
        pcVar5 = local_1768 + 0x16;
        if (local_1768 + 0x16 <= local_1768 + 2) {
          pcVar5 = local_1768 + 2;
        }
        local_1768[8] = '\0';
        local_1768[9] = '\0';
        local_1768[10] = '\0';
        local_1768[0xb] = '\0';
        local_1768[0xc] = '\0';
        local_1768[0xd] = '\0';
        local_1768[0xe] = '\0';
        local_1768[0xf] = '\0';
        local_1768[0] = '\0';
        local_1768[1] = '\0';
        local_1768[2] = '\0';
        local_1768[3] = '\0';
        local_1768[4] = '\0';
        local_1768[5] = '\0';
        local_1768[6] = '\0';
        local_1768[7] = '\0';
        local_1848 = puVar2;
        local_1818 = ppuVar1;
        local_17c0 = ppuVar1;
        memset(local_1840,0,(ulong)(pcVar5 + (-0xe1 - (long)ppuStack_1860)) & 0xfffffffffffffffc | 2
              );
        local_1750 = 2;
        local_19b8 = auStack_1740;
        local_19c0 = (undefined **)CONCAT44(local_19c0._4_4_,10);
        FUN_0082b014(&local_1848);
        local_1948 = 0;
        uStack_1940 = 0;
        local_1950 = 0;
        local_1938 = CONCAT31(local_1938._1_3_,1);
        local_1934 = 0;
        ppuVar3 = (undefined **)(PTR_DAT_04bc0cd8 + 0x10);
        puStack_1958 = (undefined8 *)0x0;
        local_1960 = ppuVar3;
        FUN_02906b00(&local_1960,&local_1848,&local_19c0);
        puStack_1958 = (undefined8 *)((long)&local_1950 + 4);
        local_1750 = 2;
        if (local_172c < 4) {
          local_1750 = (uint)local_172c;
        }
        local_1908 = *(undefined8 *)puVar16[0x43];
        local_190d = 0;
        local_1950._0_5_ = 0x40;
        ppuVar4 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        local_1868 = &PTR_LAB_04b2aee0;
        local_19f8 = (undefined8 *)&DAT_0407bc05;
        local_19b8 = "MyDesignExchInfo";
        local_1a00 = ppuVar4;
        local_19c0 = ppuVar4;
        local_1960 = ppuVar1;
        FUN_034630a0(&local_1960,&local_19c0,&local_1a00,&local_1868);
        local_1950 = (ulong)local_1950._5_3_ << 0x28;
        local_1950 = CONCAT44(local_1950._4_4_,0xb);
        local_1948 = 0xffffffff;
        uStack_1940 = 0xffffffff00000000;
        puStack_1958 = &local_1880;
        local_1920 = 0x40;
        local_18c8 = 0x40;
        local_1938 = 0xffffffff;
        puStack_1928 = local_191c;
        local_18dd = 0;
        local_191c[0] = 0;
        local_1885 = 0;
        local_18c4[0] = 0;
        uStack_1870 = 0;
        puStack_18d0 = local_18c4;
        puVar6 = auStack_186a;
        if (auStack_186a <= (undefined1 *)((long)&local_1880 + 2U)) {
          puVar6 = (undefined1 *)((long)&local_1880 + 2U);
        }
        local_1880 = 0;
        uStack_1878 = 0;
        local_1872 = 0;
        local_1960 = (undefined **)puVar2;
        local_1930 = ppuVar1;
        local_18d8 = ppuVar1;
        memset(puStack_1958,0,(ulong)(puVar6 + (-0xe1 - (long)&local_1960)) & 0xfffffffffffffffc | 2
              );
        local_1a00 = (undefined **)CONCAT44(local_1a00._4_4_,10);
        local_19f8 = (undefined8 *)auStack_1724;
        FUN_0082b014(&local_1960);
        local_1994 = 0;
        local_1998 = 1;
        local_19a8 = 0;
        uStack_19a0 = 0;
        local_19b8 = (char *)0x0;
        local_19b0 = 0;
        local_19c0 = ppuVar3;
        FUN_02906b00(&local_19c0,&local_1960,&local_1a00);
        puVar11 = (undefined4 *)(**(code **)((long)local_1960 + 0x40))(&local_1960);
        uVar14 = 1;
        if (local_1710 == 1) {
          uVar14 = 2;
        }
        *puVar11 = uVar14;
        local_1968 = *(undefined8 *)(puVar16[0x43] + (ulong)(1 < *(uint *)(puVar16 + 0x42)) * 8);
        local_196d = 0;
        local_19b0._4_4_ = (uint)((ulong)local_19b0 >> 0x20) & 0xffffff00;
        pcStack_19c8 = "MyDesignExchInfo";
        local_19b0._0_4_ = 0x40;
        lVar9 = (long)&local_19b0 + 4;
        puStack_19d8 = &DAT_040a049e;
        local_19f8 = &local_1960;
        local_1a00 = &PTR_LAB_04b2af08;
        local_19e0 = ppuVar4;
        local_19d0 = ppuVar4;
        local_19c0 = ppuVar1;
        local_19b8 = (char *)lVar9;
        FUN_034630a0(&local_19c0,&local_19d0,&local_19e0,&local_1a00);
        lVar13 = 0x38;
        if (*(uint *)(puVar16 + 0x42) < 8) {
          lVar13 = 0;
        }
        local_1968 = *(undefined8 *)(puVar16[0x43] + lVar13);
        local_196d = 0;
        local_19b0._4_4_ = local_19b0._4_4_ & 0xffffff00;
        local_19b0._0_4_ = 0x40;
        puStack_19d8 = &DAT_040a7941;
        pcStack_19c8 = "MyDesignExchInfo";
        local_19e0 = ppuVar4;
        local_19d0 = ppuVar4;
        local_19c0 = ppuVar1;
        local_19b8 = (char *)lVar9;
        FUN_03462ecc(&local_19c0,&local_19d0,&local_19e0);
        lVar13 = 0x18;
        if (*(uint *)(puVar16 + 0x42) < 4) {
          lVar13 = 0;
        }
        local_1968 = *(undefined8 *)(puVar16[0x43] + lVar13);
        local_196d = 0;
        local_19b0._4_4_ = local_19b0._4_4_ & 0xffffff00;
        local_19b0._0_4_ = 0x40;
        puStack_19d8 = &DAT_040867f5;
        pcStack_19c8 = "MyDesignExchInfo";
        local_19e0 = ppuVar4;
        local_19d0 = ppuVar4;
        local_19c0 = ppuVar1;
        local_19b8 = (char *)lVar9;
        FUN_03462ecc(&local_19c0,&local_19d0,&local_19e0);
        lVar13 = 0x30;
        if (*(uint *)(puVar16 + 0x42) < 7) {
          lVar13 = 0;
        }
        local_1968 = *(undefined8 *)(puVar16[0x43] + lVar13);
        local_196d = 0;
        local_19b0._4_4_ = local_19b0._4_4_ & 0xffffff00;
        local_19b0 = CONCAT44(local_19b0._4_4_,0x40);
        pcStack_19c8 = "STR_KeyIcon";
        local_19d0 = ppuVar4;
        local_19c0 = ppuVar1;
        local_19b8 = (char *)lVar9;
        FUN_033fc4b0(&local_19e0,1,param_4);
        FUN_03462ecc(&local_19c0,&local_19d0,&local_19e0);
      }
    }
    FUN_03451360(param_3,param_6);
    puVar2 = PTR_DAT_04bb2230;
    local_1708[0] = 0x13;
    puVar16 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x178);
    if (((*PTR_DAT_04bb90e0 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb90e0), iVar8 != 0)) {
      *(undefined **)PTR_DAT_04bb90d8 = PTR_DAT_04bb7c30 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb90e0);
    }
    if ((puVar16 != (undefined8 *)0x0) &&
       (uVar10 = (**(code **)*puVar16)(puVar16,PTR_DAT_04bb90d8), (uVar10 & 1) != 0)) {
      FUN_03029f30(puVar16,0);
    }
    FUN_007ef010(auStack_1a02,param_5);
    FUN_007e4920(local_1708,auStack_1a02);
    if (((local_1708[0] & 0xffff) != (uint)*(ushort *)PTR_DAT_04bb3170) &&
       (lStack_16f8 != 0 || local_1700 != 0)) {
      local_1848 = PTR_DAT_04bb2020 + 0x10;
      local_1840 = "/L_LoadingIcon_00";
      uVar12 = FUN_02bcb9a0(*(long *)param_3[0x7f] + 0x38,&local_1848);
      uVar10 = FUN_007e4bb0(local_1708);
      if ((uVar10 & 1) == 0) {
        bVar7 = 0;
        if (*param_6 < 100) {
          bVar7 = *param_6;
        }
        FUN_0344d8e0(uVar12,param_5,bVar7);
      }
      else {
        local_1840 = (char *)((ulong)local_1840 & 0xffffffff00000000);
        local_1848 = (undefined *)0xfffe00000000;
        FUN_0277d4ac((ulong)&local_1848 | 4);
        local_1838 = 0;
        local_1840._0_6_ = CONCAT24(*(undefined2 *)PTR_DAT_04bb3170,(undefined4)local_1840);
        FUN_007ef010(&local_19c0,param_5);
        FUN_00807efc(&local_1960,&local_19c0);
        local_1848 = (undefined *)((long)local_1960 << 0x20);
        local_1840._0_6_ = CONCAT24(*param_5,local_1960._4_4_);
        local_1838 = uVar12;
        FUN_033bd990(*(undefined8 *)(*(long *)puVar2 + 0x30),&local_1848);
      }
    }
    (**(code **)(*param_3 + 0x120))(param_3,0);
    plVar15 = (long *)*param_1;
    if (((int)plVar15[0x15] == 5) || ((int)plVar15[0x15] == 2)) {
      FUN_03869260(param_2,plVar15);
      *(undefined1 *)((long)plVar15 + 0x165) = 1;
    }
    else if ((*(uint *)(plVar15 + 0x15) < 7) &&
            ((1 << (ulong)(*(uint *)(plVar15 + 0x15) & 0x1f) & 0x58U) != 0)) {
      (**(code **)(*plVar15 + 0xa8))(plVar15);
    }
    lVar9 = param_1[1];
    if (lVar9 != 0) {
      FUN_007ef010(&local_1848,param_5);
      *(undefined8 *)(lVar9 + 0x220) = *param_7;
      *(undefined2 *)(lVar9 + 0x218) = local_1848._0_2_;
      if (*(char *)(lVar9 + 0x230) == '\0') {
        *(undefined8 *)(lVar9 + 0x228) = 0;
      }
      plVar15 = (long *)param_1[1];
      if (((int)plVar15[0x15] == 5) || ((int)plVar15[0x15] == 2)) {
        FUN_03869260(param_2,plVar15);
        *(undefined1 *)((long)plVar15 + 0x165) = 1;
      }
      else if ((*(uint *)(plVar15 + 0x15) < 7) &&
              ((1 << (ulong)(*(uint *)(plVar15 + 0x15) & 0x1f) & 0x58U) != 0)) {
        (**(code **)(*plVar15 + 0xa8))(plVar15);
      }
    }
  }
  return;
}


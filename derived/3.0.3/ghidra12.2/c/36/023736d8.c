
void FUN_023736d8(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  short sVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  uint *puVar14;
  undefined *local_40;
  char *local_38;
  
  puVar4 = PTR_DAT_04bb4718;
  uVar7 = *(int *)(param_1 + 0x1810) - 2;
  if (uVar7 < 6) {
    uVar7 = *(uint *)(&DAT_0417a858 + (long)(int)uVar7 * 4);
  }
  else {
    uVar7 = 5;
  }
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_054f0960);
      puVar14 = (uint *)&DAT_054f0958;
      if (iVar5 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
        puVar14 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar14 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar14 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
    if ((ulong)*pbVar1 < 8) {
      puVar14 = puVar14 + (ulong)*pbVar1 * 2;
    }
  }
  local_40._0_4_ = 1;
  *puVar14 = *puVar14 & 0xfffffffd;
  lVar8 = *(long *)(param_1 + 0x60);
  if (lVar8 != 0) {
    *(undefined4 *)(lVar8 + 0x12d0) = 0;
    *(undefined1 *)(lVar8 + 0x142d) = 0;
    **(undefined1 **)(lVar8 + 0x12e0) = 0;
    *(undefined4 *)(lVar8 + 0x1330) = 0xffffffff;
    *(undefined4 *)(lVar8 + 0x1428) = 0;
    *(undefined8 *)(lVar8 + 0x1334) = 0;
    *(undefined8 *)(lVar8 + 0x133c) = 0;
    *(undefined4 *)(lVar8 + 0x1344) = 0;
  }
  if (0x148 < (int)uVar7) {
    uVar6 = FUN_02546f34(pbVar1,*(undefined4 *)(param_1 + 0x230));
    if ((uVar6 & 1) == 0) {
      local_38 = (char *)((ulong)local_38 & 0xffffffff00000000);
      local_40 = (undefined *)CONCAT35(local_40._5_3_,0x100000006);
      FUN_02374e74(param_1,&local_40);
      return;
    }
    return;
  }
  uVar6 = FUN_02372a04(param_1);
  if ((uVar6 & 1) != 0) {
    return;
  }
  lVar8 = *(long *)puVar4;
  if (lVar8 == 0) {
    if ((DAT_054f08c8 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_054f08c8);
      puVar14 = &DAT_054f08c0;
      if (iVar5 != 0) {
        DAT_054f08c0 = 0;
        __cxa_guard_release(&DAT_054f08c8);
        puVar14 = &DAT_054f08c0;
      }
    }
    else {
      puVar14 = &DAT_054f08c0;
    }
  }
  else {
    puVar14 = (uint *)(lVar8 + 0x1fc);
  }
  local_40 = (undefined *)CONCAT44(local_40._4_4_,2);
  if (((*puVar14 >> 2 & 1) != 0) &&
     (((*(long *)PTR_DAT_04bb2808 == 0 ||
       (lVar8 = *(long *)(*(long *)PTR_DAT_04bb2808 + 8), lVar8 == 0)) ||
      (*(uint *)(lVar8 + 0x1b0) < 2)))) {
    local_40 = PTR_DAT_04bb2020 + 0x10;
    local_38 = "StandByGameStartPhoneCall";
    iVar5 = FUN_0274bce0(pbVar1,&local_40);
    if ((iVar5 != 0) && (sVar3 = *(short *)PTR_DAT_04bb6298, sVar3 != -1)) {
      local_40 = (undefined *)CONCAT44(local_40._4_4_,1);
      puVar14 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
      if (0xff < (uint)(int)sVar3) {
        puVar14 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar14 >> 1 & 1) != 0) {
        FUN_016e6b40();
        uVar6 = FUN_016e6c20();
        if ((uVar6 & 1) == 0) {
          uVar6 = FUN_0253e9ec();
          if ((uVar6 & 1) == 0) {
            FUN_0253dcc0(pbVar1);
            return;
          }
          FUN_0253ea50(pbVar1);
        }
      }
    }
  }
  uVar6 = FUN_02546f34(pbVar1,*(undefined4 *)(param_1 + 0x230));
  if ((uVar6 & 1) != 0) {
    return;
  }
  lVar10 = *(long *)(param_1 + 0x70);
  lVar8 = 0;
  if ((lVar10 != 0) && (lVar8 = lVar10 + 0x278, *(int *)(lVar10 + 0x280) == 0x60)) {
    local_40 = (undefined *)CONCAT44(local_40._4_4_,0x62);
    *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
    *(undefined8 *)(param_1 + 0x18c0) = 0;
    *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
    *(undefined8 *)(param_1 + 0x18c8) = 0;
    *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
    *(undefined8 *)(param_1 + 0x18d0) = 0;
    *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
    *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
    *(undefined8 *)(param_1 + 0x18a0) = 0;
    *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
    *(undefined8 *)(param_1 + 0x18a8) = 0;
    *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
    *(undefined8 *)(param_1 + 0x18b0) = 0;
    *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
    *(undefined8 *)(param_1 + 0x18b8) = 0;
    *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
    *(undefined8 *)(param_1 + 0x1880) = 0;
    *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
    *(undefined8 *)(param_1 + 0x1888) = 0;
    *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
    *(undefined8 *)(param_1 + 0x1890) = 0;
    *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
    *(undefined8 *)(param_1 + 0x1898) = 0;
    *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
    FUN_03ebb160(lVar10 + 0x278,0x62);
    return;
  }
  lVar9 = *(long *)PTR_DAT_04bb39b0;
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0x15c) != 0)) {
    pbVar2 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar9 + 0x15c) != 0) {
      pbVar2 = (byte *)(lVar9 + 0x158);
    }
    uVar11 = (uint)*pbVar2;
    if (7 < uVar11) {
      uVar11 = 0xff;
    }
    uVar12 = (uint)*pbVar1;
    if (7 < uVar12) {
      uVar12 = 0xff;
    }
    if (uVar11 != uVar12) {
      lVar13 = *(long *)PTR_DAT_04bb38d0;
      if (lVar13 == 0) {
LAB_02373c04:
        if (lVar10 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          if (*(uint *)(lVar10 + 0x280) < 0x149) {
            uVar11 = *(uint *)(lVar10 + 0x280);
          }
        }
        local_40 = (undefined *)CONCAT44(local_40._4_4_,uVar11);
        if ((uVar11 != uVar7) &&
           (local_40 = (undefined *)CONCAT44(local_40._4_4_,uVar7), uVar7 < 0x149)) {
          *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
          *(undefined8 *)(param_1 + 0x18c0) = 0;
          *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
          *(undefined8 *)(param_1 + 0x18c8) = 0;
          *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
          *(undefined8 *)(param_1 + 0x18d0) = 0;
          *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
          *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
          *(undefined8 *)(param_1 + 0x18a0) = 0;
          *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
          *(undefined8 *)(param_1 + 0x18a8) = 0;
          *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
          *(undefined8 *)(param_1 + 0x18b0) = 0;
          *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
          *(undefined8 *)(param_1 + 0x18b8) = 0;
          *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
          *(undefined8 *)(param_1 + 0x1880) = 0;
          *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
          *(undefined8 *)(param_1 + 0x1888) = 0;
          *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
          *(undefined8 *)(param_1 + 0x1890) = 0;
          *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
          *(undefined8 *)(param_1 + 0x1898) = 0;
          *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
          *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
          *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
          *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
          FUN_03ebb160(lVar8,uVar7);
        }
      }
      else {
        if (*(int *)(lVar9 + 0x15c) == 0) {
          if ((*(byte *)(lVar13 + 0x88) >> (ulong)(uVar12 & 0x1f) & 1) == 0) goto LAB_02373c04;
        }
        else {
          uVar11 = (uint)*(byte *)(lVar13 + 0x88) - (*(byte *)(lVar13 + 0x88) >> 1 & 0x55555555);
          uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
          uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
          uVar11 = uVar11 + (uVar11 >> 8);
          if ((uVar11 + (uVar11 >> 0x10) & 0x3f) == 0) goto LAB_02373c04;
        }
        local_38 = (char *)((ulong)local_38 & 0xffffff0000000000);
        local_40 = (undefined *)0x1000000000006;
        uVar6 = FUN_02374564(param_1,&local_40);
        if ((uVar6 & 1) == 0) {
          FUN_02372864(param_1,uVar7,0,0);
        }
      }
      goto LAB_02373cfc;
    }
  }
  if (*(int *)(param_1 + 0x1810) == 1) {
    uVar6 = FUN_02372a04(param_1);
    if ((uVar6 & 1) != 0) goto LAB_02373cfc;
    local_40 = (undefined *)0x0;
    local_38 = (char *)0x0;
    uVar6 = FUN_0247fe88(param_1,&local_40);
    if ((uVar6 & 1) != 0) goto LAB_02373cfc;
  }
  local_38 = (char *)((ulong)local_38 & 0xffffff0000000000);
  local_40 = (undefined *)0x1000000000006;
  uVar6 = FUN_02374564(param_1,&local_40);
  if ((uVar6 & 1) == 0) {
    if (uVar7 == 0x5a) {
      FUN_023e861c(param_1);
    }
    else {
      uVar6 = FUN_0244bbb0(param_1);
      if ((uVar6 & 1) == 0) {
        puVar14 = (uint *)FUN_0251d150(pbVar1);
        local_40 = (undefined *)CONCAT44(local_40._4_4_,4);
        *puVar14 = *puVar14 | 0x10;
        FUN_025480a0(pbVar1,10,*(undefined4 *)PTR_DAT_04bb3238,0);
      }
      else {
        FUN_02372704(param_1,uVar7,0,0);
      }
    }
  }
LAB_02373cfc:
  lVar8 = *(long *)puVar4;
  if (lVar8 == 0) {
    if ((DAT_054f08c8 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_054f08c8);
      puVar14 = &DAT_054f08c0;
      if (iVar5 != 0) {
        DAT_054f08c0 = 0;
        __cxa_guard_release(&DAT_054f08c8);
      }
    }
    else {
      puVar14 = &DAT_054f08c0;
    }
  }
  else {
    puVar14 = (uint *)(lVar8 + 0x1fc);
  }
  *puVar14 = *puVar14 & 0xfffffffb;
  puVar4 = PTR_DAT_04bb2020;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  local_38 = "StandByPhoneCallPrintService";
  iVar5 = FUN_0274bce0(pbVar1,&local_40);
  if ((iVar5 != 0) && (*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x6622bd46)) {
    local_40 = puVar4 + 0x10;
    local_38 = "PhoneCallPrintServiceDelayFlag";
    FUN_0274bfe8(pbVar1,&local_40,1);
  }
  return;
}


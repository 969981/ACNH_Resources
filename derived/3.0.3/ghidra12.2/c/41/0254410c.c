
bool FUN_0254410c(byte *param_1)

{
  byte *pbVar1;
  undefined *puVar2;
  uint *puVar3;
  short sVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  char *pcVar12;
  long lVar13;
  byte bVar14;
  int *piVar15;
  char *pcVar16;
  bool bVar17;
  undefined1 local_4c [4];
  long *local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_18;
  undefined4 local_14;
  
  if (param_1[0xe] == 0) goto LAB_02544248;
  bVar14 = *param_1;
  if (7 < bVar14) {
    bVar14 = 0xff;
  }
  local_48 = (long *)CONCAT71(local_48._1_7_,bVar14);
  lVar8 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_48,1);
  if (lVar8 == 0) {
    return false;
  }
  lVar13 = *(long *)(lVar8 + 0x3278);
  if (lVar13 == 0) {
    uVar9 = 0;
  }
  else {
    if (*(undefined8 **)(lVar13 + 0x10) == (undefined8 *)0x0) {
      uVar9 = 0;
      plVar10 = *(long **)(lVar13 + 0x20);
    }
    else {
      uVar9 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      uVar9 = uVar9 & 0xffffffff;
      if (*(long *)(lVar8 + 0x3278) == 0) goto LAB_025441cc;
      plVar10 = *(long **)(*(long *)(lVar8 + 0x3278) + 0x20);
    }
    if (plVar10 != (long *)0x0) {
      local_48 = *(long **)(lVar8 + 0x3258);
      local_40 = *(undefined8 *)(lVar8 + 0x3260);
      local_38 = 0x2b8;
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_48);
    }
  }
LAB_025441cc:
  pbVar1 = (byte *)(*(long *)(lVar8 + 0x3260) + *(long *)(lVar8 + 0x3258));
  *pbVar1 = param_1[2];
  pbVar1[1] = param_1[3];
  pbVar1[2] = param_1[4];
  pbVar1[3] = param_1[5];
  pbVar1[4] = param_1[6];
  pbVar1[5] = param_1[7];
  pbVar1[6] = param_1[8];
  pbVar1[7] = param_1[9];
  pbVar1[8] = param_1[10];
  *(undefined2 *)(pbVar1 + 10) = *(undefined2 *)(param_1 + 0xc);
  if ((((uVar9 & 1) != 0) && (*(long *)(lVar8 + 0x3278) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(lVar8 + 0x3278) + 0x18), puVar11 != (undefined8 *)0x0)) {
    (**(code **)*puVar11)();
  }
LAB_02544248:
  uVar9 = (ulong)*param_1;
  piVar15 = (int *)PTR_DAT_04bb3238;
  if (*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      piVar15 = (int *)(DAT_054f5738 + uVar9 * 4 + 0xde8);
    }
  }
  local_18 = *piVar15;
  if (local_18 == 0) {
    bVar17 = false;
  }
  else {
    FUN_0071c8d0(&local_48,&local_18,PTR_DAT_04bb3238,0);
    plVar10 = local_48;
    if (local_48 != (long *)0x0) {
      if (((*PTR_DAT_04bb3778 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar7 != 0)) {
        *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3778);
      }
      uVar9 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb3770);
      if ((uVar9 & 1) == 0) {
        local_40._0_2_ = (ushort)(byte)local_40;
      }
    }
    bVar17 = ((local_48 != (long *)0x0 && (byte)local_40 != '\0') && local_40._1_1_ != '\0') &&
             local_40._2_1_ != '\0';
    if (((local_48 != (long *)0x0 && (byte)local_40 != '\0') && local_40._1_1_ != '\0') &&
        local_40._2_1_ != '\0') {
      if (((param_1[0x14] != 0) && (*param_1 < 8)) && (uVar6 = FUN_02582d8c(param_1,1), uVar6 < 8))
      {
        if ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar6 * 0x13f0 + 0x13d4) != '\0') &&
           (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar6 * 0x13f0 + 0x13d6) != '\0')) {
          local_48[0x331] = 0;
          local_48[0x332] = 0;
          local_48[0x333] = 0;
          local_48[0x334] = 0;
          local_48[0x335] = 0;
          local_48[0x336] = 0;
          local_48[0x337] = 0;
          local_48[0x338] = 0;
          local_48[0x339] = 0;
          local_48[0x33a] = 0;
          local_48[0x32c] = local_48[0x31c];
          *(undefined2 *)(local_48 + 0x33b) = 0;
          local_48[0x330] = 0;
          local_48[0x32d] = local_48[0x31d];
          local_48[0x32e] = local_48[0x31e];
          local_48[0x32f] = local_48[799];
          *(undefined2 *)((long)local_48 + 0x198c) = 0x101;
          *(undefined1 *)((long)local_48 + 0x198e) = 6;
          local_14 = 0xf;
          local_48[0x318] = local_48[0x338];
          local_48[0x319] = local_48[0x339];
          local_48[0x31a] = local_48[0x33a];
          *(short *)(local_48 + 0x31b) = (short)local_48[0x33b];
          local_48[0x314] = local_48[0x334];
          local_48[0x315] = local_48[0x335];
          local_48[0x316] = local_48[0x336];
          local_48[0x317] = local_48[0x337];
          local_48[0x310] = local_48[0x330];
          local_48[0x311] = local_48[0x331];
          local_48[0x312] = local_48[0x332];
          local_48[0x313] = local_48[0x333];
          local_48[0x30c] = local_48[0x32c];
          local_48[0x30d] = local_48[0x32d];
          local_48[0x30f] = local_48[0x32f];
          local_48[0x30e] = local_48[0x32e];
          lVar8 = 0;
          if (local_48[0xe] != 0) {
            lVar8 = local_48[0xe] + 0x278;
          }
          FUN_03ebb160(lVar8,0xf);
        }
      }
      FUN_023163dc(local_48,*(undefined4 *)(param_1 + 0x10));
    }
    uVar9 = (ulong)*param_1;
  }
  local_4c[0] = (undefined1)uVar9;
  if (7 < (uint)uVar9) {
    local_4c[0] = 0xff;
  }
  uVar9 = FUN_02669430(local_4c);
  puVar5 = PTR_DAT_04bb27d0;
  if ((uVar9 & 1) == 0) {
    sVar4 = *(short *)PTR_DAT_04bb6298;
    if (sVar4 == -1) {
      return bVar17;
    }
    local_48 = (long *)CONCAT44(local_48._4_4_,0x20);
    puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8;
    if (0xff < (uint)(int)sVar4) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar2 + 4) & 1) == 0) {
      return bVar17;
    }
    if (1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476)) {
      pcVar12 = (char *)FUN_02582a24(param_1);
      lVar8 = **(long **)puVar5;
      bVar14 = *(byte *)(lVar8 + 0x473);
      pcVar16 = PTR_DAT_04bc1220;
      if ((long)(char)bVar14 != 0xffffffffffffffff) {
        puVar3 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar14 & 0xffffffffU) * 0x20;
        if (7 < bVar14) {
          puVar3 = (uint *)(lVar8 + 0x48);
        }
        if ((*puVar3 & 8) != 0) {
          pcVar16 = (char *)(lVar8 + 0x472);
        }
      }
      if (*pcVar12 != *pcVar16) {
        return bVar17;
      }
    }
  }
  *(undefined1 *)(*(long *)PTR_DAT_04bb2230 + 0x50e) = 1;
  return bVar17;
}


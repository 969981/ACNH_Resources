
void FUN_02483978(long param_1)

{
  byte *pbVar1;
  int iVar2;
  long *plVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  undefined *puVar8;
  uint uVar9;
  long lVar10;
  float *pfVar11;
  undefined4 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined2 uVar15;
  int iVar16;
  uint *puVar17;
  byte bVar18;
  int iVar19;
  float fVar20;
  undefined8 local_80;
  char *local_78;
  float local_6c;
  undefined4 local_68;
  float local_64;
  
  uVar4 = *(ushort *)(param_1 + 0x1900);
  lVar10 = FUN_0251e98c(1);
  pfVar11 = (float *)(**(code **)(*(long *)(lVar10 + 0x13b0) + 0xf0))(lVar10 + 0x13b0);
  fVar20 = *pfVar11;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_6c = 1.4013e-44;
    local_80 = (undefined *)CONCAT44(local_80._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_02483a28;
  }
  else {
LAB_02483a28:
    iVar19 = (uint)uVar4 * 0x10000;
    plVar3 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar3 = *(long **)(param_1 + 0x4c8);
    }
    lVar10 = (**(code **)(*plVar3 + 0x148))();
    iVar16 = iVar19 - *(int *)(lVar10 + 4);
    if (0xb60b5e < iVar16 + 0x5b05afU) {
      iVar6 = 0x15555560;
      iVar19 = -0x15555560;
      iVar16 = (int)(fVar20 * (float)iVar16);
      if (iVar16 < 1) {
        iVar6 = -0x5b05b0;
      }
      else {
        iVar19 = 0x5b05b0;
      }
      iVar2 = iVar16;
      if (iVar6 <= iVar16) {
        iVar2 = iVar6;
      }
      if (iVar19 <= iVar16) {
        iVar19 = iVar2;
      }
      iVar19 = iVar19 + *(int *)(lVar10 + 4);
    }
    *(int *)(lVar10 + 4) = iVar19;
    if (*(int *)(param_1 + 0x178) != 0) {
      iVar19 = *(int *)(param_1 + 0x18e5);
      iVar16 = *(int *)(param_1 + 0x18eb);
      lVar10 = FUN_0251e98c(1);
      puVar12 = (undefined4 *)(**(code **)(*(long *)(lVar10 + 0x1380) + 0xf0))(lVar10 + 0x1380);
      local_68 = 0;
      puVar14 = &DAT_054e9a58;
      if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
        puVar14 = *(undefined8 **)(param_1 + 0x4c8);
      }
      local_80 = (undefined *)(puVar14[0x4f] & 0xffffffff);
      local_78 = (char *)CONCAT44(local_78._4_4_,*(undefined4 *)(puVar14 + 0x50));
      local_6c = (float)iVar19 * 0.001;
      local_64 = (float)iVar16 * 0.001;
      FUN_03eb4b60(*puVar12,0x41200000,0x3e4ccccc,&local_80,&local_6c);
      *(undefined4 *)(puVar14 + 0x4f) = (undefined4)local_80;
      *(undefined4 *)(puVar14 + 0x50) = local_78._0_4_;
      if (*(int *)(param_1 + 0x178) != 0) {
        return;
      }
    }
  }
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  if ((*(long *)PTR_DAT_04bb7ff8 != 0) &&
     (uVar13 = FUN_02ef9074(*(long *)PTR_DAT_04bb7ff8,0x3b,pbVar1), (uVar13 & 1) == 0)) {
    return;
  }
  puVar8 = PTR_DAT_04bb4f78;
  bVar18 = *pbVar1;
  if (7 < bVar18) {
    bVar18 = 0xff;
  }
  local_80 = (undefined *)CONCAT71(local_80._1_7_,bVar18);
  lVar10 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_80,1);
  if (lVar10 == 0) {
    iVar19 = -1;
  }
  else {
    if ((*(long **)(lVar10 + 0x161a8) == (long *)0x0) ||
       (puVar14 = (undefined8 *)**(long **)(lVar10 + 0x161a8), puVar14 == (undefined8 *)0x0)) {
      uVar9 = 1;
    }
    else {
      uVar9 = (**(code **)*puVar14)();
      uVar9 = uVar9 ^ 1;
    }
    bVar18 = *(byte *)(*(long *)(lVar10 + 0x16190) + *(long *)(lVar10 + 0x16188));
    if (7 < bVar18) {
      bVar18 = 0xff;
    }
    iVar19 = (int)(char)bVar18;
    if ((((uVar9 & 1) == 0) && (*(long *)(lVar10 + 0x161a8) != 0)) &&
       (puVar14 = *(undefined8 **)(*(long *)(lVar10 + 0x161a8) + 8), puVar14 != (undefined8 *)0x0))
    {
      (**(code **)*puVar14)();
    }
  }
  if (*(int *)(param_1 + 0x848) == iVar19) {
    if (*(long *)PTR_DAT_04bb4718 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar19 = __cxa_guard_acquire(&DAT_054f0960);
        puVar17 = (uint *)&DAT_054f0958;
        if (iVar19 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar17 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar17 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
      if ((ulong)*pbVar1 < 8) {
        puVar17 = puVar17 + (ulong)*pbVar1 * 2;
      }
    }
    local_80._0_4_ = 5;
    *puVar17 = *puVar17 & 0xffffffdf;
    uVar13 = FUN_02546f34(pbVar1,*(undefined4 *)(param_1 + 0x230));
    if ((uVar13 & 1) == 0) {
      local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
      local_80 = (undefined *)CONCAT35(local_80._5_3_,0x100000006);
      FUN_02374e74(param_1,&local_80);
      return;
    }
    return;
  }
  bVar18 = *pbVar1;
  if (7 < bVar18) {
    bVar18 = 0xff;
  }
  local_80 = (undefined *)CONCAT71(local_80._1_7_,bVar18);
  lVar10 = FUN_02583354(*(undefined8 *)puVar8,&local_80,1);
  if (lVar10 != 0) {
    if ((*(long **)(lVar10 + 0x161a8) == (long *)0x0) ||
       (puVar14 = (undefined8 *)**(long **)(lVar10 + 0x161a8), puVar14 == (undefined8 *)0x0)) {
      uVar9 = 1;
    }
    else {
      uVar9 = (**(code **)*puVar14)();
      uVar9 = uVar9 ^ 1;
    }
    bVar18 = *(byte *)(*(long *)(lVar10 + 0x16190) + *(long *)(lVar10 + 0x16188));
    if ((((uVar9 & 1) == 0) && (*(long *)(lVar10 + 0x161a8) != 0)) &&
       (puVar14 = *(undefined8 **)(*(long *)(lVar10 + 0x161a8) + 8), puVar14 != (undefined8 *)0x0))
    {
      (**(code **)*puVar14)();
    }
    if (7 < bVar18) {
      *(undefined8 *)(param_1 + 0x1980) = 0;
      *(undefined8 *)(param_1 + 0x1988) = 0;
      *(undefined8 *)(param_1 + 0x1990) = 0;
      *(undefined8 *)(param_1 + 0x1998) = 0;
      *(undefined8 *)(param_1 + 0x19a0) = 0;
      *(undefined8 *)(param_1 + 0x19a8) = 0;
      *(undefined8 *)(param_1 + 0x19b0) = 0;
      *(undefined8 *)(param_1 + 0x19b8) = 0;
      *(undefined8 *)(param_1 + 0x19c0) = 0;
      *(undefined8 *)(param_1 + 0x19c8) = 0;
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x19d0) = 0;
      *(undefined2 *)(param_1 + 0x19d8) = 0;
      uVar7 = (undefined4)((ulong)local_80 >> 0x20);
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      *(undefined1 *)(param_1 + 0x1980) = 0xff;
      *(undefined1 *)(param_1 + 0x1982) = 0;
      local_6c = *(float *)(param_1 + 0x230);
      *(undefined1 *)(param_1 + 0x1981) = 1;
      sVar5 = *(short *)PTR_DAT_04bb6298;
      if (sVar5 != -1) {
        local_80 = (undefined *)CONCAT44(uVar7,1);
        puVar17 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
        if (0xff < (uint)(int)sVar5) {
          puVar17 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar17 >> 1 & 1) != 0) {
          uVar15 = 0;
          goto LAB_024840b4;
        }
      }
      local_80 = (undefined *)CONCAT44(uVar7,1);
      FUN_016f742c(&local_80,&local_6c,0);
      uVar15 = local_80._2_2_;
LAB_024840b4:
      *(undefined2 *)(param_1 + 0x1983) = uVar15;
      local_80 = (undefined *)CONCAT44(local_80._4_4_,0x81);
      *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
      *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
      *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
      *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
      *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
      *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
      *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
      *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
      *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
      *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
      *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
      *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
      *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
      *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
      *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
      *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
      lVar10 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar10 = *(long *)(param_1 + 0x70) + 0x278;
      }
      FUN_03ebb160(lVar10,0x81);
      return;
    }
  }
  bVar18 = *pbVar1;
  if (7 < bVar18) {
    bVar18 = 0xff;
  }
  local_80 = (undefined *)CONCAT71(local_80._1_7_,bVar18);
  lVar10 = FUN_02583354(*(undefined8 *)puVar8,&local_80,1);
  if (lVar10 == 0) {
    bVar18 = 0xff;
  }
  else {
    if ((*(long **)(lVar10 + 0x161a8) == (long *)0x0) ||
       (puVar14 = (undefined8 *)**(long **)(lVar10 + 0x161a8), puVar14 == (undefined8 *)0x0)) {
      uVar9 = 1;
    }
    else {
      uVar9 = (**(code **)*puVar14)();
      uVar9 = uVar9 ^ 1;
    }
    bVar18 = *(byte *)(*(long *)(lVar10 + 0x16190) + *(long *)(lVar10 + 0x16188));
    if (7 < bVar18) {
      bVar18 = 0xff;
    }
    if ((((uVar9 & 1) == 0) && (*(long *)(lVar10 + 0x161a8) != 0)) &&
       (puVar14 = *(undefined8 **)(*(long *)(lVar10 + 0x161a8) + 8), puVar14 != (undefined8 *)0x0))
    {
      (**(code **)*puVar14)();
    }
  }
  *(undefined8 *)(param_1 + 0x1980) = 0;
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  uVar7 = (undefined4)((ulong)local_80 >> 0x20);
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  if (7 < bVar18) {
    bVar18 = 0xff;
  }
  *(byte *)(param_1 + 0x1980) = bVar18;
  *(undefined1 *)(param_1 + 0x1982) = 0;
  local_6c = *(float *)(param_1 + 0x230);
  *(undefined1 *)(param_1 + 0x1981) = 1;
  sVar5 = *(short *)PTR_DAT_04bb6298;
  if (sVar5 != -1) {
    local_80 = (undefined *)CONCAT44(uVar7,1);
    puVar17 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar17 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar17 >> 1 & 1) != 0) {
      uVar15 = 0;
      goto LAB_02483fbc;
    }
  }
  local_80 = (undefined *)CONCAT44(uVar7,1);
  FUN_016f742c(&local_80,&local_6c,0);
  uVar15 = local_80._2_2_;
LAB_02483fbc:
  *(undefined2 *)(param_1 + 0x1983) = uVar15;
  local_80 = (undefined *)CONCAT44(local_80._4_4_,0x81);
  *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
  *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
  *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
  *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
  *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
  *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
  *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
  *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
  *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
  *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
  *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
  *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
  *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
  *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
  *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
  *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
  lVar10 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar10 = *(long *)(param_1 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar10,0x81);
  local_80 = PTR_DAT_04bb2020 + 0x10;
  local_78 = "PlayerUsedChangeStick";
  FUN_0274bfe8(pbVar1,&local_80,1);
  return;
}


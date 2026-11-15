
void FUN_023eb390(long param_1)

{
  byte *pbVar1;
  undefined *puVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  short sVar6;
  ushort uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  char *pcVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  uint *puVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined8 local_1e8;
  char *local_1e0;
  int local_1d8;
  char *local_188;
  int local_180;
  undefined1 auStack_138 [88];
  undefined1 local_e0;
  undefined1 local_bc;
  undefined4 local_b8;
  undefined1 local_b3;
  undefined4 local_94;
  undefined **local_90 [4];
  int local_70;
  float local_6c;
  float fStack_68;
  float local_64;
  
  puVar4 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_1 + 0x4c8);
  }
  uVar18 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
  *(undefined4 *)((long)puVar4 + 0x2ec) = uVar18;
  *(undefined1 *)((long)puVar4 + 0x2e5) = 1;
  local_1e8._4_4_ = (float)(int)*(short *)(param_1 + 0x1906) * 0.25;
  local_90[0] = &PTR_LAB_04a81380;
  local_70 = (uint)*(ushort *)(param_1 + 0x1900) << 0x10;
  local_1e8._0_4_ = (float)*(int *)(param_1 + 0x1902) * 0.001;
  local_6c = (float)*(int *)(param_1 + 0x190c) * 0.001;
  local_64 = (float)*(int *)(param_1 + 0x1912) * 0.001;
  uVar5 = *(undefined1 *)(param_1 + 0x1916);
  fStack_68 = (float)(int)*(short *)(param_1 + 0x1910) * 0.25;
  local_1e0 = (char *)CONCAT44(local_1e0._4_4_,(float)*(int *)(param_1 + 0x1908) * 0.001);
  (**(code **)(*(long *)PTR_DAT_04bbde30 + 0x10))(PTR_DAT_04bbde30,local_90);
  FUN_016d9f34(param_1,&local_1e8,&local_6c,&local_70,uVar5,local_90);
  uVar13 = FUN_016da46c(param_1);
  if ((uVar13 & 1) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  fVar20 = (float)*(int *)(param_1 + 0x1902) * 0.001;
  fVar19 = (float)*(int *)(param_1 + 0x1908) * 0.001;
  iVar14 = (int)((float)(int)*(short *)(param_1 + 0x1906) * 0.25 * 4.0);
  *(int *)(param_1 + 0x1982) = (int)(fVar20 * 999.99994);
  if (0x7ffe < iVar14) {
    iVar14 = 0x7fff;
  }
  if (iVar14 < -0x7fff) {
    iVar14 = -0x8000;
  }
  *(short *)(param_1 + 0x1986) = (short)iVar14;
  *(undefined2 *)(param_1 + 0x1980) = *(undefined2 *)(param_1 + 0x1900);
  *(int *)(param_1 + 0x1988) = (int)(fVar19 * 999.99994);
  puVar10 = PTR_DAT_04bc3a80;
  puVar9 = PTR_DAT_04bb27d0;
  lVar16 = *(long *)PTR_DAT_04bb27d0;
  if ((((lVar16 == 0) || (*(long *)(lVar16 + 0x28) == 0)) || (*(int *)(lVar16 + 0x80) != 1)) ||
     ((*(long *)PTR_DAT_04bb7ff8 != 0 && (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) != 0)))) {
    if (((*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x24a26848) &&
        ((*(long *)PTR_DAT_04bb7ff8 == 0 || (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) == 0)))) &&
       (uVar13 = FUN_00925354(*(long *)(param_1 + 0x68) + 0x278), (uVar13 & 1) != 0)) {
LAB_023eb608:
      DAT_0545416c = 1;
      FUN_025248bc(param_1 + 0x1ee8,1);
    }
  }
  else {
    sVar6 = *(short *)PTR_DAT_04bb6298;
    if (sVar6 != -1) {
      local_1e8._0_4_ = 4.2039e-45;
      puVar17 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
      if (0xff < (uint)(int)sVar6) {
        puVar17 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((((*puVar17 >> 3 & 1) != 0) &&
           (lVar16 = *(long *)PTR_DAT_04bb5c90, (float)*(int *)(lVar16 + 0x28) * 5.0 <= fVar20)) &&
          (fVar20 < (float)*(int *)(lVar16 + 0x38) * 5.0 + 5.0)) &&
         (((float)*(int *)(lVar16 + 0x2c) * 5.0 <= fVar19 &&
          (fVar19 < (float)*(int *)(lVar16 + 0x3c) * 5.0 + 5.0)))) goto LAB_023eb608;
    }
  }
  puVar8 = PTR_DAT_04bb2020;
  local_1e8 = PTR_DAT_04bb2020 + 0x10;
  local_1e0 = "ValidateVillageSave";
  uVar13 = FUN_0273f0a0(&local_1e8);
  if ((uVar13 & 1) == 0) goto LAB_023eb7d0;
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  uVar7 = *(ushort *)PTR_DAT_04bb6298;
  if (*pbVar1 < 8) {
    if (uVar7 == 0xffff) goto LAB_023eb7d0;
    local_1e8 = (undefined *)CONCAT44(local_1e8._4_4_,6);
    puVar17 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar7 & 0xffffffffU) * 8);
    if (0xff < uVar7) {
      puVar17 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar17 >> 6 & 1) == 0) || (uVar13 = FUN_02915598(pbVar1), (uVar13 & 1) == 0))
    goto LAB_023eb7d0;
  }
  else {
    if (uVar7 == 0xffff) goto LAB_023eb7d0;
    local_1e8 = (undefined *)CONCAT44(local_1e8._4_4_,6);
    puVar17 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar7 & 0xffffffffU) * 8);
    if (0xff < uVar7) {
      puVar17 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar17 >> 6 & 1) == 0) goto LAB_023eb7d0;
  }
  if ((*(long *)PTR_DAT_04bb7ff8 == 0) || (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) == 0)) {
    puVar2 = puVar8 + 0x10;
    local_1e0 = "ReceiveTapBedLetter";
    local_1e8 = puVar2;
    iVar14 = FUN_0274bce0(pbVar1,&local_1e8);
    local_1e0 = "TapDreamFirstTalk";
    local_1e8 = puVar2;
    iVar12 = FUN_0274bce0(pbVar1,&local_1e8);
    if (iVar12 == 0 && iVar14 == 0) {
      iVar14 = FUN_0266c940(pbVar1);
      local_1e8 = (undefined *)CONCAT44(local_1e8._4_4_,iVar14);
      if ((iVar14 < 2) || (DAT_05405788 < 5)) goto LAB_023eb7d0;
    }
    local_94 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x2b4);
    FUN_016da530(param_1,*(long *)(param_1 + 0x68) + 0x278,&local_94);
    uVar13 = FUN_023ebc20(*(long *)(param_1 + 0x68) + 0x278);
    puVar9 = PTR_DAT_04bb4718;
    if (*(long *)PTR_DAT_04bb4718 == 0) {
      if ((DAT_054f08c8 & 1) == 0) {
        iVar14 = __cxa_guard_acquire(&DAT_054f08c8);
        puVar17 = &DAT_054f08c0;
        if (iVar14 != 0) {
          DAT_054f08c0 = 0;
          __cxa_guard_release(&DAT_054f08c8);
        }
      }
      else {
        puVar17 = &DAT_054f08c0;
      }
    }
    else {
      puVar17 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x1fc);
    }
    if ((uVar13 & 1) == 0) {
      uVar15 = *puVar17 & 0xffffbfff;
    }
    else {
      uVar15 = *puVar17 | 0x4000;
    }
    local_1e8 = (undefined *)CONCAT44((int)((ulong)local_1e8 >> 0x20),0xe);
    *puVar17 = uVar15;
    uVar13 = FUN_023ebe70(*(long *)(param_1 + 0x68) + 0x278);
    if (*(long *)puVar9 == 0) {
      if ((DAT_054f08c8 & 1) == 0) {
        iVar14 = __cxa_guard_acquire(&DAT_054f08c8);
        puVar17 = &DAT_054f08c0;
        if (iVar14 != 0) {
          DAT_054f08c0 = 0;
          __cxa_guard_release(&DAT_054f08c8);
        }
      }
      else {
        puVar17 = &DAT_054f08c0;
      }
    }
    else {
      puVar17 = (uint *)(*(long *)puVar9 + 0x1fc);
    }
    bVar3 = (uVar13 & 1) == 0;
    if (bVar3) {
      *puVar17 = *puVar17 & 0xffffdfff;
    }
    else {
      *puVar17 = *puVar17 | 0x2000;
    }
    local_1e0 = "IsBedWaitRightSideCloudIsland";
    local_1e8 = puVar8 + 0x10;
    FUN_0274bfe8(pbVar1,&local_1e8,!bVar3);
    FUN_02524650(pbVar1);
    return;
  }
LAB_023eb7d0:
  if (*(int *)(puVar10 + 0x38) == -0x24a26848) {
    if ((((*(long *)PTR_DAT_04bb7ff8 == 0) || (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) == 0)) &&
        (uVar13 = FUN_00925354(*(long *)(param_1 + 0x68) + 0x278), (uVar13 & 1) != 0)) &&
       (1 < *(byte *)(**(long **)puVar9 + 0x476))) {
      FUN_0257a010(&local_1e8);
      FUN_023ea384(param_1,auStack_138);
      pcVar11 = local_1e0;
      if (local_1e0 != "Obj_Bed_Dream") {
        iVar14 = 0xd;
        if (local_1d8 < 0xe) {
          iVar14 = local_1d8 + -1;
        }
        memcpy(local_1e0,"Obj_Bed_Dream",(long)iVar14);
        pcVar11[iVar14] = '\0';
      }
      if (local_188 != "Bed_Wakeup_Cloud") {
        iVar14 = 0x10;
        if (local_180 < 0x11) {
          iVar14 = local_180 + -1;
        }
        memcpy(local_188,"Bed_Wakeup_Cloud",(long)iVar14);
        local_188[iVar14] = '\0';
      }
      local_bc = 0;
      local_b8 = 0x6f;
      local_e0 = 0;
      local_b3 = 1;
      FUN_024480f0(param_1,&local_1e8);
      return;
    }
  }
  local_1e8 = (undefined *)CONCAT44(local_1e8._4_4_,0x6f);
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
  lVar16 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar16 = *(long *)(param_1 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar16,0x6f);
  return;
}


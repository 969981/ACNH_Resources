
undefined8
FUN_023c27d0(undefined1 param_1 [16],float param_2,float param_3,long param_4,ulong param_5)

{
  long lVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  char *__src;
  int iVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  float fVar12;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  int local_190;
  char *local_140;
  int local_138;
  undefined *local_e8;
  int local_e0;
  undefined1 local_98;
  undefined4 local_8c;
  undefined1 local_68;
  undefined4 local_64;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_44;
  
  uVar5 = FUN_024f5320(param_4 + 0x1ee8);
  puVar2 = PTR_DAT_04bb3238;
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  lVar8 = *(long *)(param_4 + 0x68);
  local_198 = *(undefined4 *)(lVar8 + 0x280);
  local_1a0 = *(undefined8 *)(lVar8 + 0x278);
  uStack_194 = *(undefined4 *)(lVar8 + 0x2b4);
  local_50 = CONCAT44(local_50._4_4_,*(undefined4 *)PTR_DAT_04bb3238);
  uVar5 = FUN_02acaa90(&local_50,&local_1a0);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  if (*(byte *)(*DAT_0537d558 + 0x476) < 2) {
    uVar5 = FUN_02672fb0(param_4 + 0x1ee8);
    if ((uVar5 & 1) != 0) {
      *(undefined8 *)(param_4 + 0x1980) = 0;
      *(undefined8 *)(param_4 + 0x1988) = 0;
      local_44 = *(undefined4 *)puVar2;
      *(undefined8 *)(param_4 + 0x1990) = 0;
      *(undefined8 *)(param_4 + 0x1998) = 0;
      *(undefined8 *)(param_4 + 0x19a0) = 0;
      *(undefined8 *)(param_4 + 0x19a8) = 0;
      *(undefined8 *)(param_4 + 0x19b0) = 0;
      *(undefined8 *)(param_4 + 0x19b8) = 0;
      *(undefined8 *)(param_4 + 0x19c0) = 0;
      *(undefined8 *)(param_4 + 0x1960) = *(undefined8 *)(param_4 + 0x18e0);
      *(undefined8 *)(param_4 + 0x19c8) = 0;
      *(undefined8 *)(param_4 + 0x19d0) = 0;
      *(undefined2 *)(param_4 + 0x19d8) = 0;
      *(undefined8 *)(param_4 + 0x1968) = *(undefined8 *)(param_4 + 0x18e8);
      *(undefined8 *)(param_4 + 0x1970) = *(undefined8 *)(param_4 + 0x18f0);
      *(undefined8 *)(param_4 + 0x1978) = *(undefined8 *)(param_4 + 0x18f8);
      lVar8 = *(long *)(param_4 + 0x68);
      local_198 = *(undefined4 *)(lVar8 + 0x280);
      uStack_194 = *(undefined4 *)(lVar8 + 0x2b4);
      local_1a0 = *(undefined8 *)(lVar8 + 0x278);
      local_50 = 0xfffe;
      FUN_0277d4ac(&local_50);
      uVar5 = FUN_02acaa90(&local_44,&local_1a0);
      if ((uVar5 & 1) != 0) {
        FUN_02acae38(&local_44,&local_50);
      }
      *(undefined8 *)(param_4 + 0x1980) = local_50;
      lVar8 = *(long *)(param_4 + 0x68);
      local_44 = *(undefined4 *)puVar2;
      local_198 = *(undefined4 *)(lVar8 + 0x280);
      local_1a0 = *(undefined8 *)(lVar8 + 0x278);
      uStack_194 = *(undefined4 *)(lVar8 + 0x2b4);
      local_50 = 0xfffe;
      FUN_0277d4ac(&local_50);
      uVar5 = FUN_02acaa90(&local_44,&local_1a0);
      if ((uVar5 & 1) == 0) {
        iVar10 = 0;
        iVar6 = 0;
        iVar9 = 0;
      }
      else {
        fVar12 = (float)FUN_02acafb0(&local_44);
        iVar6 = (int)((param_2 + -2.0) * 4.0);
        iVar10 = (int)(fVar12 * 999.99994);
        iVar9 = (int)((param_3 + 0.2) * 999.99994);
      }
      *(int *)(param_4 + 0x1988) = iVar10;
      *(int *)(param_4 + 0x198e) = iVar9;
      local_50 = CONCAT44(local_50._4_4_,0xc3);
      if (0x7ffe < iVar6) {
        iVar6 = 0x7fff;
      }
      lVar8 = *(long *)(param_4 + 0x70);
      if (iVar6 < -0x7fff) {
        iVar6 = -0x8000;
      }
      *(short *)(param_4 + 0x198c) = (short)iVar6;
      uVar7 = 0;
      lVar1 = 0;
      if (lVar8 != 0) {
        uVar7 = 0;
        if (*(uint *)(lVar8 + 0x280) < 0x149) {
          uVar7 = *(uint *)(lVar8 + 0x280);
        }
        lVar1 = lVar8 + 0x278;
      }
      if (uVar7 == 0xc3) {
        return 0;
      }
      local_1a0 = CONCAT44(local_1a0._4_4_,0xc3);
      *(undefined8 *)(param_4 + 0x18c0) = *(undefined8 *)(param_4 + 0x19c0);
      *(undefined8 *)(param_4 + 0x18c8) = *(undefined8 *)(param_4 + 0x19c8);
      *(undefined8 *)(param_4 + 0x18d0) = *(undefined8 *)(param_4 + 0x19d0);
      *(undefined2 *)(param_4 + 0x18d8) = *(undefined2 *)(param_4 + 0x19d8);
      *(undefined8 *)(param_4 + 0x18a0) = *(undefined8 *)(param_4 + 0x19a0);
      *(undefined8 *)(param_4 + 0x18a8) = *(undefined8 *)(param_4 + 0x19a8);
      *(undefined8 *)(param_4 + 0x18b0) = *(undefined8 *)(param_4 + 0x19b0);
      *(undefined8 *)(param_4 + 0x18b8) = *(undefined8 *)(param_4 + 0x19b8);
      *(undefined8 *)(param_4 + 0x1880) = *(undefined8 *)(param_4 + 0x1980);
      *(undefined8 *)(param_4 + 0x1888) = *(undefined8 *)(param_4 + 0x1988);
      *(undefined8 *)(param_4 + 0x1890) = *(undefined8 *)(param_4 + 0x1990);
      *(undefined8 *)(param_4 + 0x1898) = *(undefined8 *)(param_4 + 0x1998);
      *(undefined8 *)(param_4 + 0x1860) = *(undefined8 *)(param_4 + 0x1960);
      *(undefined8 *)(param_4 + 0x1868) = *(undefined8 *)(param_4 + 0x1968);
      *(undefined8 *)(param_4 + 0x1870) = *(undefined8 *)(param_4 + 0x1970);
      *(undefined8 *)(param_4 + 0x1878) = *(undefined8 *)(param_4 + 0x1978);
      FUN_03ebb160(lVar1,0xc3);
      return 1;
    }
    if ((param_5 & 1) != 0) {
      return 1;
    }
    FUN_0257a010(&local_1a0);
    (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
    puVar2 = PTR_DAT_04c4b988;
    if (local_e8 != PTR_DAT_04c4b988) {
      (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
      lVar8 = 0;
      do {
        if (PTR_DAT_04c4b988[lVar8] == '\0') goto LAB_023c2c58;
        if (PTR_DAT_04c4b988[lVar8 + 1] == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_023c2c58;
        }
        if (PTR_DAT_04c4b988[lVar8 + 2] == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_023c2c58;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_023c2c58:
      iVar6 = (int)lVar8;
      if (local_e0 <= (int)lVar8) {
        iVar6 = local_e0 + -1;
      }
      memcpy(local_e8,puVar2,(long)iVar6);
      local_e8[iVar6] = 0;
    }
    pcVar11 = (char *)CONCAT44(uStack_194,local_198);
    if (pcVar11 != "Player_PickupFullItem") {
      iVar6 = 0x15;
      if (local_190 < 0x16) {
        iVar6 = local_190 + -1;
      }
      memcpy(pcVar11,"Player_PickupFullItem",(long)iVar6);
      pcVar11[iVar6] = '\0';
    }
    if (local_140 == "PickupFtr_FullItem") goto LAB_023c2d08;
    __src = "PickupFtr_FullItem";
    bVar3 = SBORROW4(local_138,0x12);
    iVar6 = local_138 + -0x12;
    bVar4 = local_138 == 0x12;
    iVar9 = 0x12;
    pcVar11 = local_140;
  }
  else {
    FUN_0257a010(&local_1a0);
    (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
    puVar2 = PTR_DAT_04c4b988;
    if (local_e8 != PTR_DAT_04c4b988) {
      (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
      lVar8 = 0;
      do {
        if (PTR_DAT_04c4b988[lVar8] == '\0') goto LAB_023c2bb0;
        if (PTR_DAT_04c4b988[lVar8 + 1] == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_023c2bb0;
        }
        if (PTR_DAT_04c4b988[lVar8 + 2] == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_023c2bb0;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_023c2bb0:
      iVar6 = (int)lVar8;
      if (local_e0 <= (int)lVar8) {
        iVar6 = local_e0 + -1;
      }
      memcpy(local_e8,puVar2,(long)iVar6);
      local_e8[iVar6] = 0;
    }
    pcVar11 = (char *)CONCAT44(uStack_194,local_198);
    if (pcVar11 != "Player_FtrActionError") {
      iVar6 = 0x15;
      if (local_190 < 0x16) {
        iVar6 = local_190 + -1;
      }
      memcpy(pcVar11,"Player_FtrActionError",(long)iVar6);
      pcVar11[iVar6] = '\0';
    }
    if (local_140 == "FtrPickupError_ExistsVisitor") goto LAB_023c2d08;
    __src = "FtrPickupError_ExistsVisitor";
    bVar3 = SBORROW4(local_138,0x1c);
    iVar6 = local_138 + -0x1c;
    bVar4 = local_138 == 0x1c;
    iVar9 = 0x1c;
    pcVar11 = local_140;
  }
  if (bVar4 || iVar6 < 0 != bVar3) {
    iVar9 = local_138 + -1;
  }
  memcpy(pcVar11,__src,(long)iVar9);
  pcVar11[iVar9] = '\0';
LAB_023c2d08:
  local_98 = 0;
  local_8c = 9;
  local_68 = 1;
  local_64 = 1;
  local_58 = 0x3c;
  FUN_024480f0(param_4,&local_1a0);
  return 0;
}


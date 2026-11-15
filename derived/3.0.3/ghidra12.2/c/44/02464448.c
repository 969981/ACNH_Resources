
undefined8 FUN_02464448(long param_1)

{
  bool bVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined1 auVar4 [8];
  bool bVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  byte bVar10;
  uint *puVar11;
  byte bVar12;
  byte local_5c [4];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [8];
  undefined8 local_40;
  byte local_38;
  undefined4 local_34;
  
  puVar3 = PTR_DAT_04bb32e0;
  if ((*(long *)PTR_DAT_04bb7ff8 != 0) && (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) != 0))
  goto LAB_02464478;
  lVar9 = *(long *)PTR_DAT_04bb39b0;
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0x15c) != 0)) {
    bVar12 = *(byte *)(param_1 + 0x1ee8);
    pbVar2 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar9 + 0x15c) != 0) {
      pbVar2 = (byte *)(lVar9 + 0x158);
    }
    bVar10 = *pbVar2;
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    if (7 < bVar12) {
      bVar12 = 0xff;
    }
    if (bVar10 != bVar12) {
      pbVar2 = PTR_DAT_04bb32e0;
      if (*(long *)PTR_DAT_04bb4718 != 0) {
        pbVar2 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a4);
      }
      if (*pbVar2 < 8) {
        if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
          iVar6 = FUN_02582d8c(pbVar2,2);
          if (-1 < iVar6) goto LAB_02464478;
        }
        else {
          local_4c = CONCAT31(local_4c._1_3_,*pbVar2);
          uVar7 = FUN_01d3e2d0(**(long **)PTR_DAT_04bb27d0 + 8,&local_4c);
          if ((uVar7 & 1) != 0) {
LAB_02464478:
            local_4c = *(undefined4 *)PTR_DAT_04bb37e0;
            local_48._0_4_ = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
            bVar1 = *(char *)(param_1 + 0x56d) != '\0' &&
                    *(int *)(param_1 + 0x568) <= *(int *)(param_1 + 0x560);
            goto LAB_024646c0;
          }
        }
      }
    }
  }
  bVar12 = *puVar3;
  local_38 = 0;
  puVar8 = *(undefined8 **)(param_1 + 0x60);
  local_48 = (undefined1  [8])0x0;
  local_40 = 0;
  if (7 < bVar12) {
    bVar12 = 0xff;
  }
  local_4c._0_1_ = bVar12;
  if (puVar8 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        puVar8 = &DAT_05240280;
        goto LAB_024645a4;
      }
    }
    puVar8 = &DAT_05240280;
  }
LAB_024645a4:
  FUN_016ff8c0(puVar8,10,&local_58);
  puVar3 = PTR_DAT_04bb4208;
  bVar12 = *(byte *)(param_1 + 0x1ee8);
  local_48 = (undefined1  [8])local_58;
  if (7 < bVar12) {
    bVar12 = 0xff;
  }
  local_4c = CONCAT31(local_4c._1_3_,bVar12);
  if (*(char *)(param_1 + 0x17ac) == '\0') {
    local_34 = 3;
    local_38 = (byte)(*(uint *)(param_1 + 0xec8) >> 3) & 1;
  }
  else {
    local_38 = 0;
  }
  local_40 = CONCAT44(*(undefined4 *)(*(long *)(param_1 + 0x68) + 0x2b4),local_50);
  uVar7 = FUN_029512f0(*(undefined8 *)PTR_DAT_04bb4208,&local_4c);
  if (((uVar7 & 1) != 0) &&
     (uVar7 = FUN_02951700(*(undefined8 *)puVar3,&local_4c), (uVar7 & 1) != 0)) {
    local_5c[0] = *(byte *)(param_1 + 0x1ee8);
    if (7 < local_5c[0]) {
      local_5c[0] = 0xff;
    }
    FUN_02951fc0(&local_58,*(undefined8 *)puVar3,local_5c);
    if (*(long *)PTR_DAT_04bb4718 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(&DAT_054f0960);
        puVar11 = (uint *)&DAT_054f0958;
        if (iVar6 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar11 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar11 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
      if ((ulong)*(byte *)(param_1 + 0x1ee8) < 8) {
        puVar11 = puVar11 + (ulong)*(byte *)(param_1 + 0x1ee8) * 2;
      }
    }
    if ((*puVar11 >> 1 & 1) != 0) {
      return 1;
    }
    *(undefined8 *)(param_1 + 0x1988) = 0;
    *(undefined8 *)(param_1 + 0x1990) = 0;
    *(undefined8 *)(param_1 + 0x1998) = 0;
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x1980) = local_58;
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    local_34 = 0xfd;
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
    lVar9 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar9 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar9,0xfd);
    return 1;
  }
  bVar5 = *(char *)(param_1 + 0x56d) == '\0';
  bVar1 = !bVar5 && *(int *)(param_1 + 0x568) <= *(int *)(param_1 + 0x560);
  if ((bVar5 || *(int *)(param_1 + 0x560) < *(int *)(param_1 + 0x568)) &&
     ((*(char *)(param_1 + 0x17ac) != '\0' || ((*(uint *)(param_1 + 0xed0) >> 3 & 1) == 0)))) {
    return 0;
  }
  local_4c = *(undefined4 *)PTR_DAT_04bb37e0;
  local_48._0_4_ = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
LAB_024646c0:
  auVar4 = local_48;
  local_48[4] = bVar1;
  local_48._6_2_ = auVar4._6_2_;
  local_48[5] = 0;
  FUN_024648d4(param_1,&local_4c);
  return 1;
}


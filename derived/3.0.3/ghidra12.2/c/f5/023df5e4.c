
undefined8 FUN_023df5e4(long param_1,ulong param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  byte bVar7;
  long lVar8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined7 uStack_90;
  undefined4 local_89;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined7 uStack_60;
  undefined1 local_59;
  undefined2 uStack_58;
  char cStack_56;
  undefined4 local_54;
  undefined4 local_34;
  
  puVar3 = PTR_DAT_04bb37e0;
  puVar2 = PTR_DAT_04bb2010;
  local_54 = 0;
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  local_68 = 0;
  uStack_60 = 0;
  local_59 = 0;
  uStack_58 = 0;
  cStack_56 = '\0';
  local_78 = PTR_DAT_04bb2010 + 0x10;
  uStack_70 = 0;
  local_80 = *(undefined4 *)PTR_DAT_04bb37e0;
  uStack_7c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar6 = FUN_01503f54(&local_80,pbVar1);
  }
  else {
    if (*(uint *)(param_1 + 0x1810) != 7) {
      lVar8 = *(long *)(param_1 + 0x68);
      bVar7 = *pbVar1;
      local_b0 = *(undefined8 *)(lVar8 + 0x278);
      if (7 < bVar7) {
        bVar7 = 0xff;
      }
      local_a0 = CONCAT71((int7)(local_a0 >> 8),bVar7) & 0xffffffffffff00ff;
      local_a8 = (undefined *)
                 CONCAT44(*(undefined4 *)(lVar8 + 0x2b4),*(undefined4 *)(lVar8 + 0x280));
      uVar6 = FUN_01507210(&local_80,&local_b0);
      if ((uVar6 & 1) == 0) {
        return 0;
      }
      goto LAB_023df708;
    }
    bVar7 = *pbVar1;
    lVar8 = *(long *)(param_1 + 0x68);
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    local_b0 = *(undefined8 *)(lVar8 + 0x278);
    local_a0._0_2_ = CONCAT11(1,bVar7);
    local_34 = 2;
    local_a8 = (undefined *)CONCAT44(*(undefined4 *)(lVar8 + 0x2b4),*(undefined4 *)(lVar8 + 0x280));
    uVar6 = FUN_01508a18(&local_80,&local_b0,&local_34);
  }
  if ((uVar6 & 1) == 0) {
    return 0;
  }
LAB_023df708:
  puVar4 = PTR_DAT_04bb43c0;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_80);
  if (*(long *)puVar4 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if (((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
        (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
       (*(char *)(param_1 + 0x17d2) < '\0')) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 0x2264) == '\0') {
    if (cStack_56 == '\0') {
      if ((param_2 & 1) == 0) {
        if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
          local_b0 = *(undefined8 *)puVar3;
          local_a8 = puVar2 + 0x10;
          local_84 = 0;
          local_a0 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_89 = 0;
          FUN_01503f10(&local_b0,pbVar1);
        }
        else if (*(uint *)(param_1 + 0x1810) == 7) {
          lVar8 = *(long *)(param_1 + 0x68);
          bVar7 = *pbVar1;
          local_b0 = *(undefined8 *)(lVar8 + 0x278);
          if (7 < bVar7) {
            bVar7 = 0xff;
          }
          local_a8 = (undefined *)
                     CONCAT44(*(undefined4 *)(lVar8 + 0x2b4),*(undefined4 *)(lVar8 + 0x280));
          local_a0._0_2_ = CONCAT11(1,bVar7);
          FUN_01508318(&local_80,&local_b0);
        }
        else {
          lVar8 = *(long *)(param_1 + 0x68);
          bVar7 = *pbVar1;
          local_b0 = *(undefined8 *)(lVar8 + 0x278);
          if (7 < bVar7) {
            bVar7 = 0xff;
          }
          local_a0 = CONCAT71((int7)(local_a0 >> 8),bVar7) & 0xffffffffffff00ff;
          local_a8 = (undefined *)
                     CONCAT44(*(undefined4 *)(lVar8 + 0x2b4),*(undefined4 *)(lVar8 + 0x280));
          FUN_015071c0(&local_80,&local_b0);
        }
        uVar6 = FUN_023ce290(param_1);
        if (((uVar6 & 1) != 0) && (uVar6 = FUN_023ce54c(param_1), (uVar6 & 1) != 0)) {
          return 1;
        }
        uVar6 = FUN_024e3ea4(param_1);
        if (((uVar6 & 1) == 0) ||
           ((*(int *)(param_1 + 0x178) != 0 || (uVar6 = FUN_024e9964(param_1), (uVar6 & 1) == 0))))
        {
          FUN_02373e70(param_1,6,1);
          return 1;
        }
        return 1;
      }
    }
    else if (((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) &&
            ((*(byte *)(param_1 + 0x17d0) >> 6 & 1) == 0)) {
      local_b0 = CONCAT44(local_b0._4_4_,0x56);
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
      lVar8 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar8 = *(long *)(param_1 + 0x70) + 0x278;
      }
      FUN_03ebb160(lVar8,0x56);
      return 1;
    }
  }
  return 0;
}


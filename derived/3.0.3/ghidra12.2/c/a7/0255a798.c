
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0255a798(undefined8 param_1,float *param_2,undefined4 *param_3)

{
  uint *puVar1;
  byte bVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte bVar11;
  short *psVar12;
  undefined8 local_5c;
  float local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined8 local_38;
  
  puVar4 = PTR_DAT_04bb39b0;
  pbVar10 = PTR_DAT_04bb32e0;
  lVar8 = *(long *)PTR_DAT_04bb39b0;
  pbVar9 = PTR_DAT_04bb32e0;
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0x15c) != 0) {
      pbVar9 = (byte *)(lVar8 + 0x158);
    }
  }
  bVar11 = *pbVar9;
  local_3c = 0x101;
  local_54 = param_2[2];
  local_3a = 1;
  local_38 = 0x1000000000000;
  local_5c = *(undefined8 *)param_2;
  uStack_44 = 0x1f;
  uStack_40 = 0xbf800000;
  if (7 < bVar11) {
    bVar11 = 0xff;
  }
  local_50._0_5_ = CONCAT14(bVar11,0x40900000);
  local_48 = *param_3;
  uVar7 = FUN_0251fad0(&local_5c,0);
  if ((uVar7 & 1) != 0) {
    return 0;
  }
  uVar7 = FUN_016eafec(0x40900000,param_2,0,0,0);
  puVar5 = PTR_DAT_04bb6298;
  if ((uVar7 & 1) != 0) {
    return 0;
  }
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 == -1) {
LAB_0255a994:
    local_5c = *(undefined8 *)param_2;
    local_54 = param_2[2];
    local_48 = 0x104;
  }
  else {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 1 & 1) == 0) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
      if (0xff < (uint)(int)sVar3) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 0x13 & 1) == 0) goto LAB_0255a994;
      local_5c = *(undefined8 *)param_2;
      local_54 = param_2[2];
      local_48 = 0x144;
    }
    else {
      if ((*puVar1 >> 3 & 1) != 0) {
        local_5c = CONCAT44(param_2[1],*param_2 + 10.0);
        local_54 = param_2[2];
        uVar7 = FUN_0118aed0(&local_5c,0x795c40ae);
        if ((uVar7 & 1) != 0) {
          return 0;
        }
      }
      local_5c = *(undefined8 *)param_2;
      local_54 = param_2[2];
      local_48 = 0x77;
    }
  }
  local_50 = 0x3f80000040900000;
  uStack_44 = 0;
  iVar6 = FUN_016ed290(&local_5c,0,0,0);
  if (iVar6 != 0) {
    return 0;
  }
  lVar8 = *(long *)puVar4;
  if (lVar8 == 0) {
LAB_0255aa10:
    if (7 < *pbVar10) {
LAB_0255aa1c:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar8 = **(long **)PTR_DAT_04bb27d0;
        bVar11 = *(byte *)(lVar8 + 0x473);
        pbVar10 = PTR_DAT_04bb5038;
        if ((long)(char)bVar11 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar11 & 0xffffffffU) * 0x20;
          if (7 < bVar11) {
            puVar1 = (uint *)(lVar8 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar10 = (byte *)(lVar8 + 0x471);
          }
        }
        bVar2 = *pbVar10;
        bVar11 = bVar2;
        if (7 < bVar2) {
          bVar11 = 0xff;
        }
        local_5c = CONCAT71(local_5c._1_7_,bVar11);
        if (7 >= bVar2) goto LAB_0255aaa4;
      }
      pbVar10 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar8 + 0x15c) != 0) {
      pbVar10 = (byte *)(lVar8 + 0x158);
    }
    if (7 < *pbVar10) {
      if ((*(int *)(lVar8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar10 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_0255aa10;
      }
      goto LAB_0255aa1c;
    }
  }
  bVar2 = *pbVar10;
  bVar11 = bVar2;
  if (7 < bVar2) {
    bVar11 = 0xff;
  }
  local_5c = CONCAT71(local_5c._1_7_,bVar11);
  if (7 < bVar2) {
    return 0;
  }
LAB_0255aaa4:
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0c70 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_054f0c70);
      psVar12 = &DAT_054f0c08;
      if (iVar6 != 0) {
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
      psVar12 = &DAT_054f0c08;
    }
  }
  else {
    psVar12 = (short *)(DAT_054f5738 + (ulong)bVar2 * 0xd0 +
                        (ulong)(*(uint *)(DAT_054f5738 + (ulong)bVar2 * 4 + 0xd68) & 1) * 0x68 +
                       0x6e8);
  }
  if ((((char)psVar12[0x32] == '\0') || (*psVar12 != *(short *)puVar5)) ||
     ((uVar7 = FUN_0231f070(*(undefined4 *)(psVar12 + 2),0), (uVar7 & 1) == 0 &&
      (uVar7 = FUN_0251b2f8(&local_5c), (uVar7 & 1) == 0)))) {
    return 0;
  }
  return 1;
}


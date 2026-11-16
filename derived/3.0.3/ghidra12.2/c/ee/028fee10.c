
void FUN_028fee10(long *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined *local_f30;
  undefined1 auStack_f28 [1876];
  uint local_7d4;
  uint local_7d0;
  uint local_7cc;
  int local_7c8;
  undefined1 auStack_7c0 [8];
  undefined8 local_7b8;
  char *local_7b0;
  
  local_f30 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_f28,0,0x754);
  uVar3 = nn::os::GetSystemTick();
  local_7d4 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
  local_7d0 = (local_7d4 ^ local_7d4 >> 0x1e) * 0x6c078965 + 2;
  local_7cc = (local_7d0 ^ local_7d0 >> 0x1e) * 0x6c078965 + 3;
  local_7c8 = (local_7cc ^ local_7cc >> 0x1e) * 0x6c078965 + 4;
  pvVar6 = (void *)FUN_01a451fc(&local_f30);
  memset(pvVar6,0,0x754);
  switch(param_2) {
  case 2:
    local_7b8 = &PTR_FUN_049ff790;
    local_7b0._0_4_ = 10000;
    FUN_008a1ba0(&local_f30,&local_7b8);
    puVar2 = PTR_DAT_04bb43c0;
    local_7b8 = &PTR_FUN_049ff768;
    local_7b0 = (char *)CONCAT44(local_7b0._4_4_,0xbb9);
    uVar3 = 0;
    do {
      (**(code **)(local_f30 + 0x10))(auStack_7c0,&local_f30,uVar3);
      lVar9 = (**(code **)(local_f30 + 0x20))(&local_f30);
      uVar1 = 1 << (ulong)(uVar3 & 0x1f);
      if ((*(uint *)(lVar9 + (ulong)(uVar3 >> 5) * 4) & uVar1) != 0) {
        lVar9 = *(long *)puVar2;
        uVar4 = FUN_0277d6c4(auStack_7c0);
        if (*(long *)puVar2 != 0) {
          lVar9 = *(long *)(lVar9 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if (((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) &&
             (uVar7 = (*(code *)*local_7b8)(&local_7b8,auStack_7c0), (uVar7 & 1) != 0))
          goto LAB_028fef60;
        }
        lVar9 = (**(code **)(local_f30 + 0x18))(&local_f30);
        lVar8 = (ulong)(uVar3 >> 5) * 4;
        *(uint *)(lVar9 + lVar8) = *(uint *)(lVar9 + lVar8) & (uVar1 ^ 0xffffffff);
      }
LAB_028fef60:
      uVar3 = uVar3 + 1;
    } while (uVar3 != 15000);
    break;
  case 3:
    local_7b8 = &PTR_FUN_049ff790;
    local_7b0._0_4_ = 20000;
    FUN_008a1ba0(&local_f30,&local_7b8);
    puVar2 = PTR_DAT_04bb43c0;
    local_7b8 = &PTR_FUN_049ff768;
    local_7b0 = (char *)CONCAT44(local_7b0._4_4_,0x2711);
    uVar3 = 0;
    do {
      (**(code **)(local_f30 + 0x10))(auStack_7c0,&local_f30,uVar3);
      lVar9 = (**(code **)(local_f30 + 0x20))(&local_f30);
      uVar1 = 1 << (ulong)(uVar3 & 0x1f);
      if ((*(uint *)(lVar9 + (ulong)(uVar3 >> 5) * 4) & uVar1) != 0) {
        lVar9 = *(long *)puVar2;
        uVar4 = FUN_0277d6c4(auStack_7c0);
        if (*(long *)puVar2 != 0) {
          lVar9 = *(long *)(lVar9 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if (((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) &&
             (uVar7 = (*(code *)*local_7b8)(&local_7b8,auStack_7c0), (uVar7 & 1) != 0))
          goto LAB_028ff074;
        }
        lVar9 = (**(code **)(local_f30 + 0x18))(&local_f30);
        lVar8 = (ulong)(uVar3 >> 5) * 4;
        *(uint *)(lVar9 + lVar8) = *(uint *)(lVar9 + lVar8) & (uVar1 ^ 0xffffffff);
      }
LAB_028ff074:
      uVar3 = uVar3 + 1;
    } while (uVar3 != 15000);
    break;
  case 4:
    local_7b8 = &PTR_FUN_049ff790;
    local_7b0._0_4_ = 100000;
    FUN_008a1ba0(&local_f30,&local_7b8);
    puVar2 = PTR_DAT_04bb43c0;
    local_7b8 = &PTR_FUN_049ff768;
    local_7b0 = (char *)CONCAT44(local_7b0._4_4_,0x4e21);
    uVar3 = 0;
    do {
      (**(code **)(local_f30 + 0x10))(auStack_7c0,&local_f30,uVar3);
      lVar9 = (**(code **)(local_f30 + 0x20))(&local_f30);
      uVar1 = 1 << (ulong)(uVar3 & 0x1f);
      if ((*(uint *)(lVar9 + (ulong)(uVar3 >> 5) * 4) & uVar1) != 0) {
        lVar9 = *(long *)puVar2;
        uVar4 = FUN_0277d6c4(auStack_7c0);
        if (*(long *)puVar2 != 0) {
          lVar9 = *(long *)(lVar9 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if (((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) &&
             (uVar7 = (*(code *)*local_7b8)(&local_7b8,auStack_7c0), (uVar7 & 1) != 0))
          goto LAB_028ff190;
        }
        lVar9 = (**(code **)(local_f30 + 0x18))(&local_f30);
        lVar8 = (ulong)(uVar3 >> 5) * 4;
        *(uint *)(lVar9 + lVar8) = *(uint *)(lVar9 + lVar8) & (uVar1 ^ 0xffffffff);
      }
LAB_028ff190:
      uVar3 = uVar3 + 1;
    } while (uVar3 != 15000);
    break;
  case 5:
    local_7b0 = "ShopFtrHighRankCancel";
    local_7b8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    iVar5 = FUN_02758850(&local_7b8);
    if (0 < iVar5) {
      return;
    }
    local_7b8 = &PTR_FUN_049ff768;
    local_7b0 = (char *)CONCAT44(local_7b0._4_4_,0x186a1);
    FUN_008a1ba0(&local_f30,&local_7b8);
  }
  pvVar6 = (void *)(**(code **)(*param_1 + 0x18))(param_1);
  lVar8 = (**(code **)(local_f30 + 0x20))(&local_f30);
  for (lVar9 = 0;
      *(uint *)(auStack_7c0 + lVar9 + 8) =
           *(uint *)(lVar8 + lVar9) | *(uint *)((long)pvVar6 + lVar9), lVar9 != 0x750;
      lVar9 = lVar9 + 8) {
    *(uint *)(auStack_7c0 + lVar9 + 0xc) =
         *(uint *)(lVar8 + lVar9 + 4) | *(uint *)((long)pvVar6 + lVar9 + 4);
  }
  memcpy(pvVar6,&local_7b8,0x754);
  *(uint *)((long)pvVar6 + 0x750) = *(uint *)((long)pvVar6 + 0x750) & 0xffffff;
  return;
}


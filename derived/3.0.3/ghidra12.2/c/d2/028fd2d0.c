
void FUN_028fd2d0(long *param_1,uint param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *local_16a0;
  undefined1 auStack_1698 [1876];
  uint local_f44;
  uint local_f40;
  uint local_f3c;
  int local_f38;
  undefined8 local_f30;
  char *local_f28 [234];
  uint local_7d4;
  uint local_7d0;
  uint local_7cc;
  int local_7c8;
  undefined8 local_7c0;
  char *local_7b8;
  
  puVar3 = PTR_DAT_04bbfe60;
  local_16a0 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_1698,0,0x754);
  uVar4 = nn::os::GetSystemTick();
  local_f44 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  local_f40 = (local_f44 ^ local_f44 >> 0x1e) * 0x6c078965 + 2;
  local_f3c = (local_f40 ^ local_f40 >> 0x1e) * 0x6c078965 + 3;
  local_f38 = (local_f3c ^ local_f3c >> 0x1e) * 0x6c078965 + 4;
  pvVar6 = (void *)FUN_01a451fc(&local_16a0);
  memset(pvVar6,0,0x754);
  pvVar6 = (void *)(**(code **)(local_16a0 + 0x18))(&local_16a0);
  memset(pvVar6,0,0x754);
  puVar2 = PTR_DAT_04bb2020;
  local_f28[0] = "Unlock_Faclility_School";
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_f30 = puVar1;
  iVar5 = FUN_02758850(&local_f30);
  if (iVar5 == 0) {
    if (1 < (int)param_2) {
LAB_028fd62c:
      uVar8 = 2;
      goto LAB_028fd634;
    }
    local_f30 = puVar3 + 0x10;
    memset(local_f28,0,0x754);
    uVar4 = nn::os::GetSystemTick();
    local_7d4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
    local_7d0 = (local_7d4 ^ local_7d4 >> 0x1e) * 0x6c078965 + 2;
    local_7cc = (local_7d0 ^ local_7d0 >> 0x1e) * 0x6c078965 + 3;
    local_7c8 = (local_7cc ^ local_7cc >> 0x1e) * 0x6c078965 + 4;
    pvVar6 = (void *)FUN_01a451fc(&local_f30);
    memset(pvVar6,0,0x754);
    local_7c0 = &PTR_FUN_049ff790;
    local_7b8 = (char *)CONCAT44(local_7b8._4_4_,3000);
    FUN_008a1ba0(&local_f30,&local_7c0);
    pvVar6 = (void *)(**(code **)(local_16a0 + 0x18))(&local_16a0);
    lVar7 = (**(code **)(local_f30 + 0x20))(&local_f30);
    for (lVar9 = 0;
        *(uint *)((long)&local_7c0 + lVar9) =
             *(uint *)(lVar7 + lVar9) | *(uint *)((long)pvVar6 + lVar9), lVar9 != 0x750;
        lVar9 = lVar9 + 8) {
      *(uint *)((long)&local_7c0 + lVar9 + 4) =
           *(uint *)(lVar7 + lVar9 + 4) | *(uint *)((long)pvVar6 + lVar9 + 4);
    }
  }
  else {
    local_f28[0] = "Unlock_Faclility_Cafe";
    local_f30 = puVar1;
    iVar5 = FUN_02758850(&local_f30);
    if (iVar5 == 0) {
      local_7b8 = "Unlock_Faclility_Restaurant";
      local_7c0 = (undefined **)(puVar2 + 0x10);
      iVar5 = FUN_02758850(&local_7c0);
      if (iVar5 == 0) {
        if (1 < (int)param_2) {
          if (param_2 < 4) {
            FUN_028fee10(&local_16a0,2);
          }
          else {
            FUN_028fee10(&local_16a0,3);
          }
          goto LAB_028fd93c;
        }
        local_f30 = puVar3 + 0x10;
        memset(local_f28,0,0x754);
        uVar4 = nn::os::GetSystemTick();
        local_7d4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
        local_7d0 = (local_7d4 ^ local_7d4 >> 0x1e) * 0x6c078965 + 2;
        local_7cc = (local_7d0 ^ local_7d0 >> 0x1e) * 0x6c078965 + 3;
        local_7c8 = (local_7cc ^ local_7cc >> 0x1e) * 0x6c078965 + 4;
        pvVar6 = (void *)FUN_01a451fc(&local_f30);
        memset(pvVar6,0,0x754);
        local_7c0 = &PTR_FUN_049ff790;
        local_7b8 = (char *)CONCAT44(local_7b8._4_4_,3000);
        FUN_008a1ba0(&local_f30,&local_7c0);
        pvVar6 = (void *)(**(code **)(local_16a0 + 0x18))(&local_16a0);
        lVar7 = (**(code **)(local_f30 + 0x20))(&local_f30);
        for (lVar9 = 0;
            *(uint *)((long)&local_7c0 + lVar9) =
                 *(uint *)(lVar7 + lVar9) | *(uint *)((long)pvVar6 + lVar9), lVar9 != 0x750;
            lVar9 = lVar9 + 8) {
          *(uint *)((long)&local_7c0 + lVar9 + 4) =
               *(uint *)(lVar7 + lVar9 + 4) | *(uint *)((long)pvVar6 + lVar9 + 4);
        }
        goto LAB_028fd91c;
      }
    }
    if (param_3 < 0x21) {
      if (0 < (int)param_2) {
        if (param_2 < 3) goto LAB_028fd62c;
        if (param_2 == 3) {
          local_f30 = puVar3 + 0x10;
          memset(local_f28,0,0x754);
          uVar4 = nn::os::GetSystemTick();
          local_7d4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
          local_7d0 = (local_7d4 ^ local_7d4 >> 0x1e) * 0x6c078965 + 2;
          local_7cc = (local_7d0 ^ local_7d0 >> 0x1e) * 0x6c078965 + 3;
          local_7c8 = (local_7cc ^ local_7cc >> 0x1e) * 0x6c078965 + 4;
          pvVar6 = (void *)FUN_01a451fc(&local_f30);
          memset(pvVar6,0,0x754);
          local_7c0 = &PTR_FUN_049ff790;
          local_7b8 = (char *)CONCAT44(local_7b8._4_4_,3000);
          FUN_008a1ba0(&local_f30,&local_7c0);
          pvVar6 = (void *)(**(code **)(local_16a0 + 0x18))(&local_16a0);
          lVar7 = (**(code **)(local_f30 + 0x20))(&local_f30);
          for (lVar9 = 0;
              *(uint *)((long)&local_7c0 + lVar9) =
                   *(uint *)(lVar7 + lVar9) | *(uint *)((long)pvVar6 + lVar9), lVar9 != 0x750;
              lVar9 = lVar9 + 8) {
            *(uint *)((long)&local_7c0 + lVar9 + 4) =
                 *(uint *)(lVar7 + lVar9 + 4) | *(uint *)((long)pvVar6 + lVar9 + 4);
          }
LAB_028fdaec:
          memcpy(pvVar6,&local_7c0,0x754);
          uVar8 = 3;
          *(uint *)((long)pvVar6 + 0x750) = *(uint *)((long)pvVar6 + 0x750) & 0xffffff;
        }
        else {
          FUN_028fee10(&local_16a0,3);
          uVar8 = 4;
        }
LAB_028fd634:
        FUN_028fee10(&local_16a0,uVar8);
        goto LAB_028fd93c;
      }
      local_f30 = puVar3 + 0x10;
      memset(local_f28,0,0x754);
      uVar4 = nn::os::GetSystemTick();
      local_7d4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
      local_7d0 = (local_7d4 ^ local_7d4 >> 0x1e) * 0x6c078965 + 2;
      local_7cc = (local_7d0 ^ local_7d0 >> 0x1e) * 0x6c078965 + 3;
      local_7c8 = (local_7cc ^ local_7cc >> 0x1e) * 0x6c078965 + 4;
      pvVar6 = (void *)FUN_01a451fc(&local_f30);
      memset(pvVar6,0,0x754);
      local_7c0 = &PTR_FUN_049ff790;
      local_7b8 = (char *)CONCAT44(local_7b8._4_4_,3000);
      FUN_008a1ba0(&local_f30,&local_7c0);
      pvVar6 = (void *)(**(code **)(local_16a0 + 0x18))(&local_16a0);
      lVar7 = (**(code **)(local_f30 + 0x20))(&local_f30);
      for (lVar9 = 0;
          *(uint *)((long)&local_7c0 + lVar9) =
               *(uint *)(lVar7 + lVar9) | *(uint *)((long)pvVar6 + lVar9), lVar9 != 0x750;
          lVar9 = lVar9 + 8) {
        *(uint *)((long)&local_7c0 + lVar9 + 4) =
             *(uint *)(lVar7 + lVar9 + 4) | *(uint *)((long)pvVar6 + lVar9 + 4);
      }
    }
    else {
      if (0 < (int)param_2) {
        if (param_2 < 3) goto LAB_028fd62c;
        if (param_2 == 3) {
          local_f30 = puVar3 + 0x10;
          memset(local_f28,0,0x754);
          uVar4 = nn::os::GetSystemTick();
          local_7d4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
          local_7d0 = (local_7d4 ^ local_7d4 >> 0x1e) * 0x6c078965 + 2;
          local_7cc = (local_7d0 ^ local_7d0 >> 0x1e) * 0x6c078965 + 3;
          local_7c8 = (local_7cc ^ local_7cc >> 0x1e) * 0x6c078965 + 4;
          pvVar6 = (void *)FUN_01a451fc(&local_f30);
          memset(pvVar6,0,0x754);
          local_7c0 = &PTR_FUN_049ff790;
          local_7b8 = (char *)CONCAT44(local_7b8._4_4_,3000);
          FUN_008a1ba0(&local_f30,&local_7c0);
          pvVar6 = (void *)(**(code **)(local_16a0 + 0x18))(&local_16a0);
          lVar7 = (**(code **)(local_f30 + 0x20))(&local_f30);
          for (lVar9 = 0;
              *(uint *)((long)&local_7c0 + lVar9) =
                   *(uint *)(lVar7 + lVar9) | *(uint *)((long)pvVar6 + lVar9), lVar9 != 0x750;
              lVar9 = lVar9 + 8) {
            *(uint *)((long)&local_7c0 + lVar9 + 4) =
                 *(uint *)(lVar7 + lVar9 + 4) | *(uint *)((long)pvVar6 + lVar9 + 4);
          }
          goto LAB_028fdaec;
        }
        FUN_028fee10(&local_16a0,3);
        FUN_028fee10(&local_16a0,4);
        uVar8 = 5;
        goto LAB_028fd634;
      }
      local_f30 = puVar3 + 0x10;
      memset(local_f28,0,0x754);
      uVar4 = nn::os::GetSystemTick();
      local_7d4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
      local_7d0 = (local_7d4 ^ local_7d4 >> 0x1e) * 0x6c078965 + 2;
      local_7cc = (local_7d0 ^ local_7d0 >> 0x1e) * 0x6c078965 + 3;
      local_7c8 = (local_7cc ^ local_7cc >> 0x1e) * 0x6c078965 + 4;
      pvVar6 = (void *)FUN_01a451fc(&local_f30);
      memset(pvVar6,0,0x754);
      local_7c0 = &PTR_FUN_049ff790;
      local_7b8 = (char *)CONCAT44(local_7b8._4_4_,3000);
      FUN_008a1ba0(&local_f30,&local_7c0);
      pvVar6 = (void *)(**(code **)(local_16a0 + 0x18))(&local_16a0);
      lVar7 = (**(code **)(local_f30 + 0x20))(&local_f30);
      for (lVar9 = 0;
          *(uint *)((long)&local_7c0 + lVar9) =
               *(uint *)(lVar7 + lVar9) | *(uint *)((long)pvVar6 + lVar9), lVar9 != 0x750;
          lVar9 = lVar9 + 8) {
        *(uint *)((long)&local_7c0 + lVar9 + 4) =
             *(uint *)(lVar7 + lVar9 + 4) | *(uint *)((long)pvVar6 + lVar9 + 4);
      }
    }
  }
LAB_028fd91c:
  memcpy(pvVar6,&local_7c0,0x754);
  *(uint *)((long)pvVar6 + 0x750) = *(uint *)((long)pvVar6 + 0x750) & 0xffffff;
LAB_028fd93c:
  pvVar6 = (void *)(**(code **)(*param_1 + 0x18))(param_1);
  lVar7 = (**(code **)(local_16a0 + 0x20))(&local_16a0);
  for (lVar9 = 0;
      *(uint *)((long)local_f28 + lVar9 + -8) =
           *(uint *)(lVar7 + lVar9) & *(uint *)((long)pvVar6 + lVar9), lVar9 != 0x750;
      lVar9 = lVar9 + 8) {
    *(uint *)((long)local_f28 + lVar9 + -4) =
         *(uint *)(lVar7 + lVar9 + 4) & *(uint *)((long)pvVar6 + lVar9 + 4);
  }
  memcpy(pvVar6,&local_f30,0x754);
  *(uint *)((long)pvVar6 + 0x750) = *(uint *)((long)pvVar6 + 0x750) & 0xffffff;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01250ef0(undefined8 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  undefined **ppuVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  undefined4 local_804;
  undefined *local_800;
  undefined1 auStack_7f8 [1876];
  uint local_a4;
  uint local_a0;
  uint local_9c;
  int local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_70;
  
  if (param_2 == 0) {
    local_800 = (undefined *)0x839;
  }
  else if (param_2 == 1) {
    local_800 = (undefined *)0x842;
  }
  else {
    if (param_2 != 2) {
      local_800 = PTR_DAT_04bbfe60 + 0x10;
      memset(auStack_7f8,0,0x754);
      uVar5 = nn::os::GetSystemTick();
      local_a4 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
      local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 2;
      local_9c = (local_a0 ^ local_a0 >> 0x1e) * 0x6c078965 + 3;
      local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 4;
      pvVar6 = (void *)FUN_01a451fc(&local_800);
      memset(pvVar6,0,0x754);
      pvVar6 = (void *)(**(code **)(local_800 + 0x18))(&local_800);
      memset(pvVar6,0,0x754);
      local_70._0_4_ = 1;
      local_90 = &PTR_FUN_049ff4e8;
      local_88 = (undefined4 *)&local_70;
      FUN_008a1ba0(&local_800,&local_90);
      local_70._0_4_ = 2;
      local_90 = &PTR_FUN_049ff4e8;
      local_88 = (undefined4 *)&local_70;
      FUN_008a1ba0(&local_800,&local_90);
      local_70._0_4_ = 3;
      local_90 = &PTR_FUN_049ff4e8;
      local_88 = (undefined4 *)&local_70;
      FUN_008a1ba0(&local_800,&local_90);
      local_70._0_4_ = 5;
      local_90 = &PTR_FUN_049ff4e8;
      local_88 = (undefined4 *)&local_70;
      FUN_008a1ba0(&local_800,&local_90);
      local_70._0_4_ = 7;
      local_90 = &PTR_FUN_049ff4e8;
      local_88 = (undefined4 *)&local_70;
      FUN_008a1ba0(&local_800,&local_90);
      local_804 = 0;
      local_88 = &local_804;
      local_90 = &PTR_FUN_049ff448;
      uVar5 = 0;
      do {
        (**(code **)(local_800 + 0x10))(&local_70,&local_800,uVar5);
        lVar7 = (**(code **)(local_800 + 0x20))(&local_800);
        lVar13 = DAT_053274a0;
        uVar1 = 1 << (ulong)(uVar5 & 0x1f);
        if ((*(uint *)(lVar7 + (ulong)(uVar5 >> 5) * 4) & uVar1) != 0) {
          uVar4 = FUN_0277d6c4(&local_70);
          if (DAT_053274a0 != 0) {
            lVar13 = *(long *)(lVar13 + 0x57e58);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
            if (((uVar4 < *(uint *)(lVar13 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) &&
               (uVar8 = (*(code *)*local_90)(&local_90,&local_70), (uVar8 & 1) != 0))
            goto LAB_012510e0;
          }
          lVar13 = (**(code **)(local_800 + 0x18))(&local_800);
          lVar7 = (ulong)(uVar5 >> 5) * 4;
          *(uint *)(lVar13 + lVar7) = *(uint *)(lVar13 + lVar7) & (uVar1 ^ 0xffffffff);
        }
LAB_012510e0:
        uVar5 = uVar5 + 1;
      } while (uVar5 != 15000);
      puVar9 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar5 = *puVar9 ^ *puVar9 << 0xb;
      uVar4 = puVar9[3];
      *puVar9 = puVar9[1];
      puVar9[1] = puVar9[2];
      uVar1 = uVar5 ^ uVar4;
      uVar5 = uVar5 >> 8 ^ uVar4 >> 0x13 ^ uVar1;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar5 = (uVar5 ^ uVar1 >> 0x1e) * 0x6c078965 + 1;
      uVar1 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 2;
      local_90 = (undefined **)CONCAT44(uVar1,uVar5);
      uVar4 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
      uVar2 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 4;
      local_88 = (undefined4 *)CONCAT44(uVar2,uVar4);
      lVar7 = (**(code **)(local_800 + 0x20))(&local_800);
      lVar13 = 0;
      iVar11 = 0;
      do {
        puVar9 = (uint *)(lVar7 + lVar13);
        lVar13 = lVar13 + 4;
        uVar12 = *puVar9 - (*puVar9 >> 1 & 0x55555555);
        uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
        uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
        uVar12 = uVar12 + (uVar12 >> 8);
        iVar11 = (uVar12 + (uVar12 >> 0x10) & 0x3f) + iVar11;
      } while (lVar13 != 0x754);
      if (iVar11 == 0) {
        local_70._0_4_ = _DAT_05586008;
        local_70._4_4_ = DAT_0558600c;
      }
      else {
        lVar7 = (**(code **)(local_800 + 0x20))(&local_800);
        lVar13 = 0;
        uVar12 = 0;
        do {
          puVar9 = (uint *)(lVar7 + lVar13);
          lVar13 = lVar13 + 4;
          uVar3 = *puVar9 - (*puVar9 >> 1 & 0x55555555);
          uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
          uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
          uVar3 = uVar3 + (uVar3 >> 8);
          uVar12 = (uVar3 + (uVar3 >> 0x10) & 0x3f) + uVar12;
        } while (lVar13 != 0x754);
        uVar5 = uVar5 ^ uVar5 * 0x800;
        local_90 = (undefined **)CONCAT44(uVar4,uVar1);
        uVar5 = uVar5 >> 8 ^ uVar2 >> 0x13 ^ uVar5 ^ uVar2;
        local_88 = (undefined4 *)CONCAT44(uVar5,uVar2);
        FUN_00889f80(&local_70,&local_800,(int)((ulong)uVar5 * (ulong)uVar12 >> 0x20) + 1);
        FUN_01a4c66c(&local_90,&local_70);
      }
      ppuVar10 = (undefined **)&local_70;
      goto LAB_01251314;
    }
    local_800 = (undefined *)0xcbf;
  }
  FUN_0277d4ac(&local_800);
  ppuVar10 = &local_800;
LAB_01251314:
  uVar5 = FUN_012508a8(param_1,ppuVar10);
  return uVar5 & 1;
}



void FUN_009abec0(long param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  void *pvVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined4 local_7e4;
  undefined *local_7e0;
  undefined1 auStack_7d8 [1876];
  uint local_84;
  uint local_80;
  uint local_7c;
  int local_78;
  undefined **local_70;
  int *piStack_68;
  
  local_7e0 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_7d8,0,0x754);
  uVar2 = nn::os::GetSystemTick();
  local_84 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
  local_80 = (local_84 ^ local_84 >> 0x1e) * 0x6c078965 + 2;
  local_7c = (local_80 ^ local_80 >> 0x1e) * 0x6c078965 + 3;
  local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 4;
  pvVar3 = (void *)FUN_01a451fc(&local_7e0);
  memset(pvVar3,0,0x754);
  pvVar3 = (void *)(**(code **)(local_7e0 + 0x18))(&local_7e0);
  memset(pvVar3,0,0x754);
  iVar5 = *param_2;
  piStack_68 = param_2;
  if (iVar5 < 0x6a) {
    if (1 < iVar5 - 1U) {
      if (iVar5 != 0x69) {
        return;
      }
      local_70 = &PTR_FUN_049ff448;
      FUN_008a1ba0(&local_7e0,&local_70);
      local_7e4 = 0x66;
      local_70 = &PTR_FUN_049ff448;
      piStack_68 = &local_7e4;
      FUN_008a1ba0(&local_7e0,&local_70);
      local_7e4 = 100;
      local_70 = &PTR_FUN_049ff448;
      piStack_68 = &local_7e4;
      FUN_008a1ba0(&local_7e0,&local_70);
      local_7e4 = 0x89;
      local_70 = &PTR_FUN_049ff448;
      piStack_68 = &local_7e4;
      FUN_008a1ba0(&local_7e0,&local_70);
      local_7e4 = 0x65;
      local_70 = &PTR_FUN_049ff448;
      piStack_68 = &local_7e4;
      FUN_008a1ba0(&local_7e0,&local_70);
      local_7e4 = 0x9a;
      local_70 = &PTR_FUN_049ff448;
      piStack_68 = &local_7e4;
      FUN_008a1ba0(&local_7e0,&local_70);
      local_7e4 = 0x9b;
      local_70 = &PTR_FUN_049ff448;
      piStack_68 = &local_7e4;
      FUN_008a1ba0(&local_7e0,&local_70);
      FUN_009aa4b0(param_1 + 0x130,&local_7e0);
      lVar4 = (**(code **)(local_7e0 + 0x20))(&local_7e0);
      lVar6 = 0;
      iVar5 = 0;
      do {
        puVar1 = (uint *)(lVar4 + lVar6);
        lVar6 = lVar6 + 4;
        uVar2 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
        uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
        uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
        uVar2 = uVar2 + (uVar2 >> 8);
        iVar5 = (uVar2 + (uVar2 >> 0x10) & 0x3f) + iVar5;
      } while (lVar6 != 0x754);
      goto LAB_009ac16c;
    }
  }
  else if ((1 < iVar5 - 0x6aU) && (iVar5 != 0x6d)) {
    return;
  }
  local_70 = &PTR_FUN_049ff448;
  FUN_008a1ba0(&local_7e0,&local_70);
  FUN_009aa4b0(param_1 + 0x130,&local_7e0);
  lVar4 = (**(code **)(local_7e0 + 0x20))(&local_7e0);
  lVar6 = 0;
  iVar5 = 0;
  do {
    puVar1 = (uint *)(lVar4 + lVar6);
    lVar6 = lVar6 + 4;
    uVar2 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
    uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
    uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
    uVar2 = uVar2 + (uVar2 >> 8);
    iVar5 = (uVar2 + (uVar2 >> 0x10) & 0x3f) + iVar5;
  } while (lVar6 != 0x754);
LAB_009ac16c:
  *(int *)(param_1 + 0x3aadc) = iVar5;
  return;
}


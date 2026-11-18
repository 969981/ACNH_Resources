
undefined8 FUN_033677c0(long param_1,undefined4 *param_2)

{
  uint *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  wchar16 *pwVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined *local_7d0;
  long lStack_7c8;
  undefined *local_7c0;
  undefined1 auStack_7b8 [1876];
  uint local_64;
  uint local_60;
  uint local_5c;
  int local_58;
  
  puVar2 = PTR_DAT_04bc1118;
  if (*(int *)(param_1 + 0x50) != 2) {
    return 1;
  }
  lVar5 = *(long *)PTR_DAT_04bc1118;
  lVar6 = 0;
  if (lVar5 != 0) {
    if (((*(int *)(lVar5 + 0x3c) == 0xd) && (*(int *)(lVar5 + 0x38) == 0)) &&
       (lVar6 = FUN_032fc1e0(), lVar6 != 0)) {
      local_7c0 = PTR_DAT_04bbfe60 + 0x10;
      memset(auStack_7b8,0,0x754);
      uVar3 = nn::os::GetSystemTick();
      local_64 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
      local_60 = (local_64 ^ local_64 >> 0x1e) * 0x6c078965 + 2;
      local_5c = (local_60 ^ local_60 >> 0x1e) * 0x6c078965 + 3;
      local_58 = (local_5c ^ local_5c >> 0x1e) * 0x6c078965 + 4;
      pvVar7 = (void *)FUN_01a451fc(&local_7c0);
      memset(pvVar7,0,0x754);
      local_7d0 = PTR_DAT_04bb8610 + 0x10;
      lStack_7c8 = lVar6;
      FUN_01c08b60(&local_7c0,&local_7d0);
      (**(code **)(local_7c0 + 0x20))(&local_7c0);
    }
    lVar6 = *(long *)puVar2;
  }
  if ((*(int *)(param_1 + 0x50) == 2) && (*(char *)(param_1 + 0x10) != '\0')) {
    if (((lVar6 != 0) && ((*(int *)(lVar6 + 0x3c) == 0xd && (*(int *)(lVar6 + 0x38) == 0)))) &&
       (lVar6 = FUN_032fc1e0(), lVar6 != 0)) {
      local_7c0 = PTR_DAT_04bbfe60 + 0x10;
      memset(auStack_7b8,0,0x754);
      uVar3 = nn::os::GetSystemTick();
      local_64 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
      local_60 = (local_64 ^ local_64 >> 0x1e) * 0x6c078965 + 2;
      local_5c = (local_60 ^ local_60 >> 0x1e) * 0x6c078965 + 3;
      local_58 = (local_5c ^ local_5c >> 0x1e) * 0x6c078965 + 4;
      pvVar7 = (void *)FUN_01a451fc(&local_7c0);
      memset(pvVar7,0,0x754);
      local_7d0 = PTR_DAT_04bb8610 + 0x10;
      lStack_7c8 = lVar6;
      FUN_01c08b60(&local_7c0,&local_7d0);
      lVar5 = (**(code **)(local_7c0 + 0x20))(&local_7c0);
      lVar6 = 0;
      iVar4 = 0;
      do {
        puVar1 = (uint *)(lVar5 + lVar6);
        lVar6 = lVar6 + 4;
        uVar3 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
        uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
        uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
        uVar3 = uVar3 + (uVar3 >> 8);
        iVar4 = (uVar3 + (uVar3 >> 0x10) & 0x3f) + iVar4;
      } while (lVar6 != 0x754);
      if (iVar4 != 0) {
        lVar6 = *(long *)puVar2;
        goto LAB_03367a38;
      }
    }
    if (param_2 == (undefined4 *)0x0) {
      return 0;
    }
    uVar10 = 4;
LAB_03367a94:
    uVar9 = 0;
    *param_2 = uVar10;
  }
  else {
LAB_03367a38:
    if (lVar6 != 0) {
      uVar3 = *(uint *)(lVar6 + 0x3c);
      local_7c0 = (undefined *)CONCAT44(local_7c0._4_4_,uVar3);
      if ((uVar3 < 0x2f) && ((1L << ((ulong)uVar3 & 0x3f) & 0x420c0030a83fU) != 0)) {
        pwVar8 = (wchar16 *)
                 (**(code **)(*(long *)(param_1 + 0x68) + 0x18))((long *)(param_1 + 0x68));
        iVar4 = nn::ngc::CountNumbers(pwVar8);
        if (5 < iVar4) {
          if (param_2 == (undefined4 *)0x0) {
            return 0;
          }
          uVar10 = 5;
          goto LAB_03367a94;
        }
      }
    }
    uVar9 = 1;
  }
  return uVar9;
}


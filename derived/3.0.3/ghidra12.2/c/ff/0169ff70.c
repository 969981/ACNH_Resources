
void FUN_0169ff70(long param_1,undefined1 param_2)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  int local_7fc;
  undefined *local_7f8;
  undefined1 auStack_7f0 [1876];
  uint local_9c;
  uint local_98;
  uint local_94;
  int local_90;
  undefined8 local_88;
  int *piStack_80;
  
  local_7f8 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_7f0,0,0x754);
  uVar6 = nn::os::GetSystemTick();
  local_9c = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
  local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 2;
  local_94 = (local_98 ^ local_98 >> 0x1e) * 0x6c078965 + 3;
  local_90 = (local_94 ^ local_94 >> 0x1e) * 0x6c078965 + 4;
  pvVar7 = (void *)FUN_01a451fc(&local_7f8);
  memset(pvVar7,0,0x754);
  iVar11 = 0;
  uVar12 = 0;
  lVar2 = *(long *)(param_1 + 0xb20) + 0x1088;
  do {
    if (0 < *(int *)(lVar2 + (-(uVar12 >> 0x1f) & 0xfffffffc00000000 | uVar12 << 2))) {
      pvVar7 = (void *)(**(code **)(local_7f8 + 0x18))(&local_7f8);
      memset(pvVar7,0,0x754);
      local_88 = &PTR_FUN_049ff600;
      local_7fc = iVar11;
      piStack_80 = &local_7fc;
      FUN_008a1ba0(&local_7f8,&local_88);
      lVar8 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
      uVar6 = DAT_05582b74;
      lVar10 = 0;
      uVar9 = 0;
      do {
        puVar1 = (uint *)(lVar8 + lVar10);
        lVar10 = lVar10 + 4;
        uVar5 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
        uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
        uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
        uVar5 = uVar5 + (uVar5 >> 8);
        uVar5 = (uVar5 + (uVar5 >> 0x10) & 0x3f) + (int)uVar9;
        uVar9 = (ulong)uVar5;
      } while (lVar10 != 0x754);
      iVar4 = *(int *)(lVar2 + (long)(int)uVar12 * 4);
      if ((int)uVar5 <= iVar4) {
        *(int *)(*(long *)(param_1 + 0xb18) + 0x2c) =
             *(int *)(*(long *)(param_1 + 0xb18) + 0x2c) + iVar4 * 800;
        uVar5 = DAT_05582b78;
        if (*(int *)(*(long *)(param_1 + 0xb18) + 0x14) == 0) {
          uVar6 = DAT_05582b70;
        }
        else {
          uVar3 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
          DAT_05582b70 = DAT_05582b74;
          DAT_05582b74 = DAT_05582b78;
          uVar3 = uVar3 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar3 ^ DAT_05582b7c;
          DAT_05582b78 = DAT_05582b7c;
          DAT_05582b7c = uVar3;
          if (0x1d < (uint)((ulong)uVar3 * 100 >> 0x20)) goto LAB_016a00b8;
        }
        DAT_05582b70 = DAT_05582b74;
        DAT_05582b74 = DAT_05582b78;
        *(int *)(*(long *)(param_1 + 0xb18) + 0x14) = local_7fc;
        uVar6 = uVar6 ^ uVar6 << 0xb;
        uVar6 = uVar6 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar6 ^ DAT_05582b7c;
        DAT_05582b78 = DAT_05582b7c;
        DAT_05582b7c = uVar6;
        FUN_00889f80(&local_88,&local_7f8,(int)(uVar6 * uVar9 >> 0x20) + 1);
        lVar10 = *(long *)(param_1 + 0xb18);
        *(undefined4 *)(lVar10 + 100) = (undefined4)local_88;
        *(undefined4 *)(lVar10 + 0x68) = local_88._4_4_;
        *(undefined1 *)(*(long *)(param_1 + 0xb18) + 0xce) = param_2;
      }
    }
LAB_016a00b8:
    iVar11 = iVar11 + 1;
    uVar12 = (ulong)((int)uVar12 + 1);
    if (iVar11 == 0x1f) {
      return;
    }
  } while( true );
}


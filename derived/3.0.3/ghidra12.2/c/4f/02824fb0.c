
int FUN_02824fb0(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  uint uVar5;
  void *__s;
  long lVar6;
  ulong uVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  long lVar12;
  undefined *local_7e8;
  undefined1 auStack_7e0 [1876];
  uint local_8c;
  uint local_88;
  uint local_84;
  int local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined **local_60;
  uint *puStack_58;
  uint local_24;
  
  puVar4 = PTR_DAT_04bb43c0;
  local_68 = 0;
  local_78 = PTR_DAT_04bc0510 + 0x10;
  local_70 = *param_1;
  uStack_6c = param_1[1];
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_70);
  local_24 = 0;
  if (*(long *)puVar4 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar12 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(param_1);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
         ((puVar8 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8),
          puVar8 != (uint *)0x0 && (uVar5 = *puVar8, uVar5 != 0 && puVar8 != (uint *)(ulong)uVar5)))
         ) {
        puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar5);
        if ((*puVar10 != 0) &&
           ((uVar5 = puVar10[1], uVar5 != 0 && ((ulong)(ushort)puVar10[2] != 0)))) {
          lVar12 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar10 + lVar12 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar12 != 0) {
            uVar2 = 0;
            if ((ulong)uVar5 != 0) {
              uVar2 = (uint)((ulong)((long)puVar8 - lVar12) / (ulong)uVar5);
            }
            if (*puVar10 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ce8) &&
               (uVar3 = *(ushort *)(DAT_05326cf0 + (long)(int)uVar2 * 2), local_24 = (uint)uVar3,
               uVar3 < 0x5b6)) goto LAB_028250f8;
          }
        }
      }
    }
    local_24 = 0;
  }
LAB_028250f8:
  local_7e8 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_7e0,0,0x754);
  uVar5 = nn::os::GetSystemTick();
  local_8c = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  local_88 = (local_8c ^ local_8c >> 0x1e) * 0x6c078965 + 2;
  local_84 = (local_88 ^ local_88 >> 0x1e) * 0x6c078965 + 3;
  local_80 = (local_84 ^ local_84 >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)FUN_01a451fc(&local_7e8);
  memset(__s,0,0x754);
  puStack_58 = &local_24;
  local_60 = &PTR_FUN_049ff858;
  FUN_008a1ba0(&local_7e8,&local_60);
  lVar6 = (**(code **)(local_7e8 + 0x20))(&local_7e8);
  lVar12 = 0;
  iVar11 = 0;
  do {
    iVar9 = iVar11;
    puVar8 = (uint *)(lVar6 + lVar12);
    lVar12 = lVar12 + 4;
    uVar5 = *puVar8 - (*puVar8 >> 1 & 0x55555555);
    uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
    uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
    uVar5 = uVar5 + (uVar5 >> 8);
    uVar5 = uVar5 + (uVar5 >> 0x10);
    iVar11 = (uVar5 & 0x3f) + iVar9;
  } while (lVar12 != 0x754);
  if (iVar11 != 0) {
    iVar11 = 0;
    do {
      iVar1 = iVar11 + 1;
      FUN_00889f80(&local_60,&local_7e8,iVar1);
      uVar7 = FUN_0277d7b4(&local_60,param_1);
      if ((uVar7 & 1) != 0) {
        return iVar11;
      }
      iVar11 = iVar1;
    } while (iVar9 + (uVar5 & 0x3f) != iVar1);
  }
  return 0;
}


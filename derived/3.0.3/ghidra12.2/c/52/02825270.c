
int FUN_02825270(undefined4 *param_1)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  void *__s;
  long lVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  undefined *local_7e0;
  undefined1 auStack_7d8 [1876];
  uint local_84;
  uint local_80;
  uint local_7c;
  int local_78;
  uint local_6c;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined **local_50;
  uint *puStack_48;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_58 = 0;
  local_68 = PTR_DAT_04bc0510 + 0x10;
  local_60 = *param_1;
  uStack_5c = param_1[1];
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_60);
  local_6c = 0;
  if (*(long *)puVar3 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_1);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
         ((puVar7 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8),
          puVar7 != (uint *)0x0 && (uVar4 = *puVar7, uVar4 != 0 && puVar7 != (uint *)(ulong)uVar4)))
         ) {
        puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar4);
        if ((*puVar8 != 0) && ((uVar4 = puVar8[1], uVar4 != 0 && ((ulong)(ushort)puVar8[2] != 0))))
        {
          lVar9 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar9 != 0) {
            uVar1 = 0;
            if ((ulong)uVar4 != 0) {
              uVar1 = (uint)((ulong)((long)puVar7 - lVar9) / (ulong)uVar4);
            }
            if (*puVar8 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ce8) &&
               (uVar2 = *(ushort *)(DAT_05326cf0 + (long)(int)uVar1 * 2), local_6c = (uint)uVar2,
               uVar2 < 0x5b6)) goto LAB_028253b4;
          }
        }
      }
    }
    local_6c = 0;
  }
LAB_028253b4:
  local_7e0 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_7d8,0,0x754);
  uVar4 = nn::os::GetSystemTick();
  local_84 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  local_80 = (local_84 ^ local_84 >> 0x1e) * 0x6c078965 + 2;
  local_7c = (local_80 ^ local_80 >> 0x1e) * 0x6c078965 + 3;
  local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)FUN_01a451fc(&local_7e0);
  memset(__s,0,0x754);
  puStack_48 = &local_6c;
  local_50 = &PTR_FUN_049ff858;
  FUN_008a1ba0(&local_7e0,&local_50);
  lVar5 = (**(code **)(local_7e0 + 0x20))(&local_7e0);
  lVar9 = 0;
  iVar6 = 0;
  do {
    puVar7 = (uint *)(lVar5 + lVar9);
    lVar9 = lVar9 + 4;
    uVar4 = *puVar7 - (*puVar7 >> 1 & 0x55555555);
    uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
    uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
    uVar4 = uVar4 + (uVar4 >> 8);
    iVar6 = (uVar4 + (uVar4 >> 0x10) & 0x3f) + iVar6;
  } while (lVar9 != 0x754);
  return iVar6;
}


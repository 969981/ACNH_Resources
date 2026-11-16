
bool FUN_027bc660(long param_1,uint param_2)

{
  undefined **ppuVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  void *__s;
  long lVar7;
  long lVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  undefined *local_800;
  undefined1 auStack_7f8 [1876];
  uint local_a4;
  uint local_a0;
  uint local_9c;
  int local_98;
  uint local_8c;
  undefined **local_88;
  undefined8 local_80;
  undefined8 local_78;
  
  local_800 = PTR_DAT_04bbfe60 + 0x10;
  local_8c = param_2;
  memset(auStack_7f8,0,0x754);
  uVar5 = nn::os::GetSystemTick();
  local_a4 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 2;
  local_9c = (local_a0 ^ local_a0 >> 0x1e) * 0x6c078965 + 3;
  local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)FUN_01a451fc(&local_800);
  memset(__s,0,0x754);
  local_80 = &local_8c;
  local_88 = &PTR_FUN_049ff448;
  FUN_008a1ba0(&local_800,&local_88);
  lVar7 = (**(code **)(local_800 + 0x20))(&local_800);
  puVar4 = PTR_DAT_04bb43c0;
  lVar8 = 0;
  iVar12 = 0;
  do {
    puVar9 = (uint *)(lVar7 + lVar8);
    lVar8 = lVar8 + 4;
    uVar5 = *puVar9 - (*puVar9 >> 1 & 0x55555555);
    uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
    uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
    uVar5 = uVar5 + (uVar5 >> 8);
    iVar12 = (uVar5 + (uVar5 >> 0x10) & 0x3f) + iVar12;
  } while (lVar8 != 0x754);
  iVar13 = 0;
  uVar5 = 0;
  ppuVar1 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  do {
    puVar2 = (undefined2 *)(param_1 + 0x1004 + ((long)((ulong)uVar5 << 0x20) >> 0x1d));
    uVar6 = FUN_0277d6c4(puVar2);
    lVar11 = *(long *)puVar4;
    lVar7 = lVar11;
    if (lVar11 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        lVar8 = param_1 + 0x1004 + (long)(int)uVar5 * 8;
        local_78 = 0;
        local_80 = (uint *)CONCAT44(*(undefined4 *)(lVar8 + 4),
                                    CONCAT22(*(undefined2 *)(lVar8 + 2),*puVar2));
        local_88 = ppuVar1;
        uVar6 = FUN_0277d6c4(&local_80);
        lVar7 = *(long *)puVar4;
        if (lVar7 == 0) {
LAB_027bc7d0:
          uVar6 = 0xbc;
        }
        else {
          lVar8 = *(long *)(lVar11 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((*(uint *)(lVar8 + 0x1d8) <= uVar6) ||
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_027bc7d0;
          lVar8 = *(long *)PTR_DAT_04bc0428;
          uVar6 = FUN_0277d6c4(puVar2);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          lVar7 = *(long *)puVar4;
          if ((*(uint *)(lVar8 + 0x1d8) <= uVar6) ||
             (puVar9 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8),
             puVar9 == (uint *)0x0)) goto LAB_027bc7d0;
          uVar3 = *puVar9;
          uVar6 = 0;
          if ((uVar3 != 0) && (puVar9 != (uint *)(ulong)uVar3)) {
            puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar3);
            uVar6 = 0;
            if (*puVar10 != 0) {
              uVar6 = puVar10[1];
              if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
                lVar8 = 0xc;
                if (*(char *)((long)puVar10 + 10) != '\0') {
                  lVar8 = 0x1c;
                }
                lVar8 = (long)puVar10 + lVar8 + (ulong)(ushort)puVar10[2] * 8;
                if (lVar8 != 0) {
                  uVar3 = 0;
                  if ((ulong)uVar6 != 0) {
                    uVar3 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar6);
                  }
                  if (*puVar10 <= uVar3) {
                    uVar3 = 0xffffffff;
                  }
                  if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
                     (uVar6 = (uint)*(ushort *)
                                     (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
                     uVar6 < 0xbd)) goto LAB_027bc7d4;
                }
              }
              uVar6 = 0;
            }
          }
        }
LAB_027bc7d4:
        if (uVar6 == local_8c) {
          iVar13 = iVar13 + 1;
        }
      }
    }
    uVar5 = uVar5 + 1;
    lVar8 = lVar7;
    if (uVar5 == 0x400) {
      return iVar12 <= iVar13;
    }
  } while( true );
}


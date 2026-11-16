
int FUN_027bcda0(long param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  void *__s;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined **local_800;
  undefined2 local_7f8;
  undefined2 local_7f6;
  undefined4 local_7f4;
  undefined8 local_7f0;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  int local_98;
  uint local_8c;
  undefined **local_88;
  uint *puStack_80;
  
  puVar4 = PTR_DAT_04bb43c0;
  local_88 = (undefined **)CONCAT44(local_88._4_4_,0x6a);
  iVar10 = 0;
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = 0;
  do {
    puVar1 = (undefined2 *)(param_1 + 0x1004 + ((long)((ulong)uVar6 << 0x20) >> 0x1d));
    uVar5 = FUN_0277d6c4(puVar1);
    lVar12 = *(long *)puVar4;
    if (lVar12 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        local_7f8 = *puVar1;
        lVar11 = param_1 + 0x1004 + (long)(int)uVar6 * 8;
        local_800 = &PTR_FUN_04a36b50;
        local_7f0 = 0;
        local_7f6 = *(undefined2 *)(lVar11 + 2);
        local_7f4 = *(undefined4 *)(lVar11 + 4);
        uVar5 = FUN_0277d6c4(&local_7f8);
        lVar11 = *(long *)puVar4;
        if (lVar11 == 0) {
LAB_027bce04:
          local_8c = 0xbc;
        }
        else {
          lVar12 = *(long *)(lVar12 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
          if ((*(uint *)(lVar12 + 0x1d8) <= uVar5) ||
             (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_027bce04;
          lVar12 = *(long *)PTR_DAT_04bc0428;
          uVar5 = FUN_0277d6c4(puVar1);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
          lVar11 = *(long *)puVar4;
          if ((*(uint *)(lVar12 + 0x1d8) <= uVar5) ||
             (puVar8 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8),
             puVar8 == (uint *)0x0)) goto LAB_027bce04;
          uVar5 = *puVar8;
          local_8c = 0;
          if ((uVar5 != 0) && (puVar8 != (uint *)(ulong)uVar5)) {
            puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar5);
            local_8c = 0;
            if (*puVar9 != 0) {
              uVar5 = puVar9[1];
              if ((uVar5 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
                lVar12 = 0xc;
                if (*(char *)((long)puVar9 + 10) != '\0') {
                  lVar12 = 0x1c;
                }
                lVar12 = (long)puVar9 + lVar12 + (ulong)(ushort)puVar9[2] * 8;
                if (lVar12 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar5 != 0) {
                    uVar2 = (uint)((ulong)((long)puVar8 - lVar12) / (ulong)uVar5);
                  }
                  if (*puVar9 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                     (local_8c = (uint)*(ushort *)
                                        (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
                     local_8c < 0xbd)) goto LAB_027bce08;
                }
              }
              local_8c = 0;
            }
          }
        }
LAB_027bce08:
        if (local_8c == (uint)local_88) {
          iVar10 = iVar10 + 1;
        }
        lVar12 = lVar11;
      }
    }
    lVar11 = lVar12;
    uVar6 = uVar6 + 1;
    if (uVar6 == 0x400) {
      local_8c = 0x6a;
      local_800 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
      memset(&local_7f8,0,0x754);
      uVar6 = nn::os::GetSystemTick();
      local_a4 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
      local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 2;
      local_9c = (local_a0 ^ local_a0 >> 0x1e) * 0x6c078965 + 3;
      local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 4;
      __s = (void *)FUN_01a451fc(&local_800);
      memset(__s,0,0x754);
      puStack_80 = &local_8c;
      local_88 = &PTR_FUN_049ff448;
      FUN_008a1ba0(&local_800,&local_88);
      lVar12 = (*(code *)local_800[4])(&local_800);
      lVar11 = 0;
      iVar7 = 0;
      do {
        puVar8 = (uint *)(lVar12 + lVar11);
        lVar11 = lVar11 + 4;
        uVar6 = *puVar8 - (*puVar8 >> 1 & 0x55555555);
        uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
        uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
        uVar6 = uVar6 + (uVar6 >> 8);
        iVar7 = (uVar6 + (uVar6 >> 0x10) & 0x3f) + iVar7;
      } while (lVar11 != 0x754);
      if (iVar7 == 0) {
        iVar7 = 0;
      }
      else {
        iVar3 = 0;
        if (iVar7 != 0) {
          iVar3 = (iVar10 * 100) / iVar7;
        }
        iVar7 = iVar3;
        if (99 < iVar3) {
          iVar7 = 100;
        }
        if (iVar3 < 1 && 0 < iVar10) {
          iVar7 = 1;
        }
      }
      return iVar7;
    }
  } while( true );
}


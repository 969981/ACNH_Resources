
int FUN_027be730(long param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  void *__s;
  long lVar7;
  long lVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  long lVar13;
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
  local_88 = (undefined **)CONCAT44(local_88._4_4_,0x70);
  iVar12 = 0;
  uVar6 = 0;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  do {
    puVar1 = (undefined2 *)(param_1 + 0x1004 + ((long)((ulong)uVar6 << 0x20) >> 0x1d));
    uVar5 = FUN_0277d6c4(puVar1);
    lVar13 = *(long *)puVar4;
    lVar8 = lVar13;
    if (lVar13 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        local_7f8 = *puVar1;
        lVar7 = param_1 + 0x1004 + (long)(int)uVar6 * 8;
        local_800 = &PTR_FUN_04a36b50;
        local_7f0 = 0;
        local_7f6 = *(undefined2 *)(lVar7 + 2);
        local_7f4 = *(undefined4 *)(lVar7 + 4);
        uVar5 = FUN_0277d6c4(&local_7f8);
        lVar8 = *(long *)puVar4;
        if (lVar8 == 0) {
LAB_027be794:
          local_8c = 0xbc;
        }
        else {
          lVar7 = *(long *)(lVar13 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((*(uint *)(lVar7 + 0x1d8) <= uVar5) ||
             (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_027be794;
          lVar7 = *(long *)PTR_DAT_04bc0428;
          uVar5 = FUN_0277d6c4(puVar1);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          lVar8 = *(long *)puVar4;
          if ((*(uint *)(lVar7 + 0x1d8) <= uVar5) ||
             (puVar10 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8),
             puVar10 == (uint *)0x0)) goto LAB_027be794;
          uVar5 = *puVar10;
          local_8c = 0;
          if ((uVar5 != 0) && (puVar10 != (uint *)(ulong)uVar5)) {
            puVar11 = (uint *)((long)puVar10 - (long)(ulong)uVar5);
            local_8c = 0;
            if (*puVar11 != 0) {
              uVar5 = puVar11[1];
              if ((uVar5 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
                lVar7 = 0xc;
                if (*(char *)((long)puVar11 + 10) != '\0') {
                  lVar7 = 0x1c;
                }
                lVar7 = (long)puVar11 + lVar7 + (ulong)(ushort)puVar11[2] * 8;
                if (lVar7 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar5 != 0) {
                    uVar2 = (uint)((ulong)((long)puVar10 - lVar7) / (ulong)uVar5);
                  }
                  if (*puVar11 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                     (local_8c = (uint)*(ushort *)
                                        (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
                     local_8c < 0xbd)) goto LAB_027be798;
                }
              }
              local_8c = 0;
            }
          }
        }
LAB_027be798:
        if (local_8c == (uint)local_88) {
          iVar12 = iVar12 + 1;
        }
      }
    }
    uVar6 = uVar6 + 1;
    lVar7 = lVar8;
    if (uVar6 == 0x400) {
      local_8c = 0x70;
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
      lVar8 = (*(code *)local_800[4])(&local_800);
      lVar7 = 0;
      iVar9 = 0;
      do {
        puVar10 = (uint *)(lVar8 + lVar7);
        lVar7 = lVar7 + 4;
        uVar6 = *puVar10 - (*puVar10 >> 1 & 0x55555555);
        uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
        uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
        uVar6 = uVar6 + (uVar6 >> 8);
        iVar9 = (uVar6 + (uVar6 >> 0x10) & 0x3f) + iVar9;
      } while (lVar7 != 0x754);
      if (iVar9 == 0) {
        iVar9 = 0;
      }
      else {
        iVar3 = 0;
        if (iVar9 != 0) {
          iVar3 = (iVar12 * 100) / iVar9;
        }
        iVar9 = iVar3;
        if (99 < iVar3) {
          iVar9 = 100;
        }
        if (iVar3 < 1 && 0 < iVar12) {
          iVar9 = 1;
        }
      }
      return iVar9;
    }
  } while( true );
}


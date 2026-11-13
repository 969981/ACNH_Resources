
void FUN_013eeec0(long param_1,long *param_2,int *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  ushort uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  void *pvVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  int iVar15;
  ulong uVar16;
  undefined *local_800;
  undefined1 auStack_7f8 [1876];
  uint local_a4;
  uint local_a0;
  uint local_9c;
  int local_98;
  uint local_8c;
  undefined **local_88;
  uint *puStack_80;
  
  if (param_2 != (long *)0x0) {
    pvVar9 = (void *)(**(code **)(*param_2 + 0x18))(param_2);
    memset(pvVar9,0,0x754);
    local_800 = PTR_DAT_04bbfe60 + 0x10;
    memset(auStack_7f8,0,0x754);
    uVar8 = nn::os::GetSystemTick();
    local_a4 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
    local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 2;
    local_9c = (local_a0 ^ local_a0 >> 0x1e) * 0x6c078965 + 3;
    local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 4;
    pvVar9 = (void *)FUN_01a451fc(&local_800);
    memset(pvVar9,0,0x754);
    local_8c = 0x6a;
    puStack_80 = &local_8c;
    local_88 = &PTR_FUN_049ff448;
    FUN_008a1ba0(&local_800,&local_88);
    lVar10 = (**(code **)(local_800 + 0x20))(&local_800);
    uVar16 = 0;
    do {
      if ((*(uint *)(lVar10 + (uVar16 >> 5) * 4) >> (ulong)((uint)uVar16 & 0x1f) & 1) != 0)
      goto LAB_013eeff4;
      uVar8 = (uint)uVar16 + 1;
      uVar16 = (ulong)uVar8;
    } while (uVar8 != 15000);
    uVar16 = 0;
LAB_013eeff4:
    lVar11 = (**(code **)(local_800 + 0x20))(&local_800);
    puVar7 = PTR_DAT_04bbfe58;
    puVar6 = PTR_DAT_04bb37e0;
    iVar15 = 15000;
    do {
      if ((*(uint *)(lVar11 + (ulong)(iVar15 - 1U >> 5) * 4) >> (ulong)(iVar15 - 1U & 0x1f) & 1) !=
          0) break;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
    if (iVar15 != (int)uVar16) {
LAB_013ef0b4:
      puVar1 = (undefined8 *)(puVar7 + uVar16 * 8);
      if (0x752 < (uint)(uVar16 >> 3)) {
        puVar1 = (undefined8 *)puVar7;
      }
      puVar2 = (undefined8 *)puVar6;
      if ((uint)uVar16 < 0x3a99) {
        puVar2 = puVar1;
      }
      local_88 = (undefined **)*puVar2;
      uVar8 = FUN_0277d6c4(&local_88);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(param_1 + 0x348);
      if (uVar8 < *(uint *)(param_1 + 0x328)) {
        puVar13 = *(uint **)(*(long *)(param_1 + 0x330) + (long)(int)uVar8 * 8);
        iVar12 = 0;
        if (puVar13 != (uint *)0x0) {
          uVar8 = *puVar13;
          if (uVar8 == 0 || puVar13 == (uint *)(ulong)uVar8) {
LAB_013ef184:
            local_8c = 0;
          }
          else {
            puVar14 = (uint *)((long)puVar13 - (long)(ulong)uVar8);
            if (((*puVar14 == 0) || (uVar8 = puVar14[1], uVar8 == 0)) ||
               ((ulong)(ushort)puVar14[2] == 0)) goto LAB_013ef184;
            lVar11 = 0xc;
            if (*(char *)((long)puVar14 + 10) != '\0') {
              lVar11 = 0x1c;
            }
            lVar11 = (long)puVar14 + lVar11 + (ulong)(ushort)puVar14[2] * 8;
            if (lVar11 == 0) goto LAB_013ef184;
            uVar3 = 0;
            if ((ulong)uVar8 != 0) {
              uVar3 = (uint)((ulong)((long)puVar13 - lVar11) / (ulong)uVar8);
            }
            if (*puVar14 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((DAT_051b69d0 <= uVar3) ||
               (uVar4 = *(ushort *)(DAT_051b69d8 + (long)(int)uVar3 * 2), local_8c = (uint)uVar4,
               6 < uVar4)) goto LAB_013ef184;
          }
          if ((6 < local_8c) || ((0x5dU >> (ulong)(local_8c & 0x1f) & 1) == 0)) goto LAB_013ef1a4;
          iVar12 = *(int *)(&DAT_041754dc + (long)(int)local_8c * 4);
        }
      }
      else {
LAB_013ef1a4:
        iVar12 = 0;
      }
      if (iVar12 == *param_3) {
        FUN_0277dedc(&local_88);
        lVar11 = (**(code **)(*param_2 + 0x18))(param_2);
        uVar8 = FUN_0277d6c4(&local_88);
        if ((uVar8 >> 3 & 0x1fff) < 0x753) {
          lVar5 = (ulong)((uVar8 & 0xffff) >> 5) * 4;
          *(uint *)(lVar11 + lVar5) = *(uint *)(lVar11 + lVar5) | 1 << (ulong)(uVar8 & 0x1f);
        }
      }
      do {
        uVar8 = (int)uVar16 + 1;
        uVar16 = (ulong)uVar8;
        if (0x752 < uVar8 >> 3) {
          uVar8 = 0x3a95;
          goto LAB_013ef234;
        }
      } while ((*(uint *)(lVar10 + (ulong)(uVar8 >> 5) * 4) >> (ulong)(uVar8 & 0x1f) & 1) == 0);
      goto LAB_013ef0ac;
    }
LAB_013ef034:
    local_8c = 99;
    local_88 = &PTR_FUN_049ff448;
    puStack_80 = &local_8c;
    FUN_008a1ba0(param_2,&local_88);
    local_8c = 0x60;
    local_88 = &PTR_FUN_049ff448;
    puStack_80 = &local_8c;
    FUN_008a1ba0(param_2,&local_88);
  }
  return;
  while( true ) {
    if ((*(uint *)(lVar10 + (ulong)(uVar8 >> 5) * 4) >> (ulong)(uVar8 & 0x1f) & 1) != 0)
    goto LAB_013ef0a8;
    uVar8 = uVar8 - 3;
    if (uVar8 == 0xfffffffd) break;
LAB_013ef234:
    uVar3 = uVar8 + 2;
    if (((*(uint *)(lVar10 + (ulong)(uVar3 >> 5) * 4) >> (ulong)(uVar3 & 0x1f) & 1) != 0) ||
       (uVar3 = uVar8 + 1,
       (*(uint *)(lVar10 + (ulong)(uVar3 >> 5) * 4) >> (ulong)(uVar3 & 0x1f) & 1) != 0)) {
      uVar8 = uVar3;
LAB_013ef0a8:
      uVar16 = (ulong)(uVar8 + 1);
      goto LAB_013ef0ac;
    }
  }
  uVar16 = 0;
LAB_013ef0ac:
  if (iVar15 == (int)uVar16) goto LAB_013ef034;
  goto LAB_013ef0b4;
}


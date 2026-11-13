
void FUN_013fd630(long param_1)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  short sVar10;
  undefined4 uVar11;
  uint uVar12;
  void *__s;
  long lVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  undefined4 local_74;
  undefined4 uStack_70;
  int local_6c;
  int local_68;
  uint uStack_64;
  
  lVar14 = *(long *)PTR_DAT_04bb27d0;
  if (((lVar14 != 0) && (*(long *)(lVar14 + 0x28) != 0)) && (*(int *)(lVar14 + 0x80) == 1)) {
    plVar2 = (long *)(param_1 + 0x528);
    uStack_64 = *(uint *)(*(long *)PTR_DAT_04bb30a0 + 0x65204);
    bVar6 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
    if (1 < uStack_64) {
      uStack_64 = 0;
    }
    local_68 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4062) - 1;
    iVar15 = 1;
    if (6 < bVar6 - 9) {
      iVar15 = (uint)(4 < bVar6 - 0x10) << 1;
    }
    local_6c = 0;
    if (4 < bVar6 - 4) {
      local_6c = iVar15;
    }
    __s = (void *)(**(code **)(*(long *)(param_1 + 0x528) + 0x18))(plVar2);
    memset(__s,0,0x754);
    plVar3 = (long *)(param_1 + 0xc98);
    lVar14 = (**(code **)(*(long *)(param_1 + 0xc98) + 0x20))(plVar3);
    uVar16 = 0;
    do {
      if ((*(uint *)(lVar14 + (uVar16 >> 5) * 4) >> (ulong)((uint)uVar16 & 0x1f) & 1) != 0)
      goto LAB_013fd750;
      uVar12 = (uint)uVar16 + 1;
      uVar16 = (ulong)uVar12;
    } while (uVar12 != 15000);
    uVar16 = 0;
LAB_013fd750:
    lVar13 = (**(code **)(*plVar3 + 0x20))(plVar3);
    puVar9 = PTR_DAT_04bbfe58;
    puVar8 = PTR_DAT_04bb37e0;
    iVar15 = 15000;
    do {
      if ((*(uint *)(lVar13 + (ulong)(iVar15 - 1U >> 5) * 4) >> (ulong)(iVar15 - 1U & 0x1f) & 1) !=
          0) break;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
    if (iVar15 != (int)uVar16) {
LAB_013fd7e0:
      puVar4 = (undefined4 *)(puVar9 + uVar16 * 8);
      if (0x752 < (uint)(uVar16 >> 3)) {
        puVar4 = (undefined4 *)puVar9;
      }
      puVar5 = (undefined4 *)puVar8;
      if ((uint)uVar16 < 0x3a99) {
        puVar5 = puVar4;
      }
      local_74 = *puVar5;
      uStack_70 = puVar5[1];
      uVar11 = FUN_0277d6c4(&local_74);
      sVar10 = FUN_013ef41c(param_1,&local_68,&local_6c,uVar11,&uStack_64);
      if (sVar10 != 0) {
        local_74 = *puVar5;
        uStack_70 = puVar5[1];
        FUN_0277dedc(&local_74);
        lVar13 = (**(code **)(*plVar2 + 0x18))(plVar2);
        uVar12 = FUN_0277d6c4(&local_74);
        if ((uVar12 >> 3 & 0x1fff) < 0x753) {
          lVar7 = (ulong)((uVar12 & 0xffff) >> 5) * 4;
          *(uint *)(lVar13 + lVar7) = *(uint *)(lVar13 + lVar7) | 1 << (ulong)(uVar12 & 0x1f);
        }
      }
      do {
        uVar12 = (int)uVar16 + 1;
        uVar16 = (ulong)uVar12;
        if (0x752 < uVar12 >> 3) {
          uVar12 = 0x3a95;
          goto LAB_013fd8b0;
        }
      } while ((*(uint *)(lVar14 + (ulong)(uVar12 >> 5) * 4) >> (ulong)(uVar12 & 0x1f) & 1) == 0);
      goto LAB_013fd7d8;
    }
  }
  return;
  while( true ) {
    if ((*(uint *)(lVar14 + (ulong)(uVar12 >> 5) * 4) >> (ulong)(uVar12 & 0x1f) & 1) != 0)
    goto LAB_013fd7d4;
    uVar12 = uVar12 - 3;
    if (uVar12 == 0xfffffffd) break;
LAB_013fd8b0:
    uVar1 = uVar12 + 2;
    if (((*(uint *)(lVar14 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0) ||
       (uVar1 = uVar12 + 1,
       (*(uint *)(lVar14 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
      uVar12 = uVar1;
LAB_013fd7d4:
      uVar16 = (ulong)(uVar12 + 1);
      goto LAB_013fd7d8;
    }
  }
  uVar16 = 0;
LAB_013fd7d8:
  if (iVar15 == (int)uVar16) {
    return;
  }
  goto LAB_013fd7e0;
}



void FUN_0369a770(undefined2 *param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  uint uVar14;
  undefined2 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined4 uVar18;
  int iVar19;
  undefined8 local_800;
  undefined *local_7e0;
  undefined1 auStack_7d8 [1876];
  uint local_84;
  uint local_80;
  uint local_7c;
  int local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  
  local_7e0 = PTR_DAT_04bbfe60 + 0x10;
  uVar6 = nn::os::GetSystemTick();
  local_84 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
  local_80 = (local_84 ^ local_84 >> 0x1e) * 0x6c078965 + 2;
  local_7c = (local_80 ^ local_80 >> 0x1e) * 0x6c078965 + 3;
  local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 4;
  memcpy(auStack_7d8,(void *)(param_2 + 8),0x754);
  puVar5 = PTR_DAT_04bb43c0;
  local_800 = &PTR_FUN_04b43620;
  uVar6 = 0;
  do {
    (**(code **)(local_7e0 + 0x10))(&local_70,&local_7e0,uVar6);
    lVar9 = (**(code **)(local_7e0 + 0x20))(&local_7e0);
    uVar14 = 1 << (ulong)(uVar6 & 0x1f);
    if ((*(uint *)(lVar9 + (ulong)(uVar6 >> 5) * 4) & uVar14) != 0) {
      lVar9 = *(long *)puVar5;
      uVar7 = FUN_0277d6c4(&local_70);
      if (*(long *)puVar5 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if (((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
           (uVar10 = (*(code *)*local_800)(&local_800,&local_70), (uVar10 & 1) != 0))
        goto LAB_0369a860;
      }
      lVar9 = (**(code **)(local_7e0 + 0x18))(&local_7e0);
      lVar11 = (ulong)(uVar6 >> 5) * 4;
      *(uint *)(lVar9 + lVar11) = *(uint *)(lVar9 + lVar11) & (uVar14 ^ 0xffffffff);
    }
LAB_0369a860:
    uVar6 = uVar6 + 1;
  } while (uVar6 != 15000);
  uVar15 = *(undefined2 *)PTR_DAT_04bb37e0;
  uVar16 = PTR_DAT_04bb37e0[2];
  uVar17 = PTR_DAT_04bb37e0[3];
  uVar18 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  *param_1 = uVar15;
  pcVar12 = *(code **)(local_7e0 + 0x20);
  *(undefined1 *)(param_1 + 1) = uVar16;
  *(undefined1 *)((long)param_1 + 3) = uVar17;
  *(undefined4 *)(param_1 + 2) = uVar18;
  lVar9 = (*pcVar12)(&local_7e0);
  uVar10 = 0;
  do {
    if ((*(uint *)(lVar9 + (uVar10 >> 5) * 4) >> (ulong)((uint)uVar10 & 0x1f) & 1) != 0)
    goto LAB_0369a960;
    uVar6 = (uint)uVar10 + 1;
    uVar10 = (ulong)uVar6;
  } while (uVar6 != 15000);
  uVar10 = 0;
LAB_0369a960:
  lVar11 = (**(code **)(local_7e0 + 0x20))(&local_7e0);
  iVar19 = 15000;
  do {
    if ((*(uint *)(lVar11 + (ulong)(iVar19 - 1U >> 5) * 4) >> (ulong)(iVar19 - 1U & 0x1f) & 1) != 0)
    break;
    iVar19 = iVar19 + -1;
  } while (iVar19 != 0);
  if (iVar19 == (int)uVar10) {
    return;
  }
  lVar11 = *(long *)puVar5;
LAB_0369a9d0:
  uVar6 = FUN_0277d6c4(param_1);
  lVar13 = *(long *)puVar5;
  uVar14 = (uint)uVar10;
  if (lVar13 == 0) {
LAB_0369aa90:
    puVar3 = (undefined2 *)(PTR_DAT_04bbfe58 + uVar10 * 8);
    if (0x752 < uVar14 >> 3) {
      puVar3 = (undefined2 *)PTR_DAT_04bbfe58;
    }
    puVar4 = &DAT_05586008;
    if (uVar14 < 0x3a99) {
      puVar4 = puVar3;
    }
    uVar15 = *puVar4;
    uVar16 = *(undefined1 *)(puVar4 + 1);
    uVar17 = *(undefined1 *)((long)puVar4 + 3);
    uVar18 = *(undefined4 *)(puVar4 + 2);
    *param_1 = uVar15;
    *(undefined1 *)(param_1 + 1) = uVar16;
    *(undefined1 *)((long)param_1 + 3) = uVar17;
    *(undefined4 *)(param_1 + 2) = uVar18;
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_0369aa90;
    local_800 = (undefined **)CONCAT44(uVar18,CONCAT13(uVar17,CONCAT12(uVar16,uVar15)));
    puVar1 = (undefined4 *)(PTR_DAT_04bbfe58 + uVar10 * 8);
    if (0x752 < (uint)(uVar10 >> 3)) {
      puVar1 = (undefined4 *)PTR_DAT_04bbfe58;
    }
    puVar2 = (undefined4 *)&DAT_05586008;
    if (uVar14 < 0x3a99) {
      puVar2 = puVar1;
    }
    local_70 = *puVar2;
    uStack_6c = puVar2[1];
    iVar8 = FUN_0343b7d0(&local_70,&local_800);
    if (iVar8 < 0) {
      uVar15 = *(undefined2 *)puVar2;
      *param_1 = uVar15;
      uVar16 = *(undefined1 *)((long)puVar2 + 2);
      uVar17 = *(undefined1 *)((long)puVar2 + 3);
      uVar18 = puVar2[1];
      *(undefined1 *)(param_1 + 1) = uVar16;
      *(undefined1 *)((long)param_1 + 3) = uVar17;
      *(undefined4 *)(param_1 + 2) = uVar18;
    }
    lVar13 = *(long *)puVar5;
  }
  do {
    uVar6 = (int)uVar10 + 1;
    uVar10 = (ulong)uVar6;
    if (0x752 < uVar6 >> 3) {
      uVar6 = 0x3a95;
      goto LAB_0369ab10;
    }
  } while ((*(uint *)(lVar9 + (ulong)(uVar6 >> 5) * 4) >> (ulong)(uVar6 & 0x1f) & 1) == 0);
  goto LAB_0369a9c8;
  while (uVar6 = uVar6 - 3, uVar6 != 0xfffffffd) {
LAB_0369ab10:
    uVar14 = uVar6 + 2;
    if ((((*(uint *)(lVar9 + (ulong)(uVar14 >> 5) * 4) >> (ulong)(uVar14 & 0x1f) & 1) != 0) ||
        (uVar14 = uVar6 + 1,
        (*(uint *)(lVar9 + (ulong)(uVar14 >> 5) * 4) >> (ulong)(uVar14 & 0x1f) & 1) != 0)) ||
       (uVar14 = uVar6,
       (*(uint *)(lVar9 + (ulong)(uVar6 >> 5) * 4) >> (ulong)(uVar6 & 0x1f) & 1) != 0)) {
      uVar10 = (ulong)(uVar14 + 1);
      goto LAB_0369a9c8;
    }
  }
  uVar10 = 0;
LAB_0369a9c8:
  lVar11 = lVar13;
  if (iVar19 == (int)uVar10) {
    return;
  }
  goto LAB_0369a9d0;
}


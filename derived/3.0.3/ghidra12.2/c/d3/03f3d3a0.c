
undefined8 FUN_03f3d3a0(long param_1,byte *param_2)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  long *plVar18;
  void *__dest;
  void *__src;
  byte *pbVar19;
  int *piVar20;
  undefined *local_90;
  undefined8 *local_88;
  undefined *puStack_80;
  undefined4 local_78;
  undefined *local_70;
  char *pcStack_68;
  long local_60;
  undefined8 uStack_58;
  
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  uVar13 = *(undefined8 *)(*(long *)(param_2 + 0x30) + 0x48);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x28) = uVar13;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(*(long *)(param_2 + 0x30) + 0x60);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x18);
  uVar13 = *(undefined8 *)(param_2 + 0x40);
  piVar20 = (int *)(param_1 + 0x90);
  *piVar20 = 0;
  *(undefined8 *)(param_1 + 0x88) = uVar13;
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  nn::os::ClearLightEvent((LightEventType *)(param_1 + 0x2f8));
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x318) = 0;
  *(undefined8 *)(param_1 + 0x32c) = 0;
  *(undefined8 *)(param_1 + 0x334) = 0;
  *(undefined8 *)(param_1 + 0x33c) = 0;
  *(undefined8 *)(param_1 + 0x344) = 0;
  *(undefined8 *)(param_1 + 0x34c) = 0;
  puVar9 = PTR_DAT_04bb2120;
  __dest = *(void **)(param_1 + 0x368);
  *(undefined8 *)(param_1 + 0x358) = 0;
  *(undefined **)(param_1 + 0x310) = puVar9;
  *(undefined4 *)(param_1 + 0x328) = 0x20;
  *(undefined1 *)(param_1 + 0x354) = 1;
  pbVar19 = param_2 + 0x48;
  (**(code **)(*(long *)pbVar19 + 0x18))(pbVar19);
  __src = *(void **)(param_2 + 0x50);
  if (__dest != __src) {
    (**(code **)(*(long *)(param_2 + 0x48) + 0x18))(pbVar19);
    lVar14 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0x50) + lVar14) == '\0') goto LAB_03f3d4dc;
      lVar1 = *(long *)(param_2 + 0x50) + lVar14;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_03f3d4dc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar14 = lVar14 + 2;
        goto LAB_03f3d4dc;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    lVar14 = 0;
LAB_03f3d4dc:
    iVar10 = (int)lVar14;
    if (*(int *)(param_1 + 0x370) <= (int)lVar14) {
      iVar10 = *(int *)(param_1 + 0x370) + -1;
    }
    memcpy(__dest,__src,(long)iVar10);
    *(undefined1 *)((long)__dest + (long)iVar10) = 0;
  }
  *(undefined8 *)(param_1 + 0x3f8) = *(undefined8 *)(param_2 + 0x28);
  if (*(long *)(*(long *)(param_2 + 0x30) + 0x50) != 0) {
    uStack_58 = 0;
    local_78 = 2;
    puStack_80 = PTR_DAT_04bdf0c0 + 0x10;
    local_90 = PTR_DAT_04bb2020 + 0x10;
    pcStack_68 = "ResourceUnit";
    local_88 = &DAT_0407ebb1;
    local_70 = local_90;
    local_60 = *(long *)(*(long *)(param_2 + 0x30) + 0x50);
    puVar11 = (undefined8 *)FUN_03f2dbac(param_1 + 0x38,&local_90,&puStack_80,0);
    if (((*PTR_DAT_04bb2868 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar10 != 0)) {
      *(undefined **)PTR_DAT_04bb2860 = PTR_DAT_04bb2870 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2868);
    }
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      uVar12 = (**(code **)*puVar11)(puVar11,PTR_DAT_04bb2860);
      if ((uVar12 & 1) == 0) {
        puVar11 = (undefined8 *)0x0;
      }
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
  }
  (**(code **)(*(long *)(param_1 + 0x360) + 0x18))(param_1 + 0x360);
  pbVar19 = *(byte **)(param_1 + 0x368);
  uVar15 = (uint)*pbVar19;
  if (*pbVar19 != 0) {
    uVar16 = 0xffffffff;
    pbVar17 = pbVar19;
    do {
      pbVar17 = pbVar17 + 1;
      uVar16 = crc32b(uVar16,uVar15,0x4c11db7);
      uVar15 = (uint)*pbVar17;
    } while (uVar15 != 0);
    uVar15 = ~uVar16;
  }
  *(byte **)(param_1 + 0x2c0) = pbVar19;
  *(byte **)(param_1 + 0x310) = pbVar19;
  *(uint *)(param_1 + 0x2b0) = uVar15;
  *(undefined8 *)(param_1 + 0x318) = 0;
  *(undefined4 *)(param_1 + 0x328) = 8;
  *(undefined8 *)(param_1 + 800) = 0;
  uVar2 = *(undefined4 *)(*(long *)(param_2 + 0x30) + 0x2c);
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined4 *)(param_1 + 0x338) = 0;
  *(undefined4 *)(param_1 + 0x32c) = uVar2;
  *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(*(long *)(param_2 + 0x30) + 0x38);
  plVar18 = *(long **)(*(long *)(param_2 + 0x30) + 0x40);
  *(undefined1 *)(param_1 + 0x354) = 0;
  *(long **)(param_1 + 0x348) = plVar18;
  if (((*PTR_DAT_04bd0bf0 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04bd0bf0), iVar10 != 0)) {
    *(undefined **)PTR_DAT_04bd0be8 = PTR_DAT_04bc3650 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd0bf0);
  }
  if ((plVar18 == (long *)0x0) ||
     (uVar12 = (**(code **)(*plVar18 + 0x10))(plVar18,PTR_DAT_04bd0be8), (uVar12 & 1) == 0)) {
    uVar15 = (uint)(*(long *)(*(long *)(param_2 + 0x30) + 0x50) != 0) << 5;
  }
  else {
    uVar15 = 0x20;
  }
  uVar3 = *(uint *)(param_1 + 0xc);
  uVar15 = uVar15 | (uint)(*(long *)(param_2 + 0x40) != 0) << 4;
  *(uint *)(param_1 + 0xc) = uVar15 | uVar3 & 0xffffffcf;
  uVar16 = (uint)*(byte *)(*(long *)(param_2 + 0x30) + 0x24) << 6;
  uVar6 = uVar15 | uVar3 & 0xffffff8f | uVar16;
  *(uint *)(param_1 + 0xc) = uVar6;
  bVar4 = *(byte *)(param_1 + 9) & 0xfe | *param_2;
  *(byte *)(param_1 + 9) = bVar4;
  bVar4 = bVar4 & 0xfd | param_2[1] << 1;
  *(byte *)(param_1 + 9) = bVar4;
  bVar5 = bVar4 & 0xfb | param_2[2] << 2;
  *(byte *)(param_1 + 9) = bVar5;
  bVar4 = bVar5 & 7 | (*(int *)(param_2 + 8) == 1) << 3;
  *(byte *)(param_1 + 9) = bVar5 & 0xf0 | bVar4;
  *(byte *)(param_1 + 9) = bVar5 & 0xe0 | bVar4 | (*(int *)(param_2 + 8) == 2) << 4;
  if ((param_2[3] == 0) || (param_2[4] != 0)) {
    uVar16 = uVar15 | uVar3 & 0xfffdff8f | uVar16;
  }
  else {
    uVar16 = uVar6 | 0x20000;
  }
  *(uint *)(param_1 + 0xc) = uVar16;
  uVar15 = (uint)*(byte *)(*(long *)(param_2 + 0x30) + 0x27) << 0x12;
  *(uint *)(param_1 + 0xc) = uVar16 & 0xfffbffff | uVar15;
  uVar15 = uVar16 & 0xfffbfffe | uVar15;
  lVar14 = *(long *)(param_2 + 0x28);
  *(uint *)(param_1 + 0xc) = uVar15 | lVar14 != 0;
  *(uint *)(param_1 + 0xc) = uVar15 & 0xfff7ffff | (uint)(lVar14 != 0) | (uint)param_2[4] << 0x13;
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(*(long *)(param_2 + 0x10) + 0x10) = param_1;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar20,0x10);
      if (bVar8) {
        *piVar20 = *piVar20 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffff7fff;
  }
  (**(code **)(*(long *)(param_1 + 200) + 0x20))((long *)(param_1 + 200),&puStack_80);
  (**(code **)(*(long *)(param_1 + 0x160) + 0x20))(param_1 + 0x160,&puStack_80);
  if ((*(byte *)(param_1 + 0xe) >> 3 & 1) != 0) {
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar20,0x10);
      if (bVar8) {
        *piVar20 = *piVar20 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffff7fff;
  }
  return 1;
}


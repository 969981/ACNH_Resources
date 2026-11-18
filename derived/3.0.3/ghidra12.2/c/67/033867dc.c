
/* WARNING: Removing unreachable block (ram,0x03386e50) */
/* WARNING: Removing unreachable block (ram,0x03386d18) */
/* WARNING: Removing unreachable block (ram,0x03386c80) */
/* WARNING: Removing unreachable block (ram,0x03386be8) */
/* WARNING: Removing unreachable block (ram,0x03386b50) */
/* WARNING: Removing unreachable block (ram,0x03386abc) */
/* WARNING: Removing unreachable block (ram,0x03386a24) */
/* WARNING: Removing unreachable block (ram,0x0338698c) */
/* WARNING: Removing unreachable block (ram,0x033868a0) */
/* WARNING: Removing unreachable block (ram,0x03386814) */
/* WARNING: Removing unreachable block (ram,0x03386940) */
/* WARNING: Removing unreachable block (ram,0x033869d8) */
/* WARNING: Removing unreachable block (ram,0x03386a70) */
/* WARNING: Removing unreachable block (ram,0x03386b04) */
/* WARNING: Removing unreachable block (ram,0x03386b9c) */
/* WARNING: Removing unreachable block (ram,0x03386c34) */
/* WARNING: Removing unreachable block (ram,0x03386ccc) */
/* WARNING: Removing unreachable block (ram,0x03386d6c) */
/* WARNING: Removing unreachable block (ram,0x03386db8) */
/* WARNING: Removing unreachable block (ram,0x03386eec) */

void FUN_033867dc(long param_1)

{
  undefined *puVar1;
  uint *puVar2;
  uint uVar3;
  short sVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  byte bVar9;
  undefined8 *puVar10;
  undefined *local_50;
  char *pcStack_48;
  byte local_24 [4];
  
  local_50 = (undefined *)((ulong)local_50 & 0xffffffff00000000);
  puVar10 = *(undefined8 **)(DAT_05739190 + 0x40);
  if (((*PTR_DAT_04bc6bb8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc6bb8), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bc6bb0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc6bb8);
  }
  if ((puVar10 != (undefined8 *)0x0) &&
     (uVar7 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bc6bb0), (uVar7 & 1) != 0)) {
    *(uint *)(puVar10 + 0x6e) = *(uint *)(puVar10 + 0x6e) & 0xfffffffe;
  }
  lVar8 = *(long *)PTR_DAT_04bc98b0;
  *(undefined8 *)(lVar8 + 8) = 0;
  *(undefined4 *)(lVar8 + 0x10) = 0;
  local_50._0_4_ = 3;
  lVar8 = *(long *)PTR_DAT_04bc98b8;
  *(undefined8 *)(lVar8 + 8) = 0;
  *(undefined4 *)(lVar8 + 0x10) = 0;
  lVar8 = *(long *)(DAT_05739190 + 0x58);
  if (lVar8 != 0) {
    bVar9 = *PTR_DAT_04bb32e0;
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    *(byte *)(lVar8 + 0x1f8) = bVar9;
    *(undefined1 *)(lVar8 + 0x165) = 1;
    if ((6 < *(uint *)(lVar8 + 0xa8) || (1 << (ulong)(*(uint *)(lVar8 + 0xa8) & 0x1f) & 0x58U) == 0)
       && (*(long *)(lVar8 + 0x98) != 0)) {
      FUN_0386b090();
    }
  }
  uVar7 = FUN_0180b3e0();
  if ((uVar7 & 1) != 0) {
    FUN_0345a710();
  }
  FUN_0252d11c(local_24);
  puVar5 = PTR_DAT_04bb49e0;
  if (*(long *)(param_1 + 0xd8) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0xd8) + 200) = 2;
    FUN_0386c560(*(undefined8 *)puVar5,*(undefined8 *)(param_1 + 0xd8));
    local_50._0_4_ = 0x12;
    lVar8 = *(long *)(DAT_05739190 + 0x170);
    if (lVar8 != 0) {
      bVar9 = local_24[0];
      if (7 < local_24[0]) {
        bVar9 = 0xff;
      }
      *(byte *)(lVar8 + 0x1f8) = bVar9;
      *(undefined1 *)(lVar8 + 0x165) = 1;
      FUN_0386b090(*(undefined8 *)(lVar8 + 0x98));
    }
    local_50._0_4_ = 0xe;
    lVar8 = *(long *)(DAT_05739190 + 0x150);
    if (lVar8 != 0) {
      bVar9 = local_24[0];
      if (7 < local_24[0]) {
        bVar9 = 0xff;
      }
      *(byte *)(lVar8 + 0x1f8) = bVar9;
      *(undefined1 *)(lVar8 + 0x165) = 1;
      FUN_0386b090(*(undefined8 *)(lVar8 + 0x98));
    }
    local_50._0_4_ = 0x14;
    lVar8 = *(long *)(DAT_05739190 + 0x180);
    if (lVar8 != 0) {
      bVar9 = local_24[0];
      if (7 < local_24[0]) {
        bVar9 = 0xff;
      }
      *(byte *)(lVar8 + 0x1f8) = bVar9;
      *(undefined1 *)(lVar8 + 0x165) = 1;
      FUN_0386b090(*(undefined8 *)(lVar8 + 0x98));
    }
    local_50._0_4_ = 0xf;
    lVar8 = *(long *)(DAT_05739190 + 0x158);
    if (lVar8 != 0) {
      bVar9 = local_24[0];
      if (7 < local_24[0]) {
        bVar9 = 0xff;
      }
      *(byte *)(lVar8 + 0x1f8) = bVar9;
      *(undefined1 *)(lVar8 + 0x165) = 1;
      FUN_0386b090(*(undefined8 *)(lVar8 + 0x98));
    }
    local_50._0_4_ = 0xc;
    lVar8 = *(long *)(DAT_05739190 + 0x140);
    if (lVar8 != 0) {
      bVar9 = local_24[0];
      if (7 < local_24[0]) {
        bVar9 = 0xff;
      }
      *(byte *)(lVar8 + 0x1f8) = bVar9;
      *(undefined1 *)(lVar8 + 0x165) = 1;
      FUN_0386b090(*(undefined8 *)(lVar8 + 0x98));
    }
    local_50._0_4_ = 0x13;
    lVar8 = *(long *)(DAT_05739190 + 0x178);
    if (lVar8 != 0) {
      bVar9 = local_24[0];
      if (7 < local_24[0]) {
        bVar9 = 0xff;
      }
      *(byte *)(lVar8 + 0x1f8) = bVar9;
      *(undefined1 *)(lVar8 + 0x165) = 1;
      FUN_0386b090(*(undefined8 *)(lVar8 + 0x98));
    }
    local_50._0_4_ = 5;
    lVar8 = *(long *)(DAT_05739190 + 0x108);
    if (lVar8 != 0) {
      bVar9 = local_24[0];
      if (7 < local_24[0]) {
        bVar9 = 0xff;
      }
      *(byte *)(lVar8 + 0x1f8) = bVar9;
      *(undefined1 *)(lVar8 + 0x165) = 1;
      FUN_0386b090(*(undefined8 *)(lVar8 + 0x98));
    }
    local_50._0_4_ = 10;
    lVar8 = *(long *)(DAT_05739190 + 0x130);
    if (lVar8 != 0) {
      bVar9 = local_24[0];
      if (7 < local_24[0]) {
        bVar9 = 0xff;
      }
      *(byte *)(lVar8 + 0x1f8) = bVar9;
      *(undefined1 *)(lVar8 + 0x165) = 1;
      FUN_0386b090(*(undefined8 *)(lVar8 + 0x98));
    }
    local_50._0_4_ = 8;
    lVar8 = *(long *)(DAT_05739190 + 0x120);
    if (lVar8 != 0) {
      bVar9 = local_24[0];
      if (7 < local_24[0]) {
        bVar9 = 0xff;
      }
      *(byte *)(lVar8 + 0x1f8) = bVar9;
      *(undefined1 *)(lVar8 + 0x165) = 1;
      FUN_0386b090(*(undefined8 *)(lVar8 + 0x98));
    }
    local_50._0_4_ = 3;
    lVar8 = *(long *)(DAT_05739190 + 0xf8);
    if (lVar8 != 0) {
      bVar9 = local_24[0];
      if (7 < local_24[0]) {
        bVar9 = 0xff;
      }
      *(byte *)(lVar8 + 0x1f8) = bVar9;
      *(undefined1 *)(lVar8 + 0x165) = 1;
      FUN_0386b090(*(undefined8 *)(lVar8 + 0x98));
    }
    local_50._0_4_ = 0xd;
    lVar8 = *(long *)(DAT_05739190 + 0x148);
    if (lVar8 != 0) {
      bVar9 = local_24[0];
      if (7 < local_24[0]) {
        bVar9 = 0xff;
      }
      *(byte *)(lVar8 + 0x1f8) = bVar9;
      *(undefined1 *)(lVar8 + 0x165) = 1;
      FUN_0386b090(*(undefined8 *)(lVar8 + 0x98));
    }
    local_50._0_4_ = 0xb;
    lVar8 = *(long *)(DAT_05739190 + 0x138);
    if (lVar8 != 0) {
      bVar9 = local_24[0];
      if (7 < local_24[0]) {
        bVar9 = 0xff;
      }
      *(byte *)(lVar8 + 0x1f8) = bVar9;
      *(undefined1 *)(lVar8 + 0x165) = 1;
      FUN_0386b090(*(undefined8 *)(lVar8 + 0x98));
    }
    local_50._0_4_ = 0x16;
    lVar8 = *(long *)(DAT_05739190 + 400);
    if (lVar8 != 0) {
      bVar9 = local_24[0];
      if (7 < local_24[0]) {
        bVar9 = 0xff;
      }
      *(byte *)(lVar8 + 0x1f8) = bVar9;
      *(undefined1 *)(lVar8 + 0x165) = 1;
      FUN_0386b090(*(undefined8 *)(lVar8 + 0x98));
    }
    local_50._0_4_ = 2;
    lVar8 = *(long *)(DAT_05739190 + 0xf0);
    if (lVar8 != 0) {
      bVar9 = local_24[0];
      if (7 < local_24[0]) {
        bVar9 = 0xff;
      }
      *(byte *)(lVar8 + 0x1f8) = bVar9;
      *(undefined1 *)(lVar8 + 0x165) = 1;
      FUN_0386b090(*(undefined8 *)(lVar8 + 0x98));
    }
    if (*(char *)(param_1 + 0x50d) != '\0') {
      local_50._0_4_ = 7;
      lVar8 = *(long *)(DAT_05739190 + 0x118);
      if (lVar8 != 0) {
        bVar9 = local_24[0];
        if (7 < local_24[0]) {
          bVar9 = 0xff;
        }
        *(byte *)(lVar8 + 0x1f8) = bVar9;
        *(undefined1 *)(lVar8 + 0x165) = 1;
        FUN_0386b090(*(undefined8 *)(lVar8 + 0x98));
      }
    }
    local_50._0_4_ = 9;
    lVar8 = *(long *)(DAT_05739190 + 0x128);
    if (lVar8 != 0) {
      bVar9 = local_24[0];
      if (7 < local_24[0]) {
        bVar9 = 0xff;
      }
      *(byte *)(lVar8 + 0x1f8) = bVar9;
      *(undefined1 *)(lVar8 + 0x165) = 1;
      FUN_0386b090(*(undefined8 *)(lVar8 + 0x98));
    }
  }
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 != -1) {
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 5 & 1) != 0) {
      return;
    }
  }
  local_50 = (undefined *)CONCAT44(local_50._4_4_,0x17);
  lVar8 = *(long *)(DAT_05739190 + 0x198);
  if (lVar8 != 0) {
    bVar9 = local_24[0];
    if (7 < local_24[0]) {
      bVar9 = 0xff;
    }
    *(byte *)(lVar8 + 0x1f8) = bVar9;
    *(undefined1 *)(lVar8 + 0x165) = 1;
    FUN_0386b090(*(undefined8 *)(lVar8 + 0x98));
  }
  uVar3 = *(uint *)(*(long *)(param_1 + 0xb8) + 0xa8);
  if (((6 < uVar3) || ((1 << (ulong)(uVar3 & 0x1f) & 0x58U) == 0)) &&
     (*(long *)(*(long *)(param_1 + 0xb8) + 0x98) != 0)) {
    FUN_0386b090();
  }
  FUN_034599d0();
  FUN_0345a550();
  lVar8 = *(long *)PTR_DAT_04bc5c78;
  if (lVar8 != 0) {
    local_50 = (undefined *)((ulong)local_50 & 0xffffffff00000000);
    *(uint *)(lVar8 + 0x1e98) = *(uint *)(lVar8 + 0x1e98) & 0xfffffffe;
  }
  local_50 = (undefined *)CONCAT44(local_50._4_4_,0x12);
  puVar10 = *(undefined8 **)(DAT_05739190 + 0x170);
  if (((*PTR_DAT_04bc7360 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc7360), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bc7358 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7360);
  }
  if ((puVar10 != (undefined8 *)0x0) &&
     (uVar7 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bc7358), puVar5 = PTR_DAT_04bb2020,
     (uVar7 & 1) != 0)) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = "EnterSceneByMydesignShowcaseApp";
    local_50 = puVar1;
    iVar6 = FUN_02753180(local_24,&local_50);
    if (iVar6 == 0) {
      pcStack_48 = "WHEREAREN_EnterSceneByResortStudyApp";
      local_50 = puVar1;
      iVar6 = FUN_02753180(local_24,&local_50);
      if (iVar6 == 0) {
        local_50 = puVar5 + 0x10;
        pcStack_48 = "WHEREAREN_ResortPlannerFromSmartphone";
        iVar6 = FUN_02753180(local_24,&local_50);
        if (iVar6 != 0) {
          FUN_02ef8e04(puVar10,local_24);
        }
        goto LAB_03387058;
      }
    }
    if ((*(int *)(puVar10 + 0x42) == -1) && (7 < *(byte *)((long)puVar10 + 0x214))) {
      puVar10 = puVar10 + 0x42;
    }
    else if ((*(int *)((long)puVar10 + 0x224) == -1) && (7 < *(byte *)(puVar10 + 0x45))) {
      puVar10 = (undefined8 *)((long)puVar10 + 0x224);
    }
    else if ((*(int *)(puVar10 + 0x47) == -1) && (7 < *(byte *)((long)puVar10 + 0x23c))) {
      puVar10 = puVar10 + 0x47;
    }
    else {
      if ((*(int *)((long)puVar10 + 0x24c) != -1) || (*(byte *)(puVar10 + 0x4a) < 8))
      goto LAB_03387058;
      puVar10 = (undefined8 *)((long)puVar10 + 0x24c);
    }
    if (7 < local_24[0]) {
      local_24[0] = 0xff;
    }
    *(byte *)((long)puVar10 + 4) = local_24[0];
    *(undefined4 *)puVar10 = 10;
    *(undefined4 *)((long)puVar10 + 0xc) = 1;
  }
LAB_03387058:
  puVar5 = PTR_DAT_04bb32e0;
  lVar8 = FUN_033d0598(PTR_DAT_04bb32e0);
  *(undefined1 *)(lVar8 + 0x844) = 0;
  lVar8 = FUN_033d0598(puVar5);
  *(undefined1 *)(lVar8 + 0x940) = 0;
  return;
}


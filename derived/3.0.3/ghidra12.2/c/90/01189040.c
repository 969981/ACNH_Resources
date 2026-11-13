
/* WARNING: Removing unreachable block (ram,0x01189564) */
/* WARNING: Removing unreachable block (ram,0x011894c0) */
/* WARNING: Removing unreachable block (ram,0x011893e0) */
/* WARNING: Removing unreachable block (ram,0x01189340) */
/* WARNING: Removing unreachable block (ram,0x01189108) */
/* WARNING: Removing unreachable block (ram,0x011892f4) */
/* WARNING: Removing unreachable block (ram,0x011891c0) */
/* WARNING: Removing unreachable block (ram,0x0118942c) */
/* WARNING: Removing unreachable block (ram,0x0118950c) */
/* WARNING: Removing unreachable block (ram,0x01189598) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01189040(undefined8 param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  byte *pbVar10;
  byte bVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined4 local_24;
  
  _DAT_05405f5c = 0xfffe;
  FUN_0277d4ac();
  _DAT_05405fc0 = 0;
  DAT_05405fb8 = 0;
  _DAT_05405fc8 = 0;
  DAT_05405fb0 = 0;
  _DAT_05405fa8 = 0;
  ram0x05405fa0 = 0xfffe;
  FUN_0277d4ac(0x5405fa0);
  _DAT_05405fa8 = 0;
  DAT_05453f0c = 0;
  DAT_05405fb0 = 0;
  DAT_05453f1c = 0;
  DAT_05405fb8 = 0;
  _DAT_05405fc0 = 0;
  _DAT_05405fc8 = 0;
  FUN_0219f860(&DAT_053fe348);
  *(undefined1 *)(*(long *)PTR_DAT_04bb3240 + 0xdf80) = 0;
  puVar4 = PTR_DAT_04bb2230;
  local_24 = 8;
  puVar15 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x80);
  if (((*PTR_DAT_04bc6930 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bc6930), iVar8 != 0))
  {
    *(undefined **)PTR_DAT_04bc6928 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc6930);
  }
  if ((puVar15 != (undefined8 *)0x0) &&
     (uVar9 = (**(code **)*puVar15)(puVar15,PTR_DAT_04bc6928), (uVar9 & 1) != 0)) {
    FUN_02e1dad4(puVar15,param_2 & 1);
  }
  puVar6 = PTR_DAT_04bc73c8;
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 4 & 1) != 0) {
      local_24 = 0xd;
      puVar15 = *(undefined8 **)(*(long *)puVar4 + 0xa8);
      if (((*PTR_DAT_04bc73c8 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04bc73c8), iVar8 != 0)) {
        *(undefined **)PTR_DAT_04bc73c0 = PTR_DAT_04bb7c30 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc73c8);
      }
      if ((puVar15 == (undefined8 *)0x0) ||
         (uVar9 = (**(code **)*puVar15)(puVar15,PTR_DAT_04bc73c0), (uVar9 & 1) == 0))
      goto LAB_011893c8;
      lVar12 = *(long *)PTR_DAT_04bb39b0;
      pbVar10 = PTR_DAT_04bb32e0;
      if (lVar12 == 0) {
LAB_01189244:
        if (*pbVar10 < 8) goto LAB_011892bc;
LAB_01189250:
        if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_011892b4:
          pbVar10 = PTR_DAT_04bb5038;
          goto LAB_011892bc;
        }
        lVar12 = **(long **)PTR_DAT_04bb27d0;
        bVar11 = *(byte *)(lVar12 + 0x473);
        pbVar10 = PTR_DAT_04bb5038;
        if ((long)(char)bVar11 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar12 + 0x48) + ((long)(char)bVar11 & 0xffffffffU) * 0x20;
          if (7 < bVar11) {
            puVar1 = (uint *)(lVar12 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar10 = (byte *)(lVar12 + 0x471);
          }
        }
        bVar11 = *pbVar10;
        bVar7 = 7 < bVar11;
        if (bVar7) {
          bVar11 = 0xff;
        }
        local_24 = CONCAT31(local_24._1_3_,bVar11);
        if (bVar7) goto LAB_011892b4;
      }
      else {
        if (*(int *)(lVar12 + 0x15c) != 0) {
          pbVar10 = (byte *)(lVar12 + 0x158);
        }
        if (7 < *pbVar10) {
          if ((*(int *)(lVar12 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            pbVar10 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
            goto LAB_01189244;
          }
          goto LAB_01189250;
        }
LAB_011892bc:
        bVar11 = *pbVar10;
        if (7 < bVar11) {
          bVar11 = 0xff;
        }
        local_24 = CONCAT31(local_24._1_3_,bVar11);
      }
      FUN_02f07254(&local_24);
      goto LAB_011893c8;
    }
  }
  local_24 = 0xd;
  puVar15 = *(undefined8 **)(*(long *)puVar4 + 0xa8);
  if (((*PTR_DAT_04bc73c8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bc73c8), iVar8 != 0))
  {
    *(undefined **)PTR_DAT_04bc73c0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc73c8);
  }
  puVar5 = PTR_DAT_04bc73c0;
  if ((puVar15 != (undefined8 *)0x0) &&
     (uVar9 = (**(code **)*puVar15)(puVar15,PTR_DAT_04bc73c0), (uVar9 & 1) != 0)) {
    local_24 = 0xd;
    puVar15 = *(undefined8 **)(*(long *)puVar4 + 0xa8);
    if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bc73c8), iVar8 != 0)) {
      *(undefined **)puVar5 = PTR_DAT_04bb7c30 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc73c8);
    }
    if ((puVar15 != (undefined8 *)0x0) &&
       (uVar9 = (**(code **)*puVar15)(puVar15,PTR_DAT_04bc73c0), (uVar9 & 1) != 0)) {
      lVar12 = puVar15[0x51];
      if ((*(uint *)(lVar12 + 0xa8) < 7) &&
         (((((1 << (ulong)(*(uint *)(lVar12 + 0xa8) & 0x1f) & 0x58U) != 0 &&
            (uVar2 = *(uint *)(*(long *)(lVar12 + 0x210) + 0xa8), uVar2 < 7)) &&
           ((1 << (ulong)(uVar2 & 0x1f) & 0x58U) != 0)) && (*(int *)(lVar12 + 0x23c) != 7)))) {
        *(undefined4 *)(lVar12 + 0x23c) = 2;
      }
    }
  }
LAB_011893c8:
  local_24 = 0xd;
  puVar15 = *(undefined8 **)(*(long *)puVar4 + 0xa8);
  if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bc73c8), iVar8 != 0)) {
    *(undefined **)PTR_DAT_04bc73c0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc73c8);
  }
  puVar5 = PTR_DAT_04bc73c0;
  if ((puVar15 != (undefined8 *)0x0) &&
     (uVar9 = (**(code **)*puVar15)(puVar15,PTR_DAT_04bc73c0), (uVar9 & 1) != 0)) {
    local_24 = 0xd;
    puVar15 = *(undefined8 **)(*(long *)puVar4 + 0xa8);
    if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bc73c8), iVar8 != 0)) {
      *(undefined **)puVar5 = PTR_DAT_04bb7c30 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc73c8);
    }
    if ((puVar15 != (undefined8 *)0x0) &&
       (uVar9 = (**(code **)*puVar15)(puVar15,PTR_DAT_04bc73c0), (uVar9 & 1) != 0)) {
      uVar2 = *(uint *)(*(long *)(puVar15[0x51] + 0x218) + 0xa8);
      if ((uVar2 < 7) && ((1 << (ulong)(uVar2 & 0x1f) & 0x58U) != 0)) {
        *(undefined4 *)(puVar15[0x51] + 0x23c) = 4;
      }
    }
  }
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != 0x3ee08254) {
    local_24 = 0xd;
    puVar15 = *(undefined8 **)(*(long *)puVar4 + 0xa8);
    if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bc73c8), iVar8 != 0)) {
      *(undefined **)PTR_DAT_04bc73c0 = PTR_DAT_04bb7c30 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc73c8);
    }
    puVar5 = PTR_DAT_04bc73c0;
    if ((puVar15 != (undefined8 *)0x0) &&
       (uVar9 = (**(code **)*puVar15)(puVar15,PTR_DAT_04bc73c0), (uVar9 & 1) != 0)) {
      local_24 = 0xd;
      puVar15 = *(undefined8 **)(*(long *)puVar4 + 0xa8);
      if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bc73c8), iVar8 != 0)) {
        *(undefined **)puVar5 = PTR_DAT_04bb7c30 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc73c8);
      }
      if ((puVar15 != (undefined8 *)0x0) &&
         (uVar9 = (**(code **)*puVar15)(puVar15,PTR_DAT_04bc73c0), (uVar9 & 1) != 0)) {
        FUN_02c0ed28(puVar15[0x51],0);
      }
    }
  }
  lVar12 = *(long *)puVar4;
  lVar13 = *(long *)(lVar12 + 0xa0);
  if (lVar13 != 0) {
    *(undefined4 *)(lVar13 + 0x220) = 2;
    *(undefined1 *)(lVar13 + 0x224) = 1;
  }
  local_24 = 1;
  plVar14 = *(long **)(lVar12 + 0xe8);
  if ((plVar14 != (long *)0x0) &&
     (uVar9 = (**(code **)(*plVar14 + 0xf8))(plVar14), (uVar9 & 1) != 0)) {
    (**(code **)(*plVar14 + 0xb0))(plVar14);
  }
  lVar12 = *(long *)PTR_DAT_04bb7ff8;
  if ((lVar12 != 0) && (*(char *)(lVar12 + 0x431) != '\0')) {
    FUN_02ef97bc(lVar12,lVar12 + 0x430,0xffffffff);
    *(undefined1 *)(lVar12 + 0x431) = 0;
  }
  FUN_0252d11c(&local_24);
  if ((byte)local_24 < 8) {
    lVar12 = FUN_033d0598(PTR_DAT_04bb32e0);
    *(undefined1 *)(lVar12 + 0x3a0) = 0;
  }
  lVar12 = *(long *)PTR_DAT_04bb27f0;
  if (lVar12 != 0) {
    *(uint *)(lVar12 + 0x43c) = *(uint *)(lVar12 + 0x43c) & 0xfffffffb;
  }
  return;
}


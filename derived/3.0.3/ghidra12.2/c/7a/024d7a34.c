
undefined8 FUN_024d7a34(long param_1)

{
  uint *puVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined *local_40;
  char *pcStack_38;
  
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_054f0960);
      puVar9 = &DAT_054f0958;
      if (iVar6 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar9 = &DAT_054f0958;
    }
  }
  else {
    puVar9 = (undefined8 *)(*(long *)PTR_DAT_04bb4718 + 0x204);
    if ((ulong)*(byte *)(param_1 + 0x1ee8) < 8) {
      puVar9 = puVar9 + *(byte *)(param_1 + 0x1ee8);
    }
  }
  puVar5 = PTR_DAT_04bc3a48;
  puVar4 = PTR_DAT_04bb27f8;
  puVar3 = PTR_DAT_04bb2020;
  if ((((*(uint *)((long)puVar9 + 4) >> 0x11 & 1) == 0) &&
      ((((lVar7 = *(long *)PTR_DAT_04bb27f8, lVar7 == 0 || (*(int *)(lVar7 + 0x18) != 1)) ||
        (*(int *)(lVar7 + 0x14) < 7)) || (8 < *(int *)(lVar7 + 0x14))))) &&
     ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0 || ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)))
     ) {
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "JuneBrideCeremonyDemoAfterNow";
    iVar6 = FUN_02743000(&local_40);
    if (iVar6 == 0) {
      uVar2 = *(ushort *)PTR_DAT_04bb6298;
      uVar8 = (ulong)(short)uVar2;
      if (uVar8 != 0xffffffffffffffff) {
        puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar2 * 8);
        if (0xff < (uint)(int)(short)uVar2) {
          puVar1 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar1 >> 0x19 & 1) != 0) {
          lVar7 = *(long *)puVar4;
          if (lVar7 == 0) {
            return 1;
          }
          if ((*puVar1 >> 0x1a & 1) == 0) {
            return 1;
          }
          if (*(int *)(lVar7 + 0x14) == 0) {
            return 1;
          }
          if ((*(ushort **)puVar5 != (ushort *)0x0) && ((**(ushort **)puVar5 & 1) != 0)) {
            return 1;
          }
          if (((*(int *)(lVar7 + 0x10) == 1) && (0 < *(int *)(lVar7 + 0x14))) &&
             (*(int *)(lVar7 + 0x14) < 4)) {
            return 1;
          }
        }
        if (*(long *)PTR_DAT_04bb5ce0 != 0) {
          puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar8 & 0xffffffff) * 8);
          if (0xff < uVar2) {
            puVar1 = (uint *)PTR_DAT_04bc39f8;
          }
          if ((*puVar1 >> 0x19 & 1) == 0) {
            puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar8 & 0xffffffff) * 8);
            if (0xff < uVar2) {
              puVar1 = (uint *)PTR_DAT_04bc39f8;
            }
            if ((*puVar1 >> 7 & 1) != 0) {
              local_40 = puVar3 + 0x10;
              pcStack_38 = "NpcInteriorCoordinate";
              iVar6 = FUN_02743000(&local_40);
              if (iVar6 == 0) {
                return 1;
              }
            }
          }
        }
      }
      return 0;
    }
  }
  return 1;
}


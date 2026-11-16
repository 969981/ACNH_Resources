
undefined8 FUN_025472e0(byte *param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long lVar9;
  short sVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  long local_58;
  long *local_50;
  char local_48;
  char local_46;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar8 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar8 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_28 = *puVar8;
  local_24 = param_2;
  FUN_0071cb58(&local_50,&local_28,&local_24,0);
  plVar3 = local_50;
  puVar2 = PTR_DAT_04bb3778;
  if (local_50 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar7 = (**(code **)(*plVar3 + 0x20))(plVar3,PTR_DAT_04bb3770);
    if ((uVar7 & 1) == 0) {
      local_46 = '\0';
    }
  }
  plVar3 = local_50;
  if (local_50 == (long *)0x0) {
    return 0;
  }
  if (local_48 == '\0') {
    return 0;
  }
  if (local_46 == '\0') {
    return 0;
  }
  if (((*puVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar6 != 0)) {
    *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3778);
  }
  uVar7 = (**(code **)(*plVar3 + 0x20))(plVar3,PTR_DAT_04bb3770);
  if ((uVar7 & 1) != 0) {
    puVar12 = (undefined8 *)local_50[0xc];
    if (puVar12 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(&DAT_052461c0);
        puVar12 = &DAT_05240280;
        if (iVar6 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar12 = &DAT_05240280;
      }
    }
    puVar2 = PTR_DAT_04bb43c0;
    local_68 = (undefined *)CONCAT44(local_68._4_4_,4);
    if ((*(uint *)((long)puVar12 + 0x15f4) >> 4 & 1) != 0) {
      return 0;
    }
    lVar14 = *(long *)PTR_DAT_04bb43c0;
    lVar9 = *(long *)(local_50[0x53] + 0x1480) +
            ((ulong)*(uint *)(*(long *)(local_50[0x53] + 0x1480) + 0x10) & 1) * 0x20;
    puVar8 = (undefined4 *)(lVar9 + 0x14);
    uVar5 = FUN_0277d6c4(puVar8);
    lVar13 = *(long *)puVar2;
    if (lVar13 == 0) {
      return 0;
    }
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if (*(uint *)(lVar14 + 0x1d8) <= uVar5) {
      return 0;
    }
    if (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) == 0) {
      return 0;
    }
    local_68 = PTR_DAT_04bc0510 + 0x10;
    local_60 = *puVar8;
    local_5c = *(undefined4 *)(lVar9 + 0x18);
    local_58 = 0;
    uVar5 = FUN_0277d6c4(&local_60);
    if (*(long *)puVar2 != 0) {
      lVar9 = *(long *)(lVar13 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        lVar9 = *(long *)PTR_DAT_04bc0428;
        uVar5 = FUN_0277d6c4(puVar8);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if (uVar5 < *(uint *)(lVar9 + 0x1d8)) {
          lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8);
          if (lVar9 != 0) {
            local_58 = lVar9;
          }
        }
      }
    }
    iVar6 = FUN_01ad78cc(&local_68);
    lVar9 = *(long *)PTR_DAT_04bb27f8;
    if ((lVar9 == 0) || ((*(byte *)(lVar9 + 0x1a71) >> 1 & 1) == 0)) {
      if ((DAT_054f5738 == 0) || (7 < (ulong)*param_1)) {
        sVar10 = -1;
      }
      else {
        sVar10 = *(short *)(DAT_054f5738 + (ulong)*param_1 * 2 + 0xe90);
      }
      bVar4 = DAT_055c1b60 == &DAT_055c1b58;
      puVar12 = DAT_055c1b60 + -8;
      if ((sVar10 != 0) && (puVar11 = DAT_055c1b60, puVar12 != &DAT_055c1b18)) {
        do {
          puVar11 = (undefined8 *)puVar11[1];
          sVar10 = sVar10 + -1;
          bVar4 = puVar11 == &DAT_055c1b58;
        } while (!bVar4 && sVar10 != 0);
        puVar12 = puVar11 + -8;
      }
      puVar11 = &DAT_055c04a0;
      if (!bVar4) {
        puVar11 = puVar12;
      }
      iVar1 = *(int *)(puVar11 + 7);
      if ((iVar1 != -0x21ba1d3a &&
          (((((((((DAT_05ac0a90 == iVar1 || DAT_05ac0aa0 == iVar1) || DAT_05ac0ab0 == iVar1) ||
                DAT_05ac0ac0 == iVar1) || DAT_05ac0ad0 == iVar1) || DAT_05ac0ae0 == iVar1) ||
             DAT_05ac0af0 == iVar1) || DAT_05ac0b00 == iVar1) || DAT_05ac0b10 == iVar1) ||
          DAT_05ac0b20 == iVar1)) && iVar6 == 0x12) {
        return 1;
      }
    }
    if ((DAT_054f5738 == 0) || (7 < (ulong)*param_1)) {
      sVar10 = -1;
    }
    else {
      sVar10 = *(short *)(DAT_054f5738 + (ulong)*param_1 * 2 + 0xe90);
    }
    bVar4 = DAT_055c1b60 == &DAT_055c1b58;
    puVar12 = DAT_055c1b60 + -8;
    if ((sVar10 != 0) && (puVar11 = DAT_055c1b60, puVar12 != &DAT_055c1b18)) {
      do {
        puVar11 = (undefined8 *)puVar11[1];
        sVar10 = sVar10 + -1;
        bVar4 = puVar11 == &DAT_055c1b58;
      } while (!bVar4 && sVar10 != 0);
      puVar12 = puVar11 + -8;
    }
    puVar11 = &DAT_055c04a0;
    if (!bVar4) {
      puVar11 = puVar12;
    }
    if ((*(int *)(puVar11 + 7) == -0x8fb780d && iVar6 == 0x12) ||
       (((lVar9 != 0 && ((*(byte *)(lVar9 + 0x1a71) >> 1 & 1) != 0)) && (iVar6 == 0x4c)))) {
      return 1;
    }
    iVar6 = FUN_01ad9fd0(&local_68);
    if ((iVar6 != 0x25) || (uVar7 = FUN_016e6984(), (uVar7 & 1) == 0)) {
      FUN_01ad5d04(&local_68,puVar8);
      iVar6 = FUN_01ad78cc(&local_68);
      if ((iVar6 != 0x12) && (uVar7 = FUN_0243c7e8(param_1), (uVar7 & 1) != 0)) {
        return 1;
      }
    }
  }
  return 0;
}



void FUN_0236eeb0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  char cVar5;
  byte bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined1 local_88;
  byte bStack_87;
  undefined2 uStack_86;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined *local_70;
  char *pcStack_68;
  byte local_48 [4];
  undefined4 local_44;
  
  puVar3 = PTR_DAT_04bb2020;
  if (*(int *)(param_1 + 0x178) == 0) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_88 = SUB81(puVar1,0);
    bStack_87 = (byte)((ulong)puVar1 >> 8);
    uStack_86 = (undefined2)((ulong)puVar1 >> 0x10);
    uStack_84 = (undefined4)((ulong)puVar1 >> 0x20);
    uStack_80 = 0x40928aa;
    local_7c = 0;
    lVar2 = param_1 + 0x1ee8;
    iVar9 = FUN_0274bce0(lVar2,&local_88);
    bVar6 = *(byte *)(param_1 + 0x1ee8);
    bVar7 = iVar9 == 1;
    if (bVar6 < 8) {
      bStack_87 = bVar6;
      uVar8 = FUN_02582d8c(lVar2,1);
      if ((7 < uVar8) ||
         (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar8 * 0x13f0 + 0x13d4) == '\0'))
      goto LAB_0236efc0;
      local_88 = *(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar8 * 0x13f0 + 0x13d6) != '\0';
    }
    else {
      bStack_87 = 0xff;
      bVar6 = bStack_87;
LAB_0236efc0:
      local_88 = false;
    }
    local_7c = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x280);
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
    uStack_84 = (undefined4)uVar11;
    uStack_80 = (undefined4)((ulong)uVar11 >> 0x20);
    local_78 = bVar7;
    if ((bool)local_88) {
      local_48[0] = bVar6;
      if (iVar9 == 1) {
        local_70 = puVar3 + 0x10;
        pcStack_68 = "BeStungbyWasp";
        FUN_0279a9f0((ulong)&local_88 | 1,&local_70,1);
        local_48[0] = bStack_87;
      }
      local_70 = puVar3 + 0x10;
      pcStack_68 = "BittenBeeCount";
      if (7 < local_48[0]) {
        local_48[0] = 0xff;
      }
      local_44 = FUN_02582fe0(local_48);
      FUN_021294b0(&local_70,1,&local_44);
    }
    if (*(int *)(param_1 + 0x178) == 0) {
      if ((*(uint *)(param_1 + 0x1da8) & 0xfffffffd) == 4) {
        puVar12 = *(undefined8 **)(param_1 + 0x1dc0);
        *(undefined4 *)(param_1 + 0x1da8) = 0;
        *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xfffffffd;
        if (puVar12 != &DAT_0407ebb1) {
          iVar9 = 0;
          if (*(int *)(param_1 + 0x1dc8) < 1) {
            iVar9 = *(int *)(param_1 + 0x1dc8) + -1;
          }
          memset(puVar12,0,(long)iVar9);
          *(undefined1 *)((long)puVar12 + (long)iVar9) = 0;
        }
        puVar12 = *(undefined8 **)(param_1 + 0x1e18);
        if (puVar12 != &DAT_0407ebb1) {
          iVar9 = 0;
          if (*(int *)(param_1 + 0x1e20) < 1) {
            iVar9 = *(int *)(param_1 + 0x1e20) + -1;
          }
          memset(puVar12,0,(long)iVar9);
          *(undefined1 *)((long)puVar12 + (long)iVar9) = 0;
        }
        *(undefined8 *)(param_1 + 0x1e68) = 0;
        *(undefined8 *)(param_1 + 0x1e78) = 0;
        *(undefined2 *)(param_1 + 0x1e70) = 0xff;
      }
      *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xfffffffb;
    }
    uVar4 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x2b4);
    *(bool *)(param_1 + 0xc1c) = bVar7;
    *(undefined4 *)(param_1 + 0xc18) = uVar4;
    FUN_0232e2f0(param_1);
    puVar1 = puVar3 + 0x10;
    local_88 = SUB81(puVar1,0);
    bStack_87 = (byte)((ulong)puVar1 >> 8);
    uStack_86 = (undefined2)((ulong)puVar1 >> 0x10);
    uStack_84 = (undefined4)((ulong)puVar1 >> 0x20);
    uStack_80 = 0x40928aa;
    local_7c = 0;
    FUN_0274bfe8(lVar2,&local_88,1);
    cVar5 = *(char *)(param_1 + 0xc1c);
  }
  else {
    cVar5 = *(char *)(param_1 + 0xc1c);
  }
  if (cVar5 != '\0') {
    puVar12 = *(undefined8 **)(param_1 + 0x60);
    if (puVar12 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(&DAT_052461c0);
        puVar12 = &DAT_05240280;
        if (iVar9 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar12 = &DAT_05240280;
      }
    }
    uStack_80 = 0x4072ca1;
    goto LAB_0236f1a4;
  }
  plVar13 = *(long **)(param_1 + 0x60);
  if (plVar13 == (long *)0x0) {
LAB_0236f184:
    if ((DAT_052461c0 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(&DAT_052461c0);
      puVar12 = &DAT_05240280;
      if (iVar9 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar12 = &DAT_05240280;
    }
  }
  else {
    if (((*PTR_DAT_04bb37a0 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb37a0), iVar9 != 0)) {
      *(undefined **)PTR_DAT_04bb3798 = PTR_DAT_04bb37a8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37a0);
    }
    uVar10 = (**(code **)(*plVar13 + 0x10))(plVar13,PTR_DAT_04bb3798);
    if ((uVar10 & 1) != 0) {
      FUN_0234bdd4(plVar13,*(undefined1 *)((long)plVar13 + 0xc1aa));
    }
    puVar12 = *(undefined8 **)(param_1 + 0x60);
    if (puVar12 == (undefined8 *)0x0) goto LAB_0236f184;
  }
  uStack_80 = 0x406da7a;
LAB_0236f1a4:
  puVar3 = puVar3 + 0x10;
  local_88 = SUB81(puVar3,0);
  bStack_87 = (byte)((ulong)puVar3 >> 8);
  uStack_86 = (undefined2)((ulong)puVar3 >> 0x10);
  uStack_84 = (undefined4)((ulong)puVar3 >> 0x20);
  local_7c = 0;
  FUN_017081d0(puVar12,&local_88,6,1,0);
  return;
}


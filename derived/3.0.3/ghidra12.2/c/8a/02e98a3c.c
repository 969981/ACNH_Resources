
void FUN_02e98a3c(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  short sVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  ulong uVar12;
  undefined *puVar13;
  long lVar14;
  char *pcVar15;
  undefined8 *puVar16;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  byte local_b4;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined *local_a0;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined4 local_64;
  undefined2 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  
  puVar10 = PTR_DAT_04bb5ce0;
  puVar2 = (undefined4 *)PTR_DAT_04bb37e0;
  if (*(long *)PTR_DAT_04bb5ce0 != 0) {
    puVar2 = (undefined4 *)(*(long *)PTR_DAT_04bb5ce0 + 0xe70);
  }
  local_58 = *puVar2;
  uStack_54 = puVar2[1];
  uVar12 = FUN_0277d7b4(&local_58);
  if ((uVar12 & 1) == 0) {
    local_c8 = 0xfffe;
    FUN_0277d4ac(&local_c8);
    local_c0 = 0xfffe;
    FUN_0277d4ac(&local_c0);
    local_b0 = 0;
    local_a8 = 0;
    local_b4 = 0xff;
    local_a0 = PTR_DAT_04bbba70 + 0x10;
    local_80 = 0;
    uStack_78 = 0xfffe;
    FUN_0277d4ac(&uStack_78);
    local_70 = 0xfffe;
    FUN_0277d4ac(&local_70);
    puVar8 = PTR_DAT_04bb3170;
    local_c8 = *param_2;
    local_60 = 0;
    local_5c = 0;
    local_64 = 0xffffffff;
    local_68 = *(undefined2 *)PTR_DAT_04bb3170;
    lVar14 = *(long *)PTR_DAT_04bb2720;
    if (lVar14 == 0) {
      puVar16 = &DAT_055c04a0;
    }
    else {
      puVar16 = &DAT_055c04a0;
      if (*(long *)(lVar14 + 0x330) != 0) {
        puVar16 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
        iVar11 = FUN_006bd550(*puVar16,0);
        puVar16 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar11 != 0x758f7eaf) {
          puVar16 = &DAT_055c04a0;
        }
      }
    }
    local_b8 = *(undefined4 *)(puVar16 + 7);
    local_b4 = *(byte *)(param_1 + 0x1f8);
    if (7 < local_b4) {
      local_b4 = 0xff;
    }
    local_a8 = 1;
    iVar11 = FUN_0152352c(&local_c8);
    puVar9 = PTR_DAT_04bb37e0;
    if (iVar11 == 2) {
      *(undefined4 *)(param_1 + 0x1094dc) = 0xc;
      if (*(int *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) == -1) {
        *(undefined4 *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) = 8;
      }
    }
    else if (iVar11 == 1) {
      lVar14 = *(long *)PTR_DAT_04bb4860;
      sVar7 = *(short *)PTR_DAT_04bb6298;
      pcVar15 = "0201_01";
      if (sVar7 != -1) {
        puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8);
        if (0xff < (uint)(int)sVar7) {
          puVar3 = (uint *)PTR_DAT_04bc39f8;
        }
        pcVar15 = "0201_01";
        if ((*puVar3 & 0x40) != 0) {
          pcVar15 = "0201";
        }
      }
      if (((*(char *)(lVar14 + 0x34) == '\0') || (2 < *(int *)(lVar14 + 0x10))) &&
         ((*(char *)(lVar14 + 100) == '\0' || (3 < *(int *)(lVar14 + 0x40))))) {
        *(char **)(lVar14 + 0x50) = pcVar15;
        *(undefined8 *)(lVar14 + 0x38) = 0;
        *(undefined4 *)(lVar14 + 0x40) = 3;
        *(undefined1 *)(lVar14 + 100) = 1;
        *(undefined8 *)(lVar14 + 0x5c) = 0;
        *(undefined1 *)(lVar14 + 0x58) = 0;
      }
    }
    else if (iVar11 == 0) {
      lVar14 = *(long *)puVar10;
      puVar13 = PTR_DAT_04bb37e0;
      if (lVar14 != 0) {
        if (*(char *)(lVar14 + 0xe9e) != '\0') {
          puVar13 = (undefined *)(lVar14 + 0xe94);
        }
      }
      uVar12 = FUN_0277d7b4(param_2,puVar13);
      if ((((uVar12 & 1) != 0) && (lVar14 = *(long *)puVar10, lVar14 != 0)) &&
         (*(char *)(lVar14 + 0xee4) != '\0')) {
        uVar4 = *(undefined4 *)puVar9;
        uVar5 = *(undefined4 *)(puVar9 + 4);
        lVar1 = lVar14 + 0xda0;
        *(undefined1 *)(lVar14 + 0xe9e) = 0;
        *(undefined4 *)(lVar14 + 0xf9c) = 0xffffffff;
        *(undefined4 *)(lVar14 + 0xe94) = uVar4;
        uVar6 = *(undefined2 *)puVar8;
        *(undefined4 *)(lVar14 + 0xe98) = uVar5;
        *(undefined2 *)(lVar14 + 0xe9c) = uVar6;
        FUN_017ef108(lVar1,0,0);
        FUN_017eff3c(lVar1,0,0);
        FUN_017f0b3c(lVar1);
      }
    }
  }
  return;
}


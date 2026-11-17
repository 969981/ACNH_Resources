
int FUN_0308d040(undefined2 *param_1,undefined4 *param_2)

{
  uint *puVar1;
  char cVar2;
  short sVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  undefined4 uVar8;
  long lVar9;
  char *pcVar10;
  undefined8 *puVar11;
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
  uint local_5c;
  int local_54;
  
  local_54 = FUN_0308cdd0();
  puVar4 = PTR_DAT_04bb5ce0;
  if (((*(long *)PTR_DAT_04bb5ce0 == 0) || (*(char *)(*(long *)PTR_DAT_04bb5ce0 + 0xe9e) == '\0'))
     || (uVar7 = FUN_0308cc20(param_1), (uVar7 & 1) == 0)) {
    bVar5 = false;
  }
  else {
    lVar9 = *(long *)puVar4;
    if (lVar9 == 0) {
      iVar6 = 2;
    }
    else {
      iVar6 = *(int *)(lVar9 + 0xea0);
    }
    bVar5 = iVar6 == local_54 && *(char *)(param_2 + 2) == '\0';
    if ((*(char *)(param_2 + 2) != '\0') && (iVar6 == local_54)) {
      bVar5 = false;
      if (lVar9 != 0) {
        bVar5 = *(char *)(lVar9 + 0xedc) < '\0';
      }
      bVar5 = (bool)*(char *)((long)param_2 + 7) == bVar5;
    }
  }
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
  local_60 = 0;
  local_5c = 0;
  local_68 = *(undefined2 *)PTR_DAT_04bb3170;
  local_64 = 0xffffffff;
  lVar9 = *(long *)PTR_DAT_04bb2720;
  if (lVar9 == 0) {
    puVar11 = &DAT_055c04a0;
  }
  else {
    puVar11 = &DAT_055c04a0;
    if (*(long *)(lVar9 + 0x330) != 0) {
      puVar11 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
      iVar6 = FUN_006bd550(*puVar11,0);
      puVar11 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar6 != 0x758f7eaf) {
        puVar11 = &DAT_055c04a0;
      }
    }
  }
  local_b4 = *(byte *)(param_2 + 1);
  local_b8 = *(undefined4 *)(puVar11 + 7);
  local_a8 = *(undefined1 *)((long)param_2 + 5);
  lVar9 = *(long *)puVar4;
  if (7 < local_b4) {
    local_b4 = 0xff;
  }
  puVar11 = (undefined8 *)PTR_DAT_04bb37e0;
  if ((lVar9 != 0) && (*(char *)(lVar9 + 0xe9e) != '\0')) {
    puVar11 = (undefined8 *)(lVar9 + 0xe94);
  }
  local_70 = *puVar11;
  local_5c = (uint)*(byte *)((long)param_2 + 9);
  if (bVar5) {
    uVar8 = 4;
  }
  else {
    local_68 = *param_1;
    local_60 = CONCAT11(local_60._1_1_,*(undefined1 *)((long)param_2 + 7));
    local_80._4_4_ = local_54;
    uVar8 = 2;
  }
  local_80 = CONCAT44(local_80._4_4_,uVar8);
  iVar6 = FUN_0152352c(&local_c8);
  uVar8 = *param_2;
  cVar2 = *(char *)((long)param_2 + 6);
  if (iVar6 != 0) {
    if (iVar6 != 1) {
      return iVar6;
    }
    lVar9 = *(long *)PTR_DAT_04bb4860;
    sVar3 = *(short *)PTR_DAT_04bb6298;
    pcVar10 = "0201_01";
    if (sVar3 != -1) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
      if (0xff < (uint)(int)sVar3) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      pcVar10 = "0201_01";
      if ((*puVar1 & 0x40) != 0) {
        pcVar10 = "0201";
      }
    }
    if (((*(char *)(lVar9 + 0x34) == '\0') || (2 < *(int *)(lVar9 + 0x10))) &&
       ((*(char *)(lVar9 + 100) == '\0' || (3 < *(int *)(lVar9 + 0x40))))) {
      *(char **)(lVar9 + 0x50) = pcVar10;
      *(undefined8 *)(lVar9 + 0x38) = 0;
      *(undefined4 *)(lVar9 + 0x40) = 3;
      *(undefined1 *)(lVar9 + 100) = 1;
      *(undefined8 *)(lVar9 + 0x5c) = 0;
      *(undefined1 *)(lVar9 + 0x58) = 0;
    }
  }
  if (cVar2 != '\0') {
    FUN_0308d6a0(uVar8);
  }
  return iVar6;
}


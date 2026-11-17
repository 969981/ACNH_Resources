
int FUN_0308d380(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  char cVar2;
  short sVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  char *pcVar9;
  undefined8 *puVar10;
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
  int local_64;
  undefined2 local_60;
  uint local_5c;
  int local_54;
  
  local_54 = FUN_0308cdd0();
  puVar4 = PTR_DAT_04bb5ce0;
  lVar8 = *(long *)PTR_DAT_04bb5ce0;
  if ((((lVar8 == 0) || (param_1 == -1)) || (*(char *)(lVar8 + 0xe9e) == '\0')) ||
     (*(int *)(lVar8 + 0xf9c) != param_1)) {
    bVar5 = false;
  }
  else {
    bVar5 = *(int *)(lVar8 + 0xea0) == local_54 && *(char *)(param_2 + 2) == '\0';
    if ((*(char *)(param_2 + 2) != '\0') && (*(int *)(lVar8 + 0xea0) == local_54)) {
      bVar5 = *(byte *)((long)param_2 + 7) == *(byte *)(lVar8 + 0xedc) >> 7;
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
  local_64 = -1;
  lVar8 = *(long *)PTR_DAT_04bb2720;
  if (lVar8 == 0) {
    puVar10 = &DAT_055c04a0;
  }
  else {
    puVar10 = &DAT_055c04a0;
    if (*(long *)(lVar8 + 0x330) != 0) {
      puVar10 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar8 + 0x338));
      iVar6 = FUN_006bd550(*puVar10,0);
      puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar6 != 0x758f7eaf) {
        puVar10 = &DAT_055c04a0;
      }
    }
  }
  local_b4 = *(byte *)(param_2 + 1);
  local_b8 = *(undefined4 *)(puVar10 + 7);
  local_a8 = *(undefined1 *)((long)param_2 + 5);
  lVar8 = *(long *)puVar4;
  if (7 < local_b4) {
    local_b4 = 0xff;
  }
  puVar10 = (undefined8 *)PTR_DAT_04bb37e0;
  if ((lVar8 != 0) && (*(char *)(lVar8 + 0xe9e) != '\0')) {
    puVar10 = (undefined8 *)(lVar8 + 0xe94);
  }
  local_70 = *puVar10;
  local_5c = (uint)*(byte *)((long)param_2 + 9);
  if (bVar5) {
    uVar7 = 4;
  }
  else {
    local_60 = CONCAT11(*(undefined1 *)((long)param_2 + 7),(undefined1)local_60);
    local_80._4_4_ = local_54;
    uVar7 = 3;
    local_64 = param_1;
  }
  local_80 = CONCAT44(local_80._4_4_,uVar7);
  iVar6 = FUN_0152352c(&local_c8);
  uVar7 = *param_2;
  cVar2 = *(char *)((long)param_2 + 6);
  if (iVar6 != 0) {
    if (iVar6 != 1) {
      return iVar6;
    }
    lVar8 = *(long *)PTR_DAT_04bb4860;
    sVar3 = *(short *)PTR_DAT_04bb6298;
    pcVar9 = "0201_01";
    if (sVar3 != -1) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
      if (0xff < (uint)(int)sVar3) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      pcVar9 = "0201_01";
      if ((*puVar1 & 0x40) != 0) {
        pcVar9 = "0201";
      }
    }
    if (((*(char *)(lVar8 + 0x34) == '\0') || (2 < *(int *)(lVar8 + 0x10))) &&
       ((*(char *)(lVar8 + 100) == '\0' || (3 < *(int *)(lVar8 + 0x40))))) {
      *(char **)(lVar8 + 0x50) = pcVar9;
      *(undefined8 *)(lVar8 + 0x38) = 0;
      *(undefined4 *)(lVar8 + 0x40) = 3;
      *(undefined1 *)(lVar8 + 100) = 1;
      *(undefined8 *)(lVar8 + 0x5c) = 0;
      *(undefined1 *)(lVar8 + 0x58) = 0;
    }
  }
  if (cVar2 != '\0') {
    FUN_0308d6a0(uVar7);
  }
  return iVar6;
}


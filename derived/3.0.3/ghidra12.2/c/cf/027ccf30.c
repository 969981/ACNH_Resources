
/* WARNING: Removing unreachable block (ram,0x027cd16c) */
/* WARNING: Removing unreachable block (ram,0x027ccfa8) */
/* WARNING: Removing unreachable block (ram,0x027ccfa0) */
/* WARNING: Removing unreachable block (ram,0x027cd118) */
/* WARNING: Removing unreachable block (ram,0x027cd1a4) */

void FUN_027ccf30(uint param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined *local_b0;
  undefined1 local_a8;
  int local_a4;
  undefined *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined2 local_8c;
  undefined *local_88;
  int local_80;
  undefined **local_78;
  undefined **ppuStack_70;
  undefined1 *local_68;
  undefined4 local_58 [10];
  
  local_88 = PTR_DAT_04bc43f8 + 0x10;
  if (9 < param_1) {
    param_1 = 0;
  }
  local_80 = (&DAT_05636e30)[(int)param_1];
  local_58[0] = 1;
  local_b0 = PTR_DAT_04bc4608 + 0x10;
  local_a8 = PTR_DAT_04bbc570[8];
  puVar1 = &DAT_05636dd8;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
    puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
  }
  local_a4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
  local_a0 = PTR_DAT_04bb2010 + 0x10;
  local_98 = *(ulong *)(PTR_DAT_04bbc570 + 0x18);
  local_90 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
  local_8c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
  if (local_80 != 0) {
    ppuStack_70 = &local_88;
    local_78 = &PTR_FUN_04a9b150;
    local_68 = (undefined1 *)&local_b0;
    if (puVar1[1] != 0) {
      local_68 = (undefined1 *)&local_b0;
      plVar5 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
      iVar4 = (**(code **)(*plVar5 + 0x18))();
      if (0 < iVar4) {
        iVar9 = 0;
        do {
          FUN_01360490(local_58,puVar1[1],iVar9);
          uVar6 = (*(code *)*local_78)(&local_78,local_58);
          if ((uVar6 & 1) != 0) break;
          bVar3 = iVar4 + -1 != iVar9;
          iVar9 = iVar9 + 1;
        } while (bVar3);
      }
    }
  }
  if (local_a4 == 0) {
    return;
  }
  lVar7 = puVar1[1];
  if (lVar7 == 0) {
    return;
  }
  if (0x11f < (uint)local_98) {
    return;
  }
  if (0xff < local_98._4_4_) {
    return;
  }
  uVar2 = *(uint *)(lVar7 + (local_98 & 0xffffffff) * 0x400 + (ulong)local_98._4_4_ * 4 + 0x30);
  if (*(uint *)(lVar7 + 0x48030) <= uVar2) {
    return;
  }
  lVar7 = *(long *)(lVar7 + 0x48038);
  if (lVar7 == 0) {
    return;
  }
  if ((*(byte *)(lVar7 + (long)(int)uVar2 * 0x718 + 8) >> 1 & 1) == 0) {
    lVar8 = *(long *)(lVar7 + (long)(int)uVar2 * 0x718 + 0xc0);
    if (lVar8 != 0) {
      if ((*(long *)(lVar8 + 0xd8) != 0) && (*(char *)(*(long *)(lVar8 + 0xd8) + 0x48) != '\0')) {
        local_58[0] = 2;
        lVar7 = lVar7 + (long)(int)uVar2 * 0x718 + 0x6a8;
        goto LAB_027cd1a4;
      }
      local_58[0] = 4;
      if ((*(long *)(lVar8 + 0x90) != 0) && (*(char *)(*(long *)(lVar8 + 0x90) + 0x48) != '\0'))
      goto LAB_027cd180;
    }
    lVar7 = lVar7 + (long)(int)uVar2 * 0x718 + 0x90;
  }
  else {
LAB_027cd180:
    local_58[0] = 4;
    lVar7 = lVar7 + (long)(int)uVar2 * 0x718 + 0x2b8;
LAB_027cd1a4:
    lVar7 = lVar7 + 0x28;
  }
  FUN_02b5c3a0(lVar7,0x6622bd46);
  return;
}



/* WARNING: Removing unreachable block (ram,0x01388514) */
/* WARNING: Removing unreachable block (ram,0x013884dc) */
/* WARNING: Removing unreachable block (ram,0x0138851c) */

bool FUN_013884a0(void)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  undefined *local_b0;
  undefined1 local_a8;
  int local_a4;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined2 local_8c;
  undefined *local_88;
  int local_80;
  undefined **local_78;
  undefined **ppuStack_70;
  undefined1 *local_68;
  undefined4 local_58 [10];
  
  local_68 = (undefined1 *)&local_b0;
  local_88 = PTR_DAT_04bc43f8 + 0x10;
  local_80 = DAT_05636e94;
  local_58[0] = 1;
  local_b0 = PTR_DAT_04bc4608 + 0x10;
  local_a8 = PTR_DAT_04bbc570[8];
  local_a4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
  uStack_98 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
  local_a0 = PTR_DAT_04bb2010 + 0x10;
  local_90 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
  local_8c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
  if (DAT_05636e94 != 0) {
    ppuStack_70 = &local_88;
    local_78 = &PTR_FUN_04a9b150;
    puVar1 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
    }
    if (puVar1[1] != 0) {
      plVar4 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
      iVar3 = (**(code **)(*plVar4 + 0x18))();
      if (0 < iVar3) {
        iVar6 = 0;
        do {
          FUN_01360490(local_58,puVar1[1],iVar6);
          uVar5 = (*(code *)*local_78)(&local_78,local_58);
          if ((uVar5 & 1) != 0) break;
          bVar2 = iVar3 + -1 != iVar6;
          iVar6 = iVar6 + 1;
        } while (bVar2);
      }
    }
  }
  return local_a4 != 0;
}


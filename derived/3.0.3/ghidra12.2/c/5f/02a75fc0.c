
/* WARNING: Removing unreachable block (ram,0x02a76030) */
/* WARNING: Removing unreachable block (ram,0x02a75ff0) */
/* WARNING: Removing unreachable block (ram,0x02a76000) */
/* WARNING: Removing unreachable block (ram,0x02a7600c) */
/* WARNING: Removing unreachable block (ram,0x02a76040) */

ulong FUN_02a75fc0(undefined8 param_1,uint param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 uVar7;
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
  uint local_58 [10];
  
  lVar8 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  if ((lVar8 != 0) && (*(long *)(lVar8 + 0xa0) != 0)) {
    lVar8 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
    puVar2 = &DAT_05636dd8;
    if (lVar8 != 0) {
      puVar2 = (undefined8 *)(lVar8 + 0x148);
    }
    if (puVar2[1] != 0) {
      local_88 = PTR_DAT_04bc43f8 + 0x10;
      uVar1 = param_2;
      if (0xf < param_2) {
        uVar1 = 0;
      }
      local_80 = (&DAT_05636e58)[(int)uVar1];
      local_b0 = PTR_DAT_04bc4608 + 0x10;
      local_a8 = PTR_DAT_04bbc570[8];
      local_a4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
      local_98 = *(ulong *)(PTR_DAT_04bbc570 + 0x18);
      local_a0 = PTR_DAT_04bb2010 + 0x10;
      local_90 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
      local_8c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
      local_58[0] = param_2;
      if (local_80 != 0) {
        ppuStack_70 = &local_88;
        local_78 = &PTR_FUN_04a9b150;
        local_68 = (undefined1 *)&local_b0;
        if (puVar2[1] != 0) {
          local_68 = (undefined1 *)&local_b0;
          plVar5 = (long *)(*(code *)**(undefined8 **)(puVar2[1] + 0x10))();
          iVar4 = (**(code **)(*plVar5 + 0x18))();
          if (0 < iVar4) {
            iVar9 = 0;
            do {
              FUN_01360490(local_58,puVar2[1],iVar9);
              uVar6 = (*(code *)*local_78)(&local_78,local_58);
              if ((uVar6 & 1) != 0) break;
              bVar3 = iVar4 + -1 != iVar9;
              iVar9 = iVar9 + 1;
            } while (bVar3);
          }
        }
      }
      if (local_a4 != 0) {
        if (puVar2[1] == 0) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = 0xffffffff;
          if ((uint)local_98 < 0x120) {
            if (local_98._4_4_ < 0x100) {
              uVar7 = *(undefined4 *)
                       (puVar2[1] + (local_98 & 0xffffffff) * 0x400 + (ulong)local_98._4_4_ * 4 +
                       0x30);
            }
          }
        }
        uVar6 = FUN_02a75a38(param_1,&local_b0,uVar7);
        return uVar6;
      }
    }
  }
  return (ulong)*(uint *)PTR_DAT_04bb3238;
}


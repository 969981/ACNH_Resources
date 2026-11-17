
/* WARNING: Removing unreachable block (ram,0x02a76250) */
/* WARNING: Removing unreachable block (ram,0x02a76210) */
/* WARNING: Removing unreachable block (ram,0x02a76220) */
/* WARNING: Removing unreachable block (ram,0x02a7622c) */
/* WARNING: Removing unreachable block (ram,0x02a76260) */

ulong FUN_02a761e0(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined4 uVar6;
  long lVar7;
  int iVar8;
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
  int local_58 [10];
  
  lVar7 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0xa0) != 0)) {
    lVar7 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
    puVar1 = &DAT_05636dd8;
    if (lVar7 != 0) {
      puVar1 = (undefined8 *)(lVar7 + 0x148);
    }
    if (puVar1[1] != 0) {
      local_80 = 0;
      local_58[0] = 0;
      local_88 = PTR_DAT_04bc43f8 + 0x10;
      uVar4 = FUN_02b674f0(local_58,param_2);
      if ((uVar4 & 1) != 0) {
        local_80 = local_58[0];
      }
      local_b0 = PTR_DAT_04bc4608 + 0x10;
      local_a8 = PTR_DAT_04bbc570[8];
      local_a4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
      local_98 = *(ulong *)(PTR_DAT_04bbc570 + 0x18);
      local_a0 = PTR_DAT_04bb2010 + 0x10;
      local_90 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
      local_8c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
      if (local_80 != 0) {
        ppuStack_70 = &local_88;
        local_78 = &PTR_FUN_04a9b150;
        local_68 = (undefined1 *)&local_b0;
        if (puVar1[1] != 0) {
          local_68 = (undefined1 *)&local_b0;
          plVar5 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
          iVar3 = (**(code **)(*plVar5 + 0x18))();
          if (0 < iVar3) {
            iVar8 = 0;
            do {
              FUN_01360490(local_58,puVar1[1],iVar8);
              uVar4 = (*(code *)*local_78)(&local_78,local_58);
              if ((uVar4 & 1) != 0) break;
              bVar2 = iVar3 + -1 != iVar8;
              iVar8 = iVar8 + 1;
            } while (bVar2);
          }
        }
      }
      if (local_a4 != 0) {
        if (puVar1[1] == 0) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = 0xffffffff;
          if ((uint)local_98 < 0x120) {
            if (local_98._4_4_ < 0x100) {
              uVar6 = *(undefined4 *)
                       (puVar1[1] + (local_98 & 0xffffffff) * 0x400 + (ulong)local_98._4_4_ * 4 +
                       0x30);
            }
          }
        }
        uVar4 = FUN_02a75a38(param_1,&local_b0,uVar6);
        return uVar4;
      }
    }
  }
  return (ulong)*(uint *)PTR_DAT_04bb3238;
}


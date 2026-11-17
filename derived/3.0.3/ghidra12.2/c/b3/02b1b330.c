
/* WARNING: Removing unreachable block (ram,0x02b1b3c0) */
/* WARNING: Removing unreachable block (ram,0x02b1b388) */
/* WARNING: Removing unreachable block (ram,0x02b1b3b8) */
/* WARNING: Removing unreachable block (ram,0x02b1b578) */

uint FUN_02b1b330(long param_1,byte param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  undefined4 *puVar9;
  long lVar10;
  int iVar11;
  uint local_d8;
  int iStack_d4;
  undefined4 local_d0;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined2 local_b8;
  byte local_b2;
  undefined ***local_b0;
  undefined *local_a8;
  undefined1 local_a0;
  int local_9c;
  undefined *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined *local_80;
  int local_78;
  undefined **local_70;
  undefined **ppuStack_68;
  undefined **local_60;
  
  local_80 = PTR_DAT_04bc43f8;
  *(undefined4 *)(param_1 + 0xc) = 0xf;
  puVar3 = PTR_DAT_04bb27a8;
  local_80 = local_80 + 0x10;
  local_78 = DAT_05636e94;
  local_d8 = 1;
  local_a8 = PTR_DAT_04bc4608 + 0x10;
  local_a0 = PTR_DAT_04bbc570[8];
  local_9c = *(int *)(PTR_DAT_04bbc570 + 0xc);
  uStack_90 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
  local_98 = PTR_DAT_04bb2010 + 0x10;
  local_88 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
  local_84 = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
  if (DAT_05636e94 != 0) {
    ppuStack_68 = &local_80;
    local_70 = &PTR_FUN_04a9b150;
    local_60 = &local_a8;
    puVar1 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
    }
    if (puVar1[1] != 0) {
      plVar7 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
      iVar5 = (**(code **)(*plVar7 + 0x18))();
      if (0 < iVar5) {
        iVar11 = 0;
        do {
          FUN_01360490(&local_d8,puVar1[1],iVar11);
          uVar8 = (*(code *)*local_70)(&local_70,&local_d8);
          if ((uVar8 & 1) != 0) break;
          bVar4 = iVar5 + -1 != iVar11;
          iVar11 = iVar11 + 1;
        } while (bVar4);
      }
    }
  }
  if (((local_9c == 0) && (lVar10 = *(long *)puVar3, lVar10 != 0)) &&
     (*(char *)(lVar10 + 0x4b30) != '\0')) {
    uVar6 = *(uint *)(lVar10 + 0x4b34);
    lVar10 = FUN_01260194(0xe7);
    if ((uVar6 < *(uint *)(lVar10 + 0x420)) &&
       (lVar10 = *(long *)(*(long *)(lVar10 + 0x428) + (long)(int)uVar6 * 8), lVar10 != 0)) {
      plVar7 = (long *)(lVar10 + 0x30);
      local_d8 = uVar6;
      puVar9 = (undefined4 *)(**(code **)(*plVar7 + 0xf0))(plVar7);
      uVar2 = *puVar9;
      lVar10 = (**(code **)(*plVar7 + 0xf0))(plVar7);
      uStack_bc = *(undefined4 *)(lVar10 + 4);
      local_70 = (undefined **)((ulong)local_70 & 0xffffffff00000000);
      local_d0 = 0;
      local_b8 = 0;
      local_c8 = PTR_DAT_04bb2018 + 0x10;
      iStack_d4 = DAT_05636e94;
      local_b0 = &local_70;
      local_a8 = PTR_DAT_04bc45d0 + 0x10;
      local_d8 = 1;
      local_c0 = uVar2;
      local_b2 = param_2 & 1;
      uVar6 = FUN_02a81334(&local_a8,&local_d8);
      if ((uVar6 & 1) != 0) {
        *(undefined4 *)(param_1 + 8) = local_70._0_4_;
      }
      goto LAB_02b1b4b4;
    }
  }
  uVar6 = 0;
LAB_02b1b4b4:
  return uVar6 & 1;
}


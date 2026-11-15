
/* WARNING: Removing unreachable block (ram,0x021d92d0) */
/* WARNING: Removing unreachable block (ram,0x021d92e0) */

undefined8 FUN_021d92a0(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  int iVar8;
  undefined *local_b8;
  undefined1 local_b0;
  int local_ac;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined2 local_94;
  undefined *local_90;
  int local_88;
  uint local_7c;
  undefined **local_78;
  undefined **ppuStack_70;
  undefined **local_68;
  uint local_58;
  uint local_54;
  float fStack_50;
  
  local_58 = 0;
  local_7c = 0;
  puVar2 = &DAT_05636dd8;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
    puVar2 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0x148);
  }
  uVar5 = FUN_02b67a30(&local_7c,*param_2);
  uVar6 = 0;
  if ((uVar5 & 1) != 0) {
    local_90 = PTR_DAT_04bc43f8 + 0x10;
    local_58 = local_7c;
    uVar1 = local_7c;
    if (9 < local_7c) {
      uVar1 = 0;
    }
    local_88 = (&DAT_05636e30)[(int)uVar1];
    local_b8 = PTR_DAT_04bc4608 + 0x10;
    local_b0 = PTR_DAT_04bbc570[8];
    local_ac = *(int *)(PTR_DAT_04bbc570 + 0xc);
    uStack_a0 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
    local_a8 = PTR_DAT_04bb2010 + 0x10;
    local_98 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
    local_94 = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
    if (local_88 != 0) {
      ppuStack_70 = &local_90;
      local_78 = &PTR_FUN_04a9b150;
      local_68 = &local_b8;
      if (puVar2[1] != 0) {
        plVar7 = (long *)(*(code *)**(undefined8 **)(puVar2[1] + 0x10))();
        iVar4 = (**(code **)(*plVar7 + 0x18))();
        if (0 < iVar4) {
          iVar8 = 0;
          do {
            FUN_01360490(&local_58,puVar2[1],iVar8);
            uVar5 = (*(code *)*local_78)(&local_78,&local_58);
            if ((uVar5 & 1) != 0) break;
            bVar3 = iVar4 + -1 != iVar8;
            iVar8 = iVar8 + 1;
          } while (bVar3);
        }
      }
    }
    if ((local_ac == 0) || (uVar5 = FUN_02a8f1dc(&local_b8,&local_58), (uVar5 & 1) == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
      *param_1 = local_58;
      param_1[1] = local_54;
      param_1[2] = (uint)(fStack_50 + 2.5);
    }
  }
  return uVar6;
}


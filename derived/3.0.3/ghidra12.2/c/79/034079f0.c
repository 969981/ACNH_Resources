
/* WARNING: Removing unreachable block (ram,0x03407a34) */
/* WARNING: Removing unreachable block (ram,0x03407a3c) */

void FUN_034079f0(float *param_1)

{
  undefined8 *puVar1;
  undefined ***pppuVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  undefined **local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  int local_98;
  int iStack_94;
  undefined4 local_90;
  undefined2 local_8c;
  undefined *local_88;
  undefined4 local_80;
  undefined **local_78;
  undefined **ppuStack_70;
  undefined1 *local_68;
  undefined4 local_58 [10];
  
  local_68 = (undefined1 *)&local_b0;
  local_58[0] = 0x32;
  puVar1 = &DAT_05636dd8;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1c0) != 0) {
    puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1c0) + 0x148);
  }
  if (puVar1[1] != 0) {
    local_80 = 0x26;
    local_88 = PTR_DAT_04bc43f8 + 0x10;
    local_b0 = (undefined **)(PTR_DAT_04bc4608 + 0x10);
    local_a0 = PTR_DAT_04bb2010 + 0x10;
    local_90 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
    local_a8 = (float *)CONCAT71(local_a8._1_7_,PTR_DAT_04bbc570[8]);
    local_98 = *(int *)(PTR_DAT_04bbc570 + 0x18);
    iStack_94 = *(int *)(PTR_DAT_04bbc570 + 0x1c);
    local_8c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
    ppuStack_70 = &local_88;
    local_78 = &PTR_FUN_04a9b150;
    pppuVar2 = &local_b0;
    local_a8._4_4_ = *(int *)(PTR_DAT_04bbc570 + 0xc);
    if (puVar1[1] != 0) {
      plVar5 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
      iVar4 = (**(code **)(*plVar5 + 0x18))();
      pppuVar2 = (undefined ***)local_68;
      if (0 < iVar4) {
        iVar7 = 0;
        do {
          FUN_01360490(local_58,puVar1[1],iVar7);
          uVar6 = (*(code *)*local_78)(&local_78,local_58);
          pppuVar2 = (undefined ***)local_68;
          if ((uVar6 & 1) != 0) break;
          bVar3 = iVar4 + -1 != iVar7;
          iVar7 = iVar7 + 1;
        } while (bVar3);
      }
    }
    local_68 = (undefined1 *)pppuVar2;
    local_78 = (undefined **)CONCAT44(local_78._4_4_,local_a8._4_4_);
    if (local_a8._4_4_ != 0) {
      local_b0 = &PTR_FUN_04b29848;
      *param_1 = (float)local_98 * 5.0 + 2.5;
      param_1[1] = (float)iStack_94 * 5.0 + 2.5;
      if (puVar1[1] != 0) {
        local_a8 = param_1;
        plVar5 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
        iVar4 = (**(code **)(*plVar5 + 0x18))();
        if (0 < iVar4) {
          iVar7 = 0;
          do {
            FUN_01360490(local_58,puVar1[1],iVar7);
            (*(code *)*local_b0)(&local_b0,local_58);
            iVar7 = iVar7 + 1;
          } while (iVar4 != iVar7);
        }
      }
    }
  }
  return;
}


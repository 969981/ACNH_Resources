
uint FUN_02b3acc0(undefined8 param_1,uint param_2,int param_3)

{
  long *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  undefined4 uVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  undefined *local_c0;
  undefined1 local_b8;
  int local_b4;
  undefined *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined *local_98;
  int local_90;
  undefined **local_88;
  undefined **ppuStack_80;
  undefined1 *local_78;
  uint local_68 [10];
  
  uVar9 = 0;
  do {
    uVar6 = (uint)uVar9;
    piVar2 = (int *)((long)(PTR_DAT_04bbbf90 + 8) + uVar9 * 4);
    if (0x38 < uVar6) {
      piVar2 = (int *)(PTR_DAT_04bbbf90 + 8);
    }
    if (*piVar2 == param_3) goto LAB_02b3ad20;
    uVar10 = 0x39;
    if ((int)uVar6 < 0x39) {
      uVar10 = uVar6 + 1;
    }
    uVar9 = (ulong)uVar10;
  } while (uVar10 != 0x39);
  uVar6 = 0;
LAB_02b3ad20:
  if (uVar6 == 0) {
    plVar7 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  }
  else {
    plVar1 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
    plVar7 = plVar1 + uVar6;
    if (0x38 < uVar6) {
      plVar7 = plVar1;
    }
  }
  puVar3 = &DAT_05636dd8;
  if (*plVar7 != 0) {
    puVar3 = (undefined8 *)(*plVar7 + 0x148);
  }
  if (puVar3[1] != 0) {
    local_98 = PTR_DAT_04bc43f8 + 0x10;
    uVar6 = param_2;
    if (9 < param_2) {
      uVar6 = 0;
    }
    local_90 = (&DAT_05636e30)[(int)uVar6];
    local_c0 = PTR_DAT_04bc4608 + 0x10;
    local_b8 = PTR_DAT_04bbc570[8];
    local_b4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
    local_a8 = *(ulong *)(PTR_DAT_04bbc570 + 0x18);
    local_b0 = PTR_DAT_04bb2010 + 0x10;
    local_a0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
    local_9c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
    local_68[0] = param_2;
    if (local_90 != 0) {
      ppuStack_80 = &local_98;
      local_88 = &PTR_FUN_04a9b150;
      local_78 = (undefined1 *)&local_c0;
      if (puVar3[1] != 0) {
        local_78 = (undefined1 *)&local_c0;
        plVar7 = (long *)(*(code *)**(undefined8 **)(puVar3[1] + 0x10))();
        iVar5 = (**(code **)(*plVar7 + 0x18))();
        if (0 < iVar5) {
          iVar11 = 0;
          do {
            FUN_01360490(local_68,puVar3[1],iVar11);
            uVar9 = (*(code *)*local_88)(&local_88,local_68);
            if ((uVar9 & 1) != 0) break;
            bVar4 = iVar5 + -1 != iVar11;
            iVar11 = iVar11 + 1;
          } while (bVar4);
        }
      }
    }
    if (local_b4 != 0) {
      if (puVar3[1] == 0) {
        uVar8 = 0xffffffff;
      }
      else {
        uVar8 = 0xffffffff;
        if ((uint)local_a8 < 0x120) {
          if (local_a8._4_4_ < 0x100) {
            uVar8 = *(undefined4 *)
                     (puVar3[1] + (local_a8 & 0xffffffff) * 0x400 + (ulong)local_a8._4_4_ * 4 + 0x30
                     );
          }
        }
      }
      uVar6 = FUN_02b3a450(param_1,uVar8,param_3);
      goto LAB_02b3aec8;
    }
  }
  uVar6 = 0;
LAB_02b3aec8:
  return uVar6 & 1;
}



/* WARNING: Removing unreachable block (ram,0x026d6f20) */
/* WARNING: Removing unreachable block (ram,0x026d6ee4) */
/* WARNING: Removing unreachable block (ram,0x026d6f18) */
/* WARNING: Removing unreachable block (ram,0x026d7084) */

void FUN_026d6ea0(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  int iVar8;
  undefined4 uVar9;
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
  undefined *local_68;
  int local_60;
  
  puVar3 = PTR_DAT_04bc43f8;
  local_98 = PTR_DAT_04bc43f8 + 0x10;
  local_90 = DAT_05636e70;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  local_c0 = PTR_DAT_04bc4608 + 0x10;
  local_b8 = PTR_DAT_04bbc570[8];
  puVar1 = &DAT_05636dd8;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
    puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
  }
  local_b4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
  local_b0 = PTR_DAT_04bb2010 + 0x10;
  local_a8 = *(ulong *)(PTR_DAT_04bbc570 + 0x18);
  local_a0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
  local_9c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
  if (DAT_05636e70 != 0) {
    ppuStack_80 = &local_98;
    local_88 = &PTR_FUN_04a9b150;
    local_78 = (undefined1 *)&local_c0;
    if (puVar1[1] != 0) {
      local_78 = (undefined1 *)&local_c0;
      plVar6 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
      iVar5 = (**(code **)(*plVar6 + 0x18))();
      if (0 < iVar5) {
        iVar8 = 0;
        do {
          FUN_01360490(&local_68,puVar1[1],iVar8);
          uVar7 = (*(code *)*local_88)(&local_88,&local_68);
          if ((uVar7 & 1) != 0) break;
          bVar4 = iVar5 + -1 != iVar8;
          iVar8 = iVar8 + 1;
        } while (bVar4);
      }
    }
  }
  puVar2 = PTR_DAT_04bb5008;
  if (local_b4 != 0) {
    if (puVar1[1] == 0) {
      uVar9 = 0xffffffff;
    }
    else {
      uVar9 = 0xffffffff;
      if ((uint)local_a8 < 0x120) {
        if (local_a8._4_4_ < 0x100) {
          uVar9 = *(undefined4 *)
                   (puVar1[1] + (local_a8 & 0xffffffff) * 0x400 + (ulong)local_a8._4_4_ * 4 + 0x30);
        }
      }
    }
    local_68 = puVar3 + 0x10;
    local_88 = (undefined **)CONCAT44(local_88._4_4_,6);
    local_60 = DAT_05636e70;
    FUN_02b3cb40(*(long *)PTR_DAT_04bb5008 + 0x26e8,&local_68,0x6622bd46);
    FUN_02b39e40(*(long *)puVar2 + 0x26e8,uVar9,0x6622bd46);
  }
  return;
}



bool FUN_02a59140(long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  int iVar5;
  undefined *local_a0;
  undefined1 local_98;
  int local_94;
  undefined *local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined2 local_7c;
  undefined **local_78;
  long lStack_70;
  undefined1 *local_68;
  undefined1 auStack_58 [40];
  
  local_68 = (undefined1 *)&local_a0;
  local_a0 = PTR_DAT_04bc4608 + 0x10;
  local_98 = PTR_DAT_04bbc570[8];
  local_94 = *(int *)(PTR_DAT_04bbc570 + 0xc);
  uStack_88 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
  local_90 = PTR_DAT_04bb2010 + 0x10;
  local_80 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
  local_7c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
  if (*(int *)(param_2 + 8) != 0) {
    local_78 = &PTR_FUN_04a9b150;
    if (*(long *)(param_1 + 8) != 0) {
      lStack_70 = param_2;
      plVar3 = (long *)(*(code *)**(undefined8 **)(*(long *)(param_1 + 8) + 0x10))();
      iVar2 = (**(code **)(*plVar3 + 0x18))();
      if (0 < iVar2) {
        iVar5 = 0;
        do {
          FUN_01360490(auStack_58,*(undefined8 *)(param_1 + 8),iVar5);
          uVar4 = (*(code *)*local_78)(&local_78,auStack_58);
          if ((uVar4 & 1) != 0) break;
          bVar1 = iVar2 + -1 != iVar5;
          iVar5 = iVar5 + 1;
        } while (bVar1);
      }
    }
  }
  return local_94 != 0;
}


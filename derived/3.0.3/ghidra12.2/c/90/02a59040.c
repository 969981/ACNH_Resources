
void FUN_02a59040(long *param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  undefined **local_78;
  long lStack_70;
  long *local_68;
  undefined1 auStack_58 [40];
  
  puVar4 = PTR_DAT_04bbc570;
  iVar6 = *(int *)(param_3 + 8);
  uVar1 = PTR_DAT_04bbc570[8];
  *param_1 = (long)(PTR_DAT_04bc4608 + 0x10);
  *(undefined1 *)(param_1 + 1) = uVar1;
  puVar3 = PTR_DAT_04bb2010;
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)(puVar4 + 0xc);
  lVar9 = *(long *)(puVar4 + 0x18);
  param_1[2] = (long)(puVar3 + 0x10);
  param_1[3] = lVar9;
  uVar2 = *(undefined2 *)(puVar4 + 0x24);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(puVar4 + 0x20);
  *(undefined2 *)((long)param_1 + 0x24) = uVar2;
  if (iVar6 != 0) {
    local_78 = &PTR_FUN_04a9b150;
    if (*(long *)(param_2 + 8) != 0) {
      lStack_70 = param_3;
      local_68 = param_1;
      plVar7 = (long *)(*(code *)**(undefined8 **)(*(long *)(param_2 + 8) + 0x10))();
      iVar6 = (**(code **)(*plVar7 + 0x18))();
      if (0 < iVar6) {
        iVar10 = 0;
        do {
          FUN_01360490(auStack_58,*(undefined8 *)(param_2 + 8),iVar10);
          uVar8 = (*(code *)*local_78)(&local_78,auStack_58);
          if ((uVar8 & 1) != 0) {
            return;
          }
          bVar5 = iVar6 + -1 != iVar10;
          iVar10 = iVar10 + 1;
        } while (bVar5);
      }
    }
  }
  return;
}


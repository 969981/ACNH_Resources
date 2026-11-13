
/* WARNING: Removing unreachable block (ram,0x012e32e0) */
/* WARNING: Removing unreachable block (ram,0x012e32f0) */

void FUN_012e3208(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 local_a0;
  undefined4 local_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined2 local_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  undefined *puStack_48;
  undefined8 local_40;
  undefined1 local_38;
  
  lVar4 = *(long *)PTR_DAT_04bb2720;
  if (lVar4 == 0) {
    puVar5 = &DAT_055c04a0;
  }
  else {
    puVar5 = &DAT_055c04a0;
    if (*(long *)(lVar4 + 0x330) != 0) {
      puVar5 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar4 + 0x338));
      iVar2 = FUN_006bd550(*puVar5,0);
      puVar5 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar2 != 0x758f7eaf) {
        puVar5 = &DAT_055c04a0;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(puVar5 + 7);
  uVar3 = FUN_016cf9f0();
  if ((uVar3 & 1) != 0) {
    FUN_016cfd70(param_1 + 0x98);
    bVar1 = false;
    if (*(long *)PTR_DAT_04bb4938 != 0) {
      bVar1 = *(int *)(*(long *)PTR_DAT_04bb4938 + 0x98) != 0;
    }
    *(bool *)(param_1 + 0x94) = bVar1;
    lVar4 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
    if (lVar4 != 0) {
      local_40 = 0;
      local_98 = 200;
      local_60 = PTR_DAT_04bbc5d8 + 0x10;
      puStack_58 = PTR_DAT_04bb2018 + 0x10;
      local_90 = PTR_DAT_04bbc1a0 + 0x10;
      local_50 = 0;
      puStack_88 = PTR_DAT_04bb2010 + 0x10;
      local_80 = *(undefined4 *)(lVar4 + 0x48);
      uStack_7c = *(undefined4 *)(lVar4 + 0x4c);
      local_70 = *(undefined4 *)(lVar4 + 0x58);
      uStack_6c = *(undefined4 *)(lVar4 + 0x5c);
      local_68 = 1;
      local_38 = 1;
      local_a0 = param_2;
      local_78 = puStack_88;
      puStack_48 = puStack_58;
      FUN_01389860(param_1,&local_a0);
    }
  }
  return;
}


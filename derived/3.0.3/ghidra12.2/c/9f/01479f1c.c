
undefined8 FUN_01479f1c(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined8 uStack_50;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  byte local_38;
  
  lVar4 = *(long *)(param_1 + 0xaa0);
  *(undefined4 *)(lVar4 + 0x300) = 0;
  *(undefined8 *)(lVar4 + 0x304) = 0;
  *(undefined2 *)(lVar4 + 0x30c) = *(undefined2 *)PTR_DAT_04bb3170;
  if (*(int *)(lVar4 + 0x2b8) != 0) {
    *(undefined4 *)(lVar4 + 0x278) = 0;
    *(undefined8 *)(lVar4 + 0x2b8) = 3;
  }
  local_48 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_48);
  local_68 = PTR_DAT_04bbd460 + 0x10;
  local_60 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_60);
  local_58 = PTR_DAT_04bb2010 + 0x10;
  local_60 = local_48;
  uStack_50 = 0;
  (**(code **)(**(long **)(param_1 + 0xa90) + 0x110))
            (*(long **)(param_1 + 0xa90),&local_68,PTR_DAT_04bb2150,PTR_DAT_04bb2ce8,1);
  local_40 = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x2d0);
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
  local_3c = *(undefined4 *)(puVar5 + 7);
  local_38 = FUN_017baf44();
  local_38 = local_38 & 1;
  local_48 = PTR_DAT_04bb3140 + 0x10;
  uVar3 = FUN_014fe6fc(&local_48,uVar1);
  if ((uVar3 & 1) != 0) {
    FUN_014ff084(&local_48,&local_58,uVar1);
    FUN_014ff6a8(&local_48,&local_58,uVar1);
  }
  return 1;
}



void FUN_01475014(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined1 auStack_82 [2];
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  byte local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined8 local_50;
  int local_44;
  
  local_80 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_80);
  local_68 = PTR_DAT_04bbd460 + 0x10;
  local_60 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_60);
  local_58 = PTR_DAT_04bb2010 + 0x10;
  local_60 = local_80;
  local_50 = 0;
  (**(code **)(**(long **)(param_1 + 0xa90) + 0x110))
            (*(long **)(param_1 + 0xa90),&local_68,PTR_DAT_04bb2150,PTR_DAT_04bb2ce8,1);
  local_78 = 0;
  lVar9 = *(long *)PTR_DAT_04bb2720;
  if (lVar9 == 0) {
    puVar10 = &DAT_055c04a0;
  }
  else {
    puVar10 = &DAT_055c04a0;
    if (*(long *)(lVar9 + 0x330) != 0) {
      puVar10 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
      iVar5 = FUN_006bd550(*puVar10,0);
      puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar5 != 0x758f7eaf) {
        puVar10 = &DAT_055c04a0;
      }
    }
  }
  local_74 = *(undefined4 *)(puVar10 + 7);
  local_70 = FUN_017baf44();
  local_70 = local_70 & 1;
  local_80 = PTR_DAT_04bb3140 + 0x10;
  local_44 = *(int *)(param_1 + 0x230);
  FUN_014fb148(&local_80,*(undefined4 *)(param_1 + 0x2d0),&local_60,&local_58,&local_44);
  uVar6 = FUN_014fd6bc(&local_80,*(undefined4 *)(param_1 + 0x2d0));
  if (((uVar6 & 1) != 0) && (uVar6 = FUN_0154df90(&local_60), (uVar6 & 1) != 0)) {
    FUN_014fd424(&local_80,*(undefined1 *)(*(long *)(param_1 + 0xa88) + 0x308),&local_58,
                 *(undefined4 *)(param_1 + 0x2d0));
  }
  lVar9 = *(long *)(param_1 + 0xaa0);
  uVar3 = *(undefined4 *)(param_1 + 0x2d0);
  if (((*(uint *)(lVar9 + 0x300) >> 1 & 1) == 0) && ((*(uint *)(lVar9 + 0x300) >> 2 & 1) == 0)) {
    lVar1 = lVar9 + 0x278;
    uVar4 = *(uint *)(lVar9 + 0x300);
  }
  else {
    lVar1 = lVar9 + 0x304;
    uVar4 = *(uint *)(lVar9 + 0x300);
  }
  if (((uVar4 >> 1 & 1) == 0) && ((*(uint *)(lVar9 + 0x300) >> 2 & 1) == 0)) {
    lVar2 = lVar9 + 700;
    uVar4 = *(uint *)(lVar9 + 0x300);
  }
  else {
    lVar2 = lVar9 + 0x308;
    uVar4 = *(uint *)(lVar9 + 0x300);
  }
  if (((uVar4 >> 1 & 1) == 0) && ((*(uint *)(lVar9 + 0x300) >> 2 & 1) == 0)) {
    puVar8 = (undefined *)(lVar9 + 0x2d8);
    if (0xd < *(int *)(lVar9 + 0x278) - 0xfU) {
      puVar8 = PTR_DAT_04bb3170;
    }
  }
  else {
    puVar8 = (undefined *)(lVar9 + 0x30c);
  }
  uVar7 = FUN_007ef010(auStack_82,puVar8);
  FUN_01474eec(uVar7,&local_58,uVar3,lVar1,lVar2,auStack_82);
  *(int *)(param_1 + 0x2cc) = local_50._4_4_;
  local_44 = *(int *)(param_1 + 0x2d0);
  *(int *)(param_1 + 0x2c8) = (int)local_50;
  if (((ulong)*(ushort *)(param_1 + 0x284) < 1000) &&
     (uVar6 = (long)local_44 * 1000000 + (long)(int)local_50 * 1000 + (long)local_50._4_4_,
     uVar6 >> 0x35 == 0)) {
    *(ulong *)(PTR_DAT_04bb6258 + (ulong)*(ushort *)(param_1 + 0x284) * 0x10 + 8) =
         uVar6 | (ulong)*(uint *)(param_1 + 0x15c) << 0x35;
    local_44 = *(int *)(param_1 + 0x2d0);
  }
  FUN_01490890(1,&local_60,&local_58,&local_44);
  return;
}


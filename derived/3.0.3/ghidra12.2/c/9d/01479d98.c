
undefined8 FUN_01479d98(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_6a [2];
  undefined *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 uStack_50;
  undefined1 auStack_42 [2];
  undefined8 local_28;
  
  uVar7 = *(undefined8 *)(param_1 + 0xaa0);
  FUN_007ef010(auStack_42,param_3);
  FUN_007ef010(&local_68,auStack_42);
  FUN_007067a0(uVar7,param_2,&local_68,param_4);
  local_28 = 0xfffe;
  FUN_0277d4ac(&local_28);
  local_68 = PTR_DAT_04bbd460 + 0x10;
  local_60 = 0xfffe;
  FUN_0277d4ac(&local_60);
  local_58 = PTR_DAT_04bb2010 + 0x10;
  local_60 = local_28;
  uStack_50 = 0;
  (**(code **)(**(long **)(param_1 + 0xa90) + 0x110))
            (*(long **)(param_1 + 0xa90),&local_68,PTR_DAT_04bb2150,PTR_DAT_04bb2ce8,1);
  lVar5 = *(long *)(param_1 + 0xaa0);
  uVar2 = *(undefined4 *)(param_1 + 0x2d0);
  if (((*(uint *)(lVar5 + 0x300) >> 1 & 1) == 0) && ((*(uint *)(lVar5 + 0x300) >> 2 & 1) == 0)) {
    lVar6 = lVar5 + 0x278;
  }
  else {
    lVar6 = lVar5 + 0x304;
  }
  if (((*(uint *)(lVar5 + 0x300) >> 1 & 1) == 0) && ((*(uint *)(lVar5 + 0x300) >> 2 & 1) == 0)) {
    lVar1 = lVar5 + 700;
    uVar3 = *(uint *)(lVar5 + 0x300);
  }
  else {
    lVar1 = lVar5 + 0x308;
    uVar3 = *(uint *)(lVar5 + 0x300);
  }
  if (((uVar3 >> 1 & 1) == 0) && ((*(uint *)(lVar5 + 0x300) >> 2 & 1) == 0)) {
    puVar4 = (undefined *)(lVar5 + 0x2d8);
    if (0xd < *(int *)(lVar5 + 0x278) - 0xfU) {
      puVar4 = PTR_DAT_04bb3170;
    }
  }
  else {
    puVar4 = (undefined *)(lVar5 + 0x30c);
  }
  uVar7 = FUN_007ef010(auStack_6a,puVar4);
  FUN_01474eec(uVar7,&local_58,uVar2,lVar6,lVar1,auStack_6a);
  return 1;
}


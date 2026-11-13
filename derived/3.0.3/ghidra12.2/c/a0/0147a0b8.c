
void FUN_0147a0b8(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  byte local_58;
  
  local_68 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_68);
  local_88 = PTR_DAT_04bbd460 + 0x10;
  local_80 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_80);
  local_78 = PTR_DAT_04bb2010 + 0x10;
  local_80 = local_68;
  uStack_70 = 0;
  (**(code **)(**(long **)(param_1 + 0xa90) + 0x110))
            (*(long **)(param_1 + 0xa90),&local_88,param_3,param_4,param_5);
  local_60 = 0;
  lVar3 = *(long *)PTR_DAT_04bb2720;
  if (lVar3 == 0) {
    puVar4 = &DAT_055c04a0;
  }
  else {
    puVar4 = &DAT_055c04a0;
    if (*(long *)(lVar3 + 0x330) != 0) {
      puVar4 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar3 + 0x338));
      iVar1 = FUN_006bd550(*puVar4,0);
      puVar4 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar4 = &DAT_055c04a0;
      }
    }
  }
  local_5c = *(undefined4 *)(puVar4 + 7);
  local_58 = FUN_017baf44();
  local_58 = local_58 & 1;
  local_68 = PTR_DAT_04bb3140 + 0x10;
  uVar2 = FUN_014fe6fc(&local_68,param_2);
  if ((uVar2 & 1) != 0) {
    FUN_014ff084(&local_68,&local_78,param_2);
    FUN_014ff6a8(&local_68,&local_78,param_2);
  }
  return;
}


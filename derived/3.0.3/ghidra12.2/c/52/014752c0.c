
void FUN_014752c0(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  byte local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined8 uStack_58;
  
  local_88 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_88);
  local_70 = PTR_DAT_04bbd460 + 0x10;
  local_68 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_68);
  local_60 = PTR_DAT_04bb2010 + 0x10;
  local_68 = local_88;
  uStack_58 = 0;
  (**(code **)(**(long **)(param_1 + 0xa90) + 0x110))
            (*(long **)(param_1 + 0xa90),&local_70,param_3,param_4,param_5);
  local_80 = 0;
  if (DAT_05aed670 == 0) {
    puVar3 = &DAT_055c04a0;
  }
  else {
    puVar3 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar3 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar1 = FUN_006bd550(*puVar3,0);
      puVar3 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar3 = &DAT_055c04a0;
      }
    }
  }
  local_7c = *(undefined4 *)(puVar3 + 7);
  local_78 = FUN_017baf44();
  local_78 = local_78 & 1;
  local_88 = PTR_DAT_04bb3140 + 0x10;
  uVar2 = FUN_014fd6bc(&local_88,param_2);
  if ((uVar2 & 1) != 0) {
    FUN_014fd424(&local_88,0,&local_60,param_2);
  }
  return;
}


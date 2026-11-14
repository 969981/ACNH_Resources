
void FUN_017f0b3c(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_5e [2];
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined1 auStack_54 [2];
  undefined1 auStack_52 [2];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  
  uVar5 = *(undefined8 *)PTR_DAT_04bbd410;
  if (DAT_05aed670 == 0) {
    puVar6 = &DAT_055c04a0;
  }
  else {
    puVar6 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar6 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar4 = FUN_006bd550(*puVar6,0);
      puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar6 = &DAT_055c04a0;
      }
    }
  }
  local_48 = *(undefined4 *)(param_1 + 0xd0);
  uStack_44 = *(undefined4 *)(param_1 + 0xd4);
  local_50 = *(undefined4 *)(param_1 + 0xb4);
  uStack_4c = *(undefined4 *)(param_1 + 0xb8);
  uVar1 = *(undefined4 *)(puVar6 + 7);
  FUN_007ef010(auStack_52,param_1 + 0xd8);
  FUN_007ef010(auStack_54,param_1 + 0xbc);
  local_5c = *(undefined4 *)(param_1 + 0xf4);
  uStack_58 = *(undefined4 *)(param_1 + 0xf8);
  uVar3 = *(undefined1 *)(param_1 + 0xfe);
  uVar2 = *(undefined4 *)(param_1 + 0x100);
  FUN_007ef010(auStack_5e,param_1 + 0xfc);
  FUN_01802228(*(undefined4 *)(param_1 + 0x1d4),uVar5,uVar1,&local_48,&local_50,auStack_52,
               auStack_54,uVar3,uVar2,&local_5c,auStack_5e,*(undefined1 *)(param_1 + 0x13c),
               *(undefined4 *)(param_1 + 0x140),*(undefined2 *)(param_1 + 0x1ce),
               *(undefined1 *)(param_1 + 0x1d0),*(undefined4 *)(param_1 + 0x1f0),
               *(undefined4 *)(param_1 + 0x1fc),*(undefined4 *)(param_1 + 0x208),
               *(undefined2 *)(param_1 + 0x1cc));
  return;
}


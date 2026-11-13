
void FUN_01474eec(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auStack_5a [2];
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  byte local_48;
  
  local_50 = 0;
  lVar4 = *(long *)PTR_DAT_04bb2720;
  if (lVar4 == 0) {
    puVar5 = &DAT_055c04a0;
  }
  else {
    puVar5 = &DAT_055c04a0;
    if (*(long *)(lVar4 + 0x330) != 0) {
      puVar5 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar4 + 0x338));
      iVar2 = FUN_006bd550(*puVar5,0);
      puVar5 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar2 != 0x758f7eaf) {
        puVar5 = &DAT_055c04a0;
      }
    }
  }
  local_4c = *(undefined4 *)(puVar5 + 7);
  local_48 = FUN_017baf44();
  local_48 = local_48 & 1;
  local_58 = PTR_DAT_04bb3140 + 0x10;
  uVar3 = FUN_014fe6fc(&local_58,param_3);
  if ((uVar3 & 1) != 0) {
    uVar1 = *param_4;
    FUN_007ef010(auStack_5a,param_6);
    FUN_014fedf8(&local_58,param_2,param_3,uVar1,auStack_5a);
    FUN_014ff470(&local_58,param_2,param_3,*param_5);
  }
  return;
}


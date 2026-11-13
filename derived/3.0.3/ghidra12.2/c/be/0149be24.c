
uint FUN_0149be24(undefined8 param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  undefined8 *local_58;
  int local_50;
  int iStack_4c;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  byte local_38;
  undefined1 auStack_18 [8];
  
  local_40 = 0;
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
  local_3c = *(undefined4 *)(puVar4 + 7);
  local_38 = FUN_017baf44();
  local_38 = local_38 & 1;
  local_48 = PTR_DAT_04bb3140 + 0x10;
  local_58 = &DAT_048f9750;
  fVar6 = (float)*(int *)(param_2 + 0x14) * 5.0;
  fVar5 = (float)*(int *)(param_2 + 0x10) * 5.0;
  local_50 = (int)((float)(int)fVar5 / 5.0) - (uint)(fVar5 < 0.0);
  iStack_4c = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0);
  FUN_01a5033c(auStack_18,&local_48,0,&local_58,0);
  uVar2 = FUN_0149bc40(0x41700000,param_1,param_2);
  return uVar2 & 1;
}


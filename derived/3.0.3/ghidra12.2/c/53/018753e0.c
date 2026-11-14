
bool FUN_018753e0(long param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  byte local_38;
  undefined *local_30;
  int local_28;
  int iStack_24;
  
  uVar3 = FUN_01262040(0x40a00000,PTR_DAT_04bb5dc0,param_1 + 0x334);
  if ((uVar3 & 1) == 0) {
    bVar1 = false;
  }
  else {
    local_30 = PTR_DAT_04bb2010 + 0x10;
    local_40 = 0;
    local_48 = PTR_DAT_04bbfe68 + 0x10;
    local_28 = (int)((float)(int)*(float *)(param_1 + 0x334) / 5.0) -
               (uint)(*(float *)(param_1 + 0x334) < 0.0);
    iStack_24 = (int)((float)(int)*(float *)(param_1 + 0x33c) / 5.0) -
                (uint)(*(float *)(param_1 + 0x33c) < 0.0);
    lVar5 = *(long *)PTR_DAT_04bb2720;
    if (lVar5 == 0) {
      puVar6 = &DAT_055c04a0;
    }
    else {
      puVar6 = &DAT_055c04a0;
      if (*(long *)(lVar5 + 0x330) != 0) {
        puVar6 = (undefined8 *)
                 (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                           (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar5 + 0x338));
        iVar2 = FUN_006bd550(*puVar6,0);
        puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar2 != 0x758f7eaf) {
          puVar6 = &DAT_055c04a0;
        }
      }
    }
    local_3c = *(undefined4 *)(puVar6 + 7);
    local_38 = FUN_017baf44();
    local_38 = local_38 & 1;
    puVar4 = (undefined4 *)FUN_01a5190c(&local_48,0,&local_30,0);
    local_50 = *puVar4;
    uStack_4c = puVar4[1];
    iVar2 = FUN_0277d6c4(&local_50);
    bVar1 = iVar2 == 0xea79;
  }
  return bVar1;
}


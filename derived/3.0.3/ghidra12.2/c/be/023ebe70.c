
undefined8 FUN_023ebe70(float *param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_80;
  float local_78;
  undefined4 uStack_74;
  undefined5 uStack_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  byte local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined *puStack_40;
  int local_38;
  int iStack_34;
  short local_18 [4];
  
  local_50 = PTR_DAT_04bb2010 + 0x10;
  local_60 = 0;
  local_48 = 0;
  local_38 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
  iStack_34 = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0);
  puStack_40 = local_50;
  if (DAT_05aed670 == 0) {
    puVar5 = &DAT_055c04a0;
  }
  else {
    puVar5 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar5 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar2 = FUN_006bd550(*puVar5,0);
      puVar5 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar2 != 0x758f7eaf) {
        puVar5 = &DAT_055c04a0;
      }
    }
  }
  local_5c = *(undefined4 *)(puVar5 + 7);
  local_58 = FUN_017baf44();
  local_58 = local_58 & 1;
  local_68 = PTR_DAT_04bb3140 + 0x10;
  FUN_01a5033c(local_18,&local_68,0,&puStack_40,&local_50);
  if (local_18[0] != -2) {
    FUN_0277d6c4(local_18);
  }
  puVar1 = PTR_DAT_04bb43c0;
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(local_18);
  if (*(long *)puVar1 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      uStack_70 = 0;
      local_80 = 0;
      local_78 = 0.0;
      uStack_74 = 0;
      uVar4 = FUN_0151d310(&local_80,local_18,&local_50);
      if (((uVar4 & 1) != 0) &&
         (1.0 < SQRT((param_1[2] - local_78) * (param_1[2] - local_78) +
                     (*param_1 - (float)local_80) * (*param_1 - (float)local_80)))) {
        return 1;
      }
    }
  }
  return 0;
}


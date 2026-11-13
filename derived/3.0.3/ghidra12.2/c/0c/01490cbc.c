
undefined8 FUN_01490cbc(undefined4 *param_1,long param_2)

{
  short sVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  uint *puVar8;
  float fVar9;
  float fVar10;
  undefined **local_a8;
  undefined **local_a0;
  undefined8 *local_98;
  float local_8c [3];
  undefined *local_80;
  undefined *puStack_78;
  int local_70;
  int iStack_6c;
  undefined *local_68;
  int local_60;
  int iStack_5c;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  byte local_48;
  undefined8 local_38;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_2);
  if (*(long *)puVar2 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_38 = 0xfffe;
      FUN_0277d4ac(&local_38);
      FUN_0124f260(param_2,&local_38,0,0);
      local_50 = 0;
      lVar6 = *(long *)PTR_DAT_04bb2720;
      if (lVar6 == 0) {
        puVar7 = &DAT_055c04a0;
      }
      else {
        puVar7 = &DAT_055c04a0;
        if (*(long *)(lVar6 + 0x330) != 0) {
          puVar7 = (undefined8 *)
                   (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                             (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar6 + 0x338));
          iVar4 = FUN_006bd550(*puVar7,0);
          puVar7 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar4 != 0x758f7eaf) {
            puVar7 = &DAT_055c04a0;
          }
        }
      }
      local_4c = *(undefined4 *)(puVar7 + 7);
      local_48 = FUN_017baf44();
      local_48 = local_48 & 1;
      local_58 = PTR_DAT_04bb3140 + 0x10;
      local_80 = PTR_DAT_04bbc1a0 + 0x10;
      puStack_78 = PTR_DAT_04bb2010 + 0x10;
      local_60 = *(int *)(PTR_DAT_04bb2e10 + 8);
      iStack_5c = *(int *)(PTR_DAT_04bb2e10 + 0xc);
      local_70 = local_60;
      if (0 < local_60) {
        local_70 = 1;
      }
      if (local_60 < 2) {
        local_60 = 1;
      }
      local_70 = *(int *)(param_2 + 0x10) + local_70;
      local_60 = *(int *)(param_2 + 0x10) + local_60;
      iStack_6c = iStack_5c;
      if (0 < iStack_5c) {
        iStack_6c = 1;
      }
      if (iStack_5c < 2) {
        iStack_5c = 1;
      }
      iStack_5c = *(int *)(param_2 + 0x14) + iStack_5c;
      iStack_6c = *(int *)(param_2 + 0x14) + iStack_6c;
      sVar1 = *(short *)PTR_DAT_04bb6298;
      if (sVar1 == -1) {
        return 1;
      }
      local_a8._0_4_ = 1;
      puVar8 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar1 * 8);
      if (0xff < (uint)(int)sVar1) {
        puVar8 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar8 >> 1 & 1) == 0) {
        return 1;
      }
      puVar8 = (uint *)(param_2 + 0x1c);
      local_68 = puStack_78;
      uVar5 = FUN_01a4fafc(&local_58,*puVar8,&local_80);
      if ((uVar5 & 1) == 0) {
        return 1;
      }
      lVar6 = *(long *)PTR_DAT_04bbbc38;
      if (lVar6 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(lVar6 + 0xc);
      }
      local_a8 = (undefined **)CONCAT44(local_a8._4_4_,iVar4);
      if (((iVar4 != 0) && (local_a8 = (undefined **)CONCAT44(local_a8._4_4_,*puVar8), *puVar8 < 2))
         && (uVar5 = FUN_014e5e70(lVar6,&local_80), (uVar5 & 1) == 0)) {
        return 1;
      }
      uVar5 = FUN_0251ee60(0x3f800000,0x40a00000,&local_80,param_2 + 0x35,
                           *(undefined4 *)PTR_DAT_04bb3238,1);
      if ((uVar5 & 1) != 0) {
        return 1;
      }
      uVar5 = FUN_01a4ff00(&local_58,*puVar8,&local_80);
      if ((uVar5 & 1) == 0) {
        return 1;
      }
      if (*(char *)(param_2 + 0x34) != '\0') {
        local_8c[1] = 0.0;
        local_a0 = (undefined **)
                   CONCAT44(local_a0._4_4_,
                            ((float)iStack_6c * 5.0 + (float)iStack_5c * 5.0 + 5.0) * 0.5);
        local_a8 = (undefined **)
                   (ulong)(uint)(((float)local_70 * 5.0 + (float)local_60 * 5.0 + 5.0) * 0.5);
        local_8c[0] = (float)*(int *)(param_2 + 0x28) * 5.0 + 2.5;
        local_8c[2] = (float)*(int *)(param_2 + 0x2c) * 5.0 + 2.5;
        fVar9 = (float)FUN_0097a900(&local_a8,0);
        fVar10 = (float)FUN_0097a900(local_8c,0);
        if (fVar9 - fVar10 < -7.0) {
          return 1;
        }
        if (7.0 < fVar9 - fVar10) {
          return 1;
        }
      }
      local_a8 = &local_58;
      local_a0 = &local_80;
      local_98 = &local_38;
      uVar5 = FUN_01491070(&local_a8);
      if ((uVar5 & 1) == 0) {
        return 1;
      }
      uVar5 = FUN_022b4bac(&local_38,param_2 + 8);
      if ((uVar5 & 1) == 0) {
        return 1;
      }
      FUN_01490b64(param_1,param_2,param_2 + 0x18,param_2 + 8,param_1 + 8,puVar8,param_1 + 0xb);
      *param_1 = (undefined4)local_38;
      param_1[1] = local_38._4_4_;
      return 9;
    }
  }
  return 0;
}


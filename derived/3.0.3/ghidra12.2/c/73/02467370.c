
/* WARNING: Removing unreachable block (ram,0x024674b0) */

uint FUN_02467370(float *param_1,float *param_2,byte *param_3,undefined4 *param_4,uint param_5)

{
  uint *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  float *pfVar6;
  ulong uVar7;
  byte bVar8;
  undefined4 uVar9;
  undefined8 local_88;
  float local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  ulong local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined8 local_64;
  float local_5c;
  float fStack_58;
  float local_54;
  
  lVar5 = FUN_0251e98c(1);
  pfVar6 = (float *)(**(code **)(*(long *)(lVar5 + 0x2a0) + 0xf0))(lVar5 + 0x2a0);
  if ((param_5 & 1) == 0) {
    uVar7 = FUN_016ec07c(*pfVar6 * 0.9,param_2,1);
    pfVar6 = param_1;
  }
  else {
    if (DAT_04c487d4 == -1) {
      uVar4 = 1;
    }
    else {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((*puVar1 >> 0x19 & 1) == 0) || (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x6efba09b)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      local_88 = CONCAT44(local_88._4_4_,0x20);
      puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar2 = PTR_DAT_04bc39f8;
      }
      uVar4 = (uVar4 | *(uint *)(puVar2 + 4) & 1) ^ 1;
    }
    uVar7 = FUN_016eb3d0(param_2,uVar4);
    pfVar6 = param_2;
  }
  if ((uVar7 & 1) != 0) {
    local_88._4_4_ = (param_2[1] + param_1[1]) * 0.5;
    local_88._0_4_ = (*param_2 + *param_1) * 0.5;
    local_80 = (param_2[2] + param_1[2]) * 0.5;
    uVar9 = FUN_016e026c(0,pfVar6,0,0);
    uVar7 = FUN_02470d50(&local_88,param_3,param_4);
    if ((uVar7 & 1) != 0) {
      fStack_58 = (local_88._4_4_ + param_2[1]) * 0.5;
      local_5c = ((float)local_88 + *param_2) * 0.5;
      local_54 = (local_80 + param_2[2]) * 0.5;
      uVar7 = FUN_02470d50(uVar9,&local_5c,param_3,param_4);
      if ((uVar7 & 1) != 0) {
        fStack_58 = (local_88._4_4_ + param_1[1]) * 0.5;
        local_5c = ((float)local_88 + *param_1) * 0.5;
        local_54 = (local_80 + param_1[2]) * 0.5;
        uVar7 = FUN_02470d50(uVar9,&local_5c,param_3,param_4);
        if ((uVar7 & 1) != 0) {
          if ((param_5 & 1) != 0) {
            local_80 = param_2[2];
            local_78 = 0x3f800000;
            local_88 = *(undefined8 *)param_2;
            local_70 = local_70 & 0xffffffff00000000;
            lVar5 = FUN_0251e98c(1);
            pfVar6 = (float *)(**(code **)(*(long *)(lVar5 + 0x2a0) + 0xf0))(lVar5 + 0x2a0);
            local_74 = 0x77;
            local_7c = *pfVar6 * 0.98;
            iVar3 = FUN_016ed290(&local_88,0,0,0);
            uVar4 = 0;
            if (iVar3 != 0) goto LAB_024676cc;
          }
          local_80 = param_2[2];
          local_64 = 0x1000000000000;
          local_88 = *(undefined8 *)param_2;
          lVar5 = FUN_0251e98c(1);
          pfVar6 = (float *)(**(code **)(*(long *)(lVar5 + 0x2a0) + 0xf0))(lVar5 + 0x2a0);
          bVar8 = *param_3;
          local_74 = *param_4;
          local_70 = 0xbf8000000000001f;
          local_66 = 0;
          if (7 < bVar8) {
            bVar8 = 0xff;
          }
          local_7c = *pfVar6 * 0.98;
          local_78 = CONCAT31(local_78._1_3_,bVar8);
          local_68 = 0x101;
          uVar4 = FUN_0251fad0(&local_88,0);
          uVar4 = uVar4 ^ 1;
          goto LAB_024676cc;
        }
      }
    }
  }
  uVar4 = 0;
LAB_024676cc:
  return uVar4 & 1;
}


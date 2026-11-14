
float FUN_0153e900(undefined1 param_1 [16],undefined8 param_2,float *param_3,int param_4,int param_5
                  )

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  undefined *local_90;
  uint local_88;
  undefined4 uStack_84;
  byte local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 uStack_58;
  
  uVar4 = 0;
  do {
    uVar3 = (uint)uVar4;
    piVar1 = (int *)((long)(PTR_DAT_04bbbf90 + 8) + uVar4 * 4);
    if (0x38 < uVar3) {
      piVar1 = (int *)(PTR_DAT_04bbbf90 + 8);
    }
    if (*piVar1 == param_5) goto LAB_0153e97c;
    uVar8 = 0x39;
    if ((int)uVar3 < 0x39) {
      uVar8 = uVar3 + 1;
    }
    uVar4 = (ulong)uVar8;
  } while (uVar8 != 0x39);
  uVar4 = 0;
LAB_0153e97c:
  fVar11 = 0.0;
  local_88 = (uint)uVar4;
  if (((*(int *)(PTR_DAT_04bc3a80 + 0x38) == param_5) || (local_88 != 0)) &&
     ((param_4 - 2U & 0xff) < 4)) {
    puVar2 = (undefined4 *)((long)(PTR_DAT_04bbbf90 + 8) + uVar4 * 4);
    if (0x38 < local_88) {
      puVar2 = (undefined4 *)(PTR_DAT_04bbbf90 + 8);
    }
    uStack_84 = *puVar2;
    local_80 = FUN_017baf44(0,param_2,0);
    local_80 = local_80 & 1;
    local_90 = PTR_DAT_04bb5438 + 0x10;
    FUN_01a4fa00(&local_90);
    local_68 = 0;
    local_78 = PTR_DAT_04bbc1a0 + 0x10;
    local_70 = PTR_DAT_04bb2010 + 0x10;
    uStack_58 = 0;
    local_60 = local_70;
    uVar4 = FUN_017ba710(param_5,&local_78);
    if ((uVar4 & 1) == 0) {
      lVar7 = *(long *)PTR_DAT_04bb5ce0;
      if (lVar7 == 0) {
        iVar10 = 0;
        iVar9 = 0;
        iVar5 = 0x10;
        iVar6 = 0x10;
      }
      else {
        iVar9 = *(int *)(lVar7 + 0xd88);
        iVar10 = *(int *)(lVar7 + 0xd8c);
        iVar5 = *(int *)(lVar7 + 0xd98);
        iVar6 = *(int *)(lVar7 + 0xd9c);
      }
      if (iVar5 <= iVar9) {
        iVar9 = iVar5;
      }
      if (iVar6 <= iVar10) {
        iVar10 = iVar6;
      }
    }
    else {
      iVar9 = (int)local_68;
      iVar10 = local_68._4_4_;
    }
    local_70 = (undefined *)((ulong)local_70 & 0xffffffff00000000);
    local_78 = (undefined *)0x0;
    FUN_0153ecc4(&local_78,param_4,param_5);
    uVar4 = (ulong)(param_4 - 2U & 0xff);
    lVar7 = uVar4 * 0x24;
    if ((param_4 == 5) || (param_4 == 3)) {
      iVar9 = iVar10;
    }
    fVar11 = (param_3[1] - local_78._4_4_) * *(float *)((long)&DAT_05214c74 + lVar7) +
             (*param_3 - (float)local_78) * (float)(&DAT_05214c70)[uVar4 * 9] +
             (param_3[2] - local_70._0_4_) * *(float *)((long)&DAT_05214c74 + lVar7 + 4) +
             (float)iVar9 * 5.0;
  }
  return fVar11;
}


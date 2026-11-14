
undefined1  [16]
FUN_0153e6b0(ulong param_1,undefined8 param_2,undefined8 param_3,float *param_4,int param_5,
            int param_6)

{
  int *piVar1;
  undefined4 *puVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined1 auVar11 [16];
  int iVar12;
  undefined *local_88;
  uint local_80;
  undefined4 uStack_7c;
  byte local_78;
  int local_6c;
  undefined *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 uStack_48;
  
  uVar5 = 0;
  do {
    uVar4 = (uint)uVar5;
    piVar1 = (int *)((long)(PTR_DAT_04bbbf90 + 8) + uVar5 * 4);
    if (0x38 < uVar4) {
      piVar1 = (int *)(PTR_DAT_04bbbf90 + 8);
    }
    if (*piVar1 == param_6) goto LAB_0153e72c;
    uVar8 = 0x39;
    if ((int)uVar4 < 0x39) {
      uVar8 = uVar4 + 1;
    }
    uVar5 = (ulong)uVar8;
  } while (uVar8 != 0x39);
  uVar5 = 0;
LAB_0153e72c:
  local_80 = (uint)uVar5;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != param_6) {
    param_1 = 0;
    param_2 = 0;
    param_3 = 0;
    if (local_80 == 0) goto LAB_0153e8dc;
  }
  puVar2 = (undefined4 *)((long)(PTR_DAT_04bbbf90 + 8) + uVar5 * 4);
  if (0x38 < local_80) {
    puVar2 = (undefined4 *)(PTR_DAT_04bbbf90 + 8);
  }
  uStack_7c = *puVar2;
  local_6c = param_5;
  local_78 = FUN_017baf44(param_1,param_2,param_3);
  local_78 = local_78 & 1;
  local_88 = PTR_DAT_04bb5438 + 0x10;
  lVar3 = FUN_01a4fa00(&local_88);
  local_68 = PTR_DAT_04bbc1a0 + 0x10;
  iVar12 = *(int *)(lVar3 + 0x14);
  local_60 = PTR_DAT_04bb2010 + 0x10;
  local_58 = 0;
  uStack_48 = 0;
  local_50 = local_60;
  uVar5 = FUN_017ba710(param_6,&local_68);
  if ((uVar5 & 1) == 0) {
    lVar3 = *(long *)PTR_DAT_04bb5ce0;
    if (lVar3 == 0) {
      iVar10 = 0;
      iVar9 = 0;
      iVar6 = 0x10;
      iVar7 = 0x10;
    }
    else {
      iVar9 = *(int *)(lVar3 + 0xd88);
      iVar10 = *(int *)(lVar3 + 0xd8c);
      iVar6 = *(int *)(lVar3 + 0xd98);
      iVar7 = *(int *)(lVar3 + 0xd9c);
    }
    if (iVar6 <= iVar9) {
      iVar9 = iVar6;
    }
    if (iVar7 <= iVar10) {
      iVar10 = iVar7;
    }
  }
  else {
    iVar9 = (int)local_58;
    iVar10 = local_58._4_4_;
  }
  local_60 = (undefined *)((ulong)local_60 & 0xffffffff00000000);
  local_68 = (undefined *)0x0;
  FUN_0153ecc4(&local_68,param_5,param_6);
  if ((local_6c == 5) || (local_6c == 3)) {
    iVar9 = iVar10;
  }
  param_1 = 0;
  if ((local_6c - 2U & 0xff) < 4) {
    uVar5 = (ulong)(local_6c - 2U & 0xff);
    lVar3 = uVar5 * 0x24;
    param_1 = (ulong)(uint)(param_4[1] * *(float *)((long)&DAT_05214c7c + lVar3) +
                            (*param_4 + (float)iVar9 * -5.0) * (float)(&DAT_05214c70)[uVar5 * 9] +
                            (param_4[2] - (float)iVar12 * 5.0) *
                            *(float *)((long)&DAT_05214c84 + lVar3 + 4) + local_68._0_4_);
  }
LAB_0153e8dc:
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_1;
  return auVar11;
}


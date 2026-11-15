
undefined8 FUN_023ce290(long param_1)

{
  byte *pbVar1;
  uint *puVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined *local_88;
  undefined8 *puStack_80;
  int local_78;
  int iStack_74;
  undefined8 *local_70;
  int local_68;
  int iStack_64;
  float local_60;
  undefined4 uStack_5c;
  float local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  
  if (*(long *)(param_1 + 0x70) == 0) {
    if (*(int *)(param_1 + 0x178) == 1) {
      return 0;
    }
  }
  else if (*(int *)(*(long *)(param_1 + 0x70) + 0x280) - 0x10aU < 3 ||
           *(int *)(param_1 + 0x178) == 1) {
    return 0;
  }
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  if (((((*pbVar1 < 8) && (uVar5 = FUN_02582d8c(pbVar1,1), puVar4 = PTR_DAT_04bb4fb8, uVar5 < 8)) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d4) != '\0')) &&
      ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d6) != '\0' &&
       (uVar5 = FUN_02582d8c(pbVar1,1), uVar5 < 8)))) &&
     ((*(char *)(*(long *)puVar4 + (ulong)uVar5 * 0x13f0 + 0x13d4) != '\0' &&
      ((lVar8 = *(long *)puVar4 + (ulong)uVar5 * 0x13f0, *(int *)(lVar8 + 0x4f8) != 0 &&
       (*(char *)(lVar8 + 0x558) != '\0')))))) {
    fVar10 = *(float *)(lVar8 + 0x50c);
    uVar9 = *(undefined4 *)(lVar8 + 0x510);
    fVar11 = *(float *)(lVar8 + 0x514);
    local_54 = 0x3f80000040800000;
    local_4c = 0x77;
    local_60 = fVar10;
    uStack_5c = uVar9;
    local_58 = fVar11;
    iVar6 = FUN_016ed290(&local_60,0,0,0);
    if (iVar6 == 0) {
      uVar7 = (ulong)local_54 >> 0x30;
      local_54 = CONCAT26((ushort)uVar7 & 0xff00,0x140800000);
      local_60 = fVar10;
      uStack_5c = uVar9;
      local_58 = fVar11;
      uVar7 = FUN_016e9c80(0x40800000,&local_60,1,0,0);
      if ((uVar7 & 1) == 0) {
        return 0;
      }
      if (DAT_04c487d4 != -1) {
        local_44 = 0;
        puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
        if (0xff < (uint)(int)DAT_04c487d4) {
          puVar2 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar2 & 1) != 0) {
          local_88 = PTR_DAT_04bbc1a0 + 0x10;
          local_68 = (int)((float)(int)(fVar10 + -4.0) / 5.0) - (uint)(fVar10 + -4.0 < 0.0);
          iStack_64 = (int)((float)(int)(fVar11 + -4.0) / 5.0) - (uint)(fVar11 + -4.0 < 0.0);
          iVar6 = (int)((float)(int)(fVar10 + 4.0) / 5.0) - (uint)(fVar10 + 4.0 < 0.0);
          iVar3 = (int)((float)(int)(fVar11 + 4.0) / 5.0) - (uint)(fVar11 + 4.0 < 0.0);
          local_78 = local_68;
          if (iVar6 <= local_68) {
            local_78 = iVar6;
          }
          if (local_68 <= iVar6) {
            local_68 = iVar6;
          }
          iStack_74 = iStack_64;
          if (iVar3 <= iStack_64) {
            iStack_74 = iVar3;
          }
          if (iStack_64 <= iVar3) {
            iStack_64 = iVar3;
          }
          puStack_80 = &DAT_048f9750;
          local_70 = &DAT_048f9750;
          uVar7 = FUN_0149f9a0(&local_88);
          if ((uVar7 & 1) != 0) {
            return 0;
          }
        }
      }
      return 1;
    }
  }
  return 0;
}


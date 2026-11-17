
uint FUN_02ac61f4(long param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_70;
  float local_68;
  float local_64;
  uint local_60;
  undefined2 local_5c;
  uint local_58;
  uint local_44;
  
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x174);
    FUN_02b62bd0(&local_44,uVar1);
    uVar4 = local_44;
    local_68 = 0.0;
    local_70 = 0;
    uVar5 = FUN_02b630b0(&local_70,uVar1);
    if ((uVar5 & 1) != 0) {
      fVar7 = (float)NEON_ucvtf(local_44);
      fVar8 = sinf(fVar7 * 1.4629181e-09);
      fVar7 = cosf(fVar7 * 1.4629181e-09);
      lVar6 = *(long *)(param_1 + 0x2e0);
      fVar9 = fVar8 * 0.0;
      fVar10 = (float)local_70 + fVar9 * 0.0 + fVar7 * 0.0 + (fVar8 + 0.0) * 12.5;
      fVar9 = local_70._4_4_ + (fVar9 * 0.0 + 1.0) * 0.0 + fVar7 * 0.0 * 0.0 + fVar9 * 12.5;
      fVar7 = local_68 + (fVar7 * 0.0 * 0.0 - fVar8 * 0.0) + fVar7 * 12.5;
      if (((lVar6 == 0) || (*(int *)(lVar6 + 0x18) != 0)) || ((*(byte *)(lVar6 + 8) >> 1 & 1) == 0))
      {
        uVar3 = FUN_02ac52d0(param_1);
      }
      else {
        iVar2 = FUN_02a6cb24(param_1 + 0x298);
        local_70 = CONCAT44(local_70._4_4_,iVar2);
        if (iVar2 == 0) {
          local_44 = 0;
          uVar5 = FUN_02b67620(&local_44,*(undefined4 *)(param_1 + 0x2a0));
          if ((uVar5 & 1) != 0) {
            iVar2 = FUN_02ac52d0(param_1);
            if (iVar2 == 4) {
              uVar3 = 0x13;
              goto LAB_02ac6344;
            }
          }
        }
        uVar3 = 0;
      }
LAB_02ac6344:
      local_5c = (undefined2)uVar1;
      local_70 = CONCAT44(fVar10,uVar3);
      local_58 = (uint)(*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x17df00c3);
      local_68 = fVar9;
      local_64 = fVar7;
      local_60 = uVar4 ^ 0x80000000;
      uVar4 = FUN_01737050(param_2,&local_70,DAT_04c9a0c8);
      goto LAB_02ac6390;
    }
  }
  uVar4 = 0;
LAB_02ac6390:
  return uVar4 & 1;
}


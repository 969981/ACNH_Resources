
void FUN_0220af90(void)

{
  float *pfVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uStack_78;
  float local_74;
  undefined8 uStack_70;
  float *pfStack_68;
  float local_54;
  float local_50;
  float local_4c;
  undefined *local_48;
  undefined *puStack_40;
  int local_38;
  int iStack_34;
  undefined *local_30;
  int local_28;
  int iStack_24;
  
  uVar3 = FUN_0180c600();
  if ((uVar3 & 1) != 0) {
    uStack_70._4_4_ = 0.0;
    pfStack_68._0_4_ = 0;
    local_74 = 0.0;
    uStack_70._0_4_ = 0.0;
    local_48 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_40 = PTR_DAT_04bb2010 + 0x10;
    local_30 = puStack_40;
    FUN_016e70c0(&uStack_78);
    pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)((uint)pfStack_68 >> 0x14) & 0xff0));
    fVar6 = (float)((uint)pfStack_68 & 0xffffff) * 5.9604645e-08;
    fVar7 = *pfVar1 + fVar6 * pfVar1[1];
    fVar6 = pfVar1[2] + fVar6 * pfVar1[3];
    fVar8 = fVar7 * 0.0;
    local_54 = local_74 + fVar8 * 0.0 + fVar6 * 0.0 + (fVar7 + 0.0) * -5.0;
    local_50 = (float)uStack_70 + (fVar8 * 0.0 + 1.0) * 0.0 + fVar6 * 0.0 * 0.0 + fVar8 * -5.0;
    local_4c = uStack_70._4_4_ + (fVar6 * 0.0 * 0.0 - fVar7 * 0.0) + fVar6 * -5.0;
    FUN_016e026c(0,&local_54,0,0);
    local_38 = (int)((float)(int)(local_54 + -7.5) / 5.0) - (uint)(local_54 + -7.5 < 0.0);
    local_50 = 0.0;
    local_54 = (float)local_38 * 5.0 + 5.0;
    iStack_34 = (int)((float)(int)(local_4c + -7.5) / 5.0) - (uint)(local_4c + -7.5 < 0.0);
    local_28 = local_38 + 3;
    iStack_24 = iStack_34 + 3;
    uStack_70 = &local_48;
    uStack_78 = 0x4a77220;
    local_74 = 0.0;
    iVar2 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
    local_4c = (float)iStack_34 * 5.0 + 5.0;
    if (iVar2 != 0) {
      lVar5 = (long)iVar2 << 3;
      puVar4 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
      pfStack_68 = &local_54;
      do {
        (**(code **)CONCAT44(local_74,uStack_78))(&uStack_78,*puVar4);
        lVar5 = lVar5 + -8;
        puVar4 = puVar4 + 1;
      } while (lVar5 != 0);
    }
  }
  return;
}


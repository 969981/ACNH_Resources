
void FUN_039437e0(float param_1,long param_2,undefined4 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  float local_90;
  float fStack_8c;
  float local_88;
  undefined4 uStack_84;
  float local_80;
  float fStack_7c;
  float local_78;
  undefined4 uStack_74;
  float local_70;
  float fStack_6c;
  float local_68;
  undefined4 uStack_64;
  
  local_90 = param_1 + param_1;
  lVar11 = *(long *)PTR_DAT_04bbd7e0;
  fStack_8c = local_90 * 0.0;
  lVar10 = *(long *)PTR_DAT_04bbd7e8;
  uStack_84 = *param_3;
  uStack_74 = param_3[1];
  uStack_64 = param_3[2];
  local_88 = fStack_8c;
  local_80 = fStack_8c;
  fStack_7c = local_90;
  local_78 = fStack_8c;
  local_70 = fStack_8c;
  fStack_6c = fStack_8c;
  local_68 = local_90;
  FUN_03907810(**(undefined8 **)(DAT_05ae9310 + 0x10),param_2);
  uVar8 = *(undefined8 *)(param_2 + 0xb8);
  (**(code **)PTR_DAT_04bcf1a8)(uVar8,0x10,lVar11 + 0xc64);
  (**(code **)PTR_DAT_04bcf1b0)(uVar8,0x10,lVar11 + 0xca8);
  puVar4 = PTR_DAT_04bcf1e8;
  puVar3 = PTR_DAT_04bbd560;
  iVar1 = *(int *)(lVar11 + 0xc50);
  if (iVar1 != 0) {
    lVar11 = *(long *)(lVar11 + 0xc58);
    uVar9 = 0;
    uVar7 = 0;
    do {
      lVar6 = *(long *)(lVar11 + (-(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar7 << 3));
      if (lVar6 != 0) {
        uVar5 = (**(code **)puVar3)(lVar6 + 8);
        (**(code **)puVar4)(uVar8,uVar9 & 0xffffffff,uVar5,*(undefined4 *)(lVar6 + 0x118));
      }
      uVar9 = uVar7 + 1;
      uVar7 = uVar9 & 0xffffffff;
    } while (iVar1 != (int)uVar9);
  }
  FUN_03942970(param_2,&local_90,param_5,param_6,param_4,param_4,PTR_DAT_04bb3ea0);
  iVar1 = *(int *)(lVar10 + 0x16f0);
  if (iVar1 == 0) {
    return;
  }
  uVar2 = *(undefined4 *)(lVar10 + 0x16d4);
  uVar5 = *(undefined8 *)(param_2 + 0xb8);
  uVar8 = (**(code **)puVar3)(lVar10 + 0x16f8);
                    /* WARNING: Could not recover jumptable at 0x03943990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04bbd568)(uVar5,uVar2,*(undefined4 *)(lVar10 + 0x16d0),iVar1,uVar8);
  return;
}



void FUN_03a0eab0(long param_1,long param_2,uint param_3,ulong param_4)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  
  uVar3 = *(uint *)(param_1 + 0x90);
  lVar13 = *(long *)(param_1 + 0x98);
  (**(code **)PTR_DAT_04bcfdf8)(*(undefined4 *)(param_1 + 0xa0),*(undefined8 *)(param_2 + 0xb8));
  puVar6 = PTR_DAT_04bcf1e8;
  puVar5 = PTR_DAT_04bbd560;
  plVar16 = *(long **)(param_1 + 0x10);
  lVar10 = *(long *)PTR_DAT_04bbd7e8;
  if (*(int *)(param_1 + 8) != 0) {
    plVar1 = plVar16 + *(int *)(param_1 + 8);
    iVar15 = 0;
    uVar2 = param_3;
    if (uVar3 <= param_3) {
      uVar2 = 0;
    }
    lVar18 = 0;
    lVar13 = lVar13 + (long)(int)uVar2 * 200;
    do {
      plVar7 = (long *)*plVar16;
      if (((uint)*(ushort *)((long)plVar7 + 10) & 1 << (ulong)(param_3 & 0x1f) & 0xffffU) != 0) {
        if ((param_4 & 1) != 0) {
          (**(code **)PTR_DAT_04bcf2c8)(*(undefined8 *)(param_2 + 0xb8),1);
          plVar7 = (long *)*plVar16;
        }
        uVar8 = (**(code **)(*plVar7 + 0x28))(plVar7,lVar13 + 0x40);
        if ((uVar8 & 1) == 0) {
          lVar11 = (**(code **)(*(long *)*plVar16 + 0x30))();
          if (lVar18 != lVar11) {
            (**(code **)(*(long *)*plVar16 + 0x38))((long *)*plVar16,param_2,lVar13 + 0x50);
            lVar18 = (**(code **)(*(long *)*plVar16 + 0x30))();
          }
          (**(code **)(*(long *)*plVar16 + 0x40))((long *)*plVar16,param_2,param_1 + 0x18,iVar15);
        }
        else {
          lVar11 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x3c8) + 8);
          uVar19 = *(undefined8 *)(param_2 + 0xb8);
          lVar17 = *(long *)PTR_DAT_04bbd7e0;
          lVar12 = *(long *)(lVar11 + 0x28);
          lVar18 = 0x2a0;
          if (*(uint *)(lVar11 + 0x20) < 3) {
            lVar18 = 0;
          }
          (**(code **)PTR_DAT_04bcf1a8)(uVar19,0x10,lVar17 + 0xa84);
          (**(code **)PTR_DAT_04bcf1b0)(uVar19,0x10,lVar17 + 0xac8);
          iVar4 = *(int *)(lVar17 + 0xa70);
          if (iVar4 != 0) {
            lVar11 = *(long *)(lVar17 + 0xa78);
            uVar8 = 0;
            uVar14 = 0;
            do {
              lVar17 = *(long *)(lVar11 + (-(uVar14 >> 0x1f) & 0xfffffff800000000 | uVar14 << 3));
              if (lVar17 != 0) {
                uVar9 = (**(code **)puVar5)(lVar17 + 8);
                (**(code **)puVar6)(uVar19,uVar8 & 0xffffffff,uVar9,*(undefined4 *)(lVar17 + 0x118))
                ;
              }
              uVar8 = uVar14 + 1;
              uVar14 = uVar8 & 0xffffffff;
            } while (iVar4 != (int)uVar8);
          }
          FUN_03907810(lVar12 + lVar18,param_2);
          iVar4 = *(int *)(lVar10 + 0x708);
          if (iVar4 != 0) {
            uVar9 = *(undefined8 *)(param_2 + 0xb8);
            uVar19 = (**(code **)puVar5)(lVar10 + 0x710);
            (**(code **)PTR_DAT_04bbd568)(uVar9,0,*(undefined4 *)(lVar10 + 0x6e8),iVar4,uVar19);
          }
          lVar18 = 0;
        }
        if ((param_4 & 1) != 0) {
          lVar12 = *plVar16;
          uVar19 = *(undefined8 *)(param_2 + 0xb8);
          lVar11 = (**(code **)puVar5)(lVar12 + 0x10);
          (**(code **)PTR_DAT_04bcf2d0)(uVar19,1,lVar11 + (ulong)*(byte *)(lVar12 + 8) * 0x20);
        }
      }
      plVar16 = plVar16 + 1;
      iVar15 = iVar15 + 1;
    } while (plVar16 != plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x03a0edfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),1);
  return;
}


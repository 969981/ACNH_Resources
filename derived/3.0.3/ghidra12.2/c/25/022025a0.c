
bool FUN_022025a0(float *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined *local_a8;
  int local_a0;
  int iStack_9c;
  undefined **local_98;
  int *piStack_90;
  undefined **local_88;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined *local_68;
  undefined *puStack_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  
  if (((*(byte *)(*(long *)PTR_DAT_04bb3968 + 0xd60) >> 3 & 1) != 0) &&
     (*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x6622bd46)) {
    lVar6 = *(long *)PTR_DAT_04bb5c90;
    fVar9 = (float)*(int *)(lVar6 + 0x38) * 5.0 + 5.0;
    fVar8 = *param_1;
    bVar4 = false;
    if (((float)*(int *)(lVar6 + 0x28) * 5.0 <= fVar8) &&
       (bVar4 = false, !NAN(fVar8) && !NAN(fVar9))) {
      bVar4 = fVar8 < fVar9;
    }
    if (bVar4) {
      fVar10 = (float)*(int *)(lVar6 + 0x3c) * 5.0 + 5.0;
      fVar9 = param_1[2];
      bVar4 = false;
      if (((float)*(int *)(lVar6 + 0x2c) * 5.0 <= fVar9) &&
         (bVar4 = false, !NAN(fVar9) && !NAN(fVar10))) {
        bVar4 = fVar9 < fVar10;
      }
      if (bVar4) {
        piStack_90 = &local_74;
        local_98 = &PTR_FUN_04983b90;
        uVar3 = *(uint *)(lVar6 + 0x50);
        local_74 = 0x7e3d1e46;
        puVar1 = PTR_DAT_04bb2010 + 0x10;
        local_a0 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
        iStack_9c = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
        local_88 = &local_a8;
        if (0 < (int)uVar3) {
          uVar7 = 0;
          puVar2 = PTR_DAT_04bbc1a0 + 0x10;
          local_a8 = puVar1;
          do {
            lVar5 = *(long *)(lVar6 + 0x58);
            if (**(int **)(lVar5 + uVar7 * 8) != 0x7e3d1e46) {
              local_70 = (undefined4)uVar7;
              local_6c = **(undefined4 **)(lVar5 + uVar7 * 8);
              lVar5 = *(long *)(lVar5 + uVar7 * 8);
              local_58 = *(undefined8 *)(lVar5 + 0x18);
              local_48 = *(undefined8 *)(lVar5 + 0x28);
              local_68 = puVar2;
              puStack_60 = puVar1;
              local_50 = puVar1;
              (*(code *)*local_98)(&local_98,&local_70);
            }
            uVar7 = uVar7 + 1;
          } while (uVar3 != uVar7);
          return local_74 != 0x7e3d1e46;
        }
      }
    }
  }
  return false;
}


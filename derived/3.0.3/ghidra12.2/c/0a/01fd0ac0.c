
void FUN_01fd0ac0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  float *pfVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_48;
  undefined8 *puStack_40;
  undefined4 local_34;
  
  puVar1 = PTR_DAT_04bb2720;
  lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  if (*(int *)(param_1 + 0x123b4) - 1U < 2) {
    pfVar3 = (float *)FUN_0252d9bc(0);
    local_34 = 0;
    if (pfVar3 != (float *)0x0) {
      local_34 = FUN_006f0400(*pfVar3 - *(float *)(lVar8 + 0x278),
                              pfVar3[2] - *(float *)(lVar8 + 0x280));
    }
    local_48 = PTR_DAT_04bb2020 + 0x10;
    puStack_40 = &DAT_0407ebb1;
    FUN_01e5ab70(*(undefined8 *)(param_1 + 0x10),&local_34,PTR_DAT_04bb65b0,&local_48,6);
  }
  else {
    lVar6 = *(long *)PTR_DAT_04bb2720;
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x330) != 0)) {
      uVar7 = *(uint *)(param_1 + 0x122b8);
      puVar4 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar6 + 0x338));
      iVar2 = FUN_006bd550(*puVar4,0);
      if ((iVar2 == 0x758f7eaf) &&
         (((*(long *)puVar1 != 0 && (lVar6 = *(long *)(*(long *)puVar1 + 0x330), lVar6 != 0)) &&
          (uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU), uVar7 < *(uint *)(lVar6 + 0x260)))))
      {
        lVar6 = lVar6 + 0x250;
        uVar5 = uVar7 + 1 & 3;
        if (2 < uVar7) {
          uVar7 = uVar7 + 1 & 0xfffffffc;
          do {
            uVar7 = uVar7 - 4;
            lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(lVar6 + 8) + 8) + 8) + 8);
          } while (uVar7 != 0);
        }
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          lVar6 = *(long *)(lVar6 + 8);
        }
        if ((lVar6 != 0) && (lVar6 != 0x40)) {
          fVar9 = (float)NEON_ucvtf(*(undefined4 *)(lVar6 + -0x20));
          uVar5 = (uint)(long)(fVar9 * 11930465.0);
          uVar7 = uVar5 ^ 0x80000000;
          pfVar3 = (float *)(PTR_DAT_04bb2d00 + (ulong)(uVar7 >> 0x18) * 0x10);
          fVar9 = (float)(uVar5 & 0xffffff) * 5.9604645e-08;
          fVar10 = *pfVar3 + fVar9 * pfVar3[1];
          fVar9 = pfVar3[2] + fVar9 * pfVar3[3];
          fVar11 = fVar10 * 0.0;
          puStack_40 = (undefined8 *)
                       CONCAT44(puStack_40._4_4_,
                                *(float *)(lVar8 + 0x280) +
                                (fVar9 * 0.0 * 0.0 - fVar10 * 0.0) + fVar9 * 50.0);
          local_48 = (undefined *)
                     CONCAT44(*(float *)(lVar8 + 0x27c) +
                              (fVar11 * 0.0 + 1.0) * 0.0 + fVar9 * 0.0 * 0.0 + fVar11 * 50.0,
                              *(float *)(lVar8 + 0x278) +
                              fVar11 * 0.0 + fVar9 * 0.0 + (fVar10 + 0.0) * 50.0);
          FUN_01e5ae50((float)uVar7,*(undefined8 *)(param_1 + 0x10),&local_48,PTR_DAT_04bb6740);
        }
      }
    }
  }
  return;
}


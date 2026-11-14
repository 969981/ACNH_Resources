
void FUN_0153e274(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined *local_68;
  int local_60;
  int iStack_5c;
  undefined8 local_58;
  float local_4c;
  float local_48;
  float local_44;
  
  lVar7 = *(long *)(param_1 + 0x290);
  if (lVar7 != 0) {
    iVar5 = *(int *)(lVar7 + 0x2c8);
    local_48 = 0.0;
    iVar2 = *(int *)(lVar7 + 0x2cc);
    FUN_01473944(&local_68);
    uVar3 = *(undefined4 *)(*(long *)(param_1 + 0x290) + 0x2ac);
    fVar15 = 0.5;
    local_4c = ((float)iVar5 * 5.0 + (float)(iVar5 + local_60 + -1) * 5.0 + 5.0) * 0.5;
    fVar14 = ((float)iVar2 * 5.0 + (float)(iVar2 + iStack_5c + -1) * 5.0 + 5.0) * 0.5;
    lVar7 = *(long *)PTR_DAT_04bb2720;
    local_44 = fVar14;
    if (lVar7 == 0) {
      puVar12 = &DAT_055c04a0;
    }
    else {
      puVar12 = &DAT_055c04a0;
      if (*(long *)(lVar7 + 0x330) != 0) {
        puVar12 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar7 + 0x338));
        iVar5 = FUN_006bd550(*puVar12,0);
        puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar5 != 0x758f7eaf) {
          puVar12 = &DAT_055c04a0;
        }
      }
    }
    fVar13 = (float)FUN_0153e6b0(&local_4c,uVar3,*(undefined4 *)(puVar12 + 7));
    puVar4 = PTR_DAT_04bb43c0;
    lVar7 = *(long *)(param_1 + 0x290);
    local_58 = 0;
    local_68 = PTR_DAT_04bc0510 + 0x10;
    local_60 = *(int *)(lVar7 + 0x288);
    iStack_5c = *(undefined4 *)(lVar7 + 0x28c);
    lVar11 = *(long *)PTR_DAT_04bb43c0;
    local_4c = fVar13;
    local_48 = fVar14;
    local_44 = fVar15;
    uVar6 = FUN_0277d6c4(&local_60);
    if (*(long *)puVar4 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        lVar11 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(lVar7 + 0x288);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
           (((puVar9 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8),
             puVar9 != (uint *)0x0 && (uVar6 = *puVar9, uVar6 != 0)) &&
            (puVar9 != (uint *)(ulong)uVar6)))) {
          puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
          if (((*puVar10 != 0) && (uVar6 = puVar10[1], uVar6 != 0)) &&
             ((ulong)(ushort)puVar10[2] != 0)) {
            lVar7 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              lVar7 = 0x1c;
            }
            lVar7 = (long)puVar10 + lVar7 + (ulong)(ushort)puVar10[2] * 8;
            if (lVar7 != 0) {
              uVar1 = 0;
              if ((ulong)uVar6 != 0) {
                uVar1 = (uint)((ulong)((long)puVar9 - lVar7) / (ulong)uVar6);
              }
              if (*puVar10 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < *(uint *)PTR_DAT_04bc0048) &&
                 (*(short *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar1 * 2) == 0x19 &&
                  *(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x11889761)) {
                local_4c = fVar13 + -20.0;
                local_44 = fVar15 + -50.0;
              }
            }
          }
        }
      }
    }
    plVar8 = *(long **)(*(long *)(param_1 + 0x290) + 0x68);
    (**(code **)(*plVar8 + 0x100))(plVar8,&local_4c);
    lVar7 = *(long *)(param_1 + 0x290);
    if (lVar7 != 0) {
      local_68 = (undefined *)
                 CONCAT44(local_68._4_4_,
                          (int)(long)((float)*(int *)(lVar7 + 0x2a0) * 90.0 * 11930465.0));
      (**(code **)(**(long **)(lVar7 + 0x68) + 0x160))(*(long **)(lVar7 + 0x68),&local_68);
    }
  }
  return;
}


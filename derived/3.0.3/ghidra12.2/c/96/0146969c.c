
void FUN_0146969c(long *param_1,undefined4 *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  uint *puVar9;
  long *plVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  undefined *local_78;
  char *pcStack_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  puVar2 = PTR_DAT_04bb43c0;
  if (param_1 != (long *)0x0) {
    lVar12 = *(long *)PTR_DAT_04bb43c0;
    uVar5 = FUN_0277d6c4(param_2);
    puVar4 = PTR_DAT_04bc0510;
    lVar13 = *(long *)puVar2;
    if (lVar13 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        local_58 = 0;
        local_60 = *param_2;
        uStack_5c = param_2[1];
        local_68 = PTR_DAT_04bc0510 + 0x10;
        uVar5 = FUN_0277d6c4(&local_60);
        puVar3 = PTR_DAT_04bc0428;
        if (*(long *)puVar2 != 0) {
          lVar12 = *(long *)(lVar13 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
            lVar12 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4(param_2);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
            if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
               (((puVar9 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8),
                 puVar9 != (uint *)0x0 && (uVar5 = *puVar9, uVar5 != 0)) &&
                (puVar9 != (uint *)(ulong)uVar5)))) {
              puVar11 = (uint *)((long)puVar9 - (long)(ulong)uVar5);
              if (((*puVar11 != 0) && (uVar5 = puVar11[1], uVar5 != 0)) &&
                 ((ulong)(ushort)puVar11[2] != 0)) {
                lVar12 = 0xc;
                if (*(char *)((long)puVar11 + 10) != '\0') {
                  lVar12 = 0x1c;
                }
                lVar12 = (long)puVar11 + lVar12 + (ulong)(ushort)puVar11[2] * 8;
                if (lVar12 != 0) {
                  uVar7 = 0;
                  if ((ulong)uVar5 != 0) {
                    uVar7 = (uint)((ulong)((long)puVar9 - lVar12) / (ulong)uVar5);
                  }
                  if (*puVar11 <= uVar7) {
                    uVar7 = 0xffffffff;
                  }
                  if (((uVar7 < *(uint *)PTR_DAT_04bc0048) &&
                      (uVar1 = *(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar7 * 2),
                      uVar1 < 0x52)) && (uVar1 == 0x51)) {
                    local_60 = *param_2;
                    uStack_5c = param_2[1];
                    local_68 = puVar4 + 0x10;
                    lVar12 = *(long *)puVar2;
                    local_58 = 0;
                    uVar5 = FUN_0277d6c4(&local_60);
                    if (*(long *)puVar2 != 0) {
                      lVar12 = *(long *)(lVar12 + 0x57e58);
                      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
                      if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
                         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
                        lVar12 = *(long *)puVar3;
                        uVar5 = FUN_0277d6c4(param_2);
                        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
                        if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
                           (lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8),
                           lVar12 != 0)) {
                          local_58 = lVar12;
                        }
                      }
                    }
                    iVar6 = FUN_01ad7260(&local_68);
                    fVar14 = 0.0;
                    if ((iVar6 != 0) &&
                       (puVar8 = (ushort *)FUN_01afd600(&local_68), puVar8 != (ushort *)0x0)) {
                      uVar5 = *puVar8 & 7;
                      uVar7 = FUN_01ad7260(&local_68);
                      if (uVar7 <= uVar5) {
                        uVar5 = 0;
                      }
                      fVar14 = (float)uVar5;
                    }
                    puVar2 = PTR_DAT_04bb2020;
                    lVar12 = param_1[0x227];
                    local_78 = PTR_DAT_04bb2020 + 0x10;
                    pcStack_70 = "ReBodyID";
                    if (lVar12 != 0) {
                      if ((*(long *)(lVar12 + 0x78) != 0) &&
                         (plVar10 = *(long **)(*(long *)(lVar12 + 0x78) + 0x48),
                         plVar10 != (long *)0x0)) {
                        (**(code **)(*plVar10 + 0x30))(fVar14,plVar10,&local_78);
                        lVar12 = param_1[0x227];
                        if (lVar12 == 0) {
                          return;
                        }
                      }
                      pcStack_70 = "Remake";
                      local_78 = puVar2 + 0x10;
                      FUN_038501b0(0,lVar12,1);
                      lVar12 = param_1[0x227];
                      if (*(char *)(lVar12 + 0x2c0) != '\0') {
                        *(undefined1 *)(lVar12 + 0x2c0) = 0;
                        FUN_03855b20(lVar12 + 0xc0,0);
                      }
                      FUN_0384f8c0(lVar12,&local_78,1,0);
                      (**(code **)(*param_1 + 0x120))(param_1,&local_78,0,1);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}


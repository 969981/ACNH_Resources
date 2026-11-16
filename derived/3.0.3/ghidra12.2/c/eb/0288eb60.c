
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0288eb60(long param_1,long *param_2,int param_3)

{
  undefined2 *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  uint local_b4;
  undefined **local_b0;
  undefined2 local_a8;
  undefined2 local_a6;
  undefined4 local_a4;
  undefined8 local_a0;
  uint local_98;
  uint uStack_94;
  uint local_90;
  uint uStack_8c;
  undefined8 local_88;
  uint *puStack_80;
  undefined1 auStack_68 [8];
  
  puVar5 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar13 = *puVar5 ^ *puVar5 << 0xb;
  uVar9 = puVar5[3];
  *puVar5 = puVar5[1];
  puVar5[1] = puVar5[2];
  uVar3 = uVar13 ^ uVar9;
  uVar13 = uVar13 >> 8 ^ uVar9 >> 0x13 ^ uVar3;
  puVar5[2] = uVar9;
  puVar5[3] = uVar13;
  puVar2 = PTR_DAT_04bb43c0;
  local_98 = (uVar13 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
  uStack_94 = (local_98 ^ local_98 >> 0x1e) * 0x6c078965 + 2;
  local_90 = (uStack_94 ^ uStack_94 >> 0x1e) * 0x6c078965 + 3;
  uStack_8c = (local_90 ^ local_90 >> 0x1e) * 0x6c078965 + 4;
  if (param_2 != (long *)0x0) {
    iVar12 = 0;
    do {
      lVar6 = (**(code **)(*param_2 + 0x20))(param_2);
      lVar10 = 0;
      iVar8 = 0;
      do {
        puVar5 = (uint *)(lVar6 + lVar10);
        lVar10 = lVar10 + 4;
        uVar13 = *puVar5 - (*puVar5 >> 1 & 0x55555555);
        uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
        uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f;
        uVar13 = uVar13 + (uVar13 >> 8);
        iVar8 = (uVar13 + (uVar13 >> 0x10) & 0x3f) + iVar8;
      } while (lVar10 != 0x754);
      if (iVar8 == 0) {
        return;
      }
      uVar13 = 0;
      do {
        lVar6 = *(long *)puVar2;
        puVar1 = (undefined2 *)(param_1 + 4 + ((long)((ulong)uVar13 << 0x20) >> 0x1d));
        uVar3 = FUN_0277d6c4(puVar1);
        lVar10 = *(long *)puVar2;
        if (lVar10 != 0) {
          lVar6 = *(long *)(lVar6 + 0x57e58);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
            lVar6 = param_1 + 4 + (long)(int)uVar13 * 8;
            local_a0 = 0;
            local_a6 = *(undefined2 *)(lVar6 + 2);
            local_a4 = *(undefined4 *)(lVar6 + 4);
            local_b0 = &PTR_FUN_04a36b50;
            local_a8 = *puVar1;
            uVar3 = FUN_0277d6c4(&local_a8);
            if (*(long *)puVar2 != 0) {
              lVar10 = *(long *)(lVar10 + 0x57e58);
              uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
              if ((uVar3 < *(uint *)(lVar10 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
                lVar10 = *(long *)PTR_DAT_04bc0428;
                uVar3 = FUN_0277d6c4(puVar1);
                uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
                if ((uVar3 < *(uint *)(lVar10 + 0x1d8)) &&
                   (puVar5 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8),
                   puVar5 != (uint *)0x0)) {
                  uVar3 = *puVar5;
                  uVar9 = 0;
                  if ((uVar3 != 0) && (puVar5 != (uint *)(ulong)uVar3)) {
                    puVar11 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
                    uVar9 = 0;
                    if (*puVar11 != 0) {
                      uVar3 = puVar11[1];
                      if ((uVar3 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
                        lVar10 = 0xc;
                        if (*(char *)((long)puVar11 + 10) != '\0') {
                          lVar10 = 0x1c;
                        }
                        lVar10 = (long)puVar11 + lVar10 + (ulong)(ushort)puVar11[2] * 8;
                        if (lVar10 != 0) {
                          uVar9 = 0;
                          if ((ulong)uVar3 != 0) {
                            uVar9 = (uint)((ulong)((long)puVar5 - lVar10) / (ulong)uVar3);
                          }
                          if (*puVar11 <= uVar9) {
                            uVar9 = 0xffffffff;
                          }
                          if ((uVar9 < DAT_05326ce8) &&
                             (uVar9 = (uint)*(ushort *)(DAT_05326cf0 + (long)(int)uVar9 * 2),
                             uVar9 < 0x5b6)) goto LAB_0288ee68;
                        }
                      }
                      uVar9 = 0;
                    }
                  }
LAB_0288ee68:
                  local_88 = (undefined **)CONCAT44(local_88._4_4_,uVar9);
                  if (uVar9 == 0) goto LAB_0288ece4;
                  uVar3 = *puVar5;
                  local_b4 = 0;
                  if ((uVar3 != 0) && (puVar5 != (uint *)(ulong)uVar3)) {
                    puVar11 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
                    local_b4 = 0;
                    if (*puVar11 != 0) {
                      uVar3 = puVar11[1];
                      if ((uVar3 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
                        lVar10 = 0xc;
                        if (*(char *)((long)puVar11 + 10) != '\0') {
                          lVar10 = 0x1c;
                        }
                        lVar10 = (long)puVar11 + lVar10 + (ulong)(ushort)puVar11[2] * 8;
                        if (lVar10 != 0) {
                          uVar9 = 0;
                          if ((ulong)uVar3 != 0) {
                            uVar9 = (uint)((ulong)((long)puVar5 - lVar10) / (ulong)uVar3);
                          }
                          if (*puVar11 <= uVar9) {
                            uVar9 = 0xffffffff;
                          }
                          if ((uVar9 < *(uint *)PTR_DAT_04bc0020) &&
                             (local_b4 = (uint)*(ushort *)
                                                (*(long *)(PTR_DAT_04bc0020 + 8) +
                                                (long)(int)uVar9 * 2), local_b4 < 0x5b6))
                          goto LAB_0288ef10;
                        }
                      }
                      local_b4 = 0;
                    }
                  }
LAB_0288ef10:
                  uVar3 = 0;
                  puStack_80 = &local_b4;
                  local_88 = &PTR_FUN_049ff858;
                  do {
                    (**(code **)(*param_2 + 0x10))(auStack_68,param_2,uVar3);
                    lVar10 = (**(code **)(*param_2 + 0x20))(param_2);
                    uVar9 = 1 << (ulong)(uVar3 & 0x1f);
                    if ((*(uint *)(lVar10 + (ulong)(uVar3 >> 5) * 4) & uVar9) != 0) {
                      lVar10 = *(long *)puVar2;
                      uVar4 = FUN_0277d6c4(auStack_68);
                      if (*(long *)puVar2 != 0) {
                        lVar10 = *(long *)(lVar10 + 0x57e58);
                        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
                        if (((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
                            (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) &&
                           (uVar7 = (*(code *)*local_88)(&local_88,auStack_68), (uVar7 & 1) == 0))
                        goto LAB_0288ef50;
                      }
                      lVar10 = (**(code **)(*param_2 + 0x18))(param_2);
                      lVar6 = (ulong)(uVar3 >> 5) * 4;
                      *(uint *)(lVar10 + lVar6) = *(uint *)(lVar10 + lVar6) & (uVar9 ^ 0xffffffff);
                    }
LAB_0288ef50:
                    uVar3 = uVar3 + 1;
                  } while (uVar3 != 15000);
                  goto LAB_0288ece4;
                }
              }
            }
            local_88 = (undefined **)((ulong)local_88 & 0xffffffff00000000);
          }
        }
LAB_0288ece4:
        uVar13 = uVar13 + 1;
      } while (uVar13 != 0x80);
      lVar6 = (**(code **)(*param_2 + 0x20))(param_2);
      lVar10 = 0;
      iVar8 = 0;
      do {
        puVar5 = (uint *)(lVar6 + lVar10);
        lVar10 = lVar10 + 4;
        uVar13 = *puVar5 - (*puVar5 >> 1 & 0x55555555);
        uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
        uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f;
        uVar13 = uVar13 + (uVar13 >> 8);
        iVar8 = (uVar13 + (uVar13 >> 0x10) & 0x3f) + iVar8;
      } while (lVar10 != 0x754);
      if (iVar8 == 0) {
        local_88 = (undefined **)CONCAT44(DAT_0558600c,_DAT_05586008);
      }
      else {
        lVar6 = (**(code **)(*param_2 + 0x20))(param_2);
        lVar10 = 0;
        uVar13 = 0;
        do {
          puVar5 = (uint *)(lVar6 + lVar10);
          lVar10 = lVar10 + 4;
          uVar3 = *puVar5 - (*puVar5 >> 1 & 0x55555555);
          uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
          uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
          uVar3 = uVar3 + (uVar3 >> 8);
          uVar13 = (uVar3 + (uVar3 >> 0x10) & 0x3f) + uVar13;
        } while (lVar10 != 0x754);
        uVar3 = local_98 ^ local_98 << 0xb;
        local_98 = uStack_94;
        uStack_94 = local_90;
        uVar3 = uVar3 >> 8 ^ uStack_8c >> 0x13 ^ uVar3 ^ uStack_8c;
        local_90 = uStack_8c;
        uStack_8c = uVar3;
        FUN_00889f80(&local_88,param_2,(int)((ulong)uVar3 * (ulong)uVar13 >> 0x20) + 1);
        FUN_01a4c66c(&local_98,&local_88);
      }
      FUN_0288f130(param_1,&local_88);
      iVar12 = iVar12 + 1;
    } while (iVar12 != param_3);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0288a550(long param_1,long *param_2,int param_3)

{
  undefined *puVar1;
  undefined2 *puVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  undefined8 *puVar11;
  uint uVar12;
  long lVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  uint local_19c;
  undefined *local_198;
  undefined2 local_190;
  undefined2 local_18e;
  undefined4 local_18c;
  undefined8 local_188;
  uint local_180;
  uint uStack_17c;
  uint local_178;
  uint uStack_174;
  undefined1 auStack_170 [8];
  undefined8 local_168;
  uint *puStack_160;
  
  puVar7 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar15 = *puVar7 ^ *puVar7 << 0xb;
  uVar12 = puVar7[3];
  *puVar7 = puVar7[1];
  puVar7[1] = puVar7[2];
  uVar5 = uVar15 ^ uVar12;
  uVar15 = uVar15 >> 8 ^ uVar12 >> 0x13 ^ uVar5;
  puVar7[2] = uVar12;
  puVar7[3] = uVar15;
  local_180 = (uVar15 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  uStack_17c = (local_180 ^ local_180 >> 0x1e) * 0x6c078965 + 2;
  local_178 = (uStack_17c ^ uStack_17c >> 0x1e) * 0x6c078965 + 3;
  uStack_174 = (local_178 ^ local_178 >> 0x1e) * 0x6c078965 + 4;
  if (param_2 == (long *)0x0) {
    return;
  }
  if (DAT_05574040 != 0) {
    puVar11 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar8 = (**(code **)(*(long *)*puVar11 + 0x38))();
      lVar13 = 0;
      if (lVar8 != 0) {
        lVar13 = lVar8 + 0x70;
      }
      goto LAB_0288a650;
    }
    if (puVar11 != (undefined8 *)0x0) {
      lVar13 = 0;
      if ((long *)puVar11[0x26] != (long *)0x0) {
        lVar13 = (**(code **)(*(long *)puVar11[0x26] + 0x38))();
      }
      goto LAB_0288a650;
    }
  }
  lVar13 = 0;
LAB_0288a650:
  if ((*(long **)(lVar13 + 0x1bc828) == (long *)0x0) ||
     (puVar11 = (undefined8 *)**(long **)(lVar13 + 0x1bc828), puVar11 == (undefined8 *)0x0)) {
    FUN_010eee58(&local_168,*(long *)(lVar13 + 0x1bc810) + *(long *)(lVar13 + 0x1bc808));
  }
  else {
    uVar9 = (**(code **)*puVar11)();
    FUN_010eee58(&local_168,*(long *)(lVar13 + 0x1bc810) + *(long *)(lVar13 + 0x1bc808));
    if ((((uVar9 & 1) != 0) && (*(long *)(lVar13 + 0x1bc828) != 0)) &&
       (puVar11 = *(undefined8 **)(*(long *)(lVar13 + 0x1bc828) + 8), puVar11 != (undefined8 *)0x0))
    {
      (**(code **)*puVar11)();
    }
  }
  puVar4 = PTR_DAT_04bb43c0;
  uVar15 = 0;
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  do {
    uVar5 = FUN_0277d6c4(auStack_170 + ((long)((ulong)uVar15 << 0x20) >> 0x1d) + 8);
    lVar8 = *(long *)puVar4;
    if (lVar8 != 0) {
      lVar13 = *(long *)(lVar13 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar13 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        lVar13 = (**(code **)(*param_2 + 0x18))(param_2);
        uVar5 = FUN_0277d6c4(auStack_170 + ((long)((ulong)uVar15 << 0x20) >> 0x1d) + 8);
        lVar8 = *(long *)puVar4;
        if ((uVar5 >> 3 & 0x1fff) < 0x753) {
          lVar3 = (ulong)((uVar5 & 0xffff) >> 5) * 4;
          *(uint *)(lVar13 + lVar3) =
               *(uint *)(lVar13 + lVar3) & (1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU);
        }
      }
    }
    uVar15 = uVar15 + 1;
    lVar13 = lVar8;
  } while (uVar15 != 0x20);
  iVar16 = 0;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  do {
    lVar8 = (**(code **)(*param_2 + 0x20))(param_2);
    lVar13 = 0;
    iVar10 = 0;
    do {
      puVar7 = (uint *)(lVar8 + lVar13);
      lVar13 = lVar13 + 4;
      uVar15 = *puVar7 - (*puVar7 >> 1 & 0x55555555);
      uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
      uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
      uVar15 = uVar15 + (uVar15 >> 8);
      iVar10 = (uVar15 + (uVar15 >> 0x10) & 0x3f) + iVar10;
    } while (lVar13 != 0x754);
    if (iVar10 == 0) {
      return;
    }
    uVar15 = 0;
    do {
      lVar8 = *(long *)puVar4;
      puVar2 = (undefined2 *)(param_1 + ((long)((ulong)uVar15 << 0x20) >> 0x1d));
      uVar5 = FUN_0277d6c4(puVar2);
      lVar13 = *(long *)puVar4;
      if (lVar13 != 0) {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          lVar8 = param_1 + (long)(int)uVar15 * 8;
          local_188 = 0;
          local_18e = *(undefined2 *)(lVar8 + 2);
          local_18c = *(undefined4 *)(lVar8 + 4);
          local_190 = *puVar2;
          local_198 = puVar1;
          uVar5 = FUN_0277d6c4(&local_190);
          if (*(long *)puVar4 != 0) {
            lVar13 = *(long *)(lVar13 + 0x57e58);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
            if ((uVar5 < *(uint *)(lVar13 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
              lVar13 = *(long *)PTR_DAT_04bc0428;
              uVar5 = FUN_0277d6c4(puVar2);
              uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
              if ((uVar5 < *(uint *)(lVar13 + 0x1d8)) &&
                 (puVar7 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar5 * 8),
                 puVar7 != (uint *)0x0)) {
                uVar5 = *puVar7;
                uVar12 = 0;
                if ((uVar5 != 0) && (puVar7 != (uint *)(ulong)uVar5)) {
                  puVar14 = (uint *)((long)puVar7 - (long)(ulong)uVar5);
                  uVar12 = 0;
                  if (*puVar14 != 0) {
                    uVar5 = puVar14[1];
                    if ((uVar5 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
                      lVar13 = 0xc;
                      if (*(char *)((long)puVar14 + 10) != '\0') {
                        lVar13 = 0x1c;
                      }
                      lVar13 = (long)puVar14 + lVar13 + (ulong)(ushort)puVar14[2] * 8;
                      if (lVar13 != 0) {
                        uVar12 = 0;
                        if ((ulong)uVar5 != 0) {
                          uVar12 = (uint)((ulong)((long)puVar7 - lVar13) / (ulong)uVar5);
                        }
                        if (*puVar14 <= uVar12) {
                          uVar12 = 0xffffffff;
                        }
                        if ((uVar12 < DAT_05326ce8) &&
                           (uVar12 = (uint)*(ushort *)(DAT_05326cf0 + (long)(int)uVar12 * 2),
                           uVar12 < 0x5b6)) goto LAB_0288a9d4;
                      }
                    }
                    uVar12 = 0;
                  }
                }
LAB_0288a9d4:
                local_168 = (undefined **)CONCAT44(local_168._4_4_,uVar12);
                if (uVar12 == 0) goto LAB_0288a850;
                uVar5 = *puVar7;
                local_19c = 0;
                if ((uVar5 != 0) && (puVar7 != (uint *)(ulong)uVar5)) {
                  puVar14 = (uint *)((long)puVar7 - (long)(ulong)uVar5);
                  local_19c = 0;
                  if (*puVar14 != 0) {
                    uVar5 = puVar14[1];
                    if ((uVar5 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
                      lVar13 = 0xc;
                      if (*(char *)((long)puVar14 + 10) != '\0') {
                        lVar13 = 0x1c;
                      }
                      lVar13 = (long)puVar14 + lVar13 + (ulong)(ushort)puVar14[2] * 8;
                      if (lVar13 != 0) {
                        uVar12 = 0;
                        if ((ulong)uVar5 != 0) {
                          uVar12 = (uint)((ulong)((long)puVar7 - lVar13) / (ulong)uVar5);
                        }
                        if (*puVar14 <= uVar12) {
                          uVar12 = 0xffffffff;
                        }
                        if ((uVar12 < *(uint *)PTR_DAT_04bc0020) &&
                           (local_19c = (uint)*(ushort *)
                                               (*(long *)(PTR_DAT_04bc0020 + 8) +
                                               (long)(int)uVar12 * 2), local_19c < 0x5b6))
                        goto LAB_0288aa7c;
                      }
                    }
                    local_19c = 0;
                  }
                }
LAB_0288aa7c:
                uVar5 = 0;
                puStack_160 = &local_19c;
                local_168 = &PTR_FUN_049ff858;
                do {
                  (**(code **)(*param_2 + 0x10))(auStack_170,param_2,uVar5);
                  lVar13 = (**(code **)(*param_2 + 0x20))(param_2);
                  uVar12 = 1 << (ulong)(uVar5 & 0x1f);
                  if ((*(uint *)(lVar13 + (ulong)(uVar5 >> 5) * 4) & uVar12) != 0) {
                    lVar13 = *(long *)puVar4;
                    uVar6 = FUN_0277d6c4(auStack_170);
                    if (*(long *)puVar4 != 0) {
                      lVar13 = *(long *)(lVar13 + 0x57e58);
                      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
                      if (((uVar6 < *(uint *)(lVar13 + 0x1d8)) &&
                          (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) &&
                         (uVar9 = (*(code *)*local_168)(&local_168,auStack_170), (uVar9 & 1) == 0))
                      goto LAB_0288aac0;
                    }
                    lVar13 = (**(code **)(*param_2 + 0x18))(param_2);
                    lVar8 = (ulong)(uVar5 >> 5) * 4;
                    *(uint *)(lVar13 + lVar8) = *(uint *)(lVar13 + lVar8) & (uVar12 ^ 0xffffffff);
                  }
LAB_0288aac0:
                  uVar5 = uVar5 + 1;
                } while (uVar5 != 15000);
                goto LAB_0288a850;
              }
            }
          }
          local_168 = (undefined **)((ulong)local_168 & 0xffffffff00000000);
        }
      }
LAB_0288a850:
      uVar15 = uVar15 + 1;
    } while (uVar15 != 0x20);
    lVar8 = (**(code **)(*param_2 + 0x20))(param_2);
    lVar13 = 0;
    iVar10 = 0;
    do {
      puVar7 = (uint *)(lVar8 + lVar13);
      lVar13 = lVar13 + 4;
      uVar15 = *puVar7 - (*puVar7 >> 1 & 0x55555555);
      uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
      uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
      uVar15 = uVar15 + (uVar15 >> 8);
      iVar10 = (uVar15 + (uVar15 >> 0x10) & 0x3f) + iVar10;
    } while (lVar13 != 0x754);
    if (iVar10 == 0) {
      local_168 = (undefined **)CONCAT44(DAT_0558600c,_DAT_05586008);
    }
    else {
      lVar8 = (**(code **)(*param_2 + 0x20))(param_2);
      lVar13 = 0;
      uVar15 = 0;
      do {
        puVar7 = (uint *)(lVar8 + lVar13);
        lVar13 = lVar13 + 4;
        uVar5 = *puVar7 - (*puVar7 >> 1 & 0x55555555);
        uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
        uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
        uVar5 = uVar5 + (uVar5 >> 8);
        uVar15 = (uVar5 + (uVar5 >> 0x10) & 0x3f) + uVar15;
      } while (lVar13 != 0x754);
      uVar5 = local_180 ^ local_180 << 0xb;
      local_180 = uStack_17c;
      uStack_17c = local_178;
      uVar5 = uVar5 >> 8 ^ uStack_174 >> 0x13 ^ uVar5 ^ uStack_174;
      local_178 = uStack_174;
      uStack_174 = uVar5;
      FUN_00889f80(&local_168,param_2,(int)((ulong)uVar5 * (ulong)uVar15 >> 0x20) + 1);
      FUN_01a4c66c(&local_180,&local_168);
    }
    FUN_0288b980(param_1,&local_168);
    iVar16 = iVar16 + 1;
    if (iVar16 == param_3) {
      return;
    }
  } while( true );
}


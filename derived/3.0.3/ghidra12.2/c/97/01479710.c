
void FUN_01479710(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *__s;
  uint uVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  int iVar11;
  int *piVar12;
  char cVar13;
  long lVar14;
  uint *puVar15;
  long *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined *puStack_a0;
  undefined8 local_98;
  uint local_8c;
  undefined *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  puVar4 = PTR_DAT_04bc0510;
  puVar3 = PTR_DAT_04bb43c0;
  if ((param_3 & 1) != 0) {
    if (*(int *)(param_1 + 0x2d4) == 0) {
      local_b8 = (long *)(PTR_DAT_04bc0510 + 0x10);
      local_b0 = *(undefined **)(param_1 + 0x288);
      lVar14 = *(long *)PTR_DAT_04bb43c0;
      local_a8 = 0;
      uVar5 = FUN_0277d6c4(&local_b0);
      if (*(long *)puVar3 != 0) {
        lVar14 = *(long *)(lVar14 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          lVar14 = *(long *)PTR_DAT_04bc0428;
          uVar5 = FUN_0277d6c4(param_1 + 0x288);
          __s = PTR_DAT_04bbfe90;
          puVar1 = PTR_DAT_04bbfe88;
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
             ((puVar15 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8),
              puVar15 != (uint *)0x0 && (uVar5 = *puVar15, uVar5 != 0)))) {
            cVar13 = *PTR_DAT_04bbfe88;
            do {
              if (cVar13 == '\0') {
                *puVar1 = 1;
                memset(__s,0xff,0x1ac);
                uVar5 = *puVar15;
                cVar13 = '\x01';
              }
              else {
                uVar2 = *(uint *)(__s + 0x1a4);
                if (-1 < (int)uVar2) {
                  if (((char *)((ulong)uVar2 + (long)puVar15) != (char *)0x0) &&
                     (*(char *)((ulong)uVar2 + (long)puVar15) != '\0')) {
                    plVar7 = *(long **)(param_1 + 0xa80);
                    local_b8 = (long *)(PTR_DAT_04bb2020 + 0x10);
                    local_b0 = PTR_DAT_04bbcb98 + 0x95;
                    if (plVar7[0x227] != 0) {
                      FUN_038501b0(0,plVar7[0x227],2);
                      lVar14 = plVar7[0x227];
                      if (*(char *)(lVar14 + 0x2c0) != '\0') {
                        *(undefined1 *)(lVar14 + 0x2c0) = 0;
                        FUN_03855b20(lVar14 + 0xc0,0);
                      }
                      FUN_0384f8c0(lVar14,&local_b8,2,0);
                      (**(code **)(*plVar7 + 0x120))(plVar7,&local_b8,0,2);
                    }
                  }
                  break;
                }
                if (uVar2 != 0xffffffff) break;
              }
              puVar10 = (uint *)(ulong)uVar5;
              if ((puVar10 == (uint *)0x0) || (puVar15 == puVar10)) break;
              lVar14 = 0xc;
              if (*(char *)((long)puVar15 + (10 - (long)puVar10)) != '\0') {
                lVar14 = 0x1c;
              }
              lVar14 = (long)puVar15 + (lVar14 - (long)puVar10);
              if (lVar14 == 0) break;
              uVar8 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar10));
              *(undefined4 *)(__s + 0x1a4) = 0xfffffffe;
              if (uVar8 == 0) break;
              piVar12 = (int *)(lVar14 + 4);
              while (piVar12[-1] != 0x7404ebb3) {
                piVar12 = piVar12 + 2;
                uVar8 = uVar8 - 1;
                if (uVar8 == 0) goto LAB_01479758;
              }
              iVar6 = 0;
              if (*piVar12 != -1) {
                iVar6 = *piVar12;
              }
              *(int *)(__s + 0x1a4) = iVar6;
              uVar5 = *puVar15;
              if (uVar5 == 0) break;
            } while( true );
          }
        }
      }
    }
LAB_01479758:
    local_98 = 0;
    local_78 = puVar4 + 0x10;
    local_b8 = (long *)(PTR_DAT_04bbc1a0 + 0x10);
    local_b0 = PTR_DAT_04bb2010 + 0x10;
    local_a8 = 0;
    uStack_6c = *(undefined4 *)(param_1 + 0x28c);
    lVar14 = *(long *)puVar3;
    local_68 = 0;
    local_88 = PTR_DAT_04bb2e18 + 0x10;
    local_80 = 0;
    local_70 = *(undefined4 *)(param_1 + 0x288);
    puStack_a0 = local_b0;
    uVar5 = FUN_0277d6c4(&local_70);
    if (*(long *)puVar3 != 0) {
      lVar14 = *(long *)(lVar14 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        lVar14 = *(long *)PTR_DAT_04bc0428;
        uVar5 = FUN_0277d6c4(param_1 + 0x288);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if (uVar5 < *(uint *)(lVar14 + 0x1d8)) {
          lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8);
          if (lVar14 != 0) {
            local_68 = lVar14;
          }
        }
      }
    }
    FUN_01afb1a0(&local_78,&local_88);
    local_8c = *(int *)(*(long *)(param_1 + 0x68) + 0x2b4) + 0x20000000U >> 0x1e;
    local_78 = (undefined *)CONCAT44(local_78._4_4_,*(int *)(param_1 + 0x2d0));
    iVar11 = (int)local_80;
    iVar6 = local_80._4_4_;
    if (3 < *(int *)(param_1 + 0x2d0) - 2U) {
      iVar6 = (int)local_80;
      iVar11 = local_80._4_4_;
      if ((local_8c & 0x80000001) != 1) {
        iVar6 = local_80._4_4_;
        iVar11 = (int)local_80;
      }
    }
    local_a8 = *(undefined8 *)(param_1 + 0x2c8);
    local_98 = CONCAT44(iVar6 + *(int *)(param_1 + 0x2cc) + -1,
                        iVar11 + *(int *)(param_1 + 0x2c8) + -1);
    FUN_01261c40(0,PTR_DAT_04bb5dd0,&local_b8,0,0);
  }
  plVar7 = *(long **)(param_1 + 0xa88);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x208))(plVar7,param_2,param_3 & 1);
    puVar4 = PTR_DAT_04bb5928;
    puVar3 = PTR_DAT_04bb5920;
    if ((*(int *)(param_1 + 0x300) != 0) &&
       (lVar14 = *(long *)(param_1 + 0x2f8), lVar14 != param_1 + 0x2f0)) {
      lVar9 = lVar14 + -8;
      puVar1 = PTR_DAT_04bb3290 + 0x10;
      do {
        lVar14 = *(long *)(lVar14 + 8);
        local_78 = (undefined *)CONCAT44(local_78._4_4_,*(undefined4 *)(param_1 + 0x230));
        FUN_0071c8d0(&local_b8,lVar9,&local_78,0);
        plVar7 = local_b8;
        if (local_b8 != (long *)0x0) {
          if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
            *(undefined **)puVar3 = puVar1;
            __cxa_guard_release(puVar4);
          }
          uVar8 = (**(code **)(*plVar7 + 0x20))(plVar7,puVar3);
          if ((uVar8 & 1) == 0) {
            local_b0._0_2_ = (ushort)(byte)local_b0;
          }
        }
        if ((((local_b8 != (long *)0x0) && ((byte)local_b0 != '\0')) && (local_b0._1_1_ != '\0')) &&
           (local_b0._2_1_ != '\0')) {
          FUN_01479710(local_b8,param_2,param_3 & 1);
        }
        lVar9 = lVar14 + -8;
      } while (lVar9 != param_1 + 0x2e8);
    }
  }
  return;
}


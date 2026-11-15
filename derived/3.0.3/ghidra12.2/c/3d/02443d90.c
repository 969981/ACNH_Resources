
/* WARNING: Removing unreachable block (ram,0x02444058) */

void FUN_02443d90(long param_1)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  byte bVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  bool bVar14;
  long lVar15;
  uint *puVar16;
  long lVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  uint *local_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  undefined8 local_58;
  
  local_58 = 0xfffe;
  FUN_0277d4ac(&local_58);
  local_58 = *(undefined8 *)(param_1 + 0x1900);
  uVar12 = *(undefined8 *)PTR_DAT_04bb3d80;
  uVar5 = FUN_0277d6c4(&local_58);
  uVar8 = FUN_013eec20(uVar12,uVar5);
  puVar3 = PTR_DAT_04bb43c0;
  lVar17 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_58);
  puVar4 = PTR_DAT_04bc0510;
  lVar15 = *(long *)puVar3;
  if (lVar15 == 0) {
joined_r0x02443edc:
    if ((uVar8 & 1) != 0) {
LAB_02443ee0:
      puVar13 = *(undefined8 **)(param_1 + 0x60);
      if (puVar13 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar7 = __cxa_guard_acquire(&DAT_052461c0);
          puVar13 = &DAT_05240280;
          if (iVar7 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar13 = &DAT_05240280;
        }
      }
      if (puVar13[0x227] == 0) {
        local_90 = (undefined *)((ulong)local_90._4_4_ << 0x20);
      }
      else {
        local_90 = (undefined *)
                   (CONCAT44(local_90._4_4_,*(uint *)(puVar13 + 0x2d3) >> 1) & 0xffffffff00000001);
        local_80 = (undefined **)CONCAT44(local_80._4_4_,0x14);
        uVar8 = FUN_03850890(puVar13[0x227],0x14,0,*(uint *)(puVar13 + 0x2d3) >> 1 & 1);
        if ((uVar8 & 1) != 0) {
          FUN_02472404(0,param_1);
          puVar13 = *(undefined8 **)(param_1 + 0x60);
          if (puVar13 == (undefined8 *)0x0) {
            if ((DAT_052461c0 & 1) == 0) {
              iVar7 = __cxa_guard_acquire(&DAT_052461c0);
              puVar13 = &DAT_05240280;
              if (iVar7 != 0) {
                FUN_016fcf10(&DAT_05240280);
                FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                __cxa_guard_release(&DAT_052461c0);
              }
            }
            else {
              puVar13 = &DAT_05240280;
            }
          }
          FUN_01702b70(puVar13,6,2);
        }
      }
    }
  }
  else {
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((*(uint *)(lVar17 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto joined_r0x02443edc;
    local_80 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
    local_70 = (uint *)0x0;
    local_78 = local_58;
    uVar6 = FUN_0277d6c4(&local_78);
    if (*(long *)puVar3 == 0) {
LAB_02443f38:
      puVar16 = (uint *)0x0;
    }
    else {
      lVar15 = *(long *)(lVar15 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((*(uint *)(lVar15 + 0x1d8) <= uVar6) ||
         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_02443f38;
      lVar15 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(&local_58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if (*(uint *)(lVar15 + 0x1d8) <= uVar6) goto LAB_02443f38;
      puVar16 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar6 * 8);
      if (puVar16 != (uint *)0x0) {
        local_70 = puVar16;
      }
    }
    if ((uVar8 & 1) != 0) goto LAB_02443ee0;
    if (puVar16 == (uint *)0x0) {
      uVar8 = FUN_01ad673c(&local_80);
      goto joined_r0x02443edc;
    }
    puVar10 = (uint *)((long)puVar16 - (ulong)*puVar16);
    if ((((*puVar16 != 0) && (puVar10 != (uint *)0x0)) && (*puVar10 != 0)) &&
       ((uVar6 = puVar10[1], uVar6 != 0 && ((ulong)(ushort)puVar10[2] != 0)))) {
      lVar15 = 0xc;
      if (*(char *)((long)puVar10 + 10) != '\0') {
        lVar15 = 0x1c;
      }
      lVar15 = (long)puVar10 + lVar15 + (ulong)(ushort)puVar10[2] * 8;
      if (lVar15 != 0) {
        uVar1 = 0;
        if ((ulong)uVar6 != 0) {
          uVar1 = (uint)((ulong)((long)puVar16 - lVar15) / (ulong)uVar6);
        }
        if (*puVar10 <= uVar1) {
          uVar1 = 0xffffffff;
        }
        if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
           (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2) == 1))
        goto LAB_02443ee0;
      }
    }
    uVar8 = FUN_01ad673c(&local_80);
    if ((uVar8 & 1) != 0) goto LAB_02443ee0;
    puVar10 = (uint *)((long)puVar16 - (ulong)*puVar16);
    if ((((*puVar16 != 0) && (puVar10 != (uint *)0x0)) && (*puVar10 != 0)) &&
       ((uVar6 = puVar10[1], uVar6 != 0 && ((ulong)(ushort)puVar10[2] != 0)))) {
      lVar15 = 0xc;
      if (*(char *)((long)puVar10 + 10) != '\0') {
        lVar15 = 0x1c;
      }
      lVar15 = (long)puVar10 + lVar15 + (ulong)(ushort)puVar10[2] * 8;
      if (lVar15 != 0) {
        uVar1 = 0;
        if ((ulong)uVar6 != 0) {
          uVar1 = (uint)((ulong)((long)puVar16 - lVar15) / (ulong)uVar6);
        }
        if (*puVar10 <= uVar1) {
          uVar1 = 0xffffffff;
        }
        if (((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
            (uVar2 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
            uVar2 < 0xbd)) && (uVar2 == 2)) goto LAB_02443ee0;
      }
    }
  }
  local_80 = (undefined **)
             ((ulong)CONCAT42(local_80._4_4_,*(undefined2 *)(param_1 + 0x1908)) << 0x10);
  FUN_02328b10(param_1,&local_80,1);
  FUN_02332b04(param_1,1,1);
  lVar15 = FUN_0251e98c(1);
  puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar15 + 0xf00) + 0xf0))(lVar15 + 0xf00);
  uVar5 = *puVar9;
  puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar15 + 0xf30) + 0xf0))(lVar15 + 0xf30);
  uVar18 = *puVar9;
  puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar15 + 0xf60) + 0xf0))(lVar15 + 0xf60);
  local_80 = (undefined **)(puVar4 + 0x10);
  uVar19 = *puVar9;
  lVar15 = *(long *)puVar3;
  local_70 = (uint *)0x0;
  local_78 = local_58;
  uVar6 = FUN_0277d6c4(&local_78);
  if (*(long *)puVar3 == 0) {
    uVar8 = FUN_01ad673c(&local_80);
    if ((uVar8 & 1) == 0) goto LAB_02444388;
LAB_02444330:
    lVar15 = FUN_0251e98c(1);
    puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar15 + 0x2ce0) + 0xf0))(lVar15 + 0x2ce0);
    uVar5 = *puVar9;
    puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar15 + 0x2d10) + 0xf0))(lVar15 + 0x2d10);
    lVar17 = 0x2d40;
  }
  else {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar15 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      lVar15 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(&local_58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if (*(uint *)(lVar15 + 0x1d8) <= uVar6) goto LAB_02444250;
      puVar16 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar6 * 8);
      if (puVar16 == (uint *)0x0) goto LAB_02444254;
      bVar14 = false;
      uVar6 = *puVar16;
      local_70 = puVar16;
      if ((uVar6 != 0) && (puVar16 != (uint *)(ulong)uVar6)) {
        puVar10 = (uint *)((long)puVar16 - (long)(ulong)uVar6);
        if ((*puVar10 != 0) &&
           ((uVar6 = puVar10[1], uVar6 != 0 && ((ulong)(ushort)puVar10[2] != 0)))) {
          lVar15 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar15 = 0x1c;
          }
          lVar15 = (long)puVar10 + lVar15 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar15 != 0) {
            uVar1 = 0;
            if ((ulong)uVar6 != 0) {
              uVar1 = (uint)((ulong)((long)puVar16 - lVar15) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
               (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2) == 1))
            goto LAB_02444330;
          }
        }
        bVar14 = false;
      }
    }
    else {
LAB_02444250:
      puVar16 = (uint *)0x0;
LAB_02444254:
      bVar14 = true;
    }
    uVar8 = FUN_01ad673c(&local_80);
    if ((uVar8 & 1) != 0) goto LAB_02444330;
    if (bVar14) goto LAB_02444388;
    puVar10 = (uint *)((long)puVar16 - (ulong)*puVar16);
    if ((((*puVar16 == 0) || (puVar10 == (uint *)0x0)) || (*puVar10 == 0)) ||
       ((uVar6 = puVar10[1], uVar6 == 0 || ((ulong)(ushort)puVar10[2] == 0)))) goto LAB_02444388;
    lVar15 = 0xc;
    if (*(char *)((long)puVar10 + 10) != '\0') {
      lVar15 = 0x1c;
    }
    lVar15 = (long)puVar10 + lVar15 + (ulong)(ushort)puVar10[2] * 8;
    if (lVar15 == 0) goto LAB_02444388;
    uVar1 = 0;
    if ((ulong)uVar6 != 0) {
      uVar1 = (uint)((ulong)((long)puVar16 - lVar15) / (ulong)uVar6);
    }
    if (*puVar10 <= uVar1) {
      uVar1 = 0xffffffff;
    }
    if ((*(uint *)PTR_DAT_04bc00c8 <= uVar1) ||
       (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2) != 2)) goto LAB_02444388;
    lVar15 = FUN_0251e98c(1);
    puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar15 + 0x2da0) + 0xf0))(lVar15 + 0x2da0);
    uVar5 = *puVar9;
    puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar15 + 0x2dd0) + 0xf0))(lVar15 + 0x2dd0);
    lVar17 = 0x2e00;
  }
  uVar18 = *puVar9;
  puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar15 + lVar17) + 0xf0))((long *)(lVar15 + lVar17))
  ;
  uVar19 = *puVar9;
LAB_02444388:
  local_62 = 0;
  local_78 = CONCAT44(uVar18,uVar5);
  local_70 = (uint *)(CONCAT44((int)((ulong)local_70 >> 0x20),uVar19) & 0xffffff00ffffffff);
  local_64 = 0;
  local_80 = (undefined **)local_58;
  local_68 = 0x3f800000;
  local_90 = PTR_DAT_04bb2020 + 0x10;
  local_88 = &DAT_040ee5ef;
  FUN_023c49a8(param_1,&local_80,param_1 + 0x9dc,param_1 + 0x9d8,&local_90);
  puVar13 = *(undefined8 **)(param_1 + 0x60);
  if (puVar13 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      puVar13 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar13 = &DAT_05240280;
    }
  }
  uVar8 = FUN_0170a6d0(puVar13,0);
  if ((uVar8 & 1) != 0) {
    if (*(char *)(param_1 + 0x190a) == '\0') {
      bVar11 = *(byte *)(param_1 + 0x1ee8);
      local_90._0_7_ = CONCAT16(local_58._2_1_,CONCAT24((undefined2)local_58,(undefined4)local_90));
      if (7 < bVar11) {
        bVar11 = 0xff;
      }
      local_90 = (undefined *)
                 CONCAT17(local_58._3_1_,
                          CONCAT61(CONCAT51((int5)((uint7)(undefined7)local_90 >> 0x10),bVar11),
                                   *(int *)(param_1 + 0x178) == 0));
      local_88 = (undefined *)CONCAT44(local_88._4_4_,local_58._4_4_);
      if (*(int *)(param_1 + 0x178) == 0) {
        local_78 = (ulong)&local_90 | 1;
        local_80 = &PTR_FUN_04a72e50;
        local_70 = (uint *)local_58;
        iVar7 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
        if (iVar7 != 0) {
          lVar15 = (long)iVar7 << 3;
          puVar13 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
          do {
            (*(code *)*local_80)(&local_80,*puVar13);
            lVar15 = lVar15 + -8;
            puVar13 = puVar13 + 1;
          } while (lVar15 != 0);
        }
      }
    }
    *(char *)(param_1 + 0x190a) = '\x01';
  }
  return;
}



uint FUN_014ea4c0(ulong param_1,int *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  float *pfVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  
  puVar5 = PTR_DAT_04bbbc20;
  local_a0 = *(undefined8 *)(param_3 + 8);
  local_98 = *(undefined8 *)(param_3 + 0x10);
  local_90 = *(undefined4 *)(param_3 + 0x18);
  local_a8 = PTR_DAT_04bbbc20 + 0x10;
  uVar9 = param_1;
  if (*(char *)(param_1 + 0x74) != '\0') {
    local_68 = 0;
    local_80 = PTR_DAT_04bb2010 + 0x10;
    local_78 = 0;
    uVar9 = FUN_014edb38(param_1,&local_88,param_1 + 0x20);
    fVar15 = -2.5;
    if ((((int)local_68 - (int)local_78) + 1U & 1) != 0) {
      fVar15 = 0.0;
    }
    fVar14 = -2.5;
    if (((local_68._4_4_ - local_78._4_4_) + 1U & 1) != 0) {
      fVar14 = 0.0;
    }
    fVar16 = fVar15 + *(float *)(param_1 + 0x28);
    fVar17 = fVar14 + *(float *)(param_1 + 0x30);
    fVar15 = *(float *)(param_3 + 8) + fVar15;
    iVar8 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
    fVar14 = *(float *)(param_3 + 0x10) + fVar14;
    iVar2 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
    iVar3 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
    uVar7 = iVar3 - iVar8 & 1;
    uVar1 = -uVar7;
    if (iVar8 <= iVar3) {
      uVar1 = uVar7;
    }
    fVar15 = -1.0;
    if (iVar3 - iVar8 == 0 || iVar3 < iVar8) {
      fVar15 = 1.0;
    }
    iVar8 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
    uVar7 = iVar8 - iVar2 & 1;
    fVar14 = -1.0;
    if (iVar8 - iVar2 == 0 || iVar8 < iVar2) {
      fVar14 = 1.0;
    }
    local_a0 = CONCAT44(*(undefined4 *)(param_3 + 0xc),
                        *(float *)(param_3 + 8) + (float)(int)uVar1 * 5.0 * fVar15);
    uVar1 = -uVar7;
    if (iVar2 <= iVar8) {
      uVar1 = uVar7;
    }
    local_98 = CONCAT44(local_98._4_4_,
                        *(float *)(param_3 + 0x10) + (float)(int)((float)(int)uVar1 * 5.0) * fVar14)
    ;
  }
  puVar4 = PTR_DAT_04bb27c0;
  if ((*(int *)(param_1 + 0x18) == 1) && (lVar11 = *(long *)PTR_DAT_04bb27c0, lVar11 != 0)) {
    uVar7 = *(uint *)(param_1 + 0x8c);
    if ((uVar7 == 0) ||
       (((plVar13 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                              ((ulong)(uVar7 >> 0x11) & 0x7ff8)), plVar13 == (long *)0x0 ||
         ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar13 + 0x46) != uVar7)))) {
      plVar13 = (long *)0x0;
    }
    if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
      plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar11 = *(long *)puVar4;
      uVar9 = (**(code **)(*plVar10 + 0x60))();
      if ((int)uVar9 < 0x11) {
        uVar7 = 0;
      }
      else {
        if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_014ea700;
        uVar7 = 5U >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
      }
      if (plVar13 != (long *)0x0) goto LAB_014ea714;
      goto LAB_014ea778;
    }
LAB_014ea700:
    uVar7 = 1;
    if (plVar13 == (long *)0x0) goto LAB_014ea778;
LAB_014ea714:
    lVar11 = plVar13[0x2a];
    uVar1 = *(uint *)(plVar13 + 0x49);
    if (((*PTR_DAT_04bb5928 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar8 != 0)) {
      *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5928);
    }
    uVar9 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bb5920);
    if ((uVar9 & 1) == 0) goto LAB_014ea778;
    if ((int)lVar11 != 1) {
      uVar7 = 1;
    }
    if ((uVar7 != 0) || ((uVar1 >> 4 & 1) == 0)) goto LAB_014ea778;
    if ((int)plVar13[0x120] == 1) {
      uVar9 = FUN_0147e7e0(plVar13,param_2,&local_a8);
    }
    else {
      uVar9 = 0;
    }
    uVar6 = local_90;
    if (*(char *)(param_1 + 0x88) != '\0') {
      iVar8 = *param_2;
      *(byte *)(param_1 + 0x78) = (byte)uVar9 & 1;
      *(int *)(param_1 + 0x7c) = iVar8;
    }
    if ((uVar9 & 1) == 0) goto LAB_014eaa30;
    if (*param_2 != 1) {
      if ((*param_2 == 0) && (0 < (int)*(uint *)(param_1 + 0xe8))) {
        fVar15 = (float)local_a0;
        fVar14 = local_a0._4_4_;
        lVar11 = (ulong)*(uint *)(param_1 + 0xe8) << 3;
        fVar16 = (float)local_98;
        uVar7 = 1;
        plVar13 = *(long **)(param_1 + 0xf0);
        iVar8 = local_98._4_4_;
        do {
          pfVar12 = (float *)*plVar13;
          local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar6);
          local_80 = (undefined *)CONCAT44(fVar14 + pfVar12[1],fVar15 + *pfVar12);
          local_78 = CONCAT44((int)pfVar12[3] + iVar8,fVar16 + pfVar12[2]);
          local_88 = puVar5 + 0x10;
          plVar10 = (long *)FUN_014e7558(uVar9,pfVar12[5]);
          uVar9 = 0;
          if ((plVar10 != (long *)0x0) &&
             (uVar9 = (**(code **)(*plVar10 + 0x388))(plVar10,&local_88), (uVar9 & 1) == 0))
          goto LAB_014eaa30;
          plVar13 = plVar13 + 1;
          lVar11 = lVar11 + -8;
        } while (lVar11 != 0);
        goto LAB_014eaa34;
      }
LAB_014eaaa8:
      uVar7 = 1;
      goto LAB_014eaa34;
    }
    if (*(int *)(param_1 + 0xe8) < 1) {
      if (*(char *)(param_1 + 0x88) == '\0') {
        local_78 = 0;
        local_88 = PTR_DAT_04bbc1a0 + 0x10;
        local_80 = PTR_DAT_04bb2010 + 0x10;
        local_68 = 0;
        local_70 = local_80;
        FUN_014eaae8(param_1,&local_88,&local_a8);
        uVar9 = FUN_01262200(PTR_DAT_04bbcc10,&local_88);
        if ((uVar9 & 1) == 0) goto LAB_014eaaa8;
        goto LAB_014eaa30;
      }
      goto LAB_014ea8e4;
    }
  }
  else {
LAB_014ea778:
    if (*(int *)(param_1 + 0x98) != 0) {
      plVar13 = (long *)FUN_014ba988(param_1 + 0x90);
      uVar9 = 0;
      if (plVar13 != (long *)0x0) {
        uVar9 = (**(code **)(*plVar13 + 0x70))(plVar13,param_2,&local_a8);
        uVar7 = (uint)uVar9;
        if (*(char *)(param_1 + 0x88) != '\0') {
          iVar8 = *param_2;
          *(byte *)(param_1 + 0x78) = (byte)uVar9 & 1;
          *(int *)(param_1 + 0x7c) = iVar8;
        }
        if ((uVar9 & 1) == 0) goto LAB_014eaa34;
        if (*param_2 != 1) {
          if ((*param_2 == 0) && (0 < (int)*(uint *)(param_1 + 0xe8))) {
            plVar13 = *(long **)(param_1 + 0xf0);
            lVar11 = (ulong)*(uint *)(param_1 + 0xe8) << 3;
            uVar7 = 1;
            do {
              pfVar12 = (float *)*plVar13;
              local_70 = (undefined *)CONCAT44(local_70._4_4_,local_90);
              local_80 = (undefined *)
                         CONCAT44(local_a0._4_4_ + pfVar12[1],(float)local_a0 + *pfVar12);
              local_78 = CONCAT44((int)pfVar12[3] + local_98._4_4_,(float)local_98 + pfVar12[2]);
              local_88 = puVar5 + 0x10;
              plVar10 = (long *)FUN_014e7558(uVar9,pfVar12[5]);
              uVar9 = 0;
              if ((plVar10 != (long *)0x0) &&
                 (uVar9 = (**(code **)(*plVar10 + 0x388))(plVar10,&local_88), (uVar9 & 1) == 0))
              goto LAB_014eaa30;
              plVar13 = plVar13 + 1;
              lVar11 = lVar11 + -8;
            } while (lVar11 != 0);
          }
          goto LAB_014eaa34;
        }
        if (*(int *)(param_1 + 0xe8) < 1) {
          if (*(char *)(param_1 + 0x88) == '\0') {
            local_78 = 0;
            local_88 = PTR_DAT_04bbc1a0 + 0x10;
            local_80 = PTR_DAT_04bb2010 + 0x10;
            local_68 = 0;
            local_70 = local_80;
            FUN_014eaae8(param_1,&local_88,&local_a8);
            uVar9 = FUN_01262200(PTR_DAT_04bbcc10,&local_88);
            if ((uVar9 & 1) == 0) goto LAB_014eaa34;
          }
          else {
LAB_014ea8e4:
            lVar11 = *(long *)(param_1 + 0x80);
            if (((lVar11 != 0) && (*(char *)(lVar11 + 0x78) != '\0')) &&
               (*(int *)(lVar11 + 0x7c) != *param_2)) goto LAB_014eaaa8;
          }
        }
        goto LAB_014eaa30;
      }
    }
    if ((*(int *)(param_1 + 0x18) == 3) &&
       (plVar13 = (long *)FUN_014e7558(uVar9,*(undefined4 *)(param_1 + 0x8c)),
       plVar13 != (long *)0x0)) {
      uVar7 = (**(code **)(*plVar13 + 0x370))
                        (plVar13,param_2,&local_a8,*(undefined1 *)(param_1 + 0x74));
      if (*(char *)(param_1 + 0x88) != '\0') {
        iVar8 = *param_2;
        *(byte *)(param_1 + 0x78) = (byte)uVar7 & 1;
        *(int *)(param_1 + 0x7c) = iVar8;
      }
      if ((((uVar7 & 1) == 0) || (*(char *)(param_1 + 0x88) == '\0')) || (*param_2 != 1))
      goto LAB_014eaa34;
    }
  }
LAB_014eaa30:
  uVar7 = 0;
LAB_014eaa34:
  return uVar7 & 1;
}



uint FUN_01522f1c(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar1;
  short sVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  uint extraout_w9;
  uint extraout_w9_00;
  uint uVar11;
  uint *puVar12;
  long *plVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint *puVar16;
  undefined *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  uint *local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  byte local_40;
  uint local_38;
  undefined4 local_34;
  
  local_48 = 0;
  lVar10 = *(long *)PTR_DAT_04bb2720;
  if (lVar10 == 0) {
    puVar15 = &DAT_055c04a0;
  }
  else {
    puVar15 = &DAT_055c04a0;
    if (*(long *)(lVar10 + 0x330) != 0) {
      puVar15 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar4 = FUN_006bd550(*puVar15,0);
      puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar15 = &DAT_055c04a0;
      }
    }
  }
  local_44 = *(undefined4 *)(puVar15 + 7);
  local_40 = FUN_017baf44();
  local_40 = local_40 & 1;
  local_50 = PTR_DAT_04bb3140 + 0x10;
  puVar7 = (undefined4 *)FUN_01a5190c(&local_50,*param_3,param_2,0);
  local_58 = *puVar7;
  local_54 = puVar7[1];
  uVar8 = FUN_0277e294(&local_58);
  puVar3 = PTR_DAT_04bb43c0;
  if ((uVar8 & 1) == 0) goto LAB_015232f8;
  local_60 = (uint *)0x0;
  local_70 = PTR_DAT_04bc0510 + 0x10;
  local_68 = local_58;
  uStack_64 = local_54;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_68);
  if (*(long *)puVar3 == 0) {
LAB_015230b8:
    puVar16 = (uint *)0x0;
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((*(uint *)(lVar10 + 0x1d8) <= uVar5) ||
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_015230b8;
    lVar10 = *(long *)PTR_DAT_04bc0428;
    uVar5 = FUN_0277d6c4(&local_58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if (*(uint *)(lVar10 + 0x1d8) <= uVar5) goto LAB_015230b8;
    puVar16 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8);
    if (puVar16 != (uint *)0x0) {
      local_60 = puVar16;
    }
  }
  uVar8 = FUN_01ae6f00(&local_70);
  if ((uVar8 & 1) != 0) {
    local_34 = 0x16;
    local_38 = 0;
    if (((puVar16 != (uint *)0x0) && (uVar5 = *puVar16, uVar5 != 0)) &&
       (puVar16 != (uint *)(ulong)uVar5)) {
      puVar12 = (uint *)((long)puVar16 - (long)(ulong)uVar5);
      local_38 = 0;
      if (*puVar12 != 0) {
        uVar5 = puVar12[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
          lVar10 = 0xc;
          if (*(char *)((long)puVar12 + 10) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar12 + lVar10 + (ulong)(ushort)puVar12[2] * 8;
          if (lVar10 != 0) {
            uVar11 = 0;
            if ((ulong)uVar5 != 0) {
              uVar11 = (uint)((ulong)((long)puVar16 - lVar10) / (ulong)uVar5);
            }
            if (*puVar12 <= uVar11) {
              uVar11 = 0xffffffff;
            }
            if ((uVar11 < *(uint *)PTR_DAT_04bc0048) &&
               (local_38 = (uint)*(ushort *)
                                  (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar11 * 2),
               local_38 < 0x52)) goto LAB_01523160;
          }
        }
        local_38 = 0;
      }
    }
LAB_01523160:
    if (local_38 != 0x16) goto LAB_015232f8;
  }
  if (puVar16 != (uint *)0x0) {
    puVar12 = (uint *)((long)puVar16 - (ulong)*puVar16);
    if ((((*puVar16 != 0) && (puVar12 != (uint *)0x0)) && (*puVar12 != 0)) &&
       ((uVar5 = puVar12[1], uVar5 != 0 && ((ulong)(ushort)puVar12[2] != 0)))) {
      lVar10 = 0xc;
      if (*(char *)((long)puVar12 + 10) != '\0') {
        lVar10 = 0x1c;
      }
      lVar10 = (long)puVar12 + lVar10 + (ulong)(ushort)puVar12[2] * 8;
      if (lVar10 != 0) {
        uVar11 = 0;
        if ((ulong)uVar5 != 0) {
          uVar11 = (uint)((ulong)((long)puVar16 - lVar10) / (ulong)uVar5);
        }
        if (*puVar12 <= uVar11) {
          uVar11 = 0xffffffff;
        }
        if ((uVar11 < *(uint *)PTR_DAT_04bc0048) &&
           (*(short *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar11 * 2) == 0x36)) {
          sVar2 = *(short *)PTR_DAT_04bb6298;
          if (sVar2 != -1) {
            local_34 = 0;
            puVar16 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
            if (0xff < (uint)(int)sVar2) {
              puVar16 = (uint *)PTR_DAT_04bc39f8;
            }
            if ((*puVar16 & 1) != 0) goto LAB_01523240;
          }
LAB_015232f8:
          uVar5 = 1;
          goto LAB_01523384;
        }
      }
    }
  }
LAB_01523240:
  puVar16 = (uint *)FUN_014fbd50(&local_50,*param_3,param_2);
  puVar3 = PTR_DAT_04bb27c0;
  uVar11 = *puVar16;
  if ((uVar11 == 0) || (lVar10 = *(long *)PTR_DAT_04bb27c0, lVar10 == 0)) {
LAB_0152337c:
    uVar5 = 1;
  }
  else {
    plVar13 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                        ((ulong)(uVar11 >> 0x11) & 0x7ff8));
    if ((plVar13 == (long *)0x0) ||
       (((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar13 + 0x46) != uVar11)))) {
      plVar13 = (long *)0x0;
    }
    if ((*(int *)(lVar10 + 0x288) == 1) || (*(int *)(lVar10 + 0x288) == -1)) {
      plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar10 = *(long *)puVar3;
      iVar4 = (**(code **)(*plVar9 + 0x60))();
      uVar11 = extraout_w9;
      if (iVar4 < 0x11) {
        uVar14 = 1;
      }
      else {
        if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_01523300;
        uVar11 = 0;
        uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_01523300:
      uVar14 = 0;
    }
    if (plVar13 == (long *)0x0) goto LAB_0152337c;
    lVar10 = plVar13[0x2a];
    uVar1 = *(uint *)(plVar13 + 0x49);
    if (((*PTR_DAT_04bb5928 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5928);
    }
    uVar6 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bb5920);
    uVar5 = 1;
    uVar11 = extraout_w9_00;
    if ((((int)lVar10 == 1) && (uVar11 = uVar6 & uVar14, uVar11 != 0)) && ((uVar1 >> 4 & 1) != 0)) {
      if ((plVar13[0x151] == 0) || ((*(uint *)(plVar13[0x151] + 0x280) & 0xfffffffe) != 2)) {
        uVar5 = 0;
        uVar11 = 0;
      }
      else {
        uVar5 = 0;
        uVar11 = 1;
      }
    }
  }
  uVar5 = uVar5 | uVar11;
LAB_01523384:
  return uVar5 & 1;
}


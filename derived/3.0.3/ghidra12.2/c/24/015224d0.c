
undefined8
FUN_015224d0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,int *param_4,uint param_5)

{
  uint uVar1;
  short sVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  ushort uVar9;
  uint *puVar10;
  long *plVar11;
  long lVar12;
  uint *puVar13;
  undefined8 *puVar14;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  byte local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  uint *local_58;
  
  uVar7 = FUN_0277e294(param_2);
  puVar3 = PTR_DAT_04bb43c0;
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  local_58 = (uint *)0x0;
  local_68 = PTR_DAT_04bc0510 + 0x10;
  local_60 = *param_2;
  uStack_5c = param_2[1];
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_60);
  if (*(long *)puVar3 == 0) {
LAB_015225b4:
    puVar13 = (uint *)0x0;
  }
  else {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((*(uint *)(lVar12 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_015225b4;
    lVar12 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(param_2);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if (*(uint *)(lVar12 + 0x1d8) <= uVar4) goto LAB_015225b4;
    puVar13 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8);
    if (puVar13 != (uint *)0x0) {
      local_58 = puVar13;
    }
  }
  local_78 = 0;
  local_80 = PTR_DAT_04bbfe68 + 0x10;
  lVar12 = *(long *)PTR_DAT_04bb2720;
  if (lVar12 == 0) {
    puVar14 = &DAT_055c04a0;
  }
  else {
    puVar14 = &DAT_055c04a0;
    if (*(long *)(lVar12 + 0x330) != 0) {
      puVar14 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
      iVar5 = FUN_006bd550(*puVar14,0);
      puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar5 != 0x758f7eaf) {
        puVar14 = &DAT_055c04a0;
      }
    }
  }
  local_74 = *(undefined4 *)(puVar14 + 7);
  local_70 = FUN_017baf44();
  local_70 = local_70 & 1;
  local_80 = PTR_DAT_04bb3140 + 0x10;
  if ((*param_4 - 2U < 4) && (uVar7 = FUN_01ae7140(&local_68), (uVar7 & 1) == 0)) {
    return 0;
  }
  uVar7 = FUN_0154df90(param_2);
  if ((uVar7 & 1) != 0) {
    uVar7 = FUN_01ae6f00(&local_68);
    if ((uVar7 & 1) != 0) {
      uVar9 = 0;
      if (((puVar13 != (uint *)0x0) && (uVar4 = *puVar13, uVar4 != 0)) &&
         (puVar13 != (uint *)(ulong)uVar4)) {
        puVar10 = (uint *)((long)puVar13 - (long)(ulong)uVar4);
        uVar9 = 0;
        if (*puVar10 != 0) {
          uVar4 = puVar10[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
            lVar12 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              lVar12 = 0x1c;
            }
            lVar12 = (long)puVar10 + lVar12 + (ulong)(ushort)puVar10[2] * 8;
            if (lVar12 != 0) {
              uVar1 = 0;
              if ((ulong)uVar4 != 0) {
                uVar1 = (uint)((ulong)((long)puVar13 - lVar12) / (ulong)uVar4);
              }
              if (*puVar10 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < *(uint *)PTR_DAT_04bc0048) &&
                 (uVar9 = *(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar1 * 2),
                 uVar9 < 0x52)) goto LAB_01522728;
            }
          }
          uVar9 = 0;
        }
      }
LAB_01522728:
      if (uVar9 != 0x16) {
        return 0;
      }
    }
    uVar4 = FUN_014fd19c(&local_80,param_3,*param_4);
    if ((uVar4 & 1) == (param_5 & 1)) {
      return 0;
    }
    if (puVar13 != (uint *)0x0) {
      puVar10 = (uint *)((long)puVar13 - (ulong)*puVar13);
      if ((((*puVar13 != 0) && (puVar10 != (uint *)0x0)) && (*puVar10 != 0)) &&
         ((uVar4 = puVar10[1], uVar4 != 0 && ((ulong)(ushort)puVar10[2] != 0)))) {
        lVar12 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar12 = 0x1c;
        }
        lVar12 = (long)puVar10 + lVar12 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar12 != 0) {
          uVar1 = 0;
          if ((ulong)uVar4 != 0) {
            uVar1 = (uint)((ulong)((long)puVar13 - lVar12) / (ulong)uVar4);
          }
          if (*puVar10 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < *(uint *)PTR_DAT_04bc0048) &&
             (*(short *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar1 * 2) == 0x36)) {
            sVar2 = *(short *)PTR_DAT_04bb6298;
            if (sVar2 == -1) {
              return 0;
            }
            puVar13 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
            if (0xff < (uint)(int)sVar2) {
              puVar13 = (uint *)PTR_DAT_04bc39f8;
            }
            if ((*puVar13 & 1) == 0) {
              return 0;
            }
          }
        }
      }
    }
    puVar13 = (uint *)FUN_014fbd50(&local_80,*param_4,param_3);
    puVar3 = PTR_DAT_04bb27c0;
    uVar4 = *puVar13;
    if ((uVar4 == 0) || (lVar12 = *(long *)PTR_DAT_04bb27c0, lVar12 == 0)) goto LAB_01522b54;
    plVar11 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                        ((ulong)(uVar4 >> 0x11) & 0x7ff8));
    if ((plVar11 == (long *)0x0) ||
       (((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar11 + 0x46) != uVar4)))) {
      plVar11 = (long *)0x0;
    }
    if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
      plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar12 = *(long *)puVar3;
      iVar5 = (**(code **)(*plVar8 + 0x60))();
      if (iVar5 < 0x11) {
        uVar4 = 1;
      }
      else {
        if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_01522ae0;
        uVar4 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_01522ae0:
      uVar4 = 0;
    }
    if (plVar11 == (long *)0x0) {
LAB_01522b54:
      FUN_014fd424(&local_80,param_5 & 1,param_3,*param_4);
      return 1;
    }
    lVar12 = plVar11[0x2a];
    uVar1 = *(uint *)(plVar11 + 0x49);
    if (((*PTR_DAT_04bb5928 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5928);
    }
    uVar6 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb5920);
    if (((((int)lVar12 != 1) || ((uVar6 & uVar4) == 0)) || ((uVar1 >> 4 & 1) == 0)) ||
       (lVar12 = plVar11[0x151], lVar12 == 0)) goto LAB_01522b54;
    goto LAB_01522b44;
  }
  uVar7 = FUN_01ae6c68(&local_68);
  if ((uVar7 & 1) == 0) {
    uVar9 = 0;
    if (((puVar13 != (uint *)0x0) && (uVar4 = *puVar13, uVar4 != 0)) &&
       (puVar13 != (uint *)(ulong)uVar4)) {
      puVar10 = (uint *)((long)puVar13 - (long)(ulong)uVar4);
      uVar9 = 0;
      if (*puVar10 != 0) {
        uVar4 = puVar10[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar12 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar10 + lVar12 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar12 != 0) {
            uVar1 = 0;
            if ((ulong)uVar4 != 0) {
              uVar1 = (uint)((ulong)((long)puVar13 - lVar12) / (ulong)uVar4);
            }
            if (*puVar10 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < *(uint *)PTR_DAT_04bc0048) &&
               (uVar9 = *(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar1 * 2),
               uVar9 < 0x52)) goto LAB_01522980;
          }
        }
        uVar9 = 0;
      }
    }
LAB_01522980:
    if (uVar9 != 0x15) {
      return 0;
    }
  }
  puVar13 = (uint *)FUN_014fbd50(&local_80,*param_4,param_3);
  puVar3 = PTR_DAT_04bb27c0;
  uVar4 = *puVar13;
  if (uVar4 == 0) {
    return 1;
  }
  lVar12 = *(long *)PTR_DAT_04bb27c0;
  if (lVar12 == 0) {
    return 1;
  }
  plVar11 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) + ((ulong)(uVar4 >> 0x11) & 0x7ff8))
  ;
  if (((plVar11 == (long *)0x0) || ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar11 + 0x46) != uVar4)) {
    plVar11 = (long *)0x0;
  }
  if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
    plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar12 = *(long *)puVar3;
    iVar5 = (**(code **)(*plVar8 + 0x60))();
    if (iVar5 < 0x11) {
      uVar4 = 1;
    }
    else {
      if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_01522a70;
      uVar4 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_01522a70:
    uVar4 = 0;
  }
  if (plVar11 == (long *)0x0) {
    return 1;
  }
  lVar12 = plVar11[0x2a];
  uVar1 = *(uint *)(plVar11 + 0x49);
  if (((*PTR_DAT_04bb5928 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb5928);
  }
  uVar6 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb5920);
  if ((int)lVar12 != 1) {
    return 1;
  }
  if ((uVar6 & uVar4) == 0) {
    return 1;
  }
  if ((uVar1 >> 4 & 1) == 0) {
    return 1;
  }
  lVar12 = plVar11[0x151];
  if (lVar12 == 0) {
    return 1;
  }
LAB_01522b44:
  FUN_01433290(lVar12,PTR_DAT_04bb32e0,1);
  return 1;
}


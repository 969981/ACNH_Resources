
/* WARNING: Type propagation algorithm not settling */

ulong FUN_004d31d0(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *extraout_x8;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  ulong *puVar18;
  undefined8 local_148;
  undefined8 uStack_140;
  ulong local_138;
  ulong local_130;
  ulong local_128;
  ulong local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  ulong local_e0;
  
  uVar2 = FUN_00428440(param_2[1]);
  switch(uVar2 & 0x1f) {
  case 2:
  case 4:
  case 5:
    uVar11 = FUN_004d40e0(param_2,param_3);
    goto LAB_004d3af0;
  case 3:
    puVar18 = (ulong *)(((long *)*param_3)[0x1a] +
                       (long)*(int *)(*(long *)*param_3 + (long)(int)param_3[1] * 0x18 + 0x10) *
                       0x10);
    local_f8 = *puVar18;
    local_f0 = (undefined *)puVar18[1];
    uVar11 = FUN_004d41d0(param_1,param_2,&local_f8);
    uVar11 = uVar11 & 0xffffffff;
    goto LAB_004d3af0;
  case 6:
    local_f0 = (undefined *)0x0;
    local_e8 = 0;
    local_f8 = 0;
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x50))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_f8);
    puVar17 = local_f0;
    if ((local_e8 & 1) != 0) {
      FUN_0043dd50(local_e8 & 0xfffffffffffffffe);
    }
    if (1 < puVar17) {
      local_f0 = (undefined *)0x0;
      local_e8 = 0;
      local_f8 = 0;
      (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x50))
                ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_f8);
      puVar17 = local_f0;
      if ((local_e8 & 1) != 0) {
        FUN_0043dd50(local_e8 & 0xfffffffffffffffe);
      }
      uVar8 = FUN_00428440(puVar17);
      if ((puVar17 == (undefined *)0x0) || ((uVar8 & 0x1f) != 0)) {
        puVar18 = (ulong *)(((long *)*param_3)[0x1a] +
                           (long)*(int *)(*(long *)*param_3 + (long)(int)param_3[1] * 0x18 + 0x10) *
                           0x10);
        local_138 = *puVar18;
        local_130 = puVar18[1];
        FUN_00422780(&local_f8,&local_138);
        uVar8 = FUN_00446e70(local_f8);
        if (uVar8 == 0) {
          uVar11 = 0x80040200;
          if (3 < DAT_04c719d8) {
            FUN_00444bc0(&local_138,&DAT_04c71988,4);
            puVar16 = (undefined8 *)
                      (((long *)*param_3)[0x1a] +
                      (long)*(int *)(*(long *)*param_3 + (long)(int)param_3[1] * 0x18 + 0x10) * 0x10
                      );
            local_148 = *puVar16;
            uStack_140 = puVar16[1];
            lVar15 = FUN_004446b0(&local_138,"Invalid type name: \'{}\'",PTR_DAT_04bd4dc0,&local_148
                                 );
            uVar14 = 0x134;
LAB_004d3adc:
            uVar11 = 0x80040200;
            *(char **)(lVar15 + 0x28) =
                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Attributes/hkAttributeReader.cpp"
            ;
            *(undefined8 *)(lVar15 + 0x30) = uVar14;
            FUN_00444c00(&local_138);
          }
        }
        else {
          local_138 = uVar8;
          uVar2 = FUN_00428440();
          local_130 = FUN_004283a0(uVar2 & 0x1f);
          local_128 = FUN_00428370();
          if ((local_128 & 1) != 0) {
            FUN_0043dd30(local_128 & 0xfffffffffffffffe);
          }
          iVar4 = (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x48))
                            ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],
                             &local_138);
          if ((local_128 & 1) != 0) {
            FUN_0043dd50(local_128 & 0xfffffffffffffffe);
          }
          if (iVar4 < 0) {
            uVar11 = 0x80040200;
            if (3 < DAT_04c719d8) {
              FUN_00444bc0(&local_138,&DAT_04c71988,4);
              lVar15 = FUN_004446b0(&local_138,"Set type pointer failed",PTR_DAT_04bd4920);
              uVar14 = 0x135;
              goto LAB_004d3adc;
            }
          }
          else {
            uVar11 = 0;
          }
        }
        FUN_00422550(&local_f8);
        goto LAB_004d3af0;
      }
    }
    FUN_00428940(&local_138,*param_1);
    local_f0 = (undefined *)param_1[1];
    local_f8 = 0;
    iVar4 = FUN_004d31d0(&local_f8,&local_138,param_3);
    if (iVar4 < 0) {
      if (3 < DAT_04c719d8) {
        FUN_00444bc0(&local_f8,&DAT_04c71988,4);
        lVar15 = FUN_004446b0(&local_f8,"Parse owner failed",PTR_DAT_04bd4920);
        uVar14 = 299;
LAB_004d3994:
        *(char **)(lVar15 + 0x28) =
             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Attributes/hkAttributeReader.cpp"
        ;
        *(undefined8 *)(lVar15 + 0x30) = uVar14;
        FUN_00444c00(&local_f8);
      }
LAB_004d39a0:
      uVar11 = 0x80040200;
    }
    else {
      iVar4 = (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x48))
                        ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_138);
      if (iVar4 < 0) {
        if (3 < DAT_04c719d8) {
          FUN_00444bc0(&local_f8,&DAT_04c71988,4);
          lVar15 = FUN_004446b0(&local_f8,"Set pointer failed",PTR_DAT_04bd4920);
          uVar14 = 300;
          goto LAB_004d3994;
        }
        goto LAB_004d39a0;
      }
      uVar11 = 0;
    }
    uVar10 = local_128 & 1;
    uVar13 = local_128;
    break;
  default:
    local_e8 = 0;
    local_f8 = 0;
    local_f0 = PTR_DAT_04bd4920;
    uVar8 = FUN_004223c0(0x261011c5,
                         "../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",0x3c,
                         "Bad var visitor switch",&local_f8);
    puVar16 = (undefined8 *)(uVar8 + 0x40);
    uVar14 = *(undefined8 *)(uVar8 + 0x48);
    *extraout_x8 = *puVar16;
    extraout_x8[1] = uVar14;
    uVar13 = *(ulong *)(uVar8 + 0x50);
    extraout_x8[2] = uVar13;
    if ((uVar13 & 1) == 0) {
      *(undefined8 *)(uVar8 + 0x48) = 0;
      *(undefined8 *)(uVar8 + 0x50) = 0;
      *puVar16 = 0;
      return uVar8;
    }
    uVar13 = FUN_0043dd30(uVar13 & 0xfffffffffffffffe);
    uVar11 = *(ulong *)(uVar8 + 0x50);
    *(undefined8 *)(uVar8 + 0x48) = 0;
    *(undefined8 *)(uVar8 + 0x50) = 0;
    *puVar16 = 0;
    if ((uVar11 & 1) == 0) {
      return uVar13;
    }
    uVar8 = FUN_0043dd50(uVar11 & 0xfffffffffffffffe);
    return uVar8;
  case 8:
    lVar15 = ((long *)*param_3)[0x1a];
    lVar9 = *(long *)*param_3 + (long)(int)param_3[1] * 0x18;
    iVar4 = *(int *)(lVar9 + 0x10);
    iVar3 = *(int *)(lVar9 + 0x14);
    FUN_00427bc0(&local_f8,param_2[1],PTR_DAT_04bd7320);
    if ((local_e8 & 1) != 0) {
      FUN_0043dd50(local_e8 & 0xfffffffffffffffe);
    }
    lVar9 = lVar15 + (long)iVar4 * 0x10;
    lVar15 = lVar15 + (long)iVar3 * 0x10;
    if (local_f8 == 0) {
      uVar8 = (ulong)(lVar15 - lVar9) >> 4;
      (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x58))
                ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],uVar8 & 0xffffffff);
      local_e8 = 0;
      local_e0 = 0;
      local_f8 = 0;
      local_f0 = (undefined *)0x0;
      (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x50))
                ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_f8);
      iVar4 = (int)uVar8;
      iVar3 = local_e8._4_4_;
      uVar8 = local_f8;
      puVar17 = local_f0;
      uVar13 = local_e0;
joined_r0x004d34e8:
      if (iVar4 < 1) goto LAB_004d39c4;
LAB_004d34ec:
      if ((uVar13 & 1) == 0) {
        lVar15 = 0;
        do {
          local_130 = 0;
          local_128 = 0;
          local_138 = 0;
          if ((puVar17 == (undefined *)0x0) ||
             (uVar11 = FUN_00428440(puVar17), (uVar11 & 0x1f) != 3)) {
            uVar11 = 0;
LAB_004d3558:
            local_f8 = uVar8;
            local_f0 = puVar17;
            local_e8 = uVar13;
            iVar5 = FUN_00440780(&local_f8,lVar9);
            if ((local_e8 & 1) != 0) {
              FUN_0043dd50(local_e8 & 0xfffffffffffffffe);
            }
            if (iVar5 < 0) {
              if (3 < DAT_04c719d8) {
                FUN_00444bc0(&local_f8,&DAT_04c71988,4);
                lVar6 = FUN_004446b0(&local_f8,"Invalid value parsed: \'{}\'",PTR_DAT_04bd4dc0,lVar9
                                    );
                *(char **)(lVar6 + 0x28) =
                     "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Attributes/hkAttributeReader.cpp"
                ;
                *(undefined8 *)(lVar6 + 0x30) = 0x11c;
                FUN_00444c00(&local_f8);
              }
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
          }
          else {
            uVar11 = uVar13;
            local_138 = uVar8;
            local_130 = (ulong)puVar17;
            local_128 = uVar13;
            if (uVar8 == 0) goto LAB_004d3558;
            iVar5 = FUN_004d41d0(param_1,&local_138,lVar9);
            if (iVar5 < 0) {
              if (3 < DAT_04c719d8) {
                FUN_00444bc0(&local_f8,&DAT_04c71988,4);
                lVar6 = FUN_004446b0(&local_f8,"Set string failed",PTR_DAT_04bd4920);
                *(char **)(lVar6 + 0x28) =
                     "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Attributes/hkAttributeReader.cpp"
                ;
                *(undefined8 *)(lVar6 + 0x30) = 0x118;
                FUN_00444c00(&local_f8);
              }
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
          }
          if ((uVar11 & 1) != 0) {
            FUN_0043dd50(uVar11 & 0xfffffffffffffffe);
          }
          if (bVar1) {
            uVar11 = 0x80040200;
            break;
          }
          lVar15 = lVar15 + 1;
          uVar11 = 0;
          lVar9 = lVar9 + 0x10;
          uVar8 = uVar8 + (long)iVar3;
        } while (lVar15 < iVar4);
        goto LAB_004d3af0;
      }
      lVar15 = 0;
      uVar10 = uVar13 & 1;
      uVar11 = uVar13 & 0xfffffffffffffffe;
      do {
        FUN_0043dd30(uVar11);
        local_130 = 0;
        local_128 = 0;
        local_138 = 0;
        if ((puVar17 == (undefined *)0x0) || (uVar7 = FUN_00428440(puVar17), (uVar7 & 0x1f) != 3)) {
          FUN_0043dd50(uVar11);
          uVar7 = 0;
LAB_004d37fc:
          local_f8 = uVar8;
          local_f0 = puVar17;
          local_e8 = uVar13;
          FUN_0043dd30(uVar11);
          iVar5 = FUN_00440780(&local_f8,lVar9);
          if ((local_e8 & 1) != 0) {
            FUN_0043dd50(local_e8 & 0xfffffffffffffffe);
          }
          if (iVar5 < 0) {
            if (3 < DAT_04c719d8) {
              FUN_00444bc0(&local_f8,&DAT_04c71988,4);
              lVar6 = FUN_004446b0(&local_f8,"Invalid value parsed: \'{}\'",PTR_DAT_04bd4dc0,lVar9);
              *(char **)(lVar6 + 0x28) =
                   "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Attributes/hkAttributeReader.cpp"
              ;
              *(undefined8 *)(lVar6 + 0x30) = 0x11c;
              FUN_00444c00(&local_f8);
            }
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
        }
        else {
          local_138 = uVar8;
          local_130 = (ulong)puVar17;
          FUN_0043dd30(uVar11);
          local_128 = uVar13;
          FUN_0043dd50(uVar11);
          uVar7 = uVar13;
          if (uVar8 == 0) goto LAB_004d37fc;
          iVar5 = FUN_004d41d0(param_1,&local_138,lVar9);
          if (iVar5 < 0) {
            if (3 < DAT_04c719d8) {
              FUN_00444bc0(&local_f8,&DAT_04c71988,4);
              lVar6 = FUN_004446b0(&local_f8,"Set string failed",PTR_DAT_04bd4920);
              *(char **)(lVar6 + 0x28) =
                   "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Attributes/hkAttributeReader.cpp"
              ;
              *(undefined8 *)(lVar6 + 0x30) = 0x118;
              FUN_00444c00(&local_f8);
            }
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
        }
        if ((uVar7 & 1) != 0) {
          FUN_0043dd50(uVar7 & 0xfffffffffffffffe);
        }
        if (bVar1) {
          uVar11 = 0x80040200;
          goto joined_r0x004d39ec;
        }
        lVar15 = lVar15 + 1;
        uVar8 = uVar8 + (long)iVar3;
        lVar9 = lVar9 + 0x10;
      } while (lVar15 < iVar4);
    }
    else {
      puVar18 = (ulong *)*param_2;
      iVar4 = (int)((ulong)(lVar15 - lVar9) >> 4);
      if (iVar4 == 0) {
        *puVar18 = 0;
        puVar18[1] = 0;
        uVar11 = 0;
        goto LAB_004d3af0;
      }
      local_e8 = 0;
      local_e0 = 0;
      local_f8 = 0;
      local_f0 = (undefined *)0x0;
      (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x50))
                ((long *)(param_2[2] & 0xfffffffffffffffe),puVar18,param_2[1],&local_f8);
      puVar17 = local_f0;
      if ((local_e0 & 1) != 0) {
        FUN_0043dd50(local_e0 & 0xfffffffffffffffe);
      }
      iVar3 = FUN_00426fc0(puVar17);
      puVar12 = (ulong *)param_1[1];
      uVar8 = *puVar12;
      uVar11 = uVar8 + (long)(iVar3 * iVar4);
      *puVar12 = uVar11;
      if (puVar12[1] < uVar11) {
        local_e8 = 0;
        local_f8 = 0;
        local_f0 = PTR_DAT_04bd4920;
        FUN_004223c0(0xdeadf11d,"../..\\Common/Base/Memory/Allocator/Linear/hkLinearBuffer.inl",0x1e
                     ,"hkLinearBuffer exhausted",&local_f8);
      }
      local_e8 = 0;
      local_e0 = 0;
      local_f8 = 0;
      local_f0 = (undefined *)0x0;
      (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x50))
                ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_f8);
      puVar17 = local_f0;
      if ((local_e0 & 1) != 0) {
        FUN_0043dd50(local_e0 & 0xfffffffffffffffe);
      }
      if (puVar17 == (undefined *)0x0) {
        uVar13 = 0;
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_00426fc0(puVar17);
        uVar13 = FUN_00428370(puVar17);
        if ((uVar13 & 1) != 0) {
          FUN_0043dd30(uVar13 & 0xfffffffffffffffe);
          *puVar18 = uVar8;
          puVar18[1] = uVar11;
          goto joined_r0x004d34e8;
        }
      }
      *puVar18 = uVar8;
      puVar18[1] = uVar11;
      if (0 < iVar4) goto LAB_004d34ec;
LAB_004d39c4:
      uVar10 = uVar13 & 1;
    }
    uVar11 = 0;
  }
joined_r0x004d39ec:
  if (uVar10 != 0) {
    FUN_0043dd50(uVar13 & 0xfffffffffffffffe);
  }
LAB_004d3af0:
  return uVar11 & 0xffffffff;
}


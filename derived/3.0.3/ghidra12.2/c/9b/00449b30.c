
undefined4
FUN_00449b30(undefined8 param_1,long param_2,long param_3,int *param_4,undefined8 param_5,
            undefined8 param_6)

{
  long *plVar1;
  ulong *puVar2;
  uint uVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  int local_184;
  undefined8 local_180 [8];
  undefined1 *local_140;
  undefined8 local_138;
  undefined1 auStack_130 [24];
  char *local_118;
  undefined8 local_110;
  undefined8 local_b0;
  undefined8 uStack_a8;
  byte *local_a0;
  byte *pbStack_98;
  uint local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70 [4];
  
  local_88 = param_1;
  uStack_80 = param_5;
  local_78 = param_6;
  lVar7 = FUN_004270a0();
  puVar5 = PTR_DAT_048607c0;
  if (param_2 == param_3) {
    if (lVar7 != 0) {
      if (DAT_04c6f6c8 < 4) {
        return 0x80040257;
      }
      FUN_00444bc0(&local_140,&DAT_04c6f678,4);
      local_180[0] = FUN_00427270(local_88);
      lVar7 = FUN_004446b0(&local_140,
                           "Cannot lookup generic template type \'{}\' by root name alone, need to specify a specialization with arguments."
                           ,&DAT_048534d0,local_180);
      uVar8 = 0x181;
      goto LAB_00449ed4;
    }
  }
  else {
    if (lVar7 == 0) {
      if (DAT_04c6f6c8 < 4) {
        return 0x80040257;
      }
      FUN_00444bc0(&local_140,&DAT_04c6f678,4);
      lVar7 = FUN_004446b0(&local_140,
                           "Type \'{}\' is not a template type, cannot lookup invalid type name \'{}\'."
                           ,&DAT_048615f0,&local_88,&uStack_80);
      uVar8 = 0x18c;
LAB_00449ed4:
      *(char **)(lVar7 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
      ;
      *(undefined8 *)(lVar7 + 0x30) = uVar8;
      FUN_00444c00(&local_140);
      return 0x80040257;
    }
    uVar3 = (uint)*(ulong *)(lVar7 + 8) & 0xffff;
    uVar12 = (uint)((ulong)(param_3 - param_2) >> 4);
    if (uVar3 != uVar12) {
      iVar6 = 1;
      if ((int)uVar3 < (int)uVar12) {
        iVar6 = -1;
      }
      *param_4 = iVar6;
      return 0;
    }
    local_8c = 0;
    if ((*(ulong *)(lVar7 + 8) & 0xffff) != 0) {
      uVar11 = 0;
      do {
        uVar11 = -(uVar11 >> 0x1f) & 0xfffffff000000000 | uVar11 << 4;
        plVar1 = (long *)(param_2 + uVar11);
        local_a0 = (byte *)*plVar1;
        pbStack_98 = (byte *)plVar1[1];
        local_70[0] = 0x80040257;
        if (local_a0 == pbStack_98) {
          if (DAT_04c6f6c8 == 0) {
            return 0x80040257;
          }
          FUN_00444bc0(&local_140,&DAT_04c6f678,1);
          local_110 = 0x1a7;
          local_118 = 
          "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
          ;
          uVar8 = FUN_004446b0(&local_140,"HK_RETURN_RES_IF({}) returning {}. ",&DAT_04861608,
                               "argumentName.isEmpty()",local_70);
          FUN_004446b0(uVar8,"Invalid empty name for template argument #{}",&DAT_04853780,&local_8c)
          ;
          FUN_00444c00(&local_140);
          return local_70[0];
        }
        puVar2 = (ulong *)(lVar7 + 0x10 + uVar11);
        if (9 < *local_a0 - 0x30 != (*(char *)puVar2[1] == 't')) {
          iVar6 = -1;
          if (9 < (*local_a0 - 0x30 & 0xff)) {
            iVar6 = 1;
          }
          *param_4 = iVar6;
          return 0;
        }
        if (*(char *)puVar2[1] == 't') {
          local_b0 = 0;
          uStack_a8 = 0;
          local_138 = -0x7ffffff800000000;
          local_140 = auStack_130;
          iVar6 = FUN_00449720(local_a0,pbStack_98,&local_b0,&local_140);
          if (iVar6 < 0) {
            if (3 < DAT_04c6f6c8) {
              FUN_00444bc0(local_180,&DAT_04c6f678,4);
              lVar9 = FUN_004446b0(local_180,
                                   "Failed to parse invalid type name \'{}\' for template argument #{}."
                                   ,&DAT_04861640,&local_a0,&local_8c);
              *(char **)(lVar9 + 0x28) =
                   "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
              ;
              *(undefined8 *)(lVar9 + 0x30) = 0x1b9;
              FUN_00444c00(local_180);
            }
            local_70[0] = 0x80040257;
joined_r0x00449d18:
            bVar4 = true;
            uVar3 = local_138._4_4_;
            lVar9 = local_138;
          }
          else {
            uVar11 = *puVar2;
            uVar8 = FUN_00427270(uVar11);
            iVar6 = FUN_00429ab0(&local_b0,uVar8);
            if (iVar6 != 0) {
              *param_4 = -iVar6;
              local_70[0] = 0;
              goto joined_r0x00449d18;
            }
            iVar6 = FUN_00449b30(uVar11,local_140,local_140 + (long)(int)local_138 * 0x10,&local_184
                                 ,local_a0,pbStack_98);
            if (iVar6 < 0) {
              uVar10 = 0x80040257;
              if (3 < DAT_04c6f6c8) {
                FUN_00444bc0(local_180,&DAT_04c6f678,4);
                lVar9 = FUN_004446b0(local_180,
                                     "Failed to parse template arguments of invalid type name \'{}\' for registry lookup."
                                     ,&DAT_04861730,&local_a0);
                *(char **)(lVar9 + 0x28) =
                     "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
                ;
                *(undefined8 *)(lVar9 + 0x30) = 0x1cc;
                FUN_00444c00(local_180);
                uVar10 = 0x80040257;
              }
LAB_00449db8:
              bVar4 = true;
              uVar3 = local_138._4_4_;
              local_70[0] = uVar10;
              lVar9 = local_138;
            }
            else {
              if (local_184 != 0) {
                uVar10 = 0;
                *param_4 = local_184;
                goto LAB_00449db8;
              }
              bVar4 = false;
              uVar3 = local_138._4_4_;
              lVar9 = local_138;
            }
          }
          local_138 = (ulong)uVar3 << 0x20;
          if ((-1 < lVar9) && (local_140 != (undefined1 *)0x0)) {
            FUN_00421f90(puVar5,local_140,0x10,uVar3 & 0x3fffffff);
          }
          if (bVar4) {
            return local_70[0];
          }
        }
        else {
          uVar13 = *puVar2;
          FUN_00422780(&local_140,&local_a0);
          uVar11 = FUN_0043a320(local_140,0);
          if (uVar11 != uVar13) {
            iVar6 = 1;
            if (uVar13 < uVar11) {
              iVar6 = -1;
            }
            *param_4 = iVar6;
            local_70[0] = 0;
            FUN_00422550(&local_140);
            return local_70[0];
          }
          FUN_00422550(&local_140);
        }
        local_8c = local_8c + 1;
        uVar11 = (ulong)local_8c;
      } while ((int)local_8c < (int)(uint)*(ushort *)(lVar7 + 8));
    }
  }
  *param_4 = 0;
  return 0;
}


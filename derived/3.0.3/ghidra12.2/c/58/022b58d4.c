
void FUN_022b58d4(undefined4 *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  byte local_70;
  undefined8 local_68;
  undefined *local_60;
  int local_58;
  int iStack_54;
  undefined *local_50;
  int local_48;
  int iStack_44;
  undefined4 local_38;
  undefined4 uStack_34;
  
  local_78 = 0;
  lVar5 = *(long *)PTR_DAT_04bb2720;
  if (lVar5 == 0) {
    puVar6 = &DAT_055c04a0;
  }
  else {
    puVar6 = &DAT_055c04a0;
    if (*(long *)(lVar5 + 0x330) != 0) {
      puVar6 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar5 + 0x338));
      iVar2 = FUN_006bd550(*puVar6,0);
      puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar2 != 0x758f7eaf) {
        puVar6 = &DAT_055c04a0;
      }
    }
  }
  local_74 = *(undefined4 *)(puVar6 + 7);
  local_70 = FUN_017baf44();
  puVar1 = PTR_DAT_04bb2010;
  local_70 = local_70 & 1;
  local_80 = PTR_DAT_04bb6268 + 0x10;
  local_90 = PTR_DAT_04bb2010 + 0x10;
  local_88 = 0;
  FUN_01a5033c(&local_38,&local_80,0,param_2,&local_90);
  lVar5 = *(long *)PTR_DAT_04bbbc68;
  if (((((lVar5 != 0) && (*(long *)(lVar5 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(lVar5 + 0xb0) + 8) != 0)) &&
      ((*(long *)(lVar5 + 0x488) != 0 && (*(long *)(*(long *)(lVar5 + 0x488) + 8) != 0)))) &&
     ((*(long *)(lVar5 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar5 + 0x2b0) + 8) != 0)))) {
    uVar3 = FUN_0277d6c4(&local_38);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      FUN_0124c030(auStack_a8,&local_38);
      uVar4 = FUN_0124dcb0(auStack_a8);
      if (((uVar4 & 1) == 0) ||
         ((uVar4 = FUN_022a7140(param_2,0,0), (uVar4 & 1) != 0 ||
          (uVar4 = FUN_022a7140(param_2,1,0), (uVar4 & 1) != 0)))) {
        iVar2 = FUN_0277ebd0(&local_38);
        uVar4 = FUN_01242280(&local_38,0);
        if ((uVar4 & 1) != 0) {
          if (iVar2 == 0) {
            iVar2 = FUN_0277ebd0(&local_38);
            local_68 = (undefined *)CONCAT44(local_68._4_4_,iVar2);
            if (iVar2 != 0) {
              local_60 = (undefined *)
                         CONCAT44(local_60._4_4_,(float)*(int *)(param_2 + 0xc) * 5.0 + 5.0);
              local_68 = (undefined *)
                         CONCAT44(local_68._4_4_,(float)*(int *)(param_2 + 8) * 5.0 + 5.0);
              uVar4 = FUN_01735670(0x3f800000,0xbf800000,&local_68,0,0,1,1,0,1,0,0,1);
              if ((uVar4 & 1) != 0) goto LAB_022b5c84;
            }
          }
          iVar2 = FUN_0123db50(auStack_a0,local_98);
          if (iVar2 == 0x2e) {
            local_60 = puVar1 + 0x10;
            local_68 = PTR_DAT_04bbc1a0 + 0x10;
            local_58 = (int)local_88;
            iStack_54 = local_88._4_4_;
            local_48 = (int)local_88 + 1;
            iStack_44 = local_88._4_4_ + 1;
            local_50 = local_60;
            FUN_01953730(*(undefined8 *)PTR_DAT_04bb47e0,&local_68);
          }
          local_60 = (undefined *)CONCAT44(local_60._4_4_,(float)local_88._4_4_ * 5.0 + 5.0);
          local_68 = (undefined *)CONCAT44(local_68._4_4_,(float)(int)local_88 * 5.0 + 5.0);
          uVar7 = FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,&local_68,0);
          local_68 = (undefined *)CONCAT44(uVar7,(undefined4)local_68);
          local_b0 = local_38;
          uStack_ac = uStack_34;
          FUN_011ea660(&local_b0,&local_68,&DAT_0407cf24);
          FUN_011f3520(&local_80,0,&local_90);
          FUN_011f3880(&local_80,0,&local_38,&local_90);
          if (*(char *)(*(long *)PTR_DAT_04bb4910 + 0x88) == '\0') {
            local_68 = PTR_DAT_04bbc5d8 + 0x10;
            local_60 = PTR_DAT_04bb2018 + 0x10;
            fVar8 = (float)(int)local_88 * 0.5;
            fVar9 = (float)local_88._4_4_ * 0.5;
            uVar3 = 0;
            if (fVar8 != (float)(int)fVar8) {
              uVar3 = (uint)(fVar8 < 0.0);
            }
            local_58 = (int)fVar8 - uVar3;
            uVar3 = 0;
            if (fVar9 != (float)(int)fVar9) {
              uVar3 = (uint)(fVar9 < 0.0);
            }
            iStack_54 = (int)fVar9 - uVar3;
            local_50 = local_60;
            local_48 = local_58;
            iStack_44 = iStack_54;
            FUN_036833e0(*(long *)PTR_DAT_04bb4910,&local_68);
          }
          FUN_011dbc54(&local_90,0);
          *param_1 = local_38;
          param_1[1] = uStack_34;
          return;
        }
      }
    }
  }
LAB_022b5c84:
  uVar7 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  *param_1 = *(undefined4 *)PTR_DAT_04bb37e0;
  param_1[1] = uVar7;
  return;
}


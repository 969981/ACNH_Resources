
void FUN_0359cb24(uint *param_1,undefined8 *param_2)

{
  byte bVar1;
  char cVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  long local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined *local_88;
  int local_80;
  int local_7c;
  byte local_78;
  undefined *local_70;
  uint local_68;
  uint local_64;
  undefined8 local_60;
  float local_58;
  int local_44;
  
  local_70 = PTR_DAT_04bb2010;
  local_60 = *param_2;
  local_58 = *(float *)(param_2 + 1);
  lVar9 = param_2[2];
  local_44 = 7;
  cVar2 = *(char *)((long)param_2 + 0x1d);
  param_1[0] = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  puVar3 = PTR_DAT_04bb27c8;
  param_1[3] = 0;
  local_70 = local_70 + 0x10;
  local_68 = (int)((float)(int)(float)local_60 / 5.0) - (uint)((float)local_60 < 0.0);
  local_64 = (int)((float)(int)local_58 / 5.0) - (uint)(local_58 < 0.0);
  lVar8 = *(long *)PTR_DAT_04bb27c8;
  if (lVar8 == 0) {
    uVar6 = 0;
    fVar13 = -500.0;
  }
  else {
    if ((*(long *)(lVar8 + 0xa8) == 0) || (*(char *)(lVar8 + 0x11c8) != '\0')) {
      fVar13 = -500.0;
LAB_0359cbf0:
      lVar8 = *(long *)(lVar8 + 0xa8);
      if ((lVar8 != 0) && (-1 < (int)local_68)) {
        uVar6 = 0;
        if ((-1 < (int)local_64) &&
           ((local_68 < *(uint *)(lVar8 + 0x38) && (local_64 < *(uint *)(lVar8 + 0x3c))))) {
          uVar4 = local_68 + *(uint *)(lVar8 + 0x38) * local_64;
          uVar6 = 0;
          if ((uVar4 < *(uint *)(lVar8 + 0x68)) && (*(long *)(lVar8 + 0x70) != 0)) {
            local_88 = (undefined *)CONCAT44(local_88._4_4_,5);
            uVar6 = *(uint *)(*(long *)(lVar8 + 0x70) + (long)(int)uVar4 * 4) >> 5 & 1;
          }
        }
        goto LAB_0359cc8c;
      }
    }
    else {
      fVar13 = (float)FUN_0093a950(lVar8 + 0x28,&local_60,&local_44);
      lVar8 = *(long *)puVar3;
      if (lVar8 != 0) goto LAB_0359cbf0;
    }
    uVar6 = 0;
  }
LAB_0359cc8c:
  if (*(long *)PTR_DAT_04bb27a8 == 0) goto LAB_0359d0e8;
  if (lVar9 == 0) {
LAB_0359cd3c:
    local_80 = 0;
    local_88 = PTR_DAT_04bbfe68 + 0x10;
    lVar8 = *(long *)PTR_DAT_04bb2720;
    if (lVar8 == 0) {
      puVar10 = &DAT_055c04a0;
    }
    else {
      puVar10 = &DAT_055c04a0;
      if (*(long *)(lVar8 + 0x330) != 0) {
        puVar10 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar8 + 0x338));
        iVar5 = FUN_006bd550(*puVar10,0);
        puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar5 != 0x758f7eaf) {
          puVar10 = &DAT_055c04a0;
        }
      }
    }
    local_7c = *(int *)(puVar10 + 7);
    local_78 = FUN_017baf44();
    local_78 = local_78 & 1;
    FUN_01a5033c(&local_90,&local_88,0,&local_70,0);
    puVar3 = PTR_DAT_04bb43c0;
    if ((short)local_90 != -2) {
      lVar9 = *(long *)PTR_DAT_04bb43c0;
      uVar4 = FUN_0277d6c4(&local_90);
      lVar8 = *(long *)puVar3;
      if (lVar8 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          local_98 = 0;
          local_a8 = PTR_DAT_04bc0510 + 0x10;
          local_a0 = local_90;
          uStack_9c = uStack_8c;
          uVar4 = FUN_0277d6c4(&local_a0);
          if (*(long *)puVar3 != 0) {
            lVar8 = *(long *)(lVar8 + 0x57e58);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
              lVar8 = *(long *)PTR_DAT_04bc0428;
              uVar4 = FUN_0277d6c4(&local_90);
              uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
              if (uVar4 < *(uint *)(lVar8 + 0x1d8)) {
                lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8);
                if (lVar8 != 0) {
                  local_98 = lVar8;
                }
              }
            }
          }
          uVar7 = FUN_01ae59b0(&local_a8);
          bVar1 = local_a0._2_1_ >> 2 & 1;
          if ((uVar7 & 1) == 0) {
            bVar1 = local_a0._2_1_ & 4;
          }
          if (bVar1 == 0) {
            uVar7 = FUN_01ae5f4c(&local_a8);
            if ((uVar7 & 1) != 0) {
              if (cVar2 != '\0') {
                return;
              }
              uVar6 = 0x2c;
LAB_0359cffc:
              *param_1 = 0xffffffff;
              param_1[1] = uVar6;
              return;
            }
            uVar7 = FUN_01ae59b0(&local_a8);
            if (((uVar7 & 1) != 0) && (iVar5 = FUN_01b022d0(&local_a8), iVar5 == 7)) {
              uVar6 = 0x2d;
              goto LAB_0359cffc;
            }
          }
        }
      }
      lVar8 = *(long *)PTR_DAT_04bbbc68;
      if ((((lVar8 == 0) || (*(long *)(lVar8 + 0xb0) == 0)) ||
          (*(long *)(*(long *)(lVar8 + 0xb0) + 8) == 0)) ||
         (((*(long *)(lVar8 + 0x488) == 0 || (*(long *)(*(long *)(lVar8 + 0x488) + 8) == 0)) ||
          ((*(long *)(lVar8 + 0x2b0) == 0 || (*(long *)(*(long *)(lVar8 + 0x2b0) + 8) == 0))))))
      goto LAB_0359d0e8;
      uVar4 = FUN_0277d6c4(&local_90);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((*(uint *)(lVar8 + 0x1d8) <= uVar4) ||
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0359d0e8;
      uVar11 = *(undefined8 *)PTR_DAT_04bb46c8;
      FUN_0124c030(&local_a8,&local_90);
      uVar7 = FUN_0123d890(local_98,4);
      if ((uVar7 & 1) != 0) {
        uVar4 = FUN_01240210(&local_90);
        if ((uVar4 & 0xff) - 1 < 3) {
          uVar12 = 0x16;
          goto LAB_0359d17c;
        }
        if ((uVar4 & 0xff) != 4) goto LAB_0359d030;
        uVar6 = FUN_009813f0(uVar11,6);
        param_1[1] = uVar6 & 0xffff;
        uVar12 = 6;
        goto LAB_0359d128;
      }
LAB_0359d030:
      uVar7 = FUN_0124dcb0(&local_a8);
      if ((uVar7 & 1) != 0) {
LAB_0359d03c:
        if (cVar2 != '\0') {
          return;
        }
LAB_0359d078:
        uVar6 = 0x31;
LAB_0359d07c:
        param_1[1] = uVar6;
        uVar6 = 0xffffffff;
        goto LAB_0359d130;
      }
      iVar5 = FUN_0277d6c4(&local_90);
      if (iVar5 == 0xed08) goto LAB_0359d078;
      iVar5 = FUN_0123db50(&local_a0,local_98);
      if (iVar5 - 0xbU < 7) goto LAB_0359d078;
      iVar5 = FUN_0123db50(&local_a0,local_98);
      if ((iVar5 - 0x23U < 9) || (iVar5 = FUN_0123db50(&local_a0,local_98), iVar5 - 0x12U < 6))
      goto LAB_0359d03c;
      iVar5 = FUN_0123db50(&local_a0,local_98);
      if (iVar5 == 0x2d) {
        uVar6 = 0x2d;
        goto LAB_0359d07c;
      }
      iVar5 = FUN_0123db50(&local_a0,local_98);
      if (iVar5 != 0x2e) goto LAB_0359d0e8;
      goto LAB_0359d10c;
    }
LAB_0359d0e8:
    if (((uVar6 != 0) || (local_44 == 8)) || (local_44 == 0x1c)) goto LAB_0359d100;
    uVar7 = FUN_02a2dbb4(0,*(undefined8 *)PTR_DAT_04bb26a8,&local_60);
    if ((uVar7 & 1) == 0) {
      return;
    }
    uVar12 = 0x15;
    uVar11 = *(undefined8 *)PTR_DAT_04bb46c8;
LAB_0359d17c:
    uVar6 = FUN_009813f0(uVar11,uVar12);
    param_1[1] = uVar6 & 0xffff;
  }
  else {
    local_88 = PTR_DAT_04bb2018 + 0x10;
    local_80 = (int)((float)(int)(float)local_60 / 10.0) - (uint)((float)local_60 < 0.0);
    local_7c = (int)((float)(int)local_58 / 10.0) - (uint)(local_58 < 0.0);
    uVar4 = FUN_01317ff0(&local_88,3);
    lVar8 = *(long *)puVar3;
    if (((lVar8 == 0) || (*(long *)(lVar8 + 0xa8) == 0)) || (*(char *)(lVar8 + 0x11c8) != '\0')) {
      fVar14 = -500.0;
    }
    else {
      fVar14 = (float)FUN_0093a950(lVar8 + 0x28,lVar9,0);
    }
    if (fVar13 <= fVar14 || ((uVar4 ^ 0xffffffff) & 1) != 0) goto LAB_0359cd3c;
LAB_0359d100:
    uVar11 = *(undefined8 *)PTR_DAT_04bb46c8;
LAB_0359d10c:
    uVar6 = FUN_009813f0(uVar11,3);
    param_1[1] = uVar6 & 0xffff;
    uVar12 = 3;
  }
LAB_0359d128:
  uVar6 = FUN_00981240(uVar11,uVar12);
  uVar6 = uVar6 & 0xffff;
LAB_0359d130:
  *param_1 = uVar6;
  return;
}


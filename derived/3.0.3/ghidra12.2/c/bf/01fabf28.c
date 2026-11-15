
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_01fabf28(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
                 float *param_5,undefined4 *param_6,undefined8 param_7,long param_8)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  long *local_1a0;
  undefined **local_198;
  undefined *puStack_190;
  int local_188;
  int iStack_184;
  undefined *local_180;
  int local_178;
  int iStack_174;
  undefined *local_170;
  int local_168;
  int iStack_164;
  undefined *local_160;
  int local_158;
  int iStack_154;
  undefined *local_150;
  undefined8 local_148;
  undefined8 ****local_140;
  undefined8 ****local_138;
  undefined8 ***local_130 [2];
  undefined8 **local_120 [2];
  undefined8 *local_110 [2];
  undefined8 local_100 [2];
  long local_f0 [4];
  long local_d0;
  undefined **ppuStack_c8;
  undefined **local_c0;
  undefined *local_b8;
  undefined *puStack_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined *puStack_88;
  int local_80;
  int local_7c;
  undefined *local_78;
  int local_70;
  int local_6c;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar16 = *(long *)PTR_DAT_04bbbc68;
  if (((((lVar16 != 0) && (*(long *)(lVar16 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(lVar16 + 0xb0) + 8) != 0)) &&
      ((*(long *)(lVar16 + 0x488) != 0 && (*(long *)(*(long *)(lVar16 + 0x488) + 8) != 0)))) &&
     ((*(long *)(lVar16 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar16 + 0x2b0) + 8) != 0)))) {
    uVar7 = FUN_0277d6c4(param_7);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar16 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      FUN_0124c030(auStack_68,param_7);
      puVar5 = PTR_DAT_04bbc1a0;
      puVar2 = PTR_DAT_04bb2010;
      local_90 = PTR_DAT_04bbc1a0 + 0x10;
      puStack_88 = PTR_DAT_04bb2010 + 0x10;
      local_80 = *(int *)(param_8 + 8);
      local_7c = *(int *)(param_8 + 0xc);
      local_70 = local_80 + 1;
      local_6c = local_7c + 1;
      local_78 = puStack_88;
      if (local_58 != 0) {
        local_150 = (undefined *)CONCAT44(local_150._4_4_,4);
        lVar16 = FUN_01246470(local_58,0x16,0x623dc307,*(undefined8 *)PTR_DAT_04bbbc98);
        if (lVar16 != 0) {
          uVar7 = (uint)local_150 + 7;
          if (-1 < (int)(uint)local_150) {
            uVar7 = (uint)local_150;
          }
          if ((*(byte *)(lVar16 + (ulong)(uint)((int)uVar7 >> 3)) >> (ulong)((uint)local_150 & 7) &
              1) != 0) {
            local_150 = PTR_DAT_04bb2018 + 0x10;
            fVar18 = (float)*(int *)(param_8 + 0xc) * 0.5;
            fVar17 = (float)*(int *)(param_8 + 8) * 0.5;
            uVar7 = 0;
            if (fVar17 != (float)(int)fVar17) {
              uVar7 = (uint)(fVar17 < 0.0);
            }
            uVar13 = 0;
            if (fVar18 != (float)(int)fVar18) {
              uVar13 = (uint)(fVar18 < 0.0);
            }
            local_148 = (long *)CONCAT44((int)fVar18 - uVar13,(int)fVar17 - uVar7);
            bVar6 = FUN_021e7590(&local_150,*(long *)(*(long *)(param_4 + 8) + 0x68) + 0x278,param_5
                                 ,param_6,0);
            goto LAB_01fac258;
          }
        }
      }
      uVar10 = FUN_021f4260(param_7,&local_90);
      if ((uVar10 & 1) != 0) {
        if (param_5 != (float *)0x0) {
          *param_5 = ((float)local_80 * 5.0 + (float)local_70 * 5.0 + 5.0) * 0.5;
          param_5[2] = ((float)local_7c * 5.0 + (float)local_6c * 5.0 + 5.0) * 0.5;
        }
        *param_6 = 0;
        bVar6 = 1;
        goto LAB_01fac258;
      }
      iVar8 = FUN_0123db50(auStack_60,local_58);
      if (((iVar8 != 0x1f) && (iVar8 = FUN_0123db50(auStack_60,local_58), 5 < iVar8 - 0x12U)) &&
         (iVar8 = FUN_0123db50(auStack_60,local_58), 8 < iVar8 - 0x23U)) goto LAB_01fac254;
      puVar4 = PTR_DAT_04bb5ce0;
      puVar3 = PTR_DAT_04bb2720;
      local_b8 = puVar5 + 0x10;
      puStack_b0 = puVar2 + 0x10;
      local_a8 = 0;
      local_98 = 0;
      local_a0 = puStack_b0;
      if (((*(long *)PTR_DAT_04bb5ce0 == 0) || (lVar16 = *(long *)PTR_DAT_04bb2720, lVar16 == 0)) ||
         (*(long *)(lVar16 + 0x330) == 0)) {
LAB_01fac278:
        lVar16 = *(long *)PTR_DAT_04bb59d8;
        if (lVar16 != 0) {
          local_a8 = *(undefined8 *)(lVar16 + 0x28);
          iVar8 = *(int *)(lVar16 + 0x38);
          iVar12 = *(int *)(lVar16 + 0x3c);
          goto LAB_01fac298;
        }
      }
      else {
        puVar11 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
        iVar8 = FUN_006bd550(*puVar11,0);
        if (((iVar8 != 0x758f7eaf) || (*(long *)puVar3 == 0)) ||
           ((lVar16 = *(long *)(*(long *)puVar3 + 0x330), lVar16 == 0 ||
            (*(int *)(lVar16 + 0x244) == 0)))) goto LAB_01fac278;
        lVar16 = *(long *)puVar4;
        if (lVar16 == 0) {
          iVar8 = 0;
          iVar12 = 0;
          iVar14 = 0x10;
          iVar15 = 0x10;
        }
        else {
          iVar8 = *(int *)(lVar16 + 0xd88);
          iVar12 = *(int *)(lVar16 + 0xd8c);
          iVar15 = *(int *)(lVar16 + 0xd98);
          iVar14 = *(int *)(lVar16 + 0xd9c);
        }
        iVar1 = iVar8;
        if (iVar15 <= iVar8) {
          iVar1 = iVar15;
        }
        if (iVar8 <= iVar15) {
          iVar8 = iVar15;
        }
        iVar15 = iVar12;
        if (iVar14 <= iVar12) {
          iVar15 = iVar14;
        }
        if (iVar12 <= iVar14) {
          iVar12 = iVar14;
        }
        local_a8 = CONCAT44(iVar15,iVar1);
LAB_01fac298:
        local_98 = CONCAT44(iVar12,iVar8);
      }
      ppuStack_c8 = &local_90;
      local_c0 = &local_b8;
      local_100[0] = 0;
      local_198 = &local_150;
      local_140 = local_130;
      local_120[0] = local_110;
      local_130[0] = local_120;
      local_110[0] = local_100;
      local_150 = (undefined *)0x0;
      local_148 = (long *)0x0;
      if (local_f0 != (long *)0x0) {
        local_150 = (undefined *)0x400000000;
        local_148 = local_f0;
      }
      iStack_154 = (int)(float)(local_6c + 2);
      local_168 = (int)(float)(local_70 + 2);
      iVar8 = local_70 + local_80;
      if (iVar8 < 0 != SCARRY4(local_70,local_80)) {
        iVar8 = iVar8 + 1;
      }
      iVar12 = local_6c + local_7c;
      if (iVar12 < 0 != SCARRY4(local_6c,local_7c)) {
        iVar12 = iVar12 + 1;
      }
      local_188 = (iVar8 >> 1) + 1;
      iStack_174 = (iVar12 >> 1) + 1;
      iStack_184 = (int)(float)(local_7c + -1);
      puStack_190 = puVar2 + 0x10;
      local_178 = (int)(float)(local_80 + -1);
      local_1a0 = &local_d0;
      local_180 = puStack_190;
      local_170 = puStack_190;
      iStack_164 = iStack_174;
      local_160 = puStack_190;
      local_158 = local_188;
      local_138 = local_140;
      local_d0 = param_4;
      FUN_01fac4c0(&local_1a0,&local_160);
      FUN_01fac4c0(&local_1a0,&local_170);
      FUN_01fac4c0(&local_1a0,&puStack_190);
      FUN_01fac4c0(&local_1a0,&local_180);
      bVar6 = 0 < (int)(uint)local_150;
      if (0 < (int)(uint)local_150) {
        if (param_5 == (float *)0x0) {
          fVar17 = _DAT_00000008;
        }
        else {
          lVar16 = *local_148;
          param_3 = (float)*(int *)(lVar16 + 8) * 5.0;
          *param_5 = param_3;
          fVar17 = (float)*(int *)(lVar16 + 0xc) * 5.0;
          param_5[2] = fVar17;
        }
        uVar9 = FUN_006f0400(((float)local_80 * 5.0 + (float)local_70 * 5.0 + 5.0) * 0.5 - param_3,
                             ((float)local_7c * 5.0 + (float)local_6c * 5.0 + 5.0) * 0.5 - fVar17);
        *param_6 = uVar9;
        if (0 < (int)(uint)local_150) {
          lVar16 = 0;
          do {
            (*(code *)**(undefined8 **)local_148[lVar16])();
            lVar16 = lVar16 + 1;
          } while (lVar16 < (int)(uint)local_150);
        }
      }
      goto LAB_01fac258;
    }
  }
LAB_01fac254:
  bVar6 = 0;
LAB_01fac258:
  return bVar6 & 1;
}


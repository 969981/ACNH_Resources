
/* WARNING: Removing unreachable block (ram,0x022e2ba8) */
/* WARNING: Removing unreachable block (ram,0x022e2aa0) */
/* WARNING: Removing unreachable block (ram,0x022e2ab0) */
/* WARNING: Removing unreachable block (ram,0x022e2bb8) */

uint FUN_022e26e0(long param_1,float *param_2,char *param_3)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  undefined *puVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint *puVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  float fVar17;
  float fVar18;
  undefined8 local_208;
  short local_200;
  short sStack_1fe;
  undefined4 uStack_1fc;
  int local_1f8;
  int iStack_1f4;
  undefined *local_1f0;
  undefined8 local_1e8;
  undefined *local_178;
  undefined *local_170;
  undefined *local_168;
  int local_160;
  int iStack_15c;
  undefined *local_158;
  int local_150;
  int iStack_14c;
  undefined2 local_148;
  undefined4 local_146;
  undefined1 local_142 [2];
  undefined8 local_140;
  undefined1 local_138;
  undefined8 local_134;
  undefined2 local_12c;
  byte local_128;
  undefined1 uStack_127;
  undefined1 uStack_126;
  undefined1 uStack_125;
  undefined2 local_124;
  undefined1 local_122;
  undefined1 auStack_120 [140];
  uint local_94;
  undefined2 local_90;
  uint local_8c;
  undefined *local_88;
  int local_80;
  int iStack_7c;
  uint local_74;
  
  puVar1 = PTR_DAT_04bb2018 + 0x10;
  local_8c = *(uint *)(param_1 + 0x38);
  iVar8 = (int)((float)(int)*param_2 / 10.0) - (uint)(*param_2 < 0.0);
  iVar3 = (int)((float)(int)param_2[2] / 10.0) - (uint)(param_2[2] < 0.0);
  local_88 = puVar1;
  local_80 = iVar8;
  iStack_7c = iVar3;
  FUN_0131a4e4(auStack_120);
  bVar6 = local_90._1_1_;
  puVar5 = PTR_DAT_04bb27a8;
  local_128 = *(byte *)(param_1 + 0x10);
  uStack_126 = (undefined1)iVar8;
  uStack_125 = (undefined1)((uint)iVar8 >> 8);
  local_124 = (undefined2)iVar3;
  if (7 < local_128) {
    local_128 = 0xff;
  }
  local_90 = (ushort)local_90._1_1_ << 8;
  local_94 = CONCAT22(*(undefined2 *)PTR_DAT_04bb3170,(undefined2)local_94) & 0xffffff00;
  local_122 = (undefined1)local_8c;
  if (*(char *)(param_2 + 10) != '\0') {
    local_90 = CONCAT11(bVar6,2);
  }
  local_1e8 = 0;
  local_208 = PTR_DAT_04bbc5d8 + 0x10;
  local_1f8 = 0;
  iStack_1f4 = 0;
  local_74 = local_8c;
  local_200 = (short)puVar1;
  sStack_1fe = (short)((ulong)puVar1 >> 0x10);
  uStack_1fc = (undefined4)((ulong)puVar1 >> 0x20);
  local_168 = (undefined *)CONCAT44(local_168._4_4_,local_8c);
  local_178 = PTR_DAT_04bbc220 + 0x10;
  lVar10 = *(long *)PTR_DAT_04bb27a8;
  if ((int)*(uint *)(lVar10 + 0x5d0) < 1) {
    if ((((*(long *)(lVar10 + 0x4c0) != 0) &&
         (puVar13 = *(uint **)(*(long *)(lVar10 + 0x4c0) + 8), puVar13 != (uint *)0x0)) &&
        ((*(uint *)(lVar10 + 0x4d8) <= local_8c ||
         (*(char *)(*(long *)(lVar10 + 0x4e0) + (long)(int)local_8c) != '\0')))) &&
       (((local_8c < *puVar13 && (puVar13[1] != 0)) && ((ushort)puVar13[2] != 0)))) {
      iVar8 = 0xc;
      if (*(char *)((long)puVar13 + 10) != '\0') {
        iVar8 = 0x1c;
      }
      local_170 = (undefined *)
                  ((ulong)(puVar13[1] * local_8c + (uint)(ushort)puVar13[2] * 8 + iVar8) +
                  (long)puVar13);
      goto LAB_022e28b4;
    }
  }
  else if (local_8c < *(uint *)(lVar10 + 0x5d0)) {
    uVar7 = local_8c;
    if (*(uint *)(lVar10 + 0x5c0) <= local_8c) {
      uVar7 = 0;
    }
    local_170 = *(undefined **)(*(long *)(lVar10 + 0x5c8) + (ulong)uVar7 * 8);
    goto LAB_022e28b4;
  }
  local_170 = (undefined *)0x0;
LAB_022e28b4:
  local_1f0 = puVar1;
  FUN_012efba0(&local_178,&local_208,&local_88);
  fVar18 = (float)iStack_1f4 * 10.0 + 2.5;
  fVar17 = (float)local_1f8 * 10.0 + 2.5;
  local_150 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
  iStack_14c = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
  fVar17 = (float)(int)local_1e8 * 10.0 + 10.0 + -2.5;
  fVar18 = (float)local_1e8._4_4_ * 10.0 + 10.0 + -2.5;
  iVar8 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
  iVar3 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
  local_160 = local_150;
  if (iVar8 <= local_150) {
    local_160 = iVar8;
  }
  if (local_150 <= iVar8) {
    local_150 = iVar8;
  }
  iStack_15c = iStack_14c;
  if (iVar3 <= iStack_14c) {
    iStack_15c = iVar3;
  }
  if (iStack_14c <= iVar3) {
    iStack_14c = iVar3;
  }
  if (*param_3 == '\0') {
    local_146 = 0;
    local_140 = 0xffffffffffffffff;
    local_134 = 0x41200000;
    local_148 = 0xff00;
    local_12c = 0xff00;
    local_142[0] = 0;
    local_170 = PTR_DAT_04bbc1a0 + 0x10;
    local_138 = 0;
    local_168 = PTR_DAT_04bb2010 + 0x10;
    local_178 = (undefined *)CONCAT62(local_178._2_6_,*(undefined2 *)PTR_DAT_04bb6298);
    local_158 = local_168;
    FUN_0131a4e4(&local_208);
    local_74 = 0;
    local_208._0_4_ = CONCAT22((short)iStack_7c,(short)local_80);
    fVar17 = (float)local_80 * 10.0 + 5.0 + -10.0;
    fVar18 = (float)iStack_7c * 10.0 + 5.0 + -10.0;
    local_200 = (short)(int)((float)(int)fVar17 / 10.0) - (ushort)(fVar17 < 0.0);
    local_208._0_6_ = CONCAT24(local_200,(undefined4)local_208);
    local_200 = local_200 + 2;
    sVar4 = (short)(int)((float)(int)fVar18 / 10.0) - (ushort)(fVar18 < 0.0);
    sStack_1fe = sVar4 + 2;
    local_208 = (undefined *)CONCAT26(sVar4,(undefined6)local_208);
    FUN_0130a960(*(undefined8 *)(*(long *)(*(long *)puVar5 + 0x1f8) + 0xa8),&local_208);
    FUN_022e8b40(&local_74,(long)&local_146 + 2,local_142,*(undefined4 *)(param_1 + 0x38),&local_208
                 ,param_2);
    local_90 = CONCAT11(local_142[0],(undefined1)local_90);
    uVar7 = FUN_022e39a0(param_1,&local_178,&local_128);
  }
  else {
    local_148 = 0xff00;
    local_140 = 0xffffffffffffffff;
    local_12c = 0xff00;
    local_146 = 0;
    local_142[0] = 0;
    local_170 = PTR_DAT_04bbc1a0 + 0x10;
    local_138 = 1;
    local_168 = PTR_DAT_04bb2010 + 0x10;
    local_134 = 0x141200000;
    local_178 = (undefined *)CONCAT62(local_178._2_6_,*(undefined2 *)PTR_DAT_04bb6298);
    local_158 = local_168;
    FUN_0131a4e4(&local_208);
    local_74 = 0;
    local_208._0_4_ = CONCAT22((short)iStack_7c,(short)local_80);
    fVar17 = (float)local_80 * 10.0 + 5.0 + -10.0;
    fVar18 = (float)iStack_7c * 10.0 + 5.0 + -10.0;
    local_200 = (short)(int)((float)(int)fVar17 / 10.0) - (ushort)(fVar17 < 0.0);
    local_208._0_6_ = CONCAT24(local_200,(undefined4)local_208);
    local_200 = local_200 + 2;
    sVar4 = (short)(int)((float)(int)fVar18 / 10.0) - (ushort)(fVar18 < 0.0);
    sStack_1fe = sVar4 + 2;
    local_208 = (undefined *)CONCAT26(sVar4,(undefined6)local_208);
    FUN_0130a960(*(undefined8 *)(*(long *)(*(long *)puVar5 + 0x1f8) + 0xa8),&local_208);
    FUN_022e8b40(&local_74,(long)&local_146 + 2,local_142,*(undefined4 *)(param_1 + 0x38),&local_208
                 ,param_2);
    local_90 = CONCAT11(local_142[0],(undefined1)local_90);
    if (*(char *)(param_1 + 0x11) != '\0') {
      local_208 = PTR_DAT_04bbc600 + 0x10;
      local_74 = *(uint *)(param_1 + 8);
      lVar11 = *(long *)PTR_DAT_04bbc218;
      lVar10 = *(long *)(lVar11 + 0x18);
      uVar7 = local_74;
      if (*(uint *)(lVar11 + 0x10) <= local_74) {
        uVar7 = 0;
      }
      puVar13 = *(uint **)(lVar10 + (long)(int)uVar7 * 0x18 + 0x10);
      if (0 < (int)*puVar13) {
        uVar2 = *(uint *)(param_1 + 0xc);
        lVar9 = (long)(int)uVar2;
        if (uVar2 < *(uint *)(lVar10 + (long)(int)uVar7 * 0x18 + 8)) {
          uVar12 = 0;
          uVar15 = (ulong)uVar2;
          lVar14 = 0x78;
          do {
            if (((uVar12 < puVar13[lVar9 * 4]) && (*(long *)(puVar13 + lVar9 * 4 + 2) != 0)) &&
               (*(int *)(*(long *)(puVar13 + lVar9 * 4 + 2) + lVar14 + -0x4c) == 0)) {
              if (-1 < (int)(uint)uVar12) {
                local_200 = (short)local_74;
                sStack_1fe = (short)(local_74 >> 0x10);
                uStack_1fc = (undefined4)uVar15;
                local_1f8 = (int)(uVar15 >> 0x20);
                uVar7 = local_74;
                if (*(uint *)(lVar11 + 0x10) <= local_74) {
                  uVar7 = 0;
                }
                if (((uVar2 < *(uint *)(lVar10 + (long)(int)uVar7 * 0x18 + 8)) &&
                    (lVar10 = *(long *)(lVar10 + (long)(int)uVar7 * 0x18 + 0x10),
                    (uint)uVar12 < *(uint *)(lVar10 + lVar9 * 0x10))) &&
                   ((lVar10 = *(long *)(lVar10 + lVar9 * 0x10 + 8), lVar10 != 0 &&
                    (puVar16 = *(undefined8 **)(lVar10 + lVar14), puVar16 != (undefined8 *)0x0)))) {
                  if (((*PTR_DAT_04bbc718 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(PTR_DAT_04bbc718), iVar8 != 0)) {
                    *(undefined **)PTR_DAT_04bbc710 = PTR_DAT_04bbc660 + 0x10;
                    __cxa_guard_release(PTR_DAT_04bbc718);
                  }
                  uVar12 = (**(code **)*puVar16)(puVar16,PTR_DAT_04bbc710);
                  if ((uVar12 & 1) != 0) {
                    *(uint *)((long)puVar16 + 0xc) =
                         CONCAT13(uStack_125,CONCAT12(uStack_126,CONCAT11(uStack_127,local_128)));
                    *(uint *)((long)puVar16 + 0xf) =
                         CONCAT13(local_122,CONCAT21(local_124,uStack_125));
                    FUN_0131aa38((long)puVar16 + 0x14,auStack_120);
                    *(uint *)(puVar16 + 0x14) = local_94;
                    *(short *)((long)puVar16 + 0xa4) = local_90;
                  }
                }
                uVar7 = FUN_01393290(param_1,&local_178,&local_208);
                goto LAB_022e2df4;
              }
              break;
            }
            uVar12 = uVar12 + 1;
            lVar14 = lVar14 + 0x518;
            uVar15 = uVar15 + 0x100000000;
          } while (*puVar13 != uVar12);
        }
      }
    }
    uVar7 = 0;
  }
LAB_022e2df4:
  return uVar7 & 1;
}


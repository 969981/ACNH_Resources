
byte FUN_011e5aa0(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int iVar16;
  char cVar17;
  uint *puVar18;
  ulong uVar19;
  int *piVar20;
  long lVar21;
  float fVar22;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined *local_1b8;
  uint local_1b0;
  uint local_1ac;
  byte local_1a8;
  undefined8 local_1a4;
  undefined8 local_19c;
  int local_194;
  undefined1 uStack_190;
  char cStack_18f;
  undefined1 uStack_18e;
  undefined1 uStack_18d;
  undefined1 uStack_18c;
  char cStack_18b;
  undefined1 uStack_18a;
  undefined4 uStack_189;
  undefined8 local_180;
  int local_178;
  undefined *local_170;
  uint local_168;
  uint uStack_164;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 uStack_150;
  undefined1 local_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  int local_140;
  undefined1 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  float local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  uint local_11c;
  undefined4 uStack_118;
  int local_114;
  undefined4 uStack_110;
  undefined *local_108;
  undefined1 *puStack_100;
  undefined4 local_f8;
  undefined1 local_f4 [127];
  undefined1 local_75;
  undefined4 local_70;
  undefined2 local_6c;
  long local_68;
  
  puVar6 = PTR_DAT_04bbbc68;
  puVar5 = PTR_DAT_04bb2010;
  local_1d8 = *param_2;
  local_1d0 = param_2[1];
  local_1c8 = param_2[2];
  local_1c0 = *(undefined4 *)(param_2 + 3);
  local_1b0 = *(uint *)(param_2 + 5);
  local_1ac = *(uint *)((long)param_2 + 0x2c);
  local_1a8 = *(byte *)(param_2 + 6);
  local_1b8 = PTR_DAT_04bb2010 + 0x10;
  if (7 < local_1a8) {
    local_1a8 = 0xff;
  }
  uVar15 = *(undefined8 *)((long)param_2 + 0x44);
  uVar14 = *(undefined8 *)((long)param_2 + 0x4b);
  uStack_18c = (undefined1)((ulong)uVar14 >> 8);
  cStack_18b = (char)((ulong)uVar14 >> 0x10);
  uStack_18a = (undefined1)((ulong)uVar14 >> 0x18);
  uStack_189 = (undefined4)((ulong)uVar14 >> 0x20);
  local_19c = *(undefined8 *)((long)param_2 + 0x3c);
  local_194 = (int)uVar15;
  uStack_190 = (undefined1)((ulong)uVar15 >> 0x20);
  cStack_18f = (char)((ulong)uVar15 >> 0x28);
  uStack_18e = (undefined1)((ulong)uVar15 >> 0x30);
  uStack_18d = (undefined1)((ulong)uVar15 >> 0x38);
  local_1a4 = *(undefined8 *)((long)param_2 + 0x34);
  if (*(int *)(param_1 + 0x24f78) < 1000) {
    lVar21 = *(long *)PTR_DAT_04bbbc68;
    lVar1 = (long)&local_1c8 + 4;
    if (((((lVar21 == 0) || (*(long *)(lVar21 + 0xb0) == 0)) ||
         (*(long *)(*(long *)(lVar21 + 0xb0) + 8) == 0)) ||
        ((*(long *)(lVar21 + 0x488) == 0 || (*(long *)(*(long *)(lVar21 + 0x488) + 8) == 0)))) ||
       ((*(long *)(lVar21 + 0x2b0) == 0 || (*(long *)(*(long *)(lVar21 + 0x2b0) + 8) == 0)))) {
LAB_011e5c00:
      local_194 = 1;
    }
    else {
      uVar12 = FUN_0277d6c4(lVar1);
      uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
      if ((*(uint *)(lVar21 + 0x1d8) <= uVar12) ||
         (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar12 * 8) == 0)) goto LAB_011e5c00;
      FUN_0124c030(&local_138,lVar1);
      iVar13 = FUN_0123db50(&local_130,CONCAT44(uStack_124,local_128));
      if ((iVar13 != 0x2d) &&
         (iVar13 = FUN_0123db50(&local_130,CONCAT44(uStack_124,local_128)), 8 < iVar13 - 0x23U))
      goto LAB_011e5c00;
      local_194 = 2;
    }
    if (local_19c._4_4_ == 0) {
      iVar13 = *(int *)(param_1 + 0x1e1b0);
      if (iVar13 != 0) {
        iVar16 = *(int *)(param_1 + 0x1e1ac);
        do {
          iVar2 = 0;
          if (*(int *)(param_1 + 0x1e1a8) <= iVar16) {
            iVar2 = *(int *)(param_1 + 0x1e1a8);
          }
          lVar21 = *(long *)(param_1 + 0x1e1a0) + (long)(iVar16 - iVar2) * 0x10;
          if (*(uint *)(lVar21 + 8) == local_1b0 && *(uint *)(lVar21 + 0xc) == local_1ac) {
            local_19c = CONCAT44(0x19,(int)local_19c);
            break;
          }
          iVar16 = iVar16 + 1;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
    }
    if (local_194 - 1U < 2) {
      bVar11 = FUN_011e6080(param_1,&local_1d8,0);
      goto LAB_011e5ccc;
    }
    if (local_194 == 0) {
      uVar8 = (undefined4)local_1d8;
      uVar9 = local_1d8._4_4_;
      fVar22 = (float)local_1d0;
      if (cStack_18b == '\0') {
        local_180 = CONCAT44(local_1c0,local_1c8._4_4_);
        lVar21 = *(long *)puVar6;
        if ((((lVar21 != 0) && (*(long *)(lVar21 + 0xb0) != 0)) &&
            (*(long *)(*(long *)(lVar21 + 0xb0) + 8) != 0)) &&
           (((*(long *)(lVar21 + 0x488) != 0 && (*(long *)(*(long *)(lVar21 + 0x488) + 8) != 0)) &&
            ((*(long *)(lVar21 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar21 + 0x2b0) + 8) != 0))))))
        {
          uVar12 = FUN_0277d6c4(&local_180);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
          if ((uVar12 < *(uint *)(lVar21 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
            FUN_0124c030(&local_138,&local_180);
            iVar13 = FUN_0123db50(&local_130,CONCAT44(uStack_124,local_128));
            puVar7 = PTR_DAT_04bbbc78;
            puVar6 = PTR_DAT_04bbbc70;
            if ((iVar13 - 0xbU < 7) &&
               ((puVar4 = (uint *)CONCAT44(uStack_124,local_128), puVar4 != (uint *)0x0 &&
                (uVar12 = *puVar4, uVar12 != 0)))) {
              cVar17 = *PTR_DAT_04bbbc70;
              do {
                if (cVar17 == '\0') {
                  cVar17 = '\x01';
                  *(undefined8 *)puVar7 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                  *puVar6 = 1;
                  *(undefined4 *)(puVar7 + 0x60) = 0xffffffff;
                  *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
                  uVar12 = *puVar4;
                }
                else {
                  uVar3 = *(uint *)(puVar7 + 0x4c);
                  if (-1 < (int)uVar3) {
                    if ((byte *)((ulong)uVar3 + (long)puVar4) != (byte *)0x0) {
                      fVar10 = fVar22 + 2.0;
                      if (*(byte *)((ulong)uVar3 + (long)puVar4) < 2) {
                        fVar10 = fVar22;
                      }
                      fVar22 = fVar10;
                    }
                    break;
                  }
                  if (uVar3 != 0xffffffff) break;
                }
                puVar18 = (uint *)(ulong)uVar12;
                if ((puVar18 == (uint *)0x0) || (puVar4 == puVar18)) break;
                lVar21 = 0xc;
                if (*(char *)((long)puVar4 + (10 - (long)puVar18)) != '\0') {
                  lVar21 = 0x1c;
                }
                lVar21 = (long)puVar4 + (lVar21 - (long)puVar18);
                if (lVar21 == 0) break;
                uVar19 = (ulong)*(ushort *)((long)puVar4 + (8 - (long)puVar18));
                *(undefined4 *)(puVar7 + 0x4c) = 0xfffffffe;
                if (uVar19 == 0) break;
                piVar20 = (int *)(lVar21 + 4);
                while (piVar20[-1] != -0xa58ccc9) {
                  piVar20 = piVar20 + 2;
                  uVar19 = uVar19 - 1;
                  if (uVar19 == 0) goto LAB_011e5c50;
                }
                iVar13 = 0;
                if (*piVar20 != -1) {
                  iVar13 = *piVar20;
                }
                *(int *)(puVar7 + 0x4c) = iVar13;
                uVar12 = *puVar4;
                if (uVar12 == 0) break;
              } while( true );
            }
          }
        }
      }
LAB_011e5c50:
      local_138 = 0x1800000000;
      local_11c = 0;
      local_f8 = 0x80;
      local_70 = 7;
      local_120 = 0;
      local_6c = 0x200;
      puStack_100 = local_f4;
      local_75 = 0;
      local_108 = PTR_DAT_04bb2d88 + 0x10;
      local_f4[0] = 0;
      local_130 = uVar8;
      uStack_12c = uVar9;
      uStack_124 = local_1d0._4_4_;
      if (local_1b0 < 0x1000) {
        if (local_1ac < 0x1000) {
          local_11c = (int)local_19c << 0x18 | local_1ac << 0xc | local_1b0;
        }
        else {
          local_11c = 0;
        }
      }
      uStack_118 = local_19c._4_4_;
      local_114 = (int)cStack_18f;
      uStack_110 = 0;
      local_128 = fVar22;
      local_68 = lVar1;
      local_178 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_138,0,1);
      bVar11 = local_178 != 0;
      if (local_178 != 0) {
        local_180 = 0xfffe;
        FUN_0277d4ac(&local_180);
        local_170 = puVar5 + 0x10;
        local_180 = CONCAT44(local_1c0,local_1c8._4_4_);
        local_158 = (float)local_1d0;
        local_168 = local_1b0;
        uStack_164 = local_1ac;
        local_160 = local_1d8;
        local_154 = 0xffffffff;
        uStack_150 = local_1a4._4_4_;
        local_148 = (int)local_19c;
        uStack_144 = local_19c._4_4_;
        local_140 = local_194;
        local_14c = uStack_190;
        local_13c = (undefined1)uStack_189;
        FUN_011e72b8(param_1,&local_180);
      }
      goto LAB_011e5ccc;
    }
  }
  bVar11 = 0;
LAB_011e5ccc:
  return bVar11 & 1;
}


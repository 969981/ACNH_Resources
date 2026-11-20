
void FUN_03ef2520(undefined4 param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  short sVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_ac;
  float fStack_a8;
  float local_a4;
  float fStack_a0;
  float local_9c;
  float fStack_98;
  float local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  float local_78;
  
  puVar11 = PTR_DAT_04bd0da0;
  if (*(long *)(param_2 + 0x18) != 0 && *(long *)(param_2 + 0x20) != 0) {
    uVar14 = *(uint *)(param_2 + 0x28);
    if ((int)uVar14 < (int)*(uint *)(param_2 + 0x90)) {
      if (*(uint *)(param_2 + 0x90) <= uVar14) {
        uVar14 = 0;
      }
      lVar15 = *(long *)(*(long *)(param_2 + 0x98) + (long)(int)uVar14 * 0x88 + 0x80);
      if (lVar15 != 0) {
        lVar19 = *(long *)(param_2 + 0x78);
        uVar14 = *(uint *)(param_2 + 0x70);
        if (uVar14 != 0) {
          uVar13 = 0;
          do {
            if (*(long *)(lVar19 + ((long)((ulong)uVar13 << 0x20) >> 0x1a) + 0x38) == 0) {
              return;
            }
            uVar13 = uVar13 + 1;
          } while (uVar14 != uVar13);
        }
        if (((*(char *)(lVar15 + 0x670) != '\0') && (uVar14 != 0)) &&
           (lVar16 = *(long *)(*(long *)(param_2 + 0x18) + 8), lVar16 != 0)) {
          uVar13 = 0;
          do {
            lVar1 = lVar19 + ((long)((ulong)uVar13 << 0x20) >> 0x1a);
            if (*(short *)(lVar1 + 0x30) != -1 && *(short *)(lVar1 + 0x32) != -1) {
              local_90 = *(undefined8 *)puVar11;
              local_88 = *(undefined8 *)(puVar11 + 8);
              local_80 = 0;
              local_78 = 0.0;
              FUN_03ef8788(lVar16,&local_90,(long)*(short *)(lVar1 + 0x32));
              lVar17 = *(long *)(param_2 + 0x18);
              sVar4 = *(short *)(lVar1 + 0x32);
              FUN_03efa0c0(lVar17,(int)sVar4);
              uVar18 = (uint)sVar4;
              uVar3 = uVar18;
              if (*(uint *)(lVar17 + 0x10) <= (uint)(int)sVar4) {
                uVar3 = 0;
              }
              puVar12 = (undefined4 *)(*(long *)(lVar17 + 0x18) + (long)(int)uVar3 * 0x1c);
              *puVar12 = (float)local_90;
              puVar12[1] = local_90._4_4_;
              puVar12[2] = (float)local_88;
              puVar12[3] = local_88._4_4_;
              puVar12[4] = (float)local_80;
              puVar12[5] = local_80._4_4_;
              puVar12[6] = local_78;
              if (*(uint *)(lVar17 + 0x30) <= uVar18) {
                uVar18 = 0;
              }
              *(undefined1 *)(*(long *)(lVar17 + 0x38) + (long)(int)uVar18) = 2;
              *(undefined1 *)(lVar17 + 0x40) = 0;
            }
            uVar13 = uVar13 + 1;
          } while (uVar14 != uVar13);
        }
        FUN_03ef2c1c(&local_90,param_2);
        fVar20 = (float)local_90 * (float)local_90 + local_88._4_4_ * local_88._4_4_ +
                 local_90._4_4_ * local_90._4_4_ + (float)local_88 * (float)local_88;
        fStack_a0 = local_88._4_4_;
        fStack_a8 = local_90._4_4_;
        local_ac = (float)local_90;
        local_a4 = (float)local_88;
        if (1.1920929e-07 < fVar20) {
          fVar20 = 1.0 / fVar20;
          fStack_a0 = local_88._4_4_ * fVar20;
          fStack_a8 = local_90._4_4_ * fVar20;
          local_ac = (float)local_90 * fVar20;
          local_a4 = (float)local_88 * fVar20;
        }
        local_a4 = -local_a4;
        local_ac = -local_ac;
        fStack_a8 = -fStack_a8;
        uVar14 = *(uint *)(param_2 + 0x70);
        fVar25 = -(local_a4 * local_80._4_4_) + local_78 * fStack_a8 + (float)local_80 * fStack_a0;
        fVar27 = (local_a4 * (float)local_80 - local_78 * local_ac) + local_80._4_4_ * fStack_a0;
        fVar23 = -(fStack_a8 * (float)local_80) + local_80._4_4_ * local_ac + local_78 * fStack_a0;
        fVar20 = (-(fStack_a8 * local_80._4_4_) - (float)local_80 * local_ac) - local_78 * local_a4;
        local_9c = -(fVar20 * -local_ac) -
                   (-(local_a4 * fVar27) + fStack_a0 * fVar25 + fStack_a8 * fVar23);
        fStack_98 = -(fVar20 * -fStack_a8) -
                    ((fStack_a0 * fVar27 + local_a4 * fVar25) - local_ac * fVar23);
        local_94 = -(fVar20 * -local_a4) -
                   ((local_ac * fVar27 - fStack_a8 * fVar25) + fStack_a0 * fVar23);
        if (uVar14 != 0) {
          lVar19 = *(long *)(param_2 + 0x78);
          uVar13 = 0;
          do {
            puVar2 = (undefined8 *)(lVar19 + ((long)((ulong)uVar13 << 0x20) >> 0x1a));
            *puVar2 = 0;
            puVar2[1] = 0x3f80000000000000;
            uVar13 = uVar13 + 1;
          } while (uVar14 != uVar13);
        }
        FUN_03ef2e30(param_1,*(undefined4 *)(lVar15 + 0x630),param_2);
        fVar20 = 1.0;
        if (*(int *)(param_2 + 0x70) != 0) {
          fVar20 = 1.0;
          fVar23 = 0.0;
          fVar25 = 0.0;
          fVar27 = 0.0;
          uVar14 = *(int *)(param_2 + 0x70) - 1;
          do {
            uVar10 = (ulong)uVar14;
            uVar14 = uVar14 - 1;
            lVar15 = *(long *)(param_2 + 0x78) + ((long)(uVar10 << 0x20) >> 0x1a);
            fVar22 = *(float *)(lVar15 + 0x10);
            fVar24 = *(float *)(lVar15 + 0x14);
            fVar21 = *(float *)(lVar15 + 0x18);
            fVar26 = *(float *)(lVar15 + 0x1c);
            fVar28 = fVar27 * fVar24;
            fVar5 = fVar22 * fVar20;
            fVar9 = fVar27 * fVar21;
            fVar6 = fVar24 * fVar20;
            fVar7 = fVar21 * fVar20;
            fVar8 = fVar22 * fVar25;
            fVar20 = ((-(fVar27 * fVar22) + fVar26 * fVar20) - fVar24 * fVar25) - fVar21 * fVar23;
            fVar27 = (fVar27 * fVar26 + fVar5 + fVar21 * fVar25) - fVar24 * fVar23;
            fVar25 = -fVar9 + fVar6 + fVar26 * fVar25 + fVar22 * fVar23;
            fVar23 = ((fVar28 + fVar7) - fVar8) + fVar26 * fVar23;
          } while (uVar14 != 0xffffffff);
        }
        fVar23 = -fVar20;
        if (0.0 <= fVar20) {
          fVar23 = fVar20;
        }
        fVar20 = 1.0;
        if (fVar23 <= 1.0) {
          fVar20 = fVar23;
        }
        fVar25 = 0.0;
        if (0.0 <= fVar23) {
          fVar25 = fVar20;
        }
        fVar20 = acosf(fVar25);
        if (fVar20 + fVar20 <= 0.00017453292) {
          uVar14 = *(uint *)(param_2 + 0x70);
          if (uVar14 != 0) {
            lVar15 = *(long *)(param_2 + 0x78);
            uVar13 = 0;
            do {
              lVar19 = lVar15 + ((long)((ulong)uVar13 << 0x20) >> 0x1a);
              *(undefined8 *)(lVar19 + 0x10) = 0;
              *(undefined8 *)(lVar19 + 0x18) = 0x3f80000000000000;
              uVar13 = uVar13 + 1;
            } while (uVar14 != uVar13);
          }
          *(undefined4 *)(param_2 + 100) = 4;
        }
        else {
          FUN_03ef3130(param_2,&local_90,&local_ac);
        }
      }
    }
  }
  return;
}


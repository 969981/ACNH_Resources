
void FUN_03ef2930(float param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  undefined *puVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
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
  
  puVar5 = PTR_DAT_04bd0da0;
  uVar3 = *(uint *)(param_2 + 0x28);
  if (*(uint *)(param_2 + 0x90) <= uVar3) {
    uVar3 = 0;
  }
  lVar6 = *(long *)(*(long *)(param_2 + 0x98) + (long)(int)uVar3 * 0x88 + 0x80);
  if (lVar6 != 0) {
    if ((((*(char *)(lVar6 + 0x670) != '\0') && (*(long *)(param_2 + 0x18) != 0)) &&
        (lVar6 = *(long *)(*(long *)(param_2 + 0x18) + 8), lVar6 != 0)) &&
       (uVar3 = *(uint *)(param_2 + 0x70), uVar3 != 0)) {
      lVar11 = *(long *)(param_2 + 0x78);
      uVar10 = 0;
      do {
        lVar1 = lVar11 + ((long)((ulong)uVar10 << 0x20) >> 0x1a);
        if (*(short *)(lVar1 + 0x30) != -1 && *(short *)(lVar1 + 0x32) != -1) {
          local_90 = *(undefined8 *)puVar5;
          local_88 = *(undefined8 *)(puVar5 + 8);
          local_80 = 0;
          local_78 = 0.0;
          FUN_03ef8788(lVar6,&local_90,(long)*(short *)(lVar1 + 0x32));
          lVar8 = *(long *)(param_2 + 0x18);
          sVar4 = *(short *)(lVar1 + 0x32);
          FUN_03efa0c0(lVar8,(int)sVar4);
          uVar9 = (uint)sVar4;
          uVar2 = uVar9;
          if (*(uint *)(lVar8 + 0x10) <= (uint)(int)sVar4) {
            uVar2 = 0;
          }
          puVar7 = (undefined4 *)(*(long *)(lVar8 + 0x18) + (long)(int)uVar2 * 0x1c);
          *puVar7 = (float)local_90;
          puVar7[1] = local_90._4_4_;
          puVar7[2] = (float)local_88;
          puVar7[3] = local_88._4_4_;
          puVar7[4] = (float)local_80;
          puVar7[5] = local_80._4_4_;
          puVar7[6] = local_78;
          if (*(uint *)(lVar8 + 0x30) <= uVar9) {
            uVar9 = 0;
          }
          *(undefined1 *)(*(long *)(lVar8 + 0x38) + (long)(int)uVar9) = 2;
          *(undefined1 *)(lVar8 + 0x40) = 0;
        }
        uVar10 = uVar10 + 1;
      } while (uVar3 != uVar10);
    }
    FUN_03ef2c1c(&local_90,param_2);
    fVar12 = (float)local_90 * (float)local_90 + local_88._4_4_ * local_88._4_4_ +
             local_90._4_4_ * local_90._4_4_ + (float)local_88 * (float)local_88;
    fStack_a0 = local_88._4_4_;
    local_a4 = (float)local_88;
    fStack_a8 = local_90._4_4_;
    local_ac = (float)local_90;
    if (1.1920929e-07 < fVar12) {
      fVar12 = 1.0 / fVar12;
      fStack_a0 = local_88._4_4_ * fVar12;
      local_a4 = (float)local_88 * fVar12;
      fStack_a8 = local_90._4_4_ * fVar12;
      local_ac = (float)local_90 * fVar12;
    }
    local_ac = -local_ac;
    fStack_a8 = -fStack_a8;
    local_a4 = -local_a4;
    uVar3 = *(uint *)(param_2 + 0x70);
    fVar14 = -(local_a4 * local_80._4_4_) + local_78 * fStack_a8 + (float)local_80 * fStack_a0;
    fVar15 = (local_a4 * (float)local_80 - local_78 * local_ac) + local_80._4_4_ * fStack_a0;
    fVar13 = -(fStack_a8 * (float)local_80) + local_80._4_4_ * local_ac + local_78 * fStack_a0;
    fVar12 = (-(fStack_a8 * local_80._4_4_) - (float)local_80 * local_ac) - local_78 * local_a4;
    fVar16 = *(float *)(param_2 + 0x3c) - param_1 * *(float *)(param_2 + 0x40);
    local_9c = -(fVar12 * -local_ac) -
               (-(local_a4 * fVar15) + fStack_a0 * fVar14 + fStack_a8 * fVar13);
    fStack_98 = -(fVar12 * -fStack_a8) -
                ((fStack_a0 * fVar15 + local_a4 * fVar14) - local_ac * fVar13);
    local_94 = -(fVar12 * -local_a4) -
               ((local_ac * fVar15 - fStack_a8 * fVar14) + fStack_a0 * fVar13);
    fVar12 = 0.0;
    if (0.0 <= fVar16) {
      fVar12 = fVar16;
    }
    *(float *)(param_2 + 0x3c) = fVar12;
    puVar5 = PTR_DAT_04bd0da0;
    if (uVar3 != 0) {
      lVar6 = *(long *)(param_2 + 0x78);
      uVar10 = 0;
      do {
        lVar11 = lVar6 + ((long)((ulong)uVar10 << 0x20) >> 0x1a);
        FUN_03951cf4(*(float *)(param_2 + 0x3c) * *(float *)(param_2 + 0x3c),lVar11 + 0x10,puVar5,
                     lVar11 + 0x20);
        uVar10 = uVar10 + 1;
      } while (uVar3 != uVar10);
      fVar12 = *(float *)(param_2 + 0x3c);
    }
    if (fVar12 <= 0.0) {
      *(undefined4 *)(param_2 + 100) = 4;
    }
    else {
      FUN_03ef3130(param_2,&local_90,&local_ac);
    }
  }
  return;
}


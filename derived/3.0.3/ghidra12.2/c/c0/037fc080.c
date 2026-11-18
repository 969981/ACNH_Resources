
/* WARNING: Removing unreachable block (ram,0x037fc130) */
/* WARNING: Removing unreachable block (ram,0x037fc140) */

void FUN_037fc080(long param_1,undefined1 *param_2,int *param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  undefined8 *puVar3;
  uint *puVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ushort uVar10;
  undefined2 uVar11;
  ulong uVar12;
  undefined4 uVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  ushort local_4c [2];
  undefined *local_48;
  int local_40;
  int local_3c;
  undefined1 local_34 [4];
  
  puVar8 = PTR_DAT_04bb2010;
  local_40 = *param_3;
  local_3c = param_3[1];
  local_4c[0] = 0;
  lVar14 = *(long *)(param_1 + 8);
  local_48 = PTR_DAT_04bb2010 + 0x10;
  uVar6 = local_40 - *(int *)(lVar14 + 0x18);
  if ((*(int *)(lVar14 + 0x18) <= local_40 && local_40 <= *(int *)(lVar14 + 0x28)) &&
     (uVar7 = local_3c - *(int *)(lVar14 + 0x1c),
     *(int *)(lVar14 + 0x1c) <= local_3c && local_3c <= *(int *)(lVar14 + 0x2c))) {
    puVar1 = (ushort *)(lVar14 + 0x30) + (ulong)(uint)(int)(char)uVar6 * 0x14;
    if (2 < (uVar6 >> 3 & 0x1f)) {
      puVar1 = (ushort *)(lVar14 + 0x30);
    }
    puVar2 = puVar1 + (uint)(int)(char)uVar7;
    if (4 < (uVar7 >> 2 & 0x3f)) {
      puVar2 = puVar1;
    }
    local_4c[0] = *puVar2;
  }
  local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
  puVar3 = &DAT_05636dd8;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
    puVar3 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0x148);
  }
  FUN_02a58f80(&local_78,puVar3,&local_48);
  FUN_02b649b0(local_4c,&local_78);
  uVar12 = FUN_02a8ec10(&local_78);
  if ((uVar12 & 1) != 0) {
    local_a0 = (undefined *)((ulong)local_a0 & 0xffffffff00000000);
    uVar12 = FUN_02b677c0(&local_a0,local_70._4_4_);
    if (((uVar12 & 1) != 0) && ((int)local_a0 == 0xf)) {
      puStack_98 = puVar8 + 0x10;
      local_80 = 0;
      local_90 = 0;
      local_a0 = PTR_DAT_04bbc1a0 + 0x10;
      local_88 = puStack_98;
      uVar12 = FUN_0125f2e8(&local_a0);
      if ((((uVar12 & 1) != 0) &&
          ((((int)local_90 <= local_40 && (local_40 <= (int)local_80)) &&
           (local_90._4_4_ <= local_3c)))) && (local_3c <= local_80._4_4_)) {
        *param_2 = 1;
        local_4c[0] = 5;
        lVar14 = *(long *)(param_2 + 8);
        local_b0 = PTR_DAT_04bc05e8 + 0x10;
        if ((uint)(5 - (ulong)DAT_05334f38) < DAT_05334f18) {
          local_a8 = *(undefined8 *)(DAT_05334f20 + (5 - (ulong)DAT_05334f38) * 8);
        }
        else {
          local_a8 = 0;
        }
        uVar11 = FUN_01b4c300(&local_b0);
        *(undefined2 *)(lVar14 + 0xc) = uVar11;
        *(undefined4 *)(lVar14 + 0x10) = 0x41a00000;
        return;
      }
    }
  }
  local_78 = PTR_DAT_04bc05e8 + 0x10;
  if ((uint)local_4c[0] - (uint)DAT_05334f38 < DAT_05334f18) {
    local_70 = *(undefined8 *)
                (DAT_05334f20 + (long)(int)((uint)local_4c[0] - (uint)DAT_05334f38) * 8);
  }
  else {
    local_70 = 0;
  }
  uVar10 = FUN_01b4c300(&local_78);
  *param_2 = 1 < uVar10;
  if (uVar10 < 2) {
    return;
  }
  lVar15 = *(long *)(param_2 + 8);
  uVar11 = FUN_01b4c300(&local_78);
  *(undefined2 *)(lVar15 + 0xc) = uVar11;
  puVar9 = PTR_DAT_04bb6298;
  puVar8 = PTR_DAT_04bb27c8;
  local_a0 = (undefined *)
             CONCAT44(*(undefined4 *)(lVar15 + 0x10),(float)(int)*(short *)(lVar15 + 8) * 5.0 + 2.5)
  ;
  puStack_98 = (undefined *)
               CONCAT44(puStack_98._4_4_,(float)(int)*(short *)(lVar15 + 10) * 5.0 + 2.5);
  lVar14 = *(long *)PTR_DAT_04bb27c8;
  if (lVar14 == 0) {
    fVar16 = -500.0;
    *(undefined4 *)(lVar15 + 0x10) = 0xc3fa0000;
    fVar17 = -500.0;
    goto LAB_037fc464;
  }
  if (*(long *)(lVar14 + 0x90) == 0) {
    fVar16 = -500.0;
    *(undefined4 *)(lVar15 + 0x10) = 0xc3fa0000;
    lVar14 = *(long *)(lVar14 + 0x90);
joined_r0x037fc42c:
    if (lVar14 != 0) {
      sVar5 = *(short *)puVar9;
      if (sVar5 == -1) {
        uVar13 = 7;
      }
      else {
        puVar4 = (uint *)((long)PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 2 * 4);
        if (0xff < (uint)(int)sVar5) {
          puVar4 = (uint *)PTR_DAT_04bc39f8;
        }
        uVar13 = 7;
        if ((*puVar4 & 2) != 0) {
          uVar13 = 5;
        }
      }
      local_b0 = (undefined *)CONCAT44((int)((ulong)local_b0 >> 0x20),uVar13);
      local_34[0] = 0;
      fVar17 = (float)FUN_00962700(lVar14,&local_a0,&local_b0,1,local_34);
      fVar16 = *(float *)(lVar15 + 0x10);
      goto LAB_037fc464;
    }
  }
  else {
    sVar5 = *(short *)PTR_DAT_04bb6298;
    local_34[0] = 0;
    if (sVar5 == -1) {
      uVar13 = 7;
    }
    else {
      puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
      if (0xff < (uint)(int)sVar5) {
        puVar4 = (uint *)PTR_DAT_04bc39f8;
      }
      uVar13 = 7;
      if ((*puVar4 & 2) != 0) {
        uVar13 = 5;
      }
    }
    local_b0 = (undefined *)CONCAT44(local_b0._4_4_,uVar13);
    fVar16 = (float)FUN_00962700(*(long *)(lVar14 + 0x90),&local_a0,&local_b0,0,local_34);
    lVar14 = *(long *)puVar8;
    *(float *)(lVar15 + 0x10) = fVar16;
    if (lVar14 != 0) {
      lVar14 = *(long *)(lVar14 + 0x90);
      goto joined_r0x037fc42c;
    }
  }
  fVar17 = -500.0;
LAB_037fc464:
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  if (fVar16 - fVar17 <= 15.0) {
    *param_2 = 0;
  }
  return;
}


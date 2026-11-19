
void FUN_0382095c(long param_1,undefined1 *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 uVar10;
  int iVar11;
  ulong uVar12;
  bool bVar13;
  char cVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined **local_c0;
  undefined1 local_b8;
  int local_b4;
  int iStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  
  lVar1 = DAT_04da7238;
  uVar10 = *param_2;
  iVar4 = *(int *)(param_2 + 0x10);
  iVar6 = *(int *)(param_2 + 0x14);
  fVar22 = *(float *)(param_2 + 0x28);
  uVar5 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  fVar23 = *(float *)(param_2 + 0x30);
  uVar20 = *(undefined8 *)(param_2 + 0x38);
  lVar17 = *(long *)PTR_DAT_04bb26a8;
  uVar8 = *(uint *)(FUN_0011e5e0 + lVar17);
  if ((uVar8 != 0xffffffff) && (*(long *)(lVar17 + 0x11e610) != 0)) {
    if (*(uint *)(lVar17 + 0x11e608) <= uVar8) {
      uVar8 = 0;
    }
    uVar9 = *(uint *)(*(long *)(lVar17 + 0x11e610) + (long)(int)uVar8 * 0x80 + 8);
    local_c0 = (undefined **)CONCAT44(local_c0._4_4_,uVar9);
    uVar8 = uVar9 - 0x20;
    if ((int)uVar9 < 0x20) {
      uVar8 = uVar9;
    }
    uVar18 = 0x60040;
    if ((int)uVar9 < 0x20) {
      uVar18 = 6;
    }
    if ((uVar18 >> (ulong)(uVar8 & 0x1f) & 1) != 0) {
      bVar13 = false;
      if (DAT_04da7238 != 0) {
        local_98 = FUN_00a8c31c(DAT_04da7238);
        if ((char)(local_98 >> 0x20) < '\x05') {
          lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_98);
          local_c0 = (undefined **)(lVar17 + -0x15180);
          local_98 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_c0);
        }
        uVar15 = local_98 >> 0x10;
        uVar12 = local_98 >> 0x30;
        uVar16 = local_98 >> 0x18;
        local_98._0_6_ = CONCAT24(5,(undefined4)local_98);
        local_98 = CONCAT26((short)uVar12,(undefined6)local_98) & 0xff00ffffffffffff;
        cVar14 = FUN_00a8ae20(lVar1,uVar15,uVar16,4);
        bVar13 = cVar14 == '\x02';
      }
      goto LAB_03820a98;
    }
  }
  bVar13 = false;
LAB_03820a98:
  *(bool *)(param_1 + 0x18) = bVar13;
  iVar11 = iVar6 + -1;
  local_c0 = &PTR_LAB_04b5cb00;
  local_b8 = uVar10;
  local_b4 = iVar4;
  iStack_b0 = iVar11;
  local_ac = uVar5;
  uStack_a8 = uVar7;
  local_a0 = uVar20;
  FUN_02a048f0(param_1 + 0x28,&local_c0);
  local_c0 = &PTR_LAB_04b5cb00;
  iVar2 = iVar4 + 1;
  *(bool *)(param_1 + 0xd8) = bVar13;
  local_b8 = uVar10;
  local_b4 = iVar2;
  iStack_b0 = iVar11;
  local_ac = uVar5;
  uStack_a8 = uVar7;
  local_a0 = uVar20;
  FUN_02a048f0(param_1 + 0xe8,&local_c0);
  *(bool *)(param_1 + 0x198) = bVar13;
  local_c0 = &PTR_LAB_04b5cb00;
  local_b8 = uVar10;
  local_b4 = iVar2;
  iStack_b0 = iVar6;
  local_ac = uVar5;
  uStack_a8 = uVar7;
  local_a0 = uVar20;
  FUN_02a048f0(param_1 + 0x1a8,&local_c0);
  local_c0 = &PTR_LAB_04b5cb00;
  iVar3 = iVar6 + 1;
  *(bool *)(param_1 + 600) = bVar13;
  local_b8 = uVar10;
  local_b4 = iVar2;
  iStack_b0 = iVar3;
  local_ac = uVar5;
  uStack_a8 = uVar7;
  local_a0 = uVar20;
  FUN_02a048f0(param_1 + 0x268,&local_c0);
  *(bool *)(param_1 + 0x318) = bVar13;
  local_c0 = &PTR_LAB_04b5cb00;
  local_b8 = uVar10;
  local_b4 = iVar4;
  iStack_b0 = iVar3;
  local_ac = uVar5;
  uStack_a8 = uVar7;
  local_a0 = uVar20;
  FUN_02a048f0(param_1 + 0x328,&local_c0);
  local_c0 = &PTR_LAB_04b5cb00;
  iVar2 = iVar4 + -1;
  *(bool *)(param_1 + 0x3d8) = bVar13;
  local_b8 = uVar10;
  local_b4 = iVar2;
  iStack_b0 = iVar3;
  local_ac = uVar5;
  uStack_a8 = uVar7;
  local_a0 = uVar20;
  FUN_02a048f0(param_1 + 1000,&local_c0);
  *(bool *)(param_1 + 0x498) = bVar13;
  local_c0 = &PTR_LAB_04b5cb00;
  local_b8 = uVar10;
  local_b4 = iVar2;
  iStack_b0 = iVar6;
  local_ac = uVar5;
  uStack_a8 = uVar7;
  local_a0 = uVar20;
  FUN_02a048f0(param_1 + 0x4a8,&local_c0);
  *(bool *)(param_1 + 0x558) = bVar13;
  local_c0 = &PTR_LAB_04b5cb00;
  local_b8 = uVar10;
  local_b4 = iVar2;
  iStack_b0 = iVar11;
  local_ac = uVar5;
  uStack_a8 = uVar7;
  local_a0 = uVar20;
  FUN_02a048f0(param_1 + 0x568,&local_c0);
  *(bool *)(param_1 + 0x618) = bVar13;
  local_c0 = &PTR_LAB_04b5cb00;
  local_b8 = uVar10;
  local_b4 = iVar4;
  iStack_b0 = iVar6;
  local_ac = uVar5;
  uStack_a8 = uVar7;
  local_a0 = uVar20;
  FUN_02a048f0(param_1 + 0x628,&local_c0);
  fVar21 = 0.0;
  if (bVar13 == false) {
    fVar24 = (float)iVar4 * 5.0 + 2.5;
    fVar22 = fVar22 - fVar24;
    fVar25 = (float)iVar6 * 5.0 + 2.5;
    fVar23 = fVar23 - fVar25;
    fVar21 = atan2f(fVar23,fVar22);
    uVar8 = (int)(long)(fVar21 * 6.8356525e+08) + 0x40000000U >> 0x1d;
    lVar1 = (ulong)(uVar8 + 1) * 8;
    lVar17 = param_1 + 0x10 + (ulong)uVar8 * 0xc0;
    lVar19 = param_1 + 0x10 + (ulong)(uVar8 + 1) * 0xc0;
    fVar21 = (-((((float)(iVar6 + *(int *)(&DAT_04199230 + (ulong)uVar8 * 8)) * 5.0 + 2.5) - fVar25)
               * fVar22) +
             fVar23 * (((float)(iVar4 + *(int *)(&DAT_0419922c + (ulong)uVar8 * 8)) * 5.0 + 2.5) -
                      fVar24)) * 0.5;
    fVar22 = (-(fVar23 * (((float)(iVar4 + *(int *)(&DAT_0419922c + lVar1)) * 5.0 + 2.5) - fVar24))
             + (((float)(iVar6 + *(int *)(&DAT_04199230 + lVar1)) * 5.0 + 2.5) - fVar25) * fVar22) *
             0.5;
    fVar21 = ((float)*(int *)(lVar19 + 0xc) / (float)*(int *)(lVar19 + 0x10)) * (fVar21 / 12.5) +
             (fVar22 / 12.5) * ((float)*(int *)(lVar17 + 0xc) / (float)*(int *)(lVar17 + 0x10)) +
             (((12.5 - fVar21) - fVar22) / 12.5) *
             ((float)*(int *)(param_1 + 0x61c) / (float)*(int *)(param_1 + 0x620));
  }
  *(float *)(param_1 + 8) = fVar21;
  return;
}


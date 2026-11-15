
/* WARNING: Removing unreachable block (ram,0x022ec034) */
/* WARNING: Removing unreachable block (ram,0x022ec044) */
/* WARNING: Removing unreachable block (ram,0x022ec050) */

undefined8 FUN_022ebfb4(float *param_1,long param_2,undefined8 *param_3)

{
  undefined *puVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  byte bVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  uint local_f4;
  undefined *local_f0;
  int local_e8;
  int iStack_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  int iStack_d4;
  byte local_54 [4];
  
  if (*(int *)(param_2 + 0x10) != 0) {
    return 1;
  }
  iVar8 = *(int *)(param_2 + 8);
  if (iVar8 == 0) {
    return 1;
  }
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x24a26848) {
    return 1;
  }
  local_e0 = (undefined *)((ulong)local_e0 & 0xffffffff00000000);
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) == 0) {
    return 1;
  }
  lVar10 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xa8);
  if (lVar10 == 0) {
    return 1;
  }
  local_54[0] = 0;
  FUN_0131a4e4(&local_e0);
  iVar4 = (int)((float)(int)*param_1 / 10.0) - (uint)(*param_1 < 0.0);
  iVar7 = (int)((float)(int)param_1[2] / 10.0) - (uint)(param_1[2] < 0.0);
  fVar11 = (float)iVar4 * 10.0 + 5.0 + -10.0;
  fVar12 = (float)iVar7 * 10.0 + 5.0 + -10.0;
  sVar2 = (short)(int)((float)(int)fVar11 / 10.0) - (ushort)(fVar11 < 0.0);
  sVar3 = (short)(int)((float)(int)fVar12 / 10.0) - (ushort)(fVar12 < 0.0);
  local_e0 = (undefined *)CONCAT26(sVar3,CONCAT24(sVar2,CONCAT22((short)iVar7,(short)iVar4)));
  local_d8 = CONCAT22(sVar3 + 2,sVar2 + 2);
  FUN_0130a960(lVar10,&local_e0);
  local_f0 = (undefined *)((ulong)local_f0 & 0xffffffffffff0000);
  FUN_022e8b40(&local_f4,&local_f0,local_54,iVar8,&local_e0,param_1);
  puVar6 = PTR_DAT_04bb2018;
  bVar5 = local_54[0] & 0x55;
  local_54[0] = local_54[0] & 0x55;
  if (bVar5 != 0) {
    puVar1 = PTR_DAT_04bb2018 + 0x10;
    iVar8 = (int)((float)(int)*param_1 / 10.0) - (uint)(*param_1 < 0.0);
    iVar4 = (int)((float)(int)param_1[2] / 10.0) - (uint)(param_1[2] < 0.0);
    local_e0 = puVar1;
    local_d8 = iVar8;
    iStack_d4 = iVar4;
    FUN_01309ec4(&local_f0,lVar10,&local_e0);
    local_e8 = (int)((float)(int)(param_1[3] + (float)DAT_054843dc) / 10.0) -
               (uint)(param_1[3] + (float)DAT_054843dc < 0.0);
    iStack_e4 = (int)((float)(int)(param_1[5] + DAT_054843e4) / 10.0) -
                (uint)(param_1[5] + DAT_054843e4 < 0.0);
    if (((((local_e8 != iVar8) || (iStack_e4 != iVar4)) && (*(int *)(lVar10 + 0x18) <= local_e8)) &&
        ((local_e8 <= *(int *)(lVar10 + 0x28) && (*(int *)(lVar10 + 0x1c) <= iStack_e4)))) &&
       (iStack_e4 <= *(int *)(lVar10 + 0x2c))) {
      local_f0 = puVar1;
      iVar7 = FUN_006f0400((float)local_e8 - (float)iVar8,(float)iStack_e4 - (float)iVar4);
      local_f4 = iVar7 + 0x10000000U >> 0x1d;
      if (((local_54[0] >> (ulong)local_f4 & 1) != 0) &&
         (uVar9 = (**(code **)*param_3)(param_3,&local_f0,lVar10), (uVar9 & 1) == 0)) {
        return 0;
      }
    }
    local_f0 = puVar6 + 0x10;
    local_e8 = (int)((float)(int)(param_1[3] + DAT_054843e8) / 10.0) -
               (uint)(param_1[3] + DAT_054843e8 < 0.0);
    iStack_e4 = (int)((float)(int)(param_1[5] + DAT_054843ec._4_4_) / 10.0) -
                (uint)(param_1[5] + DAT_054843ec._4_4_ < 0.0);
    if ((((local_e8 != iVar8) || (iStack_e4 != iVar4)) && (*(int *)(lVar10 + 0x18) <= local_e8)) &&
       (((local_e8 <= *(int *)(lVar10 + 0x28) && (*(int *)(lVar10 + 0x1c) <= iStack_e4)) &&
        (iStack_e4 <= *(int *)(lVar10 + 0x2c))))) {
      iVar7 = FUN_006f0400((float)local_e8 - (float)iVar8,(float)iStack_e4 - (float)iVar4);
      local_f4 = iVar7 + 0x10000000U >> 0x1d;
      if (((local_54[0] >> (ulong)local_f4 & 1) != 0) &&
         (uVar9 = (**(code **)*param_3)(param_3,&local_f0,lVar10), (uVar9 & 1) == 0)) {
        return 0;
      }
    }
    local_f0 = puVar6 + 0x10;
    local_e8 = (int)((float)(int)(param_1[3] + DAT_054843f4) / 10.0) -
               (uint)(param_1[3] + DAT_054843f4 < 0.0);
    iStack_e4 = (int)((float)(int)(param_1[5] + DAT_054843f8._4_4_) / 10.0) -
                (uint)(param_1[5] + DAT_054843f8._4_4_ < 0.0);
    if (((((local_e8 != iVar8) || (iStack_e4 != iVar4)) && (*(int *)(lVar10 + 0x18) <= local_e8)) &&
        ((local_e8 <= *(int *)(lVar10 + 0x28) && (*(int *)(lVar10 + 0x1c) <= iStack_e4)))) &&
       (iStack_e4 <= *(int *)(lVar10 + 0x2c))) {
      iVar7 = FUN_006f0400((float)local_e8 - (float)iVar8,(float)iStack_e4 - (float)iVar4);
      local_f4 = iVar7 + 0x10000000U >> 0x1d;
      if (((local_54[0] >> (ulong)local_f4 & 1) != 0) &&
         (uVar9 = (**(code **)*param_3)(param_3,&local_f0,lVar10), (uVar9 & 1) == 0)) {
        return 0;
      }
    }
    local_f0 = puVar6 + 0x10;
    local_e8 = (int)((float)(int)(param_1[3] + (float)DAT_05484400) / 10.0) -
               (uint)(param_1[3] + (float)DAT_05484400 < 0.0);
    iStack_e4 = (int)((float)(int)(param_1[5] + DAT_05484408) / 10.0) -
                (uint)(param_1[5] + DAT_05484408 < 0.0);
    if (((((local_e8 != iVar8) || (iStack_e4 != iVar4)) && (*(int *)(lVar10 + 0x18) <= local_e8)) &&
        ((local_e8 <= *(int *)(lVar10 + 0x28) && (*(int *)(lVar10 + 0x1c) <= iStack_e4)))) &&
       (iStack_e4 <= *(int *)(lVar10 + 0x2c))) {
      iVar7 = FUN_006f0400((float)local_e8 - (float)iVar8,(float)iStack_e4 - (float)iVar4);
      local_f4 = iVar7 + 0x10000000U >> 0x1d;
      if (((local_54[0] >> (ulong)local_f4 & 1) != 0) &&
         (uVar9 = (**(code **)*param_3)(param_3,&local_f0,lVar10), (uVar9 & 1) == 0)) {
        return 0;
      }
    }
    local_f0 = puVar6 + 0x10;
    local_e8 = (int)((float)(int)(param_1[3] + (float)DAT_0548440c) / 10.0) -
               (uint)(param_1[3] + (float)DAT_0548440c < 0.0);
    iStack_e4 = (int)((float)(int)(param_1[5] + DAT_05484414) / 10.0) -
                (uint)(param_1[5] + DAT_05484414 < 0.0);
    if ((((local_e8 != iVar8) || (iStack_e4 != iVar4)) && (*(int *)(lVar10 + 0x18) <= local_e8)) &&
       (((local_e8 <= *(int *)(lVar10 + 0x28) && (*(int *)(lVar10 + 0x1c) <= iStack_e4)) &&
        (iStack_e4 <= *(int *)(lVar10 + 0x2c))))) {
      iVar8 = FUN_006f0400((float)local_e8 - (float)iVar8,(float)iStack_e4 - (float)iVar4);
      local_f4 = iVar8 + 0x10000000U >> 0x1d;
      if (((local_54[0] >> (ulong)local_f4 & 1) != 0) &&
         (uVar9 = (**(code **)*param_3)(param_3,&local_f0,lVar10), (uVar9 & 1) == 0)) {
        return 0;
      }
    }
  }
  return 1;
}


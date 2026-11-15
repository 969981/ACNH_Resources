
void FUN_01e66688(long *param_1,long param_2,uint param_3,ulong param_4,uint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  short sVar6;
  int iVar7;
  ulong uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint *puVar11;
  long lVar12;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined4 local_64;
  undefined4 local_44;
  
  if ((param_3 & 1) != 0) {
    local_d0 = (undefined *)CONCAT44(local_d0._4_4_,2);
    uVar10 = *(uint *)(*(long *)(param_2 + 8) + 0x508);
    if ((uVar10 < 10) && ((&DAT_053fee41)[(ulong)uVar10 * 0xba0] != '\0')) {
      FUN_01e2caf8(*(long *)PTR_DAT_04bb3968 + 0xda0,&DAT_053fe850 + (ulong)uVar10 * 0xba0,0,
                   &local_d0,param_5 & 1,0);
    }
  }
  puVar3 = PTR_DAT_04bc1558;
  puVar2 = PTR_DAT_04bbc1a0;
  puVar1 = PTR_DAT_04bb2010;
  sVar6 = *(short *)PTR_DAT_04bb6298;
  if (sVar6 == -1) goto LAB_01e668a4;
  local_d0 = (undefined *)CONCAT44(local_d0._4_4_,1);
  puVar11 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
  if (0xff < (uint)(int)sVar6) {
    puVar11 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar11 >> 1 & 1) == 0) goto LAB_01e668a4;
  if (((*(long *)(param_2 + 8) == 0) ||
      (uVar10 = *(uint *)(*(long *)(param_2 + 8) + 0x508), 9 < uVar10)) ||
     ((&DAT_053fee41)[(ulong)uVar10 * 0xba0] == '\0')) {
LAB_01e66820:
    puVar11 = (uint *)PTR_DAT_04bc15a0;
LAB_01e66828:
    uVar10 = *puVar11;
  }
  else {
    if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
      if ((int)(&DAT_053fe898)[(ulong)uVar10 * 0x2e8] < 1) goto LAB_01e66820;
      uVar8 = (ulong)uVar10;
      iVar7 = (&DAT_053fe898)[(ulong)uVar10 * 0x2e8] + (&DAT_053fe894)[uVar8 * 0x2e8] + -1;
      iVar4 = 0;
      if ((int)(&DAT_053fe890)[uVar8 * 0x2e8] <= iVar7) {
        iVar4 = (&DAT_053fe890)[uVar8 * 0x2e8];
      }
      puVar11 = (uint *)((&DAT_053fe888)[uVar8 * 0x174] + (long)(iVar7 - iVar4) * 0x14 + 8);
      goto LAB_01e66828;
    }
    uVar10 = *(byte *)(*(long *)PTR_DAT_04bb3968 + (ulong)uVar10 * 0x28 + 0xe23) & 3;
  }
  if (uVar10 == 1) {
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined1 *)((long)param_1 + 0x54) = 0;
    *param_1 = (long)(puVar3 + 0x10);
    param_1[1] = 0;
    puVar1 = puVar1 + 0x10;
    param_1[4] = (long)(puVar2 + 0x10);
    param_1[5] = (long)puVar1;
    param_1[6] = 0;
    param_1[7] = (long)puVar1;
    param_1[8] = 0;
    param_1[9] = -0x100000000;
    *(undefined4 *)(param_1 + 10) = 0xffffffff;
    param_1[0xb] = 0xfffe;
    FUN_0277d4ac();
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined4 *)((long)param_1 + 0x6c) = 0;
    param_1[0xc] = 0x3bf800000;
    return;
  }
LAB_01e668a4:
  if ((param_4 & 1) == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined1 *)((long)param_1 + 0x54) = 0;
    *param_1 = (long)(puVar3 + 0x10);
    param_1[1] = 0;
    puVar1 = puVar1 + 0x10;
    param_1[4] = (long)(puVar2 + 0x10);
    param_1[5] = (long)puVar1;
    param_1[6] = 0;
    param_1[7] = (long)puVar1;
    param_1[8] = 0;
    param_1[9] = -0x100000000;
    *(undefined4 *)(param_1 + 10) = 0xffffffff;
    param_1[0xb] = 0xfffe;
    FUN_0277d4ac();
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined4 *)((long)param_1 + 0x6c) = 0;
    param_1[0xc] = 0x3bf800000;
    uVar9 = FUN_021dcc90(*(long *)(param_2 + 8) + 0x508);
    local_d0 = (undefined *)CONCAT44(local_d0._4_4_,uVar9);
    FUN_01e26a60(param_1,&local_d0);
  }
  else {
    local_c0 = 0;
    uStack_b8 = 0;
    puVar1 = PTR_DAT_04bc1558 + 0x10;
    uStack_c8 = 0;
    puVar2 = PTR_DAT_04bbc1a0 + 0x10;
    local_7c = 0;
    local_90 = 0;
    uStack_88 = 0xffffffff00000000;
    local_80 = 0xffffffff;
    local_78 = 0xfffe;
    puVar3 = PTR_DAT_04bb2010 + 0x10;
    local_a0 = 0;
    local_d0 = puVar1;
    local_b0 = puVar2;
    puStack_a8 = puVar3;
    puStack_98 = puVar3;
    FUN_0277d4ac(&local_78);
    local_68 = 0;
    local_64 = 0;
    local_70 = 0x3bf800000;
    local_44 = FUN_021dcc90(*(long *)(param_2 + 8) + 0x508);
    FUN_01e26a60(&local_d0,&local_44);
    FUN_0209bf8c(param_2 + 0xaf38,&local_d0);
    FUN_01e67ee0(param_2,param_2 + 0xb028,1,0,param_3 & 1);
    lVar12 = *(long *)(param_2 + 0xb030);
    lVar5 = *(long *)(param_2 + 0xb038);
    param_1[7] = (long)puVar3;
    param_1[4] = (long)puVar2;
    param_1[5] = (long)puVar3;
    *param_1 = (long)puVar1;
    param_1[1] = lVar12;
    lVar12 = *(long *)(param_2 + 0xb040);
    param_1[2] = lVar5;
    param_1[3] = lVar12;
    uVar9 = *(undefined4 *)(param_2 + 0xb05c);
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0xb058);
    *(undefined4 *)((long)param_1 + 0x34) = uVar9;
    uVar9 = *(undefined4 *)(param_2 + 0xb06c);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0xb068);
    *(undefined4 *)((long)param_1 + 0x44) = uVar9;
    param_1[9] = *(long *)(param_2 + 0xb070);
    *(undefined8 *)((long)param_1 + 0x4d) = *(undefined8 *)(param_2 + 0xb075);
    uVar9 = *(undefined4 *)(param_2 + 0xb084);
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb080);
    *(undefined4 *)((long)param_1 + 0x5c) = uVar9;
    lVar12 = *(long *)(param_2 + 0xb090);
    param_1[0xc] = *(long *)(param_2 + 0xb088);
    param_1[0xd] = lVar12;
  }
  return;
}


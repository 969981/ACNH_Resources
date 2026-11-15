
void FUN_01facbc0(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  undefined *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  long local_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined8 local_48;
  undefined *puStack_40;
  undefined8 local_38;
  
  *(undefined2 *)(param_1 + 0x11fc8) = *(undefined2 *)param_2;
  *(undefined1 *)(param_1 + 0x11fca) = *(undefined1 *)((long)param_2 + 2);
  *(undefined1 *)(param_1 + 0x11fcb) = *(undefined1 *)((long)param_2 + 3);
  local_70 = PTR_DAT_04bc0510;
  puStack_50 = PTR_DAT_04bb2010;
  local_38 = 0;
  local_60 = 0;
  local_58 = PTR_DAT_04bbc1a0 + 0x10;
  *(undefined4 *)(param_1 + 0x11fcc) = param_2[1];
  puVar1 = PTR_DAT_04bb43c0;
  puStack_50 = puStack_50 + 0x10;
  local_48 = 0;
  local_70 = local_70 + 0x10;
  local_68 = *param_2;
  uStack_64 = param_2[1];
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  puStack_40 = puStack_50;
  uVar2 = FUN_0277d6c4(&local_68);
  if (*(long *)puVar1 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      lVar6 = *(long *)PTR_DAT_04bc0428;
      uVar2 = FUN_0277d6c4(param_2);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
         (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8), lVar6 != 0)) {
        local_60 = lVar6;
      }
    }
  }
  FUN_01afb480(&local_70,&local_58);
  local_48._0_4_ = (int)local_48 + param_2[4];
  local_38._0_4_ = (int)local_38 + param_2[4];
  local_48._4_4_ = local_48._4_4_ + param_2[5];
  local_38._4_4_ = local_38._4_4_ + param_2[5];
  *(int *)(param_1 + 0x11fe0) = (int)local_48;
  *(int *)(param_1 + 0x11fe4) = local_48._4_4_;
  *(int *)(param_1 + 0x11ff0) = (int)local_38;
  *(int *)(param_1 + 0x11ff4) = local_38._4_4_;
  *(undefined4 *)(param_1 + 0x11ff8) = param_2[7];
  puVar1 = PTR_DAT_04bb27c0;
  if (3 < param_2[7] - 2) {
    *(undefined4 *)(param_1 + 0x12000) = 0;
    *(float *)(param_1 + 0x11ffc) =
         ((float)(int)local_48 * 5.0 + (float)(int)local_38 * 5.0 + 5.0) * 0.5;
    fVar7 = ((float)local_48._4_4_ * 5.0 + (float)local_38._4_4_ * 5.0 + 5.0) * 0.5;
    goto LAB_01face0c;
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return;
  }
  uVar2 = param_2[8];
  if ((((uVar2 == 0) ||
       (lVar5 = *(long *)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                         ((ulong)(uVar2 >> 0x11) & 0x7ff8)), lVar5 == 0)) ||
      ((*(uint *)(lVar5 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar5 + 0x230) != uVar2)) {
    lVar5 = 0;
  }
  if ((*(int *)(lVar6 + 0x288) == 1) || (*(int *)(lVar6 + 0x288) == -1)) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar1;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar2 = 1;
    }
    else {
      if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_01face24;
      uVar2 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_01face24:
    uVar2 = 0;
  }
  if (lVar5 == 0) {
    return;
  }
  uVar2 = uVar2 ^ 1;
  if (*(int *)(lVar5 + 0x150) != 1) {
    uVar2 = 1;
  }
  if (uVar2 != 0) {
    return;
  }
  lVar6 = *(long *)(lVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x11ffc) = *(undefined4 *)(lVar6 + 0x278);
  *(undefined4 *)(param_1 + 0x12000) = *(undefined4 *)(lVar6 + 0x27c);
  fVar7 = *(float *)(lVar6 + 0x280);
LAB_01face0c:
  *(float *)(param_1 + 0x12004) = fVar7;
  return;
}


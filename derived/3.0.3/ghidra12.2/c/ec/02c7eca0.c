
void FUN_02c7eca0(long param_1,short *param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  bool bVar5;
  long lVar6;
  undefined8 local_130;
  undefined8 uStack_128;
  short local_120;
  short local_11e;
  undefined4 local_11c;
  undefined2 local_a0;
  undefined *local_98 [4];
  int local_74;
  undefined *local_58;
  short local_50;
  short local_4e;
  undefined4 local_4c;
  long local_48;
  undefined *local_40;
  char *pcStack_38;
  
  FUN_025d6bd4(local_98,param_1 + 0x1f8);
  local_130 = 0;
  uStack_128 = 0;
  FUN_00bdc3cc(&local_120);
  puVar1 = PTR_DAT_04bb43c0;
  local_120 = -2;
  local_a0 = 0;
  local_130 = CONCAT44(local_130._4_4_,2);
  if (*param_2 == -2) {
    bVar5 = false;
    iVar3 = 0;
  }
  else {
    local_4e = param_2[1];
    local_48 = 0;
    local_4c = *(undefined4 *)(param_2 + 2);
    local_58 = PTR_DAT_04bc0510 + 0x10;
    lVar6 = *(long *)PTR_DAT_04bb43c0;
    local_50 = *param_2;
    uVar2 = FUN_0277d6c4(&local_50);
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
          local_48 = lVar6;
        }
      }
    }
    iVar3 = FUN_01aed730(&local_58);
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "RegulationType4";
    uVar4 = FUN_0273f0a0(&local_40);
    bVar5 = (uVar4 & 1) != 0;
    if (bVar5) {
      iVar3 = (iVar3 * 0xc) / 10;
    }
    local_120 = *param_2;
  }
  local_11e = param_2[1];
  uStack_128 = CONCAT44(1,(undefined4)uStack_128);
  local_a0 = CONCAT11(local_a0._1_1_,bVar5);
  local_11c = *(undefined4 *)(param_2 + 2);
  local_130._4_4_ = iVar3;
  FUN_025d74cc(local_98,&local_130);
  local_98[0] = PTR_DAT_04bc3410 + 0x10;
  iVar3 = FUN_025d79cc(local_98);
  if (((iVar3 == -1) ||
      (local_130._0_4_ = (**(code **)(local_98[0] + 0x20))(local_98), 0xc < (int)local_130)) &&
     (local_74 == 0)) {
    local_74 = 1;
  }
  FUN_02601530(local_98);
  return;
}


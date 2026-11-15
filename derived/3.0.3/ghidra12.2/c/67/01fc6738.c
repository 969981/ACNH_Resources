
bool FUN_01fc6738(long *param_1,undefined4 *param_2,int param_3)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  long local_a0;
  undefined *local_98;
  char *local_90;
  undefined4 local_88;
  char local_84 [31];
  undefined1 local_65;
  undefined *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  int local_34;
  
  uVar3 = (int)(long)((float)param_3 * 90.0 * 11930465.0) + 0xa0000000U >> 0x1e;
  local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar3);
  local_50 = 0;
  local_34 = uVar3 + 2;
  local_60 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_58 = PTR_DAT_04bb2010 + 0x10;
  local_40 = 0;
  if (2 < uVar3 - 1) {
    local_34 = 2;
  }
  local_48 = puStack_58;
  FUN_01508594(&local_60,&local_34);
  puVar1 = PTR_DAT_04bb43c0;
  fVar8 = *(float *)*param_1;
  fVar7 = (float)(int)local_40 * 5.0 + 5.0;
  bVar2 = false;
  if (((float)(int)local_50 * 5.0 < fVar8) && (bVar2 = false, !NAN(fVar8) && !NAN(fVar7))) {
    bVar2 = fVar8 < fVar7;
  }
  if (bVar2) {
    fVar7 = (float)local_40._4_4_ * 5.0 + 5.0;
    fVar8 = ((float *)*param_1)[2];
    bVar2 = false;
    if (((float)local_50._4_4_ * 5.0 < fVar8) && (bVar2 = false, !NAN(fVar8) && !NAN(fVar7))) {
      bVar2 = fVar8 < fVar7;
    }
    if (bVar2) {
      local_65 = 0;
      local_88 = 0x20;
      local_90 = local_84;
      local_84[0] = '\0';
      local_98 = PTR_DAT_04bb2028 + 0x10;
      lVar6 = *(long *)PTR_DAT_04bb43c0;
      uVar3 = FUN_0277d6c4(param_2);
      lVar5 = *(long *)puVar1;
      if (lVar5 != 0) {
        lVar6 = *(long *)(lVar6 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          local_a0 = 0;
          local_a8 = *param_2;
          uStack_a4 = param_2[1];
          local_b0 = PTR_DAT_04bc0510 + 0x10;
          uVar3 = FUN_0277d6c4(&local_a8);
          if (*(long *)puVar1 != 0) {
            lVar5 = *(long *)(lVar5 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
            if ((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
              lVar5 = *(long *)PTR_DAT_04bc0428;
              uVar3 = FUN_0277d6c4(param_2);
              uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
              if ((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
                 (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8), lVar5 != 0)) {
                local_a0 = lVar5;
              }
            }
          }
          uVar4 = FUN_01b10b80(&local_b0,&local_98);
          if ((uVar4 & 1) != 0) {
            return *local_90 != '\0';
          }
        }
      }
    }
  }
  return false;
}


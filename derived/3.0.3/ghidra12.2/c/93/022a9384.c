
undefined8 FUN_022a9384(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  undefined **local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  byte local_48;
  undefined *local_40;
  int local_38;
  int iStack_34;
  
  pfVar4 = (float *)FUN_0251b3b0(param_1 + 0x10,0);
  if (pfVar4 == (float *)0x0) {
LAB_022a9638:
    uVar6 = 1;
  }
  else {
    local_50 = 0;
    local_40 = PTR_DAT_04bb2010 + 0x10;
    fVar10 = (*pfVar4 + (float)(int)(*(uint *)(param_2 + 8) & 0xfffffffe) * 5.0 + 5.0) * 0.5;
    fVar11 = (pfVar4[2] + (float)(int)(*(uint *)(param_2 + 0xc) & 0xfffffffe) * 5.0 + 5.0) * 0.5;
    local_38 = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0);
    iStack_34 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
    if (DAT_05aed670 == 0) {
      puVar7 = &DAT_055c04a0;
    }
    else {
      puVar7 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar7 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar2 = FUN_006bd550(*puVar7,0);
        puVar7 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar2 != 0x758f7eaf) {
          puVar7 = &DAT_055c04a0;
        }
      }
    }
    local_4c = *(undefined4 *)(puVar7 + 7);
    local_48 = FUN_017baf44();
    local_48 = local_48 & 1;
    local_58 = PTR_DAT_04bb6268 + 0x10;
    FUN_01a5033c(&local_60,&local_58,0,&local_40,0);
    puVar1 = PTR_DAT_04bb43c0;
    lVar9 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(&local_60);
    lVar8 = *(long *)puVar1;
    if (lVar8 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        local_68 = 0;
        local_70 = local_60;
        uStack_6c = uStack_5c;
        local_78 = &PTR_FUN_04a36b50;
        uVar3 = FUN_0277d6c4(&local_70);
        if (*(long *)puVar1 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
            lVar8 = *(long *)PTR_DAT_04bc0428;
            uVar3 = FUN_0277d6c4(&local_60);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
            if (uVar3 < *(uint *)(lVar8 + 0x1d8)) {
              lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8);
              if (lVar8 != 0) {
                local_68 = lVar8;
              }
            }
          }
        }
        uVar5 = FUN_01ae59b0(&local_78);
        if ((((uVar5 & 1) != 0) && (iVar2 = FUN_0277ebd0(&local_60), iVar2 != 0)) &&
           ((iVar2 = FUN_01aee3b4(&local_78), iVar2 == 6 ||
            (iVar2 = FUN_01aee3b4(&local_78), iVar2 == 7)))) goto LAB_022a9638;
      }
    }
    uVar6 = 0;
  }
  return uVar6;
}


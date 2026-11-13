
void FUN_011f0c94(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  undefined *local_c8;
  undefined *puStack_c0;
  uint local_b8;
  uint uStack_b4;
  undefined *local_b0;
  uint local_a8;
  uint uStack_a4;
  undefined *local_a0;
  uint local_98;
  uint uStack_94;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_68;
  undefined *local_60;
  uint local_58;
  uint uStack_54;
  
  puVar3 = PTR_DAT_04bb3238;
  puVar2 = PTR_DAT_04bb2010;
  if (*(int *)(param_1 + 8) != 2) {
    local_60 = PTR_DAT_04bb2010 + 0x10;
    lVar1 = param_1 + 0xc;
    fVar9 = *(float *)(param_2 + 8) + -2.5;
    fVar10 = *(float *)(param_2 + 0x10) + -2.5;
    local_58 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0) & 0xfffffffe;
    uStack_54 = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0) & 0xfffffffe;
    FUN_0124c030(&local_c8,lVar1);
    iVar4 = FUN_0123db50(&puStack_c0,CONCAT44(uStack_b4,local_b8));
    if ((iVar4 == 0x21) ||
       (iVar4 = FUN_0123db50(&puStack_c0,CONCAT44(uStack_b4,local_b8)), iVar4 == 0x22)) {
      FUN_022b4f50(lVar1,&local_60,0);
    }
    else {
      local_70 = 0;
      lVar7 = *(long *)PTR_DAT_04bb2720;
      if (lVar7 == 0) {
        puVar8 = &DAT_055c04a0;
      }
      else {
        puVar8 = &DAT_055c04a0;
        if (*(long *)(lVar7 + 0x330) != 0) {
          puVar8 = (undefined8 *)
                   (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                             (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar7 + 0x338));
          iVar4 = FUN_006bd550(*puVar8,0);
          puVar8 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar4 != 0x758f7eaf) {
            puVar8 = &DAT_055c04a0;
          }
        }
      }
      local_6c = *(undefined4 *)(puVar8 + 7);
      local_68 = FUN_017baf44();
      local_68 = local_68 & 1;
      local_78 = PTR_DAT_04bb6268 + 0x10;
      FUN_011f3880(&local_78,0,lVar1,&local_60);
      lVar7 = *(long *)PTR_DAT_04bbbc68;
      if (((((lVar7 != 0) && (*(long *)(lVar7 + 0xb0) != 0)) &&
           (*(long *)(*(long *)(lVar7 + 0xb0) + 8) != 0)) &&
          ((*(long *)(lVar7 + 0x488) != 0 && (*(long *)(*(long *)(lVar7 + 0x488) + 8) != 0)))) &&
         ((*(long *)(lVar7 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar7 + 0x2b0) + 8) != 0)))) {
        uVar5 = FUN_0277d6c4(lVar1);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          FUN_0124c030(auStack_90,lVar1);
          uVar6 = FUN_0123d890(local_80,4);
          if ((uVar6 & 1) != 0) {
            local_98 = local_58;
            uStack_94 = uStack_54;
            local_a0 = puVar2 + 0x10;
            FUN_011e5580(&local_a0,1,*(undefined4 *)puVar3);
          }
        }
      }
    }
  }
  puStack_c0 = puVar2 + 0x10;
  fVar9 = *(float *)(param_2 + 8) + -2.5;
  fVar10 = *(float *)(param_2 + 0x10) + -2.5;
  local_c8 = PTR_DAT_04bbc1a0 + 0x10;
  local_a8 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
  uStack_a4 = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0);
  local_b8 = local_a8 & 0xfffffffe;
  uStack_b4 = uStack_a4 & 0xfffffffe;
  local_a8 = local_a8 | 1;
  uStack_a4 = uStack_a4 | 1;
  local_b0 = puStack_c0;
  FUN_011e58c0(&local_c8,*(undefined4 *)puVar3);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


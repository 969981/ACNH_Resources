
uint FUN_022beacc(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *local_80;
  undefined *local_78;
  uint local_70;
  uint uStack_6c;
  undefined *local_68;
  uint local_60;
  uint uStack_5c;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  byte local_48;
  
  local_50 = 0;
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = *(uint *)(param_1 + 0xc);
  lVar5 = *(long *)PTR_DAT_04bb2720;
  if (lVar5 == 0) {
    puVar6 = &DAT_055c04a0;
  }
  else {
    puVar6 = &DAT_055c04a0;
    if (*(long *)(lVar5 + 0x330) != 0) {
      puVar6 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar5 + 0x338));
      iVar1 = FUN_006bd550(*puVar6,0);
      puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar6 = &DAT_055c04a0;
      }
    }
  }
  local_4c = *(undefined4 *)(puVar6 + 7);
  local_48 = FUN_017baf44();
  local_48 = local_48 & 1;
  local_58 = PTR_DAT_04bb6268 + 0x10;
  local_80 = PTR_DAT_04bbc1a0 + 0x10;
  local_78 = PTR_DAT_04bb2010 + 0x10;
  local_60 = uVar2 | 1;
  uStack_5c = uVar4 | 1;
  local_70 = uVar2 & 0xfffffffe;
  uStack_6c = uVar4 & 0xfffffffe;
  local_68 = local_78;
  uVar2 = FUN_011f3270(&local_58,0,&local_80);
  if ((uVar2 & 1) != 0) {
    local_78 = (undefined *)CONCAT44(local_78._4_4_,(float)*(int *)(param_1 + 0xc) * 5.0 + 5.0);
    local_80 = (undefined *)CONCAT44(local_80._4_4_,(float)*(int *)(param_1 + 8) * 5.0 + 5.0);
    uVar3 = FUN_01735670(0x40a00000,0xbf800000,&local_80,0,0,1,1,0,1,0,0,1);
    uVar4 = 0;
    if ((uVar3 & 1) != 0) goto LAB_022bec38;
  }
  uVar4 = uVar2;
LAB_022bec38:
  return uVar4 & 1;
}


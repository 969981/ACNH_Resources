
undefined1 FUN_022bedcc(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  undefined2 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  byte local_38;
  undefined2 local_18;
  undefined1 local_16;
  undefined1 local_15;
  undefined4 local_14;
  
  local_40 = 0;
  lVar5 = *(long *)PTR_DAT_04bb2720;
  if (lVar5 == 0) {
    puVar6 = &DAT_055c04a0;
  }
  else {
    puVar6 = &DAT_055c04a0;
    if (*(long *)(lVar5 + 0x330) != 0) {
      puVar6 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar5 + 0x338));
      iVar2 = FUN_006bd550(*puVar6,0);
      puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar2 != 0x758f7eaf) {
        puVar6 = &DAT_055c04a0;
      }
    }
  }
  local_3c = *(undefined4 *)(puVar6 + 7);
  local_38 = FUN_017baf44();
  local_38 = local_38 & 1;
  local_48 = PTR_DAT_04bb6268 + 0x10;
  local_58 = &DAT_048f9750;
  uStack_50 = 0;
  puVar4 = (undefined2 *)FUN_01a5190c(&local_48,0,param_1,&local_58);
  lVar5 = DAT_05150358;
  local_18 = *puVar4;
  local_16 = *(undefined1 *)(puVar4 + 1);
  local_15 = *(undefined1 *)((long)puVar4 + 3);
  local_14 = *(undefined4 *)(puVar4 + 2);
  if (((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
      ((*(long *)(DAT_05150358 + 0x488) != 0 &&
       (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)))) &&
     ((*(long *)(DAT_05150358 + 0x2b0) != 0 && (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)
      ))) {
    uVar3 = FUN_0277d6c4(&local_18);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      FUN_0124c030(auStack_70,&local_18);
      iVar2 = FUN_0123db50(auStack_68,local_60);
      if (iVar2 != 0x2d) {
        return 0;
      }
      FUN_011f3520(&local_48,0,&local_58);
      uVar1 = 0;
      if ((param_2 & 1) == 0) {
        uVar1 = 2;
      }
      FUN_01225ba0(*(undefined8 *)PTR_DAT_04bb4778,&local_58,uVar1);
      return 1;
    }
  }
  return 0;
}


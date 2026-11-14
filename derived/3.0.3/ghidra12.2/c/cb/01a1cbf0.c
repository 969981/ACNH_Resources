
undefined8 FUN_01a1cbf0(undefined4 *param_1,float *param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined **local_48;
  undefined4 local_40;
  undefined4 local_3c;
  byte local_38;
  undefined7 uStack_37;
  
  local_50 = 0xfffe;
  FUN_0277d4ac(&local_50);
  local_60 = &DAT_048f9750;
  local_58 = 0;
  local_40 = 0;
  local_48 = &PTR_LAB_049ffa38;
  if (DAT_05aed670 == 0) {
    puVar5 = &DAT_055c04a0;
  }
  else {
    puVar5 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar5 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar2 = FUN_006bd550(*puVar5,0);
      puVar5 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar2 != 0x758f7eaf) {
        puVar5 = &DAT_055c04a0;
      }
    }
  }
  local_3c = *(undefined4 *)(puVar5 + 7);
  local_38 = FUN_017baf44();
  local_38 = local_38 & 1;
  puVar5 = (undefined8 *)FUN_01a5190c(&local_48,0,param_3,&local_60);
  lVar1 = DAT_05150358;
  local_50 = *puVar5;
  if (((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
      ((*(long *)(DAT_05150358 + 0x488) != 0 &&
       (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)))) &&
     ((*(long *)(DAT_05150358 + 0x2b0) != 0 && (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)
      ))) {
    uVar3 = FUN_0277d6c4(&local_50);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar1 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar1 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar1 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      FUN_0124c030(&local_48,&local_50);
      if (param_1 != (undefined4 *)0x0) {
        uVar4 = FUN_0123db50(&local_40,CONCAT71(uStack_37,local_38));
        *param_1 = uVar4;
      }
      if (param_2 != (float *)0x0) {
        param_2[1] = 0.0;
        *param_2 = (float)(int)local_58 * 5.0 + 5.0;
        param_2[2] = (float)local_58._4_4_ * 5.0 + 5.0;
      }
      return 1;
    }
  }
  return 0;
}


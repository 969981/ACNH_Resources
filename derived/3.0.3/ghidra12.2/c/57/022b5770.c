
uint FUN_022b5770(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auStack_50 [8];
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  byte local_28;
  
  local_30 = 0;
  lVar3 = *(long *)PTR_DAT_04bb2720;
  if (lVar3 == 0) {
    puVar4 = &DAT_055c04a0;
  }
  else {
    puVar4 = &DAT_055c04a0;
    if (*(long *)(lVar3 + 0x330) != 0) {
      puVar4 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar3 + 0x338));
      iVar1 = FUN_006bd550(*puVar4,0);
      puVar4 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar4 = &DAT_055c04a0;
      }
    }
  }
  local_2c = *(undefined4 *)(puVar4 + 7);
  local_28 = FUN_017baf44();
  local_28 = local_28 & 1;
  local_38 = PTR_DAT_04bb6268 + 0x10;
  local_48 = &DAT_048f9750;
  uStack_40 = 0;
  FUN_01a5033c(auStack_50,&local_38,0,param_1,&local_48);
  lVar3 = DAT_05150358;
  if (((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
      ((*(long *)(DAT_05150358 + 0x488) != 0 &&
       (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)))) &&
     ((*(long *)(DAT_05150358 + 0x2b0) != 0 && (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)
      ))) {
    uVar2 = FUN_0277d6c4(auStack_50);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar3 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      uVar2 = FUN_01242280(auStack_50,0);
      goto LAB_022b58c0;
    }
  }
  uVar2 = 0;
LAB_022b58c0:
  return uVar2 & 1;
}


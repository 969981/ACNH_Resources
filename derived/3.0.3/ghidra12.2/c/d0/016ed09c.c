
undefined8 FUN_016ed09c(float *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *local_68;
  undefined8 local_60;
  undefined *local_58;
  int local_50;
  int iStack_4c;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  byte local_38;
  
  local_68 = PTR_DAT_04bb2010 + 0x10;
  local_48 = PTR_DAT_04bbfe68 + 0x10;
  local_40 = 0;
  local_60 = 0;
  local_50 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
  iStack_4c = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0);
  lVar4 = *(long *)PTR_DAT_04bb2720;
  local_58 = local_68;
  if (lVar4 == 0) {
    puVar5 = &DAT_055c04a0;
  }
  else {
    puVar5 = &DAT_055c04a0;
    if (*(long *)(lVar4 + 0x330) != 0) {
      puVar5 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar4 + 0x338));
      iVar1 = FUN_006bd550(*puVar5,0);
      puVar5 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar5 = &DAT_055c04a0;
      }
    }
  }
  local_3c = *(undefined4 *)(puVar5 + 7);
  local_38 = FUN_017baf44();
  local_38 = local_38 & 1;
  uVar3 = FUN_01a5190c(&local_48,0,&local_58,&local_68);
  lVar4 = *(long *)PTR_DAT_04bbbc68;
  if (((((lVar4 != 0) && (*(long *)(lVar4 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(lVar4 + 0xb0) + 8) != 0)) &&
      ((*(long *)(lVar4 + 0x488) != 0 && (*(long *)(*(long *)(lVar4 + 0x488) + 8) != 0)))) &&
     ((*(long *)(lVar4 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar4 + 0x2b0) + 8) != 0)))) {
    uVar2 = FUN_0277d6c4();
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      FUN_0124c030(&local_48,uVar3);
      iVar1 = FUN_0277ebd0(uVar3);
      local_58 = (undefined *)CONCAT44(local_58._4_4_,iVar1);
      if (iVar1 != 1) {
        if (iVar1 != 2) {
          return 0;
        }
        FUN_016e026c(0,param_1,0,0);
      }
      return 1;
    }
  }
  return 0;
}


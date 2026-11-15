
bool FUN_02496db0(float *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  undefined8 *puVar5;
  undefined *local_58;
  int local_50;
  int iStack_4c;
  undefined8 local_48;
  short local_40;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined4 local_3c;
  undefined *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  byte local_28;
  
  local_30 = 0;
  local_38 = PTR_DAT_04bbfe68 + 0x10;
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
  local_2c = *(undefined4 *)(puVar5 + 7);
  local_28 = FUN_017baf44();
  local_28 = local_28 & 1;
  local_58 = PTR_DAT_04bb2010 + 0x10;
  local_50 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
  iStack_4c = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0);
  psVar4 = (short *)FUN_01a5190c(&local_38,0,&local_58,0);
  lVar1 = DAT_05150358;
  local_3e = (undefined1)psVar4[1];
  local_40 = *psVar4;
  local_3d = *(undefined1 *)((long)psVar4 + 3);
  local_3c = *(undefined4 *)(psVar4 + 2);
  if (((((local_40 != -2) && (DAT_05150358 != 0)) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
      ((*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0 && (*(long *)(DAT_05150358 + 0x488) != 0)
       ))) && ((*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0 &&
               ((*(long *)(DAT_05150358 + 0x2b0) != 0 &&
                (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)))))) {
    uVar3 = FUN_0277d6c4(&local_40);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar1 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar1 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar1 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      FUN_0124c030(&local_58,&local_40);
      iVar2 = FUN_0123db50(&local_50,local_48);
      if (iVar2 == 0x22) {
        return true;
      }
      iVar2 = FUN_0123db50(&local_50,local_48);
      return iVar2 == 0x21;
    }
  }
  return false;
}


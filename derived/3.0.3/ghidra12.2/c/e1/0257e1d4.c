
/* WARNING: Removing unreachable block (ram,0x0257e294) */
/* WARNING: Removing unreachable block (ram,0x0257e2a4) */
/* WARNING: Removing unreachable block (ram,0x0257e2b0) */

bool FUN_0257e1d4(float *param_1)

{
  int iVar1;
  uint uVar2;
  short *psVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *local_50;
  int local_48;
  int iStack_44;
  undefined8 local_40;
  undefined **local_38;
  undefined4 local_30;
  undefined4 local_2c;
  byte local_28;
  
  local_30 = 0;
  lVar4 = *(long *)PTR_DAT_04bb2720;
  if (lVar4 == 0) {
    puVar5 = &DAT_055c04a0;
  }
  else {
    puVar5 = &DAT_055c04a0;
    if (*(long *)(lVar4 + 0x330) != 0) {
      puVar5 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar4 + 0x338));
      iVar1 = FUN_006bd550(*puVar5,0);
      puVar5 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar5 = &DAT_055c04a0;
      }
    }
  }
  local_2c = *(undefined4 *)(puVar5 + 7);
  local_28 = FUN_017baf44();
  local_28 = local_28 & 1;
  local_38 = &PTR_LAB_0492e760;
  if (*(long *)(DAT_0519d040 + 0x1f8) != 0) {
    local_50 = PTR_DAT_04bb2010 + 0x10;
    local_48 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
    iStack_44 = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0);
    psVar3 = (short *)FUN_01a5190c(&local_38,0,&local_50,0);
    lVar4 = DAT_05150358;
    if (((((*psVar3 != -2) && (DAT_05150358 != 0)) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
        ((*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0 &&
         (*(long *)(DAT_05150358 + 0x488) != 0)))) &&
       ((*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0 &&
        ((*(long *)(DAT_05150358 + 0x2b0) != 0 &&
         (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)))))) {
      uVar2 = FUN_0277d6c4();
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
        FUN_0124c030(&local_50,psVar3);
        iVar1 = FUN_0123db50(&local_48,local_40);
        return (iVar1 - 2U & 0xfffffff9) == 0;
      }
    }
  }
  return false;
}



/* WARNING: Removing unreachable block (ram,0x021f542c) */
/* WARNING: Removing unreachable block (ram,0x021f541c) */
/* WARNING: Removing unreachable block (ram,0x021f54ac) */

uint FUN_021f53e0(float *param_1,undefined4 *param_2,undefined4 *param_3)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  short *psVar4;
  ulong uVar5;
  long lVar6;
  ulong local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 uStack_64;
  undefined *local_60;
  undefined8 uStack_58;
  undefined *local_50;
  int local_48;
  int iStack_44;
  
  local_78 = local_78 & 0xffffffff00000000;
  local_60 = PTR_DAT_04bb2010 + 0x10;
  uStack_58 = 0;
  local_48 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
  iStack_44 = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0);
  lVar6 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xd0);
  local_50 = local_60;
  if (lVar6 == 0) {
    psVar4 = &DAT_05586008;
  }
  else {
    lVar1 = lVar6 + 0x130 + (ulong)*(uint *)(lVar6 + 0x198) * 0x30;
    if (1 < *(uint *)(lVar6 + 0x198)) {
      lVar1 = lVar6 + 0x130;
    }
    psVar4 = (short *)FUN_012eb21c(lVar1,&local_50,&local_60);
  }
  puVar2 = PTR_DAT_04bb43c0;
  if (1 < (ushort)(*psVar4 + 3U)) {
    lVar6 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(psVar4);
    if (*(long *)puVar2 != 0) {
      lVar6 = *(long *)(lVar6 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if (((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
          (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
         (uVar5 = FUN_0277e158(psVar4), (uVar5 & 1) == 0)) {
        uStack_68 = 0;
        uStack_64 = 0;
        local_78 = 0;
        local_70 = 0;
        uStack_6c = 0;
        uVar3 = FUN_0151b730(&local_78,param_1);
        if ((uVar3 & 1) != 0) {
          *param_2 = (undefined4)local_78;
          param_2[1] = uStack_6c;
          param_2[2] = local_70;
          *param_3 = uStack_68;
        }
        goto LAB_021f555c;
      }
    }
  }
  uVar3 = 0;
LAB_021f555c:
  return uVar3 & 1;
}


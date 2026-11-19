
void FUN_03a37eb8(long param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  undefined *local_98;
  char *pcStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined *local_50;
  
  uVar2 = (uint)*(byte *)(param_3 + 8);
  if (*(uint *)(*(long *)(param_1 + 0x248) + 8) <= (uint)*(byte *)(param_3 + 8)) {
    uVar2 = 0;
  }
  local_98 = PTR_DAT_04bb2020 + 0x10;
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x248) + 0x10) + (ulong)uVar2 * 0x23c0 + 0x1fa8);
  pcStack_90 = "Model(GBuffer/Opa+AlphaMask)";
  local_88 = *(undefined8 *)(param_3 + 1000);
  uStack_80 = 0x10;
  local_78 = 3;
  local_70 = 0x800041;
  if (((uint)(*(char *)(*(long *)(param_1 + 8) + 0x6f0) != '\0') &
      (*(byte *)(param_3 + 0x3c8) & 0x40) >> 6) == 0) {
    local_70 = 0x41;
  }
  uStack_6c = 0xffff;
  local_50 = PTR_DAT_04bd1830 + 0x10;
  local_60 = 0xffffffff00000000;
  uStack_58 = 0x300000004;
  local_68 = *(undefined4 *)(lVar1 + 0x13f4);
  uStack_64 = *(undefined4 *)(lVar1 + 0x13f8);
  FUN_039eec04(param_3,param_2,&local_98);
  if ((*(char *)(*(long *)(param_1 + 8) + 0x6f0) != '\0') &&
     ((*(byte *)(param_3 + 0x3c8) >> 6 & 1) != 0)) {
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),0x28);
  }
  return;
}


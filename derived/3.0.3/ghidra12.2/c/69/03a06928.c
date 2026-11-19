
void FUN_03a06928(long param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  undefined *local_98;
  char *pcStack_90;
  long local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined **ppuStack_50;
  
  if (*(uint *)(param_1 + 0x108) <= param_3) {
    param_3 = 0;
  }
  lVar3 = *(long *)(param_1 + 0x110) + (long)(int)param_3 * 0x430;
  uVar2 = (uint)*(byte *)(lVar3 + 8);
  if (*(uint *)(*(long *)(param_1 + 0x3420) + 8) <= (uint)*(byte *)(lVar3 + 8)) {
    uVar2 = 0;
  }
  if (((*(uint *)(*(long *)(*(long *)(param_1 + 0x3420) + 0x10) + (ulong)uVar2 * 0x23c0 + 4) >> 0x15
       & 1) != 0) && (uVar1 = FUN_03af9bd0(), (uVar1 & 1) != 0)) {
    local_78 = 0x100000000;
    uStack_70 = 0xffff00000040;
    local_88 = *(long *)(lVar3 + 1000) + 0x40;
    local_98 = PTR_DAT_04bb2020 + 0x10;
    uStack_80 = 0xc;
    pcStack_90 = "Model(ReducedBuffer/Xlu)";
    local_68 = 0x10000000f;
    uStack_60 = 0xffffffff00000000;
    local_58 = 0xffffffff;
    ppuStack_50 = &PTR_LAB_04b6bbc0;
    FUN_039eec04(lVar3,param_2,&local_98);
    FUN_03afa840(*(undefined8 *)(param_1 + 0x3420),param_2,*(undefined1 *)(lVar3 + 8));
  }
  return;
}


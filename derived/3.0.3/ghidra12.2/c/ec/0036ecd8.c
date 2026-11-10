
undefined8 FUN_0036ecd8(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  fVar5 = *(float *)(*(long *)(param_1 + 0x38) + 0x50);
  fVar4 = *(float *)(*(long *)(param_1 + 0x38) + 0x54);
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  iVar2 = (int)fVar5;
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  iVar3 = (int)fVar4;
  if (iVar3 < 2) {
    iVar3 = 1;
  }
  FUN_0034fd48(&local_90);
  uStack_78 = CONCAT44(uStack_78._4_4_,iVar3);
  uStack_88 = CONCAT44(*(undefined4 *)(param_1 + 0x44),(undefined4)uStack_88);
  local_80 = CONCAT44(iVar2,0xa0);
  local_90._0_2_ = CONCAT11(2,(undefined1)local_90);
  local_90 = CONCAT26(1,(undefined6)local_90);
  uVar1 = (**(code **)(**(long **)(param_1 + 0x20) + 0x30))();
  if ((uVar1 & 1) == 0) {
    FUN_0038ba78(*(undefined8 *)(param_1 + 0x20),param_2,param_3,&local_90,param_4);
  }
  iVar2 = (int)(fVar5 * *(float *)(param_1 + 0x28));
  iVar3 = (int)(fVar4 * *(float *)(param_1 + 0x28));
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  if (iVar3 < 2) {
    iVar3 = 1;
  }
  local_80 = CONCAT44(iVar2,(undefined4)local_80);
  uStack_78 = CONCAT44(uStack_78._4_4_,iVar3);
  uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x30))();
  if ((uVar1 & 1) == 0) {
    FUN_0038ba78(*(undefined8 *)(param_1 + 8),param_2,param_3,&local_90,param_4);
  }
  if ((*(int *)(*(long *)(param_1 + 0x20) + 0xd4) == 0) &&
     (*(int *)(*(long *)(param_1 + 8) + 0xd4) == 0)) {
    *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) | 4;
  }
  return 1;
}


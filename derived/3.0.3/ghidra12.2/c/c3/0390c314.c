
void FUN_0390c314(undefined4 *param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,long param_7)

{
  bool bVar1;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (param_7 == 0) {
    param_7 = *(long *)(DAT_05ae92f0 + 8);
  }
  FUN_0390a734(param_1,1,param_4,param_5,param_6,1,1,0,0,1);
  local_48 = *param_2;
  uStack_44 = param_2[1];
  bVar1 = false;
  local_40 = *(undefined8 *)(param_2 + 2);
  uStack_38 = *(undefined8 *)(param_2 + 4);
  *param_1 = local_48;
  param_1[1] = uStack_44;
  *(undefined8 *)(param_1 + 2) = local_40;
  *(undefined8 *)(param_1 + 4) = uStack_38;
  if ((*(byte *)((long)param_1 + 0x4e) >> 1 & 1) != 0) {
    bVar1 = 0x11 < *(ushort *)(param_1 + 0x26) && *(ushort *)(param_1 + 0x26) - 0x59 < 0xffffffd6;
  }
  FUN_038fd3e0(param_1 + 0x14,&local_48,param_1 + 0xc,0,*(undefined8 *)(param_1 + 0x24),bVar1,1);
  FUN_038fae10(*(undefined8 *)PTR_DAT_04bc1010,param_1,param_7);
  return;
}


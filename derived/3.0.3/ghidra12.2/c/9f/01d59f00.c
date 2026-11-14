
void FUN_01d59f00(long param_1)

{
  long *plVar1;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_8;
  undefined2 local_4;
  undefined1 local_2;
  
  *(undefined2 *)(param_1 + 0x960) = 0;
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0x1a;
  *(undefined1 *)(param_1 + 0x22c) = 1;
  *(undefined1 *)(param_1 + 0x224) = 0xff;
  *(undefined4 *)(param_1 + 0x228) = 0xffffffff;
  plVar1 = DAT_0537d558;
  if (*(byte *)(*DAT_0537d558 + 0x473) < 8) {
    *(int *)(param_1 + 0x228) = ~(1 << (ulong)(*(byte *)(*DAT_0537d558 + 0x473) & 0x1f));
  }
  local_30 = 0;
  uStack_28 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0x1a;
  local_a7 = 0xff;
  local_8 = 0;
  local_2 = 0;
  local_4 = 0xff00;
  if (-1 < *(int *)(PTR_DAT_04bc12f0 + 8)) {
    FUN_01db1df0(*plVar1 + 0x480,*(int *)(PTR_DAT_04bc12f0 + 8),&local_8,&local_a8,2,0);
  }
  FUN_01d536f0(param_1,0);
  return;
}



void FUN_006e9528(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_50;
  long lStack_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  
  *(undefined4 *)(param_1 + 2) = 0x100;
  uVar2 = (ulong)*(int *)(param_1 + 2);
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0x113) = 0;
  *param_1 = &PTR_LAB_048fc058;
  param_1[1] = (undefined1 *)((long)param_1 + 0x14);
  local_40 = &local_a0;
  lStack_48 = (long)register0x00000008 + -0x70;
  if (*(int *)(param_1 + 2) != 0) {
    lVar3 = param_1[1];
    uStack_38 = 0xffffff80ffffffd0;
    local_a0 = param_3;
    uStack_98 = param_4;
    local_90 = param_5;
    uStack_88 = param_6;
    local_80 = param_7;
    uStack_78 = param_8;
    local_50 = (undefined1 *)register0x00000008;
    uVar1 = nn::util::VSNPrintf(lVar3,uVar2,param_2,&local_50);
    if (((int)uVar1 < 0) || (uVar2 <= uVar1)) {
      *(undefined1 *)(uVar2 + lVar3 + -1) = 0;
    }
  }
  return;
}


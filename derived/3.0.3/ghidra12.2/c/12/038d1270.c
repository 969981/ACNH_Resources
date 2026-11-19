
uint FUN_038d1270(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
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
  
  local_40 = &local_a0;
  lStack_48 = (long)register0x00000008 + -0x70;
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar3 = (ulong)(int)uVar1;
  if (uVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    lVar4 = *(long *)(param_1 + 8);
    uStack_38 = 0xffffff80ffffffd0;
    local_a0 = param_3;
    uStack_98 = param_4;
    local_90 = param_5;
    uStack_88 = param_6;
    local_80 = param_7;
    uStack_78 = param_8;
    local_50 = (undefined1 *)register0x00000008;
    uVar2 = nn::util::VSNPrintf(lVar4,uVar3,param_2,&local_50);
    if (((int)uVar2 < 0) || (uVar3 <= uVar2)) {
      *(undefined1 *)(uVar3 + lVar4 + -1) = 0;
    }
    if (uVar1 <= uVar2) {
      uVar2 = uVar1 - 1;
    }
    if ((int)uVar2 < 0) {
      uVar2 = uVar1 - 1;
    }
  }
  return uVar2;
}


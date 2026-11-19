
void FUN_038d17d4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
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
  uVar2 = *(int *)((long)param_1 + 0xc) - (int)param_1[1];
  uVar4 = (ulong)(int)uVar2;
  if (uVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    lVar1 = *param_1 + (long)(int)param_1[1];
    uStack_38 = 0xffffff80ffffffd0;
    local_a0 = param_3;
    uStack_98 = param_4;
    local_90 = param_5;
    uStack_88 = param_6;
    local_80 = param_7;
    uStack_78 = param_8;
    local_50 = (undefined1 *)register0x00000008;
    uVar3 = nn::util::VSNPrintf(lVar1,uVar4,param_2,&local_50);
    if (((int)uVar3 < 0) || (uVar4 <= uVar3)) {
      *(undefined1 *)(uVar4 + lVar1 + -1) = 0;
    }
    if (uVar2 <= uVar3) {
      uVar3 = uVar2 - 1;
    }
    if ((int)uVar3 < 0) {
      uVar3 = uVar2 - 1;
    }
  }
  *(uint *)(param_1 + 1) = (int)param_1[1] + uVar3;
  return;
}


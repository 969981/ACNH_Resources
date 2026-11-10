
void FUN_00187bd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined8 *local_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [256];
  
  if ((*(long *)(param_1 + 8) != 0) &&
     (((local_1b0 = param_3, uStack_1a8 = param_4, local_1a0 = param_5, uStack_198 = param_6,
       local_190 = param_7, uStack_188 = param_8, *(long **)(param_1 + 0x18) == (long *)0x0 ||
       (uVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(), (uVar1 & 1) != 0)) &&
      (*(long *)(param_1 + 0x10) != 0)))) {
    memset(auStack_120,0,0x100);
    uStack_128 = 0xffffff80ffffffd0;
    local_140 = (undefined1 *)register0x00000008;
    puStack_138 = auStack_120 + -0x60;
    local_130 = &local_1b0;
    (**(code **)(**(long **)(param_1 + 0x10) + 0x38))
              (*(long **)(param_1 + 0x10),auStack_120,0xff,0,0,param_2,&local_140);
    (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),auStack_120);
  }
  return;
}


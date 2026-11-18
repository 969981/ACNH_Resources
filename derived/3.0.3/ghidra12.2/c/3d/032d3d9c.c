
/* WARNING: Removing unreachable block (ram,0x032d3dfc) */

void FUN_032d3d9c(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  FUN_0037d014(uVar2,param_2,param_1);
  FUN_0037d044(uVar2,param_2);
  FUN_0037cfe0(param_1,param_2);
  if (param_3 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_00367b14(0xe0,0x10);
    FUN_0037bb94();
    *puVar1 = &DAT_04b1b988;
  }
  else {
    puVar1 = (undefined8 *)(**(code **)(*(long *)*param_3 + 0x30))((long *)*param_3,0xe0,0x10);
    FUN_0037bb94();
    *puVar1 = &DAT_04b1b988;
    *(byte *)(puVar1 + 0xb) = *(byte *)(puVar1 + 0xb) | 8;
  }
  *(undefined8 **)(param_1 + 0xd8) = puVar1;
  FUN_0037cfe0(param_1,puVar1);
  *(undefined4 *)(param_1 + 0x100) = 0;
  return;
}


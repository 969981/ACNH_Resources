
/* WARNING: Removing unreachable block (ram,0x032d3ce0) */

undefined8 * FUN_032d3cb0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_00367b14(0x110,0x10);
    FUN_0037bb94();
    puVar1[0x1b] = 0;
    *(undefined1 *)(puVar1 + 0x1c) = 0;
    *puVar1 = &PTR_FUN_04b1b898;
    puVar1[0x1f] = 0;
    *(undefined4 *)(puVar1 + 0x20) = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
  }
  else {
    puVar1 = (undefined8 *)(**(code **)(*(long *)*param_2 + 0x30))((long *)*param_2,0x110,0x10);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_0037bb94(puVar1);
      puVar1[0x1b] = 0;
      *(undefined1 *)(puVar1 + 0x1c) = 0;
      *puVar1 = &PTR_FUN_04b1b898;
      puVar1[0x1f] = 0;
      *(undefined4 *)(puVar1 + 0x20) = 0;
      puVar1[0x1d] = 0;
      puVar1[0x1e] = 0;
    }
    *(byte *)(puVar1 + 0xb) = *(byte *)(puVar1 + 0xb) | 8;
  }
  FUN_0037c2a0(puVar1,"ScissorPane");
  FUN_032d3d9c(puVar1,param_1,param_2);
  return puVar1;
}


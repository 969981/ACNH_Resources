
void FUN_0043ce50(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*(long *)PTR_DAT_048607b8 + 0x10))(PTR_DAT_048607b8,0x100,0);
  *param_1 = (long)puVar1;
  param_1[1] = 0xf00000000;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0xffffffffffffffff;
    *(undefined8 *)(*param_1 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(*param_1 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(*param_1 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(*param_1 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(*param_1 + 0x50) = 0xffffffffffffffff;
    *(undefined8 *)(*param_1 + 0x60) = 0xffffffffffffffff;
    *(undefined8 *)(*param_1 + 0x70) = 0xffffffffffffffff;
    *(undefined8 *)(*param_1 + 0x80) = 0xffffffffffffffff;
    *(undefined8 *)(*param_1 + 0x90) = 0xffffffffffffffff;
    *(undefined8 *)(*param_1 + 0xa0) = 0xffffffffffffffff;
    *(undefined8 *)(*param_1 + 0xb0) = 0xffffffffffffffff;
    *(undefined8 *)(*param_1 + 0xc0) = 0xffffffffffffffff;
    *(undefined8 *)(*param_1 + 0xd0) = 0xffffffffffffffff;
    *(undefined8 *)(*param_1 + 0xe0) = 0xffffffffffffffff;
    *(undefined8 *)(*param_1 + 0xf0) = 0xffffffffffffffff;
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0x80000000;
  }
  return;
}


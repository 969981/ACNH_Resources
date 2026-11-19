
void FUN_03bf0a10(undefined2 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  puVar1 = PTR_DAT_04bd18d0 + 0x10;
  puVar2 = PTR_DAT_04bb21f8 + 0x10;
  puVar3 = (undefined8 *)(param_1 + 4);
  *param_1 = 1;
  do {
    *(undefined4 *)(puVar3 + 3) = 0x180;
    *(undefined1 *)((long)puVar3 + 0x19b) = 0;
    *(undefined1 *)((long)puVar3 + 0x1c) = 0;
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 0x36) = 0x100;
    *(undefined1 *)((long)puVar3 + 0x2b3) = 0;
    *(undefined4 *)(puVar3 + 0x57) = 0;
    puVar3[0x35] = (undefined4 *)((long)puVar3 + 0x1b4);
    *(undefined1 *)((long)puVar3 + 0x1b4) = 0;
    puVar3[0x34] = puVar2;
    puVar3[1] = puVar1;
    puVar3[2] = (undefined4 *)((long)puVar3 + 0x1c);
    puVar3 = puVar3 + 0x58;
  } while (puVar3 != (undefined8 *)(param_1 + 0x2c04));
  *(undefined8 *)(param_1 + 0x2c08) = 0;
  *(undefined8 *)(param_1 + 0x2c0c) = param_2;
  *(undefined4 *)(param_1 + 0x2c04) = 0;
  *(undefined4 *)(param_1 + 0x2c64) = 0;
  FUN_038e18e4(param_1 + 0x2c68);
  *(undefined8 *)(param_1 + 0x2c60) = 0x200000002;
  *(undefined8 *)(param_1 + 0x2c18) = 0x200000002;
  *(undefined8 *)(param_1 + 0x2c1c) = 0x200000002;
  *(undefined8 *)(param_1 + 0x2c10) = 0x200000001;
  *(undefined8 *)(param_1 + 0x2c14) = 0x200000002;
  *(undefined8 *)(param_1 + 0x2c20) = 0x200000002;
  *(undefined8 *)(param_1 + 0x2c24) = 0x200000002;
  *(undefined8 *)(param_1 + 0x2c28) = 0x200000002;
  *(undefined8 *)(param_1 + 0x2c2c) = 0x200000002;
  *(undefined8 *)(param_1 + 0x2c30) = 0x200000002;
  *(undefined8 *)(param_1 + 0x2c34) = 0x200000002;
  *(undefined8 *)(param_1 + 0x2c38) = 0x200000002;
  *(undefined8 *)(param_1 + 0x2c3c) = 0x200000002;
  *(undefined8 *)(param_1 + 0x2c40) = 0x200000002;
  *(undefined8 *)(param_1 + 0x2c44) = 0x200000002;
  *(undefined8 *)(param_1 + 0x2c48) = 0x200000002;
  *(undefined8 *)(param_1 + 0x2c4c) = 0x200000002;
  *(undefined8 *)(param_1 + 0x2c50) = 0x200000002;
  *(undefined8 *)(param_1 + 0x2c54) = 0x200000002;
  *(undefined8 *)(param_1 + 0x2c58) = 0x200000002;
  *(undefined8 *)(param_1 + 0x2c5c) = 0x200000002;
  return;
}


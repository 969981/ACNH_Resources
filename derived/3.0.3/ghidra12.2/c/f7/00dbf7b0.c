
undefined8 * FUN_00dbf7b0(int *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*param_1 < param_1[1]) {
    puVar2 = *(undefined8 **)(param_1 + 4);
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 4) = *puVar2;
    }
    *puVar2 = *param_2;
    *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(param_2 + 1);
    *(undefined1 *)((long)puVar2 + 10) = *(undefined1 *)((long)param_2 + 10);
    *(undefined1 *)((long)puVar2 + 0xb) = *(undefined1 *)((long)param_2 + 0xb);
    *(undefined4 *)((long)puVar2 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
    uVar3 = param_2[2];
    uVar1 = param_2[3];
    uVar4 = param_2[4];
    *(undefined2 *)(puVar2 + 5) = *(undefined2 *)(param_2 + 5);
    puVar2[3] = uVar1;
    puVar2[4] = uVar4;
    puVar2[2] = uVar3;
    *(undefined2 *)((long)puVar2 + 0x2c) = *(undefined2 *)((long)param_2 + 0x2c);
    *(undefined1 *)((long)puVar2 + 0x2e) = *(undefined1 *)((long)param_2 + 0x2e);
    *(undefined1 *)((long)puVar2 + 0x2f) = *(undefined1 *)((long)param_2 + 0x2f);
    *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_2 + 6);
    uVar3 = *(undefined8 *)((long)param_2 + 0x34);
    *(undefined8 *)((long)puVar2 + 0x3a) = *(undefined8 *)((long)param_2 + 0x3a);
    *(undefined8 *)((long)puVar2 + 0x34) = uVar3;
    *(undefined2 *)((long)puVar2 + 0x44) = *(undefined2 *)((long)param_2 + 0x44);
    *(undefined1 *)((long)puVar2 + 0x46) = *(undefined1 *)((long)param_2 + 0x46);
    *(undefined1 *)((long)puVar2 + 0x47) = *(undefined1 *)((long)param_2 + 0x47);
    *(undefined4 *)(puVar2 + 9) = *(undefined4 *)(param_2 + 9);
    uVar3 = *(undefined8 *)((long)param_2 + 0x4c);
    *(undefined8 *)((long)puVar2 + 0x52) = *(undefined8 *)((long)param_2 + 0x52);
    *(undefined8 *)((long)puVar2 + 0x4c) = uVar3;
    *(undefined2 *)((long)puVar2 + 0x5c) = *(undefined2 *)((long)param_2 + 0x5c);
    *(undefined1 *)((long)puVar2 + 0x5e) = *(undefined1 *)((long)param_2 + 0x5e);
    *(undefined1 *)((long)puVar2 + 0x5f) = *(undefined1 *)((long)param_2 + 0x5f);
    *(undefined4 *)(puVar2 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    uVar3 = *(undefined8 *)((long)param_2 + 100);
    *(undefined8 *)((long)puVar2 + 0x6a) = *(undefined8 *)((long)param_2 + 0x6a);
    *(undefined8 *)((long)puVar2 + 100) = uVar3;
    *(undefined2 *)((long)puVar2 + 0x74) = *(undefined2 *)((long)param_2 + 0x74);
    *(undefined1 *)((long)puVar2 + 0x76) = *(undefined1 *)((long)param_2 + 0x76);
    *(undefined1 *)((long)puVar2 + 0x77) = *(undefined1 *)((long)param_2 + 0x77);
    *(undefined4 *)(puVar2 + 0xf) = *(undefined4 *)(param_2 + 0xf);
    uVar3 = *(undefined8 *)((long)param_2 + 0x7c);
    *(undefined8 *)((long)puVar2 + 0x82) = *(undefined8 *)((long)param_2 + 0x82);
    *(undefined8 *)((long)puVar2 + 0x7c) = uVar3;
    *(undefined2 *)((long)puVar2 + 0x8c) = *(undefined2 *)((long)param_2 + 0x8c);
    *(undefined1 *)((long)puVar2 + 0x8e) = *(undefined1 *)((long)param_2 + 0x8e);
    *(undefined1 *)((long)puVar2 + 0x8f) = *(undefined1 *)((long)param_2 + 0x8f);
    *(undefined4 *)(puVar2 + 0x12) = *(undefined4 *)(param_2 + 0x12);
    uVar3 = *(undefined8 *)((long)param_2 + 0x94);
    *(undefined8 *)((long)puVar2 + 0x9a) = *(undefined8 *)((long)param_2 + 0x9a);
    *(undefined8 *)((long)puVar2 + 0x94) = uVar3;
    *(undefined2 *)((long)puVar2 + 0xa4) = *(undefined2 *)((long)param_2 + 0xa4);
    *(undefined1 *)((long)puVar2 + 0xa6) = *(undefined1 *)((long)param_2 + 0xa6);
    *(undefined1 *)((long)puVar2 + 0xa7) = *(undefined1 *)((long)param_2 + 0xa7);
    *(undefined4 *)(puVar2 + 0x15) = *(undefined4 *)(param_2 + 0x15);
    uVar3 = *(undefined8 *)((long)param_2 + 0xac);
    *(undefined8 *)((long)puVar2 + 0xb2) = *(undefined8 *)((long)param_2 + 0xb2);
    *(undefined8 *)((long)puVar2 + 0xac) = uVar3;
    uVar3 = *(undefined8 *)((long)param_2 + 0xbc);
    *(undefined8 *)((long)puVar2 + 0xc4) = *(undefined8 *)((long)param_2 + 0xc4);
    *(undefined8 *)((long)puVar2 + 0xbc) = uVar3;
    if (*param_1 < param_1[1]) {
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar2;
      *param_1 = *param_1 + 1;
      return puVar2;
    }
  }
  else {
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}


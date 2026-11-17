
bool FUN_02a0bc08(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  cVar4 = *(char *)(param_1 + 0x239);
  if (cVar4 != '\0') {
    *(long *)(param_1 + 0x1d8) = param_2[1];
    lVar5 = param_2[2];
    *(undefined2 *)(param_1 + 0xc) = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
    *(undefined2 *)(param_1 + 0x14) = 0;
    *(undefined1 *)(param_1 + 0x16) = 1;
    *(undefined2 *)(param_1 + 0x1c) = 0;
    *(undefined1 *)(param_1 + 0x1e) = 1;
    *(undefined2 *)(param_1 + 0x24) = 0;
    *(undefined1 *)(param_1 + 0x26) = 1;
    *(undefined2 *)(param_1 + 0x2c) = 0;
    *(undefined1 *)(param_1 + 0x2e) = 1;
    *(undefined2 *)(param_1 + 0x34) = 0;
    *(undefined1 *)(param_1 + 0x36) = 1;
    *(undefined2 *)(param_1 + 0x3c) = 0;
    *(undefined1 *)(param_1 + 0x3e) = 1;
    *(undefined2 *)(param_1 + 0x44) = 0;
    *(undefined1 *)(param_1 + 0x46) = 1;
    *(undefined2 *)(param_1 + 0x4c) = 0;
    *(undefined1 *)(param_1 + 0x4e) = 1;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined1 *)(param_1 + 0x56) = 1;
    *(undefined2 *)(param_1 + 0x5c) = 0;
    *(undefined1 *)(param_1 + 0x5e) = 1;
    *(undefined2 *)(param_1 + 100) = 0;
    *(long *)(param_1 + 0x1e0) = lVar5;
    *(undefined1 *)(param_1 + 0x66) = 1;
    *(undefined4 *)(param_1 + 8) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0xf;
    *(undefined4 *)(param_1 + 0x18) = 0xf;
    *(undefined4 *)(param_1 + 0x20) = 0xf;
    *(undefined4 *)(param_1 + 0x28) = 0xf;
    *(undefined4 *)(param_1 + 0x30) = 0xf;
    *(undefined4 *)(param_1 + 0x38) = 0xf;
    *(undefined4 *)(param_1 + 0x40) = 0xf;
    *(undefined4 *)(param_1 + 0x48) = 0xf;
    *(undefined4 *)(param_1 + 0x50) = 0xf;
    *(undefined4 *)(param_1 + 0x58) = 0xf;
    *(undefined4 *)(param_1 + 0x60) = 0xf;
    *(undefined4 *)(param_1 + 0x68) = 0xf;
    *(undefined2 *)(param_1 + 0x6c) = 0;
    *(undefined1 *)(param_1 + 0x6e) = 1;
    *(undefined4 *)(param_1 + 0x70) = 0xf;
    *(undefined2 *)(param_1 + 0x74) = 0;
    *(undefined1 *)(param_1 + 0x76) = 1;
    *(undefined4 *)(param_1 + 0x78) = 0xf;
    *(undefined2 *)(param_1 + 0x7c) = 0;
    *(undefined1 *)(param_1 + 0x7e) = 1;
    *(undefined4 *)(param_1 + 0x80) = 0xf;
    *(undefined2 *)(param_1 + 0x84) = 0;
    *(undefined1 *)(param_1 + 0x86) = 1;
    puVar6 = (undefined8 *)*param_2;
    *(undefined8 *)(param_1 + 0x1e8) = *puVar6;
    uVar1 = puVar6[1];
    uVar2 = puVar6[2];
    uVar7 = puVar6[3];
    *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(puVar6 + 4);
    *(undefined8 *)(param_1 + 0x1f0) = uVar1;
    *(undefined8 *)(param_1 + 0x1f8) = uVar2;
    *(undefined8 *)(param_1 + 0x200) = uVar7;
    *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)((long)puVar6 + 0x24);
    *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(puVar6 + 5);
    uVar3 = *(undefined4 *)((long)puVar6 + 0x2c);
    *(undefined1 *)(param_1 + 0x218) = *(undefined1 *)(puVar6 + 6);
    *(undefined4 *)(param_1 + 0x214) = uVar3;
    if ((undefined8 *)param_2[3] == (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x220) = 0;
      *(undefined8 *)(param_1 + 0x228) = 0xffffffffffffffff;
    }
    else {
      *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)param_2[3];
      *(long *)(param_1 + 0x220) = param_1 + 0x228;
    }
    FUN_02a0ac90(param_1,*param_2,param_2[3]);
  }
  return cVar4 != '\0';
}


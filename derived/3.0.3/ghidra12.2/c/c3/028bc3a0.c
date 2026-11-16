
undefined8 FUN_028bc3a0(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = DAT_05ae7790;
  puVar1 = DAT_055b1af8;
  if (((DAT_055b1af8 == (undefined8 *)0x0) || (*(int *)(DAT_055b1af8 + 0xb) != 0)) ||
     ((DAT_05ae7790 != 0 &&
      (lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68)),
      *(long *)(lVar2 + 0x60) != lVar4)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    *puVar1 = 0;
    *(undefined4 *)((long)puVar1 + 0x4c) = 0;
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined4 *)((long)puVar1 + 0xc) = 0;
    *(undefined2 *)(puVar1 + 3) = 0;
    *(undefined4 *)((long)puVar1 + 0x14) = 0;
    *(undefined2 *)(puVar1 + 4) = 0;
    *(undefined4 *)((long)puVar1 + 0x1c) = 0;
    *(undefined2 *)(puVar1 + 5) = 0;
    *(undefined4 *)((long)puVar1 + 0x24) = 0;
    *(undefined2 *)(puVar1 + 6) = 0;
    *(undefined4 *)((long)puVar1 + 0x2c) = 0;
    *(undefined2 *)(puVar1 + 7) = 0;
    *(undefined4 *)((long)puVar1 + 0x34) = 0;
    *(undefined2 *)(puVar1 + 8) = 0;
    *(undefined4 *)((long)puVar1 + 0x3c) = 0;
    *(undefined2 *)(puVar1 + 9) = 0;
    *(undefined4 *)((long)puVar1 + 0x44) = 0;
    *(undefined1 *)((long)puVar1 + 0x10c) = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x20] = 0;
  }
  return uVar3;
}


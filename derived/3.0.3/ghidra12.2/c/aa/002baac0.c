
void FUN_002baac0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    puVar1 = (undefined8 *)(param_1 + lVar2);
    lVar2 = lVar2 + 0x20;
    puVar1[2] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    *(undefined1 *)((long)puVar1 + 0x1c) = 0;
  } while (lVar2 != 0x400);
  *(undefined4 *)(param_1 + 0x400) = 0;
  return;
}


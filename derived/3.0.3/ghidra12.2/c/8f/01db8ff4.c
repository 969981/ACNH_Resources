
undefined2 * FUN_01db8ff4(long *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  
  iVar1 = (int)param_1[2];
  iVar3 = (int)param_1[1];
  if (iVar1 < iVar3) {
    *(int *)(param_1 + 2) = iVar1 + 1;
    iVar1 = *(int *)((long)param_1 + 0xc) + iVar1;
    iVar2 = 0;
    if (iVar3 <= iVar1) {
      iVar2 = iVar3;
    }
    puVar4 = (undefined2 *)(*param_1 + (long)(iVar1 - iVar2) * 0x3c8);
    *puVar4 = 0;
    *(undefined1 *)(puVar4 + 0x2e) = 0;
    *(undefined1 *)(puVar4 + 0x5c) = 0;
    *(undefined8 *)(puVar4 + 0x5e) = 0xfffe00000000;
    *(undefined4 *)(puVar4 + 0x62) = 0;
    FUN_0277d4ac(puVar4 + 0x60);
    *(undefined1 *)(puVar4 + 100) = 0;
    *(undefined1 *)(puVar4 + 0x66) = 0;
    memset(puVar4 + 0x67,0,0x2a2);
    puVar4[0x1b8] = 0xfffe;
    *(undefined8 *)(puVar4 + 0x1ba) = 0;
    *(undefined8 *)(puVar4 + 0x1be) = 0;
    *(undefined8 *)(puVar4 + 0x1c2) = 0;
    *(undefined8 *)(puVar4 + 0x1c6) = 0;
    *(undefined8 *)(puVar4 + 0x1ca) = 0;
    *(undefined8 *)(puVar4 + 0x1ce) = 0;
    *(undefined8 *)(puVar4 + 0x1d2) = 0;
    *(undefined8 *)(puVar4 + 0x1d6) = 0;
  }
  else {
    puVar4 = (undefined2 *)0x0;
  }
  return puVar4;
}


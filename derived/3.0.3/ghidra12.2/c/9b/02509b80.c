
void FUN_02509b80(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  uint *puVar3;
  long lVar4;
  undefined4 *puVar5;
  
  lVar4 = 0;
  puVar5 = param_1;
  do {
    *puVar5 = (int)lVar4;
    puVar5[2] = 0;
    puVar5[5] = 0xffffffff;
    FUN_0257a320(puVar5 + 6);
    puVar5[0x13c] = 0;
    *(undefined8 *)(puVar5 + 0x132) = 0;
    *(undefined8 *)(puVar5 + 0x134) = 0;
    *(undefined2 *)(puVar5 + 0x136) = 0;
    FUN_0250d580(puVar5 + 0x13e);
    puVar5[0x4f4] = 3;
    *(undefined8 *)(puVar5 + 0x137) = 0;
    *(undefined2 *)(puVar5 + 0x4f5) = 0;
    *(undefined1 *)((long)puVar5 + 0x13d6) = 1;
    *(undefined8 *)(puVar5 + 0x4f6) = 0xffffffff;
    puVar5[0x4f8] = 0;
    puVar5[5] = 0xffffffff;
    puVar5[0x27e2] = (int)lVar4;
    puVar5[0x27e4] = 0;
    puVar5[0x27e7] = 0xffffffff;
    FUN_0257a320(puVar5 + 0x27e8);
    puVar5[0x291e] = 0;
    *(undefined8 *)(puVar5 + 0x2914) = 0;
    *(undefined8 *)(puVar5 + 0x2916) = 0;
    *(undefined2 *)(puVar5 + 0x2918) = 0;
    FUN_0250d580(puVar5 + 0x2920);
    lVar4 = lVar4 + 1;
    *(undefined8 *)(puVar5 + 0x2919) = 0;
    puVar5[0x2cd6] = 3;
    *(undefined2 *)(puVar5 + 0x2cd7) = 0;
    *(undefined1 *)((long)puVar5 + 0xb35e) = 1;
    *(undefined8 *)(puVar5 + 0x2cd8) = 0xffffffff;
    puVar5[0x2cda] = 0;
    puVar5[0x27e7] = 0xffffffff;
    puVar5 = puVar5 + 0x4fc;
  } while (lVar4 != 8);
  param_1[0x27e0] = 0;
  puVar1 = PTR_DAT_04bb4718;
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f08c8 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_054f08c8);
      puVar3 = &DAT_054f08c0;
      if (iVar2 != 0) {
        DAT_054f08c0 = 0;
        __cxa_guard_release(&DAT_054f08c8);
      }
    }
    else {
      puVar3 = &DAT_054f08c0;
    }
  }
  else {
    puVar3 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x1fc);
  }
  *puVar3 = *puVar3 & 0xfffffffe;
  if (*(long *)puVar1 == 0) {
    if ((DAT_054f08c8 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_054f08c8);
      puVar3 = &DAT_054f08c0;
      if (iVar2 != 0) {
        DAT_054f08c0 = 0;
        __cxa_guard_release(&DAT_054f08c8);
      }
    }
    else {
      puVar3 = &DAT_054f08c0;
    }
  }
  else {
    puVar3 = (uint *)(*(long *)puVar1 + 0x1fc);
  }
  *puVar3 = *puVar3 & 0xfffffffd;
  return;
}


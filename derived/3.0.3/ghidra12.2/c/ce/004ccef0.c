
void * FUN_004ccef0(long param_1)

{
  byte bVar1;
  void *__dest;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  byte local_48 [4];
  byte local_44 [4];
  
  local_48[0] = 0xff;
  plVar3 = *(long **)(param_1 + 8);
  if (*plVar3 < plVar3[1]) {
    memcpy(local_48,(void *)*plVar3,1);
    *plVar3 = *plVar3 + 1;
    bVar1 = local_48[0];
  }
  else {
    FUN_0049e700(plVar3,local_48,1);
    bVar1 = local_48[0];
  }
  uVar4 = (ulong)(bVar1 >> 1) & 0x3f;
  local_48[0] = bVar1;
  if ((char)bVar1 < '\0') {
    uVar5 = 6;
    do {
      local_44[0] = 0xff;
      plVar3 = *(long **)(param_1 + 8);
      if (*plVar3 < plVar3[1]) {
        memcpy(local_44,(void *)*plVar3,1);
        *plVar3 = *plVar3 + 1;
      }
      else {
        FUN_0049e700(plVar3,local_44,1);
      }
      uVar4 = ((ulong)local_44[0] & 0x7f) << (uVar5 & 0x3f) | uVar4;
      uVar5 = (ulong)((int)uVar5 + 7);
    } while ((char)local_44[0] < '\0');
  }
  uVar5 = -uVar4;
  if ((bVar1 & 1) == 0) {
    uVar5 = uVar4;
  }
  if ((int)uVar5 < 1) {
    __dest = *(void **)(*(long *)(param_1 + 0x40) + ((long)-(uVar5 << 0x20) >> 0x1d));
  }
  else {
    __dest = (void *)(**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                               (*(long **)(param_1 + 0x68),
                                (long)((uVar5 << 0x20) + 0x100000000) >> 0x20,0);
    plVar3 = *(long **)(param_1 + 8);
    uVar4 = uVar5 & 0xffffffff;
    if (plVar3[1] - *plVar3 < (long)uVar4) {
      FUN_0049e700(plVar3,__dest,uVar4);
    }
    else {
      memcpy(__dest,(void *)*plVar3,uVar4);
      *plVar3 = *plVar3 + uVar4;
    }
    *(undefined1 *)((long)__dest + ((long)(uVar5 << 0x20) >> 0x20)) = 0;
    uVar2 = *(uint *)(param_1 + 0x48);
    if (uVar2 == (*(uint *)(param_1 + 0x4c) & 0x3fffffff)) {
      FUN_00426990(PTR_DAT_048607b8,param_1 + 0x40,8);
      uVar2 = *(uint *)(param_1 + 0x48);
    }
    *(void **)(*(long *)(param_1 + 0x40) + (long)(int)uVar2 * 8) = __dest;
    *(uint *)(param_1 + 0x48) = uVar2 + 1;
  }
  return __dest;
}


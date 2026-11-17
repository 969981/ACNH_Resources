
void FUN_02c63390(undefined8 *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  void *__dest;
  void *__src;
  ulong __n;
  
  *param_1 = &PTR_LAB_04ab2898;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  FUN_02c62ed0((long)param_1 + 0x1c);
  *(undefined2 *)((long)param_1 + 0x2ec) = 0;
  *(undefined2 *)((long)param_1 + 0x28c) = 0;
  param_1[0x50] = (undefined2 *)((long)param_1 + 0x28c);
  *(undefined4 *)(param_1 + 0x51) = 0x31;
  param_1[0x4f] = &PTR_LAB_04940d48;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)((long)param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)((long)param_1 + 0xc) = uVar3;
  FUN_02c634f4((long)param_1 + 0x1c,param_2 + 0x1c);
  __dest = (void *)param_1[0x50];
  *(undefined2 *)((long)param_1 + 0x274) = *(undefined2 *)(param_2 + 0x274);
  (**(code **)(*(long *)(param_2 + 0x278) + 0x18))(param_2 + 0x278);
  __src = *(void **)(param_2 + 0x280);
  if (__dest != __src) {
    (**(code **)(*(long *)(param_2 + 0x278) + 0x18))(param_2 + 0x278);
    lVar4 = 0;
    do {
      if (*(short *)(*(long *)(param_2 + 0x280) + lVar4 * 2) == 0) goto LAB_02c634a0;
      lVar1 = *(long *)(param_2 + 0x280) + lVar4 * 2;
      if (*(short *)(lVar1 + 2) == 0) {
        lVar4 = lVar4 + 1;
        goto LAB_02c634a0;
      }
      if (*(short *)(lVar1 + 4) == 0) {
        lVar4 = lVar4 + 2;
        goto LAB_02c634a0;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_02c634a0:
    uVar2 = (uint)lVar4;
    if (*(int *)(param_1 + 0x51) <= (int)(uint)lVar4) {
      uVar2 = *(int *)(param_1 + 0x51) - 1;
    }
    __n = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
    memcpy(__dest,__src,__n);
    *(undefined2 *)((long)__dest + __n) = 0;
  }
  *(undefined4 *)(param_1 + 0x5e) = *(undefined4 *)(param_2 + 0x2f0);
  *(undefined4 *)((long)param_1 + 0x2f4) = *(undefined4 *)(param_2 + 0x2f4);
  *(undefined1 *)(param_1 + 0x5f) = *(undefined1 *)(param_2 + 0x2f8);
  return;
}


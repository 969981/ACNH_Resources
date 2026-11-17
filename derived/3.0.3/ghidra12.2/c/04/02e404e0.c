
void FUN_02e404e0(long param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  void *__dest;
  void *__src;
  ulong uVar6;
  long *plVar7;
  byte local_28 [4];
  undefined4 local_24;
  
  __dest = *(void **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x88) = *param_2;
  plVar7 = param_2 + 1;
  (**(code **)(*plVar7 + 0x18))(plVar7);
  __src = (void *)param_2[2];
  if (__dest != __src) {
    (**(code **)(param_2[1] + 0x18))(plVar7);
    lVar5 = 0;
    do {
      if (*(short *)(param_2[2] + lVar5 * 2) == 0) goto LAB_02e4058c;
      lVar1 = param_2[2] + lVar5 * 2;
      if (*(short *)(lVar1 + 2) == 0) {
        lVar5 = lVar5 + 1;
        goto LAB_02e4058c;
      }
      if (*(short *)(lVar1 + 4) == 0) {
        lVar5 = lVar5 + 2;
        goto LAB_02e4058c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_02e4058c:
    uVar2 = (uint)lVar5;
    if (*(int *)(param_1 + 0xa0) <= (int)(uint)lVar5) {
      uVar2 = *(int *)(param_1 + 0xa0) - 1;
    }
    uVar6 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
    memcpy(__dest,__src,uVar6);
    *(undefined2 *)((long)__dest + uVar6) = 0;
  }
  local_28[0] = *(byte *)(param_1 + 0x50);
  if (7 < local_28[0]) {
    local_28[0] = 0xff;
  }
  uVar6 = FUN_02658470(local_28);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (DAT_04c487d4 != -1) {
    local_24 = 0x20;
    puVar3 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar3 = PTR_DAT_04bc39f8;
    }
    if (((*(uint *)(puVar3 + 4) & 1) != 0) &&
       (uVar6 = nn::pctl::IsFreeCommunicationAvailable(), (uVar6 & 1) == 0)) {
      uVar4 = 7;
      goto LAB_02e40650;
    }
  }
  uVar4 = 7;
  if ((*(char *)(*(long *)PTR_DAT_04bb21d0 + 0xf78) != '\0') &&
     (uVar4 = 7, *(int *)(*(long *)PTR_DAT_04bb21d0 + 0xc4) == 0)) {
    uVar4 = 8;
  }
LAB_02e40650:
  FUN_03ebb160(param_1 + 8,uVar4);
  return;
}


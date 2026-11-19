
void FUN_039721c0(long param_1,long param_2,uint *param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  ushort uVar7;
  undefined8 uVar8;
  void *__dest;
  void *__src;
  uint *puVar9;
  
  *(long *)(param_2 + 0x20) = param_1;
  __dest = *(void **)(param_2 + 0xe8);
  puVar9 = param_3 + 2;
  (**(code **)(*(long *)puVar9 + 0x18))(puVar9);
  __src = *(void **)(param_3 + 4);
  if (__dest != __src) {
    (**(code **)(*(long *)(param_3 + 2) + 0x18))(puVar9);
    lVar6 = 0;
    do {
      if (*(char *)(*(long *)(param_3 + 4) + lVar6) == '\0') goto LAB_0397226c;
      lVar1 = *(long *)(param_3 + 4) + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_0397226c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_0397226c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_0397226c:
    iVar2 = (int)lVar6;
    if (*(int *)(param_2 + 0xf0) <= (int)lVar6) {
      iVar2 = *(int *)(param_2 + 0xf0) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  uVar5 = *(ushort *)(param_2 + 0x88) | 0x40;
  *(uint *)(param_2 + 0x94) = *param_3;
  *(short *)(param_2 + 0x88) = (short)uVar5;
  uVar3 = param_3[6];
  if (uVar3 != (int)*(char *)(param_2 + 0x90)) {
    nn::os::LockMutex((MutexType *)(*(long *)(param_2 + 0x20) + 0x4f8));
    *(char *)(param_2 + 0x90) = (char)uVar3;
    *(ushort *)(param_2 + 0x88) = *(ushort *)(param_2 + 0x88) | 0x20;
    nn::os::UnlockMutex((MutexType *)(*(long *)(param_2 + 0x20) + 0x4f8));
    uVar5 = (uint)*(ushort *)(param_2 + 0x88);
  }
  uVar3 = param_3[7];
  if ((uint)((char)uVar3 != '\0') != (uVar5 & 2) >> 1) {
    nn::os::LockMutex((MutexType *)(*(long *)(param_2 + 0x20) + 0x4f8));
    uVar7 = 0x22;
    if ((char)uVar3 == '\0') {
      uVar7 = 0x20;
    }
    *(ushort *)(param_2 + 0x88) = *(ushort *)(param_2 + 0x88) & 0xfffd | uVar7;
    nn::os::UnlockMutex((MutexType *)(*(long *)(param_2 + 0x20) + 0x4f8));
    uVar5 = (uint)*(ushort *)(param_2 + 0x88);
  }
  bVar4 = *(byte *)((long)param_3 + 0x1d);
  if ((uint)(bVar4 != 0) != (uVar5 & 1)) {
    nn::os::LockMutex((MutexType *)(*(long *)(param_2 + 0x20) + 0x4f8));
    *(ushort *)(param_2 + 0x88) = *(ushort *)(param_2 + 0x88) & 0xfffe | (ushort)bVar4;
    nn::os::UnlockMutex((MutexType *)(*(long *)(param_2 + 0x20) + 0x4f8));
  }
  FUN_03969170(param_2,param_4);
  uVar3 = param_3[6];
  if ((int)uVar3 < (int)*(uint *)(param_1 + 0x10)) {
    if (*(uint *)(param_1 + 0x10) <= uVar3) {
      uVar3 = 0;
    }
    lVar6 = *(long *)(*(long *)(param_1 + 0x18) + (long)(int)uVar3 * 8);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(lVar6 + 0x690);
    *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(lVar6 + 0x694);
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(lVar6 + 0x698);
    *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(lVar6 + 0x69c);
    uVar8 = *(undefined8 *)(lVar6 + 0x6a0);
    *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(lVar6 + 0x6a8);
    *(undefined8 *)(param_2 + 0x40) = uVar8;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x4f8));
  uVar3 = *param_3;
  if (*(uint *)(param_1 + 0x20) <= uVar3) {
    uVar3 = 0;
  }
  *(long *)(*(long *)(param_1 + 0x28) + (long)(int)uVar3 * 8) = param_2;
  uVar3 = *param_3;
  if (*(uint *)(param_1 + 0x30) <= uVar3) {
    uVar3 = 0;
  }
  lVar6 = *(long *)(param_1 + 0x38) + (long)(int)uVar3 * 0x38;
  *(undefined4 *)(lVar6 + 0x18) = 0;
  *(long *)(lVar6 + 0x20) = param_2;
  *(char **)(lVar6 + 0x10) = "Layer(Draw)";
  uVar3 = *param_3;
  if (*(uint *)(param_1 + 0x40) <= uVar3) {
    uVar3 = 0;
  }
  lVar6 = *(long *)(param_1 + 0x48) + (long)(int)uVar3 * 0x38;
  *(undefined4 *)(lVar6 + 0x18) = 1;
  *(long *)(lVar6 + 0x20) = param_2;
  *(char **)(lVar6 + 0x10) = "Layer(SubDraw)";
  uVar3 = *param_3;
  if (*(uint *)(param_1 + 0x50) <= uVar3) {
    uVar3 = 0;
  }
  lVar6 = *(long *)(param_1 + 0x58) + (long)(int)uVar3 * 0x38;
  *(undefined4 *)(lVar6 + 0x18) = 4;
  *(long *)(lVar6 + 0x20) = param_2;
  *(char **)(lVar6 + 0x10) = "Layer(GPUCalc)";
  uVar3 = *param_3;
  if (*(uint *)(param_1 + 0x30) <= uVar3) {
    uVar3 = 0;
  }
  *(long *)(param_2 + 200) = *(long *)(param_1 + 0x38) + (long)(int)uVar3 * 0x38;
  uVar3 = *param_3;
  if (*(uint *)(param_1 + 0x40) <= uVar3) {
    uVar3 = 0;
  }
  *(long *)(param_2 + 0xd0) = *(long *)(param_1 + 0x48) + (long)(int)uVar3 * 0x38;
  uVar3 = *param_3;
  if (*(uint *)(param_1 + 0x50) <= uVar3) {
    uVar3 = 0;
  }
  *(long *)(param_2 + 0xd8) = *(long *)(param_1 + 0x58) + (long)(int)uVar3 * 0x38;
  *(uint *)(param_1 + 400) = *(uint *)(param_1 + 400) | 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x4f8));
  return;
}


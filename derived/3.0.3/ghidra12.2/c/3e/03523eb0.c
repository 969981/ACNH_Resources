
void FUN_03523eb0(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  void *__dest;
  void *__src;
  
  lVar2 = param_1 + 0x1ce88 + (ulong)param_2 * 0xf0;
  if (1 < param_2) {
    lVar2 = param_1 + 0x1ce88;
  }
  if (*(int *)(lVar2 + 0x28) == 1) {
    uVar3 = *(uint *)(lVar2 + 0x2c);
    if (uVar3 < 0x10e) {
      lVar5 = param_1 + 0x308 + (ulong)uVar3 * 0x1a8;
      if (*(int *)(lVar5 + 0x1a0) != 0) {
        lVar7 = param_1 + 0x308 + (ulong)uVar3 * 0x1a8;
        **(undefined1 **)(lVar7 + 0x60) = 0;
        *(undefined1 *)(lVar7 + 0xf0) = 0;
        if (((*(int *)(lVar7 + 0x100) != 1) && ((*(byte *)(lVar7 + 0x18) >> 1 & 1) != 0)) &&
           (*(int *)(lVar7 + 0x140) == -1)) {
          *(undefined4 *)(lVar7 + 0x140) = 1;
        }
        *(undefined4 *)(lVar5 + 0x1a0) = 0;
      }
    }
  }
  else if ((*(int *)(lVar2 + 0x28) != -1) && (uVar3 = *(uint *)(lVar2 + 0x2c), uVar3 < 0x40)) {
    lVar5 = param_1 + 0x1c260 + (ulong)uVar3 * 0x30;
    *(undefined1 *)(lVar5 + 0x24) = 0;
    *(undefined4 *)(lVar5 + 0x28) = 0;
    if ((*(byte *)(lVar5 + 4) & 1) != 0) {
      FUN_015d8190(*(undefined8 *)(DAT_05231900 + 0x140));
    }
    piVar6 = (int *)(param_1 + 0x1c260 + (ulong)uVar3 * 0x30 + 0x20);
    if (*piVar6 != -1) {
      *piVar6 = -1;
    }
  }
  lVar5 = *(long *)(lVar2 + 0x18);
  *(undefined8 *)(lVar5 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(param_1 + 0x1ce68);
  *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)(param_1 + 0x1ce70);
  *(undefined4 *)(lVar5 + 0x18) = *(undefined4 *)(param_1 + 0x1ce78);
  *(undefined8 *)(lVar2 + 0x28) = 0xffffffffffffffff;
  puVar4 = PTR_PTR_04bb2238;
  __dest = *(void **)(lVar2 + 0x38);
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  __src = *(void **)(puVar4 + 8);
  if (__dest != __src) {
    (**(code **)(*(long *)puVar4 + 0x18))(puVar4);
    lVar5 = 0;
    do {
      if (*(char *)(*(long *)(puVar4 + 8) + lVar5) == '\0') goto LAB_0352407c;
      lVar7 = *(long *)(puVar4 + 8) + lVar5;
      if (*(char *)(lVar7 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0352407c;
      }
      if (*(char *)(lVar7 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0352407c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0352407c:
    iVar1 = (int)lVar5;
    if (*(int *)(lVar2 + 0x40) <= (int)lVar5) {
      iVar1 = *(int *)(lVar2 + 0x40) + -1;
    }
    memcpy(__dest,__src,(long)iVar1);
    *(undefined1 *)((long)__dest + (long)iVar1) = 0;
  }
  *(undefined8 *)(lVar2 + 0xe8) = 0xffffffff;
  return;
}


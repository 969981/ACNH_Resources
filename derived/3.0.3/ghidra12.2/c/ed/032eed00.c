
void FUN_032eed00(long param_1,undefined1 *param_2,undefined1 *param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  long lVar5;
  void *__dest;
  void *__src;
  long *plVar6;
  ulong __n;
  
  if (*(char *)(param_1 + 0x260) != '\0') {
    return;
  }
  uVar4 = 0;
  if ((*(char *)(param_1 + 0x24c) != '\0') && (uVar4 = 0, *(char *)(param_1 + 0x25d) != '\0')) {
    uVar4 = 1;
    *(undefined1 *)(param_1 + 0x24c) = 0;
    *(undefined2 *)(param_1 + 0x25c) = 1;
    *(undefined4 *)(param_1 + 0x254) = *(undefined4 *)(param_1 + 0x244);
    *(undefined1 *)(param_1 + 600) = *(undefined1 *)(param_1 + 0x248);
    *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(param_1 + 0x240);
  }
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = uVar4;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  uVar4 = 0;
  if (iVar3 != 0) {
    if (*(char *)(param_1 + 0x238) == '\0') {
      uVar4 = 0;
    }
    else {
      if (iVar3 == 2) {
        *(undefined4 *)(param_1 + 300) = 2;
      }
      else if (iVar3 == 1) {
        plVar6 = (long *)(param_1 + 0x20);
        *(undefined4 *)(param_1 + 300) = 1;
        uVar4 = *(undefined1 *)(param_1 + 0x18);
        __dest = *(void **)(param_1 + 0x138);
        (**(code **)(*plVar6 + 0x18))(plVar6);
        __src = *(void **)(param_1 + 0x28);
        if (__dest != __src) {
          (**(code **)(*(long *)(param_1 + 0x20) + 0x18))(plVar6);
          lVar5 = 0;
          do {
            if (*(short *)(*(long *)(param_1 + 0x28) + lVar5 * 2) == 0) goto LAB_032eee2c;
            lVar1 = *(long *)(param_1 + 0x28) + lVar5 * 2;
            if (*(short *)(lVar1 + 2) == 0) {
              lVar5 = lVar5 + 1;
              goto LAB_032eee2c;
            }
            if (*(short *)(lVar1 + 4) == 0) {
              lVar5 = lVar5 + 2;
              goto LAB_032eee2c;
            }
            lVar5 = lVar5 + 3;
          } while (lVar5 != 0x80001);
          lVar5 = 0;
LAB_032eee2c:
          uVar2 = (uint)lVar5;
          if (*(int *)(param_1 + 0x140) <= (int)(uint)lVar5) {
            uVar2 = *(int *)(param_1 + 0x140) - 1;
          }
          __n = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
          memcpy(__dest,__src,__n);
          *(undefined2 *)((long)__dest + __n) = 0;
        }
        *(undefined1 *)(param_1 + 0x239) = uVar4;
      }
      *(undefined1 *)(param_1 + 0x238) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0x14);
      uVar4 = 1;
    }
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = uVar4;
  }
  return;
}


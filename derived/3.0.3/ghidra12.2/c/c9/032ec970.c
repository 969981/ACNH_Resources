
void FUN_032ec970(undefined4 *param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  void *__dest;
  void *__src;
  ulong __n;
  undefined4 local_38;
  undefined4 uStack_34;
  
  *(undefined1 *)(param_1 + 0x1a4) = 0;
  if ((param_1[0x184] & param_1[0x183]) != 0xffffffff) {
    param_1[0x11d] = 0;
    **(undefined2 **)(param_1 + 0x11a) = 0;
    *(undefined8 *)(param_1 + 0x18e) = 0;
    *(undefined2 *)(param_1 + 400) = 0;
    *(undefined8 *)(param_1 + 0x191) = 0;
    *(undefined8 *)(param_1 + 0x198) = 0;
    *(undefined8 *)(param_1 + 0x187) = 0xffffffffffffffff;
    nn::kpr::KeyCodeComposer::Clear();
    *(undefined2 *)(param_1 + 0x197) = 0;
    param_1[0x189] = 0xffffffff;
    param_1[0x196] = 0;
    **(undefined2 **)(param_1 + 0x1a8) = 0;
    **(undefined2 **)(param_1 + 0x1de) = 0;
    FUN_032ea1b0(param_1,4);
    FUN_03363ed0(param_1 + 0x114,**(undefined8 **)(param_1 + 8));
    __dest = *(void **)(param_1 + 0x1de);
    (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
    __src = *(void **)(param_1 + 0x1a8);
    if (__dest != __src) {
      (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
      lVar4 = 0;
      do {
        if (*(short *)(*(long *)(param_1 + 0x1a8) + lVar4 * 2) == 0) goto LAB_032eca90;
        lVar1 = *(long *)(param_1 + 0x1a8) + lVar4 * 2;
        if (*(short *)(lVar1 + 2) == 0) {
          lVar4 = lVar4 + 1;
          goto LAB_032eca90;
        }
        if (*(short *)(lVar1 + 4) == 0) {
          lVar4 = lVar4 + 2;
          goto LAB_032eca90;
        }
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
      lVar4 = 0;
LAB_032eca90:
      uVar2 = (uint)lVar4;
      if ((int)param_1[0x1e0] <= (int)(uint)lVar4) {
        uVar2 = param_1[0x1e0] - 1;
      }
      __n = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
      memcpy(__dest,__src,__n);
      *(undefined2 *)((long)__dest + __n) = 0;
    }
    param_1[1] = *param_1;
    FUN_03363ed0(param_1 + 0x11e,*(undefined8 *)(param_1 + 0x11a));
    param_1[0x185] = param_1[0x183];
    local_38 = *param_1;
    puVar3 = *(undefined8 **)(param_1 + 4);
    param_1[0x186] = param_1[0x184];
    if (puVar3 != (undefined8 *)0x0) {
      uStack_34 = local_38;
      (**(code **)*puVar3)(puVar3,&local_38);
    }
  }
  return;
}


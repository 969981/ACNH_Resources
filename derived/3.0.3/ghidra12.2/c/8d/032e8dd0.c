
void FUN_032e8dd0(int *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  void *__dest;
  void *__src;
  int local_38;
  int iStack_34;
  
  *(undefined1 *)(param_1 + 0x1a4) = 0;
  if ((param_1[0x184] & param_1[0x183]) != 0xffffffff) {
    iVar4 = *param_1;
    iVar2 = param_1[2];
    if (iVar4 <= param_1[2]) {
      iVar2 = iVar4;
    }
    if (iVar2 != -1) {
      iVar4 = iVar2;
    }
    param_1[3] = iVar4;
    FUN_03363ed0(param_1 + 0x114,**(undefined8 **)(param_1 + 8));
    FUN_032e81e0(param_1);
    uVar5 = FUN_032e84e0(param_1);
    if ((uVar5 & 1) != 0) {
      FUN_03363ed0(param_1 + 0x114,**(undefined8 **)(param_1 + 8));
      __dest = *(void **)(param_1 + 0x1de);
      (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
      __src = *(void **)(param_1 + 0x1a8);
      if (__dest != __src) {
        (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
        lVar7 = 0;
        do {
          if (*(short *)(*(long *)(param_1 + 0x1a8) + lVar7 * 2) == 0) goto LAB_032e8edc;
          lVar1 = *(long *)(param_1 + 0x1a8) + lVar7 * 2;
          if (*(short *)(lVar1 + 2) == 0) {
            lVar7 = lVar7 + 1;
            goto LAB_032e8edc;
          }
          if (*(short *)(lVar1 + 4) == 0) {
            lVar7 = lVar7 + 2;
            goto LAB_032e8edc;
          }
          lVar7 = lVar7 + 3;
        } while (lVar7 != 0x80001);
        lVar7 = 0;
LAB_032e8edc:
        uVar3 = (uint)lVar7;
        if (param_1[0x1e0] <= (int)(uint)lVar7) {
          uVar3 = param_1[0x1e0] - 1;
        }
        uVar5 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar3 << 1;
        memcpy(__dest,__src,uVar5);
        *(undefined2 *)((long)__dest + uVar5) = 0;
      }
      param_1[1] = *param_1;
      FUN_03363ed0(param_1 + 0x11e,*(undefined8 *)(param_1 + 0x11a));
      param_1[0x185] = param_1[0x183];
      local_38 = param_1[3];
      iStack_34 = *param_1;
      puVar6 = *(undefined8 **)(param_1 + 4);
      param_1[0x186] = param_1[0x184];
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6,&local_38);
      }
    }
  }
  return;
}


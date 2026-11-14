
void FUN_01d3f010(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined2 *__src;
  ulong __n;
  undefined *local_60;
  undefined2 *puStack_58;
  int local_50;
  undefined2 local_4c [5];
  undefined2 local_42;
  
  if (2 < *(int *)(param_1 + 0x508) && *(char *)(param_1 + 0x55e) == '\0') {
    lVar4 = *(long *)PTR_DAT_04bb36f0;
    uVar2 = DAT_0536c720;
    if (*(uint *)(lVar4 + 0x20) <= DAT_0536c720) {
      uVar2 = 0;
    }
    if ((*(int *)(param_1 + 0x508) == 4) &&
       (*(char *)(*(long *)(lVar4 + 0x28) + (long)(int)uVar2 * 0x38 + 0x2c) != '\0')) {
      local_42 = 0;
      local_50 = 6;
      local_60 = &DAT_04a556c8;
      puStack_58 = local_4c;
      (**(code **)(*param_2 + 0x18))(param_2);
      __src = (undefined2 *)param_2[1];
      if (local_4c != __src) {
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar3 = 0;
        do {
          if (*(short *)(param_2[1] + lVar3 * 2) == 0) goto LAB_01d3f120;
          lVar1 = param_2[1] + lVar3 * 2;
          if (*(short *)(lVar1 + 2) == 0) {
            lVar3 = lVar3 + 1;
            goto LAB_01d3f120;
          }
          if (*(short *)(lVar1 + 4) == 0) {
            lVar3 = lVar3 + 2;
            goto LAB_01d3f120;
          }
          lVar3 = lVar3 + 3;
        } while (lVar3 != 0x80001);
        lVar3 = 0;
LAB_01d3f120:
        uVar2 = (uint)lVar3;
        if (local_50 <= (int)(uint)lVar3) {
          uVar2 = local_50 - 1;
        }
        __n = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
        memcpy(local_4c,__src,__n);
        *(undefined2 *)((long)local_4c + __n) = 0;
      }
      local_60 = PTR_DAT_04bb84e0 + 0x10;
      FUN_01c9a740(lVar4,&local_60,DAT_0536c720);
      *(undefined1 *)(param_1 + 0x55f) = 1;
    }
  }
  return;
}



void FUN_030fddc4(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  
  if ((((int)param_3 < *(int *)(param_1 + 0x18)) && (-1 < (int)param_3)) &&
     (*(int *)(param_1 + 0x18) != 0)) {
    uVar1 = param_3;
    if (*(uint *)(param_1 + 0x20) <= param_3) {
      uVar1 = 0;
    }
    if (*(int *)(*(long *)(param_1 + 0x28) + (ulong)uVar1 * 0x60 + 0x48) != -1) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x28) + (ulong)uVar1 * 0x60 + 0x18);
      *(undefined8 *)(lVar3 + 8) = 0xffffffffffffffff;
      *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(param_1 + 0x38);
      *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(lVar3 + 0x18) = *(undefined4 *)(param_1 + 0x48);
      uVar4 = *(uint *)(param_1 + 0x20);
      lVar3 = *(long *)(param_1 + 0x28);
      uVar1 = param_3;
      if (uVar4 <= param_3) {
        uVar1 = 0;
      }
      uVar1 = *(uint *)(lVar3 + (ulong)uVar1 * 0x60 + 0x48);
      if (uVar1 < 0x10e) {
        lVar5 = param_2 + 8 + (ulong)uVar1 * 0x1a8;
        if (*(int *)(lVar5 + 0x1a0) != 0) {
          lVar3 = param_2 + 8 + (ulong)uVar1 * 0x1a8;
          **(undefined1 **)(lVar3 + 0x60) = 0;
          *(undefined1 *)(lVar3 + 0xf0) = 0;
          if (((*(int *)(lVar3 + 0x100) != 1) && ((*(byte *)(lVar3 + 0x18) >> 1 & 1) != 0)) &&
             (*(int *)(lVar3 + 0x140) == -1)) {
            *(undefined4 *)(lVar3 + 0x140) = 1;
          }
          *(undefined4 *)(lVar5 + 0x1a0) = 0;
          uVar4 = *(uint *)(param_1 + 0x20);
          lVar3 = *(long *)(param_1 + 0x28);
        }
      }
      if (uVar4 <= param_3) {
        param_3 = 0;
      }
      lVar3 = lVar3 + (ulong)param_3 * 0x60;
      *(undefined8 *)(lVar3 + 0x48) = 0xffffffffffffffff;
      *(undefined1 *)(lVar3 + 0x50) = 0;
      *(undefined2 *)(lVar3 + 0x54) = DAT_05586008;
      *(undefined1 *)(lVar3 + 0x56) = DAT_0558600a;
      *(undefined1 *)(lVar3 + 0x57) = DAT_0558600b;
      uVar2 = DAT_0558600c;
      *(undefined1 *)(lVar3 + 0x5c) = 0;
      *(undefined4 *)(lVar3 + 0x58) = uVar2;
    }
  }
  return;
}


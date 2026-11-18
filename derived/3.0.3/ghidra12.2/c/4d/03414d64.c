
void FUN_03414d64(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined *local_40;
  undefined4 local_38;
  
  plVar4 = (long *)*param_1;
  if ((plVar4 != (long *)0x0) && (param_1[1] != 0)) {
    local_40 = PTR_DAT_04bc0cb8 + 0x10;
    local_38 = 0x1f;
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_40);
    (**(code **)(plVar4[3] + 0x208))(plVar4[1],0,0,param_1 + 2);
    uVar1 = *(uint *)(param_1 + 6);
    if (uVar1 < 0x10e) {
      lVar2 = param_1[1] + 8 + (ulong)uVar1 * 0x1a8;
      if (*(int *)(lVar2 + 0x1a0) != 0) {
        lVar3 = param_1[1] + 8 + (ulong)uVar1 * 0x1a8;
        **(undefined1 **)(lVar3 + 0x60) = 0;
        *(undefined1 *)(lVar3 + 0xf0) = 0;
        if (((*(int *)(lVar3 + 0x100) != 1) && ((*(byte *)(lVar3 + 0x18) >> 1 & 1) != 0)) &&
           (*(int *)(lVar3 + 0x140) == -1)) {
          *(undefined4 *)(lVar3 + 0x140) = 1;
        }
        *(undefined4 *)(lVar2 + 0x1a0) = 0;
      }
    }
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    *(undefined1 *)param_1[8] = 0;
    *(undefined4 *)(param_1 + 0x12) = 0;
    *(undefined1 *)(param_1 + 0x17) = 0;
    uVar1 = *(uint *)(param_1 + 0x18);
    param_1[0x14] = 0xffffffffffffffff;
    if (uVar1 < 0x10e) {
      lVar2 = param_1[1] + 8 + (ulong)uVar1 * 0x1a8;
      if (*(int *)(lVar2 + 0x1a0) != 0) {
        lVar3 = param_1[1] + 8 + (ulong)uVar1 * 0x1a8;
        **(undefined1 **)(lVar3 + 0x60) = 0;
        *(undefined1 *)(lVar3 + 0xf0) = 0;
        if (((*(int *)(lVar3 + 0x100) != 1) && ((*(byte *)(lVar3 + 0x18) >> 1 & 1) != 0)) &&
           (*(int *)(lVar3 + 0x140) == -1)) {
          *(undefined4 *)(lVar3 + 0x140) = 1;
        }
        *(undefined4 *)(lVar2 + 0x1a0) = 0;
      }
    }
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
    *(undefined1 *)param_1[0x1a] = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    param_1[0x26] = 0xffffffffffffffff;
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  return;
}


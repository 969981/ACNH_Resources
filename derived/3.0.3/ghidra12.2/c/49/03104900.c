
void FUN_03104900(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined *local_50;
  undefined4 local_48;
  
  uVar1 = *(uint *)(param_1 + 0x388);
  if (uVar1 != 0xffffffff) {
    if (uVar1 < 0x10e) {
      lVar5 = *(long *)(param_1 + 0x2d8) + 8;
      lVar4 = lVar5 + (ulong)uVar1 * 0x1a8;
      if (*(int *)(lVar4 + 0x1a0) != 0) {
        lVar5 = lVar5 + (ulong)uVar1 * 0x1a8;
        **(undefined1 **)(lVar5 + 0x60) = 0;
        *(undefined1 *)(lVar5 + 0xf0) = 0;
        if (((*(int *)(lVar5 + 0x100) != 1) && ((*(byte *)(lVar5 + 0x18) >> 1 & 1) != 0)) &&
           (*(int *)(lVar5 + 0x140) == -1)) {
          *(undefined4 *)(lVar5 + 0x140) = 1;
        }
        *(undefined4 *)(lVar4 + 0x1a0) = 0;
      }
    }
    lVar5 = *(long *)(param_1 + 0x288);
    *(undefined1 *)(param_1 + 0x38c) = 0;
    *(undefined4 *)(param_1 + 0x388) = 0xffffffff;
    *(undefined2 *)(param_1 + 0x282) = 0xffff;
    puVar2 = PTR_DAT_04bc0cb8;
    if (lVar5 != 0) {
      plVar7 = *(long **)(lVar5 + 0x290);
      if (plVar7 != (long *)0x0) {
        local_50 = PTR_DAT_04bc0cb8 + 0x10;
        local_48 = 0x1f;
        (**(code **)(*plVar7 + 0x18))(plVar7,&local_50);
        (**(code **)(plVar7[3] + 0x208))(plVar7[1],0,0,lVar5 + 0x2d0);
      }
      plVar7 = *(long **)(lVar5 + 0x288);
      if (plVar7 != (long *)0x0) {
        local_50 = puVar2 + 0x10;
        local_48 = 0x1f;
        (**(code **)(*plVar7 + 0x18))(plVar7,&local_50);
        (**(code **)(plVar7[3] + 0x208))(plVar7[1],0,0,lVar5 + 0x2f0);
      }
    }
  }
  if (*(char *)(param_1 + 0x2e0) != '\0') {
    iVar3 = 0;
    lVar5 = *(long *)(param_1 + 0x2d8) + 8;
    do {
      lVar4 = lVar5 + (long)iVar3 * 0x1a8;
      if (*(int *)(lVar4 + 0x1a0) != 0) {
        lVar6 = lVar5 + (long)iVar3 * 0x1a8;
        **(undefined1 **)(lVar6 + 0x60) = 0;
        *(undefined1 *)(lVar6 + 0xf0) = 0;
        if (((*(int *)(lVar6 + 0x100) != 1) && ((*(byte *)(lVar6 + 0x18) >> 1 & 1) != 0)) &&
           (*(int *)(lVar6 + 0x140) == -1)) {
          *(undefined4 *)(lVar6 + 0x140) = 1;
        }
        *(undefined4 *)(lVar4 + 0x1a0) = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x10e);
  }
  return;
}


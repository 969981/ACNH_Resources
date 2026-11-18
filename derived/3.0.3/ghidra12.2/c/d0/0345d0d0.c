
void FUN_0345d0d0(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined *local_60;
  undefined4 local_58;
  
  uVar8 = 0;
  puVar2 = PTR_DAT_04bc0cb8 + 0x10;
  do {
    lVar5 = *(long *)((long)param_1 + (-(uVar8 >> 0x1f) & 0xfffffff800000000 | uVar8 << 3) + 0x20);
    if (lVar5 != 0) {
      uVar3 = *(uint *)(param_1 + 0x23);
      if (*(uint *)(lVar5 + 0x208) <= uVar3) {
        uVar3 = 0;
      }
      plVar7 = *(long **)(*(long *)(lVar5 + 0x210) + (long)(int)uVar3 * 8);
      if (plVar7 != (long *)0x0) {
        local_58 = 0x1f;
        local_60 = puVar2;
        (**(code **)(*plVar7 + 0x18))(plVar7,&local_60);
        (**(code **)(plVar7[3] + 0x208))(plVar7[1],0,0,param_1 + 0x240);
      }
    }
    uVar3 = (int)uVar8 + 1;
    uVar8 = (ulong)uVar3;
  } while (uVar3 != 0x1e);
  iVar4 = 0;
  do {
    uVar3 = *(uint *)(param_1 + (long)iVar4 * 0x12 + 0x24);
    if (uVar3 < 0x10e) {
      lVar5 = *param_1 + 8 + (ulong)uVar3 * 0x1a8;
      if (*(int *)(lVar5 + 0x1a0) != 0) {
        lVar6 = *param_1 + 8 + (ulong)uVar3 * 0x1a8;
        **(undefined1 **)(lVar6 + 0x60) = 0;
        *(undefined1 *)(lVar6 + 0xf0) = 0;
        if (((*(int *)(lVar6 + 0x100) != 1) && ((*(byte *)(lVar6 + 0x18) >> 1 & 1) != 0)) &&
           (*(int *)(lVar6 + 0x140) == -1)) {
          *(undefined4 *)(lVar6 + 0x140) = 1;
        }
        *(undefined4 *)(lVar5 + 0x1a0) = 0;
      }
    }
    *(uint *)(param_1 + (long)iVar4 * 0x12 + 0x24) = 0xffffffff;
    iVar1 = iVar4 + 1;
    lVar5 = (long)iVar4;
    *(undefined1 *)param_1[lVar5 * 0x12 + 0x26] = 0;
    *(undefined4 *)(param_1 + lVar5 * 0x12 + 0x30) = 0;
    param_1[lVar5 * 0x12 + 0x32] = -1;
    *(undefined1 *)(param_1 + lVar5 * 0x12 + 0x35) = 0;
    iVar4 = iVar1;
  } while (iVar1 != 0x1e);
  return;
}


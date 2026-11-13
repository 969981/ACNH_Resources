
void FUN_01311710(long param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 local_40;
  int local_38;
  int iStack_34;
  
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((long)param_2 + 0x14);
  uVar2 = 0;
  if (param_2[1] != 0) {
    *(undefined8 *)(param_1 + 0x10) = param_2[1];
    iVar5 = *(int *)(param_2[1] + 0x18);
    iVar4 = *(int *)(param_2[1] + 0x1c);
    *(int *)(param_1 + 0x18) = iVar5;
    *(int *)(param_1 + 0x1c) = iVar4;
    local_40 = *param_2;
    local_38 = iVar5;
    iStack_34 = iVar4;
    FUN_013834a4(param_1 + 0x28,&local_40);
    FUN_03856c54(param_1 + 0x60,iVar4 * iVar5,*param_2);
    *(long *)(*(long *)(param_1 + 0x10) + 0x80) = param_1;
    uVar2 = *(uint *)(param_1 + 8) & 0xfffffffc | 1;
  }
  *(uint *)(param_1 + 8) = uVar2;
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    iVar4 = *(int *)(param_1 + 0x68);
    iVar5 = iVar4 + 0x1e;
    if (0 < iVar4) {
      iVar5 = iVar4 + -1;
    }
    uVar2 = (iVar5 >> 5) + 1;
    memset(*(void **)(param_1 + 0x60),0,
           -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2);
  }
  iVar5 = *(int *)(param_1 + 0x1c);
  if (0 < iVar5) {
    iVar4 = *(int *)(param_1 + 0x18);
    if (0 < iVar4) {
      iVar3 = 0;
      do {
        if (0 < iVar4) {
          iVar6 = *(int *)(param_1 + 0x6c);
          iVar5 = 0;
          do {
            uVar2 = iVar5 + iVar3 * iVar4;
            *(int *)(param_1 + 0x6c) = iVar6 + 1;
            if (((-1 < (int)uVar2) && (lVar7 = *(long *)(param_1 + 0x60), lVar7 != 0)) &&
               ((int)uVar2 < *(int *)(param_1 + 0x68))) {
              lVar1 = (ulong)(uVar2 >> 5) * 4;
              *(uint *)(lVar7 + lVar1) = *(uint *)(lVar7 + lVar1) | 1 << (ulong)(uVar2 & 0x1f);
              iVar6 = *(int *)(param_1 + 0x6c) + -1;
              iVar4 = *(int *)(param_1 + 0x18);
            }
            iVar5 = iVar5 + 1;
            *(int *)(param_1 + 0x6c) = iVar6;
          } while (iVar5 < iVar4);
          iVar5 = *(int *)(param_1 + 0x1c);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar5);
    }
  }
  return;
}



void FUN_03977a30(long param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auStack_c4 [4];
  uint local_c0;
  
  if ((*(ushort *)(param_1 + 8) & 0x480) != 0) {
    uVar3 = param_3;
    if (*(uint *)(param_1 + 0x18) <= param_3) {
      uVar3 = 0;
    }
    lVar5 = *(long *)(param_1 + 0x20) + (long)(int)uVar3 * 0x970;
    FUN_038e4cec(auStack_c4);
    local_c0 = local_c0 & 0xfffffffe;
    FUN_038e4d90(auStack_c4,param_2);
    if (*(char *)(param_1 + 8) < '\0') {
      uVar3 = (**(code **)(**(long **)(param_1 + 0x28) + 0x58))();
      if ((*(byte *)(param_1 + 0x10) >> (ulong)(uVar3 & 0x1f) & 1) != 0) {
        (**(code **)(**(long **)(param_1 + 0x28) + 0x48))
                  (*(long **)(param_1 + 0x28),param_2,param_3,lVar5);
      }
      uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x58))();
      if ((*(byte *)(param_1 + 0x10) >> (ulong)(uVar3 & 0x1f) & 1) != 0) {
        (**(code **)(**(long **)(param_1 + 0x30) + 0x48))
                  (*(long **)(param_1 + 0x30),param_2,param_3,lVar5);
      }
      uVar3 = (**(code **)(**(long **)(param_1 + 0x38) + 0x58))();
      if ((*(byte *)(param_1 + 0x10) >> (ulong)(uVar3 & 0x1f) & 1) != 0) {
        (**(code **)(**(long **)(param_1 + 0x38) + 0x48))
                  (*(long **)(param_1 + 0x38),param_2,param_3,lVar5);
      }
      iVar2 = *(int *)(param_1 + 0x40);
      if (iVar2 != 0) {
        lVar6 = *(long *)(param_1 + 0x48);
        uVar7 = 0;
        do {
          plVar4 = *(long **)(lVar6 + (-(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar7 << 3));
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x48))(plVar4,param_2,param_3,lVar5);
          }
          uVar1 = uVar7 + 1;
          uVar7 = uVar1 & 0xffffffff;
        } while (iVar2 != (int)uVar1);
      }
    }
    if ((*(byte *)(param_1 + 9) >> 2 & 1) != 0) {
      uVar3 = (**(code **)(**(long **)(param_1 + 0x28) + 0x58))();
      if ((*(byte *)(param_1 + 0x10) >> (ulong)(uVar3 & 0x1f) & 1) != 0) {
        (**(code **)(**(long **)(param_1 + 0x28) + 0x50))
                  (*(long **)(param_1 + 0x28),param_2,param_3,lVar5);
      }
      uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x58))();
      if ((*(byte *)(param_1 + 0x10) >> (ulong)(uVar3 & 0x1f) & 1) != 0) {
        (**(code **)(**(long **)(param_1 + 0x30) + 0x50))
                  (*(long **)(param_1 + 0x30),param_2,param_3,lVar5);
      }
      uVar3 = (**(code **)(**(long **)(param_1 + 0x38) + 0x58))();
      if ((*(byte *)(param_1 + 0x10) >> (ulong)(uVar3 & 0x1f) & 1) != 0) {
        (**(code **)(**(long **)(param_1 + 0x38) + 0x50))
                  (*(long **)(param_1 + 0x38),param_2,param_3,lVar5);
      }
      iVar2 = *(int *)(param_1 + 0x40);
      if (iVar2 != 0) {
        lVar6 = *(long *)(param_1 + 0x48);
        uVar7 = 0;
        do {
          plVar4 = *(long **)(lVar6 + (-(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar7 << 3));
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x50))(plVar4,param_2,param_3,lVar5);
          }
          uVar1 = uVar7 + 1;
          uVar7 = uVar1 & 0xffffffff;
        } while (iVar2 != (int)uVar1);
      }
    }
  }
  return;
}


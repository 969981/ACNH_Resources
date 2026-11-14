
void FUN_01d3ee98(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  uVar2 = DAT_0536c720;
  if (2 < *(int *)(param_1 + 0x508)) {
    if (*(char *)(param_1 + 0x55e) == '\0') {
      lVar4 = *(long *)PTR_DAT_04bb36f0;
      uVar1 = DAT_0536c720;
      if (*(uint *)(lVar4 + 0x20) <= DAT_0536c720) {
        uVar1 = 0;
      }
      if ((*(int *)(param_1 + 0x508) == 4) &&
         (*(char *)(*(long *)(lVar4 + 0x28) + (long)(int)uVar1 * 0x38 + 0x2c) != '\0')) {
        uVar1 = DAT_0536c720;
        if (*(uint *)(lVar4 + 0x20) <= DAT_0536c720) {
          uVar1 = 0;
        }
        *(undefined1 *)(*(long *)(lVar4 + 0x28) + (long)(int)uVar1 * 0x38 + 0x2c) = 0;
        uVar1 = uVar2;
        if (*(uint *)(lVar4 + 0x20) <= uVar2) {
          uVar1 = 0;
        }
        *(undefined1 *)(*(long *)(lVar4 + 0x28) + (long)(int)uVar1 * 0x38 + 0x2d) = 0;
        uVar1 = uVar2;
        if (*(uint *)(lVar4 + 0x20) <= uVar2) {
          uVar1 = 0;
        }
        *(undefined4 *)(*(long *)(lVar4 + 0x28) + (long)(int)uVar1 * 0x38) = 1;
        if (*(uint *)(lVar4 + 0x20) <= uVar2) {
          uVar2 = 0;
        }
        *(undefined1 *)(*(long *)(lVar4 + 0x28) + (long)(int)uVar2 * 0x38 + 0x2f) = 0;
        return;
      }
    }
    if (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0x38) != 0 &&
        *(char *)(*(long *)PTR_DAT_04bb21d0 + 0xfd8) == '\0') {
      plVar5 = *(long **)(*(long *)PTR_DAT_04bcb7d8 + 0x30);
      uVar3 = (**(code **)(*plVar5 + 0x10))(plVar5);
      if (((uVar3 & 1) == 0) && (uVar3 = (**(code **)(*plVar5 + 0x18))(plVar5), (uVar3 & 1) == 0)) {
        FUN_0387de70(plVar5,&DAT_05b03f00,0xe,0x14,0xe);
      }
    }
  }
  return;
}


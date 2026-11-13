
void FUN_0126efe4(long param_1,uint *param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  if (DAT_04c93e08 != 0) {
    uVar1 = *param_2;
    if ((((uVar1 == 0) ||
         (lVar3 = *(long *)(*(long *)(*(long *)(DAT_04c93e08 + 0x1c0) + 8) +
                           ((ulong)(uVar1 >> 0x11) & 0x7ff8)), lVar3 == 0)) ||
        ((*(uint *)(lVar3 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar3 + 0x230) != uVar1)) {
      lVar3 = 0;
    }
    if (*(int *)(DAT_04c93e08 + 0x288) == 1 || *(int *)(DAT_04c93e08 + 0x288) == -1) {
      plVar2 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      (**(code **)(*plVar2 + 0x60))();
    }
    if (lVar3 != 0) {
      **(undefined1 **)(param_1 + 8) = 0;
    }
  }
  return;
}


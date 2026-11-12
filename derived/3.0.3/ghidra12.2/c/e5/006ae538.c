
size_t FUN_006ae538(void *param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  long *plVar3;
  size_t __n;
  
  FUN_00692d10(param_4);
  nn::os::SdkMutexType::Lock();
  uVar1 = FUN_00692d30(param_4);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0x4db;
  }
  else {
    plVar3 = *(long **)(param_4 + 0x70);
    __n = param_3 * param_2;
    if (plVar3[2] + __n <= (ulong)plVar3[1]) {
      memcpy((void *)(*plVar3 + plVar3[2]),param_1,__n);
      *(size_t *)(*(long *)(param_4 + 0x70) + 0x10) =
           *(long *)(*(long *)(param_4 + 0x70) + 0x10) + __n;
      goto LAB_006ae5cc;
    }
    uVar2 = 0x2edb;
  }
  __n = 0;
  *(undefined4 *)(param_4 + 0x80) = uVar2;
LAB_006ae5cc:
  nn::os::SdkMutexType::Unlock();
  return __n;
}


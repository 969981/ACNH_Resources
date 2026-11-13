
void FUN_013834a4(long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  size_t __size;
  long lVar4;
  void *__s;
  long lVar5;
  
  *(int *)(param_1 + 8) = (int)param_2[1];
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
  FUN_03856c54(param_1 + 0x10,*(int *)((long)param_2 + 0xc) * (int)param_2[1],*param_2);
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    iVar3 = *(int *)(param_1 + 0x18);
    iVar2 = iVar3 + 0x1e;
    if (0 < iVar3) {
      iVar2 = iVar3 + -1;
    }
    uVar1 = (iVar2 >> 5) + 1;
    memset(*(void **)(param_1 + 0x10),0,
           -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
  }
  uVar1 = *(int *)((long)param_2 + 0xc) * (int)param_2[1];
  if (0 < (int)uVar1) {
    __size = (ulong)uVar1 << 2;
    lVar5 = *(long *)PTR_DAT_04bb2698;
    if (lVar5 == 0) {
      __s = malloc(__size);
    }
    else {
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_2 = (long *)(lVar5 + 8);
        if (lVar4 != 0) {
          param_2 = (long *)(lVar4 + 0xa8);
        }
        param_2 = (long *)*param_2;
        if (param_2 == (long *)0x0) {
          return;
        }
      }
      __s = (void *)(**(code **)(*param_2 + 0x30))(param_2,__size,8);
    }
    if (__s != (void *)0x0) {
      memset(__s,0xff,__size);
      *(void **)(param_1 + 0x20) = __s;
      *(undefined8 *)(param_1 + 0x2c) = 0;
      *(uint *)(param_1 + 0x28) = uVar1;
    }
  }
  return;
}


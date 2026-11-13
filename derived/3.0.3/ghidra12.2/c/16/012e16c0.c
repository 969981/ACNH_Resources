
void FUN_012e16c0(long param_1,long *param_2,int param_3,int param_4)

{
  size_t __size;
  uint uVar1;
  long lVar2;
  void *__s;
  long lVar3;
  ulong uVar4;
  
  lVar3 = DAT_05ae7600;
  if ((0 < param_3) && (0 < param_4)) {
    uVar1 = param_4 * param_3;
    uVar4 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
    __size = uVar4;
    if ((int)uVar1 < 0) {
      __size = 0xffffffffffffffff;
    }
    if (DAT_05ae7600 == 0) {
      __s = malloc(__size);
    }
    else {
      if (param_2 == (long *)0x0) {
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_2 = (long *)(lVar3 + 8);
        if (lVar2 != 0) {
          param_2 = (long *)(lVar2 + 0xa8);
        }
        param_2 = (long *)*param_2;
        if (param_2 == (long *)0x0) goto LAB_012e1778;
      }
      __s = (void *)(**(code **)(*param_2 + 0x30))(param_2,__size,8);
    }
    if (__s != (void *)0x0) {
      memset(__s,0,uVar4);
      *(int *)(param_1 + 8) = param_3;
      *(int *)(param_1 + 0xc) = param_4;
      *(void **)(param_1 + 0x10) = __s;
    }
  }
LAB_012e1778:
  uVar1 = *(int *)(param_1 + 0xc) * *(int *)(param_1 + 8);
  if (0 < (int)uVar1) {
    uVar4 = 0;
    if (uVar1 != 1) {
      do {
        lVar3 = uVar4 * 4;
        uVar4 = uVar4 + 2;
        *(undefined4 *)(*(long *)(param_1 + 0x10) + lVar3) = DAT_0517af58;
        *(undefined4 *)(*(long *)(param_1 + 0x10) + lVar3 + 4) = DAT_0517af58;
      } while (((ulong)uVar1 & 0xfffffffe) != uVar4);
    }
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(*(long *)(param_1 + 0x10) + uVar4 * 4) = DAT_0517af58;
    }
  }
  return;
}



void FUN_0096fdd0(long param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  size_t __size;
  long lVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  
  lVar3 = DAT_05ae7600;
  uVar2 = *(int *)(param_3 + 0x3c) * *(int *)(param_3 + 0x38);
  if (0 < (int)uVar2) {
    if (DAT_05ae7600 == 0) {
      pvVar6 = malloc((ulong)uVar2 * 0x34);
    }
    else {
      plVar5 = param_2;
      if (param_2 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar5 = (long *)(lVar3 + 8);
        if (lVar4 != 0) {
          plVar5 = (long *)(lVar4 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) goto LAB_0096fe70;
      }
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,(ulong)uVar2 * 0x34,8);
    }
    if (pvVar6 != (void *)0x0) {
      *(uint *)(param_1 + 0x48) = uVar2;
      *(void **)(param_1 + 0x50) = pvVar6;
    }
  }
LAB_0096fe70:
  lVar3 = DAT_05ae7600;
  uVar2 = *(int *)(param_3 + 0x3c) * *(int *)(param_3 + 0x38);
  if (0 < (int)uVar2) {
    __size = (ulong)uVar2 << 2;
    if (DAT_05ae7600 == 0) {
      pvVar6 = malloc(__size);
    }
    else {
      if (param_2 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar1 = (undefined8 *)(lVar3 + 8);
        if (lVar4 != 0) {
          puVar1 = (undefined8 *)(lVar4 + 0xa8);
        }
        param_2 = (long *)*puVar1;
        if (param_2 == (long *)0x0) {
          return;
        }
      }
      pvVar6 = (void *)(**(code **)(*param_2 + 0x30))(param_2,__size,8);
    }
    if (pvVar6 != (void *)0x0) {
      memset(pvVar6,0,__size);
      *(uint *)(param_1 + 0x68) = uVar2;
      *(void **)(param_1 + 0x70) = pvVar6;
    }
  }
  return;
}


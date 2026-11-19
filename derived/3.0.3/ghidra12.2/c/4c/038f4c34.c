
void FUN_038f4c34(long param_1,long param_2,long *param_3,uint param_4,long param_5,
                 undefined4 param_6)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  ulong local_48;
  
  if (param_2 != 0) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(long *)(param_5 + 0x10) + 8);
    *(long *)(param_1 + 0x10) = param_2;
    lVar1 = DAT_05ae7600;
    if (DAT_05ae7600 == 0) {
      pvVar3 = malloc(0x108);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar1 + 8);
        if (lVar2 != 0) {
          param_3 = (long *)(lVar2 + 0xa8);
        }
        param_3 = (long *)*param_3;
      }
      pvVar3 = (void *)(**(code **)(*param_3 + 0x30))(param_3,0x108,8);
    }
    *(undefined8 *)((long)pvVar3 + 0x100) = 0;
    uVar4 = 0x24;
    if ((param_4 & 0x111) != 0) {
      uVar4 = 0x14;
    }
    *(void **)(param_1 + 0x18) = pvVar3;
    if ((param_4 & 0xfffffeee) != 0) {
      uVar4 = 0x24;
    }
    uVar5 = uVar4;
    if ((param_4 & 0x73) != 0) {
      uVar5 = uVar4 & 0x30 | 2;
    }
    if ((param_4 >> 2 & 1) != 0) {
      uVar5 = 4;
      if ((*(byte *)(DAT_05ae78f0 + 0x5c9) & 0x20) == 0) {
        uVar5 = 1;
      }
      uVar5 = uVar4 & 0x30 | uVar5 | 0x80;
    }
    if ((param_4 & 8) != 0) {
      uVar5 = uVar5 & 0xf8 | 4;
    }
    if ((param_4 & 0x80) != 0) {
      uVar5 = 0x189;
    }
    local_48 = (ulong)uVar5;
    FUN_038f7d00(pvVar3,*(undefined8 *)(param_1 + 8),param_2,&local_48,
                 *(undefined8 *)(*(long *)(param_5 + 0x10) + 0x18),param_6);
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 2;
  }
  return;
}


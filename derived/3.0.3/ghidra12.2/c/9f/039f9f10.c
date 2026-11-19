
void FUN_039f9f10(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  size_t __size;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 8) + 0x218))();
  lVar6 = DAT_05ae7600;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (long)(int)uVar3;
  __size = ((long)(int)uVar3 + (long)(int)uVar3 * 2) * 8;
  if (SUB168(auVar2 * ZEXT816(0x18),8) != 0) {
    __size = 0xffffffffffffffff;
  }
  if (DAT_05ae7600 == 0) {
    pvVar5 = malloc(__size);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar1 = (undefined8 *)(lVar6 + 8);
      if (lVar4 != 0) {
        puVar1 = (undefined8 *)(lVar4 + 0xa8);
      }
      param_2 = (long *)*puVar1;
      if (param_2 == (long *)0x0) {
        pvVar5 = (void *)0x0;
        goto LAB_039f9fc8;
      }
    }
    pvVar5 = (void *)(**(code **)(*param_2 + 0x30))(param_2,__size,8);
  }
LAB_039f9fc8:
  *(void **)(param_1 + 0x248) = pvVar5;
  if (0 < (int)uVar3) {
    lVar6 = 0;
    do {
      *(undefined8 *)(*(long *)(param_1 + 0x248) + lVar6) = 0;
      *(undefined8 *)(*(long *)(param_1 + 0x248) + lVar6 + 8) = 0;
      lVar4 = *(long *)(param_1 + 0x248) + lVar6;
      lVar6 = lVar6 + 0x18;
      *(undefined1 *)(lVar4 + 0x10) = 0xff;
    } while ((ulong)uVar3 * 0x18 != lVar6);
  }
  return;
}


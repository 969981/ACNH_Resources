
void FUN_0390e230(undefined8 *param_1)

{
  ulong uVar1;
  int iVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  void *__ptr;
  
  param_1[3] = 0;
  *param_1 = &PTR_FUN_04b65f38;
  param_1[1] = 0;
  iVar2 = *(int *)(param_1 + 0x21);
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1f] = 0;
  if (iVar2 != 0) {
    lVar5 = param_1[0x22];
    uVar6 = 0;
    do {
      *(undefined8 *)(lVar5 + (-(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar6 << 3)) = 0;
      uVar1 = uVar6 + 1;
      uVar6 = uVar1 & 0xffffffff;
    } while (iVar2 != (int)uVar1);
  }
  bVar3 = *(byte *)(param_1 + 0x23);
  *(byte *)(param_1 + 0x23) = bVar3 & 0xfe;
  if ((bVar3 >> 1 & 1) != 0) {
    __ptr = (void *)param_1[0x22];
    if (__ptr != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(__ptr);
      }
      else {
        plVar4 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
        }
      }
      param_1[0x22] = 0;
      *(undefined4 *)(param_1 + 0x21) = 0;
    }
    *(undefined1 *)(param_1 + 0x23) = 0;
  }
  return;
}


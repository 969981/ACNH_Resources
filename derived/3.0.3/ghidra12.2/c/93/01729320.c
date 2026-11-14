
void FUN_01729320(long *param_1,void *param_2,undefined4 *param_3,undefined4 param_4)

{
  void *__dest;
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  
  *(undefined1 *)((long)param_1 + 0x33) = 0;
  __dest = (void *)((long)param_1 + 0x14);
  *(undefined4 *)(param_1 + 2) = 0x20;
  *param_1 = (long)(PTR_DAT_04bb2a08 + 0x10);
  param_1[1] = (long)__dest;
  if (__dest != param_2) {
    lVar5 = 0;
    do {
      if (*(char *)((long)param_2 + lVar5) == '\0') {
LAB_017293a8:
        iVar4 = (int)lVar5;
joined_r0x017293ac:
        if (0x1f < iVar4) {
          iVar4 = 0x1f;
        }
        goto LAB_017293b4;
      }
      if (*(char *)((long)param_2 + lVar5 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_017293a8;
      }
      if (*(char *)((long)param_2 + lVar5 + 2) == '\0') {
        iVar4 = (int)lVar5 + 2;
        goto joined_r0x017293ac;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    iVar4 = 0;
LAB_017293b4:
    memcpy(__dest,param_2,(long)iVar4);
    *(undefined1 *)((long)__dest + (long)iVar4) = 0;
  }
  puVar3 = PTR_DAT_04bb37e0;
  puVar2 = PTR_DAT_04bb2028;
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  uVar1 = *param_3;
  *(undefined4 *)((long)param_1 + 0x4c) = param_4;
  *(undefined4 *)((long)param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  uVar1 = *(undefined4 *)(puVar3 + 4);
  *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)puVar3;
  *(undefined4 *)(param_1 + 9) = uVar1;
  return;
}


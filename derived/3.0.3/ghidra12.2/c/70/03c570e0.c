
void FUN_03c570e0(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  int *piVar6;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return;
  }
  lVar4 = FUN_03c4c750(*(undefined8 *)PTR_DAT_04bb28d0);
  *(long *)(param_1 + 0x18) = lVar4;
  lVar3 = DAT_05ae7600;
  if ((((lVar4 != 0) && (piVar6 = *(int **)(lVar4 + 8), piVar6 != (int *)0x0)) &&
      (*piVar6 == 0x4c535241)) &&
     ((((char)(*(ushort *)(piVar6 + 1) >> 8) != -1 || ((*(ushort *)(piVar6 + 1) & 0xff) != 0xfe)) &&
      ((*(short *)((long)piVar6 + 6) == 1 && (iVar2 = piVar6[3], 0 < iVar2)))))) {
    if (DAT_05ae7600 == 0) {
      pvVar5 = malloc((long)iVar2 << 3);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar1 = (undefined8 *)(lVar3 + 8);
        if (lVar4 != 0) {
          puVar1 = (undefined8 *)(lVar4 + 0xa8);
        }
        param_3 = (long *)*puVar1;
        if (param_3 == (long *)0x0) {
          return;
        }
      }
      pvVar5 = (void *)(**(code **)(*param_3 + 0x30))(param_3,(long)iVar2 << 3,8);
    }
    if (pvVar5 != (void *)0x0) {
      *(void **)(param_1 + 0x10) = pvVar5;
      *(undefined4 *)(param_1 + 8) = 0;
      *(int *)(param_1 + 0xc) = iVar2;
    }
  }
  return;
}


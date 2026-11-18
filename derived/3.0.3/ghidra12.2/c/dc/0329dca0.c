
/* WARNING: Removing unreachable block (ram,0x0329dcd4) */

void FUN_0329dca0(long *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  
  iVar2 = (**(code **)(*param_1 + 0x70))();
  lVar1 = DAT_05ae7600;
  if (0 < iVar2) {
    if (DAT_05ae7600 == 0) {
      pvVar4 = malloc((long)(iVar2 << 3));
    }
    else {
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_2 = (long *)(lVar1 + 8);
        if (lVar3 != 0) {
          param_2 = (long *)(lVar3 + 0xa8);
        }
        param_2 = (long *)*param_2;
        if (param_2 == (long *)0x0) goto LAB_0329dd50;
      }
      pvVar4 = (void *)(**(code **)(*param_2 + 0x30))(param_2,(long)(iVar2 << 3),8);
    }
    if (pvVar4 != (void *)0x0) {
      param_1[2] = (long)pvVar4;
      *(undefined4 *)(param_1 + 1) = 0;
      *(int *)((long)param_1 + 0xc) = iVar2;
    }
  }
LAB_0329dd50:
                    /* WARNING: Could not recover jumptable at 0x0329dd6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1);
  return;
}


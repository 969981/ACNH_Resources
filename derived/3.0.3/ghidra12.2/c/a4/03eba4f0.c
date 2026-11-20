
void FUN_03eba4f0(undefined4 *param_1,undefined8 param_2,undefined8 *param_3,uint *param_4,
                 long *param_5,int param_6,int param_7,uint param_8)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  
  iVar3 = FUN_038cd970(param_1[1]);
  if (param_7 < 0x21) {
    param_7 = 0x20;
  }
  uVar1 = (param_7 + iVar3) - 1U & -param_7;
  *param_4 = uVar1;
  iVar3 = FUN_038cd970(param_1[2]);
  if (iVar3 != 0) {
    param_6 = iVar3;
  }
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    pvVar6 = malloc((ulong)uVar1);
  }
  else {
    if (param_5 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar2 = (undefined8 *)(lVar7 + 8);
      if (lVar5 != 0) {
        puVar2 = (undefined8 *)(lVar5 + 0xa8);
      }
      param_5 = (long *)*puVar2;
      if (param_5 == (long *)0x0) {
        pvVar6 = (void *)0x0;
        goto LAB_03eba5c4;
      }
    }
    pvVar6 = (void *)(**(code **)(*param_5 + 0x30))(param_5,(ulong)uVar1,param_6);
  }
LAB_03eba5c4:
  *param_3 = pvVar6;
  iVar3 = FUN_038cd970(*param_1);
  if (((iVar3 == 0x59617a30) && (uVar1 = *param_4, uVar4 = FUN_038cd970(param_1[1]), uVar4 <= uVar1)
      ) && (iVar3 = FUN_003b4e14(pvVar6,param_1), iVar3 < 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  if ((param_8 & 1) == 0) {
    return;
  }
  nn::os::FlushDataCache((void *)*param_3,(ulong)*param_4);
  return;
}


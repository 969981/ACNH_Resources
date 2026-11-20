
void FUN_03eba650(undefined8 param_1,undefined4 param_2,undefined8 *param_3,uint *param_4,
                 ulong param_5,long *param_6,undefined4 param_7,int param_8,byte param_9)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  int iVar7;
  ulong local_88 [2];
  int local_74;
  
  lVar4 = FUN_03c2fb70(local_88,param_1,param_2,0);
  uVar2 = 0;
  if (local_74 != 1) {
    uVar2 = local_88[0];
  }
  if (lVar4 != 0) {
    uVar2 = 0xfffffffffffffffe;
  }
  iVar7 = (int)uVar2;
  if (0xfffffffffffffffd < uVar2) {
    iVar7 = -1;
  }
  if (param_8 < 0x21) {
    param_8 = 0x20;
  }
  uVar1 = (param_8 + iVar7) - 1U & -param_8;
  *param_4 = uVar1;
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    pvVar6 = malloc((ulong)uVar1);
  }
  else {
    if (param_6 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar3 = (undefined8 *)(lVar4 + 8);
      if (lVar5 != 0) {
        puVar3 = (undefined8 *)(lVar5 + 0xa8);
      }
      param_6 = (long *)*puVar3;
      if (param_6 == (long *)0x0) {
        pvVar6 = (void *)0x0;
        goto LAB_03eba754;
      }
    }
    pvVar6 = (void *)(**(code **)(*param_6 + 0x30))(param_6,(ulong)uVar1,param_7);
  }
LAB_03eba754:
  *param_3 = pvVar6;
  if ((param_5 & 7) == 0) {
    uVar1 = *param_4;
    *(undefined8 *)(param_5 + 0x7060) = 0;
    *(undefined4 *)(param_5 + 0x7110) = 0;
    *(undefined8 *)(param_5 + 0x716c) = 0;
    *(undefined4 *)(param_5 + 0x71c8) = 0;
    *(undefined4 *)(param_5 + 0x71d4) = 0;
    *(undefined4 *)(param_5 + 0x7150) = 0;
    *(undefined8 *)(param_5 + 29000) = 0x271f8;
    *(undefined8 *)(param_5 + 0x7190) = 0x8000001;
    *(undefined8 *)(param_5 + 0x71a0) = 0;
    *(undefined8 *)(param_5 + 0x71c0) = 0;
    *(undefined8 *)(param_5 + 0x7158) = 0;
    *(undefined8 *)(param_5 + 0x7160) = 0;
    *(undefined8 *)(param_5 + 0x7180) = 0;
    *(ulong *)(param_5 + 0x7178) = param_5 + 0x271f8;
    FUN_03c31da0(param_5,pvVar6,uVar1,param_1,param_2,0,0,0);
  }
  if ((param_9 & 1) == 0) {
    return;
  }
  nn::os::FlushDataCache((void *)*param_3,(ulong)*param_4);
  return;
}


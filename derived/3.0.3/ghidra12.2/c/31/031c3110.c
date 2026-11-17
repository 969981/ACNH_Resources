
void FUN_031c3110(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  FUN_02bf098c();
  *(undefined4 *)(param_1 + 0xae) = 0;
  *param_1 = &PTR_LAB_04b0a1d8;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  uVar1 = *(uint *)(param_3 + 0xc);
  uVar7 = (ulong)uVar1;
  if ((int)uVar1 < 1) goto LAB_031c3254;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    pvVar4 = malloc(uVar7 << 3);
    if (pvVar4 == (void *)0x0) goto LAB_031c31c4;
LAB_031c31ac:
    *(uint *)(param_1 + 0xae) = uVar1;
    param_1[0xaf] = pvVar4;
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar3 = (long *)(lVar8 + 8);
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0xa8);
    }
    plVar3 = (long *)*plVar3;
    if ((plVar3 != (long *)0x0) &&
       (pvVar4 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,uVar7 << 3,8), pvVar4 != (void *)0x0))
    goto LAB_031c31ac;
LAB_031c31c4:
    uVar7 = (ulong)*(uint *)(param_1 + 0xae);
    if ((int)*(uint *)(param_1 + 0xae) < 1) goto LAB_031c3254;
  }
  plVar3 = param_1 + 0xaf;
  uVar5 = uVar7 & 3;
  if (uVar7 - 1 < 3) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    do {
      lVar8 = uVar6 * 8;
      uVar6 = uVar6 + 4;
      *(undefined8 *)(*plVar3 + lVar8) = 0;
      *(undefined8 *)(*plVar3 + lVar8 + 8) = 0;
      *(undefined8 *)(*plVar3 + lVar8 + 0x10) = 0;
      *(undefined8 *)(*plVar3 + lVar8 + 0x18) = 0;
    } while ((uVar7 & 0xfffffffc) != uVar6);
  }
  if (uVar5 != 0) {
    lVar8 = uVar6 << 3;
    do {
      uVar5 = uVar5 - 1;
      *(undefined8 *)(*plVar3 + lVar8) = 0;
      lVar8 = lVar8 + 8;
    } while (uVar5 != 0);
  }
LAB_031c3254:
  param_1[0xb1] = 0;
  param_1[0xb0] = 0;
  return;
}


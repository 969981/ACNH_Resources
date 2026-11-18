
undefined8 * FUN_03462740(undefined8 param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  (**(code **)(*param_3 + 0x18))(param_3);
  lVar2 = DAT_05ae7600;
  cVar1 = *(char *)param_3[1];
  if (cVar1 == '\0') {
LAB_03462808:
    uVar6 = FUN_0386fd70(param_3);
    lVar2 = DAT_05ae7600;
    if ((uVar6 & 1) == 0) {
      return (undefined8 *)0x0;
    }
    if (DAT_05ae7600 == 0) {
      puVar5 = malloc(0x68);
    }
    else {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar2 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        puVar5 = (undefined8 *)0x0;
      }
      else {
        puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x68,8);
      }
    }
    plVar4 = (long *)PTR_PTR_04bb2238;
  }
  else {
    if (cVar1 != '@') {
      uVar6 = 0;
      do {
        uVar7 = uVar6;
        if ((uVar7 == 0x80000) || (cVar1 = ((char *)param_3[1])[uVar7 + 1], cVar1 == '\0'))
        goto LAB_03462808;
        uVar6 = uVar7 + 1;
      } while (cVar1 != '@');
      if (uVar7 >> 0x13 != 0) goto LAB_03462808;
    }
    if (DAT_05ae7600 == 0) {
      puVar5 = malloc(0x68);
    }
    else {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar2 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        puVar5 = (undefined8 *)0x0;
      }
      else {
        puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x68,8);
      }
    }
    plVar4 = param_3;
    param_3 = (long *)PTR_PTR_04bb2238;
  }
  FUN_03d7dc60(puVar5,param_2,param_1,plVar4,param_3);
  puVar5[0xc] = 0;
  *puVar5 = &PTR_LAB_04aad018;
  return puVar5;
}


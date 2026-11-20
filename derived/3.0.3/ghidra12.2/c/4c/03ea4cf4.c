
undefined8 * FUN_03ea4cf4(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    puVar4 = malloc(0x80);
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar3 = (long *)(lVar6 + 8);
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0xa8);
    }
    plVar3 = (long *)*plVar3;
    if (plVar3 == (long *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x80,8);
    }
  }
  puVar1 = PTR_DAT_04bb2020;
  lVar6 = *param_1;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = puVar1 + 0x10;
  *(undefined1 *)((long)puVar4 + 0x36) = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[5] = &DAT_0419b684;
  FUN_03c5a110(puVar4 + 4,param_2,0xffffffff,0);
  *(undefined1 *)(puVar4 + 10) = 0;
  *(undefined1 *)(puVar4 + 0xd) = 0;
  puVar4[7] = lVar6;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[8] = &PTR_LAB_04b486d8;
  puVar4[9] = 0;
  puVar4[0xb] = &PTR_LAB_04b486d8;
  puVar4[0xc] = 0;
  lVar6 = *param_1;
  plVar3 = (long *)((long)*(int *)(lVar6 + 0x3c) + (long)puVar4);
  plVar5 = (long *)(lVar6 + 0x28);
  lVar2 = *plVar5;
  *plVar5 = (long)plVar3;
  *plVar3 = lVar2;
  plVar3[1] = (long)plVar5;
  if (lVar2 != 0) {
    *(long **)(lVar2 + 8) = plVar3;
  }
  *(int *)(lVar6 + 0x38) = *(int *)(lVar6 + 0x38) + 1;
  return puVar4;
}



undefined8 FUN_029f9200(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "SpaceInfoMgr";
  plVar3 = (long *)FUN_038c9744(0,&local_30,*param_2,8,1,0);
  *(long **)(param_1 + 8) = plVar3;
  lVar2 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar5 = malloc(0x4c08);
  }
  else {
    if (plVar3 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar2 + 8);
      if (lVar4 != 0) {
        plVar3 = (long *)(lVar4 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) goto LAB_029f932c;
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x4c08,8);
  }
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = 0x98;
    puVar1 = PTR_DAT_04bc41d8 + 0x10;
    puVar6 = puVar5 + 1;
    do {
      *(undefined1 *)puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined1 *)(puVar6 + 2) = 0;
      *(undefined8 *)((long)puVar6 + 0x14) = 0xffffffffffffffff;
      puVar6[4] = 0;
      *(undefined4 *)(puVar6 + 5) = 0xfffffff6;
      *(undefined4 *)(puVar6 + 10) = 0;
      puVar6[0xd] = 0xffffffff00000000;
      *(undefined4 *)(puVar6 + 0xe) = 0;
      puVar6[0xf] = 0xffffffffffffffff;
      puVar6[6] = 0;
      puVar6[7] = 0xffffffffffffffff;
      puVar6[8] = puVar1;
      puVar6[9] = 0xffffffff00000000;
      puVar6[0xb] = 0xffffffffffffffff;
      puVar6[0xc] = puVar1;
      puVar6 = puVar6 + 0x10;
    } while (puVar6 != puVar5 + 0x981);
    *(undefined4 *)(param_1 + 0x80) = 0x98;
    *(undefined8 **)(param_1 + 0x88) = puVar5 + 1;
  }
LAB_029f932c:
  FUN_029f9380(param_1);
  *(undefined **)(param_1 + 0x1378) = &DAT_04a99160;
  *(long *)(param_1 + 0x1380) = param_1;
  *(undefined1 **)(param_1 + 5000) = &LAB_029fa040;
  *(undefined8 *)(param_1 + 0x1390) = 0;
  (**(code **)(**(long **)(param_1 + 8) + 0x28))();
  return 1;
}


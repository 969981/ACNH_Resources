
void FUN_03c887f8(int param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *local_30;
  char *pcStack_28;
  
  if (param_1 == 0) {
    return;
  }
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar3 = malloc(0x48);
  }
  else {
    lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar2 = (long *)(lVar5 + 8);
    if (lVar1 != 0) {
      plVar2 = (long *)(lVar1 + 0xa8);
    }
    plVar2 = (long *)*plVar2;
    if (plVar2 == (long *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x48,8);
    }
  }
  *(undefined4 *)(puVar3 + 6) = 0;
  puVar3[1] = puVar3 + 1;
  puVar3[2] = puVar3 + 1;
  puVar3[4] = puVar3 + 4;
  puVar3[5] = puVar3 + 4;
  puVar3[3] = 0;
  *(undefined8 *)((long)puVar3 + 0x34) = 0;
  local_30 = PTR_DAT_04bb2020 + 0x10;
  *(undefined8 *)((long)puVar3 + 0x3c) = 0;
  pcStack_28 = "ContentMessageInitializer";
  uVar4 = FUN_038c6d48(param_1,&local_30,0,8,1,0);
  *puVar3 = uVar4;
  DAT_05aefb18 = puVar3;
  return;
}


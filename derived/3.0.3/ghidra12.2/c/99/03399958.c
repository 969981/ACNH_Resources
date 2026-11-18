
void FUN_03399958(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *local_50;
  char *pcStack_48;
  
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    pvVar4 = malloc(1);
  }
  else {
    plVar3 = param_2;
    if (param_2 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar3 = (long *)(lVar6 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      pvVar4 = (void *)0x0;
      if (plVar3 == (long *)0x0) goto LAB_033999e4;
    }
    pvVar4 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,1,8);
  }
LAB_033999e4:
  puVar1 = PTR_DAT_04bb2020;
  *(void **)(param_1 + 0x40) = pvVar4;
  pcStack_48 = "JpegDecodingWorkHeap";
  local_50 = puVar1 + 0x10;
  uVar5 = FUN_038c6d48(param_3,&local_50,param_2,8,1,0);
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  pcStack_48 = "JpegDecodingTextureHeap";
  local_50 = puVar1 + 0x10;
  uVar5 = FUN_038c6d48(param_4,&local_50,param_2,8,1,0);
  *(undefined8 *)(param_1 + 0x50) = uVar5;
  return;
}


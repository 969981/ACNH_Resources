
void FUN_0343fddc(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined *local_50;
  char *pcStack_48;
  
  *(undefined8 *)(param_1 + 0x50) = *param_2;
  puVar1 = PTR_DAT_04bb2698;
  *(undefined8 *)(param_1 + 0x58) = param_2[1];
  lVar5 = *(long *)puVar1;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
  puVar3 = (undefined8 *)(lVar5 + 8);
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(lVar2 + 0xa8);
  }
  plVar6 = (long *)*puVar3;
  if (plVar6 != (long *)0x0) {
    lVar2 = *(long *)(param_1 + 0x68);
    uVar7 = *(undefined8 *)(param_1 + 0x58);
    if (*(long *)puVar1 == 0) {
      puVar3 = malloc(0x20);
    }
    else {
      puVar3 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x20,8);
    }
    *puVar3 = 0;
    puVar3[1] = 0xffffffff;
    *(undefined4 *)puVar3 = 100;
    puVar3[2] = 0;
    puVar3[3] = 0;
    local_50 = PTR_DAT_04bb2020;
    *(undefined8 **)(lVar2 + 0x40) = puVar3;
    local_50 = local_50 + 0x10;
    pcStack_48 = "JpegEncodingWorkHeap";
    uVar7 = FUN_038c6d48(uVar7,&local_50,plVar6,8,1,0);
    *(undefined8 *)(lVar2 + 0x48) = uVar7;
    if (*(long *)puVar1 == 0) {
      pvVar4 = malloc(*(size_t *)(param_1 + 0x50));
    }
    else {
      pvVar4 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,*(size_t *)(param_1 + 0x50),8);
    }
    *(void **)(param_1 + 0x70) = pvVar4;
  }
  return;
}



void FUN_03d6c09c(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    plVar4 = malloc(0x90);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    puVar1 = (undefined8 *)(lVar5 + 8);
    if (lVar3 != 0) {
      puVar1 = (undefined8 *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x90,8);
  }
  lVar5 = *(long *)(param_1 + 8);
  *(undefined1 *)((long)plVar4 + 0x4c) = 0;
  plVar4[2] = 0;
  plVar4[3] = 0;
  puVar2 = PTR_DAT_04bd4670;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[8] = (long)plVar4 + 0x4c;
  *(undefined1 *)((long)plVar4 + 0x8b) = 0;
  *plVar4 = (long)(puVar2 + 0x10);
  plVar4[1] = lVar5;
  *(undefined4 *)(plVar4 + 9) = 0x40;
  plVar4[6] = 0;
  plVar4[7] = (long)&PTR_LAB_048fb9f8;
  return;
}


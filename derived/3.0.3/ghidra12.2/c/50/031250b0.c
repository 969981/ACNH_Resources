
void FUN_031250b0(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  
  FUN_03c5cce8(param_1,param_2,0);
  puVar1 = PTR_DAT_04bd45f0;
  param_1[0x3e] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  if (param_3 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(char *)(param_3 + 0x28) != '\0';
  }
  *(bool *)(param_1 + 0x3f) = bVar3;
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    pvVar5 = malloc(0x18);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar2 = (undefined8 *)(lVar6 + 8);
    if (lVar4 != 0) {
      puVar2 = (undefined8 *)(lVar4 + 0xa8);
    }
    pvVar5 = (void *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,0x18,8);
  }
  *(undefined4 *)((long)pvVar5 + 0x10) = 0;
  *(void **)pvVar5 = pvVar5;
  *(void **)((long)pvVar5 + 8) = pvVar5;
  param_1[0x3b] = (long)pvVar5;
  *(undefined4 *)((long)pvVar5 + 0x14) = 8;
  *param_1 = (long)&PTR_FUN_04b02188;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 1;
  param_1[0x4c] = 0;
  puVar1 = PTR_DAT_04bc9c70 + 0x10;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x4e] = (long)puVar1;
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined1 *)((long)param_1 + 0x29c) = 1;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  *(undefined8 *)((long)param_1 + 0x294) = 0;
  return;
}


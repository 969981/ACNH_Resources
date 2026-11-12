
void FUN_0079b968(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR_DAT_04bb2698;
  if (lVar3 == 0) {
    puVar2 = malloc(0x20);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_3 = (long *)(lVar3 + 8);
      if (lVar1 != 0) {
        param_3 = (long *)(lVar1 + 0xa8);
      }
      param_3 = (long *)*param_3;
    }
    puVar2 = (undefined8 *)(**(code **)(*param_3 + 0x30))(param_3,0x20,8);
  }
  *(undefined4 *)(puVar2 + 3) = 0;
  *puVar2 = 0;
  *(undefined2 *)((long)puVar2 + 0x1c) = 0xffff;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *(undefined8 **)(param_1 + 0x370) = puVar2;
  return;
}


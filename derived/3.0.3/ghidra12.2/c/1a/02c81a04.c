
void FUN_02c81a04(long param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar2 = malloc(0x18);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_2 = (long *)(lVar4 + 8);
      if (lVar1 != 0) {
        param_2 = (long *)(lVar1 + 0xa8);
      }
      param_2 = (long *)*param_2;
    }
    puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0x18,8);
  }
  *puVar2 = &PTR_FUN_04ab2e00;
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  bVar3 = *(byte *)(param_1 + 0x10);
  if (7 < bVar3) {
    bVar3 = 0xff;
  }
  *(byte *)(puVar2 + 2) = bVar3;
  return;
}



void FUN_03d5c3d8(long param_1,long *param_2,ulong param_3,byte param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  
  if (param_2 == (long *)0x0) {
    lVar1 = *(long *)PTR_DAT_04bb2698;
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    param_2 = (long *)(lVar1 + 8);
    if (lVar3 != 0) {
      param_2 = (long *)(lVar3 + 0xa8);
    }
    param_2 = (long *)*param_2;
    *(long **)(param_1 + 0x48) = param_2;
  }
  else {
    *(long **)(param_1 + 0x48) = param_2;
  }
  if ((param_3 & 1) == 0) {
    puVar2 = *(undefined1 **)(*(long *)PTR_DAT_04bb2718 + 0x508);
    goto LAB_03d5c4e4;
  }
  lVar3 = *(long *)PTR_DAT_04bb2698;
  if (lVar3 == 0) {
    puVar2 = malloc(0x80);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      param_2 = (long *)(lVar3 + 8);
      if (lVar1 != 0) {
        param_2 = (long *)(lVar1 + 0xa8);
      }
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) {
        puVar2 = (undefined1 *)0x0;
        goto LAB_03d5c4b8;
      }
    }
    puVar2 = (undefined1 *)(**(code **)(*param_2 + 0x30))(param_2,0x80,8);
  }
LAB_03d5c4b8:
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *puVar2 = 1;
  *(undefined1 **)(puVar2 + 8) = puVar2 + 8;
  *(undefined1 **)(puVar2 + 0x10) = puVar2 + 8;
  *(undefined1 **)(puVar2 + 0x28) = puVar2 + 0x20;
  *(undefined8 *)(puVar2 + 0x30) = 0x800000000;
  *(undefined8 *)(puVar2 + 0x18) = 0x800000000;
  *(undefined1 **)(puVar2 + 0x20) = puVar2 + 0x20;
  FUN_038e18e4(puVar2 + 0x40);
LAB_03d5c4e4:
  *(undefined1 **)(param_1 + 0x90) = puVar2;
  *(byte *)(param_1 + 0x70) = param_4 & 1;
  return;
}


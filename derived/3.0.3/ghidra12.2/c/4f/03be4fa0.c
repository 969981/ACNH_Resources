
void FUN_03be4fa0(long param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR_DAT_04bb2698;
  if (lVar3 == 0) {
    puVar2 = malloc(0xe8);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_2 = (long *)(lVar3 + 8);
      if (lVar1 != 0) {
        param_2 = (long *)(lVar1 + 0xa8);
      }
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) {
        puVar2 = (undefined8 *)0x0;
        goto LAB_03be5020;
      }
    }
    puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0xe8,8);
  }
LAB_03be5020:
  puVar2[0xe] = 0;
  *(undefined4 *)(puVar2 + 0xf) = 0;
  puVar2[0x10] = 0;
  *(undefined4 *)(puVar2 + 0x11) = 0;
  *(undefined8 *)((long)puVar2 + 0xcc) = 0x3f800000ffffffff;
  *(undefined4 *)(puVar2 + 6) = 0;
  *(undefined4 *)(puVar2 + 0xd) = 0;
  *(undefined1 *)(puVar2 + 0x16) = 0;
  *(undefined4 *)(puVar2 + 0x19) = 0;
  *(undefined1 *)((long)puVar2 + 0xd4) = 0;
  puVar2[0x1b] = 0xbf800000;
  puVar2[0x1c] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  puVar2[0x17] = 0;
  puVar2[0x18] = 0;
  puVar2[0x14] = 0;
  puVar2[0x15] = param_1 + 0x28;
  return;
}


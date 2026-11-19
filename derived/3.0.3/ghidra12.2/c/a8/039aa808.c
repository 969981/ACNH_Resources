
undefined8 * FUN_039aa808(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *in_x6;
  long lVar3;
  
  lVar3 = *(long *)PTR_DAT_04bb2698;
  if (lVar3 == 0) {
    puVar2 = malloc(0xf8);
  }
  else {
    if (in_x6 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      in_x6 = (long *)(lVar3 + 8);
      if (lVar1 != 0) {
        in_x6 = (long *)(lVar1 + 0xa8);
      }
      in_x6 = (long *)*in_x6;
    }
    puVar2 = (undefined8 *)(**(code **)(*in_x6 + 0x30))(in_x6,0xf8,8);
  }
  *(undefined4 *)(puVar2 + 1) = 0;
  puVar2[8] = 0;
  *puVar2 = &PTR_FUN_04b6a460;
  *(undefined4 *)(puVar2 + 9) = 0;
  puVar2[10] = 0;
  *(undefined4 *)(puVar2 + 0xb) = 0;
  puVar2[0xf] = 0;
  *(undefined4 *)(puVar2 + 0x10) = 0;
  puVar2[0x11] = 0;
  *(undefined4 *)(puVar2 + 0x12) = 0;
  *(undefined4 *)(puVar2 + 0x16) = 0;
  puVar2[0x1e] = 0;
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 7) = 0;
  *(undefined4 *)(puVar2 + 0xe) = 0;
  *(undefined4 *)(puVar2 + 0x15) = 0;
  *(undefined8 *)((long)puVar2 + 0xe6) = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0x13] = 0;
  puVar2[0x14] = 0;
  puVar2[0x1b] = 0;
  puVar2[0x1c] = 0;
  puVar2[0x19] = 0;
  puVar2[0x1a] = 0;
  puVar2[0x17] = 0;
  puVar2[0x18] = 0;
  FUN_039aa950(puVar2,param_1);
  return puVar2;
}


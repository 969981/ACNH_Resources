
void FUN_01739fc0(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  
  FUN_006f94c0();
  *param_1 = &PTR_LAB_049bfd98;
  lVar2 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar4 = malloc(0x78);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar1 = (undefined8 *)(lVar2 + 8);
      if (lVar3 != 0) {
        puVar1 = (undefined8 *)(lVar3 + 0xa8);
      }
      param_3 = (long *)*puVar1;
      if (param_3 == (long *)0x0) {
        puVar4 = (undefined4 *)0x0;
        goto LAB_0173a054;
      }
    }
    puVar4 = (undefined4 *)(**(code **)(*param_3 + 0x30))(param_3,0x78,8);
  }
LAB_0173a054:
  *(undefined8 *)(puVar4 + 0x15) = 0;
  *(undefined2 *)(puVar4 + 1) = 0xffff;
  *puVar4 = 0xffffffff;
  *(undefined2 *)(puVar4 + 3) = 0xffff;
  puVar4[2] = 0xffffffff;
  *(undefined2 *)(puVar4 + 5) = 0xffff;
  puVar4[4] = 0xffffffff;
  *(undefined2 *)(puVar4 + 7) = 0xffff;
  puVar4[6] = 0xffffffff;
  *(undefined2 *)(puVar4 + 9) = 0xffff;
  puVar4[8] = 0xffffffff;
  *(undefined2 *)(puVar4 + 0xb) = 0xffff;
  puVar4[10] = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x32) = 0xffffffff;
  *(undefined2 *)(puVar4 + 0xc) = 0xffff;
  *(undefined4 *)((long)puVar4 + 0x3a) = 0xffffffff;
  *(undefined2 *)(puVar4 + 0xe) = 0xffff;
  *(undefined2 *)(puVar4 + 0x11) = 0xffff;
  puVar4[0x10] = 0xffffffff;
  *(undefined2 *)(puVar4 + 0x13) = 0xffff;
  puVar4[0x12] = 0xffffffff;
  puVar4[0x14] = 0xffffffff;
  *(undefined8 *)(puVar4 + 0x17) = 0;
  *(undefined8 *)(puVar4 + 0x19) = 0;
  *(undefined8 *)(puVar4 + 0x1b) = 0;
  param_1[0x4f] = puVar4;
  *(undefined2 *)(param_1 + 0x50) = 0;
  *(undefined4 *)((long)param_1 + 0x284) = 0;
  return;
}


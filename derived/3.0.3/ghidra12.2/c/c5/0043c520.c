
void FUN_0043c520(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  plVar1 = (long *)FUN_0043c5f0();
  uVar2 = (**(code **)(*plVar1 + 0x60))();
  puVar3 = (undefined8 *)FUN_00438a70(uVar2,0x80);
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  nn::os::SetTlsValue(DAT_04c6f1a4,puVar3);
  return;
}


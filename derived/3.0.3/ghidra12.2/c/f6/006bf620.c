
void FUN_006bf620(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  lVar1 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar4 = malloc(0x48);
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar3 = (long *)(lVar1 + 8);
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0xa8);
    }
    plVar3 = (long *)*plVar3;
    puVar4 = (undefined8 *)0x0;
    if (plVar3 != (long *)0x0) {
      puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x48,8);
    }
  }
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[8] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  *puVar4 = &PTR_LAB_04a5a8d0;
  puVar4[1] = 0;
  return;
}


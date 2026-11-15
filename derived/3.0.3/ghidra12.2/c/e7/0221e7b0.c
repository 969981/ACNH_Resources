
undefined8 * FUN_0221e7b0(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar4 = malloc(0x418);
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar3 = (long *)(lVar5 + 8);
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0xa8);
    }
    plVar3 = (long *)*plVar3;
    if (plVar3 == (long *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x418,8);
    }
  }
  FUN_02249440(puVar4,param_1,param_2);
  *(undefined1 *)(puVar4 + 0x80) = 0;
  *puVar4 = &PTR_LAB_04a77490;
  if ((puVar4[0x81] != 0) && (pcVar1 = (char *)(puVar4[0x81] + 0x5074), *pcVar1 != '\0')) {
    *pcVar1 = '\0';
  }
  return puVar4;
}


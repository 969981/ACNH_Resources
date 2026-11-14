
undefined8 * FUN_01c70c70(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  lVar3 = DAT_05ae7600;
  if (DAT_04c487d4 == -1) {
    return (undefined8 *)0x0;
  }
  puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
  if (0xff < (uint)(int)DAT_04c487d4) {
    puVar1 = PTR_DAT_04bc39f8;
  }
  if ((*(uint *)(puVar1 + 4) & 1) == 0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    if (DAT_05ae7600 == 0) {
      puVar6 = malloc(0x28);
    }
    else {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar3 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      puVar6 = (undefined8 *)0x0;
      if (plVar5 != (long *)0x0) {
        puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x28,8);
      }
    }
    uVar2 = DAT_05351250;
    *(undefined1 *)(puVar6 + 1) = 0;
    *puVar6 = &PTR_LAB_04a43080;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = uVar2;
  }
  return puVar6;
}


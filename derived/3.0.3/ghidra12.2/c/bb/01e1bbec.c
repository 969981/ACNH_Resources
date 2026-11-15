
undefined8 * FUN_01e1bbec(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_0538b8e8 != (undefined8 *)0x0) {
    return DAT_0538b8e8;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x160);
  }
  else {
    plVar2 = param_1;
    if (param_1 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar2 = (long *)(lVar4 + 8);
      if (lVar1 != 0) {
        plVar2 = (long *)(lVar1 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) {
        puVar3 = (undefined8 *)0x0;
        goto LAB_01e1bc74;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x160,8);
  }
LAB_01e1bc74:
  FUN_038c69f0(puVar3 + 0x28,param_1,3);
  DAT_0538b8e0 = puVar3 + 0x28;
  puVar3[0x28] = &PTR_FUN_04a5cdf8;
  puVar3[2] = 0xffffffff;
  puVar3[3] = 0xffffffff;
  puVar3[4] = 0xffffffff;
  *(undefined2 *)(puVar3 + 5) = 0;
  *(undefined4 *)(puVar3 + 6) = 0;
  puVar3[7] = 0;
  *(undefined4 *)(puVar3 + 8) = 0;
  puVar3[9] = 0;
  *(undefined4 *)(puVar3 + 10) = 0xffffffff;
  *puVar3 = &PTR_LAB_04a5ce18;
  puVar3[1] = &PTR_LAB_04ba4ef0;
  *(undefined1 *)((long)puVar3 + 0x74) = 0;
  puVar3[0xd] = (undefined1 *)((long)puVar3 + 0x74);
  *(undefined4 *)(puVar3 + 0xe) = 0x20;
  *(undefined1 *)((long)puVar3 + 0x93) = 0;
  *(undefined2 *)(puVar3 + 0x13) = 0;
  *(undefined4 *)((long)puVar3 + 0x9c) = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = &PTR_LAB_048f9700;
  puVar3[0x14] = &PTR_LAB_04a5ce38;
  *(undefined4 *)(puVar3 + 0x23) = 0;
  puVar3[0x20] = &PTR_LAB_04a5ce60;
  *(undefined4 *)(puVar3 + 0x27) = 0;
  puVar3[0x24] = &PTR_LAB_04a5ce60;
  DAT_0538b8e8 = puVar3;
  puVar3[0x18] = &PTR_FUN_048fc6e0;
  puVar3[0x1c] = &PTR_FUN_048fc6e0;
  puVar3[0x21] = puVar3 + 0x21;
  puVar3[0x22] = puVar3 + 0x21;
  puVar3[0x25] = puVar3 + 0x25;
  puVar3[0x26] = puVar3 + 0x25;
  return puVar3;
}


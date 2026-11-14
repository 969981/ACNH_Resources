
undefined8 * FUN_01dd80cc(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_05382990 != (undefined8 *)0x0) {
    return DAT_05382990;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x168);
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
        goto LAB_01dd8154;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x168,8);
  }
LAB_01dd8154:
  FUN_038c69f0(puVar3 + 0x29,param_1,3);
  DAT_05382978 = puVar3 + 0x29;
  *puVar3 = &PTR_LAB_04a5ba10;
  puVar3[1] = 0;
  puVar3[4] = 0;
  puVar3[5] = &PTR_LAB_04a5ba60;
  puVar3[8] = 0;
  *(undefined4 *)(puVar3 + 9) = 0;
  puVar3[10] = 0;
  *(undefined1 *)(puVar3 + 0xb) = 0xff;
  *(undefined4 *)(puVar3 + 0xd) = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[0xe] = PTR_DAT_04bb3950 + 0x10;
  *(undefined1 *)(puVar3 + 0x14) = 0;
  puVar3[0x19] = 0;
  *(undefined1 *)(puVar3 + 0x1a) = 0;
  *(undefined2 *)(puVar3 + 0x24) = 0;
  *(undefined4 *)(puVar3 + 0x25) = 0;
  puVar3[0x26] = 0;
  *(undefined4 *)(puVar3 + 0x27) = 0;
  DAT_05382990 = puVar3;
  puVar3[0x1d] = 0;
  puVar3[0x1e] = 0;
  puVar3[0x1b] = 0;
  puVar3[0x1c] = 0;
  puVar3[0x15] = 0;
  puVar3[0x16] = 0;
  puVar3[0x1f] = 0;
  puVar3[0x20] = &PTR_LAB_04ba4ef0;
  *(undefined4 *)(puVar3 + 0x12) = 0xffffffff;
  *(undefined4 *)((long)puVar3 + 0x94) = 0;
  puVar3[0x23] = 0xffffffff;
  puVar3[0x17] = 0;
  puVar3[0x18] = 0;
  puVar3[0x21] = 0xffffffff;
  puVar3[0x22] = 0xffffffff;
  puVar3[0x28] = 0;
  puVar3[0x29] = &PTR_FUN_04a5b9f0;
  return puVar3;
}


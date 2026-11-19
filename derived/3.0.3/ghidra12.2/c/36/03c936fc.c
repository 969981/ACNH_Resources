
long * FUN_03c936fc(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  char cVar2;
  long *plVar3;
  undefined **ppuVar4;
  
  cVar2 = *(char *)(param_1 + 0xf8);
  plVar3 = (long *)FUN_00367b14(0x290,0x10);
  if (cVar2 == '\0') {
    if (plVar3 == (long *)0x0) {
      return (long *)0x0;
    }
    FUN_0037bb50(plVar3);
    *plVar3 = (long)(PTR_DAT_04bd0890 + 0x10);
    plVar3[4] = (long)(plVar3 + 4);
    plVar3[5] = (long)(plVar3 + 4);
    FUN_0037ca20(plVar3,param_2,0,0,0);
    puVar1 = PTR_DAT_04bd1c18;
    *(undefined1 *)(plVar3 + 0x1d) = 0;
    plVar3[0x1e] = 0;
    plVar3[0x1f] = 0;
    plVar3[0x1b] = (long)(plVar3 + 0x1b);
    plVar3[0x1c] = (long)(plVar3 + 0x1b);
    *plVar3 = (long)(puVar1 + 0x10);
    *(undefined4 *)(plVar3 + 0x22) = 0;
    plVar3[0x20] = (long)&PTR_LAB_04b17408;
    plVar3[0x21] = -1;
    plVar3[0x29] = 0;
    plVar3[0x2a] = 0;
    plVar3[0x2b] = 0;
    plVar3[0x2c] = 0;
    plVar3[0x41] = 0;
    plVar3[0x2d] = 0;
    plVar3[0x2e] = 0;
    plVar3[0x2f] = 0;
    plVar3[0x30] = 0;
    plVar3[0x42] = 0;
    plVar3[0x43] = 0;
    plVar3[0x3a] = 0;
    plVar3[0x3b] = 0;
    plVar3[0x38] = 0;
    plVar3[0x39] = 0;
    plVar3[0x36] = 0;
    plVar3[0x37] = 0;
    plVar3[0x34] = 0;
    plVar3[0x35] = 0;
    plVar3[0x32] = 0;
    plVar3[0x33] = 0;
    plVar3[0x3d] = 0;
    plVar3[0x3e] = 0;
    plVar3[0x3f] = 0;
    plVar3[0x40] = 0;
    plVar3[0x23] = 0;
    plVar3[0x24] = (long)&PTR_FUN_04b65d70;
    plVar3[0x25] = (long)&DAT_3f8000003f800000;
    plVar3[0x26] = 0;
    plVar3[0x27] = (long)&DAT_3f8000003f800000;
    plVar3[0x28] = 0;
    *(undefined4 *)(plVar3 + 0x3c) = 0xffffffff;
    plVar3[0x44] = (long)"agl::TextureData";
    *(undefined4 *)(plVar3 + 0x45) = 0x10000;
    *(undefined4 *)(plVar3 + 0x48) = 0xff;
    *(undefined4 *)((long)plVar3 + 0x244) = 0;
    puVar1 = PTR_DAT_04bd1198 + 0x10;
    plVar3[0x4c] = 0;
    plVar3[0x4b] = 0;
    plVar3[0x4a] = 0;
    plVar3[0x31] = (long)puVar1;
    plVar3[0x49] = 0x80000000000;
    FUN_03b2c350(plVar3,param_3);
    plVar3[0x4f] = 0;
    plVar3[0x4e] = 0;
    *(long **)((long)plVar3 + 0xc9) = plVar3 + 0x4d;
    *plVar3 = (long)&PTR_LAB_04b85b38;
    ppuVar4 = &PTR_LAB_04b85c48;
    plVar3[0x50] = param_2 + 0x268;
  }
  else {
    if (plVar3 == (long *)0x0) {
      return (long *)0x0;
    }
    FUN_0037bb50(plVar3);
    *plVar3 = (long)(PTR_DAT_04bd0890 + 0x10);
    plVar3[4] = (long)(plVar3 + 4);
    plVar3[5] = (long)(plVar3 + 4);
    FUN_0037ca20(plVar3,param_2,0,0,0);
    puVar1 = PTR_DAT_04bd1c18;
    *(undefined1 *)(plVar3 + 0x1d) = 0;
    plVar3[0x1e] = 0;
    plVar3[0x1f] = 0;
    plVar3[0x1b] = (long)(plVar3 + 0x1b);
    plVar3[0x1c] = (long)(plVar3 + 0x1b);
    *plVar3 = (long)(puVar1 + 0x10);
    *(undefined4 *)(plVar3 + 0x22) = 0;
    plVar3[0x20] = (long)&PTR_LAB_04b17408;
    plVar3[0x21] = -1;
    plVar3[0x29] = 0;
    plVar3[0x2a] = 0;
    plVar3[0x2b] = 0;
    plVar3[0x2c] = 0;
    plVar3[0x41] = 0;
    plVar3[0x2d] = 0;
    plVar3[0x2e] = 0;
    plVar3[0x2f] = 0;
    plVar3[0x30] = 0;
    plVar3[0x42] = 0;
    plVar3[0x43] = 0;
    plVar3[0x3a] = 0;
    plVar3[0x3b] = 0;
    plVar3[0x38] = 0;
    plVar3[0x39] = 0;
    plVar3[0x36] = 0;
    plVar3[0x37] = 0;
    plVar3[0x34] = 0;
    plVar3[0x35] = 0;
    plVar3[0x32] = 0;
    plVar3[0x33] = 0;
    plVar3[0x3d] = 0;
    plVar3[0x3e] = 0;
    plVar3[0x3f] = 0;
    plVar3[0x40] = 0;
    plVar3[0x23] = 0;
    plVar3[0x24] = (long)&PTR_FUN_04b65d70;
    plVar3[0x25] = (long)&DAT_3f8000003f800000;
    plVar3[0x26] = 0;
    plVar3[0x27] = (long)&DAT_3f8000003f800000;
    plVar3[0x28] = 0;
    *(undefined4 *)(plVar3 + 0x3c) = 0xffffffff;
    plVar3[0x44] = (long)"agl::TextureData";
    *(undefined4 *)(plVar3 + 0x45) = 0x10000;
    *(undefined4 *)(plVar3 + 0x48) = 0xff;
    *(undefined4 *)((long)plVar3 + 0x244) = 0;
    puVar1 = PTR_DAT_04bd1198 + 0x10;
    plVar3[0x4c] = 0;
    plVar3[0x4b] = 0;
    plVar3[0x4a] = 0;
    plVar3[0x31] = (long)puVar1;
    plVar3[0x49] = 0x80000000000;
    FUN_03b2c350(plVar3,param_3);
    plVar3[0x4f] = 0;
    plVar3[0x4e] = 0;
    *(long **)((long)plVar3 + 0xc9) = plVar3 + 0x4d;
    plVar3[0x50] = param_2 + 0x268;
    *plVar3 = (long)&PTR_LAB_04b859c8;
    ppuVar4 = &PTR_LAB_04b85ae0;
  }
  plVar3[0x4d] = (long)ppuVar4;
  return plVar3;
}


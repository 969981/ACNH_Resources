
long * FUN_03c9e25c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  long *plVar2;
  undefined *puVar3;
  
  cVar1 = *(char *)(param_1 + 0xf8);
  plVar2 = (long *)FUN_00367b14(0x200,0x10);
  if (cVar1 == '\0') {
    if (plVar2 == (long *)0x0) {
      return (long *)0x0;
    }
    FUN_00382d30(plVar2,&DAT_05aeac90,*(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x48),param_2,
                 param_3,param_4);
    plVar2[0x28] = 0;
    plVar2[0x29] = 0;
    *(undefined4 *)(plVar2 + 0x2a) = 0xffffffff;
    *(undefined4 *)(plVar2 + 0x34) = 0;
    plVar2[0x35] = 0;
    *(undefined4 *)(plVar2 + 0x36) = 0;
    plVar2[0x37] = 0;
    *(undefined4 *)(plVar2 + 0x38) = 0;
    plVar2[0x39] = 0;
    *(undefined1 *)(plVar2 + 0x3a) = 0;
    plVar2[0x31] = 0;
    plVar2[0x32] = (long)"agl::TextureData";
    *(undefined4 *)(plVar2 + 0x33) = 0x10000;
    plVar2[0x26] = 0;
    plVar2[0x27] = 0;
    plVar2[0x24] = 0;
    plVar2[0x25] = 0;
    plVar2[0x22] = 0;
    plVar2[0x23] = 0;
    plVar2[0x20] = 0;
    plVar2[0x21] = 0;
    plVar2[0x2b] = 0;
    plVar2[0x2c] = 0;
    plVar2[0x2d] = 0;
    plVar2[0x2e] = 0;
    plVar2[0x2f] = 0;
    plVar2[0x30] = 0;
    plVar2[0x3d] = 0;
    plVar2[0x3e] = 0;
    puVar3 = PTR_DAT_04bd41b8;
    *(long **)((long)plVar2 + 0xc9) = plVar2 + 0x3b;
    *plVar2 = (long)(puVar3 + 0x10);
    puVar3 = puVar3 + 0x128;
  }
  else {
    if (plVar2 == (long *)0x0) {
      return (long *)0x0;
    }
    FUN_00382d30(plVar2,&DAT_05aeac90,*(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x48),param_2,
                 param_3,param_4);
    plVar2[0x28] = 0;
    plVar2[0x29] = 0;
    *(undefined4 *)(plVar2 + 0x2a) = 0xffffffff;
    *(undefined4 *)(plVar2 + 0x34) = 0;
    plVar2[0x35] = 0;
    *(undefined4 *)(plVar2 + 0x36) = 0;
    plVar2[0x37] = 0;
    *(undefined4 *)(plVar2 + 0x38) = 0;
    plVar2[0x39] = 0;
    *(undefined1 *)(plVar2 + 0x3a) = 0;
    plVar2[0x31] = 0;
    plVar2[0x32] = (long)"agl::TextureData";
    *(undefined4 *)(plVar2 + 0x33) = 0x10000;
    plVar2[0x26] = 0;
    plVar2[0x27] = 0;
    plVar2[0x24] = 0;
    plVar2[0x25] = 0;
    plVar2[0x22] = 0;
    plVar2[0x23] = 0;
    plVar2[0x20] = 0;
    plVar2[0x21] = 0;
    plVar2[0x2b] = 0;
    plVar2[0x2c] = 0;
    plVar2[0x2d] = 0;
    plVar2[0x2e] = 0;
    plVar2[0x2f] = 0;
    plVar2[0x30] = 0;
    plVar2[0x3d] = 0;
    plVar2[0x3e] = 0;
    puVar3 = PTR_DAT_04bd41b0;
    *(long **)((long)plVar2 + 0xc9) = plVar2 + 0x3b;
    *plVar2 = (long)(puVar3 + 0x10);
    puVar3 = puVar3 + 0x130;
  }
  plVar2[0x3b] = (long)puVar3;
  plVar2[0x3c] = 0;
  return plVar2;
}


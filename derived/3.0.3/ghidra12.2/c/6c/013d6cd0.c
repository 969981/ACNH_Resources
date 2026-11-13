
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_013d6cd0(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_051b1b88 != (undefined8 *)0x0) {
    return DAT_051b1b88;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x80);
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
        goto LAB_013d6d58;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x80,8);
  }
LAB_013d6d58:
  FUN_038c69f0(puVar3 + 0xc,param_1,3);
  DAT_051b1a40 = puVar3 + 0xc;
  puVar3[0xb] = 0;
  puVar3[0xc] = &PTR_FUN_04995ad0;
  *puVar3 = &PTR_LAB_04995af0;
  *(undefined4 *)(puVar3 + 7) = 0xffffffff;
  puVar3[6] = &PTR_LAB_04995b78;
  puVar3[8] = &PTR_LAB_04995b98;
  puVar3[9] = puVar3;
  *(undefined4 *)(puVar3 + 1) = 0;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 3) = 0;
  puVar3[4] = 0;
  *(undefined4 *)(puVar3 + 5) = 0;
  puVar3[10] = &LAB_013d6e48;
  DAT_051b1b88 = puVar3;
  DAT_051b1b60 = 0xffffffffffffffff;
  DAT_051b1b58 = 0xffffffffffffffff;
  DAT_051b1b50 = 0xffffffffffffffff;
  DAT_051b1b48 = 0xffffffffffffffff;
  DAT_051b1b40 = 0xffffffffffffffff;
  DAT_051b1b38 = 0xffffffffffffffff;
  DAT_051b1b30 = 0xffffffffffffffff;
  DAT_051b1b28 = 0xffffffffffffffff;
  DAT_051b1b20 = 0xffffffffffffffff;
  DAT_051b1b18 = 0xffffffffffffffff;
  DAT_051b1b10 = 0xffffffffffffffff;
  DAT_051b1b08 = 0xffffffffffffffff;
  DAT_051b1b00 = 0xffffffffffffffff;
  DAT_051b1af8 = 0xffffffffffffffff;
  DAT_051b1af0 = 0xffffffffffffffff;
  DAT_051b1ae8 = 0xffffffffffffffff;
  DAT_051b1ae0 = 0xffffffffffffffff;
  DAT_051b1ad8 = 0xffffffffffffffff;
  DAT_051b1ad0 = 0;
  DAT_051b1ac8 = 0;
  DAT_051b1ac0 = 0;
  DAT_051b1ab8 = 0;
  DAT_051b1ab0 = 0;
  DAT_051b1aa8 = 0;
  DAT_051b1aa0 = 0;
  DAT_051b1a98 = 0;
  DAT_051b1a90 = 0;
  DAT_051b1a88 = 0;
  DAT_051b1a80 = 0;
  DAT_051b1a78 = 0;
  DAT_051b1a70 = 0;
  DAT_051b1a68 = 0;
  DAT_051b1a60 = 0;
  DAT_051b1a58 = 0;
  DAT_051b1a50 = 0;
  _DAT_051b1a48 = 0;
  return puVar3;
}


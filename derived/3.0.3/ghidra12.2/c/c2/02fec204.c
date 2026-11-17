
void FUN_02fec204(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(long *)param_1 = param_1;
  *(long *)(param_1 + 8) = param_1;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x2d0);
  }
  else {
    lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar2 = (long *)(lVar4 + 8);
    if (lVar1 != 0) {
      plVar2 = (long *)(lVar1 + 0xa8);
    }
    plVar2 = (long *)*plVar2;
    if (plVar2 == (long *)0x0) {
      return;
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x2d0,8);
  }
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 0x18) = puVar3;
    puVar3[0x1e] = puVar3 + 0x21;
    puVar3[0x57] = 0;
    puVar3[0x1b] = puVar3 + 0x1e;
    puVar3[0x18] = puVar3 + 0x1b;
    puVar3[0x15] = puVar3 + 0x18;
    puVar3[0x12] = puVar3 + 0x15;
    puVar3[0xf] = puVar3 + 0x12;
    puVar3[0xc] = puVar3 + 0xf;
    puVar3[9] = puVar3 + 0xc;
    puVar3[6] = puVar3 + 9;
    puVar3[3] = puVar3 + 6;
    *puVar3 = puVar3 + 3;
    puVar3[0x21] = puVar3 + 0x24;
    puVar3[0x24] = puVar3 + 0x27;
    puVar3[0x27] = puVar3 + 0x2a;
    puVar3[0x2a] = puVar3 + 0x2d;
    puVar3[0x2d] = puVar3 + 0x30;
    puVar3[0x30] = puVar3 + 0x33;
    puVar3[0x33] = puVar3 + 0x36;
    puVar3[0x36] = puVar3 + 0x39;
    puVar3[0x39] = puVar3 + 0x3c;
    puVar3[0x3c] = puVar3 + 0x3f;
    puVar3[0x3f] = puVar3 + 0x42;
    puVar3[0x42] = puVar3 + 0x45;
    puVar3[0x45] = puVar3 + 0x48;
    puVar3[0x48] = puVar3 + 0x4b;
    puVar3[0x4b] = puVar3 + 0x4e;
    puVar3[0x4e] = puVar3 + 0x51;
    puVar3[0x51] = puVar3 + 0x54;
    puVar3[0x54] = puVar3 + 0x57;
    *(undefined8 **)(param_1 + 0x20) = puVar3;
    *(undefined4 *)(param_1 + 0x28) = 0x1e;
  }
  return;
}


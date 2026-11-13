
void FUN_011a2a18(long param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR_DAT_04bb2698;
  if (lVar3 == 0) {
    puVar2 = malloc(0x460);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_2 = (long *)(lVar3 + 8);
      if (lVar1 != 0) {
        param_2 = (long *)(lVar1 + 0xa8);
      }
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) {
        return;
      }
    }
    puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0x460,8);
  }
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 0x50) = puVar2;
    puVar2[0x1e] = puVar2 + 0x24;
    puVar2[0x72] = 0;
    puVar2[0x18] = puVar2 + 0x1e;
    puVar2[0x12] = puVar2 + 0x18;
    puVar2[0xc] = puVar2 + 0x12;
    puVar2[6] = puVar2 + 0xc;
    puVar2[0x24] = puVar2 + 0x2a;
    puVar2[0x2a] = puVar2 + 0x30;
    puVar2[0x30] = puVar2 + 0x36;
    puVar2[0x36] = puVar2 + 0x3c;
    puVar2[0x3c] = puVar2 + 0x42;
    puVar2[0x42] = puVar2 + 0x48;
    puVar2[0x48] = puVar2 + 0x4e;
    puVar2[0x4e] = puVar2 + 0x54;
    puVar2[0x54] = puVar2 + 0x5a;
    puVar2[0x5a] = puVar2 + 0x60;
    puVar2[0x60] = puVar2 + 0x66;
    puVar2[0x66] = puVar2 + 0x6c;
    puVar2[0x6c] = puVar2 + 0x72;
    *puVar2 = puVar2 + 6;
    *(undefined8 **)(param_1 + 0x58) = puVar2;
    if (puVar2 + 0x78 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x40) = 0x1400000000;
      *(undefined8 **)(param_1 + 0x48) = puVar2 + 0x78;
    }
  }
  return;
}


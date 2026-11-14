
undefined2 * FUN_01c5b0c0(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined2 *puVar3;
  long lVar4;
  
  if (DAT_0534f200 != (undefined2 *)0x0) {
    return DAT_0534f200;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x30);
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
        puVar3 = (undefined2 *)0x0;
        goto LAB_01c5b148;
      }
    }
    puVar3 = (undefined2 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x30,8);
  }
LAB_01c5b148:
  FUN_038c69f0(puVar3 + 8,param_1,3);
  *(undefined4 *)(puVar3 + 4) = 0;
  DAT_0534f1f8 = puVar3 + 8;
  *puVar3 = 0;
  *(undefined ***)(puVar3 + 8) = &PTR_FUN_04a420e0;
  *(undefined4 *)(puVar3 + 1) = 0x101;
  *(undefined1 *)(puVar3 + 3) = 0;
  DAT_0534f200 = puVar3;
  return puVar3;
}



void FUN_02cbaf20(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar4 = malloc(0x58de8);
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar3 = (long *)(lVar5 + 8);
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0xa8);
    }
    plVar3 = (long *)*plVar3;
    if (plVar3 == (long *)0x0) {
      return;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x58de8,8);
  }
  if (puVar4 != (undefined8 *)0x0) {
    lVar5 = 0x58de0;
    *puVar4 = 500;
    puVar1 = PTR_DAT_04bc5c90 + 0x10;
    plVar3 = puVar4 + 1;
    do {
      FUN_02cb74a0(plVar3);
      *plVar3 = (long)puVar1;
      plVar3 = plVar3 + 0x5b;
      lVar5 = lVar5 + -0x2d8;
    } while (lVar5 != 0);
    *(undefined4 *)(param_1 + 0x20) = 500;
    *(undefined8 **)(param_1 + 0x28) = puVar4 + 1;
  }
  return;
}


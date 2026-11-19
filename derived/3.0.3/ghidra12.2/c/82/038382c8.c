
void FUN_038382c8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04bb3350;
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == 0) {
    lVar5 = 1;
    plVar4 = *(long **)(param_1 + 0x10);
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar5 = *(long *)(lVar2 + 0xa8);
    *(long *)(lVar2 + 0xa8) = lVar3;
    plVar4 = *(long **)(param_1 + 0x10);
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x188))(plVar4);
    *(undefined1 *)plVar4[0x1e] = 0;
    *(undefined1 *)plVar4[0xb] = 0;
    FUN_03835c70(plVar4);
    *(byte *)(plVar4 + 9) = *(byte *)(plVar4 + 9) | 1;
  }
  if (lVar5 != 1) {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    *(long *)(lVar3 + 0xa8) = lVar5;
  }
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 8) + 0x20))();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


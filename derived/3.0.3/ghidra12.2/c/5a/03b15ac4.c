
long * FUN_03b15ac4(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_00367b14(0xf0,0x10);
  if (plVar1 != (long *)0x0) {
    FUN_0037bb50(plVar1);
    *plVar1 = (long)(PTR_DAT_04bd0890 + 0x10);
    plVar1[4] = (long)(plVar1 + 4);
    plVar1[5] = (long)(plVar1 + 4);
    FUN_0037ca20(plVar1,param_1,0,0,0);
    *plVar1 = (long)&PTR_LAB_04b75440;
    *(undefined4 *)((long)plVar1 + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
    *(undefined4 *)(plVar1 + 0x1b) = *(undefined4 *)(param_1 + 0xd8);
    *(undefined1 *)((long)plVar1 + 0xdc) = *(undefined1 *)(param_1 + 0xdc);
    *(undefined1 *)((long)plVar1 + 0xdd) = 1;
    *(undefined1 *)((long)plVar1 + 0xde) = *(undefined1 *)(param_1 + 0xde);
    *(undefined1 *)((long)plVar1 + 0xdf) = *(undefined1 *)(param_1 + 0xdf);
    *(undefined4 *)(plVar1 + 0x1c) = *(undefined4 *)(param_1 + 0xe0);
    *(undefined4 *)((long)plVar1 + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
    lVar2 = *(long *)(param_2 + 0x88);
    if (lVar2 != 0) {
      *(byte *)(lVar2 + 0xe6) = *(byte *)(lVar2 + 0xe6) | 0x20;
    }
  }
  return plVar1;
}


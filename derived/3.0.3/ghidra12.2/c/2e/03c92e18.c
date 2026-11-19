
long * FUN_03c92e18(long param_1,long param_2,long param_3)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  cVar1 = *(char *)(param_1 + 0xf8);
  plVar2 = (long *)FUN_00367b14(0x110,0x10);
  if (cVar1 == '\0') {
    if (plVar2 == (long *)0x0) {
      return (long *)0x0;
    }
    FUN_0037bb50(plVar2);
    *plVar2 = (long)(PTR_DAT_04bd0890 + 0x10);
    plVar2[4] = (long)(plVar2 + 4);
    plVar2[5] = (long)(plVar2 + 4);
    FUN_0037ca20(plVar2,param_2,0,0,0);
    *plVar2 = (long)&PTR_LAB_04b75440;
    *(undefined4 *)((long)plVar2 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
    *(undefined4 *)(plVar2 + 0x1b) = *(undefined4 *)(param_2 + 0xd8);
    *(undefined1 *)((long)plVar2 + 0xdc) = *(undefined1 *)(param_2 + 0xdc);
    *(undefined1 *)((long)plVar2 + 0xdd) = 1;
    *(undefined1 *)((long)plVar2 + 0xde) = *(undefined1 *)(param_2 + 0xde);
    *(undefined1 *)((long)plVar2 + 0xdf) = *(undefined1 *)(param_2 + 0xdf);
    *(undefined4 *)(plVar2 + 0x1c) = *(undefined4 *)(param_2 + 0xe0);
    *(undefined4 *)((long)plVar2 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
    lVar3 = *(long *)(param_3 + 0x88);
    if (lVar3 != 0) {
      *(byte *)(lVar3 + 0xe6) = *(byte *)(lVar3 + 0xe6) | 0x20;
    }
    ppuVar4 = &PTR_LAB_04b860d8;
    ppuVar5 = &PTR_LAB_04b861e8;
  }
  else {
    if (plVar2 == (long *)0x0) {
      return (long *)0x0;
    }
    FUN_0037bb50(plVar2);
    *plVar2 = (long)(PTR_DAT_04bd0890 + 0x10);
    plVar2[4] = (long)(plVar2 + 4);
    plVar2[5] = (long)(plVar2 + 4);
    FUN_0037ca20(plVar2,param_2,0,0,0);
    *plVar2 = (long)&PTR_LAB_04b75440;
    *(undefined4 *)((long)plVar2 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
    *(undefined4 *)(plVar2 + 0x1b) = *(undefined4 *)(param_2 + 0xd8);
    *(undefined1 *)((long)plVar2 + 0xdc) = *(undefined1 *)(param_2 + 0xdc);
    *(undefined1 *)((long)plVar2 + 0xdd) = 1;
    *(undefined1 *)((long)plVar2 + 0xde) = *(undefined1 *)(param_2 + 0xde);
    *(undefined1 *)((long)plVar2 + 0xdf) = *(undefined1 *)(param_2 + 0xdf);
    *(undefined4 *)(plVar2 + 0x1c) = *(undefined4 *)(param_2 + 0xe0);
    *(undefined4 *)((long)plVar2 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
    lVar3 = *(long *)(param_3 + 0x88);
    if (lVar3 != 0) {
      *(byte *)(lVar3 + 0xe6) = *(byte *)(lVar3 + 0xe6) | 0x20;
    }
    ppuVar4 = &PTR_LAB_04b85f68;
    ppuVar5 = &PTR_LAB_04b86080;
  }
  plVar2[0x1e] = 0;
  plVar2[0x1f] = 0;
  plVar2[0x20] = param_2 + 0xe8;
  *plVar2 = (long)ppuVar4;
  plVar2[0x1d] = (long)ppuVar5;
  *(long **)((long)plVar2 + 0xc9) = plVar2 + 0x1d;
  return plVar2;
}


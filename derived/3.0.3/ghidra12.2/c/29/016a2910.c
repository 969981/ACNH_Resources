
long * FUN_016a2910(long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    plVar4 = malloc(0x60);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      param_2 = (long *)(lVar6 + 8);
      if (lVar3 != 0) {
        param_2 = (long *)(lVar3 + 0xa8);
      }
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) {
        return (long *)0x0;
      }
    }
    plVar4 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0x60,8);
  }
  if (plVar4 != (long *)0x0) {
    *plVar4 = (long)(PTR_DAT_04bc0588 + 0x10);
    *(undefined4 *)(plVar4 + 1) = *(undefined4 *)(param_1 + 8);
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    plVar4[2] = 0;
    plVar4[3] = 0;
    *(undefined4 *)((long)plVar4 + 0xc) = uVar1;
    *plVar4 = (long)(PTR_DAT_04bc05d8 + 0x10);
    *(undefined4 *)(plVar4 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)((long)plVar4 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined1 *)(plVar4 + 5) = *(undefined1 *)(param_1 + 0x28);
    *(undefined2 *)((long)plVar4 + 0x2c) = *(undefined2 *)(param_1 + 0x2c);
    *(undefined1 *)((long)plVar4 + 0x2e) = *(undefined1 *)(param_1 + 0x2e);
    *(undefined1 *)((long)plVar4 + 0x2f) = *(undefined1 *)(param_1 + 0x2f);
    *(undefined4 *)(plVar4 + 6) = *(undefined4 *)(param_1 + 0x30);
    *(undefined1 *)((long)plVar4 + 0x34) = *(undefined1 *)(param_1 + 0x34);
    uVar2 = *(undefined1 *)(param_1 + 0x35);
    *plVar4 = (long)&PTR_LAB_049bb3c8;
    *(undefined1 *)((long)plVar4 + 0x35) = uVar2;
    lVar5 = *(long *)(param_1 + 0x48);
    lVar6 = *(long *)(param_1 + 0x38);
    lVar3 = *(long *)(param_1 + 0x40);
    *(undefined4 *)(plVar4 + 10) = *(undefined4 *)(param_1 + 0x50);
    plVar4[8] = lVar3;
    plVar4[9] = lVar5;
    plVar4[7] = lVar6;
    *(undefined2 *)((long)plVar4 + 0x54) = *(undefined2 *)(param_1 + 0x54);
    *(undefined1 *)((long)plVar4 + 0x56) = *(undefined1 *)(param_1 + 0x56);
    *(undefined1 *)((long)plVar4 + 0x57) = *(undefined1 *)(param_1 + 0x57);
    *(undefined4 *)(plVar4 + 0xb) = *(undefined4 *)(param_1 + 0x58);
  }
  return plVar4;
}


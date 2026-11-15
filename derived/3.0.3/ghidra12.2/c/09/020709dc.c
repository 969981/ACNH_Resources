
long * FUN_020709dc(long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    plVar5 = malloc(0x40);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      param_2 = (long *)(lVar6 + 8);
      if (lVar4 != 0) {
        param_2 = (long *)(lVar4 + 0xa8);
      }
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) {
        return (long *)0x0;
      }
    }
    plVar5 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0x40,8);
  }
  if (plVar5 != (long *)0x0) {
    *plVar5 = (long)(PTR_DAT_04bc0588 + 0x10);
    *(undefined4 *)(plVar5 + 1) = *(undefined4 *)(param_1 + 8);
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    plVar5[2] = 0;
    plVar5[3] = 0;
    *(undefined4 *)((long)plVar5 + 0xc) = uVar1;
    *plVar5 = (long)(PTR_DAT_04bc05d8 + 0x10);
    *(undefined4 *)(plVar5 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)((long)plVar5 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined1 *)(plVar5 + 5) = *(undefined1 *)(param_1 + 0x28);
    *(undefined2 *)((long)plVar5 + 0x2c) = *(undefined2 *)(param_1 + 0x2c);
    *(undefined1 *)((long)plVar5 + 0x2e) = *(undefined1 *)(param_1 + 0x2e);
    *(undefined1 *)((long)plVar5 + 0x2f) = *(undefined1 *)(param_1 + 0x2f);
    *(undefined4 *)(plVar5 + 6) = *(undefined4 *)(param_1 + 0x30);
    *(undefined1 *)((long)plVar5 + 0x34) = *(undefined1 *)(param_1 + 0x34);
    uVar2 = *(undefined1 *)(param_1 + 0x35);
    *plVar5 = (long)&PTR_LAB_04a71270;
    *(undefined1 *)((long)plVar5 + 0x35) = uVar2;
    uVar3 = *(undefined2 *)(param_1 + 0x36);
    *(undefined1 *)(plVar5 + 7) = *(undefined1 *)(param_1 + 0x38);
    *(undefined2 *)((long)plVar5 + 0x36) = uVar3;
  }
  return plVar5;
}


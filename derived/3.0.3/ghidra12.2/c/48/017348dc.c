
long * FUN_017348dc(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if (DAT_0527fa08 != (long *)0x0) {
    return DAT_0527fa08;
  }
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    plVar4 = malloc(0x130);
  }
  else {
    plVar4 = param_1;
    if (param_1 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar4 = (long *)(lVar5 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)0x0;
        goto LAB_01734964;
      }
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x130,8);
  }
LAB_01734964:
  FUN_038c69f0(plVar4 + 0x22,param_1,3);
  plVar4[2] = 0;
  DAT_0527fa00 = plVar4 + 0x22;
  *(undefined1 *)(plVar4 + 3) = 0x22;
  puVar1 = PTR_DAT_04bdf090;
  plVar4[0x22] = (long)&PTR_FUN_049bfcd8;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  *(undefined4 *)(plVar4 + 7) = 0;
  plVar4[8] = (long)(plVar4 + 8);
  plVar4[9] = (long)(plVar4 + 8);
  *plVar4 = (long)(puVar1 + 0x10);
  plVar4[1] = 0;
  plVar4[0xc] = (long)(plVar4 + 0xb);
  plVar4[0xd] = -0x100000000;
  plVar4[10] = -0x100000000;
  plVar4[0xb] = (long)(plVar4 + 0xb);
  FUN_038e18e4(plVar4 + 0xe);
  plVar4[0x1c] = 0;
  plVar4[0x1d] = 0;
  plVar4[0x1a] = 0;
  plVar4[0x1b] = 0;
  plVar4[0x18] = 0;
  plVar4[0x19] = 0;
  plVar4[0x16] = 0;
  plVar4[0x17] = 0;
  puVar2 = PTR_DAT_04bb2120;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  *(undefined4 *)(plVar4 + 0x20) = 0;
  *(undefined2 *)(plVar4 + 0x21) = 0;
  *(undefined1 *)((long)plVar4 + 0x10b) = 0;
  DAT_0527fa08 = plVar4;
  plVar4[0x1e] = (long)puVar1;
  plVar4[0x1f] = (long)puVar2;
  *(undefined4 *)((long)plVar4 + 0x54) = 0x98;
  *(undefined4 *)((long)plVar4 + 0x6c) = 0xa8;
  return plVar4;
}


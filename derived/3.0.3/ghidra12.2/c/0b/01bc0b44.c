
long * FUN_01bc0b44(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    plVar4 = malloc(0x120);
  }
  else {
    plVar4 = DAT_0533a090;
    if (DAT_0533a090 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar7 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)0x0;
        goto LAB_01bc0bd0;
      }
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x120,8);
  }
LAB_01bc0bd0:
  plVar4[7] = 0;
  plVar4[9] = 0xffffffff;
  plVar4[10] = -0x100000000;
  *(undefined4 *)(plVar4 + 0xb) = 0xffffffff;
  plVar4[2] = 0;
  plVar4[3] = 0;
  *(undefined8 *)((long)plVar4 + 0x1d) = 0;
  *(undefined4 *)(plVar4 + 8) = 0;
  *(undefined1 *)((long)plVar4 + 0x44) = 0;
  *(undefined4 *)(plVar4 + 0xe) = 0x40;
  *(undefined1 *)((long)plVar4 + 0x74) = 0;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  *(undefined1 *)((long)plVar4 + 0xb3) = 0;
  *(undefined4 *)(plVar4 + 0x19) = 0x40;
  *(undefined1 *)((long)plVar4 + 0x10b) = 0;
  *(undefined1 *)((long)plVar4 + 0xcc) = 0;
  plVar4[0xc] = (long)puVar1;
  plVar4[0xd] = (long)plVar4 + 0x74;
  plVar4[0x17] = (long)puVar1;
  plVar4[0x18] = (long)plVar4 + 0xcc;
  plVar4[0x22] = 0;
  *(undefined4 *)(plVar4 + 0x23) = 0;
  plVar4[5] = 0;
  plVar4[6] = (long)&PTR_FUN_048fc868;
  *plVar4 = (long)&PTR_LAB_04a3b840;
  plVar4[1] = 0;
  uVar5 = FUN_01bc0258(plVar4,param_2,param_3);
  *(undefined4 *)(plVar4 + 0x23) = *(undefined4 *)(param_3 + 0x108);
  if ((uVar5 & 1) == 0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
    plVar4 = (long *)0x0;
  }
  else {
    plVar6 = (long *)(param_1 + 0x18);
    lVar7 = *plVar6;
    plVar2 = (long *)((long)*(int *)(param_1 + 0x2c) + (long)plVar4);
    *plVar6 = (long)plVar2;
    *plVar2 = lVar7;
    plVar2[1] = (long)plVar6;
    if (lVar7 != 0) {
      *(long **)(lVar7 + 8) = plVar2;
    }
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  return plVar4;
}


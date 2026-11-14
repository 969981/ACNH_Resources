
long * FUN_01bc0e68(long param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    plVar5 = malloc(0x120);
  }
  else {
    plVar5 = DAT_0533a090;
    if (DAT_0533a090 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar8 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)0x0;
        goto LAB_01bc0efc;
      }
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x120,8);
  }
LAB_01bc0efc:
  plVar5[7] = 0;
  plVar5[9] = 0xffffffff;
  plVar5[10] = -0x100000000;
  *(undefined4 *)(plVar5 + 0xb) = 0xffffffff;
  plVar5[2] = 0;
  plVar5[3] = 0;
  *(undefined8 *)((long)plVar5 + 0x1d) = 0;
  *(undefined4 *)(plVar5 + 8) = 0;
  *(undefined1 *)((long)plVar5 + 0x44) = 0;
  *(undefined1 *)((long)plVar5 + 0x74) = 0;
  *(undefined4 *)(plVar5 + 0xe) = 0x40;
  *(undefined1 *)((long)plVar5 + 0xb3) = 0;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  *(undefined4 *)(plVar5 + 0x19) = 0x40;
  *(undefined1 *)((long)plVar5 + 0x10b) = 0;
  *(undefined1 *)((long)plVar5 + 0xcc) = 0;
  plVar5[0xc] = (long)puVar1;
  plVar5[0xd] = (long)plVar5 + 0x74;
  puVar3 = PTR_DAT_04bb2e00;
  plVar5[0x22] = 0;
  plVar5[0x17] = (long)puVar1;
  plVar5[0x18] = (long)plVar5 + 0xcc;
  plVar5[5] = 0;
  plVar5[6] = (long)(puVar3 + 0x10);
  *plVar5 = (long)&PTR_LAB_04a3b8b0;
  plVar5[1] = 0;
  *(undefined1 *)(plVar5 + 0x23) = 1;
  uVar6 = FUN_01bc0258(plVar5,param_2,param_3);
  *(byte *)(plVar5 + 0x23) = param_4 & 1;
  if ((uVar6 & 1) == 0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
    plVar5 = (long *)0x0;
  }
  else {
    plVar7 = (long *)(param_1 + 0x18);
    lVar8 = *plVar7;
    plVar2 = (long *)((long)*(int *)(param_1 + 0x2c) + (long)plVar5);
    *plVar7 = (long)plVar2;
    *plVar2 = lVar8;
    plVar2[1] = (long)plVar7;
    if (lVar8 != 0) {
      *(long **)(lVar8 + 8) = plVar2;
    }
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  return plVar5;
}


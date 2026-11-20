
long * FUN_03efc704(long *param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined *local_50;
  char *pcStack_48;
  
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    plVar2 = malloc(200);
  }
  else {
    plVar2 = param_1;
    if (param_1 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar2 = (long *)(lVar4 + 8);
      if (lVar1 != 0) {
        plVar2 = (long *)(lVar1 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)0x0;
        goto LAB_03efc794;
      }
    }
    plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,200,8);
  }
LAB_03efc794:
  *(undefined1 *)(plVar2 + 5) = 0;
  plVar2[3] = 0;
  plVar2[4] = 0;
  *(undefined8 *)((long)plVar2 + 0x2c) = 0xc1a0000043d60000;
  *plVar2 = (long)&PTR_LAB_04ba7668;
  plVar2[1] = 0;
  plVar2[2] = 0;
  plVar2[7] = 0;
  plVar2[8] = 0;
  plVar2[9] = 0;
  plVar2[10] = 0;
  plVar2[0xb] = 0;
  plVar2[0xc] = 0;
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  plVar2[0xf] = 0;
  plVar2[0x10] = 0;
  FUN_038e18e4(plVar2 + 0x11);
  (**(code **)(*plVar2 + 0x60))(plVar2,param_1,param_2,param_3,param_4);
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "PhiveSystemHeap";
  plVar3 = (long *)FUN_038c6d48(0x400000,&local_50,param_1,8,1,1);
  plVar2[3] = (long)plVar3;
  plVar2[4] = param_4;
  lVar4 = (**(code **)(*plVar3 + 0x30))(plVar3,0x5000,0x40);
  plVar2[7] = lVar4;
  lVar4 = (**(code **)(*(long *)plVar2[3] + 0x30))((long *)plVar2[3],0x5000,0x40);
  plVar2[8] = lVar4;
  lVar4 = (**(code **)(*(long *)plVar2[3] + 0x30))((long *)plVar2[3],0x5000,0x40);
  plVar2[9] = lVar4;
  return plVar2;
}


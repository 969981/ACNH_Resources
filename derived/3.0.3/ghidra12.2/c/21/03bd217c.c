
long * FUN_03bd217c(long param_1,undefined8 param_2,long *param_3,undefined4 param_4)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  plVar3 = DAT_05aec200;
  (**(code **)(*DAT_05aec200 + 0x10))(DAT_05aec200);
  lVar4 = FUN_03bec2a0(param_1,param_2,param_3,param_4);
  if (lVar4 == 0) {
    plVar6 = (long *)0x0;
    goto LAB_03bd22bc;
  }
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    plVar6 = malloc(0x110);
  }
  else {
    plVar6 = param_3;
    if (param_3 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar8 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x0;
        goto LAB_03bd2244;
      }
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x110,8);
  }
LAB_03bd2244:
  FUN_03bf34d8(plVar6,param_2,param_1,lVar4,param_3);
  puVar2 = PTR_DAT_04bd23c0;
  plVar6[0x1f] = 0;
  *(undefined1 *)((long)plVar6 + 0x102) = 0;
  plVar6[0x21] = 0;
  *plVar6 = (long)(puVar2 + 0x10);
  *(undefined2 *)(plVar6 + 0x20) = 0xffff;
  plVar7 = (long *)(lVar4 + 0x20);
  lVar8 = *plVar7;
  plVar1 = (long *)((long)*(int *)(lVar4 + 0x34) + (long)plVar6);
  *plVar7 = (long)plVar1;
  *plVar1 = lVar8;
  plVar1[1] = (long)plVar7;
  if (lVar8 != 0) {
    *(long **)(lVar8 + 8) = plVar1;
  }
  *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + 1;
  if (*(char *)(param_1 + 0x7b) != '\0') {
    FUN_03bf3a60(plVar6);
  }
LAB_03bd22bc:
  (**(code **)(*plVar3 + 0x18))(plVar3);
  return plVar6;
}



void FUN_010fb5a8(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    plVar4 = malloc(0xf0);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      param_2 = (long *)(lVar5 + 8);
      if (lVar3 != 0) {
        param_2 = (long *)(lVar3 + 0xa8);
      }
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) {
        plVar4 = (long *)0x0;
        goto LAB_010fb624;
      }
    }
    plVar4 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0xf0,8);
  }
LAB_010fb624:
  *plVar4 = (long)(PTR_DAT_04bbb810 + 0x10);
  plVar4[1] = *param_1;
  lVar5 = param_1[1];
  plVar4[0x18] = (long)(PTR_DAT_04bb6560 + 0x10);
  puVar2 = PTR_DAT_04bb80a8;
  puVar1 = PTR_DAT_04bb2020;
  *(undefined4 *)(plVar4 + 0x16) = 0;
  plVar4[0x17] = (long)plVar4;
  plVar4[0x1d] = (long)plVar4;
  *(int *)(plVar4 + 2) = (int)lVar5;
  *plVar4 = (long)(puVar2 + 0x10);
  plVar4[0x19] = (long)(puVar1 + 0x10);
  plVar4[0x1a] = (long)"AccessKey";
  plVar4[0x1b] = (long)(puVar1 + 0x10);
  plVar4[0x1c] = (long)&DAT_0407ebb1;
  plVar4[6] = (long)(plVar4 + 0x18);
  plVar4[5] = (long)(plVar4 + 6);
  plVar4[3] = 0;
  plVar4[4] = 0x1000000001;
  return;
}


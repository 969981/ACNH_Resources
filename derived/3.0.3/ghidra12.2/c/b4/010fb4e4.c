
void FUN_010fb4e4(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    plVar3 = malloc(0xb8);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      param_2 = (long *)(lVar4 + 8);
      if (lVar2 != 0) {
        param_2 = (long *)(lVar2 + 0xa8);
      }
      param_2 = (long *)*param_2;
    }
    plVar3 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0xb8,8);
  }
  *plVar3 = (long)(PTR_DAT_04bbb810 + 0x10);
  puVar1 = PTR_DAT_04bb7678;
  plVar3[1] = *param_1;
  lVar4 = param_1[1];
  plVar3[3] = 0;
  *(undefined4 *)(plVar3 + 0x16) = 0;
  plVar3[4] = 0x1000000000;
  plVar3[5] = (long)(plVar3 + 6);
  *(int *)(plVar3 + 2) = (int)lVar4;
  *plVar3 = (long)(puVar1 + 0x10);
  return;
}


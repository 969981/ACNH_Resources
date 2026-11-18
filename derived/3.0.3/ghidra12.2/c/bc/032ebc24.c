
void FUN_032ebc24(int *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int local_28;
  int iStack_24;
  
  if (((param_1[0x192] <= param_1[0x191]) &&
      (iVar1 = nn::kpr::KeyCodeComposer::GetCompositionCount(), iVar1 < 1)) && (param_1[0x11d] < 1))
  {
    if (((*param_1 < *(int *)(*(long *)(param_1 + 8) + 0xc)) &&
        (*param_1 < *(int *)(*(long *)(param_1 + 8) + 8) + -1)) &&
       ((*(undefined1 *)(param_1 + 0x1a4) = 0, param_1[0x192] <= param_1[0x191] &&
        ((iVar1 = nn::kpr::KeyCodeComposer::GetCompositionCount(), iVar1 < 1 && (param_1[0x11d] < 1)
         ))))) {
      if (*param_1 < *(int *)(*(long *)(param_1 + 8) + 0xc)) {
        FUN_03363bc0(*(long *)(param_1 + 8),*param_1,1);
        FUN_0336679c(*(undefined8 *)PTR_DAT_04bb4fb0,0,1);
        param_1[2] = -1;
        FUN_032e7b30(param_1);
        local_28 = *param_1;
        puVar2 = *(undefined8 **)(param_1 + 4);
        if (puVar2 != (undefined8 *)0x0) {
          iStack_24 = local_28;
          (**(code **)*puVar2)(puVar2,&local_28);
        }
      }
    }
  }
  return;
}


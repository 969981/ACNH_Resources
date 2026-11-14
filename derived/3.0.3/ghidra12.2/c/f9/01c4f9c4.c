
void FUN_01c4f9c4(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined *local_d0;
  char *pcStack_c8;
  undefined4 local_c0;
  char local_bc [8];
  char local_b4 [4];
  undefined1 local_b0;
  undefined1 local_3d;
  undefined4 local_38;
  
  local_d0 = PTR_DAT_04bb2020 + 0x10;
  pcStack_c8 = "MysteryTourInsectParamMgr";
  plVar2 = (long *)FUN_038c6d48(0,&local_d0,param_2,8,1,0);
  local_3d = 0;
  local_b0 = 0;
  local_c0 = 0x80;
  pcStack_c8 = local_bc;
  local_bc[0] = s_invalid_name_040e8f53[0];
  local_bc[1] = s_invalid_name_040e8f53[1];
  local_bc[2] = s_invalid_name_040e8f53[2];
  local_bc[3] = s_invalid_name_040e8f53[3];
  local_bc[4] = s_invalid_name_040e8f53[4];
  local_bc[5] = s_invalid_name_040e8f53[5];
  local_bc[6] = s_invalid_name_040e8f53[6];
  local_bc[7] = s_invalid_name_040e8f53[7];
  local_d0 = PTR_DAT_04bb2d88 + 0x10;
  local_b4[0] = s_invalid_name_040e8f53[8];
  local_b4[1] = s_invalid_name_040e8f53[9];
  local_b4[2] = s_invalid_name_040e8f53[10];
  local_b4[3] = s_invalid_name_040e8f53[0xb];
  local_38 = FUN_006bd550("invalid_name",0);
  uVar3 = FUN_03853d00(param_1,&local_d0);
  if ((uVar3 & 1) != 0) {
    (**(code **)(*param_1 + 0x20))(param_1,&local_d0,plVar2);
  }
  lVar1 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar6 = malloc(0xc);
  }
  else {
    plVar5 = plVar2;
    if (plVar2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar1 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
    }
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0xc,8);
  }
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = 0;
  param_1[0x45] = (long)puVar6;
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}


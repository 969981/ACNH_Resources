
void FUN_007ca314(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined *local_158;
  undefined1 *puStack_150;
  undefined4 local_148;
  undefined1 local_144 [255];
  undefined1 local_45;
  long *local_40;
  long lStack_38;
  
  *(undefined4 *)(param_1 + 2) = 0;
  puVar3 = PTR_DAT_04bd47b0;
  *(undefined4 *)(param_1 + 7) = 0x80;
  *(undefined1 *)((long)param_1 + 0xbb) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_LAB_049163e0;
  param_1[1] = puVar3 + 0x10;
  pcVar1 = (char *)((long)param_1 + 0x3c);
  param_1[6] = pcVar1;
  uVar2 = s_invalid_name_040e8f53._0_8_;
  if (pcVar1 != "invalid_name") {
    *(undefined4 *)((long)param_1 + 0x44) = 0x656d616e;
    *(undefined1 *)(param_1 + 9) = 0;
    *(undefined8 *)pcVar1 = uVar2;
  }
  param_1[5] = PTR_DAT_04bb2d88 + 0x10;
  uVar4 = FUN_006bd550("invalid_name",0);
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  FUN_007ca4e0(param_1,param_2,param_3);
  puStack_150 = local_144;
  lStack_38 = *(long *)(param_1[4] + 8);
  local_148 = 0x100;
  local_45 = 0;
  local_144[0] = 0;
  local_158 = PTR_DAT_04bb21f8 + 0x10;
  local_40 = param_3;
  if (*(int *)(lStack_38 + 4) == 0x407) {
    lVar7 = *(long *)PTR_DAT_04bb2698;
    if (lVar7 == 0) {
      plVar6 = malloc(0x60);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        param_3 = (long *)(lVar7 + 8);
        if (lVar5 != 0) {
          param_3 = (long *)(lVar5 + 0xa8);
        }
        param_3 = (long *)*param_3;
      }
      plVar6 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x60,8);
    }
    puVar3 = PTR_DAT_04bd47b8;
    plVar6[2] = 0;
    plVar6[3] = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    plVar6[6] = 0;
    plVar6[7] = 0;
    plVar6[8] = 0;
    plVar6[9] = 0;
    plVar6[10] = 0;
    plVar6[0xb] = 0;
    *plVar6 = (long)(puVar3 + 0x10);
    plVar6[1] = 0;
    param_1[3] = plVar6;
    FUN_03ec8c00(plVar6,&local_40);
    *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 1;
  }
  else {
    FUN_038d1270(&local_158,"Resource version mismatch. current:%d resource:%d (%s)",0x407,
                 *(int *)(lStack_38 + 4),
                 lStack_38 + *(int *)(lStack_38 + 0x24) + (long)*(int *)(lStack_38 + 8));
  }
  return;
}


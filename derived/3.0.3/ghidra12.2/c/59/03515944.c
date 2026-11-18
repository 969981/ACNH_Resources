
void FUN_03515944(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined *local_150;
  char *pcStack_148;
  undefined8 local_140;
  undefined *puStack_138;
  undefined *local_130;
  char *pcStack_128;
  undefined4 local_120;
  undefined1 local_3d;
  ulong local_38;
  
  if (*param_1 != 0) {
    return;
  }
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    plVar3 = malloc(0x1868);
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar3 = (long *)(lVar5 + 8);
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0xa8);
    }
    plVar3 = (long *)*plVar3;
    if (plVar3 == (long *)0x0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0x1868,8);
    }
  }
  FUN_00751ec0(plVar3,&DAT_05767938,&DAT_05767928,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  *plVar3 = (long)(PTR_DAT_04bca0b0 + 0x10);
  local_120 = 0;
  pcStack_148 = "mLinkUniqueIdArray";
  local_38 = local_38 & 0xffffffffffff0000;
  puStack_138 = &DAT_04069761;
  pcStack_128 = "Min = 0, Max = 62";
  local_150 = puVar1;
  local_140 = puVar1;
  local_130 = puVar1;
  FUN_03513730(plVar3 + 0x18,&local_150,&local_38,plVar3);
  local_120 = 0;
  pcStack_148 = "mNpcIconOffset";
  puStack_138 = &DAT_040eb950;
  pcStack_128 = "Min = -400, Max = 800";
  local_38 = 0;
  local_150 = puVar1;
  local_140 = puVar1;
  local_130 = puVar1;
  FUN_03513a80(plVar3 + 0x17a,&local_150,&local_38,plVar3);
  *param_1 = (long)plVar3;
  pcStack_148 = (char *)((long)&local_140 + 4);
  local_3d = 0;
  local_140 = (undefined *)CONCAT35(local_140._5_3_,0x100);
  local_150 = PTR_DAT_04bb21f8 + 0x10;
  uVar4 = (**(code **)(*plVar3 + 0xf0))(plVar3,&local_150,1);
  if ((uVar4 & 1) != 0) {
    (**(code **)(*plVar3 + 0x108))(plVar3,&local_150);
  }
  return;
}


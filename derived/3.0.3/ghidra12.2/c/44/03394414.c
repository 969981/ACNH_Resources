
void FUN_03394414(long param_1,uint param_2,long *param_3)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined1 local_80;
  undefined2 local_7f;
  undefined4 local_7c;
  undefined8 local_78;
  undefined *puStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined8 local_40;
  undefined2 local_38;
  undefined4 local_34;
  
  plVar1 = (long *)(param_1 + 0x40);
  plVar4 = plVar1 + param_2;
  if (3 < param_2) {
    plVar4 = plVar1;
  }
  if (*plVar4 != 0) {
    return;
  }
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    plVar4 = malloc(0x110);
  }
  else {
    plVar4 = param_3;
    if (param_3 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar4 = (long *)(lVar6 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)0x0;
        goto LAB_033944b4;
      }
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x110,8);
  }
LAB_033944b4:
  plVar4[2] = 0;
  puVar2 = PTR_DAT_04bdf090;
  *(undefined1 *)(plVar4 + 3) = 0x22;
  plVar4[6] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  *(undefined4 *)(plVar4 + 7) = 0;
  plVar4[8] = (long)(plVar4 + 8);
  plVar4[9] = (long)(plVar4 + 8);
  *plVar4 = (long)(puVar2 + 0x10);
  plVar4[1] = 0;
  plVar4[0xc] = (long)(plVar4 + 0xb);
  plVar4[0xd] = -0x100000000;
  plVar4[10] = -0x100000000;
  plVar4[0xb] = (long)(plVar4 + 0xb);
  FUN_038e18e4(plVar4 + 0xe);
  plVar4[0x1c] = 0;
  plVar4[0x1d] = 0;
  plVar4[0x1a] = 0;
  plVar4[0x1b] = 0;
  plVar4[0x18] = 0;
  plVar4[0x19] = 0;
  plVar4[0x16] = 0;
  plVar4[0x17] = 0;
  puVar2 = PTR_DAT_04bb2120;
  puStack_70 = PTR_DAT_04bb2020 + 0x10;
  local_48 = 1;
  *(undefined4 *)(plVar4 + 0x20) = 0;
  *(undefined2 *)(plVar4 + 0x21) = 0;
  *(undefined1 *)((long)plVar4 + 0x10b) = 0;
  local_7f = 0;
  local_46 = 0;
  local_38 = 0x100;
  local_34 = 0;
  plVar4[0x1e] = (long)puStack_70;
  plVar4[0x1f] = (long)puVar2;
  *(undefined4 *)((long)plVar4 + 0x54) = 0x98;
  *(undefined4 *)((long)plVar4 + 0x6c) = 0xa8;
  local_7c = 8;
  local_60 = 0;
  uStack_58 = 0;
  local_78 = (&DAT_05741008)[(long)(int)param_2 * 3];
  local_80 = 0;
  local_68 = (&DAT_05741000)[(long)(int)param_2 * 3];
  local_40 = 0x280;
  local_50 = param_3;
  FUN_03f2ab60(plVar4,&local_80);
  uVar5 = (ulong)param_2;
  if (3 < param_2) {
    uVar5 = 0;
  }
  plVar1[uVar5] = (long)plVar4;
  return;
}


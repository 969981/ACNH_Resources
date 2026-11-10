
void FUN_002237e0(long *param_1,undefined4 param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *local_40;
  char *pcStack_38;
  
  plVar1 = param_1 + 4;
  puVar2 = PTR_DAT_04bccf30 + 0x10;
  param_1[2] = (long)PTR_LAB_04bccf28;
  param_1[3] = 0;
  local_40 = PTR_DAT_04bccec0;
  *param_1 = (long)puVar2;
  param_1[1] = (long)param_1;
  local_40 = local_40 + 0x10;
  pcStack_38 = "Pia BackgroundScheduler";
  uVar5 = FUN_0021f454();
  FUN_00290e74(plVar1,&local_40,param_1,uVar5,param_2,1,0x7fffffff,0x5000,0x20);
  param_1[0x23] = param_3;
  FUN_00290448(param_1 + 0x24,0);
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  FUN_002236b0(param_1 + 0x2e);
  *(undefined4 *)((long)param_1 + 0x184) = 0xffffffff;
  iVar3 = FUN_0021f050();
  if (iVar3 == 0) {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bccfe8);
    if (lVar6 == 0) {
      uVar4 = nn::os::GetCurrentCoreNumber();
    }
    else {
      uVar4 = (int)lVar6 - 1;
    }
    local_40 = (undefined *)CONCAT44(local_40._4_4_,uVar4);
  }
  else {
    uVar4 = iVar3 - 1;
  }
  local_40 = (undefined *)CONCAT44(local_40._4_4_,1 << (ulong)(uVar4 & 0x1f));
  FUN_002909d8(plVar1,&local_40);
  FUN_00290918(plVar1);
  *(undefined4 *)((long)param_1 + 0x184) = 0x18;
  return;
}


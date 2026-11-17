
void FUN_02d3dc44(long param_1)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  byte bVar5;
  undefined *local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined2 local_b3;
  undefined4 local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined *local_98;
  char *local_90;
  int local_88;
  char local_84 [63];
  undefined1 local_45;
  undefined *local_40;
  char *pcStack_38;
  
  local_c0 = PTR_DAT_04bc5028 + 0x10;
  local_b8 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
  local_b3 = 0xff00;
  local_b4 = 1;
  local_45 = 0;
  local_84[0] = '\0';
  local_b0 = 0xffffffff;
  local_90 = local_84;
  local_88 = 0x40;
  local_98 = PTR_DAT_04bb2bc0 + 0x10;
  local_a8 = *(long *)(param_1 + 0x210);
  local_a0 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "/L_Dialog_00";
  local_40 = puVar1;
  local_a0 = FUN_02bcb8ac(**(long **)(local_a8 + 0x3f8) + 0x38,&local_40);
  pcVar3 = local_90;
  if (local_90 != "CloudIslandMap") {
    iVar2 = 0xe;
    if (local_88 < 0xf) {
      iVar2 = local_88 + -1;
    }
    memcpy(local_90,"CloudIslandMap",(long)iVar2);
    pcVar3[iVar2] = '\0';
  }
  bVar5 = *(byte *)(param_1 + 0x1f8);
  pcStack_38 = "CheckDialog";
  if (7 < bVar5) {
    bVar5 = 0xff;
  }
  local_b3 = CONCAT11(bVar5,(undefined1)local_b3);
  local_40 = puVar1;
  lVar4 = FUN_02bd012c(*(undefined8 *)(param_1 + 0x98),&local_40,param_1,&local_c0);
  *(long *)(param_1 + 0x218) = lVar4;
  if (lVar4 != 0) {
    FUN_030c7af0(lVar4,&DAT_04abf4d0);
  }
  return;
}


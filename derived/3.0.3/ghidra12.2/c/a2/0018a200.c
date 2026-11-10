
void FUN_0018a200(long *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  long lVar5;
  code *pcVar6;
  long local_38;
  
  *(undefined1 *)(param_1 + 0xb) = 0;
  puVar4 = PTR_DAT_04bcbd98;
  param_1[2] = 0;
  puVar1 = PTR_DAT_04bc0ec8;
  param_1[8] = 0;
  param_1[0xd] = (long)(param_1 + 0xb);
  param_1[0xe] = 0x10;
  puVar1 = puVar1 + 0x10;
  *param_1 = (long)(puVar4 + 0x10);
  param_1[1] = 0;
  param_1[10] = (long)puVar1;
  FUN_0018b070(param_1 + 10,param_2,0xffffffffffffffff);
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x11] = (long)puVar1;
  param_1[0x16] = (long)puVar1;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x14] = (long)(param_1 + 0x12);
  param_1[0x15] = 0x10;
  cVar3 = *PTR_DAT_04bcbca8;
  param_1[0x19] = (long)(param_1 + 0x17);
  param_1[0x1a] = 0x10;
  if (cVar3 == '\0') {
    FUN_0018cb8c(&local_38);
  }
  else {
    FUN_0018c9b0(0);
  }
  puVar1 = PTR_DAT_04bcbcb0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)((long)param_1 + 0x7a) = 0;
  param_1[0x10] = 0;
  param_1[5] = -1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = local_38;
  puVar4 = PTR_DAT_04bcbda0;
  lVar5 = *(long *)PTR_DAT_04bcbda0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = param_3;
  *(undefined1 *)(param_1 + 0xf) = 0;
  pcVar6 = *(code **)(lVar5 + 0x10);
  *(long *)puVar1 = local_38;
  (*pcVar6)(puVar4);
  puVar1 = PTR_DAT_04bcbda8;
  if (*(long *)(PTR_DAT_04bcbda8 + 8) == *(long *)(PTR_DAT_04bcbda8 + 0x18)) {
    *(long **)(PTR_DAT_04bcbda8 + 8) = param_1;
  }
  else {
    *(long **)(*(long *)(PTR_DAT_04bcbda8 + 0x10) + 8) = param_1;
    param_1[2] = *(long *)(puVar1 + 0x10);
  }
  *(long **)(puVar1 + 0x10) = param_1;
  *(long *)(puVar1 + 0x20) = *(long *)(puVar1 + 0x20) + 1;
  puVar1 = PTR_DAT_04bcbdb0;
  iVar2 = *(int *)PTR_DAT_04bcbdb0;
  *(int *)((long)param_1 + 0x7c) = iVar2;
  *(int *)puVar1 = iVar2 + 1;
  (**(code **)(*(long *)puVar4 + 0x20))(puVar4);
  return;
}



void FUN_002bb550(long *param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined4 local_24;
  
  *param_1 = (long)(PTR_DAT_04bce1a8 + 0x10);
  FUN_002a9010(param_1 + 1);
  puVar4 = PTR_DAT_04bce1b0;
  *(undefined4 *)(param_1 + 6) = 0;
  puVar5 = PTR_LAB_04bce1b8;
  param_1[0xb] = 0;
  param_1[9] = (long)puVar5;
  param_1[10] = 0;
  param_1[7] = (long)(puVar4 + 0x10);
  param_1[8] = (long)param_1;
  FUN_00290448(param_1 + 0xc,0);
  *(undefined4 *)(param_1 + 0x15) = 4;
  *(undefined4 *)((long)param_1 + 0xac) = 5;
  *(undefined4 *)(param_1 + 0x16) = 0;
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)param_1 + 0xb4),(Result *)&local_24);
  plVar1 = param_1 + 0x19;
  param_1[0x18] = 0;
  FUN_002bb87c(plVar1);
  FUN_0028d4cc(param_1 + 0x98);
  *(undefined1 *)(param_1 + 0x9a) = 0;
  if ((long *)param_1[0x1a] != plVar1) {
    plVar7 = (long *)param_1[0x1a];
    do {
      iVar3 = *(int *)((long)param_1 + 0xf4);
      plVar9 = (long *)plVar7[1];
      *plVar7 = 0;
      plVar7[1] = 0;
      FUN_002236e0(param_1 + 0x1c,param_1 + 0x1c,(long)iVar3 + (long)plVar7);
      plVar7 = plVar9;
    } while (plVar9 != plVar1);
  }
  FUN_002236b0(plVar1);
  if ((int)param_1[0x1e] != 0) {
    lVar6 = FUN_002237a8(param_1 + 0x1c);
    lVar2 = 0;
    if (lVar6 != 0) {
      lVar2 = lVar6 - *(int *)((long)param_1 + 0xf4);
    }
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(undefined8 *)(lVar2 + 0x30) = 0;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    puVar8 = (undefined8 *)(lVar2 + 0x18);
    *puVar8 = 0;
    FUN_0021f4e0(puVar8);
    FUN_002236bc(plVar1,plVar1,lVar2);
    *(undefined4 *)(lVar2 + 0x10) = 0;
    FUN_0021f5a0(puVar8,0xffffffff);
    *(undefined2 *)(lVar2 + 0x30) = 0;
  }
  return;
}


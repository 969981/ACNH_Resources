
void FUN_003154d0(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined *local_78;
  undefined1 local_70 [16];
  undefined1 *local_60;
  undefined8 uStack_58;
  
  puVar2 = (undefined8 *)*param_2;
  puVar8 = (undefined8 *)param_2[1];
  while (puVar8 != puVar2) {
    puVar8 = puVar8 + -5;
    (**(code **)*puVar8)(puVar8);
  }
  param_2[1] = (long)puVar2;
  lVar3 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(param_1 + 0x18);
  if ((ulong)(*(long *)(lVar3 + 0x18) - lVar4) < 4) {
    *(undefined1 *)(param_1 + 8) = 1;
  }
  else {
    iVar6 = *(int *)(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 0x28) + lVar4);
    *(long *)(param_1 + 0x18) = lVar4 + 4;
    FUN_00318540(param_2,iVar6);
    puVar5 = PTR_DAT_04bc0ec8;
    if (iVar6 != 0) {
      puVar1 = PTR_DAT_04bc0ec8 + 0x10;
      do {
        while( true ) {
          if (*(char *)(param_1 + 8) != '\0') {
            return;
          }
          local_70[0] = 0;
          uStack_58 = 0x10;
          local_78 = puVar1;
          local_60 = local_70;
          FUN_001f719c(param_1,&local_78);
          plVar9 = (long *)param_2[1];
          if (*(char *)(param_1 + 8) != '\0') {
            plVar7 = (long *)*param_2;
            if (plVar9 != plVar7) {
              do {
                plVar9 = plVar9 + -5;
                (**(code **)*plVar9)(plVar9);
              } while (plVar9 != plVar7);
              param_2[1] = (long)plVar7;
            }
            local_78 = puVar5 + 0x10;
            FUN_0018b1a0(&local_78);
            return;
          }
          if (plVar9 == (long *)param_2[2]) break;
          *plVar9 = (long)(puVar5 + 0x10);
          *(undefined1 *)(plVar9 + 1) = 0;
          plVar9[3] = (long)(plVar9 + 1);
          plVar9[4] = 0x10;
          FUN_0018b070(plVar9,local_60,0xffffffffffffffff);
          param_2[1] = (long)(plVar9 + 5);
          local_78 = puVar5 + 0x10;
          FUN_0018b1a0(&local_78);
          iVar6 = iVar6 + -1;
          if (iVar6 == 0) {
            return;
          }
        }
        FUN_003186a0(param_2,&local_78);
        local_78 = puVar5 + 0x10;
        FUN_0018b1a0(&local_78);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  return;
}


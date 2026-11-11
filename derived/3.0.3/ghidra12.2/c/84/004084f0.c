
void FUN_004084f0(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  char cVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined **local_d8;
  undefined1 local_d0;
  undefined *local_c8;
  undefined1 local_c0 [16];
  undefined1 *local_b0;
  undefined8 uStack_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  long local_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar7 = (undefined8 *)*param_2;
  puVar9 = (undefined8 *)param_2[1];
  while (puVar9 != puVar7) {
    puVar9 = puVar9 + -0xf;
    (**(code **)*puVar9)(puVar9);
  }
  param_2[1] = (long)puVar7;
  lVar3 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(param_1 + 0x18);
  if ((ulong)(*(long *)(lVar3 + 0x18) - lVar4) < 4) {
    *(undefined1 *)(param_1 + 8) = 1;
  }
  else {
    iVar5 = *(int *)(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 0x28) + lVar4);
    *(long *)(param_1 + 0x18) = lVar4 + 4;
    FUN_00408750(param_2,iVar5);
    if (iVar5 != 0) {
      iVar8 = 0;
      puVar1 = PTR_DAT_04bc0ec8 + 0x10;
      ppuVar2 = (undefined **)(PTR_DAT_04bc0fa0 + 0x10);
      while (*(char *)(param_1 + 8) == '\0') {
        local_d0 = 0;
        local_c0[0] = 0;
        local_a0 = (undefined8 *)0x0;
        local_98 = (undefined8 *)0x0;
        local_90 = 0;
        local_80 = 0;
        local_78 = 0;
        uStack_a8 = 0x10;
        local_70 = 0;
        uStack_68 = 0;
        local_d8 = ppuVar2;
        local_c8 = puVar1;
        local_b0 = local_c0;
        FUN_003fd980(param_1,&local_d8);
        cVar6 = *(char *)(param_1 + 8);
        puVar7 = (undefined8 *)param_2[1];
        if (cVar6 == '\0') {
          if (puVar7 == (undefined8 *)param_2[2]) {
            FUN_01c6ee20(param_2,&local_d8);
          }
          else {
            FUN_01c6e580(puVar7);
            *puVar7 = &PTR_FUN_04a42c70;
            param_2[1] = (long)(puVar7 + 0xf);
          }
        }
        else {
          puVar9 = (undefined8 *)*param_2;
          while (puVar7 != puVar9) {
            puVar7 = puVar7 + -0xf;
            (**(code **)*puVar7)(puVar7);
          }
          param_2[1] = (long)puVar9;
        }
        local_d8 = &PTR_FUN_04a42c50;
        if (local_80 != 0) {
          local_d8 = &PTR_FUN_04a42c50;
          local_78 = local_80;
          FUN_00187e4c();
        }
        puVar9 = local_a0;
        puVar7 = local_98;
        if (local_a0 != (undefined8 *)0x0) {
          while (puVar7 != puVar9) {
            puVar7 = puVar7 + -0xc;
            (**(code **)*puVar7)(puVar7);
          }
          local_98 = puVar9;
          FUN_00187e4c(local_a0);
        }
        local_c8 = PTR_DAT_04bc0ec8 + 0x10;
        FUN_0018b1a0(&local_c8);
        if (cVar6 != '\0') {
          return;
        }
        iVar8 = iVar8 + 1;
        if (iVar8 == iVar5) {
          return;
        }
      }
    }
  }
  return;
}


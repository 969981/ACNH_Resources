
void FUN_003fd670(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  char cVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  int iVar14;
  long *plVar15;
  undefined *local_c0;
  undefined1 local_b8;
  undefined *local_b0;
  undefined1 local_a8 [16];
  undefined1 *local_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined1 local_80 [16];
  undefined1 *local_70;
  undefined8 uStack_68;
  
  puVar6 = (undefined8 *)*param_2;
  puVar12 = (undefined8 *)param_2[1];
  while (puVar12 != puVar6) {
    puVar12 = puVar12 + -0xc;
    (**(code **)*puVar12)(puVar12);
  }
  param_2[1] = (long)puVar6;
  lVar7 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(param_1 + 0x18);
  if ((ulong)(*(long *)(lVar7 + 0x18) - lVar8) < 4) {
    *(undefined1 *)(param_1 + 8) = 1;
  }
  else {
    iVar9 = *(int *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 0x28) + lVar8);
    *(long *)(param_1 + 0x18) = lVar8 + 4;
    FUN_0040a490(param_2,iVar9);
    puVar11 = PTR_DAT_04bc0ec8;
    if (iVar9 != 0) {
      iVar14 = 0;
      puVar1 = PTR_DAT_04bc0ec8 + 0x10;
      puVar2 = PTR_DAT_04bc0fb0 + 0x10;
      puVar3 = PTR_DAT_04bc0fb8 + 0x10;
      while (*(char *)(param_1 + 8) == '\0') {
        local_b8 = 0;
        local_a8[0] = 0;
        local_80[0] = 0;
        uStack_90 = 0x10;
        uStack_68 = 0x10;
        local_c0 = puVar2;
        local_b0 = puVar1;
        local_98 = local_a8;
        local_88 = puVar1;
        local_70 = local_80;
        FUN_003fd300(param_1,&local_c0);
        puVar5 = PTR_DAT_04bc0fb8;
        cVar10 = *(char *)(param_1 + 8);
        plVar13 = (long *)param_2[1];
        if (cVar10 == '\0') {
          if (plVar13 == (long *)param_2[2]) {
            FUN_0040a660(param_2,&local_c0);
          }
          else {
            puVar4 = puVar11 + 0x10;
            plVar13[2] = (long)puVar4;
            *plVar13 = (long)(puVar5 + 0x10);
            *(undefined1 *)(plVar13 + 1) = local_b8;
            *(undefined1 *)(plVar13 + 3) = 0;
            plVar13[5] = (long)(plVar13 + 3);
            plVar13[6] = 0x10;
            FUN_0018b070(plVar13 + 2,local_98,0xffffffffffffffff);
            *(undefined1 *)(plVar13 + 8) = 0;
            plVar13[7] = (long)puVar4;
            plVar13[10] = (long)(plVar13 + 8);
            plVar13[0xb] = 0x10;
            FUN_0018b070(plVar13 + 7,local_70,0xffffffffffffffff);
            *plVar13 = (long)(PTR_DAT_04bc0fb0 + 0x10);
            param_2[1] = (long)(plVar13 + 0xc);
          }
        }
        else {
          plVar15 = (long *)*param_2;
          while (plVar13 != plVar15) {
            plVar13 = plVar13 + -0xc;
            (**(code **)*plVar13)(plVar13);
          }
          param_2[1] = (long)plVar15;
        }
        puVar5 = puVar11 + 0x10;
        local_c0 = puVar3;
        local_88 = puVar5;
        FUN_0018b1a0(&local_88);
        local_b0 = puVar5;
        FUN_0018b1a0(&local_b0);
        if (cVar10 != '\0') {
          return;
        }
        iVar14 = iVar14 + 1;
        if (iVar14 == iVar9) {
          return;
        }
      }
    }
  }
  return;
}


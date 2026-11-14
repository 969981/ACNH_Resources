
void FUN_016d43e0(undefined8 *param_1)

{
  undefined **ppuVar1;
  byte *pbVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  undefined **local_80;
  char *local_78;
  undefined4 local_70;
  char local_6c [7];
  undefined1 local_65;
  
  if (DAT_05574040 != 0) {
    puVar9 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar7 = (**(code **)(*(long *)*puVar9 + 0x38))();
      lVar12 = 0;
      if (lVar7 != 0) {
        lVar12 = lVar7 + 0x70;
      }
      goto LAB_016d4460;
    }
    if (puVar9 != (undefined8 *)0x0) {
      lVar12 = 0;
      if ((long *)puVar9[0x26] != (long *)0x0) {
        lVar12 = (**(code **)(*(long *)puVar9[0x26] + 0x38))();
      }
      goto LAB_016d4460;
    }
  }
  lVar12 = 0;
LAB_016d4460:
  puVar5 = PTR_DAT_04bc27f0;
  iVar6 = 0;
  lVar7 = 0;
  if (lVar12 != 0) {
    lVar7 = lVar12 + 0x2181a0;
  }
  iVar11 = 0;
  do {
    lVar12 = lVar7 + 0x70 + (long)iVar6 * 0x38;
    if ((*(long **)(lVar12 + 0x28) == (long *)0x0) ||
       (puVar9 = (undefined8 *)**(long **)(lVar12 + 0x28), puVar9 == (undefined8 *)0x0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)*puVar9)();
      uVar8 = uVar8 & 0xffffffff;
    }
    pbVar2 = (byte *)(*(long *)(lVar12 + 0x10) + *(long *)(lVar12 + 8));
    uVar10 = (ulong)*pbVar2;
    if (((uVar10 < 0x23) && (bVar3 = pbVar2[1], bVar3 <= (byte)puVar5[uVar10])) &&
       (((uint)(&DAT_053e6eb8)[uVar10] >> (ulong)(bVar3 & 0x1f) & 1) != 0)) {
      local_65 = 0;
      local_70 = 8;
      local_6c[0] = '\0';
      local_80 = &PTR_LAB_04908da0;
      pbVar2 = (byte *)(*(long *)(lVar12 + 0x10) + *(long *)(lVar12 + 8));
      local_78 = local_6c;
      FUN_038d1270(&local_80,"-----");
      uVar10 = (ulong)*pbVar2;
      if (uVar10 < 0x23) {
        FUN_038d1270(&local_80,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + uVar10 * 8 + 0xb0),
                     pbVar2[1]);
      }
      (**(code **)*param_1)(param_1,iVar11,&local_80);
    }
    if ((((uVar8 & 1) != 0) && (*(long *)(lVar12 + 0x28) != 0)) &&
       (puVar9 = *(undefined8 **)(*(long *)(lVar12 + 0x28) + 8), puVar9 != (undefined8 *)0x0)) {
      (**(code **)*puVar9)();
    }
    puVar4 = PTR_DAT_04bb3768;
    iVar11 = iVar11 + 1;
    iVar6 = iVar6 + 1;
  } while (iVar11 != 8);
  local_65 = 0;
  local_70 = 8;
  local_6c[0] = '\0';
  ppuVar1 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
  local_80 = ppuVar1;
  local_78 = local_6c;
  FUN_021d62e0(&local_80,8);
  if ((*local_78 != '\0') && (iVar6 = FUN_021d7e50(&local_80), iVar6 == 8)) {
    (**(code **)*param_1)(param_1,8,&local_80);
  }
  local_70 = 8;
  local_65 = 0;
  local_6c[0] = '\0';
  local_80 = ppuVar1;
  local_78 = local_6c;
  FUN_021d62e0(&local_80,9);
  if ((*local_78 != '\0') && (iVar6 = FUN_021d7e50(&local_80), iVar6 == 9)) {
    (**(code **)*param_1)(param_1,9,&local_80);
  }
  local_65 = 0;
  local_70 = 8;
  local_6c[0] = '\0';
  local_80 = (undefined **)(puVar4 + 0x10);
  local_78 = local_6c;
  FUN_021d62e0(&local_80,10);
  if ((*local_78 != '\0') && (iVar6 = FUN_021d7e50(&local_80), iVar6 == 10)) {
    (**(code **)*param_1)(param_1,10,&local_80);
  }
  local_70 = 8;
  local_65 = 0;
  local_6c[0] = '\0';
  local_80 = (undefined **)(puVar4 + 0x10);
  local_78 = local_6c;
  FUN_021d62e0(&local_80,0xb);
  if ((*local_78 != '\0') && (iVar6 = FUN_021d7e50(&local_80), iVar6 == 0xb)) {
    (**(code **)*param_1)(param_1,0xb,&local_80);
  }
  local_65 = 0;
  local_70 = 8;
  local_6c[0] = '\0';
  local_80 = (undefined **)(puVar4 + 0x10);
  local_78 = local_6c;
  FUN_021d62e0(&local_80,0xc);
  if ((*local_78 != '\0') && (iVar6 = FUN_021d7e50(&local_80), iVar6 == 0xc)) {
    (**(code **)*param_1)(param_1,0xc,&local_80);
  }
  local_70 = 8;
  local_65 = 0;
  local_6c[0] = '\0';
  local_80 = (undefined **)(puVar4 + 0x10);
  local_78 = local_6c;
  FUN_021d62e0(&local_80,0xd);
  if ((*local_78 != '\0') && (iVar6 = FUN_021d7e50(&local_80), iVar6 == 0xd)) {
    (**(code **)*param_1)(param_1,0xd,&local_80);
  }
  local_65 = 0;
  local_70 = 8;
  local_6c[0] = '\0';
  local_80 = (undefined **)(puVar4 + 0x10);
  local_78 = local_6c;
  FUN_021d62e0(&local_80,0xe);
  if ((*local_78 != '\0') && (iVar6 = FUN_021d7e50(&local_80), iVar6 == 0xe)) {
    (**(code **)*param_1)(param_1,0xe,&local_80);
  }
  local_70 = 8;
  local_65 = 0;
  local_6c[0] = '\0';
  local_80 = (undefined **)(puVar4 + 0x10);
  local_78 = local_6c;
  FUN_021d62e0(&local_80,0xf);
  if ((*local_78 != '\0') && (iVar6 = FUN_021d7e50(&local_80), iVar6 == 0xf)) {
    (**(code **)*param_1)(param_1,0xf,&local_80);
  }
  local_65 = 0;
  local_70 = 8;
  local_80 = (undefined **)(puVar4 + 0x10);
  local_6c[0] = '\0';
  local_78 = local_6c;
  FUN_021d62e0(&local_80,0x10);
  if ((*local_78 != '\0') && (iVar6 = FUN_021d7e50(&local_80), iVar6 == 0x10)) {
    (**(code **)*param_1)(param_1,0x10,&local_80);
  }
  return;
}


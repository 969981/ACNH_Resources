
void FUN_02e08980(long param_1,uint param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined5 uVar8;
  undefined3 uVar9;
  undefined4 uVar10;
  char cVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  undefined5 local_80;
  undefined3 uStack_7b;
  undefined4 local_78;
  char local_74;
  undefined *local_70;
  undefined4 local_68;
  
  if (4 < (int)param_2) {
    return;
  }
  plVar15 = (long *)(*(long *)(param_1 + 0x210) + 0x578);
  plVar5 = plVar15 + param_2;
  if (4 < param_2) {
    plVar5 = plVar15;
  }
  lVar16 = *plVar5;
  if (lVar16 == 0) {
    return;
  }
  uVar12 = 3;
  if (param_2 != 4) {
    uVar12 = param_2;
  }
  if (*(byte *)(param_1 + 0x1f8) < 8) {
    local_70 = (undefined *)CONCAT71(local_70._1_7_,*(byte *)(param_1 + 0x1f8));
    lVar13 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_70,1);
    if (lVar13 != 0) {
      FUN_02613254(&local_80,lVar13,uVar12);
      goto LAB_02e08a24;
    }
  }
  local_78 = 0;
  local_74 = '\0';
  local_80 = 0;
  uStack_7b = 0;
LAB_02e08a24:
  cVar11 = local_74;
  uVar10 = local_78;
  uVar9 = uStack_7b;
  uVar8 = local_80;
  plVar15 = (long *)**(undefined8 **)(lVar16 + 0x2f0);
  if (plVar15 != (long *)0x0) {
    uVar17 = 0x300000000;
    if (local_74 != '\0') {
      uVar17 = CONCAT35(uStack_7b,local_80);
    }
    uVar4 = 0;
    if (local_74 != '\0') {
      uVar4 = local_78;
    }
    uVar12 = FUN_02612f30(param_1 + 0x1f8,uVar17,uVar4);
    if (((*(long *)PTR_DAT_04bb46f0 == 0) ||
        (uVar14 = FUN_0261d530(*(long *)PTR_DAT_04bb46f0,uVar12), (uVar14 & 1) == 0)) ||
       ((uVar12 & 0xfe000000) == 0)) {
      local_70 = PTR_DAT_04bc4f00 + 0x10;
      local_68 = 0x14;
      (**(code **)(*plVar15 + 0x18))(plVar15,&local_70);
      uVar17 = 0x3f800000;
    }
    else {
      local_70 = PTR_DAT_04bc4f00 + 0x10;
      local_68 = 0x14;
      (**(code **)(*plVar15 + 0x18))(plVar15,&local_70);
      uVar17 = 0;
    }
    (**(code **)(plVar15[3] + 0x158))(uVar17,plVar15[1]);
  }
  uVar17 = 0x300000000;
  if (cVar11 != '\0') {
    uVar17 = CONCAT35(uVar9,uVar8);
  }
  uVar4 = 0;
  if (cVar11 != '\0') {
    uVar4 = uVar10;
  }
  uVar12 = FUN_02613470(param_1 + 0x1f8,uVar17,uVar4);
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x210) + 0x578);
  puVar6 = puVar1 + param_2;
  if (4 < param_2) {
    puVar6 = puVar1;
  }
  plVar15 = (long *)*puVar6;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x140))(plVar15,uVar12 & 1,0);
  }
  bVar7 = *(byte *)((long)plVar15 + 0x2c2);
  bVar3 = bVar7 | 2;
  if ((*(byte *)((long)plVar15 + 0x2c3) & 1) == 0) {
    bVar3 = bVar7 & 0xfe;
  }
  bVar2 = bVar7 | 1;
  if ((*(byte *)((long)plVar15 + 0x2c3) & 1) != 0) {
    bVar2 = bVar7 & 0xfd;
  }
  if ((uVar12 & 1) != 0) {
    bVar3 = bVar2;
  }
  *(byte *)((long)plVar15 + 0x2c2) = bVar3;
  return;
}


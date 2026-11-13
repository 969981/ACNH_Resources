
void FUN_01029100(uint *param_1,uint *param_2)

{
  undefined *puVar1;
  byte *pbVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  uint local_7c;
  undefined8 local_78;
  undefined *local_70;
  char *pcStack_68;
  
  *param_1 = 0;
  *param_2 = 0;
  lVar11 = *(long *)PTR_DAT_04bb32f0;
  if (lVar11 != 0) {
    local_70 = (undefined *)((ulong)local_70 & 0xffffffff00000000);
    local_78 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    uVar7 = FUN_0087d754(lVar11,&local_70,&local_78,0);
    if ((uVar7 & 1) != 0) {
      *param_1 = *param_1 | 1;
    }
    local_70._0_4_ = 1;
    uVar7 = FUN_0087d754(lVar11,&local_70,&local_78,0);
    if ((uVar7 & 1) != 0) {
      *param_1 = *param_1 | 2;
    }
    local_70._0_4_ = 2;
    uVar7 = FUN_0087d754(lVar11,&local_70,&local_78,0);
    if ((uVar7 & 1) != 0) {
      *param_1 = *param_1 | 4;
    }
    local_70._0_4_ = 3;
    uVar7 = FUN_0087d754(lVar11,&local_70,&local_78,0);
    if ((uVar7 & 1) != 0) {
      *param_1 = *param_1 | 8;
    }
    local_70._0_4_ = 4;
    uVar7 = FUN_0087d754(lVar11,&local_70,&local_78,0);
    if ((uVar7 & 1) != 0) {
      *param_1 = *param_1 | 0x10;
    }
    local_70._0_4_ = 5;
    uVar7 = FUN_0087d754(lVar11,&local_70,&local_78,0);
    if ((uVar7 & 1) != 0) {
      *param_1 = *param_1 | 0x20;
    }
    local_70._0_4_ = 6;
    uVar7 = FUN_0087d754(lVar11,&local_70,&local_78,0);
    if ((uVar7 & 1) != 0) {
      *param_1 = *param_1 | 0x40;
    }
    local_70 = (undefined *)CONCAT44(local_70._4_4_,7);
    uVar7 = FUN_0087d754(lVar11,&local_70,&local_78,0);
    if ((uVar7 & 1) != 0) {
      *param_1 = *param_1 | 0x80;
    }
    puVar5 = PTR_DAT_04bc2a20;
    puVar4 = PTR_DAT_04bc27f0;
    uVar12 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      local_7c = uVar12;
      lVar8 = FUN_0265c2a0(uVar12);
      if (lVar8 != 0) {
        if ((*(long **)(lVar8 + 0x28) == (long *)0x0) ||
           (puVar9 = (undefined8 *)**(long **)(lVar8 + 0x28), puVar9 == (undefined8 *)0x0)) {
          uVar7 = 0;
        }
        else {
          uVar7 = (**(code **)*puVar9)();
          uVar7 = uVar7 & 0xffffffff;
        }
        pbVar2 = (byte *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8));
        uVar10 = (ulong)*pbVar2;
        if ((((uVar10 < 0x23) && (bVar3 = pbVar2[1], bVar3 <= (byte)puVar4[uVar10])) &&
            ((*(uint *)(puVar5 + uVar10 * 4) >> (ulong)(bVar3 & 0x1f) & 1) != 0)) &&
           (uVar10 = FUN_0087d624(lVar11,&local_78,&local_7c,0), (uVar10 & 1) != 0)) {
          pcStack_68 = "MoveInCompletion";
          local_70 = puVar1;
          iVar6 = FUN_02749340(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x1267c,&local_70);
          if ((iVar6 != 0) &&
             (iVar6 = (int)*(char *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x1267a),
             local_70 = (undefined *)CONCAT44(local_70._4_4_,iVar6), iVar6 != 1)) {
            *param_2 = *param_2 | 1 << (ulong)(uVar12 & 0x1f);
          }
        }
        if ((((uVar7 & 1) != 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
           (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 8), puVar9 != (undefined8 *)0x0)) {
          (**(code **)*puVar9)();
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != 10);
  }
  return;
}


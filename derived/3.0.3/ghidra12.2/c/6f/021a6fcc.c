
undefined8 FUN_021a6fcc(undefined4 *param_1,uint param_2,uint *param_3,byte *param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  byte bVar14;
  undefined8 uVar15;
  undefined *local_70;
  char *pcStack_68;
  
  lVar10 = FUN_0265c2a0(param_2);
  if (lVar10 == 0) {
    return 0;
  }
  if ((*(long **)(lVar10 + 0x28) == (long *)0x0) ||
     (puVar11 = (undefined8 *)**(long **)(lVar10 + 0x28), puVar11 == (undefined8 *)0x0)) {
    uVar5 = 1;
  }
  else {
    uVar5 = (**(code **)*puVar11)();
    uVar5 = uVar5 ^ 1;
  }
  puVar4 = PTR_DAT_04bb2020;
  lVar2 = *(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8);
  if (*(char *)(lVar2 + 0x1267a) == '\0') {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_68 = "MoveInCompletion";
    local_70 = puVar1;
    iVar6 = FUN_02749340(lVar2 + 0x1267c,&local_70);
    if (iVar6 != 0) {
      pcStack_68 = "AbandonedHouse";
      local_70 = puVar1;
      iVar6 = FUN_02749340(*(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8) + 0x1267c,&local_70);
      if (iVar6 != 2) {
        bVar14 = *param_4;
        lVar2 = *(long *)(lVar10 + 8);
        lVar3 = *(long *)(lVar10 + 0x10);
        if (7 < bVar14) {
          bVar14 = 0xff;
        }
        local_70 = (undefined *)CONCAT71(local_70._1_7_,bVar14);
        lVar12 = FUN_025830c0(DAT_055021a0,&local_70,1);
        if (lVar12 != 0) {
          if ((*(long **)(lVar12 + 0x17bb0) == (long *)0x0) ||
             (puVar11 = (undefined8 *)**(long **)(lVar12 + 0x17bb0), puVar11 == (undefined8 *)0x0))
          {
            uVar7 = 1;
          }
          else {
            uVar7 = (**(code **)*puVar11)();
            uVar7 = uVar7 ^ 1;
          }
          uVar8 = FUN_026b318c(lVar3 + lVar2,
                               *(long *)(lVar12 + 0x17b98) + *(long *)(lVar12 + 0x17b90) + 0x1c);
          if ((((uVar7 & 1) == 0) && (*(long *)(lVar12 + 0x17bb0) != 0)) &&
             (puVar11 = *(undefined8 **)(*(long *)(lVar12 + 0x17bb0) + 8),
             puVar11 != (undefined8 *)0x0)) {
            (**(code **)*puVar11)();
          }
          if (-1 < (int)uVar8) {
            pcStack_68 = "HasAcquaintanceship";
            lVar2 = *(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8) + 4;
            lVar3 = lVar2 + (ulong)uVar8 * 0x5f0;
            if (7 < uVar8) {
              lVar3 = lVar2;
            }
            local_70 = puVar4 + 0x10;
            iVar6 = FUN_02746e10(lVar3 + 0x38,&local_70);
            if (iVar6 != 0) {
              lVar2 = *(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8) + 4;
              lVar3 = lVar2 + (ulong)uVar8 * 0x5f0;
              if (7 < uVar8) {
                lVar3 = lVar2;
              }
              pcStack_68 = "Friendship";
              local_70 = puVar4 + 0x10;
              uVar9 = FUN_02746e10(lVar3 + 0x38,&local_70);
              *param_1 = uVar9;
              uVar13 = FUN_0269030c(*(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8),0xffffffff);
              if (((uVar13 & 1) == 0) || ((*param_3 >> (ulong)(param_2 & 0x1f) & 1) != 0)) {
                uVar15 = 2;
              }
              else {
                uVar15 = 1;
              }
              goto LAB_021a7058;
            }
          }
        }
      }
    }
  }
  uVar15 = 0;
LAB_021a7058:
  if ((((uVar5 & 1) == 0) && (*(long *)(lVar10 + 0x28) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x28) + 8), puVar11 != (undefined8 *)0x0)) {
    (**(code **)*puVar11)();
  }
  return uVar15;
}


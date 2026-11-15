
void FUN_021a7710(uint *param_1,uint *param_2,uint *param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  uint uVar10;
  uint local_74;
  undefined *local_70;
  char *pcStack_68;
  
  cVar2 = *(char *)(DAT_04da6480 + 0x4064);
  *param_1 = 0;
  *param_2 = 0;
  *param_3 = 0;
  if ('\x04' < cVar2) {
    uVar10 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      local_74 = uVar10;
      lVar5 = FUN_0265c2a0(uVar10);
      if (lVar5 != 0) {
        if ((*(long **)(lVar5 + 0x28) == (long *)0x0) ||
           (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x28), puVar6 == (undefined8 *)0x0)) {
          uVar7 = 0;
        }
        else {
          uVar7 = (**(code **)*puVar6)();
          uVar7 = uVar7 & 0xffffffff;
        }
        pcStack_68 = "MoveInCompletion";
        local_70 = puVar1;
        iVar4 = FUN_02749340(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8) + 0x1267c,&local_70);
        if (iVar4 != 0) {
          iVar4 = (int)*(char *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8) + 0x1267a);
          local_70 = (undefined *)CONCAT44(local_70._4_4_,iVar4);
          if (iVar4 == 0) {
            uVar8 = FUN_0087d624(param_4,param_5,&local_74,1);
            uVar3 = 1 << (ulong)(uVar10 & 0x1f);
            puVar9 = param_2;
            if ((uVar8 & 1) != 0) {
              *param_1 = *param_1 | uVar3;
              uVar8 = FUN_0269030c(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8),0xffffffff);
              puVar9 = param_3;
              if ((uVar8 & 1) == 0) goto LAB_021a7870;
            }
            *puVar9 = *puVar9 | uVar3;
          }
        }
LAB_021a7870:
        if ((((uVar7 & 1) != 0) && (*(long *)(lVar5 + 0x28) != 0)) &&
           (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x28) + 8), puVar6 != (undefined8 *)0x0)) {
          (**(code **)*puVar6)();
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != 10);
    FUN_021ec000(param_2);
    FUN_021ebc40(param_2,1,0,0);
  }
  return;
}


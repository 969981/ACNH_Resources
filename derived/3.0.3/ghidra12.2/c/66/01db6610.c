
undefined8
FUN_01db6610(long *param_1,undefined8 param_2,long param_3,undefined8 param_4,long *param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar2 = FUN_01ce3b00(param_1[5],param_1[6],param_4,0);
  puVar1 = PTR_DAT_04bc1048;
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    lVar4 = FUN_01db67fc(*(undefined8 *)PTR_DAT_04bc1048,param_1[5]);
    param_1[0x1080] = lVar4;
    puVar5 = (undefined8 *)FUN_01db69d8(*(undefined8 *)puVar1,param_1[6]);
    uVar3 = 0;
    param_1[0x1081] = (long)puVar5;
    if ((puVar5 != (undefined8 *)0x0) &&
       (puVar9 = (undefined8 *)param_1[0x1080], puVar9 != (undefined8 *)0x0)) {
      lVar6 = *(long *)puVar1;
      lVar8 = *(long *)(lVar6 + 0x10);
      lVar4 = lVar6 + 8;
      if (lVar8 == lVar4) {
        local_58 = 0;
        local_68 = 0;
        uStack_60 = 0;
        uStack_50 = 0;
      }
      else {
        lVar10 = (long)puVar9 + (long)*(int *)(lVar6 + 0x1c);
        lVar7 = lVar8;
        do {
          if (lVar7 == lVar10) {
            local_68 = *puVar9;
            goto LAB_01db670c;
          }
          lVar7 = *(long *)(lVar7 + 8);
        } while (lVar7 != lVar4);
        local_68 = 0;
LAB_01db670c:
        lVar7 = lVar8;
        do {
          if (lVar7 == lVar10) {
            uStack_60 = puVar9[1];
            goto LAB_01db6730;
          }
          lVar7 = *(long *)(lVar7 + 8);
        } while (lVar7 != lVar4);
        uStack_60 = 0;
LAB_01db6730:
        lVar6 = (long)puVar5 + (long)*(int *)(lVar6 + 0x1c);
        lVar10 = lVar8;
        do {
          if (lVar10 == lVar6) {
            local_58 = *puVar5;
            goto LAB_01db6760;
          }
          lVar10 = *(long *)(lVar10 + 8);
        } while (lVar10 != lVar4);
        local_58 = 0;
LAB_01db6760:
        do {
          if (lVar8 == lVar6) {
            uStack_50 = puVar5[1];
            goto LAB_01db6780;
          }
          lVar8 = *(long *)(lVar8 + 8);
        } while (lVar8 != lVar4);
        uStack_50 = 0;
      }
LAB_01db6780:
      local_70 = 0;
      local_48 = 1;
      local_78 = param_3;
      uVar2 = FUN_01d9dfc0(*(undefined8 *)(DAT_0537d558 + 8),param_2,&local_78,param_1 + 1,0);
      uVar3 = 0;
      if ((uVar2 & 1) != 0) {
        if (param_5 != (long *)0x0) {
          lVar4 = param_5[3];
          *param_1 = (long)param_5;
          *(char *)(param_1 + 4) = (char)lVar4;
          *param_5 = (long)param_1;
          lVar4 = *param_1;
          *(undefined8 *)(lVar4 + 8) = 0;
          *(undefined8 *)(lVar4 + 0x10) = 0;
        }
        uVar3 = 1;
        param_1[7] = (long)&LAB_01db6bc0;
        param_1[8] = 0;
      }
    }
  }
  return uVar3;
}


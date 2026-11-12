
void FUN_0072c6b0(uint *param_1,uint param_2,long param_3,long *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  undefined1 *__src;
  undefined *local_120;
  undefined1 *puStack_118;
  int local_110;
  undefined1 auStack_10c [127];
  undefined1 local_8d;
  undefined *local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  if ((int)param_2 < (int)*param_1) {
    if (param_2 <= *param_1) {
      lVar6 = (long)(int)param_2;
      do {
        puVar4 = *(undefined8 **)(*(long *)(param_1 + 2) + lVar6 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar6 = lVar6 + 1;
        *puVar4 = *(undefined8 *)(param_1 + 4);
        *(undefined8 **)(param_1 + 4) = puVar4;
      } while (lVar6 < (int)*param_1);
      *param_1 = param_2;
    }
  }
  else {
    local_110 = 0x80;
    local_8d = 0;
    local_120 = PTR_DAT_04bb2e90 + 0x10;
    puStack_118 = auStack_10c;
    (**(code **)(*param_4 + 0x18))(param_4);
    __src = (undefined1 *)param_4[1];
    if (auStack_10c != __src) {
      (**(code **)(*param_4 + 0x18))(param_4);
      lVar6 = 0;
      do {
        if (*(char *)(param_4[1] + lVar6) == '\0') goto LAB_0072c7d0;
        lVar2 = param_4[1] + lVar6;
        if (*(char *)(lVar2 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_0072c7d0;
        }
        if (*(char *)(lVar2 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_0072c7d0;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_0072c7d0:
      iVar5 = (int)lVar6;
      if (local_110 <= (int)lVar6) {
        iVar5 = local_110 + -1;
      }
      memcpy(auStack_10c,__src,(long)iVar5);
      auStack_10c[iVar5] = 0;
    }
    puVar3 = PTR_PTR_04bb2238;
    local_120 = PTR_DAT_04bb2d88 + 0x10;
    iVar5 = param_2 - *param_1;
    if (iVar5 != 0 && (int)*param_1 <= (int)param_2) {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      do {
        uStack_80 = *(undefined8 *)(param_3 + 8);
        uStack_70 = *(undefined8 *)(puVar3 + 8);
        local_58 = *(undefined4 *)(param_3 + 0x20);
        puVar4 = *(undefined8 **)(param_1 + 4);
        if (puVar4 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 4) = *puVar4;
        }
        local_88 = puVar1;
        local_78 = puVar1;
        local_68 = puVar1;
        uStack_60 = uStack_70;
        FUN_0072a900(puVar4,&local_88,&local_120,0);
        *puVar4 = &PTR_FUN_04901088;
        if ((int)*param_1 < (int)param_1[1]) {
          *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)*param_1 * 8) = puVar4;
          *param_1 = *param_1 + 1;
        }
        iVar5 = iVar5 + -1;
        *(uint *)(puVar4 + 4) = *(uint *)(puVar4 + 4) & 0xfffffffc;
      } while (iVar5 != 0);
    }
  }
  return;
}


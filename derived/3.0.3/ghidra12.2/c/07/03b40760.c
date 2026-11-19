
void FUN_03b40760(undefined8 *param_1,uint *param_2,int param_3,int param_4,char *param_5,
                 byte param_6)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  long lVar6;
  int iVar7;
  undefined8 local_90;
  int local_88;
  undefined4 local_84;
  long local_80;
  int local_78;
  int local_74;
  int iStack_70;
  byte local_6c;
  int local_64;
  
  uVar3 = *param_2;
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      lVar6 = *(long *)(param_2 + 2);
      if (lVar6 != 0) {
        lVar2 = lVar6 + (long)(int)uVar4 * 0x10;
        local_64 = 0;
        iStack_70 = *(int *)(lVar2 + 8);
        piVar5 = (int *)(lVar2 + 0xc);
        if (*piVar5 == 0) {
          if (param_3 <= param_4 || *param_5 == '\0') {
            if (param_3 <= iStack_70 && iStack_70 < param_4) goto LAB_03b408b8;
          }
          else if ((param_3 <= iStack_70 && iStack_70 <= *(int *)(param_5 + 8)) ||
                  ((iStack_70 < param_4 && (*(int *)(param_5 + 4) <= iStack_70)))) {
LAB_03b408b8:
            local_64 = 1;
          }
        }
        else {
          iVar1 = *piVar5 + iStack_70;
          if (param_3 <= param_4 || *param_5 == '\0') {
            if (param_3 <= iStack_70 && iStack_70 < param_4) {
              local_64 = 2;
            }
            if (((iVar1 <= *(int *)((long)param_1 + 0x2c)) || (iVar1 < param_3)) ||
               (param_4 <= iVar1)) goto LAB_03b40900;
          }
          else {
            if (iStack_70 < param_3 || *(int *)(param_5 + 8) < iStack_70) {
              iVar7 = *(int *)((long)param_1 + 0x2c);
              if ((iStack_70 < param_4) && (*(int *)(param_5 + 4) <= iStack_70)) goto LAB_03b408c4;
            }
            else {
              iVar7 = *(int *)((long)param_1 + 0x2c);
LAB_03b408c4:
              local_64 = 2;
            }
            if ((iVar1 <= iVar7) ||
               (((iVar1 < param_3 || (*(int *)(param_5 + 8) < iVar1)) &&
                ((param_4 <= iVar1 || (iVar1 < *(int *)(param_5 + 4))))))) goto LAB_03b40900;
          }
          local_64 = 3;
        }
LAB_03b40900:
        if (local_64 != 0) {
          local_90 = *param_1;
          local_88 = local_64;
          local_84 = *(undefined4 *)(lVar6 + (long)(int)uVar4 * 0x10);
          local_80 = (ulong)*(uint *)(lVar2 + 4) + lVar2 + 4;
          local_78 = *(int *)(lVar2 + 8);
          if (local_64 == 3) {
            local_78 = *piVar5 + local_78;
          }
          local_74 = *piVar5;
          iStack_70 = param_4 - iStack_70;
          local_6c = param_6 & 1;
          (*(code *)param_1[2])(&local_90,param_1[4]);
          uVar3 = *param_2;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  return;
}


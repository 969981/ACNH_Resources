
void FUN_00321f60(long param_1,long param_2,byte param_3,long param_4,uint param_5,byte param_6,
                 undefined8 param_7,long param_8,code *param_9,code *param_10)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  bool bVar4;
  long lVar5;
  uint *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long lStack_88;
  undefined1 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  byte local_6c;
  long local_68;
  
  lVar5 = *(long *)(param_4 + 0x240);
  if (0 < *(int *)(lVar5 + 0x88)) {
    lVar9 = 0;
    do {
      if ((*(byte *)(*(long *)(*(long *)(lVar5 + lVar9 * 8 + 0x90) + 0x10) + 0x829) == (param_3 & 1)
          ) && (lVar8 = *(long *)(param_4 + lVar9 * 8 + 0x4d8), lVar8 != 0)) {
        do {
          if (((*(char *)(*(long *)(lVar8 + 0xa0) + 0x790) == '\0' || *(char *)(lVar8 + 2) == '\0')
              || (*(float *)(lVar8 + 0x6c) <= 0.0)) ||
             ((*(int *)(lVar8 + 0x28) < 1 &&
              ((*(int *)(lVar8 + 0x28) != 0 || (2 < *(int *)(*(long *)(lVar8 + 0x240) + 0x340) - 1U)
               ))))) {
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
          uVar2 = 1 << (ulong)(*(uint *)(lVar8 + 0x490) & 0x1f);
          puVar6 = *(uint **)(*(long *)(param_1 + 0x280) + 0x130);
          if ((*puVar6 & uVar2) == 0) {
            if ((puVar6[1] & uVar2) != 0) {
              lVar5 = 1;
              goto LAB_00322150;
            }
            if ((puVar6[2] & uVar2) != 0) {
              lVar5 = 2;
              goto LAB_00322150;
            }
            if ((puVar6[3] & uVar2) != 0) {
              lVar5 = 3;
              goto LAB_00322150;
            }
            if ((puVar6[4] & uVar2) != 0) {
              lVar5 = 4;
              goto LAB_00322150;
            }
            if ((puVar6[5] & uVar2) != 0) {
              lVar5 = 5;
              goto LAB_00322150;
            }
            if ((puVar6[6] & uVar2) != 0) {
              lVar5 = 6;
              goto LAB_00322150;
            }
            if ((puVar6[7] & uVar2) != 0) {
              lVar5 = 7;
              goto LAB_00322150;
            }
            uVar7 = 0;
          }
          else {
            lVar5 = 0;
LAB_00322150:
            uVar7 = *(undefined8 *)(puVar6 + lVar5 * 2 + 8);
          }
          lVar5 = *(long *)(lVar8 + 0x80);
          uVar1 = *(uint *)(param_8 + 0x10);
          *(undefined8 *)(lVar8 + 0x488) = uVar7;
          if (*(long *)(lVar8 + 0x98) == 0) {
            bVar4 = true;
          }
          if ((((!bVar4) && ((uVar1 & *(uint *)(lVar8 + 0x40)) != 0)) && ((uVar2 & param_5) != 0))
             && ((param_9 == (code *)0x0 ||
                 (local_a0 = lVar8, uStack_98 = param_7, uVar3 = (*param_9)(&local_a0),
                 (uVar3 & 1) != 0)))) {
            if (param_10 == (code *)0x0) {
              FUN_0031e430(lVar8,param_2,param_6 & 1,param_7,param_8);
            }
            else {
              uStack_98 = *(undefined8 *)(param_1 + 0x28);
              local_80 = 0;
              local_90 = 0;
              local_7c = *(undefined4 *)(param_8 + 0x14);
              local_70 = *(undefined4 *)(param_1 + 0x38);
              local_a0 = param_2;
              lStack_88 = lVar8;
              local_78 = param_7;
              local_6c = param_6 & 1;
              local_68 = param_8;
              (*param_10)(&local_a0);
            }
          }
          lVar8 = lVar5;
        } while (lVar5 != 0);
        lVar5 = *(long *)(param_4 + 0x240);
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(lVar5 + 0x88));
  }
  return;
}

